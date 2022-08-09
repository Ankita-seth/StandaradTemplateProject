#pragma once
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <tuple>
#include <list>


using namespace std;
namespace Library
{
	void PrintArrayContainer();

	void PrintVectorContainer();

	void PrintPairClass();

	void PrintTupleClass();

	void PrintListContainer();

	
}

namespace Task
{
	struct info
	{
		string name;
		int age = 0;
		float salary = 0;
	};

	class List
	{
	public:
		List()
		{

		}
		List(const List& obj)
		{
			obj.ourlist;
		}
		~List()
		{
			Clear();
		}

		list<info*> ourlist;

		void Add(info* add, bool back);

		void Pop(bool back);

		/*info* Front();*/

		void Rev();

		void Clear();

		int Size();

		void Display();

		void Sort();

	};

	void PrintTask1();
}

namespace Task1
{
	class EmpInfo
	{
	public:
		int emp_id=0;
		string emp_name;
		string emp_add;
	};

	class Vector
	{
	public:
		vector<EmpInfo*> myvector;
		Vector()
		{

		}
		~Vector()
		{
			Clear();
		}

		void Push(EmpInfo* add);

		void Pop();

		int Size();

		int Capacity();

		void At();

		void Clear();

		void Display();

	};

	void PrintVectorTask();
}