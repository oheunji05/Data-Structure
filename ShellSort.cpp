//#include <stdio.h>
//
////삽입 정렬을 보완한 알고리즘
//void shellSort(int arr[], int n) {
//	int i, j, gap, tmp;
//	for (gap = n / 2; gap > 0; gap /= 2) {//gap=gap/2
//		//if (1(gap%2)) gap++; 짝수면 홀수로
//		for (i = gap; i < n; i++) {//삽입 정렬 응용
//			tmp = arr[i];
//			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
//				arr[j] = arr[j - gap];
//			arr[j] = tmp;
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,9,15,12,3,7,5,8,11,2 };
//	//10개 데이터를 쉘 정렬하는 법
//	int n = sizeof(arr) / sizeof(int);
//	printf("%d개 데이터 정렬\n", n);
//	shellSort(arr, n);
//	for (int i = 0; i < n; i++)
//		printf("%4d", arr[i]);
//	printf("\n");
//	return 0;
//}