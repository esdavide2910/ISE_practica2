#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        string name = argv[i];
        cout << "Hola, " << name << "!" << endl;
    }
    cout << "Adiós" << endl;
    return 0;
}
