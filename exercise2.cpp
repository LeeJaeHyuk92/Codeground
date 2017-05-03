#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

int cnt = 0;



//void promisingTest(int *arr, int num, int width){
//
//	int tmp = width;
//	num += tmp--;
//
//	bool test = true;
//	sort(arr, arr + sizeof(int)*width);
//	for (int i = 0; i < width; i++){
//		if (arr[i] == num - tmp)
//			continue;
//		else{
//			arr[i] += width--;
//			if (num >= arr[i])
//				test = true;
//			else{
//				test = false;
//				break;
//			}
//		}
//	}
//
//	if (test)
//		cnt++;
//}
int arr[3000000] = { 0 };
int arr1[3000000] = { 0 };
int main(int argc, char** argv) {
	int T;
	int test_case;
	/* 아래 freopen 함수는 input.txt 를 read only 형식으로 연 후,
	앞으로 표준 입력(키보드) 대신 input.txt 파일로 부터 읽어오겠다는 의미의 코드입니다.
	만약 본인의 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 freopen 함수를 사용하면,
	그 아래에서 cin 을 사용하여 표준 입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
	따라서 본인의 PC 에서 테스트 할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 됩니다.
	단, 이 시스템에서 "제출하기" 할 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다. */
	//freopen("input.txt", "r", stdin);


	scanf("%d", &T);	//Codeground 시스템에서는 C++ 에서도 scanf 사용을 권장합니다.
	for (test_case = 1; test_case <= T; ++test_case) {
		//	이 부분에서 알고리즘 프로그램을 작성하십시오.
		int N;
		int tmp;
		int maximum = 0;
		cin >> N;
		for (int i = 0; i < N; i++){
			cin >> tmp;
			arr[i] = tmp;
		}
		sort(arr, arr + N);
		for (int i = 0; i < N; i++){
			arr1[i] = arr[i] + N - i;

			if (maximum < arr1[i]){ maximum = arr1[i]; }
		}

		for (int i = 0; i<N; i++){
			if (maximum <= arr[i] + N){ cnt++; }
		}

		//	이 부분에서 정답을 출력하십시오. Codeground 시스템에서는 C++ 에서도 printf 사용을 권장합니다. 
		printf("Case #%d\n", test_case);
		cout << cnt << endl;


	}

	return 0;	//	정상종료 시 반드시 0을 리턴해야 합니다.
}