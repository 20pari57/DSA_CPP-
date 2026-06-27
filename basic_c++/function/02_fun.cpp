// #include <iostream>
// using namespace std;
// int sum (int a , int b) { // parameter type and name defined
//     int s = a+b;
//     return s;
// }

// int main() {
//     cout << sum (90,80) << endl;
//     return 0;
// }

// min of 2 numbers
// #include <iostream>
// using namespace std;
// int minTwo (int a , int b) {
//      if (a<b) {
//         return a;
//      } 
//      else {
//         return b;
//      }
// }
// int main() {
// cout<< minTwo(78,90) <<endl; // arguments --> this are actual value we used in funtions & parameters are duplicated values
// return 0;
// }

// calculated a number 1 to N 
// #include <iostream>
// using namespace std;
// int sumN (int n) {
//     int sum  = 0;
//     for (int i=1 ; i<=n ; i++) {
//         sum +=i;
//     }
//     return sum;
// }
// int main() 
//     {
//        cout<<sumN(90)<<endl;
//         return 0;
//     }

// calculated n!
// #include <iostream>
// using namespace std;
// int factN (int n) {
//     int fact = 1;
//     for (int i=1;i<=n;i++)
//     fact *=i;
// return fact;
// }
// int main() {
//     cout<< factN(12) << endl;
//     return 0;
// }


// calculate sum of dights of a number
// #include <iostream>
// using namespace std;
// int sumOfDigits(int num) {
//     int digSum = 0;

//     while (num > 0) {
//         int lastDig = num % 10;
//         num /= 10;
//         digSum += lastDig;

//     }
//     return digSum;
// }
// int main() {
//     cout << sumOfDigits (8923) <<endl;
//     return 0;
// }

// calculated nCr binomal coefficient for n & r
