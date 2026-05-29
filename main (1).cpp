#include "notepad.h"

int main() {
    int choice;
    string filename;

    cout << "============================================" << endl;
    cout << "        WELCOME TO SIMPLE NOTEPAD C++       " << endl;
    cout << "============================================" << endl;

    do {
        cout << "\n========= SIMPLE NOTEPAD =========" << endl;
        cout << "  1. Write File (Create / Overwrite)" << endl;
        cout << "  2. Read File  (Display Contents)  " << endl;
        cout << "  3. Append File (Add to File)      " << endl;
        cout << "  4. Exit                           " << endl;
        cout << "===================================" << endl;
        cout << "Enter your choice (1-4): ";
        cin  >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "\nEnter filename to write to: ";
                getline(cin, filename);
                writeFile(filename);
                break;

            case 2:
                cout << "\nEnter filename to read: ";
                getline(cin, filename);
                readFile(filename);
                break;

            case 3:
                cout << "\nEnter filename to append to: ";
                getline(cin, filename);
                appendFile(filename);
                break;

            case 4:
                cout << "\nGoodbye!" << endl;
                break;

            default:
                cout << "\n[WARNING] Invalid choice. Enter a number from 1 to 4." << endl;
                break;
        }

    } while (choice != 4);

    return 0;
}
