#include <WinSock2.h>
#include <windows.h>
#include <stdio.h>
#include <mysql.h>

int main()
{
	MYSQL *conn;
	const char *server = "localhost";//数据库服务器
	const char *user = "root";//登录用户名
	const char *password = "liu980511";//登录密码
	const char *database = "mysql";//数据库名
	conn = mysql_init(NULL);//初始化
	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
		printf("连接失败：%sn", mysql_error(conn));
	else
		printf("连接成功！");
	getchar();
	return 0;
}
