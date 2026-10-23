#include <iostream>
using namespace std;
void func(char* c){
    if (*c!='\0 ')
    {
       func(c+1);
       func(c+1);
       cout<<*c<<" ";
       
    }
    
};
int main() {
    char a[]="abc";
    char* b=a;
    func(b);
    return 0;
}