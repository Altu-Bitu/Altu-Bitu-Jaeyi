#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 알고리즘 */
// 1. Test case 순서 T만큼 for문 반복 
// 2. pass 함수 생성(Test Case 1개에 대해 통과한 사람 수를 나타내는 함수)
// 3. 서류점수 기준으로 내림차순 정렬
// 4. 서류점수의 index 보다 위의 index에서, 면접점수가 더 높은 사람이 있다면 탈락 
// (시간초과) > 첫번째 사람은 무조건 뽑기
// 첫번째 사람의 면접 순위 저장. 이것보다 높은 사람들이 있다면 통과
// pass 함수에서 사람들 별 통과 여부 계산
// 해당 Test case에서 통과한 사람들 수 출력


using namespace std;

struct info {
    int document, meet;
};

vector<info> score;

//document 비교 함수
bool cmpDoc(const info& i1, const info& i2) {

    if (i1.document != i2.document) {
        return i1.document < i2.document;
    }
    
    return i1.document > i2.document;
}

//test case 별 뽑힌 사람 계산
int numpass(int n) {
    int count = 0;
    int best = 0;

    sort(score.begin(), score.end(), cmpDoc);

    best = score[0].meet;
    count = 1;

    for (int i = 0; i < n; i++) {
        
        if (score[i].meet < best) {
            best = score[i].meet;
            count += 1;
        }
                
    }

    return count;
}

int main() {
    int t;
    int n;
    int pass = 0;

    vector<int> result;
    

    //입력
    cin >> t;
    result.assign(t, 0);

    for (int i = 0; i < t; i++) {
        cin >> n;
        score.assign(n, {});

        //cout << n << '\n';

        for (int j = 0; j < n; j++) {
            cin >> score[j].document >> score[j].meet;
        }

        //연산
        pass = numpass(n);

        //배열에 저장
        result[i] = pass;
    }

    for (int i = 0; i < t; i++)
        cout << result[i] << '\n';

}



