#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

class ChessBoard {
public:
    enum class Color { WHITE,
        BLACK };

    class Piece {
    public:
        Piece(Color color) : color(color) {}
        virtual ~Piece() {}

        Color color;
        std::string color_string() const {
            if (color == Color::WHITE)
                return "white";
            else
                return "black";
        }

        /// Return color and type of the chess piece
        virtual std::string type() const = 0;

        /// Returns true if the given chess piece move is valid
        virtual bool valid_move(int from_x, int from_y, int to_x, int to_y) const = 0;

        virtual string shortName() const = 0;
    };

    class King : public Piece {
    public:
        King(Color color) : Piece(color) {}

        string type() const override{
            return color_string() + " king";
        }

        bool valid_move(int from_x, int from_y, int to_x, int to_y) const override {
            if(from_y == 0 && (to_x > 0 || to_x < 7)) {
                return (from_x - to_x == 1 && (from_y + 1 == to_y || from_y - to_y == 0)) ||
                       (from_x + 1 == to_x && (from_y + 1 == to_y || from_y - to_y == 0)) ||
                       (from_x - to_x == 0 && (from_y + 1 == to_y || from_y - to_y == 0));
            } else if(from_y == 7 && (to_x > 0 || to_x < 7)) {
                return (from_x - to_x == 1 && (from_y - 1 == to_y || from_y - to_y == 0)) ||
                       (from_x + 1 == to_x && (from_y - 1 == to_y || from_y - to_y == 0)) ||
                       (from_x - to_x == 0 && (from_y - 1 == to_y || from_y - to_y == 0));
            } else if(from_y > 0 && from_y < 7) {
                return (from_x - to_x == 1 && (from_y + 1 == to_y || from_y - 1 == to_y || from_y - to_y == 0)) ||
                       (from_x + 1 == to_x && (from_y + 1 == to_y || from_y - 1 == to_y || from_y - to_y == 0)) ||
                       (from_x - to_x == 0 && (from_y + 1 == to_y || from_y - 1 == to_y || from_y - to_y == 0));
            }
            return false;
        }

        string shortName() const override {
            if(color_string() == "white") {
                return "W-ki"; // white king
            } else {
                return "B-ki"; // black King
            }
        }
    };

    class Knight : public Piece {
    public:
        Knight(Color color) : Piece(color) {}

        string type() const override {
            return color_string() + " knight";
        }

        bool valid_move(int from_x, int from_y, int to_x, int to_y) const override {
            if(from_y == 0) {
                return (((from_x - 2 == to_x || from_x +2 == to_x) && from_y + 1 == to_y)
                        || ((from_x-1 == to_x || from_x+1 == to_x) && from_y +2 == to_y));
            } else if (from_y == 7) {
                return (((from_x - 2 == to_x || from_x +2 == to_x) && from_y - 1 == to_y)
                        || ((from_x-1 == to_x || from_x+1 == to_x) && from_y -2 == to_y));
            } else if (from_y > 0 && from_y < 7) {
                return (((from_x - 2 == to_x || from_x +2 == to_x) && from_y + 1 == to_y)
                        || ((from_x-1 == to_x || from_x+1 == to_x) && from_y +2 == to_y)
                        || ((from_x-1 == to_x || from_x+1 == to_x) && from_y -2 == to_y));
            }
            return false;
        }

        string shortName() const override {
            if(color_string() == "white") {
                return "W-kn"; // white knight
            } else {
                return "B-kn"; // black knight
            }
        }
    };

    ChessBoard() {
        // Initialize the squares stored in 8 columns and 8 rows:
        squares.resize(8);
        for (auto &square_column : squares)
            square_column.resize(8);
    }

    void printBoard() {
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                cout << "-----";
            }
            cout << "\n";
            for(int k=0; k<8; k++) {
                auto &piece_from = squares[k][i];
                if(piece_from) {
                    cout << "|" << piece_from->shortName();
                } else {
                    cout << "|    ";
                }
                if(k==7) {
                    cout << "|";
                }
            }
            cout << "\n";
            if(i == 7) {
                for(int j=0; j<8; j++) {
                    cout << "-----";
                }
                cout << "\n";
            }
        }
    }

    /// 8x8 squares occupied by 1 or 0 chess pieces
    vector<vector<unique_ptr<Piece>>> squares;

    function<void(const Piece &piece, const string &from, const string &to)> on_piece_move;
    //function<void(const Piece &piece, const string &square)> on_piece_removed;
    //function<void(Color color)> on_lost_game;
    //function<void(const Piece &piece, const string &from, const string &to)> on_piece_move_invalid;
    //function<void(const string &square)> on_piece_move_missing;
    function<void(const vector<vector<unique_ptr<Piece>>> &squares)> after_piece_move;

    /// Move a chess piece if it is a valid move.
    /// Does not test for check or checkmate.
    bool move_piece(const std::string &from, const std::string &to) {
        int from_x = from[0] - 'a';
        int from_y = stoi(string() + from[1]) - 1;
        int to_x = to[0] - 'a';
        int to_y = stoi(string() + to[1]) - 1;
        // cout << "From_x: " << from_x << endl;
        //cout << "From_y: " << from_y << endl;
        auto &piece_from = squares[from_x][from_y];
        if (piece_from) {
            if (piece_from->valid_move(from_x, from_y, to_x, to_y)) {
                if (on_piece_move)
                    on_piece_move(*piece_from, from, to);
                auto &piece_to = squares[to_x][to_y];
                if (piece_to) {
                    if (piece_from->color != piece_to->color) {
                        cout << piece_to->type() << " is being removed from " << to << endl;
                        if (auto king = dynamic_cast<King *>(piece_to.get()))
                            cout << king->color_string() << " lost the game" << endl;
                    } else {
                        // piece in the from square has the same color as the piece in the to square
                        cout << "can not move " << piece_from->type() << " from " << from << " to " << to << endl;
                        return false;
                    }
                }
                piece_to = move(piece_from);
                if(after_piece_move)
                  after_piece_move(squares); // Legger inn printBoard her siden det er her brikkene blir flyttet på, skriver ikkje ut visst funksjonen retunerer false
                return true;
            } else {
                cout << "can not move " << piece_from->type() << " from " << from << " to " << to << endl;
                return false;
            }
        } else {
            cout << "no piece at " << from << endl;
            return false;
        }
    }
};

class ChessBoardPrint {
    ChessBoard &chessboard;
public:
    //ChessBoard chessboard:

    ChessBoardPrint(ChessBoard &chessboard_): chessboard(chessboard_){
        chessboard.on_piece_move = [](const ChessBoard::Piece &piece, const string &from, const string &to) {
            cout << piece.type() << " is moving from " << from << " to " << to << endl;
        };
        /*chessboard.on_piece_removed = [](const ChessBoard::Piece &piece, const string &square) {
            cout << piece.type() << " is being removed from " << square << endl;
        };
        chessboard.on_lost_game = [](ChessBoard::Color color) {
            if (color == ChessBoard::Color::WHITE)
                cout << "Black";
            else
                cout << "White";
            cout << " won the game" << endl;
        };
        chessboard.on_piece_move_invalid = [](const ChessBoard::Piece &piece, const string &from, const string &to) {
            cout << "can not move " << piece.type() << " from " << from << " to " << to << endl;
        };
        chessboard.on_piece_move_missing=[](const string &square) {
            cout << "no piece at " << square << endl;
        };*/
        chessboard.after_piece_move = [](const vector<vector<unique_ptr<ChessBoard::Piece>>> &squares) {
            for(int i=0; i<8; i++) {
                for(int j=0; j<8; j++) {
                    cout << "-----";
                }
                cout << "\n";
                for(int k=0; k<8; k++) {
                    auto &piece_from = squares[k][i];
                    if(piece_from) {
                        cout << "|" << piece_from->shortName();
                    } else {
                        cout << "|    ";
                    }
                    if(k==7) {
                        cout << "|";
                    }
                }
                cout << "\n";
                if(i == 7) {
                    for(int j=0; j<8; j++) {
                        cout << "-----";
                    }
                    cout << "\n";
                }
            }
        };
    }
};

int main() {
    ChessBoard board;

    ChessBoardPrint print(board);

    board.squares[4][0] = make_unique<ChessBoard::King>(ChessBoard::Color::WHITE);
    board.squares[1][0] = make_unique<ChessBoard::Knight>(ChessBoard::Color::WHITE);
    board.squares[6][0] = make_unique<ChessBoard::Knight>(ChessBoard::Color::WHITE);

    board.squares[4][7] = make_unique<ChessBoard::King>(ChessBoard::Color::BLACK);
    board.squares[1][7] = make_unique<ChessBoard::Knight>(ChessBoard::Color::BLACK);
    board.squares[6][7] = make_unique<ChessBoard::Knight>(ChessBoard::Color::BLACK);

    cout << "Invalid moves:" << endl;
    board.move_piece("e3", "e2");
    board.move_piece("e1", "e3");
    board.move_piece("b1", "b2");
    cout << endl;

    cout << "A simulated game:" << endl;
    board.move_piece("e1", "e2");
    board.move_piece("g8", "h6");
    board.move_piece("b1", "c3");
    board.move_piece("h6", "g8");
    board.move_piece("c3", "d5");
    board.move_piece("g8", "h6");
    board.move_piece("d5", "f6");
    board.move_piece("h6", "g8");
    board.move_piece("f6", "e8");
}