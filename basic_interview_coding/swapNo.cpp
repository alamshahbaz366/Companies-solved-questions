// Swap No using 3rd variable

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}



// Swap No without using 3rd variable

#include <iostream>  
using namespace std;  
int main()  
{  
int a=5, b=10;      
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
a=a+b; //a=15 (5+10)    
b=a-b; //b=5 (15-10)    
a=a-b; //a=10 (15-5)    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
}  
