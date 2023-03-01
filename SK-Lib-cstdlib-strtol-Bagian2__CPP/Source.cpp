#pragma warning(disable:4996)

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int b = 10;
    char s[] = "6010IG_2016p";
    char* end;
    long int n;

    n = strtol(s, &end, b);
    cout << "Number in  String = " << s << endl;
    cout << "Number in Long Int = " << n << endl;
    cout << "End String = " << end << endl << endl;

    strcpy(s, "47");
    cout << "Number in  String = " << s << endl;
    n = strtol(s, &end, b);
    cout << "Number in Long Int = " << n << endl;

    if (*end) {
        cout << end;
    } else {
        cout << "Null pointer";
    }

    _getch();
    return 0;
}