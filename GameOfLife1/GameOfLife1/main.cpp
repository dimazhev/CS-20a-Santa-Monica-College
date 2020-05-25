#include <iostream>
#include <string>
#include <cstdlib>
#include "globals.h"
#include "utils.h"
#include "life.h"
#include "blinker.h"
#include "glider.h"
#include "world.h"
#include "game.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;





///////////////////////////////////////////////////////////////////////////
// Main
///////////////////////////////////////////////////////////////////////////

int main() {

	Life **population = new Life*[2];

	// Polymorphism: Don't worry about understanding this.
	population[0] = new Glider(0, 0); // Blinker and Glider
	population[1] = new Blinker(4, 5);
	int numLife = 2;

	//population[0] = new Blinker(4, 5); //blinker alone
	//int numLife = 1;

	//population[0] = new Glider(0,0); //glider alone
	//int numLife = 1;

	// Create the game
	Game g(population, numLife);

	// Run the game
	g.play();

	// Short Answer
	report();

	// Clean up
	delete population[0];
	delete population[1];
	delete[] population;

}

void report() {

	string msg = ""; // Replace Hello World with your answer.
	cout << msg << endl;
}

// DO NOT MODIFY ANY CODE BETWEEN HERE AND THE END OF THE FILE!!!
// THE CODE IS SUITABLE FOR VISUAL C++, XCODE, AND g++ UNDER LINUX.

#include <chrono>
#include <thread>

void delay(int ms) {
	std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}


///////////////////////////////////////////////////////////////////////////
//  clearScreen implementation
///////////////////////////////////////////////////////////////////////////


// Note to Xcode users:  clearScreen() will just write a newline instead
// of clearing the window if you launch your program from within Xcode.
// That's acceptable.  (The Xcode output window doesn't have the capability
// of being cleared.)

#ifdef _MSC_VER  //  Microsoft Visual C++

#include <windows.h>

void clearScreen()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hConsole, &csbi);
	DWORD dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
	COORD upperLeft = { 0, 0 };
	DWORD dwCharsWritten;
	FillConsoleOutputCharacter(hConsole, TCHAR(' '), dwConSize, upperLeft,
		&dwCharsWritten);
	SetConsoleCursorPosition(hConsole, upperLeft);
}

#else  // not Microsoft Visual C++, so assume UNIX interface

#include <iostream>
#include <cstring>
#include <cstdlib>

void clearScreen()  // will just write a newline in an Xcode output window
{
	static const char* term = getenv("TERM");
	if (term == nullptr || strcmp(term, "dumb") == 0)
		std::cout << endl;
	else
	{
		static const char* ESC_SEQ = "\x1B[";  // ANSI Terminal esc seq:  ESC [
		std::cout << ESC_SEQ << "2J" << ESC_SEQ << "H" << std::flush;
	}
}

#endif