#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string name;
    if (argc > 1) {
        name = argv[1];
    } else {
        name = "mundo";
    }
    std::cout << "Hola, " << name << "!";
    return 0;
}
