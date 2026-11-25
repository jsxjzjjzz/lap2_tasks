#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    int n;
    cout << "How many persons? ";
    cin >> n;

    ofstream f("persons.txt");
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        f << name << endl << age << endl;
    }
    f.close();

    vector<Person> v;
    ifstream in("persons.txt");
    Person p;
    while (getline(in, p.name) && (in >> p.age)) {
        in.ignore();
        v.push_back(p);
    }
    in.close();
    if (v.empty()) return 0;

    Person younger = v[0], older = v[0];
    for (Person x : v) {
        if (x.age < younger.age) younger = x;
        if (x.age > older.age) older = x;
    }

    ofstream r("results.txt");
    r << "Younger: " << younger.name << ", " << younger.age << endl;
    r << "Older: " << older.name << ", " << older.age << endl;
    r.close();
    return 0;
}
