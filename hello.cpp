#include <iostream>
#include <string>

int
main()
{
  // Объявляем переменную для хранения имени пользователя
  std::string name;

  // Запрашиваем имя пользователя через стандартный поток ввода
  std::cout << "Enter your name: ";
  std::cin >> name;

  // Выводим персонализированное приветствие
  std::cout << "Hello world from @" << name << std::endl;

  return 0;
}