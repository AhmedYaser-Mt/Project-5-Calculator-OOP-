#include<iostream>
using namespace std;

class clsCalculator
{
	float _Result = 0;
	float _LastNumber = 0;
	float _PreviousResult = 0;
	string _LastOperation = "Clear";

	bool _IsZero(float Number)
	{
		return Number == 0;
	}

public:

	void Add(float Number)
	{
		_LastOperation = "Adding";
		_PreviousResult = _Result;
		_LastNumber = Number;
		_Result += Number;
	}

	void Subtract(float Number)
	{
		_LastOperation = "Subtracting";
		_PreviousResult = _Result;
		_LastNumber = Number;
		_Result -= Number;
	}

	void Multiply(float Number)
	{
		_LastOperation = "Multiplying";
		_PreviousResult = _Result;
		_LastNumber = Number;
		_Result *= Number;
	}

	void Divide(float Number)
	{
		_LastOperation = "Dividing";
		_PreviousResult = _Result;

		if (_IsZero(Number))
		{
			Number = 1;
		}

		_LastNumber = Number;
		_Result /= Number;
	}

	void Clear()
	{
		_LastOperation = "Clear";
		_PreviousResult = 0;
		_LastNumber = 0;
		_Result = 0;
	}

	void CancelLastOperation()
	{
		_LastOperation = "Cancelling Last Operation";
		_LastNumber = 0;
		_Result = _PreviousResult;
	}

	void PrintResult()
	{
		cout << "Result After " << _LastOperation << " " << _LastNumber << " is : " << _Result << "\n";
	}

	float GetFinalResult()
	{
		return _Result;
	}
};

int main()
{
	clsCalculator Calculator1;

	Calculator1.Clear();

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();

	system("pause>0");
	return 0;
}