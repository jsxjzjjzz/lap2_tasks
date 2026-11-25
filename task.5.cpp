#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt", ios::app);

    char name[20];
    int id;
    float grade;
    char delim = '$';
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "Enter Name: ";
        cin.getline(name, 20);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Grade: ";
        cin >> grade;

        file << name << ", " << id << ", " << grade << " " << delim << "\n";

        cout << "Add more? (y/n): ";
        cin >> choice;
        cin.ignore();
    }

    file.close();
    return 0;
}
