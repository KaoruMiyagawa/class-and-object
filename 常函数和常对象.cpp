#include<iostream>
//常函数
class person
{
public:
	//this的本质是指针常量  指向不可以修改
	void showperson()const
	{
		//this->m_a = 100;
		this->m_b = 100;
	}
	int m_a;
	mutable int m_b;//mutable特殊变量  有他就可以改

};
//常对象（常对象只能调用常函数）
void test01()
{
	person p;
	p.showperson();
}
void test02()
{
	const person p;//在对象前加const  变为常对象
	//p.m_a = 100;
	p.m_b = 100;//因为加了mutable所以不影响

}