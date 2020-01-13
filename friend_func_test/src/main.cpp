/*
 * @Author: lookingfeng
 * @Date: 2020-01-12 16:33:31
 * @LastEditTime : 2020-01-12 17:15:11
 * @Description: 
 */

#include <iostream>
using namespace std;

class test_class
{
public:
	test_class(int a, int b);
	friend void friend_func(test_class test_class);
	friend class friend_test_class;

private:
	int mya;
	int myb;
};

test_class::test_class(int a, int b)
{
	mya = a;
	myb = b;;
}

//ע������Ķ��壬�������������test_class�ĳ�Ա����
//�������ܹ��������˽�б���
void friend_func(test_class the_friend_class)
{
	cout << "the private number in the test class is :"
		 << the_friend_class.mya << " and " << the_friend_class.myb << "\n"
		 << endl;
}

class friend_test_class
{
public:
	friend_test_class();
	void print_msg_in_friend_class(test_class a_test_class);
};

friend_test_class::friend_test_class()
{
}

//��Ԫ������Ҳ���Է����൱�е�˽�б���
void friend_test_class::print_msg_in_friend_class(test_class a_test_class)
{
	cout << "friend class get the msg,a_test_class.mya:" << a_test_class.mya << "\n"
		 << endl;
}

int main()
{
	cout << "this is a friend function test\n"
		 << endl;

	test_class test1(3, 4);
	friend_test_class *friend_test = new friend_test_class();
	friend_test->print_msg_in_friend_class(test1);
	friend_func(test1);

	return 0;
}