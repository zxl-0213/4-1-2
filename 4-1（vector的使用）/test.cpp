#include<iostream>
#include<vector>
using namespace std;
//��ʹ��vector�Ŀ��������졢���ơ�
void test_vector1()
{
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	vector<int>v2(v1);
	vector<int>v3;
	v3 = v1;
	for (size_t i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	for (size_t i = 0; i < v2.size(); ++i)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	for (size_t i = 0; i < v3.size(); ++i)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
}

//���ֱ�����ʽ
void test_vector2()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//��һ�֣�operator[]+size
	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//�ڶ��֣�������
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;

	}
	cout << endl;
	//�����֣���Χfor
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

//�������͵ĵ�����
void test_vector3()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	//��һ�֣��ɶ���д����
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		*it *= 2;
		cout << *it << " ";
		it++;
	}
	cout << endl;
	//�ڶ��ַ��򣬿ɶ���д
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;
}


void test_vector4()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.insert(v.begin(), -1);
	v.insert(v.begin()+1, 0);
	v.insert(v.end(), 5);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	vector<int>::iterator pos = find(v.begin(), v.end(), 2);
	if (pos != v.end())
	{
		v.erase(pos);
	}

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}
int main()
{
	//test_vector1();
	//test_vector2();
	//test_vector3();
	test_vector4();
	return 0;
}