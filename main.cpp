
#include "Container.h"
#include "Array1D.h"

int main()
{

//~~~~~~~~~~~~~~~~~~Calling Method 1~~~~~~~~~~~~~~~~~//

	//Assignment::Array1D <int> a;
	//a.PushElement(10);
	//a.PushElement(20);
	//a.PushElement(30);
	//a.PushElement(40);
	//a.PushElement(50);
	//a.PushElement(60);

	//
	//cout << "Elements are: " << endl;
	//cout << a.get(0) << " " << a.get(1) << " " << a.get(2) << " " << a.get(3) << " " << a.get(4) << " " << a.get(5) << endl;
	//cout << "Value at index 2 is: " << a[2] << endl;
	//cout << "Current Size is: " << a.GetSize() << endl;
	//cout << "Capacity is: " << a.ResizeCapacity() << endl;
	//a.RemoveElement();
	//a.RemoveElement();
	//cout << "After removing the elements,Size is: " << a.GetSize() << endl;
	//cout << "After removing the elements,Capacity is: " << a.ResizeCapacity() << endl;
	
//~~~~~~~~~~~~~~~~~~Calling Method 2~~~~~~~~~~~~~~~~~//

	int choice = 1, value;
	Assignment::Array1D <int> a,a1;                       //object creation
	Assignment::Array1D <int> a2 = a;                     //Copy Constructor
	a1 = a;                                               //Assignment Operator
	      while (choice < 6 && choice != 0)
	      {
	          cout << "1: Push Element. " << endl;
			  cout << "2: Display Elements. " << endl;
	          cout << "3: Remove Element. " << endl;
	          cout << "4: Get Size. " << endl;
	          cout << "5: Get Capacity. " << endl;
	          cout << "6: Exit. " << endl;

	          cout << endl << "Enter your choice: ";
	          cin >> choice;
	
	          switch (choice)
	          {
	          case 1:
	              cout << "Enter the Element that you want to push: ";
	              cin >> value;
	              a.PushElement(value);
				  a1.PushElement(value);
	              break;

			  case 2:
				  cout << "Elements are: ";
				  for (int i = 0; i < a.GetSize(); i++)
				  {
					  cout << a.get(i) << " ";
				  }
				  cout << endl;
				  break;
	
	          case 3:
	              a.RemoveElement();
	              break;
	
	          case 4:
	              cout << "Current Size is: " << a.GetSize() << endl;
	              break;
	
	          case 5:
	              cout << "Current Capacity is: " << a.ResizeCapacity() << endl;
	              break;
	
	          case 6:
	              cout << "Exit" << endl;
	              break;
	
	          default:
	              cout << "Invalid option!!" << endl;
	              break;
	          }
	      }
		  
		  return 0;
		


	/*Library::PrintArrayContainer();
	Library::PrintVectorContainer();
	Library::PrintPairClass();
	Library::PrintTupleClass();
	Library::PrintListContainer();*/
	//Library::PrintDeque();
	//Library::PrintStack();
	//Library::PrintQueue();
	//Library::PrintPriorityQueue();
	//Library::PrintSet();
	//Library::PrintMap();
	//Task::PrintTask1();
	//Task1::PrintVectorTask();

	//string str = "Lorem ipsum dolor sit amet consectetur adipiscing elit . Nullam efficitur ornare posuere . Mauris congue dapibus malesuada . Suspendisse pellentesque odio in dapibus eleifend . Nunc non pellentesque sapien . Mauris vel leo ut justo semper tristique ut non magna . Donec quis auctor lectus . Curabitur at euismod turpis . Nulla ut risus ligula . Maecenas sed accumsan dui . Suspendisse maximus mi a pulvinar ultrices velit justo posuere sapien quis tristique magna tellus vel nunc . Praesent dolor nulla tristique non sem eu ullamcorper varius purus . Donec sodales nulla eu purus hendrerit iaculis . Mauris commodo eu leo ut fermentum . Integer sit amet ornare libero . Vestibulum ipsum magna commodo ac venenatis sed condimentum ut lacus . In condimentum rhoncus ipsum a hendrerit arcu varius a . Aenean laoreet lobortis lacus a feugiat . Duis tincidunt suscipit purus vel suscipit nibh efficitur eget . Cras eget diam risus . Nam dictum consequat ex id rutrum orci feugiat eget . Duis lorem erat accumsan ut ultrices ultricies consectetur eget mi . Donec mattis sapien elit eget ullamcorper dolor condimentum eu . Integer varius scelerisque neque eu finibus . Phasellus facilisis eu felis ut tincidunt . Suspendisse non vulputate risus . Praesent in risus volutpat , hendrerit tellus ut , rhoncus purus . Maecenas placerat erat ac turpis vestibulum , sed mollis sem condimentum . In in velit mi . Suspendisse hendrerit diam quam , in pellentesque velit tincidunt sed . Pellentesque sagittis vehicula felis a hendrerit . Aenean in sollicitudin massa . Morbi quis nisi scelerisque , vehicula risus scelerisque , euismod dolor . Nulla ultricies lectus vel posuere venenatis . Vivamus eu fringilla tortor . Nam tincidunt turpis vel felis malesuada cursus . Suspendisse augue libero , congue sed fringilla vel , tincidunt a mi . Aliquam cursus lorem sit amet congue facilisis . Sed faucibus malesuada scelerisque . Fusce ultrices pellentesque elit , vitae condimentum ante bibendum et . Donec dignissim dui ut ante tempus , sit amet semper lectus rhoncus . Suspendisse non vulputate risus . Praesent in risus volutpat , hendrerit tellus ut , rhoncus purus . Maecenas placerat erat ac turpis vestibulum , sed mollis sem condimentum . In in velit mi . Suspendisse hendrerit diam quam , in pellentesque velit tincidunt sed . Pellentesque sagittis vehicula felis a hendrerit . Aenean in sollicitudin massa . Morbi quis nisi scelerisque , vehicula risus scelerisque , euismod dolor . Nulla ultricies lectus vel posuere venenatis . Vivamus eu fringilla tortor . Nam tincidunt turpis vel felis malesuada cursus . Suspendisse augue libero , congue sed fringilla vel , tincidunt a mi . Aliquam cursus lorem sit amet congue facilisis . Sed faucibus malesuada scelerisque . Fusce ultrices pellentesque elit , vitae condimentum ante bibendum et . Donec dignissim dui ut ante tempus , sit amet semper lectus rhoncus . Suspendisse non vulputate risus . Praesent in risus volutpat , hendrerit tellus ut , rhoncus purus . Maecenas placerat erat ac turpis vestibulum , sed mollis sem condimentum . In in velit mi . Suspendisse hendrerit diam quam , in pellentesque velit tincidunt sed . Pellentesque sagittis vehicula felis a hendrerit . Aenean in sollicitudin massa . Morbi quis nisi scelerisque , vehicula risus scelerisque , euismod dolor . Nulla ultricies lectus vel posuere venenatis . Vivamus eu fringilla tortor . Nam tincidunt turpis vel felis malesuada cursus . Suspendisse augue libero , congue sed fringilla vel , tincidunt a mi . Aliquam cursus lorem sit amet congue facilisis . Sed faucibus malesuada scelerisque . Fusce ultrices pellentesque elit , vitae condimentum ante bibendum et . Donec dignissim dui ut ante tempus , sit amet semper lectus rhoncus . Suspendisse non vulputate risus . Praesent in risus volutpat , hendrerit tellus ut , rhoncus purus . Maecenas placerat erat ac turpis vestibulum , sed mollis sem condimentum . In in velit mi . Suspendisse hendrerit diam quam , in pellentesque velit tincidunt sed . Pellentesque sagittis vehicula felis a hendrerit . Aenean in sollicitudin massa . Morbi quis nisi scelerisque , vehicula risus scelerisque , euismod dolor . Nulla ultricies lectus vel posuere venenatis . Vivamus eu fringilla tortor . Nam tincidunt turpis vel felis malesuada cursus . Suspendisse augue libero , congue sed fringilla vel , tincidunt a mi . Aliquam cursus lorem sit amet congue facilisis . Sed faucibus malesuada scelerisque . Fusce ultrices pellentesque elit , vitae condimentum ante bibendum et . Donec dignissim dui ut ante tempus , sit amet semper lectus rhoncus . Suspendisse non vulputate risus . Praesent in risus volutpat , hendrerit tellus ut , rhoncus purus . Maecenas placerat erat ac turpis vestibulum , sed mollis sem condimentum . In in velit mi . Suspendisse hendrerit diam quam , in pellentesque velit tincidunt sed . Pellentesque sagittis vehicula felis a hendrerit . Aenean in sollicitudin massa . Morbi quis nisi scelerisque , vehicula risus scelerisque , euismod dolor . Nulla ultricies lectus vel posuere venenatis . Vivamus eu fringilla tortor . Nam tincidunt turpis vel felis malesuada cursus . Suspendisse augue libero , congue sed fringilla vel , tincidunt a mi . Aliquam cursus lorem sit amet congue facilisis . Sed faucibus malesuada scelerisque . Fusce ultrices pellentesque elit , vitae condimentum ante bibendum et . Donec dignissim dui ut ante tempus , sit amet semper lectus rhoncus .";
	//Library::PrintMapQues(str);

	
	//Assignment::PrintArray1D();
	

}
