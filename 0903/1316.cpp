#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 알고리즘 */
// 1. 입력값 n 만큼 vector 생성
// 2. vector에 입력값 저장
// 3. 저정한 입력값을 정렬시켜서 (지역변수) 동일하면 그룹 단어, 아니라면 그룹단어 X  >> 아님 
// 3. 알파벳이 이전에 등장했는지 확인 (연속된 순서가 아니라면 error)
// - 26 개의 알파벳에 대해서 해당 순서를 저장하는 vector 선언 
// - (a는 0 ~ z는 35) 
// - 해당 vector의 인덱스에는 마지막으로 등장한 알파벳 순서가 저장
// - 마지막 알파벳 순서가 자기 바로 앞이라면 통과, 아니라면 continue, 0이라면 업데이트
// 4. 마지막 알파벳까지 통과했다면, 그룹단어에 count 

//Q. 근데 제가 푼 형식은 정렬이 아닌 것 같아요....

//입력받는 배열
vector<string> arr;

// 알파벳 index 저장하는 배열
vector<int> alphabet;


//비교 함수
int compare(string s) {

    for (int i = 0; i < s.length(); i++) {
       
        if (s.at(i) == 'a') {

            if (alphabet[0] == -1)
                alphabet[0] = i;

                else if (alphabet[0] == i - 1)
                    alphabet[0] = i;

                else
                    return -1;
        }


        if (s.at(i) == 'b') {

            if (alphabet[1] == -1)
                alphabet[1] = i;

                else if (alphabet[1] == i - 1)
                    alphabet[1] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'c') {

            if (alphabet[2] == -1)
                alphabet[2] = i;

                else if (alphabet[2] == i - 1)
                   alphabet[2] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'd') {

            if (alphabet[3] == -1)
                alphabet[3] = i;

                else if (alphabet[3] == i - 1)
                    alphabet[3] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'e') {

            if (alphabet[4] == -1)
                alphabet[4] = i;

                else if (alphabet[4] == i - 1)
                    alphabet[4] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'f') {

            if (alphabet[5] == -1)
                alphabet[5] = i;

                else if (alphabet[5] == i - 1)
                    alphabet[5] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'g') {

            if (alphabet[6] == -1)
                alphabet[6] = i;

                else if (alphabet[6] == i - 1)
                    alphabet[6] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'h') {

            if (alphabet[7] == -1)
                alphabet[7] = i;

                else if (alphabet[7] == i - 1)
                    alphabet[7] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'i') {

            if (alphabet[8] == -1)
                alphabet[8] = i;

                else if (alphabet[8] == i - 1)
                    alphabet[8] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'j') {

            if (alphabet[9] == -1)
                alphabet[9] = i;

                else if (alphabet[9] == i - 1)
                    alphabet[9] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'k') {

            if (alphabet[10] == -1)
                alphabet[10] = i;

                else if (alphabet[10] == i - 1)
                    alphabet[10] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'l') {

            if (alphabet[11] == -1)
                alphabet[11] = i;

                else if (alphabet[11] == i - 1)
                    alphabet[11] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'm') {

            if (alphabet[12] == -1)
                alphabet[12] = i;

                else if (alphabet[12] == i - 1)
                    alphabet[12] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'n') {

            if (alphabet[13] == -1)
                alphabet[13] = i;

                else if (alphabet[13] == i - 1)
                    alphabet[13] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'o') {

            if (alphabet[14] == -1)
                alphabet[14] = i;

                else if (alphabet[14] == i - 1)
                    alphabet[14] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'p') {

            if (alphabet[15] == -1)
                alphabet[15] = i;

                else if (alphabet[15] == i - 1)
                    alphabet[15] = i;

                else
                    return -1;
        }
        if (s.at(i) == 'q') {

            if (alphabet[16] == -1)
                alphabet[16] = i;

                else if (alphabet[16] == i - 1)
                    alphabet[16] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'r') {

            if (alphabet[17] == -1)
                alphabet[17] = i;

                else if (alphabet[17] == i - 1)
                    alphabet[17] = i;

                else
                    return -1;
        }

        if (s.at(i) == 's') {

            if (alphabet[18] == -1)
                alphabet[18] = i;

                else if (alphabet[18] == i - 1)
                    alphabet[18] = i;

                else
                    return -1;
        }

        if (s.at(i) == 't') {

            if (alphabet[19] == -1)
                alphabet[19] = i;

                else if (alphabet[19] == i - 1)
                    alphabet[19] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'u') {

            if (alphabet[20] == -1)
                alphabet[20] = i;

                else if (alphabet[20] == i - 1)
                    alphabet[20] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'v') {

            if (alphabet[21] == -1)
                alphabet[21] = i;

                else if (alphabet[21] == i - 1)
                    alphabet[21] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'w') {

            if (alphabet[22] == -1)
                alphabet[22] = i;

                else if (alphabet[22] == i - 1)
                    alphabet[22] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'x') {

            if (alphabet[23] == -1)
                alphabet[23] = i;

                else if (alphabet[23] == i - 1)
                    alphabet[23] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'y') {

            if (alphabet[24] == -1)
                alphabet[24] = i;

                else if (alphabet[24] == i - 1)
                    alphabet[24] = i;

                else
                    return -1;
        }

        if (s.at(i) == 'z') {

            if (alphabet[25] == -1)
                alphabet[25] = i;

                else if (alphabet[25] == i - 1)
                    alphabet[25] = i;

                else
                    return -1;
        }


    }

    return 10;
}



int main() {
    int n;
    int result = 0;
    int count = 0;
    
    alphabet.assign(26, -1);


    //입력
    cin >> n;
    arr.assign(n, {});
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //연산
    for (int i = 0; i < n; i++) {

        alphabet.assign(26, -1);

        result = compare(arr[i]);

       // cout << result << '\n';


        if (result == 10) {
            count += 1;
        }
    }
            

    //출력
        cout << count << '\n';
}
