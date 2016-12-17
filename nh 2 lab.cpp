#include <iostream> 
#include <conio.h> 
#include <locale.h> 
using namespace std; 

void my_sum(int a, int b) { 
cout << a << " + " << b << " = " << a+b << endl; 
} 

int my_sum(int a, int b, int c) { 
return a+b; 
} 

int my_sub(int a, int b, int c) { 
return a-b; 
} 

void my_sub(int a, int b) { 
cout << a << " - " << b << " = " << a-b << endl; 
} 

void my_mul(int a, int b) { 
int res = 0; 
for(int i = 1; i<=b; i++) { 
res = my_sum(res, a, 1); 
} 
cout << a << " * " << b << " = " << res << endl; 
} 

void my_div(int a, int b) { 
int res = 0, s = a; 
while(s >= b) { 
s = my_sub(s, b, 1); 
res++; 
} 
cout << a << " / " << b << " = " << res << " Остаток = " << s <<endl; 
} 

int fac(int a) { 
int s; 
if(a==1) return 1; 

return fac(a-1) * a; 
} 

int fib(int a) { 
if(a==0) return 1; 
if(a==1) return 1; 

return fib(a-1) + fib(a-2); 
} 

void main() { 
setlocale(LC_ALL, "RUS"); 
int x,y, choice; 

do { 
system("CLS"); 
cout << "Введите x: "; 
cin >> x; 
cout << "Введите y: "; 
cin >> y; 

do { 
cout << endl << "1. " << x << " + " << y << endl; 
cout << "2. " << x << " - " << y << endl; 
cout << "3. " << x << " * " << y << endl; 
cout << "4. " << x << " / " << y << endl; 
cout << "5. !" << x << endl; 
cout << "6. !" << y << endl; 
cout << "7. Число фибоначчи № " << x << endl; 
cout << "8. Число фибоначчи № " << y << endl << endl; 
cout <<"99. " << "Новые x и y"<< endl; 
cout << "0. " << "Выход" << endl; 

cout << "Выбрать: "; 
cin >> choice; 

system("CLS"); 
switch(choice) { 
case 1: 
my_sum(x ,y); 
break; 
case 2: 
my_sub(x ,y); 
break; 
case 3: 
my_mul(x, y); 
break; 
case 4: 
my_div(x, y); 
break; 
case 5: 
cout << "!" << x << " = " << fac(x) << endl; 
break; 
case 6: 
cout << "!" << y << " = " << fac(y) << endl; 
case 7: 
cout << "Число фибоначчи № " << x << " = " << fib(x) << endl; 
break; 
case 8: 
cout << "Число фибоначчи № " << y << " = " << fib(y) << endl; 
} 
} while(choice != 99 && choice != 0); 
} while(choice != 0); 

cout << "Выход..."; 
}