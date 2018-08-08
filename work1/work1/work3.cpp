//#include <WinSock2.h>
//#include <windows.h>
//#include <stdio.h>
//#include <mysql.h>
//
//
//MYSQL_RES *res;
//MYSQL_ROW row;
//MYSQL *conn;
//const char *sql;
////数据库连接
//void fconn() {
//	const char *server = "localhost";//数据库服务器
//	const char *user = "root";//登录用户名
//	const char *password = "liu980511";//登录密码
//	const char *database = "bjsc";//数据库名
//	conn = mysql_init(NULL);//初始化
//	if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
//		printf("连接失败：%sn", mysql_error(conn));
//	else
//		printf("连接成功！\n");
//
//}
////数据库查询
//void fquery() {
//	mysql_set_character_set(conn, "gbk");
//	sql = "select * from test_mysql";
//	mysql_query(conn, sql);
//	res = mysql_use_result(conn);
//	while ((row = mysql_fetch_row(res))) {
//		printf("%s\t%s\t%s\n", row[0], row[1], row[2]);
//	}
//	mysql_free_result(res);
//	mysql_close(conn);
//}
////数据增加
//void fadd() {
//	int n;
//	mysql_set_character_set(conn, "gbk");
//	sql = "insert into test_mysql(name,content) values('新添加名称','新添加内容')";
//	n = mysql_query(conn, sql);
//	if (!n) {
//		printf("数据添加成功\n");
//	}
//	else {
//		printf("数据添加失败\n");
//	}
//}
////修改数据
//void fupdate() {
//	int n;
//	mysql_set_character_set(conn, "gbk");
//	sql = "update test_mysql set content='修改后的内容' where id='3'";
//	n = mysql_query(conn, sql);
//	if (!n) {
//		printf("数据修改成功\n");
//	}
//	else {
//		printf("数据修改失败\n");
//	}
//}
////删除数据
//void fdelete() {
//	int n;
//	mysql_set_character_set(conn, "gbk");
//	sql = "delete from test_mysql where id='3'";
//	n = mysql_query(conn, sql);
//	if (!n) {
//		printf("数据删除成功\n");
//	}
//	else {
//		printf("数据删除失败\n");
//	}
//}
//int main()
//{
//	void fconn();
//	void fquery();
//	void fadd();
//	void fupdate();
//	void fdelete();
//	fconn();
//	//fquery();
//	//fadd();
//	//fupdate();
//	fdelete();
//	getchar();
//	return 0;
//}