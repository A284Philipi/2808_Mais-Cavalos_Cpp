#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    string casa1, casa2;
    cin >> casa1;
    cin >> casa2;
    if (casa1[0]+2 == casa2[0] || casa1[0]-2 == casa2[0]){
        if (casa1[1]+1 == casa2[1] || casa1[1]-1 == casa2[1]){
            cout << "VALIDO" <<endl;
        }else{
            cout << "INVALIDO" <<endl;
        }
    }else{
        if (casa1[0]+1 == casa2[0] || casa1[0]-1 == casa2[0]){
            if(casa1[1]+2 == casa2[1] || casa1[1]-2 == casa2[1]){
                cout << "VALIDO" <<endl;
            }else{
                cout << "INVALIDO" <<endl;
            }
        }else{
            cout << "INVALIDO" <<endl;
        }
    }
    return 0;
}
