#include <iostream>
#include <fstream>

using namespace std;

void read_from_file(const string& file_name)
{
    ifstream inFile(file_name);
    if(!inFile.is_open())
    {
        cerr << "File not open";
        return;
    }

    cout << "Создать файл" << endl;
    string line;

    while(getline(inFile, line))
    {
        cout << line << endl;
    }
}

int main()
{
    read_from_file();
}