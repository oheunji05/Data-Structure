#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int queue[5];


void menuf() { //�޴� �Լ� function
	printf("\n1.ť�� ���� 2.ť���� ����\n");
	printf("3.���� ���� 4.����\n");
}


//�ִ� ���� item
void Enqueue(int* back, int item) {//ť�� ����
	if (*back == 4) {//���� ť�� ������� 5
		printf("ť�� ������\n");
		return;
	}
	queue[++ * back] = item;
}
int Dequeue(int* front, int back) {
	if (*front == back) {
		return -1; //-1�̸� ť�� ����ٰ� ����
		//���� 0�� ���ϵǸ� �������� ����
	}
	return queue[++ * front];
}
void Display(int front, int back) {
	if (front == back)
		printf("ť�� �����\n");
	for (int i = front; i < back + 1; i++)
		printf("%4d", queue[i]);
}


int main() {
	//ť, ���� ��� 1���� �迭�� ����
	int front = -1, back = -1;
	//queue : front, back // stack : top
	int menu, item;
	while (1) {
		menuf();
		scanf("%d", &menu);
		switch (menu) {
		case 1://ť�� ������ �Ǵ� job ����
			scanf("%d", &item);
			Enqueue(&back, item);
			break;
		case 2://ť���� ����
			item = Dequeue(&front, back);
			if (item == -1)
				printf("ť�� �����");
			else
				printf("%d�� ������\n", item);
			break;
		case 3://ť�� ���� �����ֱ�
			Display(front, back); //����
			//ť�� ������ ����� ���ÿ�
			break;
		case 4://���α׷� ����
			return 0;
		default:
			printf("�ٽ� �Է��ϼ���.");
		}
	}
}