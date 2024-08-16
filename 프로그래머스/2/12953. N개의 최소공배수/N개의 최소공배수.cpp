#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    if (arr.size() == 1)
        return 1;
    int value = lcm(arr[0], arr[1]);
    for(int i=2;i<arr.size();++i){
        value = lcm(value, arr[i]);
    }
    return value;
}