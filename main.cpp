#include"vektoriai.h"

int main()
{   GenerateFile(1000);
    GenerateFile(10000);
    GenerateFile(100000);
    GenerateFile(1000000);
  GenerateFile(10000000);
    int containerchoise;
    cout<<"pasirinkite koki konteineri naudosite"<<endl;
    cout<<"1. deque\n";
    cout<<"2. list\n";
    cout<<"3. vector\n";

    while(!(cin>>containerchoise)||containerchoise<1||containerchoise>3){
        cout<<"Neteisinga ivestis";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
    Container(containerchoise);
    
    
}