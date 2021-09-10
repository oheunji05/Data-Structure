//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int S[100] = { 5,8,9,10,15,17,25,30,38,50 };//정렬이 되어 있어야 함
//int n, k;//k는 내가 찾을 숫자
//int binarysearch(int s, int e) {//start end
//	while (s <= e) {
//		int m = (s + e) / 2;//m은 middle
//		if (S[m] == k)
//			return m;//찾은 배열의 인덱스(위치)
//		if (S[m] > k)
//			e = m - 1;
//		else
//			s = m + 1;
//	}
//	return -1;//숫자를 못찾음
//}
//
//int main() {
//	printf("찾을 숫자 입력 : ");
//	scanf("%d", &k);
//	printf("%d번째에서 발견\n", binarysearch(0, 9));
//	return 0;
//}