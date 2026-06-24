#include<iostream>
#include<string>
//改掉写namespace的习惯
//友元
class Building
{
	friend void goodboy(Building* building);
public:
	 Building()
	 {
		 m_sittingroom = "客厅";
		 m_bedroom = "卧室";
	 }
public:
	std::string m_sittingroom;
private:
	std::string m_bedroom;
};
void goodboy(Building* building)
{
	std::cout << "进去" << building->m_sittingroom << std::endl;
	std::cout << "好哥们悄悄进入了：" << building->m_bedroom << std::endl;
}
void test01()
{
	Building building;//用类为模板  创建一个具体的对象
	goodboy(&building);//把building的地址传给goodboy
}
int main()
{
	test01();
	return 0;

}