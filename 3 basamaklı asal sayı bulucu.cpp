#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; 
        i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int num = 100; num < 1000; ++num) {
        int rev_num = (num % 10) * 100 + (num / 10 % 10) * 10 + (num / 100);

        if (num != rev_num && isPrime(num) && isPrime(rev_num)) {

            int ab = num / 10;

            int bc = num % 100;

            int cb = rev_num / 10;

            int ba = rev_num % 10 * 10 + rev_num / 100;

            bool ab_prime = isPrime(ab);
            bool bc_prime = isPrime(bc);
            bool cb_prime = isPrime(cb);
            bool ba_priem = isPrime(ba);

            if (ab_prime && bc_prime && cb_prime && ba_priem) {
                cout << " abc: " << num << ", cba: " << rev_num << endl;
            
            }
        }
    }
    return 0;
}

