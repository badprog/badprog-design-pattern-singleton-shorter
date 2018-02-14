#include <iostream>
#include "SingletonShort.h"

using namespace std;

// Badprog.com

//-----------------------------------------------------------------------------
// Constructor.
//-----------------------------------------------------------------------------
SingletonShort::SingletonShort() {
	cout << "Hello from Badprog :D" << endl;
}

//-----------------------------------------------------------------------------
// Destructor.
//-----------------------------------------------------------------------------
SingletonShort::~SingletonShort() {
	cout << "Goodbye from Badprog :p" << endl;
}

//-----------------------------------------------------------------------------
// Gets instance.
//-----------------------------------------------------------------------------
SingletonShort &SingletonShort::theInstance() {
	static SingletonShort uniqueInstance;
	return uniqueInstance;
}
