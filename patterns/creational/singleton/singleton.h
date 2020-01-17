#define SINGLETON(C) \
protected: \
static C instance; \
public: \
C() : Singleton(&C::instance) {} \
static C * get() { return &C::instance; }

#define SINGLETON_INST(C) C C::instance = C();

class Singleton
	{
	protected:
		Singleton* _inst=nullptr;
	public:
		Singleton(Singleton * inst);
};
