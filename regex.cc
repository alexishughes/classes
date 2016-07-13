// regex.cc

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string input;
    regex integer("[0-9]+");
    
    while(true)
    {
        cout<<"give me an integer"<<endl;
        cin >> input;
        if(!cin)
        {
        break;
        }
        if(input=="q")
            break;
        if(regex_match(input, integer))
            {
                cout<<"integer\n";
                
            }
            else
            {
                cout<<"Invalid Input!\n";
            }
    }
    
}