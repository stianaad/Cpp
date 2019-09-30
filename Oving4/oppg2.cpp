#include <gtkmm.h>

class Window : public Gtk::Window {
public:
    Gtk::VBox vbox;
    Gtk::Entry entryFirstName;
    Gtk::Button button;
    Gtk::Label label;
    Gtk::Label firstName;
    Gtk::Label lastName;
    Gtk::Entry entryLastName;

    Window() {
        button.set_label("Combine names");
        firstName.set_label("First name");
        lastName.set_label("Last name");
        button.set_sensitive(false);

        vbox.pack_start(firstName);
        vbox.pack_start(entryFirstName);  //Add the widget entry to vbox
        vbox.pack_start(lastName);
        vbox.pack_start(entryLastName);
        vbox.pack_start(button); //Add the widget button to vbox
        vbox.pack_start(label);  //Add the widget label to vbox

        add(vbox);  //Add vbox to window
        show_all(); //Show all widgets

        entryFirstName.signal_changed().connect([this]() {
            if(entryLastName.get_text() != "") {
                button.set_sensitive(true);
            }
            if(entryFirstName.get_text() == "") {
                button.set_sensitive(false);
            }
        });

        entryLastName.signal_changed().connect([this]() {
            if(entryFirstName.get_text() != "") {
                button.set_sensitive(true);
            }
            if(entryLastName.get_text() == "") {
                button.set_sensitive(false);
            }
        });

        /*
        entryFirstName.signal_activate().connect([this]() {
            label.set_text("Entry activated");
        });*/

        button.signal_clicked().connect([this]() {
            label.set_text("Names combined: "+ entryFirstName.get_text() + " " + entryLastName.get_text());
        });
    }
};

int main() {
    Gtk::Main gtk_main;
    Window window;
    window.set_title("Øving 4");
    gtk_main.run(window);
}
