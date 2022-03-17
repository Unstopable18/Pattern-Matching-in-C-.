#include<iostream>
using namespace std;
int main()
{
    int i,j,temp;
    char str[100]={"Is this Your First Pattern Matching Program Yes or No"};
    char substr[20]={"Yes"};
    for(i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==substr[j])
        {
            temp=i+1;
            while(str[i]==substr[j])
            {
                i++;
                j++;
            }
            if(substr[j]=='\0')
            {
                cout<<"*************************************************\n";
                cout<<"The Pattern has been Matched at Position: "<<temp<<"\n";
                cout<<"*************************************************";
                exit(0);
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
    }
    if(temp==0)
        cout<<"The substring is not present in given string\n";
    return 0;
}

