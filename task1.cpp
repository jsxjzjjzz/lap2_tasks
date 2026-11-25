#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int id;
    float grade;

    cout << "Full name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    cout << "Grade: ";
    cin >> grade;

    ofstream f("Student.txt");
    f << name << endl << id << endl << grade << endl;
    f.close();
    return 0;
}
