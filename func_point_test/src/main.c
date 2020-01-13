/*********************************************************
* main.c
* @代码作者： lookingfeng
* @功能描述： 
* @创建时间： 2020-01-12T11:38:52.410Z+08:00
* @最后修改： 2020-01-12T12:00:05.673Z+08:00
*********************************************************/

#include <stdio.h>
#include <stdlib.h>

void func1()
{
	printf("this is func1 \n");
}

void func1_test()
{
	printf("this is func1_test \n");
}

int func2(const int a, const int b)
{
	printf("this is func2\nthe result is :%d\n", a + b);
	return a + b;
}

int main(int argc, char *argv[])
{
	//定义函数指针，注意必须要有括号将星号和指针名字结合起来
	void (*func1_point)();
	int (*func2_point)(const int, const int);
	//函数指针的赋值，直接将函数名字搞过来就可以了
	func1_point = func1;
	func1_point();
	func1_point = func1_test;
	func1_point();
	func2_point = func2;

	printf("Hello World\n");

	func2_point(3, 4);
	printf("end\n\n");

	return (0);
}