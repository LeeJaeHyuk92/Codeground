// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
#define PI 3.14159265

int radius[5] = { 0 };
double coor[100000] = { 0 };

int main(int argc, char** argv) {
	/* 아래 freopen 함수는 input.txt 를 read only 형식으로 연 후,
	앞으로 표준 입력(키보드) 대신 input.txt 파일로 부터 읽어오겠다는 의미의 코드입니다.
	만약 본인의 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 freopen 함수를 사용하면,
	그 아래에서 scanf 함수 또는 cin을 사용하여 표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
	또한, 본인 PC에서 freopen 함수를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
	단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 freopen 함수를 지우거나 주석(//) 처리 하셔야 합니다. */
	//freopen("input.txt", "r", stdin);

	setbuf(stdout, NULL);

	int TC;
	int test_case;
	double angle;

	cin >> TC;	// cin 사용 가능
	for (test_case = 1; test_case <= TC; test_case++) {
		// 이 부분에서 알고리즘 프로그램을 작성하십시오.

		int i;
		double dist;
		int score = 0;
		int scale = 0;
		
		for (i = 0; i < 5; i++){
			cin >> radius[i];
		}
		
		int N;
		cin >> N;
		for (i = 0; i < 2*N; i++){
			cin >> coor[i];
		}

		for (i = 0; i < 2*N; i=i+2){


			dist = sqrt(coor[i] * coor[i] + coor[i + 1] * coor[i + 1]);
			if (dist < radius[0]) {
				score = score + 50;
				continue;
			}
			else if (radius[1] < dist && dist < radius[2]){
				scale = 3;
			}
			else if (radius[3] <  dist && dist < radius[4]){
				scale = 2;
			}

			else if (dist > radius[4])
				scale = 0;

			else{
				scale = 1;
			}

			angle = atan2(coor[i + 1], coor[i]) * 180/PI;

			if (angle < 0)
				angle = 360 + angle;
			
			if (angle < 9 || angle > 351){
				score = score + 6 * scale;
			}
			else if (9 < angle && angle < 27){
				score = score + 13 * scale;
			}
			else if (27 < angle && angle < 45){
				score = score + 4 * scale;
			}
			else if (45 < angle && angle < 63){
				score = score + 18 * scale;
			}
			else if (63 < angle && angle < 81){
				score = score + 1 * scale;
			}
			else if (81 < angle && angle < 99){
				score = score + 20 * scale;
			}
			else if (99 < angle && angle < 117){
				score = score + 5 * scale;
			}
			else if (117 < angle && angle < 135){
				score = score + 12 * scale;
			}
			else if (135 < angle && angle < 153){
				score = score + 9 * scale;
			}
			else if (153 < angle && angle < 171){
				score = score + 14 * scale;
			}
			else if (171 < angle && angle < 189){
				score = score + 11 * scale;
			}
			else if (189 < angle && angle < 207){
				score = score + 8 * scale;
			}
			else if (207 < angle && angle < 225){
				score = score + 16 * scale;
			}
			else if (225 < angle && angle < 243){
				score = score + 7 * scale;
			}
			else if (243 < angle && angle < 261){
				score = score + 19 * scale;
			}
			else if (261 < angle && angle < 279){
				score = score + 3 * scale;
			}
			else if (279 < angle && angle < 297){
				score = score + 17 * scale;
			}
			else if (297 < angle && angle < 315){
				score = score + 2 * scale;
			}
			else if (315 < angle && angle < 333){
				score = score + 15 * scale;
			}
			//(333 < angle <351 )
			else {
				score = score + 10 * scale;
			}
		}


		// 이 부분에서 정답을 출력하십시오.
		printf("Case #%d\n", test_case);	// cout 사용 가능
		cout << score << endl;
	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}
