#include<iostream>
using namespace std;

class clsCalculator
{
	enum enOperation { Adding, Subtracting, Multiplying, Dividing, Clearing };
	enOperation CurrentOperation;
	short Result = 0;
	short UserInput = 0;

	string GetOperationString()
	{
		switch (CurrentOperation)
		{
		case enOperation::Adding:
			return "Adding";
		case enOperation::Subtracting:
			return "Subtracting";
		case enOperation::Multiplying:
			return "Multiplying";
		case enOperation::Dividing:
			return "Dividing";
		case enOperation::Clearing:
			return "Clear";
		}
	}

	void ValidateUserInputIsNotZero()
	{
		if (UserInput == 0)
			UserInput = 1;
	}

public:

	void Add(short Number)
	{
		CurrentOperation = enOperation::Adding;
		UserInput = Number;
		Result += UserInput;
	}

	void Subtract(short Number)
	{
		CurrentOperation = enOperation::Subtracting;
		UserInput = Number;
		Result -= UserInput;
	}

	void Multiply(short Number)
	{
		CurrentOperation = enOperation::Multiplying;
		UserInput = Number;
		Result *= UserInput;
	}

	void Divide(short Number)
	{
		CurrentOperation = enOperation::Dividing;
		UserInput = Number;
		ValidateUserInputIsNotZero();
		Result /= UserInput;
	}

	void Clear()
	{
		CurrentOperation = enOperation::Clearing;
		UserInput = 0;
		Result = 0;
	}

	void PrintResult()
	{
		cout << "Result After " << GetOperationString() << " " << UserInput << " is : " << Result << endl;
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