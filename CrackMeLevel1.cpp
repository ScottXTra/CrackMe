// CrackMeLevel1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string decode(string encoded) {
    for (int i = 0; i < encoded.size(); i++) {
        encoded[i] = encoded[i]--;
    }
    return encoded;
}
int main()
{
    std::string password;
    while (1) {
        std::cout << "Enter Password:";
        std::cin >> password;
        if ((password.compare(decode("TVQFSTOFBLZQBTTXPSE"))) == 0) {
            cout << decode("UIBU!JT!UIF!DPSSFDU!QBTTXPSE!DPOHSBUT") << endl;
            break;
        }
        else {
            cout << decode("OP!UIBUT!XSPOH") << endl;

        }
    }
    std::cin.ignore();
    std::cin.get();
}

