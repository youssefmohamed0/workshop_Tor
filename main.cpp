#include <iostream>

using namespace std;


void greet()
{
    cout<<"Welcome to program!"<<endl;
}

void bye(string name)
{
    cout<<"Thank you "<< name<<" for using our program!"<<endl;
}

int main()
{
    greet();
    return 0;
}