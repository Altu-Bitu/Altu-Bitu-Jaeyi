#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 알고리즘 */
// 1. n값 받아서 vector 생성 (String으로 받기)
// 2. 비교함수 생성
// A와 B의 길이가 다르면, 짧은 것이 먼저 
// 길이가 같다면, A의 모든 자리수의 합과 B의 모든 자리수의 합을 비교해서 작은 합을 가지는 것이 먼저 (숫자인 것만 더한다)
// 자리수의 합도 같으면 사전순 비교 (숫자가 알파벳보다 더 앞쪽)
//  

vector<string> serial;

//비교함수
bool cmp(const string& a, const string& b) {

    int temp_a = 0;
    int temp_b = 0;

    if (a.length() != b.length()) //둘이 길이가 다르면 짧은 순서
        return a.length() <  b.length();

    for (int i = 0; i < a.length(); i++) {
        if (a.at(i) == '1')
            temp_a += 1;
        if (a.at(i) == '2')
            temp_a += 2;
        if (a.at(i) == '3')
            temp_a += 3;
        if (a.at(i) == '4')
            temp_a += 4;
        if (a.at(i) == '5')
            temp_a += 5;
        if (a.at(i) == '6')
            temp_a += 6;
        if (a.at(i) == '7')
            temp_a += 7;
        if (a.at(i) == '8')
            temp_a += 8;
        if (a.at(i) == '9')
            temp_a += 9;
   }

    for (int i = 0; i < b.length(); i++) {
        if (b.at(i) == '1')
            temp_b += 1;
        if (b.at(i) == '2')
            temp_b += 2;
        if (b.at(i) == '3')
            temp_b += 3;
        if (b.at(i) == '4')
            temp_b += 4;
        if (b.at(i) == '5')
            temp_b += 5;
        if (b.at(i) == '6')
            temp_b += 6;
        if (b.at(i) == '7')
            temp_b += 7;
        if (b.at(i) == '8')
            temp_b += 8;
        if (b.at(i) == '9')
            temp_b += 9;
    }


    if (temp_a != temp_b) //길이가 같다면 자리수의 합이 작은 순서
        return temp_a < temp_b;

    return a < b; //사전 순
}


int main() {
    int n;

    //입력
    cin >> n;
    serial.assign(n, {});
    for (int i = 0; i < n; i++)

        cin >> serial[i] ;

    //연산
    sort(serial.begin(), serial.end(), cmp);

    //출력
    for (int i = 0; i < n; i++)
        cout << serial[i] << '\n';
}


