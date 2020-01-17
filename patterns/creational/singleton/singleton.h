
/**
 * Classe servant à la création du desing pattern Singleton
 * @author: Vincent BILLET
 * @lastupdate : 2020/01/17
 */

// Macro de création d'un singleton
#define SINGLETON(C) \
protected: \
static C instance; \
public: \
C() : Singleton(&C::instance) {} \
static C * get() { return &C::instance; }

// Macro de déclaration de l'instance (à mettre dans le cpp)
#define SINGLETON_INST(C) C C::instance = C();

class Singleton
	{
	protected:
		Singleton* _inst=nullptr;
	public:
		Singleton(Singleton * inst);
};
