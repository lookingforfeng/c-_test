/*********************************************************
* main.c
* @�������ߣ� lookingfeng
* @���������� 
* @����ʱ�䣺 2020-01-12T11:38:52.410Z+08:00
* @����޸ģ� 2020-01-12T12:00:05.673Z+08:00
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
	//���庯��ָ�룬ע�����Ҫ�����Ž��Ǻź�ָ�����ֽ������
	void (*func1_point)();
	int (*func2_point)(const int, const int);
	//����ָ��ĸ�ֵ��ֱ�ӽ��������ָ�����Ϳ�����
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