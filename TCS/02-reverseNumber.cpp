


// ***** 1st Method  ***** 



#include <bits/stdc++.h>
 
using namespace std;
/* Iterative function to reverse digits of num*/
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
/*Driver program to test reversDigits*/
int main()
{
    int num = 4562;
    cout << "Reverse of no. is " << reversDigits(num);
    getchar();
    return 0;
}




// ***** 2nd Method  ***** 


  
#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}


