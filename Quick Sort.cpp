#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int n = 10;
int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

void quicksort(int arr[], int left, int right) {
	if (left >= right) {//������ ������ �� 1�� ���
		return;
	}
	int pivot = left;//�Ǻ��� �� �������� ������ ���
	int i = left + 1;//i�� ���� �ٷ� ������
	int j = right;//j�� �� ������
	int temp;

	while (i <= j) {//i�� j ������ ������
		while (arr[i] <= arr[pivot])//i�� ���� �Ǻ� �����̸�
			i++;//i�� ���������� �Űܰ�
		while (arr[j] >= arr[pivot] && j > left)//j�� ���� �Ǻ����� ũ��, j�� left���� ū ��쿡 ���Ͽ�
			j--;//j�� �������� �Űܰ�
		if (i > j)//i�� j�� ũ�ν� �Ǿ��� ���
			SWAP(arr[j], arr[pivot], temp);
		else//i�� j���� ���� ���� �Ǻ��� ��ü���� ����
			SWAP(arr[i], arr[j], temp);
	}
	
	quicksort(arr, left, j - 1);//�Ǻ� ���� ���� ����, �Ǻ����� ���� ��
	quicksort(arr, j+1, right);//�Ǻ� ���� ������ ����, �Ǻ����� ū ��
}

int main() {
	quicksort(arr, 0, n - 1);//left:0, right:n-1 (�迭 �ε���)
	//���ĵ� ����� ��µǵ��� �ݺ����� ����Ͽ� �迭 ���� �����ֱ�
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	//�� ���� �ð����⵵ O(n log n)
	//�� ���� �ð����⵵ O(n^2)�� ���(n����)
	//1 2 3 4 5 �ӵ��� ����(�� ��Ʈ�� ������ �Ǿ����� �� ����)
	//3 4 5 1 2 �ӵ��� ����(�� ��Ʈ�� ������ ���� �ʾ��� �� ����)
	return 0;
}