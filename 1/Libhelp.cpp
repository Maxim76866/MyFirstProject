#include <iostream>
#include <string>
using namespace std;
 
void lib_print_help(
    int major_ver, //первое значение функции
    int minor_ver, //второе
    int patch_ver /*третье*/
){
    cout<< "Print help from libhelp.cpp" << endl;
    cout<< major_ver << "." << minor_ver << "." << patch_ver << endl;
}