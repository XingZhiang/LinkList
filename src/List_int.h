// List_int.h		单向链表结点数据组织形式描述
#ifndef LIST_INT_H
#define LIST_INT_H
#include <iostream>
#include <string>
using namespace std;

struct Person
{
	string name;		// 数据域(虽然这里仅有一个数据，但还是用数据datum的复数形式)   
	string sex;			// 性别  
	string tel;			// 电话号码
	string age;			// 年龄
	Person* next;			// 指针域		

	Person& operator = (const Person& r) {
		if (this == &r) return *this;
		name = r.name;
		sex = r.sex;
		tel = r.tel;
		age = r.age;
		next = NULL;
		return *this;
	}
};



// 请在此补充6个函数（Create，NumPersons，ShowList，Insert，Append，FreeList）的函数原型声明
class Tele
{
public:
	void Create(const Person &r);
	void Append(const Person& r);
	void ShowList() const;
	// 以下为4个函数的函数原型（其定义已完成，见List_int.cpp文件
	//friend ostream& operator<<(ostream& out, const Person* head);
	//Person* Locate(string n, int& num, bool newsearch);	// 返回找到的结点地址，"返回"该结点的序号num
	//int Save(const char* filename, const Person* head);
	//int Load(const char* filename, Person*& head);

private:
	Person* head;
	Person* cur_Person;
};







#endif
