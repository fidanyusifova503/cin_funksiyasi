#include <iostream>
#include <string>
using namespace std;

int main (){
    system("cls");
    //int a;
    // cin >> a;

    // cout << "a = " << a << endl;
    // cout << "kod bitdi "<< endl;
    // int age;
    // cin >> age;

    // cout << "sizin yasiniz gelen il " << age + 1 << "olacaq. "
    // cout << "novbeti setir" << endl;
    // cout << "sonuncu setir";

    string fullname;

    // cin >> fullname;
    getline(cin,fullname);

    cout << "sizin ad ve soyadiniz " << fullname << endl;
}