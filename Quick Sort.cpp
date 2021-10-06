#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int n = 10;
int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

void quicksort(int arr[], int left, int right) {
	if (left >= right) {//정렬할 데이터 수 1의 경우
		return;
	}
	int pivot = left;//피봇을 맨 왼쪽으로 설정한 경우
	int i = left + 1;//i는 피폿 바로 오른쪽
	int j = right;//j는 맨 오른쪽
	int temp;

	while (i <= j) {//i가 j 이하일 때까지
		while (arr[i] <= arr[pivot])//i의 값이 피봇 이하이면
			i++;//i가 오른쪽으로 옮겨감
		while (arr[j] >= arr[pivot] && j > left)//j의 값이 피봇보다 크고, j가 left보다 큰 경우에 한하여
			j--;//j가 왼쪽으로 옮겨감
		if (i > j)//i와 j가 크로스 되었을 경우
			SWAP(arr[j], arr[pivot], temp);
		else//i가 j보다 작은 경우는 피봇과 교체하지 않음
			SWAP(arr[i], arr[j], temp);
	}
	
	quicksort(arr, left, j - 1);//피봇 기준 왼쪽 영역, 피봇보다 작은 수
	quicksort(arr, j+1, right);//피봇 기준 오른쪽 영역, 피봇보다 큰 수
}

int main() {
	quicksort(arr, 0, n - 1);//left:0, right:n-1 (배열 인덱스)
	//정렬된 결과가 출력되도록 반복문을 사용하여 배열 내용 보여주기
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	//퀵 정렬 시간복잡도 O(n log n)
	//퀵 정렬 시간복잡도 O(n^2)인 경우(n제곱)
	//1 2 3 4 5 속도가 느림(퀵 소트는 정렬이 되어있을 때 느림)
	//3 4 5 1 2 속도가 빠름(퀵 소트는 정렬이 되지 않았을 때 빠름)
	return 0;
}