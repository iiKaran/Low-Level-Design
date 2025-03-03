#include<iostream> 
using namespace std ; 
int main()
{
   int x = 18, y =80 ; 
   string result = (x==y)?"equal":(x>y)?"Higher":"Lower";
   cout<<"Result is x is "<<result<<" than y"<<endl;
    return 0; 
}