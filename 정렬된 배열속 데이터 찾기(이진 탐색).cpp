//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int S[100] = { 5,8,9,10,15,17,25,30,38,50 };//������ �Ǿ� �־�� ��
//int n, k;//k�� ���� ã�� ����
//int binarysearch(int s, int e) {//start end
//	while (s <= e) {
//		int m = (s + e) / 2;//m�� middle
//		if (S[m] == k)
//			return m;//ã�� �迭�� �ε���(��ġ)
//		if (S[m] > k)
//			e = m - 1;
//		else
//			s = m + 1;
//	}
//	return -1;//���ڸ� ��ã��
//}
//
//int main() {
//	printf("ã�� ���� �Է� : ");
//	scanf("%d", &k);
//	printf("%d��°���� �߰�\n", binarysearch(0, 9));
//	return 0;
//}