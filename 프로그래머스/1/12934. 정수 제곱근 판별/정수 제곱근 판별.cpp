#include <cmath>

long long solution(long long n) {
    long long answer;
    long long root = sqrt(n);
    
    if (root * root == n)
    {
        answer = pow(root + 1, 2);
    }
    else
    {
        answer = -1;
    }
    
    return answer;
}