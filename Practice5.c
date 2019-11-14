//完成猜数字游戏
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu(){
	printf("****************\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("****************\n");
	printf("请输入您的选择:");
	int choice;
	scanf("%d", &choice);
	return choice;
}
void Game(){
	int toGuess = rand() % 100 + 1;
	while (1){
		printf("请输入您要猜的数字(1-100):");
		int n = 0;
		scanf("%d", &n);
		if (n < toGuess){
			printf("猜低啦\n");
		}
		else if (n>toGuess){
			printf("猜高啦\n");
		}
		else{
			printf("恭喜您，猜对啦\n");
			break;
		}
	}
}
int main(){
	srand((unsigned)time(0));// 设置随机种子
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("游戏结束\n");
			break;
		}
		else{
			printf("您的输入有误  请重新输入\n");
		}
	}
	system("pause");
	return 0;
}
