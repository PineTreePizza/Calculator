#include <iostream>
#include <limits>

int main(){

	float num1;
	float num2;
	float answer;
	char symbol;
	bool complete = false;
	
	while(complete == false){
		
		std::cout << "Enter first number" << std::endl;
		
		if(!(std::cin >> num1)){
			
			std::cout << "ERROR: Enter a valid number" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;
			
		}

		std::cout << "Enter symbol" << std::endl;
		
		if(!(std::cin >> symbol)){
			
			std::cout << "ERROR: Enter a valid symbol" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;
			
		}
		
		std::cout << "Enter second number" << std::endl;
		
		if(!(std::cin >> num2)){
			
			std::cout << "ERROR: Enter a valid number" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;
			
		}

		switch(symbol){
			
		case '+':
			
			answer = num1 + num2;
			
			break;
			
		case '-':
			
			answer = num1 - num2;
			
			break;
			
		case '*':
			
			answer = num1 * num2;
			
			break;
			
		case '/':
			
			if(num2 == 0){
				
				std::cout << "ERROR: Division by zero" << std::endl;
				continue;
				
			}
			
			answer = num1 / num2;
			
			break;
			
		default:
			
			std::cout << "ERROR: Enter a valid expression" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			
			continue;
			
		}
		
		std::cout << "Your answer is: " << answer << std::endl;
		
		complete = true;
		
	}
	return 0;
	
}
