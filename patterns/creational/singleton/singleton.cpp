#include "singleton.h"
#include <string>
/**
 * Classe servant à la création du desing pattern Singleton
 * @author: Vincent BILLET
 * @lastupdate : 2020/01/17
 */
using namespace std;

Singleton::Singleton(Singleton * inst) {
	if (inst->_inst != nullptr) {
		throw string("Erreur Singleton");
	}
	_inst = inst;
}
