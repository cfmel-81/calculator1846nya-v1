#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
   int a;
   int b;
   char op;
   cout << "Введите числа: ";
   cin >> a >> b ;
   cout << "Введите операцию: ";
   cin >> op;

   if (op == '+'){
    cout << "Сумма = " << a + b;
   }

   if (op == '*'){
    cout << "Произведение = " << a * b;
   }
   if (op == '/'){
    if (b == 0 ){
        cout << "На ноль делить нельзя";

    }
    else cout << "Частное = " << a / b;
   }
   if (op == '-'){
    cout << "Разность = " << a - b;
   }

}