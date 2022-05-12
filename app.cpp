#include <iostream>
using namespace std;

int main(){
    char oprtr;
    float numb1, numb2;

    cout << "Masukkan fungsi operator: +, -, *, /: ";
    cin >> oprtr;

    cout << "Masukkan nilai pertama: ";
    cin >> numb1;

    cout << "Masukkan nilai kedua: ";
    cin >> numb2;

    switch(oprtr){
        case '+':
            cout << numb1 << " + " << numb2 << " = " << numb1 + numb2;
            break;

        case '-':
            cout << numb1 << " - " << numb2 << " = " << numb1 - numb2;
            break;

        case '*':
            cout << numb1 << " * " << numb2 << " = " << numb1 * numb2;
            break;

        case '/':
            cout << numb1 << " / " << numb2 << " = " << numb1 / numb2;
            break;
        
        default:
            cout << "Operator tidak dikenali";
            break;
    }

    return 0;

}