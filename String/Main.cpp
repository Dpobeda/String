#include <iostream>
#include <string> // Библиотека, позволяющая рабоать со строками С++.

int main(){
	setlocale(LC_ALL, "Russian");
	int n;

	// Строка.
	/* В языке программирования С - упорядоченный набор символьных элементов.
	 Объединённых в массив, в конце которого располагается нуль-терминатор.*/
	
	// Символьный массив из языка С.
	/*char c_str[]{'H','i','!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Камень" };
	std::cout << c_str2 << std::endl;*/

	// Символьный массив из языка С++.
	/*
	std::string str; 
	std::cout << str << std::endl; // Пустая строка
	str = "Hello WORLD!";
	std::cout << str << std::endl; // Hello WORLD!
	str = "Bye WORLD!";
	std::cout << str << std::endl; // Bye WORLD!
	*/

	// Конкатенация строк.
	/*
	Это процесс слияния двух 
	или более строк в одну новую.
	*/

	// Строка - объект класса string.
	/*
	str += "Камень :"; // Добавления текста в конец строки.
	std::cout << str + ".(.." << std::endl; // Bye WORLDКамень :.(.. 
	*/

	// Ввод строки.
	/*std::cout << "Привет! Эу ты, имя назвал своё\nВвод -> ";
	std::string name;
	std::cin >> name; // Ввод одного слова (До разделителя).
	std::cout << "Привет, " << name << "!\n\n";
	
	std::cin.ignore();

	std::cout << "А кем ты работаешь?\nВвод -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Ого, " << job << "? Ай "<< name << " брат сорян, не чё такая работа\n\n";

	std::cout << "А сколько тебе лет?\nВвод -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << " лет...\n";*/

	// Метод.
	/*
	Специальная функция, принадлежащая какому-либо объекту и применяемая исключительно этим объектом.
	*/

	// Методы строк.
	/*

	std::string my_str = "Hello World!";
	
	// Методы length и size, возращающие.
	// std::cout << my_str.length() << std::endl; // 12.
	// std::cout << my_str.size() << std::endl;
	
	// Метод insert.
	// my_str.insert(3, "( . )( . )");
	// std::cout << my_str << std::endl; // Hel( . )( . )lo World!

	// Метод replace, заменяющий часть строки на новую.
	// my_str.replace(2, 5, "y nigga ");
	// std::cout << my_str << std::endl;

	// Метод find, возращающий позицию первого вхождени подстроки в строку.
	// std::cout << my_str.find("l") << std::endl;
	// std::cout << my_str.find("l", 5) << std::endl;

	// Метод rfind, возвращающий позицию последнего вхождения в строку.
	// std::cout << my_str.rfind("o") << std::endl; // 7.
	// std::cout << my_str.rfind("o", 6) << std::endl; // 4.
	
	// Метод substr, возвращающий подстроку из строки.
	// std::cout << my_str.substr(4) << std::endl; // o World!
	// std::cout << my_str.substr(4, 5) << std::endl; // o Wor!
	
	*/

	// Функции для работы со строками.
	
	// Функция to_srting, возвращающая результат превращения числа в строку.
	int num = 123;
	std::string num_str = std::to_string(num); // 123
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl; // 123!
	
	// Функция stoi, возвращающая число int, взятое из строки.
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;

	// 


	return 0;
}