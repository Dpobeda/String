#include <iostream>
#include <string> // ����������, ����������� ������� �� �������� �++.

int main(){
	setlocale(LC_ALL, "Russian");
	int n;

	// ������.
	/* � ����� ���������������� � - ������������� ����� ���������� ���������.
	 ����������� � ������, � ����� �������� ������������� ����-����������.*/
	
	// ���������� ������ �� ����� �.
	/*char c_str[]{'H','i','!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "������" };
	std::cout << c_str2 << std::endl;*/

	// ���������� ������ �� ����� �++.
	/*
	std::string str; 
	std::cout << str << std::endl; // ������ ������
	str = "Hello WORLD!";
	std::cout << str << std::endl; // Hello WORLD!
	str = "Bye WORLD!";
	std::cout << str << std::endl; // Bye WORLD!
	*/

	// ������������ �����.
	/*
	��� ������� ������� ���� 
	��� ����� ����� � ���� �����.
	*/

	// ������ - ������ ������ string.
	/*
	str += "������ :"; // ���������� ������ � ����� ������.
	std::cout << str + ".(.." << std::endl; // Bye WORLD������ :.(.. 
	*/

	// ���� ������.
	/*std::cout << "������! �� ��, ��� ������ ���\n���� -> ";
	std::string name;
	std::cin >> name; // ���� ������ ����� (�� �����������).
	std::cout << "������, " << name << "!\n\n";
	
	std::cin.ignore();

	std::cout << "� ��� �� ���������?\n���� -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "���, " << job << "? �� "<< name << " ���� �����, �� �� ����� ������\n\n";

	std::cout << "� ������� ���� ���?\n���� -> ";
	int age;
	std::cin >> age;
	std::cout << "�����-�� � ��� ���� " << age << " ���...\n";*/

	// �����.
	/*
	����������� �������, ������������� ������-���� ������� � ����������� ������������� ���� ��������.
	*/

	// ������ �����.
	/*

	std::string my_str = "Hello World!";
	
	// ������ length � size, �����������.
	// std::cout << my_str.length() << std::endl; // 12.
	// std::cout << my_str.size() << std::endl;
	
	// ����� insert.
	// my_str.insert(3, "( . )( . )");
	// std::cout << my_str << std::endl; // Hel( . )( . )lo World!

	// ����� replace, ���������� ����� ������ �� �����.
	// my_str.replace(2, 5, "y nigga ");
	// std::cout << my_str << std::endl;

	// ����� find, ����������� ������� ������� �������� ��������� � ������.
	// std::cout << my_str.find("l") << std::endl;
	// std::cout << my_str.find("l", 5) << std::endl;

	// ����� rfind, ������������ ������� ���������� ��������� � ������.
	// std::cout << my_str.rfind("o") << std::endl; // 7.
	// std::cout << my_str.rfind("o", 6) << std::endl; // 4.
	
	// ����� substr, ������������ ��������� �� ������.
	// std::cout << my_str.substr(4) << std::endl; // o World!
	// std::cout << my_str.substr(4, 5) << std::endl; // o Wor!
	
	*/

	// ������� ��� ������ �� ��������.
	
	// ������� to_srting, ������������ ��������� ����������� ����� � ������.
	int num = 123;
	std::string num_str = std::to_string(num); // 123
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl; // 123!
	
	// ������� stoi, ������������ ����� int, ������ �� ������.
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;

	// 


	return 0;
}