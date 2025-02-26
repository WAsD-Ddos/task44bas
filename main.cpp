//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
//void swap(int a,int b) {//usual
//    int t = a;
//    a = b;
//    b = t;
//}
//void swap_two(int* x, int* y) {//ykaz
//    int t = *x;
//    *x=*y;
//    *y=t;
//}
//void swap_three(int& a, int& b) {//href
//    int t = a;
//    a = b;
//    b = t;
//}
//
//
//int main() {
//    int x = 10, y = 555;
//    cout <<"Before X: " << x << endl;
//    cout <<"Before Y: "<< y << endl;                     
//    //swap(x, y); 
//    swap_two(&x,&y);
//    swap_three(x, y);
//    cout << "after X: " << x << endl;
//    cout << "after Y: " << y << endl;
//
//    
//
//
//
//    return 0;
//
//}