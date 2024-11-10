#include <iostream>
using namespace std;

void calcSum(int a, int b){
    cout<< "Summa (calcSum): " << a+b <<endl;

}

void calcDiv(int a, int b){
    if (b == 0){
        cout << "Virhe: Ei voi jakaa nollalla!" <<endl;
    }
    else {
        cout<< "Osamaara (calcDiv): "<< (a)/b <<endl;
    }
}

int retSum(int a, int b){
    return a + b;
}

float retDiv(int a, int b){
    if (b == 0){
        cout<<"Virhe: Ei voi jakaa nollalla!"<<endl;
        return 0;
    }
    else {
        return static_cast<float> (a) / b;
    }
}

int main()
{
    int a;
    int b;
    cout << "Anna kokonaisluku a: ";
    cin >> a;
    cout<< "Anna kokonaisluku b: ";
    cin >> b;


    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum (a,b);
    float osamaara = retDiv(a , b);

    cout<< "Summa (retSum): "<< summa <<endl;
    cout<< "Osamaara (retDiv): "<< osamaara <<endl;
}
