// CrackMeLevel0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Enter Password:\n";
    std::string password;
    std::cin >> password;
    if ((password.compare("WJFIJNWEQJINFJNIQWJNFNJIQWJNFJIQWNSNMIDFQW")) == 0) {
        cout << "CORRECT PASSWORD (Screenshot this 239uirj92j9)" << endl;
    }
    else {
        cout << "WRONG PASSWORD" << endl;

    }
    std::cin.ignore();
    std::cin.get();
}
