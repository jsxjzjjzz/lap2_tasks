#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("fruit.txt");
    string line;
    while (getline(in, line))
        cout << line << endl;
    in.close();

    ofstream out("fruit.txt", ios::app);
    out << "Fresh Fruits" << endl;
    out.close();
    return 0;
}
