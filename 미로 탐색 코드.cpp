#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int m[9][9] = {
//2:벽 0:길
{2,2,2,2,2,2,2,2,2},
{2,0,0,0,0,0,0,0,2},
{2,0,2,2,0,2,2,0,2},
{2,0,2,0,0,2,0,0,2},
{2,0,2,0,2,0,2,0,2},
{2,0,0,0,0,0,2,0,2},
{2,2,0,2,2,0,2,2,2},
{2,0,0,0,0,0,0,0,2},
{2,2,2,2,2,2,2,2,2}
};

int Si, Sj, Ei, Ej; //i,j 행,열   Si, Sj 출발점   Ei, Ej 도착점
int success, top, path_i[100], path_j[100]; //재귀함수는 시스템 스택
//S:start,출발점   E:end,도착점   top 경로 배열 인덱스
//path_i path_j:지나간 길, 즉 행과 열을 저장함(i는 행,j는 열)


int visit(int, int);// 미로 탐색하는 함수, 방문 여부

int main() {
	top = 0;
	success = 0;//미로 탈출 성공 여부
	printf("========미로 탈출 경로 찾기========\n");
	Si = 1, Sj = 1, Ei = 7, Ej = 7;
	
	if (visit(Si, Sj) == 0) {
		printf("미로의 출구를 찾을 수 없음");
	}
	else {
		printf("모든 미로의 출구를 찾음");
	}

	return 0; 
}

void printfPath() {//미로에서 찾은 길을 출력하는 함수
	for (int i = 0; i < top; i++) {
		printf("[%d, %d]", path_i[i], path_j[i]);
	}
	printf("\n");
}
int visit(int i, int j) {
	static int pathCount = 1;//찾은 경로의 수를 카운트
	m[i][j] = 1;//지나갈 길에 1로 세팅, 지나갈 수 있는 길은 0인 경우
	path_i[top] = i;//지나갈 행 저장
	path_j[top] = j;//지나간 열 저장
	top++;
	//만약에 End(7, 7) 도착점에 도착했을 때 
	if (i == Ei && j == Ej) {
		success = 1;
		printf("찾은 경로 %d번\n", pathCount++);
		printfPath();
	}
	//미로를 탐색하는 코드
	if (m[i][j + 1] == 0)//배열의 오른쪽 이동, 0이면 갈 수 있다는 의미
		visit(i, j + 1);
	if (m[i][j - 1] == 0)//배열의 왼쪽 이동
		visit(i, j - 1);
	if(m[i+1][j]==0)//배열의 아래행으로 이동
		visit(i+1, j);
	if(m[i-1][j]==0)//배열의 위으로 이동
		visit(i-1, j);

	top--;//모든 길이 막혀있으면 이전 단계로 돌아감
	//재귀적 함수의 호출에 따른 시스템 스택의 깊이를 표시
	m[i][j] = 0;//이전 단계로 돌아가면서 1을 0으로 다시 세팅
	//새로운 길을 찾도록 다시 0으로 세팅

	return success;
}