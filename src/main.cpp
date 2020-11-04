#include <iostream>
#include <string>
#include <fstream>
#include "List_int.h"

using namespace std;

int main()
{
	char keyboard='0';
	cout << "欢迎使用通讯录管理系统" << endl << "按0新建通讯录，按q退出" << endl;
	cin >> keyboard;
	if (keyboard == '0')
	{
		Tele Telelist;
		Person* frist=NULL;
		frist = new Person[1000];
		cout << "请输入姓名：";
		cin >> frist->name;
		cout << "请输入性别：";
		cin >> frist->sex;
		cout << "请输入年龄：";
		cin >> frist->age;
		cout << "请输入联系方式：";
		cin >> frist->tel;
		Telelist.Create(*frist);
		delete[]frist;
		cout << "success:通讯录创建成功！！！！！" << endl;
		do {
			cout << "按1添加成员,按2查看所有成员，按q退出" << endl;
			cin >> keyboard;
			switch (keyboard) {
			case '1':
				{
					Person* temp = NULL;
					temp = new Person[1000];
					cout << "请输入姓名：";
					cin >> temp->name;
					cout << "请输入性别：";
					cin >> temp->sex;
					cout << "请输入年龄：";
					cin >> temp->age;
					cout << "请输入联系方式：";
					cin >> temp->tel;
					Telelist.Append(*temp);
					delete[]temp;
					cout << "success:成员添加成功！！！！！" << endl;
					break;
				}
			case '2':
				{
				Telelist.ShowList();
				break;
				}
			}
		} while (keyboard != 113);
		return 0;
	}

	else if(keyboard==113) return 0;
}