//��ɲ�������Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu(){
	printf("****************\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("****************\n");
	printf("����������ѡ��:");
	int choice;
	scanf("%d", &choice);
	return choice;
}
void Game(){
	int toGuess = rand() % 100 + 1;
	while (1){
		printf("��������Ҫ�µ�����(1-100):");
		int n = 0;
		scanf("%d", &n);
		if (n < toGuess){
			printf("�µ���\n");
		}
		else if (n>toGuess){
			printf("�¸���\n");
		}
		else{
			printf("��ϲ�����¶���\n");
			break;
		}
	}
}
int main(){
	srand((unsigned)time(0));// �����������
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("��Ϸ����\n");
			break;
		}
		else{
			printf("������������  ����������\n");
		}
	}
	system("pause");
	return 0;
}
