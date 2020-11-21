// CrackMeLevel2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
unsigned long encryptor(const char* str)
{
    unsigned long hash = 5381;
    int c;
    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    return hash;
}
string decode(string encoded) {
    for (int i = 0; i < encoded.size(); i++) {
        if (i % 3 == 0) {
            encoded[i] = encoded[i] + 2;
        }
        else if (i % 2 == 0) {
            encoded[i] = encoded[i] - 3;
        }
        else {
            encoded[i] = encoded[i] + 3;
        }
    }
    return encoded;
}
string encode(string encoded) {
    for (int i = 0; i < encoded.size(); i++) {
        if (i%3 ==0) {
            encoded[i] = encoded[i] - 2;
        }
        else if(i % 2 == 0){
            encoded[i] = encoded[i] + 3;
        }
        else {
            encoded[i] = encoded[i] - 3;
        }
       
    }
    return encoded;
}
int main()
{
    std::string password;
    while (1) {
        std::cout << "Enter Password:";
        std::cin >> password;
        if (encryptor(password.c_str()) == 3543242387) {
            int j = encryptor(password.c_str()) + 3;
            if (j == -751724906) {
                j++;
                if (j == -751724905) {
                    cout << decode("Wlxprqq#kdhcwfhnoreu^krswmsq#rkfqwm#tgk") << endl;
                    break;
                }
            }
        }
        else {
            cout << decode("Uorljn^vqzlpa") << endl;
        }
    }
    std::cin.ignore();
    std::cin.get();
}

