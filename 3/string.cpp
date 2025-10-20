#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void SS_Basic()
{
    stringstream ss;
    int a = 42; double pi = 3.14;
    string text = "Heh = world";
    ss << "Число: " << a << " P is " << pi << " Text: " << text;
    string resuld = ss.str();
    cout << "Результат " << resuld << endl;
    stringstream ss2(resuld);
    string word;
    cout << "Разбор слова:" << endl;
    while (ss2 >> word)
    {
        cout << "слово: " << word << endl;
    }
}

int main()
{
    SS_Basic();
    return 0;
}