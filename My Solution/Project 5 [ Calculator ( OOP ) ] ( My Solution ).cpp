#include<iostream>
using namespace std;

class clsCalculator
{
	enum _enOperation { Adding, Subtracting, Multiplying, Dividing, Clearing };
	_enOperation _CurrentOperation;
	short _Result = 0;
	short _UserInput = 0;

	string _GetOperationString()
	{
		switch (_CurrentOperation)
		{
		case _enOperation::Adding:
			return "Adding";
		case _enOperation::Subtracting:
			return "Subtracting";
		case _enOperation::Multiplying:
			return "Multiplying";
		case _enOperation::Dividing:
			return "Dividing";
		case _enOperation::Clearing:
			return "Clear";
		}
	}

	void _ValidateUserInputIsNotZero()
	{
		if (_UserInput == 0)
			_UserInput = 1;
	}

public:

	void Add(short Number)
	{
		_CurrentOperation = _enOperation::Adding;
		_UserInput = Number;
		_Result += _UserInput;
	}

	void Subtract(short Number)
	{
		_CurrentOperation = _enOperation::Subtracting;
		_UserInput = Number;
		_Result -= _UserInput;
	}

	void Multiply(short Number)
	{
		_CurrentOperation = _enOperation::Multiplying;
		_UserInput = Number;
		_Result *= _UserInput;
	}

	void Divide(short Number)
	{
		_CurrentOperation = _enOperation::Dividing;
		_UserInput = Number;
		_ValidateUserInputIsNotZero();
		_Result /= _UserInput;
	}

	void Clear()
	{
		_CurrentOperation = _enOperation::Clearing;
		_UserInput = 0;
		_Result = 0;
	}

	void PrintResult()
	{
		cout << "Result After " << _GetOperationString() << " " << _UserInput << " is : " << _Result << endl;
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

	Calculator1.Clear();
	Calculator1.PrintResult();

	system("pause>0");
	return 0;
}