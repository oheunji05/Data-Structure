//#include <stdio.h>
//
////���� ������ ������ �˰���
//void shellSort(int arr[], int n) {
//	int i, j, gap, tmp;
//	for (gap = n / 2; gap > 0; gap /= 2) {//gap=gap/2
//		//if (1(gap%2)) gap++; ¦���� Ȧ����
//		for (i = gap; i < n; i++) {//���� ���� ����
//			tmp = arr[i];
//			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
//				arr[j] = arr[j - gap];
//			arr[j] = tmp;
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,9,15,12,3,7,5,8,11,2 };
//	//10�� �����͸� �� �����ϴ� ��
//	int n = sizeof(arr) / sizeof(int);
//	printf("%d�� ������ ����\n", n);
//	shellSort(arr, n);
//	for (int i = 0; i < n; i++)
//		printf("%4d", arr[i]);
//	printf("\n");
//	return 0;
//}