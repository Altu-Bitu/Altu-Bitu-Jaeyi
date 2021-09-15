#include <iostream>
#include <stack>
#include <string>

using namespace std;

/* 알고리즘 */
// 1. n만큼 stack 만들기
// 2. string으로 후위표기식 저장
// 3. 피연산자 저장
// 4. 후위표기식 연산
//    - 피연산자라면 숫자를 찾아서 stack에 저장 
//    - 연산자 만나면 stack에서 2개빼서 계산 (2번째 pop이 더 앞에 와야함)
//    - 마지막 top을 출력 


double operation(double a, double b, char op)
{
	double value = 0.;
	switch (op)
	{
	case '+':
		value = b + a;
		break;
	case '-':
		value = b - a;
		break;
	case '\*':
		value = b * a;
		break;
	case '/':
		value = b / a;
		break;
	}
	return value;
}

int main() {

	string str;	//후위표기식 저장
	int n;	//피연산자 개수

	stack<double> s;	//스택

	int operand[26];	//피연산자 저장하는 배열

	cin >> n;
	cin.ignore();
	getline(cin, str);

	for (int i = 0; i < n; i++)
		cin >> operand[i];

	//int is_ope = 0;


	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')		// 피연산자일 경우
		{
			s.push(operand[str[i] - 'A']);		//숫자로 변환해서 push
			//is_ope += 1;
		}

		else	// 연산자인 경우 
		{
			double a = s.top();
			s.pop();
			double b = s.top();
			s.pop();
			s.push(operation(a, b, str[i]));
		}
	}
	cout << fixed;
	cout.precision(2);			//소수점 아래 두개로 출력 고정
	cout << s.top() << '\n';

	return 0;
}
