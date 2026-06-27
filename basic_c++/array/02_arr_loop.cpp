// #include <iostream>
// using namespace std;
// int main () {
//     int marks[5] = {1,2,3,4,5};
//     int size = 5;
//     for (int i=0;i<size;i++) {
//         cout << marks[i] << endl;
//     }
// }

// smallest value in an array
// #include <iostream>
// using namespace std;
// int main () {
//     int nums [] = {12,23,45,56,67,-9,6,0,-12};
//     int size = 10;
//     int smallest = INT_FAST8_MAX;
//     for (int i=0;i<size;i++) {
//         smallest = min(nums[i], smallest);

//     }
//     cout << "smallest value in this array = " << smallest <<endl;
//     return 0;
// }

// Largest value in this array
// #include <iostream>
// using namespace std;
// int main() {
//     int nums [] = {1,2,90,78,-90,23,1111,889};
//     int size = 8;
//     int largest = INT_FAST8_MIN;
//     for (int i=0;i<size;i++) {
//         largest = max(nums[i], largest);
// }
//  cout << "The Largest value is : " << largest <<endl;
// }

// find smallest and largest value index number
#include<iostream>
using namespace std;
int main () 
{
    int num [] = {90,0,12,56,-9,122,-90};
    int size = 7;
    int smallest = INT_FAST8_MAX;
    int largest = INT8_MIN;
    for (int i=0;i<size;i++) {
        smallest = min(num[i],smallest);
        largest = min(num[i],largest);
    }
    if (num == )
    cout<<"smallest values index number : " << smallest <<endl;
    cout<<"Largest values index number: " << largest << endl;
    return 0;
}