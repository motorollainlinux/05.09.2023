#include <iostream>
#include <string>

using std::cout;
using std::cin;

void EnterResult(int* Arr) {
    cout << "Result: ";
    for(int i = 0; i < 100; i++) {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

    void Math(int num1, int num2, int* result) {
    int res = num1 + num2;
    std::string Str = "";
    Str = std::to_string(res);
    for(int i = 0; i < Str.length(); i++) {
        result[i] = Str[i] - '0';
    }
    EnterResult(result);
    res = num1 - num2;
    Str = "";
    Str = std::to_string(res);
    for(int i = 0; i < Str.length(); i++) {
        result[i] = Str[i] - '0';
    }
    EnterResult(result);
    res = num1 * num2;
    Str = "";
    Str = std::to_string(res);
    for(int i = 0; i < Str.length(); i++) {
        result[i] = Str[i] - '0';
    }
    EnterResult(result);
    res = num1 / num2;
    Str = "";
    Str = std::to_string(res);
    for(int i = 0; i < Str.length(); i++) {
        result[i] = Str[i] - '0';
    }
    EnterResult(result);
}
void Nums(int* Arr1, int* Arr2, int* result) {
    int num1 = 0;
    int num2 = 0;
    std::string Str = "";
    for(int i = 0; Arr1[i] != 0; i++) {
        //cout << "worck...\n";
        Str += std::to_string(Arr1[i]);
    }
    //cout << "tess: " << Str << "\n";
    num1 = std::stoi(Str);
    Str = "";
    for(int i = 0; Arr2[i] != 0; i++) {
        Str += std::to_string(Arr2[i]);
    }
    num2 = std::stoi(Str);
    Math(num1, num2, result);
}

void UserEnter(int* Arr) {
   int CountNum = 0;
   int UNum = 0;
   bool Correct = false;
   do {
       cout << "Enter Count of array cells(1 - 100)\n";
       cin >> CountNum;
       if (CountNum > 0 && CountNum <= 100) {
           Correct = true;
       } else {
       cout << "Is incorrect!\n";
       }
   }while(!Correct);
   Correct = false;
   for(int i = 0; i < CountNum; i++) {
       do{
           cout << i+1 << "|Enter number(0 - 9): ";
           cin >> UNum;
           cout << "\n";
           if (UNum >= 0 && UNum <= 9) {
               Correct = true;
               Arr[i] = UNum;
           }
       }while(!Correct);
       Correct = false;
   }
   for (int i = CountNum; i < 100; i++) {
       Arr[i] = 0;
   }
}
int main() {
    int Arr1[100];
    int Arr2[100];
    int ArrResult[101];
    for(int i = 0; i < 101; i++) {
        ArrResult[i] = 0;
    }
    UserEnter(Arr1);
    UserEnter(Arr2);
    //cout << "tess1: ";
    //EnterResult(Arr1);
    //EnterResult(Arr2);
    Nums(Arr1, Arr2, ArrResult);
}
