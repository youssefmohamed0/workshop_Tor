#include <iostream>

using namespace std;


void greet()
{
    cout<<"Welcome to program!"<<endl;
}

string askForName()
{
    string name;
    cout<<"Enter your name: "<<endl;
    cin>> name;
    return name;
}

int main()
{
    greet();
    string name = askForName();
    return 0;
}