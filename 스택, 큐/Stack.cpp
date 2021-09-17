//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define SIZE 5
//
//int stack[SIZE];//선형 자료구조
//void push(int);//스택에 데이터 한 개 삽입
//void pop();//스택에서 데이터 한 개 삭제
//void display();//스택의 내용 보여주기
//int top = -1;
//
//void menu() {
//	printf("\n---------------------------------------------\n");
//	printf("1번 스택에 삽입(push) 2번 스택에서 삭제(pop)\n");
//	printf("3번 내용 보기(display) 4번 프로그램 종료(exit)\n");
//	printf("---------------------------------------------\n");
//}
//
//int main() {
//	int val, n;
//
//	printf("*****스택 구현 메뉴*****\n");
//
//	while (1) {
//		menu();
//		printf("메뉴를 선택하세요 : ");
//		scanf("%d", &n);
//
//		switch (n) {
//
//		case 1://push
//			printf("스택에 삽입할 숫자 : ");
//			scanf("%d", &n);
//			push(n);
//			break;
//
//		case 2://pop
//			pop();
//			break;
//
//		case 3://display
//			display();
//			break;
//
//		case 4://exit
//			return 0;
//
//		default:
//			printf("다시 입력하세요");
//		}
//	}
//	return 0;
//}
//
//void push(int n) {
//	if (top == SIZE-1) {
//		printf("스택이 가득참\n");
//	}
//	else {
//		stack[++top] = n;
//	}
//}
//
//void pop() {//스택이 비었을 때는 스택이 비었음이라고 표시
//	if (top == -1) {
//		printf("스택이 비었음\n");
//	}
//	else {
//		printf("%d가 삭제됨\n", stack[top--]);
//	}
//}
//
//void display() {
//	printf("스택 내용을 보여줘요\n");
//	for (int i = 0; i <=top; i++) {
//		printf("%4d", stack[i]);
//	}
//}