#include<stdio.h>
#define SIZE 8

int map[SIZE + 1][SIZE + 1] = {//�������

{0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0},
{0,1,0,1,1,0,0,0,0},
{0,0,1,0,0,0,0,1,0},
{0,0,1,0,0,1,0,0,0},
{0,0,0,0,1,0,1,0,0},
{0,0,0,0,0,1,0,1,1},
{0,0,0,1,0,0,1,0,1},
{0,0,0,0,0,0,1,1,0}

};

int visited[SIZE + 1];

void DFS(int v) {
	visited[v] = 1;//�ش� ��带 �湮�ߴٰ� ǥ��
	for (int j = 1; j < SIZE + 1; j++) {
		if (map[v][j] == 1 && !visited[j]) {//visited[j]==0
			printf("%d->%d�� �̵�\n", v, j);
			DFS(j);
		}
	}
}

int main() {

	DFS(1);//1�� ������ ���
	printf("\n");

	return 0;
}