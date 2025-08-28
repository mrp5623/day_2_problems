#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

// void problem1(){
//     long long data[10] ={1304008802, 840563984, 1470373138, 891106916, 536870912, 642779554, 2147483648, 1073741824, 268435456, 67108864};

//     for (long long num : data){
//         bitset<33> binary(num);
//         if (binary.count()==1){
//             cout << num << endl;
//         }
//     }
    
// }

// int fibonacci(long long num, long long first, long long second){
    
//     if (first > num){
//         return 0;
//     } else if (first == num){
//         return num;
//     } else {
//         return fibonacci(num, second, first+second);
//     }
// }

// void problem2(){
//     long long data[10] = {761916221, 1200145191, 267914296, 1836311903, 433494437, 63245986, 322563451, 701408733, 491478908, 110228912};
    
//     for (long long num : data){
//         if (fibonacci(num, 1, 1)==num){
//             cout << num << " is a Fibonacci number" << endl;
//         } else {
//             cout << num << " is not a Fibonacci number" << endl;
//         }
        
//     }
// }

// void squareRecurse(long long num, long long place, long long div){
//     for (long long i=div; i-div<=place*10LL; i+=place){
//         if (i==0) continue;
//         if (place==0) break;
        
//         if(num%i==0 && num/i==i){
//             cout << num << " is a square" << endl;
//             return;
//         } else if (num/i<i){
//             squareRecurse(num, place/10, i-place);
//             return;
//         }
//     } cout << num << " is not a square" << endl;

// }

// void problem3(){
//     long long data[10] ={1373617675, 278559595, 929011120, 1778561929, 151371655, 1291627439, 1664884809, 366148225, 1224538841, 2060161321};
    
//     for (long long num : data){
//         long long digits = to_string(num).length();
//         long long place = pow(10LL, digits-1);
//         squareRecurse(num, place, place);
//     }
    
// }

void problem4(){
    long long data[10]= {1297461688, 226114384, 2012824298, 467362887, 1269727688, 1733620503, 833477517, 1039684265, 157689069, 304066868};
    
    for (long long num : data){
    
        int count = 0;
        string ans = "";
        while (num>0) {
            ans = to_string(num%2) + ans;
            num/=2;
            count++;
        }
        cout << "Final: " << ans << endl;
    }
}

bool isPrime(int num){
    for (int i=2; i<=sqrt(num); i++){
        if (num==2) break;
        if (num%i==0) return false;
    }
    return true;
}

void problem5(){
    long long data[10] = {899418828139, 24936394564901, 4825309222309, 976586787151, 10292877700081, 6378832084507, 22239297958663, 39526637446, 77442640075663, 8674199170807};
    for (long long num : data){

        cout << "Finding factors for: " << num << endl;

        int factors[5];
        int count = 0;

        while (count<4){

            for (int i=2; i<=sqrt(num); i++){
            
                if (num%i==0 && isPrime(i)){
                    factors[count]=i;
                    num/=i;
                    count++;
                    break;
                } 
            }   
        } 

        factors[count]=num;

        for (int factor : factors){
            cout << factor << endl;
        }
    }
}


int main () {
   // problem1();
   // problem2();
   // problem3();
   // problem4();
   problem5();
    
    return 0;
}

