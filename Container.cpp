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

 void Task::List::Add(info* add, bool back)
{
	if (back)
		ourlist.push_back(add);
	else
		ourlist.push_front(add);
}

void Task::List::Pop(bool back)
{
	if (back)
		ourlist.pop_back();
	else
		ourlist.pop_front();
}
//int info* Task::List::Front()
//{
//	return ourlist.front();
//}

 void Task::List::Rev()
{
	ourlist.reverse();
}

 void Task::List::Clear()
{
	for (list<info*>::iterator iter = ourlist.begin(); iter != ourlist.end(); iter++)
	{
		delete (*iter);
		*iter = NULL;
	}
	ourlist.clear();
}

 int Task::List::Size()
{

	return ourlist.size();
}

 void Task::List::Display()
{
	for (list<info*>::iterator iter = ourlist.begin(); iter != ourlist.end(); iter++)
	{
		cout << "Name: " << (*iter)->name << " ";
		cout << "Age: " << (*iter)->age << " ";
		cout << "Salary: " << (*iter)-> salary << " ";
		cout << endl;
	}
}

 void Task::List::Sort()
{
	ourlist.sort();
}

 void Task::PrintTask1()
 {

	 List li;
	 //int listSize = li.Size();
	 cout << "Size of the list is: " << li.Size()<<endl;

	 
	
	 info* tempinfo = new info();
	 tempinfo->age = 20;
	 tempinfo->name = "Nix";
	 tempinfo->salary = 1245.8965;
	 li.Add(tempinfo, true);

	 tempinfo = new info();
	 tempinfo->age = 20;
	 tempinfo->name = "Jim";
	 tempinfo->salary = 2324.564;
	
	 li.Add(tempinfo, true);
	 
	 li.Display();
	 
	 li.Rev();
	 cout << endl<<"After Reverse, list values are: "<<endl;
	 li.Display();
	 cout << "Size of the list is: " << li.Size()<<endl;
	 li.Pop(true);
	 cout << "After Pop,Size of the list is: " << li.Size() << endl;
	 li.Clear();
	 cout << "After Clear Function,Size of the list is: " << li.Size() << endl;
	 li.Display();
	 
	 //Copy Constructor :
	 List li1 = li;
	 cout <<endl<< "Copy Constructor: "<<endl;
	
	 tempinfo = new info();
	 tempinfo->age = 21;
	 tempinfo->name = "Kate";
	 tempinfo->salary = 45745.635;

	 cout << "Size of the list is: " << li1.Size() << endl;
	 li1.Add(tempinfo, true);
	 li1.Display();
	 cout << "After Push,Size of the list is: " << li1.Size() << endl;
	 li1.Pop(false);
	 cout << "After Pop,Size of the list is: " << li.Size() << endl;
 }

 void Task1::Vector::Push(EmpInfo* add)
 {
	 myvector.push_back(add);
 }

 void Task1::Vector::Pop()
 {
	 myvector.pop_back();
 }

 int Task1::Vector::Size()
 {
	 return myvector.size();
 }

 void Task1::Vector::At()
 {
	 for (int i = 0; i < Size(); i++)
	 { 
		 cout << myvector.at(i)<<endl;
	 }
	
 }

 void Task1::Vector::Clear()
 {
	 myvector.clear();
 }

 void Task1::Vector::Display()
 {
	 for (vector<EmpInfo*>::iterator it = myvector.begin(); it != myvector.end(); it++)
	 {
		 cout <<"Employee Id: " << (*it)->emp_id << endl;
		 cout << "Employee Name: " << (*it)->emp_name << endl;
		 cout << "Employee Address: " << (*it)->emp_add << endl;
	 }
 }

 int Task1::Vector::Capacity()
 {
	 return myvector.capacity();
 }

 void Task1::PrintVectorTask()
 {
	 Vector vec;
	 EmpInfo* tempinfo = new EmpInfo();

	 tempinfo->emp_id = 1;
	 tempinfo->emp_name = "Jenna";
	 tempinfo->emp_add = "London";
	 vec.Push(tempinfo);
	
	 tempinfo = new EmpInfo();
	 tempinfo->emp_id = 2;
	 tempinfo->emp_name = "Samuel";
	 tempinfo->emp_add = "Turkey";
	 vec.Push(tempinfo);

	 tempinfo = new EmpInfo();
	 tempinfo->emp_id = 3;
	 tempinfo->emp_name = "Kizzi";
	 tempinfo->emp_add = "Turkey";
	 vec.Push(tempinfo);

	 tempinfo = new EmpInfo();
	 tempinfo->emp_id = 4;
	 tempinfo->emp_name = "Rango";
	 tempinfo->emp_add = "Desert";
	 vec.Push(tempinfo);

	 tempinfo = new EmpInfo();
	 tempinfo->emp_id = 5;
	 tempinfo->emp_name = "John";
	 tempinfo->emp_add = "London";
	 vec.Push(tempinfo);

	 tempinfo = new EmpInfo();
	 tempinfo->emp_id = 6;
	 tempinfo->emp_name = "Cristina";
	 tempinfo->emp_add = "South Africa";
	 vec.Push(tempinfo);

	 tempinfo = new EmpInfo();
	 tempinfo->emp_id = 7;
	 tempinfo->emp_name = "Pilip";
	 tempinfo->emp_add = "Austria";
	 vec.Push(tempinfo);

	 cout << "Size of Vector is: " << vec.Size() << endl<<endl;
	 cout << "Capacity of Vector is: " << vec.Capacity()<<endl;
	 vec.Display();
	// cout << "Value at index 3 is: "<<endl;
	 vec.At();
	 cout << endl << "After push,Size of Vector is: " << vec.Size()<<endl;
	 cout << "After push,Capacity of Vector is: " << vec.Capacity()<<endl;
	 
	 vec.Pop();
	 vec.Pop();
	 cout << "After pop,Size of Vector is: " << vec.Size() << endl;
	 cout << "After pop,Capacity of Vector is: " << vec.Capacity()<<endl;
	 vec.Clear();
	 vec.Display();
	 cout << "After clear,Size of Vector is: " << vec.Size() << endl;
	 cout << "After clear,Capacity of Vector is: " << vec.Capacity();
 }
