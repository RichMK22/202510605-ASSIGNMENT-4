#include "notepad.h"

void writeFile(string filename) {
    ofstream outFile(filename);

    if (!outFile) {
        cout << "[ERROR] Could not create file: " << filename << endl;
        return;
    }

    cout << "\n[WRITE MODE] Type your text. Enter 'END' to save and stop.\n" << endl;

    string line;

    while (true) {
        getline(cin, line);
        if (line == "END") break;
        outFile << line << "\n";
    }

    outFile.close();
    cout << "\n[SUCCESS] File saved as: " << filename << endl;
}

void readFile(string filename) {
    ifstream inFile(filename);

    if (!inFile) {
        cout << "[ERROR] File not found: " << filename << endl;
        return;
    }

    cout << "\n========== Contents of " << filename << " ==========" << endl;

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    cout << "==========================================\n" << endl;
    inFile.close();
}

void appendFile(string filename) {
    fstream appFile(filename, ios::app);

    if (!appFile) {
        cout << "[ERROR] Could not open file: " << filename << endl;
        return;
    }

    cout << "\n[APPEND MODE] Adding to: " << filename << endl;
    cout << "Type 'END' to save and stop.\n" << endl;

    string line;

    while (true) {
        getline(cin, line);
        if (line == "END") break;
        appFile << line << "\n";
    }

    appFile.close();
    cout << "\n[SUCCESS] Text appended to: " << filename << endl;
}
