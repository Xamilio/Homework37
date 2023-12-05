#include <iostream>
using namespace std;


//1
//class Counter
//{
//	int Min;
//	int Max;
//	int Count;
//public:
//	Counter() 
//	{ 
//		Count = 0;
//		Setup(0, 0);
//	}
//	Counter(int min, int max)
//	{
//		Setup(min, max);
//	}
//	void Setup(int min, int max)
//	{
//		Min = min;
//		Max = max;
//		if (Count < Min)
//		{
//			Count = Min;
//		}
//		if (Count > Max)
//		{
//			Count = Max;
//		}
//	}
//	void Step()
//	{
//		if (Count >= Max)
//		{
//			Count = Min;
//		}
//		else
//		{
//			Count++;
//		}
//	}
//	void Run(int steps)
//	{
//		for (int i = 0; i < steps; i++)
//		{
//			Step();
//		}
//	}
//	int Get()
//	{
//		return Count;
//	}
//};
//int main()
//{
//	setlocale(LC_ALL, "");
//	Counter obj;
//	int min;
//	int max;
//	int steps;
//	cout << "Введите минимально значение: ";
//	cin >> min;
//	cout << "Введите максимальное значение: ";
//	cin >> max;
//	obj.Setup(min, max);
//	cout << "Введите количество шагов: ";
//	cin >> steps;
//	obj.Run(steps);
//	cout << obj.Get();
//}


//2
//class Elevator
//{
//	int MinFloor;
//	int MaxFloor;
//	int CurFloor;
//public:
//	Elevator()
//	{
//		MinFloor = 0;
//		MaxFloor = 0;
//		CurFloor = 0;
//		Setup(0, 0);
//	}
//	void Setup(int minfloor, int maxfloor)
//	{
//		MinFloor = minfloor;
//		MaxFloor = maxfloor;
//		if (CurFloor < minfloor)
//		{
//			CurFloor = minfloor;
//		}
//		if (CurFloor > maxfloor)
//		{
//			CurFloor = maxfloor;
//		}
//	}
//	void Run(int floor)
//	{
//		if (floor > MaxFloor)
//		{
//			cout << "Error\n";
//		}
//		else if (floor < MinFloor)
//		{
//			cout << "Error\n";
//		}
//		else
//		{
//			CurFloor = floor;
//		}
//		
//		
//	}
//	int Get()
//	{
//		return CurFloor;
//	}
//};
//int main()
//{
//	setlocale(LC_ALL, "");
//	Elevator obj;
//	int min;
//	int max;
//	int steps;
//	cout << "Введите минимальный этаж: ";
//	cin >> min;
//	cout << "Введите максимальный этаж: ";
//	cin >> max;
//	obj.Setup(min, max);
//	cout << "Введите требуемый этаж: ";
//	cin >> steps;
//	obj.Run(steps);
//	cout << "Текущий этаж: " << obj.Get();
//}