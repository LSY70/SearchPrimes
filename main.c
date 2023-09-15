#include <iostream>
#include <string>
#include <cmath>

bool is_prime(int num, const int* primes, int num_primes) {
    int sqrt_num = static_cast<int>(std::sqrt(num));
    for (int i = 0; i < num_primes && primes[i] <= sqrt_num; ++i) {
        if (num % primes[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long int limit = 1000000;
    // scanf("%ld", &limit);
    const int max_primes = 35000;

    int primes[max_primes] = {2};
    int num_primes = 1;
    std::string final = "2 ";

    for (long long i = 3; i <= limit; i += 2) {
        if (is_prime(i, primes, num_primes)) {
            if (i*i <= limit) {
            	primes[num_primes] = i;
               	num_primes++;
            }
            final += std::to_string(i) + " ";
        }
    }

    std::cout << final << std::endl;
    std::cout << "Number of primes: " << num_primes << std::endl;

    return 0;
}
