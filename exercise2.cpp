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
	/* �Ʒ� freopen �Լ��� input.txt �� read only �������� �� ��,
	������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸ� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	���� ������ PC ���� �׽�Ʈ �� ����, �Է°��� input.txt�� ������ �� freopen �Լ��� ����ϸ�,
	�� �Ʒ����� cin �� ����Ͽ� ǥ�� �Է� ��� input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
	���� ������ PC ���� �׽�Ʈ �� ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �˴ϴ�.
	��, �� �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�. */
	//freopen("input.txt", "r", stdin);


	scanf("%d", &T);	//Codeground �ý��ۿ����� C++ ������ scanf ����� �����մϴ�.
	for (test_case = 1; test_case <= T; ++test_case) {
		//	�� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�.
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

		//	�� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++ ������ printf ����� �����մϴ�. 
		printf("Case #%d\n", test_case);
		cout << cnt << endl;


	}

	return 0;	//	�������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}