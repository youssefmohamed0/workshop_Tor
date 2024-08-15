#include <iostream>

using namespace std;

void greet()
{
    cout<<"Welcome to program!"<<endl;
}
int askForExperience()
{
    int x;
    cout<<"Did you enjoy your experience? (1yes, 0no)"<<endl;
    cin>>x;
    return x;
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
    int experience = askForExperience();
    return 0;
}

