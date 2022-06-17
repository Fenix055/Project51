#include <iostream>
#include <fstream>
#include <string>

bool minus1(char& arr)
{
	bool c = 0;
	switch (arr)
	{
	case '1': arr = '0'; c = 1; break;
	case '2': arr = '1'; c = 1; break;
	case '3': arr = '2'; c = 1; break;
	case '4': arr = '3'; c = 1; break;
	case '5': arr = '4'; c = 1; break;
	case '6': arr = '5'; c = 1; break;
	case '7': arr = '6'; c = 1; break;
	case '8': arr = '7'; c = 1; break;
	case '9': arr = '8'; c = 1; break;
	}
	return c;
}




void main()
{
	setlocale(LC_ALL, "Russian");

	char* arrC = new char[16]{'À','Á','Â','Ã','Ä','Å','¨','Æ','Ç','È','É','Ê','Ë','Ì','Í','\0'};

	//1/std::cout << arrC;

	/*2/std::cin.getline(arrC, sizeof(arrC));
	std::cout << arrC;
	std::cout << "\n";
	for (int i = 0; i < 16; i++)std::cout << arrC[i];*/

	/*3/std::string str{ "ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍ"};
	std::cout << str;
	std::cout << "\n";
	std::getline(std::cin,str);
	std::cout << str;
	std::cout << "\n";

	int count = 0; 
	int begin = 0;
	int x = 0;

	while (begin != str.length() - 1)
	{

		x = str.find(' ', begin);
		if (x == -1)break;
		if (x != 0 || x != str.length() - 1)
			if (str.find(' '))count++;
		begin++;
	}


	std::cout << count;
	std::cout << "\n";

	std::cout << strlen(arrC);
	std::cout << "\n";
	std::cout << sizeof(char);
	std::cout << sizeof(arrC);
	
	std::cout << "\n";

	std::cout << sizeof(str);
	std::cout << str.length();
	std::cout << "\n";*/

	bool(*Minus1)(char arr);
	Minus1 = minus1;
	char* arr = new char[200];
	int count = 0;
	std::cin >> arr;
	std::cout << arr;
	std::cout << "\n";
	for (int i=0; arr[i]!='\0';i++)
	if(Minus1(arr[i]))
		count++;
	std::cout <<count <<"\n";
	std::cout<< arr;
	std::cout << "\n";
}