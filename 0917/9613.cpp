#include <iostream>
#include <vector>

using namespace std;

vector <int> testcase;

//GCD 구하기 = 유클리드 호제법
int gcdRecursion(int a, int b) {

    if (a%b == 0) //b가 0이면 a가 최대공약수
        return b;

    //a%b구한 후 b와 자리 바꾸어서 호출
    return gcdRecursion(b, a % b);
}

int main() {

    int n;

    //입력
    cin >> n ;

    //각 testcase 별 입력-연산-출력
    // 
    //input
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        testcase.assign(t, 0);

        for (int j = 0; j < t; j++) {
            cin >> testcase[j];
        }

        long long sum = 0;
        for (int j = 0; j < t; j++) {
            for (int k = j + 1; k < t; k++) {
                sum += gcdRecursion(testcase[j], testcase[k]);
            }
        }

        cout << sum << '\n';

    }

    return 0;
}
