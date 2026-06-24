#include<iostream>
#include<string>
//类做友元
class Building;//先声明Building类，让goodboy知道有这个
class goodboy
{
public:
	goodboy();
	void visit();
	Building* building;
};
class Building
{
	friend class goodboy;
public:
	Building();
public:
	 std::string m_sittingroom;
private:
	std:: string m_bedroom;

};
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";

}
goodboy::goodboy()
{
	building = new Building;

}
void goodboy::visit()
{
std::cout << "访问" << building->m_sittingroom << std::endl;
std::cout << "访问" << building->m_bedroom << std::endl;
}
void test01()
{
	goodboy gg;
	gg.visit();

}
int main()
{
	test01();
	return 0;
}