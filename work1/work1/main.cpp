#include<stdio.h>
#include<WinSock2.h>
#include<Windows.h>
#include<mysql.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<pthread.h>
#include<math.h>
#include<tchar.h>
#include <cstdlib>
#include<mmsystem.h>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "pthreadVC2.lib")
#define HAVE_STRUCT_TIMESPEC
#define bzero(a, b)      memset(a, 0, b)
#define str "   Sun   Mon   Tue   Wed   Thu   Fri   Sat   "
MYSQL_RES *res;
MYSQL_ROW row;
MYSQL *connection;
const char *sql;
void menu();
void schedule();
void diary();
void fitness();
void financial();
void reading();
void password();
void businesscard();
void webpage();
void calendar();
void *clock_1(void *args);
void setting();
void signin();
void registe();
void color();
void getbackpw();
void choose();
void fconn();
void printwindow();
void hellocat();
void hellotinyheart();
void changepw();
void helloworld();
void frame();
void calendar_menu();
int calendar_days_month(int year, int month);
int calendar_week_someday(int year, int month, int day);
void calendar_someday();
void calendar_year_month(int year, int month);
void calendar_month();
void calendar_now_week();
int LunarCalendar(int year, int month, int day);
void calendar_lunar();
void Constellation(int month, int day);
void menu_c();
void menuSchedule();
void setXY(int x, int y);
void menuQuerySche();
void menuFuzzyQuerySche();
void menuAddSche();
void menuUpdateSche();
void menuDeleteSche();
void fquerySche();
void fFuzzyQuerySche();
void faddSche();
void fupdateSche();
void fdeleteSche();
void businesscard();
void menuCard();
void menuQueryCard();
void menuFuzzyQueryCard();
void menuAddCard();
void menuUpdateCard();
void menuDeleteCard();
void fqueryCard();
void fFuzzyQueryCard();
void faddCard();
void fupdateCard();
void fdeleteCard();
void menuDiary();
void menuQueryDiary();
void menuFuzzyQueryDiary();
void menuAddDiary();
void menuUpdateDiary();
void menuDeleteDiary();
void fqueryDiary();
void fFuzzyQueryDiary();
void faddDiary();
void fupdateDiary();
void fdeleteDiary();
void menuFinancial();
void menuQueryFin();
void menuAddFin();
void menuUpdateFin();
void menuDeleteFin();
void menuFuzzyQueryFin();
void menuDeletePrintFin();
void fqueryFin();
void faddFin();
void fupdateFin();
void fdeleteFin();
void fFuzzyQueryFin();
void fdeleteBatchFin();
int idFin();
int timeJudgeFin(char *date);
void menuFinancialChoice();
void menuFitness();
void menuFitnessChoice();
void menuQueryFit();
void menuAddFit();
void menuUpdateFit();
void menuDeleteFit();
void menuFuzzyQueryFit();
void menuDeletePrintFit();
void fqueryFit();
void faddFit();
void fupdateFit();
void fdeleteFit();
void fFuzzyQueryFit();
void fdeleteBatchFit();
int idFit();
int timeJudgeFit(char *date);
void menuPassword();
void menuQueryPass();
void menuFuzzyQueryPass();
void menuAddPass();
void menuUpdatePass();
void menuDeletePass();
void fqueryPass();
void fFuzzyQueryPass();
void faddPass();
void fupdatePass();
void fdeletePass();
void menuWebpage();
void menuWebpageChoice();
void menuQueryWeb();
void menuAddWeb();
void menuUpdateWeb();
void menuDeleteWeb();
void menuFuzzyQueryWeb();
void menuDeletePrintWeb();
void fqueryWeb();
void faddWeb();
void fupdateWeb();
void fdeleteWeb();
void fFuzzyQueryWeb();
void fdeleteBatchWeb();
int idWeb();
int webpageJudge(char *address);
void frame_1();
void bookmark_menu();
void bookmark_fadd();
void bookmark_fdelete();
void bookmark_fupdate();
int bookmark_number();
void bookmark_row_fquery(int row_number);
void bookmark_fquery();
void cat();
void aninal();
void cat_lee();
void pig();
void bookmark_fuery_domenu();
void bookmark_fquery_menu();
void bookmark_fuzzy_fquery();
void setXY(int x, int y);
float f(float x, float y, float z);
float h(float x, float z);
int startX = 32;
int startY = 5;
bool ifsign = false;
bool ifclock = true;
unsigned int LunarCalendarDay;
int MonthAdd[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
char userid[50];
using namespace std;
int main() {
	system("pause");
	int ret_1;
	int ret_2;
	pthread_t star_location_1;
	system("color FC");
	memset(userid, 0, 50);
	hellotinyheart();
	fconn();
	while (!ifsign)
	{
		choose();
	}
	int choice = 0;
	while (true)
	{
		menu();
		ifclock = true;
		ret_1 = pthread_create(&star_location_1, NULL, clock_1, NULL);
		if (ret_1 == !0) {
			printf("creat_error_1");
		}
		setXY(startX + 1, startY + 15);
		scanf("%d", &choice);
		setbuf(stdin, NULL);
		switch (choice)
		{
		case 1:
			ifclock = false;
			schedule();
			break;
		case 2:
			ifclock = false;
			diary();
			break;
		case 3:
			ifclock = false;
			fitness();
			break;
		case 4:
			ifclock = false;
			financial();
			break;
		case 5:
			ifclock = false;
			reading();
			break;
		case 6:
			ifclock = false;
			password();
			break;
		case 7:
			ifclock = false;
			businesscard();
			break;
		case 8:
			ifclock = false;
			webpage();
			break;
		case 9:
			ifclock = false;
			calendar();
			break;
		case 10:
			ifclock = false;
			setting();
			break;
		case 11:
			ifclock = false;
			break;
		default:
			setXY(startX + 1, startY + 16);
			printf("输入错误，请输入1~11内有的一个数字！");
			setXY(startX + 1, startY + 17);
			system("pause");
			break;
		}
		if (choice == 11)
		{
			break;
		}
	}
	pthread_join(star_location_1, NULL);
	hellocat();
}
void menu() {
	printwindow();
	setXY(startX + 21, startY + 2);
	printf("1.个人日程");
	setXY(startX + 21, startY + 3);
	printf("2.个人日记");
	setXY(startX + 21, startY + 4);
	printf("3.个人健身");
	setXY(startX + 21, startY + 5);
	printf("4.个人理财");
	setXY(startX + 21, startY + 6);
	printf("5.个人书签");
	setXY(startX + 21, startY + 7);
	printf("6.个人密码");
	setXY(startX + 21, startY + 8);
	printf("7.个人名片");
	setXY(startX + 21, startY + 9);
	printf("8.个人网页");
	setXY(startX + 21, startY + 10);
	printf("9.万年历");
	setXY(startX + 21, startY + 11);
	printf("10.设置");
	setXY(startX + 21, startY + 12);
	printf("11.退出");

	setXY(startX + 1, startY + 16);
	printf("请输入你想要进行的操作：");

	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
}
void schedule() {
	int choice = 0;
	bool a = true;
	while (a)
	{
		menuSchedule();
		setXY(startX + 1, startY + 17);
		printf("请输入你想要进行的操作：");
		setXY(startX + 25, startY + 17);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			menuQuerySche();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 2:
			fFuzzyQuerySche();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 3:
			menuAddSche();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 4:
			fupdateSche();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 5:
			menuDeleteSche();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 6:
			a = false;
			break;
		default:
			setXY(startX + 1, startY + 17);
			printf("输入错误，请输入1~6内有的一个数字！\n");
			setXY(startX + 1, startY + 18);
			system("pause");
			break;
		}
	}
	getchar();
}
void diary() {
	int choice = 0;
	bool a = true;
	while (a)
	{
		menuDiary();
		setXY(startX + 1, startY + 17);
		printf("请输入你想要进行的操作：");
		setXY(startX + 25, startY + 17);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			menuQueryDiary();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 2:
			fFuzzyQueryDiary();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 3:
			menuAddDiary();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 4:
			fupdateDiary();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 5:
			menuDeleteDiary();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 6:
			a = false;
			break;
		default:
			setXY(startX + 1, startY + 16);
			printf("输入错误，请输入1~6内有的一个数字！\n");
			setXY(startX + 1, startY + 17);
			system("pause");
			break;
		}
	}
	getchar();
}
void fitness() {
	menuFitnessChoice();
}
void financial() {
	menuFinancialChoice();
}
void reading() {
	int choice;
	bookmark_menu();
	bool a = true;
	setXY(startX + 23, startY + 17);
	printf("请选择：");
	while (a)
	{
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			system("cls");
			frame();
			bookmark_fadd();
			break;
		case 2://改
			system("cls");
			frame();
			bookmark_fuery_domenu();
			break;
		case 3:
			system("cls");
			frame();
			bookmark_fupdate();
			break;
		case 4:
			system("cls");
			frame();
			bookmark_fdelete();
			break;

		case 5:
			a = false;
			break;

		default:
			setXY(startX + 10, startY + 17);
			printf("输入错误，请输入1~5内有的一个数字！\n");
			setXY(startX + 19, startY + 19);
			printf("按任意键重新选择");
			getch();
			system("cls");
			bookmark_menu();
			break;
		}
		if (choice == 5)
			break;
	}
}
void password() {
	int choice = 0;
	bool a = true;
	while (a)
	{
		menuPassword();
		setXY(startX + 1, startY + 17);
		printf("请输入你想要进行的操作：");
		setXY(startX + 25, startY + 17);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			menuQueryPass();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 2:
			fFuzzyQueryPass();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 3:
			menuAddPass();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 4:
			fupdatePass();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 5:
			menuDeletePass();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 6:
			a = false;
			break;
		default:
			setXY(startX + 1, startY + 17);
			printf("输入错误，请输入1~6内有的一个数字！\n");
			setXY(startX + 1, startY + 18);
			system("pause");
			break;
		}
	}
	getchar();
}
void businesscard() {
	int choice = 0;
	bool a = true;
	while (a)
	{
		menuCard();
		setXY(startX + 25, startY + 17);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			menuQueryCard();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 2:
			fFuzzyQueryCard();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 3:
			menuAddCard();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 4:
			fupdateCard();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 5:
			menuDeleteCard();
			while (choice != 0) {
				setXY(startX + 12, startY + 17);
				scanf("%d", &choice);
			}
			break;
		case 6:
			a = false;
			break;
		default:
			setXY(startX + 1, startY + 16);
			printf("输入错误，请输入1~6内有的一个数字！\n");
			setXY(startX + 1, startY + 17);
			system("pause");
			break;
		}
	}
	getchar();
}
void webpage() {
	menuWebpageChoice();
}
void calendar() {
	menu_c();
}
void *clock_1(void *args) {
	int i = 0;
	int year;
	int month;
	int day;
	int hour;
	int min;
	int sec;
	while (ifclock)
	{
		menu();
		time_t rawtime;
		struct tm * timeinfo;
		time(&rawtime);
		timeinfo = localtime(&rawtime);
		year = timeinfo->tm_year + 1900;
		month = timeinfo->tm_mon + 1;
		day = timeinfo->tm_mday;
		hour = timeinfo->tm_hour;
		min = timeinfo->tm_min;
		sec = timeinfo->tm_sec;
		setXY(startX - 32, startY - 2);
		printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
		setXY(startX + 21, startY - 3);
		printf("当前时间为：");
		setXY(startX + 12, startY - 2);
		printf("%d年 %d月 %d日 %d时 %d分 %d 秒", year, month, day, hour, min, sec);
		setXY(startX + i - 2, startY - 5);
		printf(" 欢迎使用白金手册！");
		i = i + 4;
		aninal();
		setXY(startX + 25, startY + 16);
		if (i == 40)
		{
			i = 0;
		}
		Sleep(1000);
	}
	return 0;
}
void setting() {
	int	choice = 0;
	bool aaa = true;
	while (aaa)
	{
		printwindow();

		setXY(startX - 32, startY - 3);
		printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
		setXY(startX - 32, startY + 23);
		printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
		setXY(startX + 20, startY + 2);
		printf("1.更换皮肤");
		setXY(startX + 20, startY + 4);
		printf("2.更改密码");
		setXY(startX + 20, startY + 6);
		printf("3.返回");
		setXY(startX + 20, startY + 8);
		aninal();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			color();
			break;
		case 2:
			changepw();
			break;
		case 3:
			aaa = false;
			break;
		default:
			setXY(startX + 20, startY + 12);
			printf("请输入1~3内有的一个数字！");
			setXY(startX + 20, startY + 13);
			system("pause");
			break;
		}
	}
}
void signin() {
	int i = 1;
	int j = 0;
	int x = 1;
	int y = 0;
	char id[50];
	char query[100];
	char password[50];
	char passwords[50];
	char select[50] = "select password from user where id = '";
	char d[50] = "'";
	memset(query, 0, 100);
	memset(id, 0, 50);
	system("cls");
	setXY(startX, startY);
	printwindow();
	setXY(startX + 24, startY + 5);
	printf("登陆");
	setXY(startX + 20, startY + 7);
	printf("账号：");
	setXY(startX + 20, startY + 8);
	printf("密码：");
	setXY(startX + 25, startY + 7);
	cin.getline(id, 50);
	setXY(startX + 25, startY + 8);
	cin.getline(password, 50);
	mysql_set_character_set(connection, "gbk");
	strcat(query, select);
	strcat(query, id);
	strcat(query, d);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);
	if (row = mysql_fetch_row(res))
	{
		strcpy(passwords, row[0]);
		x = strcmp(password, passwords);
	}
	if (x == 0)
	{
		ifsign = true;
		strcpy(userid, id);
	}
	else
	{
		setXY(startX + 20, startY + 9);
		printf("账号或密码错误，请重试！");
		setXY(startX + 20, startY + 10);
		system("pause");
	}
	mysql_free_result(res);
}
void registe() {
	int i = 1;
	int n = 1;
	char id[50];
	char password[50];
	char answer[50];
	char query[80];
	char a[50] = "insert into user(id,password,answer) values('";
	char b[50] = "','";
	char c[50] = "')";
	memset(id, 0, 50);
	memset(password, 0, 50);
	memset(query, 0, 80);
	system("cls");
	setXY(startX, startY);
	printwindow();
	setXY(startX + 24, startY + 5);
	printf("注册");
	setXY(startX + 20, startY + 7);
	printf("账号：");
	setXY(startX + 20, startY + 8);
	printf("密码：");
	setXY(startX + 20, startY + 9);
	printf("密保问题：你家乡在哪里？");
	setXY(startX + 20, startY + 10);
	printf("回答：");
	setXY(startX + 25, startY + 7);
	scanf("%s", id);
	setXY(startX + 25, startY + 8);
	scanf("%s", password);
	setXY(startX + 25, startY + 10);
	scanf("%s", answer);
	mysql_set_character_set(connection, "gbk");
	strcat(query, a);
	strcat(query, id);
	strcat(query, b);
	strcat(query, password);
	strcat(query, b);
	strcat(query, answer);
	strcat(query, c);
	sql = query;
	n = mysql_query(connection, sql);
	if (!n) {
		setXY(startX + 20, startY + 11);
		printf("数据添加成功\n");
		setXY(startX + 20, startY + 12);
		system("pause");
	}
	else {
		setXY(startX + 20, startY + 11);
		printf("数据添加失败\n");
		setXY(startX + 20, startY + 12);
		system("pause");
	}
}
void setXY(int x, int y) {
	HANDLE hout;
	COORD coord;
	coord.X = x;
	coord.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, coord);
}
void getbackpw() {
	int i = 1;
	int x = 1;
	system("cls");
	char id[50];
	char answer_1[50];
	char query[50];
	memset(id, 0, 50);
	memset(query, 0, 50);
	setXY(startX, startY);
	printwindow();
	setXY(startX + 24, startY + 5);
	printf("密码找回");
	setXY(startX + 20, startY + 7);
	printf("账号：");
	setXY(startX + 20, startY + 8);
	printf("密保问题：你的家乡在哪里？");
	setXY(startX + 20, startY + 9);
	printf("回答：");
	setXY(startX + 25, startY + 7);
	scanf("%s", id);
	setXY(startX + 25, startY + 9);
	scanf("%s", answer_1);
	mysql_set_character_set(connection, "gbk");
	char a[50] = "select answer from user where id = '";
	char d[50] = "'";
	strcat(query, a);
	strcat(query, id);
	strcat(query, d);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);
	if (row = mysql_fetch_row(res))
	{
		x = strcmp(answer_1, row[0]);
		if (x == 0)
		{
			mysql_free_result(res);
			char a[50] = "select password from user where id = '";
			memset(query, 0, 50);
			strcat(query, a);
			strcat(query, id);
			strcat(query, d);
			sql = query;
			mysql_query(connection, sql);
			res = mysql_use_result(connection);
			if (row = mysql_fetch_row(res))
			{
				setXY(startX + 20, startY + 10);
				printf("密码：");
				printf(row[0]);
				setXY(startX + 20, startY + 11);
				system("pause");
			}
		}
		else
		{
			setXY(startX + 20, startY + 10);
			printf("密保错误");
			setXY(startX + 20, startY + 11);
			system("pause");
		}
	}
	else
	{
		setXY(startX + 20, startY + 10);
		printf("账号不存在");
		setXY(startX + 20, startY + 11);
		system("pause");
	}
	mysql_free_result(res);
}
void choose() {
	int i = 1;
	int choice = 0;
	system("cls");
	setXY(startX, startY);
	printwindow();
	setXY(startX + 22, startY + 4);
	printf("登陆方式");
	setXY(startX + 20, startY + 7);
	printf("1.登陆");
	setXY(startX + 20, startY + 8);
	printf("2.注册");
	setXY(startX + 20, startY + 9);
	printf("3.找回密码");
	setXY(startX + 1, startY + 15);
	scanf("%d", &choice);
	setbuf(stdin, NULL);
	switch (choice)
	{
	case 1:
		signin();
		break;
	case 2:
		registe();
		break;
	case 3:
		getbackpw();
		break;
	default:
		break;
	}
}
void color() {
	char choice[50] = "0";
	bool aaa = true;
	while (aaa)
	{
		printwindow();
		memset(choice, '\0', 50);
		setXY(startX - 32, startY - 3);
		printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
		setXY(startX - 32, startY + 23);
		printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
		setXY(startX + 23, startY + 2);
		printf("1.白红");
		setXY(startX + 23, startY + 3);
		printf("2.白蓝");
		setXY(startX + 23, startY + 4);
		printf("3.灰红");
		setXY(startX + 23, startY + 5);
		printf("4.黄紫");
		setXY(startX + 23, startY + 6);
		printf("5.绿黄");
		setXY(startX + 23, startY + 7);
		printf("6.蓝绿");
		setXY(startX + 23, startY + 8);
		printf("7.紫白");
		setXY(startX + 23, startY + 9);
		printf("8.黑浅绿");
		setXY(startX + 23, startY + 10);
		printf("9.返回");
		aninal();
		setXY(startX + 1, startY + 16);
		setbuf(stdin, NULL);
		scanf("%s", &choice);
		if (choice[1] == '\0')
		{
			switch (choice[0])
			{
			case '1':
				system("color fc");
				break;
			case '2':
				system("color f9");
				break;
			case '3':
				system("color 7c");
				break;
			case '4':
				system("color ed");
				break;
			case '5':
				system("color 3e");
				break;
			case '6':
				system("color 93");
				break;
			case '7':
				system("color df");
				break;
			case '8':
				system("color 03");
				break;
			case '9':
				aaa = false;
				break;
			default:
				setXY(startX + 1, startY + 16);
				printf("请输入1~9内有的一个数字！");
				setXY(startX + 26, startY + 16);
				system("pause");
				break;
			}
		}
		else {
			setXY(startX + 1, startY + 16);
			printf("请输入1~9内有的一个数字！");
			setXY(startX + 26, startY + 16);
			system("pause");
		}
	}
}
void fconn() {
	int i = 1;
	system("cls");
	setXY(startX, startY);
	printwindow();
	const char *server = "localhost";//数据库服务器
	const char *user = "root";//登录用户名
	const char *password = "";//登录密码
	const char *database = "bjsc";//数据库名
	connection = mysql_init(NULL);//初始化
	if (!mysql_real_connect(connection, server, user, password, database, 0, NULL, 0)) {
	}
	else {
	}
	setXY(startX + 21, startY + 6);
}
void printwindow() {
	int i = 1;
	system("cls");
	setXY(startX, startY);
	printf("┌──────────────────── 白金手册 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 60, startY + 17);
}

void hellocat() {
	int a = 30;
	system("cls");
	for (int x = 0; x<30; x++) {
		for (int y = 0; y<60 + a; y++) {
			if (x == 0 || x == 29) { if (y<a)cout << " "; else cout << "*"; }
			else if (x == 1) { if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else cout << " "; }
			else if (x == 2) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 9 || y == a + 50)cout << "*";
				else if (y == a + 22 || y == a + 24 || y == a + 26 || y == a + 28 || y == a + 30 || y == a + 32 || y == a + 34 ||
					y == a + 36 || y == a + 38)cout << "*"; else cout << " ";
			}
			else if (x == 3) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == 8 + a || y == 10 + a)cout << "*";
				else if (y == 12 + a || y == 18 + a || y == a + 42 || y == a + 47 || y == a + 49 || y == a + 51)cout << "*"; else cout << " ";
			}
			else if (x == 4) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 8 || y == a + 11 || y == a + 15 || y == a + 45
					|| y == a + 48 || y == a + 51)cout << "*"; else cout << " ";
			}
			else if (x == 5) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 8 || y == a + 13 || y == a + 47 || y == a + 51)
					cout << "*"; else cout << " ";
			}
			else if (x == 6) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 8 || y == a + 51)
					cout << "*"; else cout << " ";
			}
			else if (x == 7) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 6
					|| y == a + 53)cout << "*"; else cout << " ";
			}
			else if (x == 8) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 5
					|| y == a + 54)cout << "*"; else cout << " ";
			}
			else if (x == 9) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 4
					|| y == a + 55)cout << "*"; else cout << " ";
			}
			else if (x == 10) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 3
					|| y == a + 56)cout << "*";
				else if (y >= a + 9 && y != a + 10 && y != a + 12 && y != a + 14 && y != a + 16 && y != a + 18 && y != a + 20 && y != a + 22 && y != a + 24 && y != a + 26 && y <= a + 27)cout << "*";
				else if (y >= a + 32 && y != a + 33 && y != a + 35 && y != a + 37 && y != a + 39 && y != a + 41 && y != a + 43 && y != a + 45 && y != a + 47 && y != a + 49 && y <= a + 50)cout << "*"; else cout << " ";
			}
			else if (x == 11) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y == a + 10 || y == a + 49 || y == a + 26 || y == a + 33)
					cout << "*"; else if (y >= a + 14 && y <= a + 17)cout << "*"; else if (y >= a + 42 &&
						y <= a + 45)cout << "*"; else cout << " ";
			}
			else if (x == 12) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y == a + 12 || y == a + 24 || y == a + 35 || y == a + 47)
					cout << "*"; else cout << " ";
			}
			else if (x == 13) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y >= a + 14 && y != a + 15 && y != a + 17 && y != a + 19 && y <= a + 20)cout << "*"; else if
					(y >= a + 39 && y != a + 40 && y != a + 42 && y != a + 44 && y <= a + 45)cout << "*"; else cout << " ";
			}
			else if (x == 14) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else cout << " ";
			}
			else if (x == 15) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y == a + 8 || y == 50 + a) cout << "*"; else cout << " ";
			}
			else if (x == 16) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y == a + 8 || y == 50 + a) cout << "*"; else cout << " ";
			}
			else if (x == 17) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y == a + 8 || y == 50 + a) cout << "*"; else cout << " ";
			}
			else if (x == 18) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y == a + 9 || y == 49 + a) cout << "*"; else cout << " ";
			}
			else if (x == 19) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 2
					|| y == a + 57)cout << "*"; else if (y == a + 10 || y == 48 + a) cout << "*"; else cout << " ";
			}
			else if (x == 20) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 3
					|| y == a + 56)cout << "*"; else if (y == a + 11 || y == 47 + a) cout << "*"; else cout << " ";
			}
			else if (x == 21) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 4
					|| y == a + 55)cout << "*"; else if (y == a + 13 || y == 45 + a) cout << "*"; else cout << " ";
			}
			else if (x == 22) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 5
					|| y == a + 54)cout << "*"; else if (y == a + 15 || y == 43 + a) cout << "*"; else cout << " ";
			}
			else if (x == 23) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 7
					|| y == a + 52)cout << "*"; else if (y == a + 17 || y == 41 + a) cout << "*"; else cout << " ";
			}
			else if (x == 24) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 10
					|| y == a + 49)cout << "*"; else if (y == a + 21 || y == a + 25 || y == a + 29 || y == a + 33 || y == a + 37)cout << "*"; else cout << " ";
			}
			else if (x == 25) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 13
					|| y == a + 46)cout << "*"; else cout << " ";
			}
			else if (x == 26) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if
					(y >= a + 17 && y != a + 18 && y != a + 20 && y != a + 22 && y != a + 24 && y != a + 26 &&
						y != a + 28 && y != a + 29 && y != a + 31 && y != a + 33 && y != a + 35 && y != a + 37 &&
						y != a + 39 && y != a + 41 && y <= 42 + a)cout << "*"; else cout << " ";
			}
			else if (x == 27) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 16
					|| y == a + 25 || y == a + 29 || y == a + 30 || y == a + 31 || y == a + 35 || y == a + 43)cout << "*"; else cout << " ";
			}
			else if (x == 28) {
				if (y<a)cout << " "; else if (y == a || y == 59 + a) cout << "$"; else if (y == a + 15
					|| y == a + 26 || y == a + 27 || y == a + 33 || y == a + 34 || y == a + 44)cout << "*"; else cout << " ";
			}

		}
		cout << endl;
	}
	setXY(56, 19);
	printf("感谢使用");
	setXY(0, 0);
	Sleep(1000);
}
float f(float x, float y, float z) {
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}
float h(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (f(x, y, z) <= 0.0f)
			return y;
	return 0.0f;
}
void hellotinyheart() {
	int x = 0;
	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
	_TCHAR buffer[25][80] = { _T(' ') };
	_TCHAR ramp[] = _T(".:-=+*#%@");

	for (float t = 0.0f;; t += 0.1f) {
		int sy = 0;
		float s = sinf(t);
		float a = s * s * s * s * 0.2f;
		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
			_TCHAR* p = &buffer[sy++][0];
			float tz = z * (1.2f - a);
			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
				float tx = x * (1.2f + a);
				float v = f(tx, 0.0f, tz);
				if (v <= 0.0f) {
					float y0 = h(tx, tz);
					float ny = 0.01f;
					float nx = h(tx + ny, tz) - y0;
					float nz = h(tx, tz + ny) - y0;
					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
					*p++ = ramp[(int)(d * 5.0f)];
				}
				else
					*p++ = ' ';
			}
		}
		for (sy = 0; sy < 25; sy++) {
			COORD coord = { 0, sy };
			SetConsoleCursorPosition(o, coord);
			WriteConsole(o, buffer[sy], 79, NULL, 0);
		}
		Sleep(13);
		x++;
		if (x == 66)
		{
			break;
		}
	}
	helloworld();
}
void helloworld() {
	Sleep(500);
	setXY(startX + 40, startY + 5);
	printf("欢");
	setXY(startX + 44, startY + 5);
	printf("迎");
	Sleep(500);
	setXY(startX + 40, startY + 5);
	printf("欢");
	setXY(startX + 44, startY + 5);
	printf("迎");
	setXY(startX + 42, startY + 6);
	printf("使");
	setXY(startX + 46, startY + 6);
	printf("用");
	Sleep(500);
	setXY(startX + 40, startY + 5);
	printf("欢");
	setXY(startX + 44, startY + 5);
	printf("迎");
	setXY(startX + 42, startY + 6);
	printf("使");
	setXY(startX + 46, startY + 6);
	printf("用");
	setXY(startX + 44, startY + 7);
	printf("白");
	setXY(startX + 48, startY + 7);
	printf("金");
	setXY(startX + 52, startY + 7);
	printf("手");
	setXY(startX + 56, startY + 7);
	printf("册");
	Sleep(500);
	setXY(startX + 40, startY + 5);
	printf("欢");
	setXY(startX + 44, startY + 5);
	printf("迎");
	setXY(startX + 42, startY + 6);
	printf("使");
	setXY(startX + 46, startY + 6);
	printf("用");
	setXY(startX + 44, startY + 7);
	printf("白");
	setXY(startX + 48, startY + 7);
	printf("金");
	setXY(startX + 52, startY + 7);
	printf("手");
	setXY(startX + 56, startY + 7);
	printf("册");
	setXY(startX + 46, startY + 9);
	printf("by:张泽宇、谢逸舟、李冰洋、刘日章");
	Sleep(1000);
}
//表格框架
void frame() {
	startX = 32;
	startY = 5;
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────────────────────────────────────┐");
	setXY(startX, startY + 18);
	printf("└─────────────────────────────────────────────────┘");

	aninal();
}
//操作菜单 
void calendar_menu() {
	startX = 32;
	startY = 5;
	int i = 1, choice;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────────── 万年历────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 50, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└─────────────────────────────────────────────────┘");
	setXY(startX + 21, startY + 2);
	printf("1.查看当前日历");
	setXY(startX + 21, startY + 4);
	printf("2.年日历");
	setXY(startX + 21, startY + 6);
	printf("3.月日历");
	setXY(startX + 21, startY + 8);
	printf("4.具体查询");
	setXY(startX + 21, startY + 10);
	printf("5.查询农历");
	setXY(startX + 21, startY + 12);
	printf("6.返回主菜单");
	printf("\n\n\n");
	setXY(startX + 23, startY + 16);
	printf("请选择：");

	aninal();
}
//计算某月有多少天
int calendar_days_month(int year, int month) {
	int endDayOfMonth;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		endDayOfMonth = 31;
	else if (month == 2)
	{
		if (year % 4 == 0 && year % 100 != 0)
			endDayOfMonth = 29;
		else
			endDayOfMonth = 28;
	}
	else
		endDayOfMonth = 30;
	return endDayOfMonth;
}
//计算某天是星期几
int calendar_week_someday(int year, int month, int day) {
	int months, years, weeks;
	if (month == 1 || month == 2) {
		months = 12 + month;
		years = year - 1;
	}
	else {
		months = month;
		years = year;
	}
	weeks = (day + 2 * months + 3 * (months + 1) / 5 + years + years / 4 - years / 100 + years / 400 + 1) % 7;
	return weeks;
}
//输出某天是星期几
void calendar_someday()
{
	char weekname[20];
	int year, month, day;
	system("cls");
	frame();
	setXY(startX + 10, startY + 3);
	printf("请输入你要查询的日期");
	setXY(startX + 10, startY + 5);
	printf("年份：");
	scanf("%d", &year);
	setXY(startX + 10, startY + 7);
	printf("月份：");
	scanf("%d", &month);
	if (month>12 || month<1)
	{
		setXY(startX + 10, startY + 9);
		printf("月份有误，任意键重新输入!");
		getch();
		calendar_someday();
	}
	else
	{
		setXY(startX + 10, startY + 9);
		printf("日期：");
		scanf("%d", &day);
		if (day > calendar_days_month(year, month) || day < 1)
		{
			setXY(startX + 10, startY + 11);
			printf("日期有误，任意键重新输入!");
			getch();
			calendar_someday();
		}
		else {
			switch (calendar_week_someday(year, month, day))
			{
			case 0:
				strcpy(weekname, "星期日");
				break;
			case 1:
				strcpy(weekname, "星期一");
				break;
			case 2:
				strcpy(weekname, "星期二");
				break;
			case 3:
				strcpy(weekname, "星期三");
				break;
			case 4:
				strcpy(weekname, "星期四");
				break;
			case 5:
				strcpy(weekname, "星期五");
				break;
			case 6:
				strcpy(weekname, "星期六");
				break;
			}
			setXY(startX + 10, startY + 11);
			printf("查询的日期 %d 年 %d 月 %d 日 是 %s ", year, month, day, weekname);
			setXY(startX + 19, startY + 13);
			Constellation(month, day);
		}
	}
}
//输出年日历
//输出年日历
void calendar_year_month(int year, int month)
{
	int startX = 32;
	int startY = 5;
	int button, key;
	int t = 0, startDayOfMonth;     //startDayOfMonth用于记录某月的第一天是星期几,endDayOfMonth用于记录某月的天数在函数calendar_days_month（）里面 t用于换行提示 
	char skr[10] = "      ";

	//输出某月的日历
	startDayOfMonth = calendar_week_someday(year, month, 1);
	setXY(startX + 10, startY + 2);
	printf("────────  %d 年 %d 月 ─────────\n", year, month);
	setXY(startX + 5, startY + 3);
	printf("------------------------------------------\n");
	setXY(startX + 4, startY + 4);
	printf("%s\n", str);
	setXY(startX + 5, startY + 5);
	for (int i = 0; i < startDayOfMonth; i++)
	{
		printf("%s", skr);
		t++;
	}
	for (int i = 1; i <= calendar_days_month(year, month); i++)
	{
		if (t % 7 == 0)
		{
			setXY(startX + 5, startY + 6);
			printf("%5d ", i);
			startY += 1;
		}
		else
			printf("%5d ", i);
		t++;
	}
	setXY(startX + 5, startY + 7);
	printf("------------------------------------------");
	//利用按键增加可操作性
	setXY(startX + 6, startY + 10);
	printf("ESC键返回");
	setXY(startX + 28, startY + 9);
	printf("←切换上个月日历");
	setXY(startX + 28, startY + 11);
	printf("→切换上个月日历");
}
//输出某月的日历 
void calendar_month() {
	int t = 0, startDayOfMonth;     //startDayOfMonth用于记录某月的第一天是星期几,endDayOfMonth用于记录某月的天数在函数calendar_days_month（）里面 t用于换行提示 
	char skr[10] = "      ";
	int year, month;
	setXY(startX + 17, startY - 1);
	printf("请输入相关日历信息.\n");
	setXY(startX + 14, startY + 2);
	printf("年份：");
	scanf("%d", &year);
	setXY(startX + 31, startY + 2);
	printf("月份：");
	scanf("%d", &month);
	if (month>12 || month<1)
	{
		setXY(startX + 10, startY + 6);
		printf("你输入的月份有误，任意键重新输入!");
		getch();
		system("cls");
		frame();
		calendar_month();
	}
	//输出某月的日历
	else
	{
		startDayOfMonth = calendar_week_someday(year, month, 1);
		setXY(startX + 10, startY + 2);
		printf("────────  %d 年 %d 月 ─────────\n", year, month);
		setXY(startX + 5, startY + 3);
		printf("------------------------------------------\n");
		setXY(startX + 4, startY + 4);
		printf("%s\n", str);
		setXY(startX + 5, startY + 5);
		for (int i = 0; i < startDayOfMonth; i++)
		{
			printf("%s", skr);
			t++;
		}
		for (int i = 1; i <= calendar_days_month(year, month); i++)
		{
			if (t % 7 == 0)
			{
				setXY(startX + 5, startY + 6);
				printf("%5d ", i);
				startY += 1;
			}
			else
				printf("%5d ", i);
			t++;
		}
		setXY(startX + 5, startY + 7);
		printf("------------------------------------------");

	}
}
//输出当前日历
void calendar_now_week() {
	time_t timep;
	struct tm *p;
	time(&timep);
	p = gmtime(&timep);
	int t = 0, endDayOfMonth, startDayOfMonth;     //startDayOfMonth用于记录某月的第一天是星期几,endDayOfMonth用于记录某月的天数 t用于换行提示
	char skr[10] = "      ";
	int year = 1900 + p->tm_year;/*获取当前年份,从1900开始，所以要加1900*/
	int month = 1 + p->tm_mon;/*获取当前月份,范围是0-11,所以要加1*/
	startDayOfMonth = calendar_week_someday(year, month, 1);

	//输出某月的日历
	setXY(startX + 8, startY + 2);
	printf("─────────   %d 年 %d 月 ─────────\n", year, month);
	setXY(startX + 5, startY + 4);
	printf("------------------------------------------\n");
	setXY(startX + 3, startY + 5);
	printf("%s\n", str);
	setXY(startX + 4, startY + 6);
	for (int i = 0; i < startDayOfMonth; i++)
	{
		printf("%s", skr);
		t++;
	}
	for (int i = 1; i <= calendar_days_month(year, month); i++)
	{
		if (t % 7 == 0)
		{
			setXY(startX + 4, startY + 7);
			printf("%5d ", i);
			startY += 1;
		}
		else
			printf("%5d ", i);
		t++;
	}
	setXY(startX + 5, startY + 8);
	printf("------------------------------------------");

}
unsigned int LunarCalendarTable[199] =
{
	0x04AE53,0x0A5748,0x5526BD,0x0D2650,0x0D9544,0x46AAB9,0x056A4D,0x09AD42,0x24AEB6,0x04AE4A,/*1901-1910*/
	0x6A4DBE,0x0A4D52,0x0D2546,0x5D52BA,0x0B544E,0x0D6A43,0x296D37,0x095B4B,0x749BC1,0x049754,/*1911-1920*/
	0x0A4B48,0x5B25BC,0x06A550,0x06D445,0x4ADAB8,0x02B64D,0x095742,0x2497B7,0x04974A,0x664B3E,/*1921-1930*/
	0x0D4A51,0x0EA546,0x56D4BA,0x05AD4E,0x02B644,0x393738,0x092E4B,0x7C96BF,0x0C9553,0x0D4A48,/*1931-1940*/
	0x6DA53B,0x0B554F,0x056A45,0x4AADB9,0x025D4D,0x092D42,0x2C95B6,0x0A954A,0x7B4ABD,0x06CA51,/*1941-1950*/
	0x0B5546,0x555ABB,0x04DA4E,0x0A5B43,0x352BB8,0x052B4C,0x8A953F,0x0E9552,0x06AA48,0x6AD53C,/*1951-1960*/
	0x0AB54F,0x04B645,0x4A5739,0x0A574D,0x052642,0x3E9335,0x0D9549,0x75AABE,0x056A51,0x096D46,/*1961-1970*/
	0x54AEBB,0x04AD4F,0x0A4D43,0x4D26B7,0x0D254B,0x8D52BF,0x0B5452,0x0B6A47,0x696D3C,0x095B50,/*1971-1980*/
	0x049B45,0x4A4BB9,0x0A4B4D,0xAB25C2,0x06A554,0x06D449,0x6ADA3D,0x0AB651,0x093746,0x5497BB,/*1981-1990*/
	0x04974F,0x064B44,0x36A537,0x0EA54A,0x86B2BF,0x05AC53,0x0AB647,0x5936BC,0x092E50,0x0C9645,/*1991-2000*/
	0x4D4AB8,0x0D4A4C,0x0DA541,0x25AAB6,0x056A49,0x7AADBD,0x025D52,0x092D47,0x5C95BA,0x0A954E,/*2001-2010*/
	0x0B4A43,0x4B5537,0x0AD54A,0x955ABF,0x04BA53,0x0A5B48,0x652BBC,0x052B50,0x0A9345,0x474AB9,/*2011-2020*/
	0x06AA4C,0x0AD541,0x24DAB6,0x04B64A,0x69573D,0x0A4E51,0x0D2646,0x5E933A,0x0D534D,0x05AA43,/*2021-2030*/
	0x36B537,0x096D4B,0xB4AEBF,0x04AD53,0x0A4D48,0x6D25BC,0x0D254F,0x0D5244,0x5DAA38,0x0B5A4C,/*2031-2040*/
	0x056D41,0x24ADB6,0x049B4A,0x7A4BBE,0x0A4B51,0x0AA546,0x5B52BA,0x06D24E,0x0ADA42,0x355B37,/*2041-2050*/
	0x09374B,0x8497C1,0x049753,0x064B48,0x66A53C,0x0EA54F,0x06B244,0x4AB638,0x0AAE4C,0x092E42,/*2051-2060*/
	0x3C9735,0x0C9649,0x7D4ABD,0x0D4A51,0x0DA545,0x55AABA,0x056A4E,0x0A6D43,0x452EB7,0x052D4B,/*2061-2070*/
	0x8A95BF,0x0A9553,0x0B4A47,0x6B553B,0x0AD54F,0x055A45,0x4A5D38,0x0A5B4C,0x052B42,0x3A93B6,/*2071-2080*/
	0x069349,0x7729BD,0x06AA51,0x0AD546,0x54DABA,0x04B64E,0x0A5743,0x452738,0x0D264A,0x8E933E,/*2081-2090*/
	0x0D5252,0x0DAA47,0x66B53B,0x056D4F,0x04AE45,0x4A4EB9,0x0A4D4C,0x0D1541,0x2D92B5          /*2091-2099*/
};
//计算农历日历
int LunarCalendar(int year, int month, int day)
{
	int Spring_NY, Sun_NY, StaticDayCount;
	int index, flag;
	//Spring_NY 记录春节离当年元旦的天数。
	//Sun_NY 记录阳历日离当年元旦的天数。
	if (((LunarCalendarTable[year - 1901] & 0x0060) >> 5) == 1)
		Spring_NY = (LunarCalendarTable[year - 1901] & 0x001F) - 1;
	else
		Spring_NY = (LunarCalendarTable[year - 1901] & 0x001F) - 1 + 31;
	Sun_NY = MonthAdd[month - 1] + day - 1;
	if ((!(year % 4)) && (month > 2))
		Sun_NY++;
	//StaticDayCount记录大小月的天数 29 或30
	//index 记录从哪个月开始来计算。
	//flag 是用来对闰月的特殊处理。
	//判断阳历日在春节前还是春节后
	if (Sun_NY >= Spring_NY)//阳历日在春节后（含春节那天）
	{
		Sun_NY -= Spring_NY;
		month = 1;
		index = 1;
		flag = 0;
		if ((LunarCalendarTable[year - 1901] & (0x80000 >> (index - 1))) == 0)
			StaticDayCount = 29;
		else
			StaticDayCount = 30;
		while (Sun_NY >= StaticDayCount)
		{
			Sun_NY -= StaticDayCount;
			index++;
			if (month == ((LunarCalendarTable[year - 1901] & 0xF00000) >> 20))
			{
				flag = ~flag;
				if (flag == 0)
					month++;
			}
			else
				month++;
			if ((LunarCalendarTable[year - 1901] & (0x80000 >> (index - 1))) == 0)
				StaticDayCount = 29;
			else
				StaticDayCount = 30;
		}
		day = Sun_NY + 1;
	}
	else //阳历日在春节前
	{
		Spring_NY -= Sun_NY;
		year--;
		month = 12;
		if (((LunarCalendarTable[year - 1901] & 0xF00000) >> 20) == 0)
			index = 12;
		else
			index = 13;
		flag = 0;
		if ((LunarCalendarTable[year - 1901] & (0x80000 >> (index - 1))) == 0)
			StaticDayCount = 29;
		else
			StaticDayCount = 30;
		while (Spring_NY > StaticDayCount)
		{
			Spring_NY -= StaticDayCount;
			index--;
			if (flag == 0)
				month--;
			if (month == ((LunarCalendarTable[year - 1901] & 0xF00000) >> 20))
				flag = ~flag;
			if ((LunarCalendarTable[year - 1901] & (0x80000 >> (index - 1))) == 0)
				StaticDayCount = 29;
			else
				StaticDayCount = 30;
		}
		day = StaticDayCount - Spring_NY + 1;
	}
	LunarCalendarDay |= day;
	LunarCalendarDay |= (month << 6);
	if (month == ((LunarCalendarTable[year - 1901] & 0xF00000) >> 20))
		return 1;
	else
		return 0;
}
//输出农历日历
//输出农历日历——改
void calendar_lunar() {
	const char *LunarDay[] = { "*","初一","初二","初三","初四","初五",
		"初六","初七","初八","初九","初十",
		"十一","十二","十三","十四","十五",
		"十六","十七","十八","十九","二十",
		"廿一","廿二","廿三","廿四","廿五",
		"廿六","廿七","廿八","廿九","三十"
	};
	const char *LunarMonth[] = { "*","正","二","三","四","五","六","七","八","九","十","十一","腊" };
	struct tm * Local;
	long t;
	int year, month, day;
	char ptr[13] = "";
#if 0
	t = time(NULL);
	Local = localtime(&t);
	year = Local->tm_year + 1900;
	month = Local->tm_mon + 1;
	day = Local->tm_mday;
#else
	system("cls");
	frame();
	setXY(startX + 10, startY + 5);
	printf("年份：");
	scanf("%d", &year);
	setXY(startX + 10, startY + 7);
	printf("月份：");
	scanf("%d", &month);
#endif
	if (month>12 || month<1)
	{
		setXY(startX + 10, startY + 9);
		printf("月份有误，任意键重新输入!");
		getch();
		calendar_lunar();
	}
	else
	{
		setXY(startX + 10, startY + 9);
		printf("日期：");
		scanf("%d", &day);
		if (day > calendar_days_month(year, month) || day < 1)
		{
			setXY(startX + 10, startY + 11);
			printf("日期有误，任意键重新输入!");
			getch();
			calendar_lunar();
		}
		else {
			if (LunarCalendar(year, month, day)) {
				strcat(ptr, "闰");
				strcat(ptr, LunarMonth[(LunarCalendarDay & 0x3C0) >> 6]);
			}
			else
				strcat(ptr, LunarMonth[(LunarCalendarDay & 0x3C0) >> 6]);
			strcat(ptr, "月");
			strcat(ptr, LunarDay[LunarCalendarDay & 0x3F]);
			setXY(startX + 10, startY + 11);
			printf("公历 %d 年 %d 月 %d 日是农历 ", year, month, day);
			puts(ptr);
			getchar();
		}
	}
}
//星座输出
void Constellation(int month, int day) {
	const char * Constellation[12] = { "摩羯座","水瓶座","双鱼座","白羊座","金牛座","双子座","巨蟹座","狮子座","处女座","天平座","天蝎座","射手座" };
	switch (month)
	{
	case 1:
		if (day <= 19)
			printf("今日星座是: %s", Constellation[0]);
		else
			printf("今日星座是: %s", Constellation[1]);
		break;
	case 2:
		if (day <= 22)
			printf("今日星座是: %s", Constellation[1]);
		else
			printf("今日星座是: %s", Constellation[2]);
		break;
	case 3:
		if (day <= 20)
			printf("今日星座是: %s", Constellation[2]);
		else
			printf("今日星座是: %s", Constellation[3]);
		break;
	case 4:
		if (day <= 19)
			printf("今日星座是: %s", Constellation[3]);
		else
			printf("今日星座是: %s", Constellation[4]);
		break;
	case 5:
		if (day <= 22)
			printf("今日星座是: %s", Constellation[4]);
		else
			printf("今日星座是: %s", Constellation[5]);
		break;
	case 6:
		if (day <= 21)
			printf("今日星座是: %s", Constellation[5]);
		else
			printf("今日星座是: %s", Constellation[6]);
		break;
	case 7:
		if (day <= 22)
			printf("今日星座是: %s", Constellation[6]);
		else
			printf("今日星座是: %s", Constellation[7]);
		break;
	case 8:
		if (day <= 22)
			printf("今日星座是: %s", Constellation[7]);
		else
			printf("今日星座是: %s", Constellation[8]);
		break;
	case 9:
		if (day <= 22)
			printf("今日星座是: %s", Constellation[8]);
		else
			printf("今日星座是: %s", Constellation[9]);
		break;
	case 10:
		if (day <= 23)
			printf("今日星座是: %s", Constellation[9]);
		else
			printf("今日星座是: %s", Constellation[10]);
		break;
	case 11:
		if (day <= 22)
			printf("今日星座是: %s", Constellation[10]);
		else
			printf("今日星座是: %s", Constellation[11]);
		break;
	case 12:
		if (day <= 21)
			printf("今日星座是: %s", Constellation[11]);
		else
			printf("今日星座是: %s", Constellation[0]);
		break;
	}
}
void menu_c() {
	int choice, year, month, day, button;
	month = 1;
	calendar_menu();
	bool a = true;
	while (a)
	{
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			system("cls");
			frame();
			calendar_now_week();
			setXY(startX + 19, startY + 10);
			printf("请按任意键返回");
			getch();
			calendar_menu();
			break;

		case 2:
			system("cls");
			frame();
			setXY(startX + 18, startY - 1);
			printf("查询的年份：");
			scanf("%d", &year);
			calendar_year_month(year, month);
			do {
				button = getch();
				system("cls");
				frame();
				if (button == 27) {
					calendar_menu();
					month = 1;
				}
				else if (button == 75) {
					month--;
					if (month <= 0) {
						month = 12;
						year -= 1;
					}
					calendar_year_month(year, month);
				}
				else if (button == 77) {
					month++;
					if (month >= 13) {
						month = 1;
						year += 1;
					}
					calendar_year_month(year, month);
				}
				else
					calendar_year_month(year, month);
			} while (button != 27);
			break;

		case 3:
			system("cls");
			frame();
			calendar_month();
			setXY(startX + 19, startY + 11);
			printf("请输入任意键返回");
			getch();
			calendar_menu();
			break;

		case 4:
			system("cls");
			calendar_someday();
			setXY(startX + 19, startY + 15);
			printf("请输入任意键返回");
			getch();
			calendar_menu();
			break;

		case 5:
			system("cls");
			calendar_lunar();
			setXY(startX + 19, startY + 15);
			printf("请输入任意键返回");
			getch();
			calendar_menu();
			break;

		case 6:
			a = false;
			break;

		default:
			setXY(startX + 10, startY + 19);
			printf("输入错误，请输入1~5内有的一个数字！\n");
			setXY(startX + 19, startY + 20);
			printf("按任意键重新选择");
			getch();
			system("cls");
			calendar_menu();
			break;
		}
		if (choice == 6)
			break;
	}
}
void changepw() {
	int i = 1;
	int j = 0;
	int x = 1;
	int y = 0;
	int n = 1;
	char id[50];
	char query[100];
	char password[50];
	char passwords[50];
	char newpassword[50];
	char select[50] = "select password from user where id = '";
	char update1[50] = "update user set password = '";
	char update2[50] = "' where id='";
	char d[50] = "'";
	memset(query, 0, 100);
	memset(id, 0, 50);
	memset(newpassword, 0, 50);
	system("cls");
	setXY(startX, startY);
	printwindow();
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX + 24, startY + 5);
	printf("更改密码");
	setXY(startX + 20, startY + 7);
	printf("账号：");
	setXY(startX + 20, startY + 8);
	printf("原密码：");
	aninal();
	setXY(startX + 25, startY + 7);
	setbuf(stdin, NULL);
	cin.getline(id, 50);
	setXY(startX + 27, startY + 8);
	setbuf(stdin, NULL);
	cin.getline(password, 50);
	mysql_set_character_set(connection, "gbk");
	strcat(query, select);
	strcat(query, id);
	strcat(query, d);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);
	if (row = mysql_fetch_row(res))
	{
		strcpy(passwords, row[0]);
		x = strcmp(password, passwords);
	}
	if (x == 0)
	{
		mysql_free_result(res);
		setXY(startX + 20, startY + 9);
		printf("新密码：");
		setXY(startX + 27, startY + 9);
		memset(query, 0, 100);
		cin.getline(newpassword, 50);
		strcat(query, update1);
		strcat(query, newpassword);
		strcat(query, update2);
		strcat(query, id);
		strcat(query, d);
		sql = query;
		n = mysql_query(connection, sql);
		if (!n) {
			setXY(startX + 20, startY + 10);
			printf("数据修改成功");
			setXY(startX + 20, startY + 11);
			system("pause");
		}
		else {
			setXY(startX + 20, startY + 10);
			printf("数据修改失败");
			setXY(startX + 20, startY + 11);
			system("pause");
		}
	}
	else
	{
		setXY(startX + 20, startY + 9);
		printf("账号或密码错误，请重试！");
		setXY(startX + 20, startY + 10);
		system("pause");
	}
}
//主菜单-日程管理
void menuSchedule()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 日程管理 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 19, startY + 2);
	printf("1.日程信息查询");
	setXY(startX + 19, startY + 4);
	printf("2.日程信息查找");
	setXY(startX + 19, startY + 6);
	printf("3.日程信息添加");
	setXY(startX + 19, startY + 8);
	printf("4.日程信息修改");
	setXY(startX + 19, startY + 10);
	printf("5.日程信息删除");
	setXY(startX + 19, startY + 12);
	printf("6.退出");

	aninal();
}
void menuQuerySche()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日程信息查询 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fquerySche();
}

//schedule 模糊查找菜单
void menuFuzzyQuerySche()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日程信息查找 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//schedule 添加菜单
void menuAddSche()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日程信息添加 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	faddSche();
}

//schedule 修改菜单
void menuUpdateSche()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日程信息修改 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//删除菜单—日程
void menuDeleteSche()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日程信息删除 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fdeleteSche();
}
//数据库查询-日程
void fquerySche()
{
	int i = 0;
	char query[100];
	char a[100] = "select id,date,event,remark from schedule where userid = '";
	char b[50] = "'";
	mysql_set_character_set(connection, "gbk");
	memset(query, 0, 100);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	setXY(startX + 5, startY + 2 + i);
	printf("id");
	setXY(startX + 10, startY + 2 + i);
	printf("date");
	setXY(startX + 25, startY + 2 + i);
	printf("event");
	setXY(startX + 40, startY + 2 + i);
	printf("remark");

	while ((row = mysql_fetch_row(res)))
	{
		setXY(startX + 5, startY + 4 + i);
		printf("%s", row[0]);
		setXY(startX + 10, startY + 4 + i);
		printf("%s", row[1]);
		setXY(startX + 25, startY + 4 + i);
		printf("%s", row[2]);
		setXY(startX + 40, startY + 4 + i);
		printf("%s", row[3]);
		i++;
	}
	mysql_free_result(res);
	//mysql_close(connection);
	setXY(startX + 1, startY + 17);
	printf("输入0返回:\n");
}

//模糊查找-日程
void fFuzzyQuerySche()
{

	while (true)
	{
		menuFuzzyQuerySche();

		int n;
		int i = 7;
		char insert[200];
		char insert1[200] = "select * from schedule where (";
		char insert2[200] = " like '%";
		char insert3[200] = "%' and userid = '";
		char insert4[200] = "')";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 3);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "date") != 0
			&& strcmp(field, "event") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 6);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");

		}
		else
		{
			setXY(startX + 35, startY + 3);
			setbuf(stdin, NULL);
			scanf("%s", &data);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);
			strcat_s(insert, userid);
			strcat_s(insert, insert4);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			mysql_query(connection, sql);
			res = mysql_use_result(connection);

			n = mysql_query(connection, sql);
			if (!n)
			{
				setXY(startX + 5, startY + 6);
				printf("无匹配结果!");

			}
			else
			{

				setXY(startX + 5, startY + 6);
				printf("查询结果：");
				setXY(startX + 5, startY + 7);
				printf("id");
				setXY(startX + 10, startY + 7);
				printf("date");
				setXY(startX + 25, startY + 7);
				printf("event");
				setXY(startX + 40, startY + 7);
				printf("remark");

				while ((row = mysql_fetch_row(res)))
				{
					setXY(startX + 5, startY + 2 + i);
					printf("%s", row[0]);
					setXY(startX + 10, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 25, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 40, startY + 2 + i);
					printf("%s", row[3]);
					i++;
				}
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 17);
			printf("输入0返回:\n");

			//select * from 数据表 where 姓名 like '%输入内容%'

			break;
		}
	}
}

//数据增加
void faddSche()
{
	int n;
	char insert[200];
	char insert1[200] = "insert into schedule (id, date, event, remark, userid) values('";
	char insert2[200] = "', '";
	char insert3[200] = "');";
	char id[50];
	char date[50];
	char event[50];
	char remark[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(date, 50);
	bzero(event, 50);
	bzero(remark, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要添加的内容：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入id：");
	setXY(startX + 5, startY + 4);
	printf("请输入date：");
	setXY(startX + 5, startY + 5);
	printf("请输入event：");
	setXY(startX + 5, startY + 6);
	printf("请输入remark：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &date);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);
	scanf("%s", &event);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 6);
	scanf("%s", &remark);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, date);
	strcat_s(insert, insert2);
	strcat_s(insert, event);
	strcat_s(insert, insert2);
	strcat_s(insert, remark);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;
	n = mysql_query(connection, sql);

	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据添加成功！\n");
	}
	else
	{
		printf("数据添加失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}

//修改数据
void fupdateSche()
{
	while (true)
	{
		menuUpdateSche();

		int n;
		char insert[200];
		char insert1[200] = "update schedule set ";
		char insert2[200] = " = '";
		char insert3[200] = "' where id = '";
		char insert4[200] = "' and  userid = '";
		char insert5[200] = "'";
		char id[50];
		char content[50];
		char result[50];

		bzero(insert, 50);
		bzero(id, 50);
		bzero(content, 50);
		bzero(result, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要修改的内容:\n");
		setXY(startX + 5, startY + 3);
		printf("请输入要修改的信息的ID号:\n");
		setXY(startX + 5, startY + 4);
		printf("请输入要修改的字符对应的字段名:");
		setXY(startX + 5, startY + 5);
		printf("请输入修改后的新内容:");

		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 3);
		scanf("%s", &id);
		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 4);
		scanf("%s", &content);
		setbuf(stdin, NULL);

		if (strcmp(content, "id") != 0
			&& strcmp(content, "date") != 0
			&& strcmp(content, "event") != 0
			&& strcmp(content, "remark") != 0)
		{
			setXY(startX + 5, startY + 7);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");

		}
		else
		{
			setXY(startX + 40, startY + 5);
			scanf("%s", &result);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, content);
			strcat_s(insert, insert2);
			strcat_s(insert, result);
			strcat_s(insert, insert3);
			strcat_s(insert, id);
			strcat_s(insert, insert4);
			strcat_s(insert, userid);
			strcat_s(insert, insert5);

			sql = insert;

			n = mysql_query(connection, sql);
			setXY(startX + 1, startY + 16);
			if (!n)
			{
				printf("数据修改成功！\n");
			}
			else
			{
				printf("数据修改失败！\n");
			}
			setXY(startX + 1, startY + 17);
			printf("输入0返回:");

			break;
		}
	}
}

//删除数据
void fdeleteSche()
{
	int n;
	char insert[200];
	char insert1[200] = "delete from schedule where id = '";
	char insert2[200] = "' and userid = '";
	char insert3[200] = "'";
	char id[50];

	bzero(insert, 50);
	bzero(id, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要删除的内容:\n");
	setXY(startX + 5, startY + 3);
	printf("请输入要删除的信息的ID号:\n");

	setbuf(stdin, NULL);
	setXY(startX + 36, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;

	n = mysql_query(connection, sql);
	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据删除成功！\n");
	}
	else
	{
		printf("数据删除失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}

//主菜单-名片管理
void menuCard()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 名片管理 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 19, startY + 2);
	printf("1.名片信息查询");
	setXY(startX + 19, startY + 4);
	printf("2.名片信息查找");
	setXY(startX + 19, startY + 6);
	printf("3.名片信息添加");
	setXY(startX + 19, startY + 8);
	printf("4.名片信息修改");
	setXY(startX + 19, startY + 10);
	printf("5.名片信息删除");
	setXY(startX + 19, startY + 12);
	printf("6.返回");

	setXY(startX + 1, startY + 17);
	printf("请输入你想要进行的操作：");

	aninal();
}
//查询菜单-名片
void menuQueryCard()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 名片信息查询 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fqueryCard();
}

//schedule 模糊查找菜单
void menuFuzzyQueryCard()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 名片信息查找 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}


//card 添加菜单
void menuAddCard()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 名片信息添加 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	faddCard();
}

//card 修改菜单
void menuUpdateCard()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 名片信息修改 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//删除菜单—名片
void menuDeleteCard()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 名片信息删除 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fdeleteCard();
}
//数据库查询-名片
void fqueryCard()
{
	int i = 0;
	mysql_set_character_set(connection, "gbk");
	char query[200];
	char a[100] = "select id,name,phone,QQ,remark from card where userid = '";
	char b[50] = "'";
	memset(query, 0, 200);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);
	setXY(startX + 5, startY + 2 + i);
	printf("id");
	setXY(startX + 10, startY + 2 + i);
	printf("name");
	setXY(startX + 18, startY + 2 + i);
	printf("phone");
	setXY(startX + 33, startY + 2 + i);
	printf("QQ");
	setXY(startX + 43, startY + 2 + i);
	printf("remark");
	while ((row = mysql_fetch_row(res)))
	{
		setXY(startX + 5, startY + 4 + i);
		printf("%s", row[0]);
		setXY(startX + 10, startY + 4 + i);
		printf("%s", row[1]);
		setXY(startX + 18, startY + 4 + i);
		printf("%s", row[2]);
		setXY(startX + 33, startY + 4 + i);
		printf("%s", row[3]);
		setXY(startX + 43, startY + 4 + i);
		printf("%s", row[4]);
		i++;
	}
	mysql_free_result(res);
	//mysql_close(connection);
	setXY(startX + 1, startY + 17);
	printf("输入0返回:\n");
}

//模糊查找-日程
void fFuzzyQueryCard()
{

	while (true)
	{
		menuFuzzyQueryCard();

		int n;
		int i = 7;
		char insert[200];
		char insert1[200] = "select id,name,phone,QQ,remark from card where (";
		char insert2[200] = " like '%";
		char insert3[200] = "%' and userid = '";
		char insert4[200] = "')";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 3);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "name") != 0
			&& strcmp(field, "phone") != 0
			&& strcmp(field, "QQ") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 6);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");

		}
		else
		{
			setXY(startX + 35, startY + 3);
			scanf("%s", &data);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);
			strcat_s(insert, userid);
			strcat_s(insert, insert4);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			mysql_query(connection, sql);
			res = mysql_use_result(connection);

			n = mysql_query(connection, sql);
			if (!n)
			{
				setXY(startX + 5, startY + 6);
				printf("无匹配结果!");

			}
			else
			{

				setXY(startX + 5, startY + 6);
				printf("查询结果：");
				setXY(startX + 5, startY + 7);
				printf("id");
				setXY(startX + 10, startY + 7);
				printf("name");
				setXY(startX + 18, startY + 7);
				printf("phone");
				setXY(startX + 33, startY + 7);
				printf("QQ");
				setXY(startX + 43, startY + 7);
				printf("remark");

				while ((row = mysql_fetch_row(res)))
				{
					setXY(startX + 5, startY + 2 + i);
					printf("%s", row[0]);
					setXY(startX + 10, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 18, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 33, startY + 2 + i);
					printf("%s", row[3]);
					setXY(startX + 43, startY + 2 + i);
					printf("%s", row[4]);
					i++;
				}
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 17);
			printf("输入0返回:\n");

			//select * from 数据表 where 姓名 like '%输入内容%'

			break;
		}
	}
}

//数据增加-名片
void faddCard()
{
	int n;
	char insert[200];
	char insert1[200] = "insert into card (id, name, phone, QQ, remark, userid) values('";
	char insert2[200] = "', '";
	char insert3[200] = "');";
	char id[50];
	char name[50];
	char phone[50];
	char QQ[50];
	char remark[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(name, 50);
	bzero(phone, 50);
	bzero(QQ, 50);
	bzero(remark, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要添加的内容：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入id：");
	setXY(startX + 5, startY + 4);
	printf("请输入name：");
	setXY(startX + 5, startY + 5);
	printf("请输入phone：");
	setXY(startX + 5, startY + 6);
	printf("请输入QQ：");
	setXY(startX + 5, startY + 7);
	printf("请输入remark：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &name);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);
	scanf("%s", &phone);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 6);
	scanf("%s", &QQ);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 7);
	scanf("%s", &remark);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, name);
	strcat_s(insert, insert2);
	strcat_s(insert, phone);
	strcat_s(insert, insert2);
	strcat_s(insert, QQ);
	strcat_s(insert, insert2);
	strcat_s(insert, remark);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;
	n = mysql_query(connection, sql);

	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据添加成功！\n");
	}
	else
	{
		printf("数据添加失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}

//修改数据-名片
void fupdateCard()
{
	while (true)
	{
		menuUpdateCard();

		int n;
		char insert[200];
		char insert1[200] = "update card set ";
		char insert2[200] = " = '";
		char insert3[200] = "' where (id = '";
		char insert4[200] = "' and userid = '";
		char insert5[200] = "')";
		char id[50];
		char field[50];
		char result[50];

		bzero(insert, 50);
		bzero(id, 50);
		bzero(field, 50);
		bzero(result, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要修改的内容:\n");
		setXY(startX + 5, startY + 3);
		printf("请输入要修改的信息的ID号:\n");
		setXY(startX + 5, startY + 4);
		printf("请输入要修改的字符对应的字符名:");
		setXY(startX + 5, startY + 5);
		printf("请输入修改后的新内容:");

		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 3);
		scanf("%s", &id);
		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 4);
		scanf("%s", &field);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "name") != 0
			&& strcmp(field, "phone") != 0
			&& strcmp(field, "QQ") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 7);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");
		}
		else
		{
			setXY(startX + 40, startY + 5);
			scanf("%s", &result);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, result);
			strcat_s(insert, insert3);
			strcat_s(insert, id);
			strcat_s(insert, insert4);
			strcat_s(insert, userid);
			strcat_s(insert, insert5);

			sql = insert;

			n = mysql_query(connection, sql);
			setXY(startX + 1, startY + 16);
			if (!n)
			{
				printf("数据修改成功！\n");
			}
			else
			{
				printf("数据修改成功！\n");
			}
			setXY(startX + 1, startY + 17);
			printf("输入0返回:");

			break;
		}

	}

}

//删除数据-名片
void fdeleteCard()
{
	int n;
	char insert[200];
	char insert1[200] = "delete from card where id = '";
	char insert2[200] = "' and userid = '";
	char insert3[200] = "'";
	char id[50];

	bzero(insert, 50);
	bzero(id, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要删除的内容:\n");
	setXY(startX + 5, startY + 3);
	printf("请输入要删除的信息的ID号:\n");

	setbuf(stdin, NULL);
	setXY(startX + 36, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;

	n = mysql_query(connection, sql);
	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据删除成功！\n");
	}
	else
	{
		printf("数据删除失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}
//主菜单-日记管理
void menuDiary()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 日记管理 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 19, startY + 2);
	printf("1.日记信息查询");
	setXY(startX + 19, startY + 4);
	printf("2.日记信息查找");
	setXY(startX + 19, startY + 6);
	printf("3.日记信息添加");
	setXY(startX + 19, startY + 8);
	printf("4.日记信息修改");
	setXY(startX + 19, startY + 10);
	printf("5.日记信息删除");
	setXY(startX + 19, startY + 12);
	printf("6.退出");

	aninal();
}
//查询菜单-日记
void menuQueryDiary()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日记信息查询 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fqueryDiary();
}

//Diary 模糊查找菜单
void menuFuzzyQueryDiary()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日记信息查找 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}


//diary 添加菜单
void menuAddDiary()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日记信息添加 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();

	faddDiary();
}

//diary 修改菜单
void menuUpdateDiary()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日记信息修改 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//删除菜单—日记
void menuDeleteDiary()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 日记信息删除 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fdeleteDiary();
}
//数据库查询-日记
void fqueryDiary()
{
	int i = 0;
	//mysql_free_result(res);
	mysql_set_character_set(connection, "gbk");
	char query[200];
	char a[100] = "select id,date,diary,remark from diary where userid = '";
	char b[50] = "'";
	memset(query, 0, 200);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	setXY(startX + 5, startY + 2 + i);
	printf("id");
	setXY(startX + 10, startY + 2 + i);
	printf("date");
	setXY(startX + 25, startY + 2 + i);
	printf("diary");
	setXY(startX + 43, startY + 2 + i);
	printf("remark");

	while ((row = mysql_fetch_row(res)))
	{
		setXY(startX + 5, startY + 4 + i);
		printf("%s", row[0]);
		setXY(startX + 10, startY + 4 + i);
		printf("%s", row[1]);
		setXY(startX + 25, startY + 4 + i);
		printf("%s", row[2]);
		setXY(startX + 43, startY + 4 + i);
		printf("%s", row[3]);
		i++;
	}
	mysql_free_result(res);
	setXY(startX + 1, startY + 17);
	printf("输入0返回:\n");
}


//模糊查找-日程
void fFuzzyQueryDiary()
{

	while (true)
	{
		menuFuzzyQueryDiary();

		int n;
		int i = 7;
		char insert[200];
		char insert1[200] = "select * from diary where (";
		char insert2[200] = " like '%";
		char insert3[200] = "%' and userid = '";
		char insert4[200] = "')";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 3);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "date") != 0
			&& strcmp(field, "diary") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 6);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");

		}
		else
		{
			setXY(startX + 35, startY + 3);
			scanf("%s", &data);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);
			strcat_s(insert, userid);
			strcat_s(insert, insert4);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			mysql_query(connection, sql);
			res = mysql_use_result(connection);

			n = mysql_query(connection, sql);
			if (!n)
			{
				setXY(startX + 5, startY + 6);
				printf("无匹配结果!");

			}
			else
			{

				setXY(startX + 5, startY + 6);
				printf("查询结果：");
				setXY(startX + 5, startY + 7);
				printf("id");
				setXY(startX + 10, startY + 7);
				printf("date");
				setXY(startX + 25, startY + 7);
				printf("diary");
				setXY(startX + 40, startY + 7);
				printf("remark");

				while ((row = mysql_fetch_row(res)))
				{
					setXY(startX + 5, startY + 2 + i);
					printf("%s", row[0]);
					setXY(startX + 10, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 25, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 40, startY + 2 + i);
					printf("%s", row[3]);
					i++;
				}
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 17);
			printf("输入0返回:\n");

			//select * from 数据表 where 姓名 like '%输入内容%'

			break;
		}
	}
}


//数据增加-日记
void faddDiary()
{
	int n;
	char insert[200];
	char insert1[200] = "insert into diary (id, date, diary, remark,userid) values('";
	char insert2[200] = "', '";
	char insert3[200] = "');";
	char id[50];
	char date[50];
	char diary[50];
	char remark[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(date, 50);
	bzero(diary, 50);
	bzero(remark, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要添加的内容：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入id：");
	setXY(startX + 5, startY + 4);
	printf("请输入date：");
	setXY(startX + 5, startY + 5);
	printf("请输入diary：");
	setXY(startX + 5, startY + 6);
	printf("请输入remark：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &date);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);
	scanf("%s", &diary);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 6);
	scanf("%s", &remark);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, date);
	strcat_s(insert, insert2);
	strcat_s(insert, diary);
	strcat_s(insert, insert2);
	strcat_s(insert, remark);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;
	n = mysql_query(connection, sql);

	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据添加成功！\n");
	}
	else
	{
		printf("数据添加失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}

//修改数据-日记
void fupdateDiary()
{
	while (true)
	{
		menuUpdateDiary();

		int n;
		char insert[200];
		char insert1[200] = "update diary set ";
		char insert2[200] = " = '";
		char insert3[200] = "' where (id = '";
		char insert4[200] = "' and userid = '";
		char insert5[200] = "')";
		char id[50];
		char content[50];
		char result[50];

		bzero(insert, 50);
		bzero(id, 50);
		bzero(content, 50);
		bzero(result, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要修改的内容:\n");
		setXY(startX + 5, startY + 3);
		printf("请输入要修改的信息的ID号:\n");
		setXY(startX + 5, startY + 4);
		printf("请输入要修改的字符对应的字段名:");
		setXY(startX + 5, startY + 5);
		printf("请输入修改后的新内容:");

		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 3);
		scanf("%s", &id);
		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 4);
		scanf("%s", &content);
		setbuf(stdin, NULL);

		if (strcmp(content, "id") != 0
			&& strcmp(content, "date") != 0
			&& strcmp(content, "diary") != 0
			&& strcmp(content, "remark") != 0)
		{
			setXY(startX + 5, startY + 7);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");

		}
		else
		{
			setXY(startX + 40, startY + 5);
			scanf("%s", &result);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, content);
			strcat_s(insert, insert2);
			strcat_s(insert, result);
			strcat_s(insert, insert3);
			strcat_s(insert, id);
			strcat_s(insert, insert4);
			strcat_s(insert, userid);
			strcat_s(insert, insert5);

			sql = insert;

			n = mysql_query(connection, sql);
			setXY(startX + 1, startY + 16);
			if (!n)
			{
				printf("数据修改成功！\n");
			}
			else
			{
				printf("数据修改失败！\n");
			}
			setXY(startX + 1, startY + 17);
			printf("输入0返回:");

			break;
		}
	}
}

//删除数据-日记
void fdeleteDiary()
{
	int n;
	char insert[200];
	char insert1[200] = "delete from diary where (id = '";
	char insert2[200] = "' and userid = '";
	char insert3[200] = "')";
	char id[50];

	bzero(insert, 50);
	bzero(id, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要删除的内容:\n");
	setXY(startX + 5, startY + 3);
	printf("请输入要删除的信息的ID号:\n");

	setbuf(stdin, NULL);
	setXY(startX + 36, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;

	n = mysql_query(connection, sql);
	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据删除成功！\n");
	}
	else
	{
		printf("数据删除失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}
//打印菜单
void menuFinancial()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 财务管理 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 21, startY + 2);
	printf("1.财务信息查询");
	setXY(startX + 21, startY + 4);
	printf("2.财务信息添加");
	setXY(startX + 21, startY + 6);
	printf("3.财务信息修改");
	setXY(startX + 21, startY + 8);
	printf("4.财务信息删除");
	setXY(startX + 21, startY + 10);
	printf("5.退出");

	aninal();
}
//数据库查询菜单
void menuQueryFin()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 财务信息查询 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fqueryFin();
}

//数据库添加菜单
void menuAddFin()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 财务信息添加 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	faddFin();
	Sleep(1000);
}

//数据库修改菜单
void menuUpdateFin()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 财务信息修改 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fupdateFin();
	Sleep(1000);
}

//数据库删除菜单
void menuDeleteFin()
{
	menuDeletePrintFin();

	int choice;

	setXY(startX + 5, startY + 2);
	printf("1.进行单项删除");
	setXY(startX + 5, startY + 3);
	printf("2.进行批量删除");
	setXY(startX + 5, startY + 4);
	printf("请选择：");

	setXY(startX + 15, startY + 4);
	scanf("%d", &choice);

	if (choice == 1)
	{
		fdeleteFin();
	}
	else if (choice == 2)
	{
		fdeleteBatchFin();
	}
	else
	{
		menuFinancialChoice();
	}
}

//打印数据库删除菜单
void menuDeletePrintFin()
{
	int i = 1;

	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 财务信息删除 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}


//数据库模糊查询菜单
void menuFuzzyQueryFin()
{
	int i = 0;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌───────────────────  模糊查询 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 18; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 18);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}
//数据库查询
void fqueryFin()
{
	int i = 2;
	char choice1;
	int choice;
	char query[100];
	char a[100] = "select id,date,event,sum,type,place,remark from financial where userid = '";
	char b[50] = "'";
	memset(query, 0, 100);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	mysql_set_character_set(connection, "gbk");
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	setXY(startX + 4, startY + 2);
	printf("id");
	setXY(startX + 10, startY + 2);
	printf("date");
	setXY(startX + 20, startY + 2);
	printf("event");
	setXY(startX + 27, startY + 2);
	printf("sum");
	setXY(startX + 33, startY + 2);
	printf("type");
	setXY(startX + 39, startY + 2);
	printf("place");
	setXY(startX + 45, startY + 2);
	printf("remark");

	while ((row = mysql_fetch_row(res)))
	{
		setXY(startX + 4, startY + 2 + i);
		printf("%s", row[0]);
		setXY(startX + 8, startY + 2 + i);
		printf("%s", row[1]);
		setXY(startX + 21, startY + 2 + i);
		printf("%s", row[2]);
		setXY(startX + 28, startY + 2 + i);
		printf("%s", row[3]);
		setXY(startX + 34, startY + 2 + i);
		printf("%s", row[4]);
		setXY(startX + 41, startY + 2 + i);
		printf("%s", row[5]);
		setXY(startX + 47, startY + 2 + i);
		printf("%s", row[6]);
		i++;
	}
	mysql_free_result(res);
	//mysql_close(connection);

	setXY(startX + 1, startY + 15);
	printf("输入“1”进行模糊查找,输入其他键返回！\n");
	setXY(startX + 1, startY + 16);
	setbuf(stdin, NULL);
	//scanf("%d", &choice);
	scanf("%c", &choice1);
	choice = (int)choice1 - 48;
	printf("%c, %d", choice1, choice);

	if (choice == 1)
	{
		fFuzzyQueryFin();
	}
	else
	{
		menuFinancialChoice();
	}
}

//模糊查找
void fFuzzyQueryFin()
{
	while (true)
	{
		menuFuzzyQueryFin();

		int i = 7;
		int n;
		char insert[200];
		char insert1[200] = "select * from financial where (";
		char insert2[200] = " like '%";
		char insert3[200] = "%' and userid = '";
		char insert4[200] = "')";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 3);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 3);
		scanf("%s", &data);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "date") != 0
			&& strcmp(field, "event") != 0
			&& strcmp(field, "sum") != 0
			&& strcmp(field, "type") != 0
			&& strcmp(field, "place") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 5);
			printf("请输入正确的字段名！");
			Sleep(1000);
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);
			strcat_s(insert, userid);
			strcat_s(insert, insert4);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			n = mysql_query(connection, sql);//n的返回值一直是0？？？
			res = mysql_use_result(connection);

			row = mysql_fetch_row(res);
			if (row != NULL)
			{
				setXY(startX + 4, startY + 6);
				printf("查询结果：");
				setXY(startX + 4, startY + 7);
				printf("id");
				setXY(startX + 10, startY + 7);
				printf("date");
				setXY(startX + 20, startY + 7);
				printf("event");
				setXY(startX + 27, startY + 7);
				printf("sum");
				setXY(startX + 33, startY + 7);
				printf("type");
				setXY(startX + 39, startY + 7);
				printf("place");
				setXY(startX + 45, startY + 7);
				printf("remark");

				setXY(startX + 4, startY + 2 + i);
				printf("%s", row[0]);
				setXY(startX + 8, startY + 2 + i);
				printf("%s", row[1]);
				setXY(startX + 21, startY + 2 + i);
				printf("%s", row[2]);
				setXY(startX + 28, startY + 2 + i);
				printf("%s", row[3]);
				setXY(startX + 34, startY + 2 + i);
				printf("%s", row[4]);
				setXY(startX + 41, startY + 2 + i);
				printf("%s", row[5]);
				setXY(startX + 47, startY + 2 + i);
				printf("%s", row[6]);
				i++;

				while (row = mysql_fetch_row(res))
				{
					setXY(startX + 4, startY + 2 + i);
					printf("%s", row[0]);
					setXY(startX + 8, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 21, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 28, startY + 2 + i);
					printf("%s", row[3]);
					setXY(startX + 34, startY + 2 + i);
					printf("%s", row[4]);
					setXY(startX + 41, startY + 2 + i);
					printf("%s", row[5]);
					setXY(startX + 47, startY + 2 + i);
					printf("%s", row[6]);
					i++;
				}
			}
			else
			{
				setXY(startX + 5, startY + 6);
				printf("无记录！");
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 19);
			printf("输入任意键返回！\n");
			setXY(startX + 1, startY + 20);
			setbuf(stdin, NULL);
			getch();
			break;
			//menuFinancialChoice();
		}

	}

	//select * from 数据表 where 姓名 like '%输入内容%'
}

//数据添加
void faddFin()
{
	int n;
	int judge;
	int idnumber = 0;
	char insert[200];
	char insert1[200] = "insert into financial (id, date, event, sum, type, place, remark, userid) values('";
	char insert2[200] = "', '";
	char insert3[200] = "');";
	char id[50];
	char date[50];
	char event[50];
	char sum[50];
	char type[50];
	char place[50];
	char remark[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(date, 50);
	bzero(event, 50);
	bzero(sum, 50);
	bzero(type, 50);
	bzero(place, 50);
	bzero(remark, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要添加的内容：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入id：");
	setXY(startX + 5, startY + 4);
	printf("请输入date：");
	setXY(startX + 5, startY + 5);
	printf("请输入event：");
	setXY(startX + 5, startY + 6);
	printf("请输入sum：");
	setXY(startX + 5, startY + 7);
	printf("请输入type：");
	setXY(startX + 5, startY + 8);
	printf("请输入place：");
	setXY(startX + 5, startY + 9);
	printf("请输入remark：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &date);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);
	scanf("%s", &event);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 6);
	scanf("%s", &sum);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 7);
	scanf("%s", &type);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 8);
	scanf("%s", &place);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 9);
	scanf("%s", &remark);
	setbuf(stdin, NULL);

	judge = timeJudgeFin(date);

	for (int i = 0; id[i] == '0'
		|| id[i] == '1'
		|| id[i] == '2'
		|| id[i] == '3'
		|| id[i] == '4'
		|| id[i] == '5'
		|| id[i] == '6'
		|| id[i] == '7'
		|| id[i] == '8'
		|| id[i] == '9'; i++)
	{
		idnumber = idnumber * 10 + id[i] - 48;
	}

	if (judge == 1 && idnumber > 0)
	{
		strcat_s(insert, insert1);
		strcat_s(insert, id);
		strcat_s(insert, insert2);
		strcat_s(insert, date);
		strcat_s(insert, insert2);
		strcat_s(insert, event);
		strcat_s(insert, insert2);
		strcat_s(insert, sum);
		strcat_s(insert, insert2);
		strcat_s(insert, type);
		strcat_s(insert, insert2);
		strcat_s(insert, place);
		strcat_s(insert, insert2);
		strcat_s(insert, remark);
		strcat_s(insert, insert2);
		strcat_s(insert, userid);
		strcat_s(insert, insert3);

		sql = insert;
		n = mysql_query(connection, sql);
		setXY(startX + 5, startY + 10);

		if (!n)
		{
			printf("数据添加成功！\n");
		}
		else
		{
			printf("数据添加失败！\n");
		}
	}
	else if (judge == -1 || idnumber <= 0)
	{
		setXY(startX + 5, startY + 10);
		printf("数据添加失败！\n");
	}

	setXY(startX + 5, startY + 11);
}


//修改数据
void fupdateFin()
{
	int n;
	int count;
	int idnumber = 0;
	int judge = -1;
	mysql_set_character_set(connection, "gbk");

	char choice;
	char insert[200];
	char insert1[200] = "update financial set ";
	char insert2[200] = " = '";
	char insert3[200] = "' where (id = '";
	char insert4[200] = "' and userid = '";
	char insert5[200] = "')";
	char field[50];
	char id[50];
	char content[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(field, 50);
	bzero(content, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要修改的内容所在id：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入要修改的内容的字段名：\n");
	setXY(startX + 5, startY + 4);
	printf("请输入要修改的内容");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 2);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &field);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &content);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);

	count = idFin();
	for (int i = 0; id[i] == '0'
		|| id[i] == '1'
		|| id[i] == '2'
		|| id[i] == '3'
		|| id[i] == '4'
		|| id[i] == '5'
		|| id[i] == '6'
		|| id[i] == '7'
		|| id[i] == '8'
		|| id[i] == '9'; i++)
	{
		idnumber = idnumber * 10 + id[i] - 48;
	}

	if (idnumber > count || idnumber == 0)
	{
		setXY(startX + 5, startY + 5);
		printf("请输入正确的id！");
		Sleep(1000);

		setXY(startX + 5, startY + 6);
		printf("输入1继续修改，输入其他键返回 ￣ ￣)σ");
		setbuf(stdin, NULL);
		setXY(startX + 5, startY + 7);
		scanf("%c", &choice);
		setbuf(stdin, NULL);
		if (choice == '1')
		{
			menuUpdateFin();
		}
		else
		{
			menuFinancialChoice();
		}

	}
	else
	{
		if (strcmp(field, "date") == 0)
		{
			judge = timeJudgeFin(content);

			if (judge == -1)
			{
				setXY(startX + 5, startY + 5);
				printf("请输入正确的时间！");
				Sleep(1000);

				setXY(startX + 5, startY + 6);
				printf("输入1继续修改，输入其他键返回 ￣ ￣)σ");
				setbuf(stdin, NULL);
				setXY(startX + 5, startY + 7);
				scanf("%c", &choice);
				setbuf(stdin, NULL);
				if (choice == '1')
				{
					menuUpdateFin();
				}
				else
				{
					menuFinancialChoice();
				}
			}
			else
			{
				strcat_s(insert, insert1);
				strcat_s(insert, field);
				strcat_s(insert, insert2);
				strcat_s(insert, content);
				strcat_s(insert, insert3);
				strcat_s(insert, id);
				strcat_s(insert, insert4);
				strcat_s(insert, userid);
				strcat_s(insert, insert5);

				sql = insert;
				n = mysql_query(connection, sql);

				Sleep(50);

				setXY(startX + 5, startY + 5);
				if (n == 0)
				{
					printf("数据修改成功！\n");
				}
				else
				{
					printf("数据修改失败！\n");
				}
				setXY(startX + 5, startY + 6);
			}
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, content);
			strcat_s(insert, insert3);
			strcat_s(insert, id);
			strcat_s(insert, insert4);
			strcat_s(insert, userid);
			strcat_s(insert, insert5);

			sql = insert;
			n = mysql_query(connection, sql);

			Sleep(50);

			setXY(startX + 5, startY + 5);
			if (n == 0)
			{
				printf("数据修改成功！\n");
			}
			else
			{
				printf("数据修改失败！\n");
			}
			setXY(startX + 5, startY + 6);
		}

	}

}

//删除单项数据
void fdeleteFin()
{
	while (true)
	{
		menuDeletePrintFin();

		int n;
		int count;
		int idnumber = 0;

		mysql_set_character_set(connection, "gbk");
		char insert[200];
		char insert1[200] = "delete from financial where (id = '";
		char insert2[200] = "' and userid = '";
		char insert3[200] = "')";
		char id[50];

		bzero(insert, 50);
		bzero(id, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要删除的记录的id：\n");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &id);
		setbuf(stdin, NULL);

		count = idFin();
		for (int i = 0; id[i] == '0'
			|| id[i] == '1'
			|| id[i] == '2'
			|| id[i] == '3'
			|| id[i] == '4'
			|| id[i] == '5'
			|| id[i] == '6'
			|| id[i] == '7'
			|| id[i] == '8'
			|| id[i] == '9'; i++)
		{
			idnumber = idnumber * 10 + id[i] - 48;
		}

		if (idnumber == 0)
		{
			setXY(startX + 5, startY + 3);
			printf("id不存在！删除失败！");

			Sleep(1000);
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, id);
			strcat_s(insert, insert2);
			strcat_s(insert, userid);
			strcat_s(insert, insert3);

			sql = insert;
			n = mysql_query(connection, sql);

			setXY(startX + 5, startY + 3);
			if (!n)
			{
				printf("数据删除成功！\n");
			}
			else
			{
				printf("数据删除失败！\n");
			}
			setXY(startX + 5, startY + 4);

			Sleep(1000);
			break;
		}
	}

}

//批量删除数据
void fdeleteBatchFin()
{
	menuDeletePrintFin();

	int n;
	mysql_set_character_set(connection, "gbk");
	char insert[200];
	char insert1[200] = "delete from financial where (";
	char insert2[200] = " ='";
	char insert3[200] = "' and userid = '";
	char insert4[200] = "')";
	char field[50];
	char content[50];

	bzero(insert, 50);
	bzero(field, 50);
	bzero(content, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要删除的记录的字段名：");
	setXY(startX + 5, startY + 3);
	printf("请输入字段名的内容：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 2);
	scanf("%s", &field);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &content);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, field);
	strcat_s(insert, insert2);
	strcat_s(insert, content);
	strcat_s(insert, insert3);
	strcat_s(insert, userid);
	strcat_s(insert, insert4);

	sql = insert;
	n = mysql_query(connection, sql);

	setXY(startX + 5, startY + 4);
	if (!n)
	{
		printf("数据删除成功！\n");
	}
	else
	{
		printf("数据删除失败！\n");
	}
	setXY(startX + 5, startY + 5);

	Sleep(1000);
}

//获取记录条数
int idFin()
{
	int i = 0;

	mysql_set_character_set(connection, "gbk");
	char query[100];
	char a[50] = "select * from financial where userid = '";
	char b[50] = "'";
	memset(query, 0, 100);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	while ((row = mysql_fetch_row(res)))
	{
		i++;
	}
	mysql_free_result(res);
	return i;
}

//时间判断
int timeJudgeFin(char *date)
{
	int year = 0;
	int month = 0;
	int day = 0;
	int i;
	int j = 0;
	int k;
	int size = 0;

	for (i = 0; date[i] != '\0'; i++)
	{
		size++;
	}


	//判断年月日格式
	for (i = 0; i < size; i++)
	{
		if (date[i] == '-')
		{
			j++;
		}
	}

	if (j != 2)
	{
		return -1;
	}
	else
	{
		//获取年月日
		for (i = 0; date[i] != '-' && i < size; i++)
		{
			year = year * 10 + date[i] - 48;
		}
		for (j = i + 1; date[j] != '-' && j < size; j++)
		{
			month = month * 10 + date[j] - 48;
		}
		for (k = j + 1; k < size; k++)
		{
			day = day * 10 + date[k] - 48;
		}

		//年月日检查
		if (month > 12 || month < 1 || day > 31 || day < 1)
		{
			return -1;
		}
		else if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
		{
			return -1;
		}
		else if (month == 2 && day == 30)
		{
			return -1;
		}
		else if (month == 2 && day == 29)
		{
			//闰年判断
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return 1;
		}
	}
}
//菜单操作
void menuFinancialChoice()
{
	bool a = true;
	while (a)
	{
		int choice = 0;

		menuFinancial();
		setbuf(stdin, NULL);
		setXY(startX + 1, startY + 15);
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			menuQueryFin();
			break;
		case 2:
			menuAddFin();
			break;
		case 3:
			menuUpdateFin();
			break;
		case 4:
			menuDeleteFin();
			break;
		case 5:
			a = false;
			break;
		default:
			setXY(startX + 1, startY + 16);
			printf("输入错误，请输入1~5内有的一个数字！\n");
			setXY(startX + 1, startY + 17);
			system("pause");
			break;
		}
	}
}
//打印菜单
void menuFitness()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 健身管理 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 21, startY + 2);
	printf("1.健身信息查询");
	setXY(startX + 21, startY + 4);
	printf("2.健身信息添加");
	setXY(startX + 21, startY + 6);
	printf("3.健身信息修改");
	setXY(startX + 21, startY + 8);
	printf("4.健身信息删除");
	setXY(startX + 21, startY + 10);
	printf("5.退出");

	aninal();
}

//菜单操作
void menuFitnessChoice()
{
	bool a = true;
	while (a)
	{
		int choice = 0;

		menuFitness();
		setbuf(stdin, NULL);
		setXY(startX + 1, startY + 15);
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			menuQueryFit();
			break;
		case 2:
			menuAddFit();
			break;
		case 3:
			menuUpdateFit();
			break;
		case 4:
			menuDeleteFit();
			break;
		case 5:
			a = false;
			break;
		default:
			setXY(startX + 1, startY + 16);
			printf("输入错误，请输入1~5内有的一个数字！\n");
			setXY(startX + 1, startY + 17);
			system("pause");
			break;
		}
	}
}
//数据库查询菜单
void menuQueryFit()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 健身信息查询 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fqueryFit();
}

//数据库添加菜单
void menuAddFit()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 健身信息添加 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	faddFit();
	Sleep(1000);
}

//数据库修改菜单
void menuUpdateFit()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 健身信息修改 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fupdateFit();
	Sleep(1000);
}

//数据库删除菜单
void menuDeleteFit()
{
	menuDeletePrintFit();

	int choice;

	setXY(startX + 5, startY + 2);
	printf("1.进行单项删除");
	setXY(startX + 5, startY + 3);
	printf("2.进行批量删除");
	setXY(startX + 5, startY + 4);
	printf("请选择：");


	setXY(startX + 15, startY + 4);
	scanf("%d", &choice);

	if (choice == 1)
	{
		fdeleteFit();
	}
	else if (choice == 2)
	{
		fdeleteBatchFit();
	}
	else
	{
		menuFitnessChoice();
	}
}

//打印数据库删除菜单
void menuDeletePrintFit()
{
	int i = 1;

	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 健身信息删除 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}


//数据库模糊查询菜单
void menuFuzzyQueryFit()
{
	int i = 0;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 模糊查询 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 18; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 18);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//数据库查询
void fqueryFit()
{
	int i = 2;
	char choice1;
	int choice;

	mysql_set_character_set(connection, "gbk");
	char query[100];
	char a[100] = "select id,date,event,duration,remark from fitness where userid = '";
	char b[50] = "'";
	memset(query, 0, 100);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	setXY(startX + 5, startY + 2);
	printf("id");
	setXY(startX + 12, startY + 2);
	printf("date");
	setXY(startX + 24, startY + 2);
	printf("event");
	setXY(startX + 32, startY + 2);
	printf("duration");
	setXY(startX + 44, startY + 2);
	printf("remark");

	while ((row = mysql_fetch_row(res)))
	{
		setXY(startX + 5, startY + 2 + i);
		printf("%s", row[0]);
		setXY(startX + 11, startY + 2 + i);
		printf("%s", row[1]);
		setXY(startX + 26, startY + 2 + i);
		printf("%s", row[2]);
		setXY(startX + 35, startY + 2 + i);
		printf("%s", row[3]);
		setXY(startX + 47, startY + 2 + i);
		printf("%s", row[4]);
		i++;
	}
	mysql_free_result(res);
	//mysql_close(connection);

	setXY(startX + 1, startY + 15);
	printf("输入“1”进行模糊查找,输入其他键返回！\n");
	setXY(startX + 1, startY + 16);
	setbuf(stdin, NULL);
	//scanf("%d", &choice);
	scanf("%c", &choice1);
	choice = (int)choice1 - 48;
	printf("%c, %d", choice1, choice);

	if (choice == 1)
	{
		fFuzzyQueryFit();
	}
	else
	{
		//		menuFitnessChoice();
	}
}

//模糊查找
void fFuzzyQueryFit()
{
	while (true)
	{
		menuFuzzyQueryFit();

		int i = 7;
		int n;
		char insert[200];
		char insert1[200] = "select id,date,event,duration,remark from fitness where (";
		char insert2[200] = " like '%";
		char insert3[200] = "%' and userid = '";
		char insert4[200] = "')";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 3);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 3);
		scanf("%s", &data);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "date") != 0
			&& strcmp(field, "event") != 0
			&& strcmp(field, "duration") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 5);
			printf("请输入正确的字段名！");
			Sleep(1000);
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);
			strcat_s(insert, userid);
			strcat_s(insert, insert4);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			n = mysql_query(connection, sql);//n的返回值一直是0？？？
			res = mysql_use_result(connection);

			row = mysql_fetch_row(res);
			if (row != NULL)
			{
				setXY(startX + 5, startY + 6);
				printf("查询结果：");
				setXY(startX + 5, startY + 7);
				printf("id");
				setXY(startX + 11, startY + 7);
				printf("date");
				setXY(startX + 26, startY + 7);
				printf("event");
				setXY(startX + 35, startY + 7);
				printf("duration");;
				setXY(startX + 47, startY + 7);
				printf("remark");

				setXY(startX + 5, startY + 2 + i);
				printf("%s", row[0]);
				setXY(startX + 11, startY + 2 + i);
				printf("%s", row[1]);
				setXY(startX + 26, startY + 2 + i);
				printf("%s", row[2]);
				setXY(startX + 35, startY + 2 + i);
				printf("%s", row[3]);
				setXY(startX + 47, startY + 2 + i);
				printf("%s", row[4]);
				i++;

				while (row = mysql_fetch_row(res))
				{
					setXY(startX + 5, startY + 2 + i);
					printf("%s", row[0]);
					setXY(startX + 11, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 26, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 35, startY + 2 + i);
					printf("%s", row[3]);
					setXY(startX + 47, startY + 2 + i);
					printf("%s", row[4]);
					i++;
				}
			}
			else
			{
				setXY(startX + 5, startY + 6);
				printf("无记录！");
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 19);
			printf("输入任意键返回！\n");
			setXY(startX + 1, startY + 20);
			setbuf(stdin, NULL);
			getch();
			break;
			//menuFitnessChoice();
		}

	}

	//select * from 数据表 where 姓名 like '%输入内容%'
}

//数据添加
void faddFit()
{
	int n;
	int judge;
	int idnumber = 0;
	char insert[200];
	char insert1[200] = "insert into fitness (id, date, event, duration, remark, userid) values('";
	char insert2[200] = "', '";
	char insert3[200] = "');";
	char id[50];
	char date[50];
	char event[50];
	char duration[50];
	char remark[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(date, 50);
	bzero(event, 50);
	bzero(duration, 50);
	bzero(remark, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要添加的内容：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入id：");
	setXY(startX + 5, startY + 4);
	printf("请输入date：");
	setXY(startX + 5, startY + 5);
	printf("请输入event：");
	setXY(startX + 5, startY + 6);
	printf("请输入duration：");
	setXY(startX + 5, startY + 7);
	printf("请输入remark：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &date);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);
	scanf("%s", &event);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 6);
	scanf("%s", &duration);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 7);
	scanf("%s", &remark);
	setbuf(stdin, NULL);

	judge = timeJudgeFit(date);

	for (int i = 0; id[i] == '0'
		|| id[i] == '1'
		|| id[i] == '2'
		|| id[i] == '3'
		|| id[i] == '4'
		|| id[i] == '5'
		|| id[i] == '6'
		|| id[i] == '7'
		|| id[i] == '8'
		|| id[i] == '9'; i++)
	{
		idnumber = idnumber * 10 + id[i] - 48;
	}

	if (judge == 1 && idnumber > 0)
	{
		strcat_s(insert, insert1);
		strcat_s(insert, id);
		strcat_s(insert, insert2);
		strcat_s(insert, date);
		strcat_s(insert, insert2);
		strcat_s(insert, event);
		strcat_s(insert, insert2);
		strcat_s(insert, duration);
		strcat_s(insert, insert2);
		strcat_s(insert, remark);
		strcat_s(insert, insert2);
		strcat_s(insert, userid);
		strcat_s(insert, insert3);

		sql = insert;
		n = mysql_query(connection, sql);
		setXY(startX + 5, startY + 10);

		if (!n)
		{
			printf("数据添加成功！\n");
		}
		else
		{
			printf("数据添加失败！\n");
		}
	}
	else if (judge == -1 || idnumber <= 0)
	{
		setXY(startX + 5, startY + 10);
		printf("数据添加失败！\n");
	}

	setXY(startX + 5, startY + 11);
}


//修改数据
void fupdateFit()
{
	int n;
	int count;
	int idnumber = 0;
	int judge = -1;
	mysql_set_character_set(connection, "gbk");

	char choice;
	char insert[200];
	char insert1[200] = "update fitness set ";
	char insert2[200] = " = '";
	char insert3[200] = "' where id = '";
	char insert4[200] = "' and userid = '";
	char insert5[200] = "'";
	char field[50];
	char id[50];
	char content[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(field, 50);
	bzero(content, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要修改的内容所在id：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入要修改的内容的字段名：\n");
	setXY(startX + 5, startY + 4);
	printf("请输入要修改的内容");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 2);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &field);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &content);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);

	count = idFit();
	for (int i = 0; id[i] == '0'
		|| id[i] == '1'
		|| id[i] == '2'
		|| id[i] == '3'
		|| id[i] == '4'
		|| id[i] == '5'
		|| id[i] == '6'
		|| id[i] == '7'
		|| id[i] == '8'
		|| id[i] == '9'; i++)
	{
		idnumber = idnumber * 10 + id[i] - 48;
	}

	if (idnumber == 0)
	{
		setXY(startX + 5, startY + 5);
		printf("请输入正确的id！");
		Sleep(1000);

		setXY(startX + 5, startY + 6);
		printf("输入1继续修改，输入其他键返回 ￣ ￣)σ");
		setbuf(stdin, NULL);
		setXY(startX + 5, startY + 7);
		scanf("%c", &choice);
		setbuf(stdin, NULL);
		if (choice == '1')
		{
			menuUpdateFit();
		}
		else
		{
			menuFitnessChoice();
		}

	}
	else
	{
		if (strcmp(field, "date") == 0)
		{
			judge = timeJudgeFit(content);

			if (judge == -1)
			{
				setXY(startX + 5, startY + 5);
				printf("请输入正确的时间！");
				Sleep(1000);

				setXY(startX + 5, startY + 6);
				printf("输入1继续修改，输入其他键返回 ￣ ￣)σ");
				setbuf(stdin, NULL);
				setXY(startX + 5, startY + 7);
				scanf("%c", &choice);
				setbuf(stdin, NULL);
				if (choice == '1')
				{
					menuUpdateFit();
				}
				else
				{
					menuFitnessChoice();
				}
			}
			else
			{
				strcat_s(insert, insert1);
				strcat_s(insert, field);
				strcat_s(insert, insert2);
				strcat_s(insert, content);
				strcat_s(insert, insert3);
				strcat_s(insert, id);
				strcat_s(insert, insert4);
				strcat_s(insert, userid);
				strcat_s(insert, insert5);

				sql = insert;
				n = mysql_query(connection, sql);

				Sleep(50);

				setXY(startX + 5, startY + 5);
				if (n == 0)
				{
					printf("数据修改成功！\n");
				}
				else
				{
					printf("数据修改失败！\n");
				}
				setXY(startX + 5, startY + 6);
			}
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, content);
			strcat_s(insert, insert3);
			strcat_s(insert, id);
			strcat_s(insert, insert4);
			strcat_s(insert, userid);
			strcat_s(insert, insert5);

			sql = insert;
			n = mysql_query(connection, sql);

			Sleep(50);

			setXY(startX + 5, startY + 5);
			if (n == 0)
			{
				printf("数据修改成功！\n");
			}
			else
			{
				printf("数据修改失败！\n");
			}
			setXY(startX + 5, startY + 6);
		}

	}

}

//删除单项数据
void fdeleteFit()
{
	while (true)
	{
		menuDeletePrintFit();

		int n;
		int count;
		int idnumber = 0;

		mysql_set_character_set(connection, "gbk");
		char insert[200];
		char insert1[200] = "delete from fitness where (id = '";
		char insert2[200] = "' and userid = '";
		char insert3[200] = "')";
		char id[50];

		bzero(insert, 50);
		bzero(id, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要删除的记录的id：\n");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &id);
		setbuf(stdin, NULL);

		count = idFit();
		for (int i = 0; id[i] == '0'
			|| id[i] == '1'
			|| id[i] == '2'
			|| id[i] == '3'
			|| id[i] == '4'
			|| id[i] == '5'
			|| id[i] == '6'
			|| id[i] == '7'
			|| id[i] == '8'
			|| id[i] == '9'; i++)
		{
			idnumber = idnumber * 10 + id[i] - 48;
		}

		if (idnumber == 0)
		{
			setXY(startX + 5, startY + 3);
			printf("id不存在！删除失败！");

			Sleep(1000);
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, id);
			strcat_s(insert, insert2);
			strcat_s(insert, userid);
			strcat_s(insert, insert3);

			sql = insert;
			n = mysql_query(connection, sql);

			setXY(startX + 5, startY + 3);
			if (!n)
			{
				printf("数据删除成功！\n");
			}
			else
			{
				printf("数据删除失败！\n");
			}
			setXY(startX + 5, startY + 4);

			Sleep(1000);
			break;
		}
	}

}

//批量删除数据
void fdeleteBatchFit()
{
	menuDeletePrintFit();

	int n;
	mysql_set_character_set(connection, "gbk");
	char insert[200];
	char insert1[200] = "delete from fitness where (";
	char insert2[200] = " ='";
	char insert3[200] = "' and userid = '";
	char insert4[200] = "')";
	char field[50];
	char content[50];

	bzero(insert, 50);
	bzero(field, 50);
	bzero(content, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要删除的记录的字段名：");
	setXY(startX + 5, startY + 3);
	printf("请输入字段名的内容：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 2);
	scanf("%s", &field);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &content);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, field);
	strcat_s(insert, insert2);
	strcat_s(insert, content);
	strcat_s(insert, insert3);
	strcat_s(insert, userid);
	strcat_s(insert, insert4);

	sql = insert;
	n = mysql_query(connection, sql);

	setXY(startX + 5, startY + 4);
	if (!n)
	{
		printf("数据删除成功！\n");
	}
	else
	{
		printf("数据删除失败！\n");
	}
	setXY(startX + 5, startY + 5);

	Sleep(1000);
}

//获取记录条数
int idFit()
{
	int i = 0;
	mysql_set_character_set(connection, "gbk");
	char query[100];
	char a[100] = "select id,date,event,duration,remark from fitness where userid = '";
	char b[100] = "'";
	memset(query, 0, 100);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	while ((row = mysql_fetch_row(res)))
	{
		i++;
	}
	mysql_free_result(res);
	return i;
}

//时间判断
int timeJudgeFit(char *date)
{
	int year = 0;
	int month = 0;
	int day = 0;
	int i;
	int j = 0;
	int k;
	int size = 0;

	for (i = 0; date[i] != '\0'; i++)
	{
		size++;
	}


	//判断年月日格式
	for (i = 0; i < size; i++)
	{
		if (date[i] == '-')
		{
			j++;
		}
	}

	if (j != 2)
	{
		return -1;
	}
	else
	{
		//获取年月日
		for (i = 0; date[i] != '-' && i < size; i++)
		{
			year = year * 10 + date[i] - 48;
		}
		for (j = i + 1; date[j] != '-' && j < size; j++)
		{
			month = month * 10 + date[j] - 48;
		}
		for (k = j + 1; k < size; k++)
		{
			day = day * 10 + date[k] - 48;
		}

		//年月日检查
		if (month > 12 || month < 1 || day > 31 || day < 1)
		{
			return -1;
		}
		else if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
		{
			return -1;
		}
		else if (month == 2 && day == 30)
		{
			return -1;
		}
		else if (month == 2 && day == 29)
		{
			//闰年判断
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return 1;
		}
	}
}
//主菜单-密码管理
void menuPassword()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 密码管理 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 19, startY + 2);
	printf("1.密码信息查询");
	setXY(startX + 19, startY + 4);
	printf("2.密码信息查找");
	setXY(startX + 19, startY + 6);
	printf("3.密码信息添加");
	setXY(startX + 19, startY + 8);
	printf("4.密码信息修改");
	setXY(startX + 19, startY + 10);
	printf("5.密码信息删除");
	setXY(startX + 19, startY + 12);
	printf("6.退出");

	aninal();
}

//查询菜单-密码
void menuQueryPass()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 密码信息查询 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fqueryPass();
}

//密码 模糊查找菜单
void menuFuzzyQueryPass()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 密码信息查找 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//密码 添加菜单
void menuAddPass()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 密码信息添加 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	faddPass();
}

//密码 修改菜单
void menuUpdatePass()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 密码信息修改 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//删除菜单—密码
void menuDeletePass()
{

	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 密码信息删除 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fdeletePass();
}

//数据库查询-密码
void fqueryPass()
{
	int i = 0;
	char query[200];
	char a[100] = "select id,account,password,remark from password where userid = '";
	char b[50] = "'";
	memset(query, 0, 200);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	mysql_set_character_set(connection, "gbk");
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	setXY(startX + 5, startY + 2 + i);
	printf("id");
	setXY(startX + 10, startY + 2 + i);
	printf("account");
	setXY(startX + 25, startY + 2 + i);
	printf("password");
	setXY(startX + 40, startY + 2 + i);
	printf("remark");

	while ((row = mysql_fetch_row(res)))
	{
		setXY(startX + 5, startY + 4 + i);
		printf("%s", row[0]);
		setXY(startX + 10, startY + 4 + i);
		printf("%s", row[1]);
		setXY(startX + 25, startY + 4 + i);
		printf("%s", row[2]);
		setXY(startX + 40, startY + 4 + i);
		printf("%s", row[3]);
		i++;
	}
	mysql_free_result(res);
	//mysql_close(connection);
	setXY(startX + 1, startY + 17);
	printf("输入0返回:\n");
}

//模糊查找-密码
void fFuzzyQueryPass()
{

	while (true)
	{
		menuFuzzyQueryPass();

		int n;
		int i = 7;
		char insert[200];
		char insert1[200] = "select * from password where (";
		char insert2[200] = " like '%";
		char insert3[200] = "%' and userid = '";
		char insert4[200] = "')";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 3);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "account") != 0
			&& strcmp(field, "password") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 6);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");

		}
		else
		{
			setXY(startX + 35, startY + 3);
			scanf("%s", &data);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);
			strcat_s(insert, userid);
			strcat_s(insert, insert4);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			mysql_query(connection, sql);
			res = mysql_use_result(connection);

			n = mysql_query(connection, sql);
			if (!n)
			{
				setXY(startX + 5, startY + 6);
				printf("无匹配结果!");

			}
			else
			{

				setXY(startX + 5, startY + 6);
				printf("查询结果：");
				setXY(startX + 5, startY + 7);
				printf("id");
				setXY(startX + 10, startY + 7);
				printf("account");
				setXY(startX + 25, startY + 7);
				printf("password");
				setXY(startX + 40, startY + 7);
				printf("remark");

				while ((row = mysql_fetch_row(res)))
				{
					setXY(startX + 5, startY + 2 + i);
					printf("%s", row[0]);
					setXY(startX + 10, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 25, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 40, startY + 2 + i);
					printf("%s", row[3]);
					i++;
				}
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 17);
			printf("输入0返回:\n");

			//select * from 数据表 where 姓名 like '%输入内容%'

			break;
		}
	}
}

//数据增加-密码
void faddPass()
{
	int n;
	char insert[200];
	char insert1[200] = "insert into password (id, account, password, remark, userid) values('";
	char insert2[200] = "', '";
	char insert3[200] = "');";
	char id[50];
	char account[50];
	char password[50];
	char remark[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(account, 50);
	bzero(password, 50);
	bzero(remark, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要添加的内容：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入id：");
	setXY(startX + 5, startY + 4);
	printf("请输入account：");
	setXY(startX + 5, startY + 5);
	printf("请输入password：");
	setXY(startX + 5, startY + 6);
	printf("请输入remark：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &account);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);
	scanf("%s", &password);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 6);
	scanf("%s", &remark);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, account);
	strcat_s(insert, insert2);
	strcat_s(insert, password);
	strcat_s(insert, insert2);
	strcat_s(insert, remark);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;
	n = mysql_query(connection, sql);

	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据添加成功！\n");
	}
	else
	{
		printf("数据添加失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}

//修改数据-密码
void fupdatePass()
{
	while (true)
	{
		menuUpdatePass();

		int n;
		char insert[200];
		char insert1[200] = "update password set ";
		char insert2[200] = " = '";
		char insert3[200] = "' where (id = '";
		char insert4[200] = "' and userid = '";
		char insert5[200] = "')";
		char id[50];
		char content[50];
		char result[50];

		bzero(insert, 50);
		bzero(id, 50);
		bzero(content, 50);
		bzero(result, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要修改的内容:\n");
		setXY(startX + 5, startY + 3);
		printf("请输入要修改的信息的ID号:\n");
		setXY(startX + 5, startY + 4);
		printf("请输入要修改的字符对应的字段名:");
		setXY(startX + 5, startY + 5);
		printf("请输入修改后的新内容:");

		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 3);
		scanf("%s", &id);
		setbuf(stdin, NULL);
		setXY(startX + 40, startY + 4);
		scanf("%s", &content);
		setbuf(stdin, NULL);

		if (strcmp(content, "id") != 0
			&& strcmp(content, "account") != 0
			&& strcmp(content, "password") != 0
			&& strcmp(content, "remark") != 0)
		{
			setXY(startX + 5, startY + 7);
			printf("请输入正确的字段名!");
			Sleep(1000);
			system("cls");

		}
		else
		{
			setXY(startX + 40, startY + 5);
			scanf("%s", &result);
			setbuf(stdin, NULL);

			strcat_s(insert, insert1);
			strcat_s(insert, content);
			strcat_s(insert, insert2);
			strcat_s(insert, result);
			strcat_s(insert, insert3);
			strcat_s(insert, id);
			strcat_s(insert, insert4);
			strcat_s(insert, userid);
			strcat_s(insert, insert5);

			sql = insert;

			n = mysql_query(connection, sql);
			setXY(startX + 1, startY + 16);
			if (!n)
			{
				printf("数据修改成功！\n");
			}
			else
			{
				printf("数据修改失败！\n");
			}
			setXY(startX + 1, startY + 17);
			printf("输入0返回:");

			break;
		}
	}
}

//删除数据-密码
void fdeletePass()
{
	int n;
	char insert[200];
	char insert1[200] = "delete from password where (id = '";
	char insert2[200] = "' and userid = '";
	char insert3[200] = "')";
	char id[50];

	bzero(insert, 50);
	bzero(id, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要删除的内容:\n");
	setXY(startX + 5, startY + 3);
	printf("请输入要删除的信息的ID号:\n");

	setbuf(stdin, NULL);
	setXY(startX + 36, startY + 3);
	scanf("%s", &id);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, id);
	strcat_s(insert, insert2);
	strcat_s(insert, userid);
	strcat_s(insert, insert3);

	sql = insert;

	n = mysql_query(connection, sql);
	setXY(startX + 1, startY + 16);
	if (!n)
	{
		printf("数据删除成功！\n");
	}
	else
	{
		printf("数据删除失败！\n");
	}
	setXY(startX + 1, startY + 17);
	printf("输入0返回:");
}
//打印菜单
void menuWebpage()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 网页管理 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");
	setXY(startX + 21, startY + 2);
	printf("1.网页信息查询");
	setXY(startX + 21, startY + 4);
	printf("2.网页信息添加");
	setXY(startX + 21, startY + 6);
	printf("3.网页信息修改");
	setXY(startX + 21, startY + 8);
	printf("4.网页信息删除");
	setXY(startX + 21, startY + 10);
	printf("5.退出");

	aninal();
}

//菜单操作
void menuWebpageChoice()
{
	bool a = true;
	while (a)
	{
		int choice = 0;
		menuWebpage();
		setbuf(stdin, NULL);
		setXY(startX + 1, startY + 15);
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			menuQueryWeb();
			break;
		case 2:
			menuAddWeb();
			break;
		case 3:
			menuUpdateWeb();
			break;
		case 4:
			menuDeleteWeb();
			break;
		case 5:
			a = false;
			break;
		default:
			setXY(startX + 1, startY + 16);
			printf("输入错误，请输入1~5内有的一个数字！\n");
			setXY(startX + 1, startY + 17);
			system("pause");
			break;
		}
	}
}

//数据库查询菜单
void menuQueryWeb()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 网页信息查询 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fqueryWeb();
}

//数据库添加菜单
void menuAddWeb()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 网页信息添加 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	faddWeb();
	Sleep(1000);
}

//数据库修改菜单
void menuUpdateWeb()
{
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 网页信息修改 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
	fupdateWeb();
	Sleep(1000);
}

//数据库删除菜单
void menuDeleteWeb()
{
	menuDeletePrintWeb();

	int choice;

	setXY(startX + 5, startY + 2);
	printf("1.进行单项删除");
	setXY(startX + 5, startY + 3);
	printf("2.进行批量删除");
	setXY(startX + 5, startY + 4);
	printf("请选择：");

	setXY(startX + 15, startY + 4);
	scanf("%d", &choice);

	if (choice == 1)
	{
		fdeleteWeb();
	}
	else if (choice == 2)
	{
		fdeleteBatchWeb();
	}
	else
	{
	}
}

//打印数据库删除菜单
void menuDeletePrintWeb()
{
	int i = 1;

	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────── 网页信息删除 ──────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}


//数据库模糊查询菜单
void menuFuzzyQueryWeb()
{
	int i = 0;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌──────────────────── 模糊查询 ────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 18; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 51, i);
		printf("│");
	}
	setXY(startX, startY + 18);
	printf("└──────────────────────────────────────────────────┘");

	aninal();
}

//数据库查询
void fqueryWeb()
{
	int i = 2;
	char choice1;
	int choice;
	mysql_set_character_set(connection, "gbk");
	char a[100] = "select id,name,address,type,remark from webpage where userid = '";
	char b[100] = "'";
	char query[100];
	memset(query, 0, 100);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	setXY(startX + 4, startY + 2);
	printf("id");
	setXY(startX + 8, startY + 2);
	printf("name");
	setXY(startX + 17, startY + 2);
	printf("address");
	setXY(startX + 39, startY + 2);
	printf("type");
	setXY(startX + 45, startY + 2);
	printf("remark");

	while ((row = mysql_fetch_row(res)))
	{
		setXY(startX + 4, startY + 2 + i);
		printf("%s", row[0]);
		setXY(startX + 8, startY + 2 + i);
		printf("%s", row[1]);
		setXY(startX + 15, startY + 2 + i);
		printf("%s", row[2]);
		setXY(startX + 39, startY + 2 + i);
		printf("%s", row[3]);
		setXY(startX + 45, startY + 2 + i);
		printf("%s", row[4]);
		i++;
	}
	mysql_free_result(res);
	//mysql_close(connection);

	setXY(startX + 1, startY + 15);
	printf("输入“1”进行模糊查找,输入其他键返回！\n");
	setXY(startX + 1, startY + 16);
	setbuf(stdin, NULL);
	//scanf("%d", &choice);
	scanf("%c", &choice1);
	choice = (int)choice1 - 48;
	printf("%c, %d", choice1, choice);

	if (choice == 1)
	{
		fFuzzyQueryWeb();
	}
	else
	{
		menuWebpageChoice();
	}
}

//模糊查找
void fFuzzyQueryWeb()
{
	while (true)
	{
		menuFuzzyQueryWeb();

		int i = 7;
		int n;
		char insert[200];
		char insert1[200] = "select id,name,address,type,remark from webpage where (";
		char insert2[200] = " like '%";
		char insert3[200] = "%' and userid = '";
		char insert4[200] = "')";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 3);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 3);
		scanf("%s", &data);
		setbuf(stdin, NULL);

		if (strcmp(field, "id") != 0
			&& strcmp(field, "name") != 0
			&& strcmp(field, "address") != 0
			&& strcmp(field, "type") != 0
			&& strcmp(field, "remark") != 0)
		{
			setXY(startX + 5, startY + 5);
			printf("请输入正确的字段名！");
			Sleep(1000);
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);
			strcat_s(insert, userid);
			strcat_s(insert, insert4);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			n = mysql_query(connection, sql);//n的返回值一直是0？？？
			res = mysql_use_result(connection);

			row = mysql_fetch_row(res);
			if (row != NULL)
			{
				setXY(startX + 4, startY + 6);
				printf("查询结果：");
				setXY(startX + 4, startY + 7);
				printf("id");
				setXY(startX + 8, startY + 7);
				printf("name");
				setXY(startX + 17, startY + 7);
				printf("address");
				setXY(startX + 39, startY + 7);
				printf("type");;
				setXY(startX + 45, startY + 7);
				printf("remark");

				setXY(startX + 4, startY + 2 + i);
				printf("%s", row[0]);
				setXY(startX + 8, startY + 2 + i);
				printf("%s", row[1]);
				setXY(startX + 15, startY + 2 + i);
				printf("%s", row[2]);
				setXY(startX + 39, startY + 2 + i);
				printf("%s", row[3]);
				setXY(startX + 45, startY + 2 + i);
				printf("%s", row[4]);
				i++;

				while (row = mysql_fetch_row(res))
				{
					setXY(startX + 4, startY + 2 + i);
					printf("%s", row[0]);
					setXY(startX + 8, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 15, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 39, startY + 2 + i);
					printf("%s", row[3]);
					setXY(startX + 45, startY + 2 + i);
					printf("%s", row[4]);
					i++;
				}
			}
			else
			{
				setXY(startX + 5, startY + 6);
				printf("无记录！");
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 19);
			printf("输入任意键返回！\n");
			setXY(startX + 1, startY + 20);
			setbuf(stdin, NULL);
			getch();
			break;
			//menuWebpageChoice();
		}

	}

	//select * from 数据表 where 姓名 like '%输入内容%'
}

//数据添加
void faddWeb()
{
	int n;
	int judge;
	int idnumber = 1;
	char insert[200];
	char insert1[200] = "insert into webpage (id, name, address, type, remark, userid) values('";
	char insert2[200] = "', '";
	char insert3[200] = "');";
	char id[50];
	char name[50];
	char address[50];
	char type[50];
	char remark[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(name, 50);
	bzero(address, 50);
	bzero(type, 50);
	bzero(remark, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要添加的内容：");;
	setXY(startX + 5, startY + 3);
	printf("请输入id：");
	setXY(startX + 5, startY + 4);
	printf("请输入name：");
	setXY(startX + 5, startY + 5);
	printf("请输入address：");
	setXY(startX + 5, startY + 6);
	printf("请输入type：");
	setXY(startX + 5, startY + 7);
	printf("请输入remark：");

	setbuf(stdin, NULL);
	setXY(startX + 31, startY + 3);
	scanf("%s", &id);
	setXY(startX + 31, startY + 4);
	scanf("%s", &name);
	setbuf(stdin, NULL);
	setXY(startX + 31, startY + 5);
	scanf("%s", &address);
	setbuf(stdin, NULL);
	setXY(startX + 31, startY + 6);
	scanf("%s", &type);
	setbuf(stdin, NULL);
	setXY(startX + 31, startY + 7);
	scanf("%s", &remark);
	setbuf(stdin, NULL);

	judge = webpageJudge(address);

	idnumber = idWeb();

	if (judge == 1 && idnumber >= 0)
	{
		strcat_s(insert, insert1);
		strcat_s(insert, id);
		strcat_s(insert, insert2);
		strcat_s(insert, name);
		strcat_s(insert, insert2);
		strcat_s(insert, address);
		strcat_s(insert, insert2);
		strcat_s(insert, type);
		strcat_s(insert, insert2);
		strcat_s(insert, remark);
		strcat_s(insert, insert2);
		strcat_s(insert, userid);
		strcat_s(insert, insert3);

		sql = insert;
		n = mysql_query(connection, sql);
		setXY(startX + 5, startY + 10);

		if (!n)
		{
			printf("数据添加成功！\n");
		}
		else
		{
			printf("数据添加失败！\n");
		}
	}
	else if (judge == -1 || idnumber < 0)
	{
		setXY(startX + 5, startY + 10);
		printf("数据添加失败！\n");
	}

	setXY(startX + 5, startY + 11);
}


//修改数据
void fupdateWeb()
{
	int n;
	int count;
	int idnumber = 0;
	int judge = -1;
	mysql_set_character_set(connection, "gbk");

	char choice;
	char insert[200];
	char insert1[200] = "update webpage set ";
	char insert2[200] = " = '";
	char insert3[200] = "' where (id = '";
	char insert4[200] = "' and userid = '";
	char insert5[200] = "')";
	char field[50];
	char id[50];
	char content[50];

	bzero(insert, 50);
	bzero(id, 50);
	bzero(field, 50);
	bzero(content, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要修改的内容所在id：\n");
	setXY(startX + 5, startY + 3);
	printf("请输入要修改的内容的字段名：\n");
	setXY(startX + 5, startY + 4);
	printf("请输入要修改的内容");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 2);
	scanf("%s", &id);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &field);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 4);
	scanf("%s", &content);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 5);

	count = idWeb();
	for (int i = 0; id[i] == '0'
		|| id[i] == '1'
		|| id[i] == '2'
		|| id[i] == '3'
		|| id[i] == '4'
		|| id[i] == '5'
		|| id[i] == '6'
		|| id[i] == '7'
		|| id[i] == '8'
		|| id[i] == '9'; i++)
	{
		idnumber = idnumber * 10 + id[i] - 48;
	}

	if (idnumber > count || idnumber == 0)
	{
		setXY(startX + 5, startY + 5);
		printf("请输入正确的id！");
		Sleep(1000);

		setXY(startX + 5, startY + 6);
		printf("输入1继续修改，输入其他键返回 ￣ ￣)σ");
		setbuf(stdin, NULL);
		setXY(startX + 5, startY + 7);
		scanf("%c", &choice);
		setbuf(stdin, NULL);
		if (choice == '1')
		{
			menuUpdateWeb();
		}
		else
		{
			menuWebpageChoice();
		}

	}
	else
	{
		if (strcmp(field, "address") == 0)
		{
			judge = webpageJudge(content);

			if (judge == -1)
			{
				setXY(startX + 5, startY + 5);
				printf("请输入正确的网址！");
				Sleep(1000);

				setXY(startX + 5, startY + 6);
				printf("输入1继续修改，输入其他键返回 ￣ ￣)σ");
				setbuf(stdin, NULL);
				setXY(startX + 5, startY + 7);
				scanf("%c", &choice);
				setbuf(stdin, NULL);
				if (choice == '1')
				{
					menuUpdateWeb();
				}
				else
				{
					menuWebpageChoice();
				}
			}
		}

		strcat_s(insert, insert1);
		strcat_s(insert, field);
		strcat_s(insert, insert2);
		strcat_s(insert, content);
		strcat_s(insert, insert3);
		strcat_s(insert, id);
		strcat_s(insert, insert4);
		strcat_s(insert, userid);
		strcat_s(insert, insert5);

		sql = insert;
		n = mysql_query(connection, sql);

		Sleep(50);

		setXY(startX + 5, startY + 5);
		if (n == 0)
		{
			printf("数据修改成功！\n");
		}
		else
		{
			printf("数据修改失败！\n");
		}
		setXY(startX + 5, startY + 6);
	}

}

//删除单项数据
void fdeleteWeb()
{
	while (true)
	{
		menuDeletePrintWeb();

		int n;
		int count;
		int idnumber = 0;

		mysql_set_character_set(connection, "gbk");
		char insert[200];
		char insert1[200] = "delete from webpage where (id = '";
		char insert2[200] = "' and userid = '";
		char insert3[200] = "')";
		char id[50];
		char choice;

		bzero(insert, 50);
		bzero(id, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要删除的记录的id：\n");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &id);
		setbuf(stdin, NULL);

		count = idWeb();
		for (int i = 0; id[i] == '0'
			|| id[i] == '1'
			|| id[i] == '2'
			|| id[i] == '3'
			|| id[i] == '4'
			|| id[i] == '5'
			|| id[i] == '6'
			|| id[i] == '7'
			|| id[i] == '8'
			|| id[i] == '9'; i++)
		{
			idnumber = idnumber * 10 + id[i] - 48;
		}

		if (idnumber > count || idnumber == 0)
		{
			setXY(startX + 5, startY + 3);
			printf("id不存在！删除失败！");

			Sleep(1000);

			setXY(startX + 5, startY + 4);
			printf("输入1继续删除，输入其他键返回 ￣ ￣)σ");
			setbuf(stdin, NULL);
			setXY(startX + 5, startY + 5);
			scanf("%c", &choice);
			setbuf(stdin, NULL);
			if (choice == '1')
			{
				menuDeleteWeb();
			}
			else
			{
				break;
			}

		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, id);
			strcat_s(insert, insert2);
			strcat_s(insert, userid);
			strcat_s(insert, insert3);

			sql = insert;
			n = mysql_query(connection, sql);

			setXY(startX + 5, startY + 3);
			if (!n)
			{
				printf("数据删除成功！\n");
			}
			else
			{
				printf("数据删除失败！\n");
			}
			setXY(startX + 5, startY + 4);

			Sleep(1000);
			break;
		}
	}

}

//批量删除数据
void fdeleteBatchWeb()
{
	menuDeletePrintWeb();

	int n;
	mysql_set_character_set(connection, "gbk");
	char insert[200];
	char insert1[200] = "delete from webpage where (";
	char insert2[200] = " ='";
	char insert3[200] = "' and userid = '";
	char insert4[200] = "')";
	char field[50];
	char content[50];

	bzero(insert, 50);
	bzero(field, 50);
	bzero(content, 50);

	setXY(startX + 5, startY + 2);
	printf("请输入要删除的记录的字段名：");
	setXY(startX + 5, startY + 3);
	printf("请输入字段名的内容：");

	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 2);
	scanf("%s", &field);
	setbuf(stdin, NULL);
	setXY(startX + 35, startY + 3);
	scanf("%s", &content);
	setbuf(stdin, NULL);

	strcat_s(insert, insert1);
	strcat_s(insert, field);
	strcat_s(insert, insert2);
	strcat_s(insert, content);
	strcat_s(insert, insert3);
	strcat_s(insert, userid);
	strcat_s(insert, insert4);

	sql = insert;
	n = mysql_query(connection, sql);

	setXY(startX + 5, startY + 4);
	if (!n)
	{
		printf("数据删除成功！\n");
	}
	else
	{
		printf("数据删除失败！\n");
	}
	setXY(startX + 5, startY + 5);

	Sleep(1000);
}

//获取记录条数
int idWeb()
{
	int i = 0;

	mysql_set_character_set(connection, "gbk");
	char a[100] = "select id,name,address,type,remark from webpage where userid = '";
	char b[100] = "'";
	char query[100];
	memset(query, 0, 100);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);

	while ((row = mysql_fetch_row(res)))
	{
		i++;
	}
	mysql_free_result(res);
	return i;
}

//网页判定
int webpageJudge(char *address)
{
	string str1 = address;
	string str2 = "http://www.";
	string str3 = "https://www.";
	string str4 = "www.";
	if (str1.compare(0, 11, str2) == 0 || str1.compare(0, 12, str3) == 0 || str1.compare(0, 4, str4) == 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

//表格框架
void frame_1() {
	startX = 32;
	startY = 5;
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────────────────────────────────────┐");
	setXY(startX, startY + 18);
	printf("└─────────────────────────────────────────────────┘");

	aninal();
}

//操作菜单 
void bookmark_menu() {
	startX = 32;
	startY = 5;
	int i = 1;
	system("cls");
	setXY(startX - 32, startY - 3);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX - 32, startY + 23);
	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");
	setXY(startX, startY);
	printf("┌────────────────────── 书签 ─────────────────────┐");
	setXY(startX, startY + 1);
	for (i = startY + 1; i < startY + 14; i++)
	{
		setXY(startX, i);
		printf("│");
		setXY(startX + 50, i);
		printf("│");
	}
	setXY(startX, startY + 14);
	printf("└─────────────────────────────────────────────────┘");
	setXY(startX + 21, startY + 2);
	printf("1.增加书签");
	setXY(startX + 21, startY + 4);
	printf("2.查询书签");
	setXY(startX + 21, startY + 6);
	printf("3.修改书签");
	setXY(startX + 21, startY + 8);
	printf("4.删除书签");
	setXY(startX + 21, startY + 10);
	printf("5.返回主菜单");
	printf("\n\n\n");
	setXY(startX + 23, startY + 17);
	printf("请选择：");

	aninal();
}

//增加书签
void bookmark_fadd() {
	int button;
	setXY(startX + 14, startY + 8);
	printf("任意键开始修改(ESC键返回）");
	button = getch();
	if (button == 27)
		bookmark_menu();
	else {
		system("cls");
		frame_1();
		int n;
		char insert[200];
		char insert1[200] = "insert into bookmark (userid, book_id, book_name, book_page,book_reading_page, book_remark) values('";
		char insert2[200] = "', '";
		char insert3[200] = "');";
		char book_id[50];
		char book_page[50];
		char book_reading_page[50];
		char book_name[50];
		char book_remark[50];

		bzero(insert, 50);
		bzero(book_id, 50);
		bzero(book_name, 50);
		bzero(book_page, 50);
		bzero(book_reading_page, 50);
		bzero(book_remark, 50);

		setXY(startX + 16, startY + 2);
		printf("请输入要添加的书签：\n");
		setXY(startX + 16, startY + 5);
		printf("ID：");
		setbuf(stdin, NULL);
		setXY(startX + 25, startY + 5);
		scanf("%s", &book_id);
		setXY(startX + 16, startY + 7);
		printf("书名：");
		setbuf(stdin, NULL);
		setXY(startX + 25, startY + 7);
		scanf("%s", &book_name);
		setXY(startX + 16, startY + 9);
		printf("总页数：");
		setbuf(stdin, NULL);
		setXY(startX + 25, startY + 9);
		scanf("%s", &book_page);
		setXY(startX + 16, startY + 11);
		printf("阅读进度：");
		setbuf(stdin, NULL);
		setXY(startX + 25, startY + 11);
		scanf("%s", &book_reading_page);
		setXY(startX + 16, startY + 13);
		printf("书签标注：");
		setbuf(stdin, NULL);
		setXY(startX + 25, startY + 13);
		scanf("%s", &book_remark);
		setbuf(stdin, NULL);

		strcat_s(insert, insert1);
		strcat_s(insert, userid);
		strcat_s(insert, insert2);
		strcat_s(insert, book_id);
		strcat_s(insert, insert2);
		strcat_s(insert, book_name);
		strcat_s(insert, insert2);
		strcat_s(insert, book_page);
		strcat_s(insert, insert2);
		strcat_s(insert, book_reading_page);
		strcat_s(insert, insert2);
		strcat_s(insert, book_remark);
		strcat_s(insert, insert3);

		sql = insert;
		n = mysql_query(connection, sql);

		setXY(startX + 21, startY + 15);
		if (!n)
		{
			printf("数据添加成功！\n");
		}
		else
		{
			printf("数据添加失败！\n");
		}
		setXY(startX + 18, startY + 17);
		printf("任意键返回书签菜单");
		getchar();
		bookmark_menu();
	}
}

//书签删除
void bookmark_fdelete() {
	int button;
	setXY(startX + 14, startY + 8);
	printf("任意键开始修改(ESC键返回）");
	button = getch();
	if (button == 27)
		bookmark_menu();
	else {
		system("cls");
		frame_1();
		int n;
		char insert[200];
		char insert1[200] = "delete from bookmark where (book_id = '";
		char insert2[200] = "' and userid = '";
		char insert3[200] = "')";
		char book_id[50];

		bzero(insert, 50);
		bzero(book_id, 50);

		setXY(startX + 17, startY + 6);
		printf("请输入要删除的内容");
		setXY(startX + 15, startY + 8);
		printf("请输入要删除的信息的ID号:");

		setbuf(stdin, NULL);
		setXY(startX + 25, startY + 10);
		scanf("%s", &book_id);
		setbuf(stdin, NULL);

		strcat_s(insert, insert1);
		strcat_s(insert, book_id);
		strcat_s(insert, insert2);
		strcat_s(insert, userid);
		strcat_s(insert, insert3);

		sql = insert;
		n = mysql_query(connection, sql);

		setXY(startX + 20, startY + 13);
		if (!n)
		{
			printf("数据删除成功！\n");
		}
		else
		{
			printf("数据删除失败！\n");
		}
		setXY(startX + 17, startY + 15);
		printf("任意键返回书签菜单");
		getch();
		bookmark_menu();
	}
}

//书签修改
void bookmark_fupdate() {
	int button;
	setXY(startX + 14, startY + 8);
	printf("任意键开始修改(ESC键返回）");
	button = getch();
	if (button == 27)
		bookmark_menu();
	else {
		while (true)
		{
			system("cls");
			frame_1();

			int n;
			char insert[200];
			char insert1[200] = "update bookmark set ";
			char insert2[200] = " = '";
			char insert3[200] = "' where (book_id = '";
			char insert4[200] = "' and userid = '";
			char insert5[200] = "')";
			char book_id[50];
			char content[50];
			char result[50];

			bzero(insert, 50);
			bzero(book_id, 50);
			bzero(content, 50);
			bzero(result, 50);

			setXY(startX + 5, startY + 4);
			printf("要修改的信息的ID号:");
			setXY(startX + 5, startY + 6);
			printf("要修改的字符对应的字段名:");
			setXY(startX + 5, startY + 8);
			printf("(书签序号为book_id,书名为book_name");
			setXY(startX + 5, startY + 10);
			printf("总页数为book_page,阅读进度为book_r");
			setXY(startX + 5, startY + 12);
			printf("eading_page,书签标注为book_remark)");

			setbuf(stdin, NULL);
			setXY(startX + 25, startY + 4);
			scanf("%s", &book_id);
			setbuf(stdin, NULL);
			setXY(startX + 31, startY + 6);
			scanf("%s", &content);
			setbuf(stdin, NULL);

			if (strcmp(content, "book_id") != 0
				&& strcmp(content, "book_name") != 0
				&& strcmp(content, "book_page") != 0
				&& strcmp(content, "book_reading_page") != 0
				&& strcmp(content, "book_remark") != 0)
			{
				setXY(startX + 5, startY + 14);
				printf("请输入正确的字段名!");
				Sleep(1000);
				system("cls");

			}
			else
			{
				setXY(startX + 5, startY + 14);
				printf("修改后的内容:");
				setXY(startX + 19, startY + 14);
				scanf("%s", &result);
				setbuf(stdin, NULL);
				strcat_s(insert, insert1);
				strcat_s(insert, content);
				strcat_s(insert, insert2);
				strcat_s(insert, result);
				strcat_s(insert, insert3);
				strcat_s(insert, book_id);
				strcat_s(insert, insert4);
				strcat_s(insert, userid);
				strcat_s(insert, insert5);

				sql = insert;

				n = mysql_query(connection, sql);
				setXY(startX + 13, startY + 16);
				if (!n)
				{
					printf("数据修改成功！任意键返回...");
				}
				else
				{
					printf("数据修改失败！任意键返回...");
				}
				getch();
				bookmark_menu();
				break;
			}
		}
	}
}

//计算有多少行数据
int bookmark_number() {
	int whole = 1;
	mysql_set_character_set(connection, "gbk");
	char query[200];
	char a[200] = "select book_id,book_name,book_page,book_reading_page,book_remark from bookmark where userid = '";
	char b[50] = "'";
	memset(query, 0, 200);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);
	if (res != NULL) {
		row = mysql_fetch_row(res);
		if (row != NULL)
		{
			while ((row = mysql_fetch_row(res)))
				whole++;
			mysql_free_result(res);
		}
	}

	return whole;
}

//书签查询
void bookmark_row_fquery(int row_number) {
	int i, whole = 1;
	mysql_set_character_set(connection, "gbk");
	char query[200];
	char a[200] = "select book_id,book_name,book_page,book_reading_page,book_remark from bookmark where userid = '";
	char b[50] = "'";
	memset(query, 0, 200);
	strcat(query, a);
	strcat(query, userid);
	strcat(query, b);
	sql = query;
	mysql_query(connection, sql);
	res = mysql_use_result(connection);
	system("cls");
	frame_1();
	if (res != NULL) {
		row = mysql_fetch_row(res);
		if (row != NULL)
		{
			for (i = 0; i < row_number; i++)
				row = mysql_fetch_row(res);

			setXY(startX + 13, startY + 2);
			printf("书签序号：");
			setXY(startX + 25, startY + 2);
			printf("%s", row[0]);

			setXY(startX + 13, startY + 4);
			printf("书名：");
			setXY(startX + 25, startY + 4);
			printf("%s", row[1]);

			setXY(startX + 13, startY + 6);
			printf("总页数：");
			setXY(startX + 25, startY + 6);
			printf("%s", row[2]);

			setXY(startX + 13, startY + 8);
			printf("阅读进度");
			setXY(startX + 25, startY + 8);
			printf("%s", row[3]);

			setXY(startX + 13, startY + 10);
			printf("书签标注：");
			setXY(startX + 25, startY + 10);
			printf("%s", row[4]);

			setXY(startX + 7, startY + 15);
			printf("ESC返回书签菜单");
			setXY(startX + 29, startY + 14);
			printf("←查看上个书签");
			setXY(startX + 29, startY + 16);
			printf("→查看下个书签");
			mysql_free_result(res);
		}
	}
}

//按键操作书签查询
void bookmark_fquery() {
	int button;
	int row_number = 0;
	bookmark_row_fquery(row_number);
	setXY(startX + 21, startY + 19);
	printf("%d 页 / %d 页", row_number + 1, bookmark_number());
	do {
		button = getch();
		system("cls");
		frame();
		if (button == 27) {
			bookmark_fquery_menu();
			row_number = 0;
		}
		else if (button == 75) {
			row_number--;
			if (row_number < 0)
				row_number = 0;
			bookmark_row_fquery(row_number);
			setXY(startX + 21, startY + 19);
			printf("%d 页 / %d 页", row_number + 1, bookmark_number());
		}
		else if (button == 77) {
			row_number++;
			if (row_number >= bookmark_number())
				row_number -= 1;
			bookmark_row_fquery(row_number);
			setXY(startX + 21, startY + 19);
			printf("%d 页 / %d 页", row_number + 1, bookmark_number());
		}
		else {
			bookmark_row_fquery(row_number);
			setXY(startX + 21, startY + 19);
			printf("%d 页 / %d 页", row_number + 1, bookmark_number());
		}
	} while (button != 27);
}
void cat() {
	setXY(startX + 56, startY + 9);
	printf(" ∧                ∧   \n");
	setXY(startX + 56, startY + 10);
	printf("│  \\____ ╭╭╭╭╭____/ │\n");
	setXY(startX + 56, startY + 11);
	printf("│                   │ \n");
	setXY(startX + 56, startY + 12);
	printf("│                   │ \n");
	setXY(startX + 56, startY + 13);
	printf("│    __       __    │ \n");
	setXY(startX + 56, startY + 14);
	printf("│  ≡     o     ≡  │   \n");
	setXY(startX + 56, startY + 15);
	printf("│                   │ \n");
	setXY(startX + 56, startY + 16);
	printf("└───—○◤▽◥○────┘     \n");
	setXY(startX + 56, startY + 17);
	printf("   │             │    \n");
	setXY(startX + 56, startY + 18);
	printf("   │      o      │    _の\n");
	setXY(startX + 56, startY + 19);
	printf("   │   ╭────╮    │  /~ \n");
}
void aninal() {
	cat();
	pig();
}
void cat_lee() {
	setXY(0, startY + 6);
	printf("        ╭ ─ ╮           ╭ ─ ╮\n");
	printf("	│   │           │   │\n");
	printf("	│   │           │   │\n");
	printf("	│     ''  “   ''   │\n");
	printf("	│       │   │       │\n");
	printf("       ╰╰   ~~    ·    ~~  ╯╯\n");
	printf("       ╰╰                   ╯╯\n");
	printf("         ╰ ───────────────  ╯\n");
	printf("        ╭ ─ ─ |        |─ ─ ╮\n");
	printf("        |     |        |     |\n");
	printf("        |     |        |     |      \n");
	printf("      ──────────────────────────\n");
}
void pig() {
	setXY(0, startY + 10);
	printf("         ╭ ╮_____╭╭╭_____╭ ╮ \n");
	printf("         │                 │ \n");
	printf("         │                 │ \n");
	printf("         │                 │ \n");
	printf("         │  ●╭──────╮ ●  │ \n");
	printf("         │ ≡ │ ● ●│  ≡ │ \n");
	printf("         │    └──────┘     │ \n");
	printf("         │                 │ \n");
	printf("         │                 │ \n");
	printf("         └─┬—○────┬—○──┘ \n");

}
void bookmark_fuzzy_fquery() {
	while (true)
	{
		system("cls");
		frame();

		int i = 7;
		int n;
		char insert[200];
		char insert1[200] = "select * from bookmark where ";
		char insert2[200] = " like '%";
		char insert3[200] = "%'";
		char field[50];
		char data[50];

		bzero(insert, 50);
		bzero(field, 50);
		bzero(data, 50);

		setXY(startX + 5, startY + 2);
		printf("请输入要查找的字段名：");
		setXY(startX + 5, startY + 4);
		printf("请输入要查找的数据：");

		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 2);
		scanf("%s", &field);
		setbuf(stdin, NULL);
		setXY(startX + 35, startY + 4);
		scanf("%s", &data);
		setbuf(stdin, NULL);

		if (strcmp(field, "book_id") != 0
			&& strcmp(field, "book_name") != 0
			&& strcmp(field, "book_page") != 0
			&& strcmp(field, "book_reading_page") != 0
			&& strcmp(field, "book_remark") != 0)
		{
			setXY(startX + 5, startY + 6);
			printf("请输入正确的字段名！");
			Sleep(1000);
		}
		else
		{
			strcat_s(insert, insert1);
			strcat_s(insert, field);
			strcat_s(insert, insert2);
			strcat_s(insert, data);
			strcat_s(insert, insert3);

			mysql_set_character_set(connection, "gbk");
			sql = insert;
			n = mysql_query(connection, sql);
			res = mysql_use_result(connection);

			row = mysql_fetch_row(res);
			if (row != NULL)
			{
				setXY(startX + 5, startY + 6);
				printf("查询结果：");
				setXY(startX + 5, startY + 8);
				printf("序号");
				setXY(startX + 10, startY + 8);
				printf("书名");
				setXY(startX + 21, startY + 8);
				printf("页数");
				setXY(startX + 26, startY + 8);
				printf("进度");;
				setXY(startX + 32, startY + 8);
				printf("书签标注");

				setXY(startX + 6, startY + 3 + i);
				printf("%s", row[1]);
				setXY(startX + 10, startY + 3 + i);
				printf("%s", row[2]);
				setXY(startX + 22, startY + 3 + i);
				printf("%s", row[3]);
				setXY(startX + 27, startY + 3 + i);
				printf("%s", row[4]);
				setXY(startX + 33, startY + 3 + i);
				printf("%s", row[5]);
				i++;

				while (row = mysql_fetch_row(res))
				{
					setXY(startX + 6, startY + 2 + i);
					printf("%s", row[1]);
					setXY(startX + 10, startY + 2 + i);
					printf("%s", row[2]);
					setXY(startX + 22, startY + 2 + i);
					printf("%s", row[3]);
					setXY(startX + 27, startY + 2 + i);
					printf("%s", row[4]);
					setXY(startX + 33, startY + 2 + i);
					printf("%s", row[5]);
					i++;
				}
			}
			else
			{
				setXY(startX + 5, startY + 6);
				printf("无记录！");
			}

			mysql_free_result(res);
			//mysql_close(connection);

			setXY(startX + 1, startY + 19);
			printf("输入任意键返回！\n");
			getch();
			bookmark_fquery_menu();
			break;
		}

	}

	//select * from 数据表 where 姓名 like '%输入内容%'
}

//书签查询——菜单__加
void bookmark_fquery_menu() {
	system("cls");
	frame();
	setXY(startX + 21, startY + 5);
	printf("1.翻阅书签");
	setXY(startX + 21, startY + 7);
	printf("2.查询书签");
	setXY(startX + 21, startY + 9);
	printf("3.返回");
	printf("\n\n\n");
	setXY(startX + 23, startY + 15);
	printf("请选择：");
}

//书签查询菜单操作—加
void bookmark_fuery_domenu() {
	int choice;
	bookmark_fquery_menu();
	while (true) {
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			system("cls");
			frame();
			bookmark_fquery();
			break;
		case 2:
			system("cls");
			frame();
			bookmark_fuzzy_fquery();
			break;
		case 3:
			system("cls");
			frame();
			bookmark_menu();
			break;
		default:
			setXY(startX + 10, startY + 20);
			printf("输入错误，请输入1~3内有的一个数字！\n");
			setXY(startX + 19, startY + 22);
			printf("按任意键重新选择");
			getch();
			system("cls");
			bookmark_fquery_menu();
			break;
		}
		if (choice == 3)
			break;
	}

}

//	printf("───────────────────────────────────────────────────── 白金手册 ─────────────────────────────────────────────────────────");

//  printf("❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤ 白金手册 ❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤❤");

//  printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");

//  printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");

//	printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★ 白金手册 ★★★★★★★★★★★★★★★★★★★★★★★★★★★★");

//  setXY(startX - 32, startY + 23);
//  printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★");

//★ ❤ 