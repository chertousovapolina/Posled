// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Чертоусова последовательность
#include <iostream>
using namespace std;
int main()
{
    float x, s=0,n=0;
    
    while(true) {
        cin >> x;
        if (x == 0) break;
        s += x;
        n++;
    }
    cout << s/n<<endl;
    
}

