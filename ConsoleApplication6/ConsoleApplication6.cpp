#include <Windows.h>
#include <iostream>




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int* ptr = new int;
    int a = 20;
    *ptr = 5;

    std::cout << *ptr << "\n";

    delete ptr;

    ptr = &a;

    std::cout << *ptr << "\n";

    delete ptr;
    ptr = nullptr;
    
    
  


   

    


    return 0;
}

/*
* void FillArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() %10 + 1;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << *(arr + i) << "\n";
    }


}
* 
* -----------------------------
* 
* void FOO(int* one, int* two)
{
    int num = *two;
    *two = *one;
    *one = num;
}

 -----------------------------

* void FOO(int *num)
{
    *num += 3;
    std::cout << &num << "\n";
    std::cout << num << "\n";
}

* int a = 5;
    int b = 1;

    

    int* ptr = &a;
    
    std::cout << &a << "\n";
    std::cout << ptr << "\n";
    std::cout << &ptr << "\n";
    std::cout << *ptr << "\n\n";


    
    ptr = &b;
    std::cout << b << "\n";
    std::cout << &b << "\n";
    std::cout << ptr << "\n";
    std::cout << &ptr << "\n";
    std::cout << *ptr << "\n\n";
    --------------------------------------
    FOO(&one, &two);
    std::cout << one << " " << two << "\n";

      int one = 5, two = 10;
    std::cout << one << " " << two << "\n";
    std::swap(one, two);
    std::cout << one << " " << two << "\n";


    std::cout << a << "\n";
    FOO(&a);
    std::cout << a << "\n";

    -----------------------------------------
    int one = 5, two = 10;
    std::cout << one << " " << two << "\n";

    FOO(&one, &two);
    std::cout << one << " " << two << "\n";
    ----------------------------------------
    std::cout << *arr << "\n";
    std::cout << arr[0] << "\n";
    std::cout << arr << "\n";
    std::cout << *(arr + 1) << "\n";
    std::cout << *(arr + 1) << "\n";

    ----------------------------------------

      const int size = 5;
    int arr[size];

    FillArray(arr, size);



*/