#include <iostream>
#include <vector>

using namespace std;

/* 알고리즘 */
// 1. 입력값 n 만큼 vector 생성
// 2. 첫번째 n = 총 감독관 수 , 시험장의 수 
//    B, C 값 받기 
// 3. 저장한 n개의 배열에서 
// i번째 시험장에 필요한 부감독관 수 = (arr[i] - B) % C 
// sum에 저장 
// 미자막 result에 총 감독관 수 (n) 더해서 저장 


//입력받는 배열 (각 시험장 별 학생수)
vector<long long> arr;

//전역변수들
int n;  //시험장 수
int B;  //주 감독관의 학생수 
int C;  //부 감독관의 학생수 


//필요한 부 감독관의 수 계산
int sum_sub(int students) {

    int num;
    int remain;

    if (students - B <= 0) //여기서 개많이 틀림;;;;
        return 1;

    num = (students - B) / C ;
    remain = (students - B) % C;

    if (remain != 0)
        num += 1;
    
    return (num+1); 

}


int main() {
    
    long long sum = 0;  //필요한 감독관의 수
    int temp = 0;

    //입력
    cin >> n;
    arr.assign(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> B;
    cin >> C;

    //연산
    for (int i = 0; i < n; i++) {

        temp = sum_sub(arr[i]);
        sum += temp;
       
    }

    //출력
    cout << sum << '\n';
}
