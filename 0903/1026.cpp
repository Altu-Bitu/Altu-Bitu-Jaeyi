#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 알고리즘 */
// 1. n값 받아서 A,B 배열 생성 (숫자 1개씩 배열에 집어넣기)
// 2. A는 내림차순 정렬
//    B는 오름차순 정렬
// 3. 각 인덱스 별로 S = A[0]×B[0] + ... + A[N-1]×B[N-1] 곱하기
// S를 출력


//입력받는 정수 배열
vector<int> A;
vector<int> B;


int main() {

    int n; 
    int S = 0;
    int temp = 0;

    //입력
    cin >> n;
    A.assign(n, 0);
    B.assign(n, 0);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0; i < n; i++)
        cin >> B[i];
    

    //연산
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end());

    for (int i = 0; i < n; i++) {
        //cout << A[i] << '\n';
        //cout << B[i] << '\n';

        temp = A[i] * B[i];
        S += temp;
    }

    //출력
    cout << S << '\n';
}


