#pragma once
#include <iostream>
#include <array>
#include <vector>

using namespace std;

//template <typename T>
namespace Assignment
{
    template <typename T>
    class Array1D
    {
    private:
        T* vec;
        int capacity;
        int current;

    public:
        Array1D()
        {
            vec = new T[1];
            capacity = 1;
            current = 0;
        }
        
        Array1D (const Array1D& arr)
        {
            vec = new T[1];
            *vec = *(arr.vec);
            capacity = arr.capacity;
            current = arr.current;
        }
        
        ~Array1D()
        {
            delete[]vec;
            vec = NULL;
        }

        //operator [] overloading:
        void operator=(Array1D const& arr)
        {
            vec = new T[1];
            *vec = *(arr.vec);
            capacity = arr.capacity;
            current = arr.current;
        }

        const T& operator[](int index)
        {
            if (index >= current)
            {
                cout << "Error: Index Out oF Bounds!!" << endl;
                exit(0);
            }
            else
            {
                return *(vec + index);
            }
        }

        void PushElement(T data)
        {

            if (current == capacity)
            {
                T* temp = new T[2 * capacity];

                for (int i = 0; i < capacity; i++)
                {
                    temp[i] = vec[i];
                }

                // deleting prev Array
                delete[] vec;
                capacity *= 2;
                vec = temp;
            }

            // Inserting data
            vec[current] = data;
            current++;
        }

        T get(int index)
        {
            // if index is within the range
            if (index <= current)
            {
                return vec[index];
            }
            // if index is out of range 
            else
            {
                cout << "Index is out of range!" << endl;
            }
        }

        void RemoveElement()
        {
            int index;
            int size = GetSize();
            cout << "Enter the index number of the value that you want to delete: " << endl;
            cin >> index;
            if (index < 0 || index >= size)
            {
                cout << "Invalid" << endl;
            }
            else
            {
                for (int i = index; i <= size - 1; i++)
                {
                    vec[i] = vec[i + 1];
                }
                for (int i = 0; i < size - 1; i++)
                {
                    cout << vec[i] << " ";
                }
                current--;
                cout << endl;
            }
        }

        int GetSize()
        {
            return current;
        }

        int ResizeCapacity()
        {
            /*int newCapacity = capacity * 2;
            int* temp = new int[2 * capacity];
            memcpy(temp, vec, capacity * sizeof(int));
            capacity = newCapacity;
            delete[]vec;
            vec = temp;*/
            return capacity;
        }


    };
   
}
