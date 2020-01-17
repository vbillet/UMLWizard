#include "singleton.h"
#include <string>

using namespace std;

Singleton::Singleton(Singleton * inst) {
	if (inst->_inst != nullptr) {
		throw string("Erreur Singleton");
	}
	_inst = inst;
}
