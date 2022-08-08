#include "Container.h"

void Library::PrintArrayContainer()
{
	array<int, 5>data_array1 = {1,12,11,2,7};
	array<int, 5>data_array2 = { 11,2,0,6,8 };
	//cout << data_array1.at(2) << endl;                             //at() function
	//cout << data_array1.front() << endl;                           //front() function
	//cout << data_array1.back() << endl;                            //back() function
	//data_array1.fill(12);                                          //fill() function
	/*for (int i = 0; i <= 4; i++)
	{
		cout<<data_array1[i]<<endl;
	}*/
	data_array1.swap(data_array2);                                   //swap(function)
	for (int i = 0; i <= 4; i++)
	{
		cout << data_array1[i] << endl;
	}
	for (int i = 0; i <= 4; i++)
	{
		cout << data_array2[i] << endl;
	}
	cout << "Size of First Array is: " << data_array1.size() << endl;
	cout << "Size of Second Array is: " << data_array2.size() << endl;
}

void Library::PrintVectorContainer()
{
	vector <int> v1;
	cout << "Current capacity is: " << v1.capacity() << endl;
	for (auto i = 0; i <= 9; i++)
	{
		v1.push_back(i*10);                                            //push_back()function
	}
	for (auto i = 0; i < v1.size(); i++)
	{ 
		cout <<" " << v1[i];
	}
	vector <int> ::iterator it = v1.begin();                             //Iterator for add elements at the desired place of array 
	v1.insert(it+3, 45);                                                 //Insert Function
	for (auto i = 0; i < v1.size(); i++)
	{
		cout << "\n" << " " << v1[i];
	}
	//cout << "First Value is: " << v1.front() <<endl;
	//cout << "Last Value is: " << v1.back() << endl;
	cout << endl<< "The Size of vector is: " << v1.size() << endl;       //size()function
	cout << "Current capacity is: " <<v1.capacity() << endl;             //capacity()function
	v1.pop_back();                                                       //pop_back()function
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	cout << "After pop" << endl;
	cout << "Current capacity is: " << v1.capacity() << endl;
	cout<<"Value at index 3 is: "<< v1.at(3) << endl;                     //at()function
	v1.clear();
	cout << "The Size of vector is: " << v1.size() << endl;
	cout << "Current capacity is: " << v1.capacity() << endl;
	/*v1.push_back(12);
	cout << "Current capacity is: " << v1.capacity() << endl;
	v1.push_back(11);
	cout << "Current capacity is: " << v1.capacity() << endl;
	v1.push_back(10);
	cout << "Current capacity is: " << v1.capacity() << endl;
	v1.push_back(10);
	cout << "Current capacity is: " << v1.capacity() << endl;
	v1.push_back(10);
	cout << "Current capacity is: " << v1.capacity() << endl;
	v1.push_back(10);
	cout << "Current capacity is: " << v1.capacity() << endl;
	v1.push_back(10);
	cout << "Current capacity is: " << v1.capacity() << endl;*/
	/*vector <int> v2(5);
	vector <int> v3(5, 10);
	vector <string> v4(4, "Hey");
	cout << v4[0]<<endl;
	cout << v4[1]<<endl;
	cout << v4[2]<<endl;
	cout << v4[3]<<endl;*/
}

void Library::PrintPairClass()
{
	class Student
	{
	private:
		string name;
		int age;
	public:
		void setData(string nm, int a)
		{
			name = nm;
			age = a;
		}
		int getData()
		{
			cout << "Name is: " << name << endl;
			cout << "Age is: " << age << endl;
			return 0;
		}

	};

	Student student;
	student.setData("Ankita", 25);
	student.getData();

	pair < int, int > p1;
	pair < string, int > p2;
	pair < string, string > p3;
	pair < string, float > p4;
	pair < string, Student > p5;

	p1 = make_pair(4, 8);
	p2 = make_pair("August", 5);
	p3 = make_pair("Prime Minister", "India");
	p4 = make_pair("Share Market", 12234.678);
	p5 = make_pair("Student", student);

	cout << p1.first << " " << p1.second << endl;
	cout << p2.first << " " << p2.second << endl;
	cout << p3.first << " " << p3.second << endl;
	cout << p4.first << " " << p4.second << endl;
	cout << (p5.second).getData() << endl;

}

void Library::PrintTupleClass()
{
	tuple < string, int, int > t1;
	tuple < string, string, string > t2;
	t1 = make_tuple("August", 4, 2022);
	t2 = make_tuple("Aditya", "Roy", "Kapoor");
	cout<< get <0> (t1)<< " "<< get <1>(t1) << " " << get <2>(t1)<<endl;
	cout << get <0>(t2) << " " << get <1>(t2) << " " << get <2>(t2);
}

void Library::PrintListContainer()
{
	list <int> l1 {10,4,8,6,12,2};
	list <string> l2{ "Varanasi","Delhi","Chennai","Maharastra" };

	//Push_back and push_front Function:
	l2.push_back("Indore");
	l2.push_front("Prayagraj");

	//Sorting Function:
	list <int>::iterator a = l1.begin();
	while (a != l1.end())
	{
		cout << *a << " ";
		a++;
	}
	cout << endl<<endl;
	//Sort Function:
	l1.sort();
	list <int>::iterator a1 = l1.begin();
	while (a1 != l1.end())
	{
		cout<< * a1 << " ";
		a1++;
	}
	cout << endl << endl;

	//Reverse Sorting:
	l1.reverse();
	list <int>::iterator a3 = l1.begin();
	while (a3 != l1.end())
	{
		cout << *a3 << " ";
		a3++;
	}
	cout << endl << endl;

	//Remove an Element:
	l1.remove(2);
	list <int>::iterator a5 = l1.begin();
	while (a5 != l1.end())
	{
		cout << *a5 << " ";
		a5++;
	}
	cout << endl << endl;

    //Pop_back and pop_front function:
	list <string>::iterator p = l2.begin();
	while (p != l2.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	l2.pop_front();
	l2.pop_back();
	list <string>::iterator q = l2.begin();
	while (q != l2.end())
	{
		cout << *q << " ";
		q++;
	}
	cout << endl << "Total size of list is: " << l2.size();
}



void Task::PrintTask1()
{
	struct info
	{
		string name;
		int age = 0;
		float salary = 0;
	};

	/*void put_value(string nm,int ag,float sal)
	{
		nm = name;
		ag = age;
		sal = salary;
	}*/

	class List
	{
	public:
		List()
		{

		}

		list<info*> ourlist;
		list<info*>::iterator it = ourlist.begin();
		/*while(it!= ourlist.end())
		{
			it++;
		}*/

		void Add(info* add)
		{
			ourlist.push_back(add);

		}
		void Rev(info* rev)
		{
			ourlist.reverse();
		}
		void Clear()
		{
			ourlist.clear();
		}
		void Size()
		{
			//ourlist.size();
			cout << "Size is: " << ourlist.size() << endl;
		}

		void Sort()
		{
			ourlist.sort();
		}
		List(const List& obj)
		{
			obj.ourlist;
		}
		~List()
		{

		}
	};
	info* tempinfo = new info();
	void (info ::* tempinfo) (string, int, float) = &info::put_value;
	
	/*tempinfo->name;
	tempinfo->age;
	tempinfo->salary;*/

	List li;
	li.Size();
	li.Add(tempinfo);
	li.Clear();
	List li1 = li;
	li1.Size();
	
}
