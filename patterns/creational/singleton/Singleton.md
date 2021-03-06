# Singleton
La classe singleton sert à créer des objets à instance unique. Les singletons sont instanciés automatiquement lors du premier appel à la classe. Pour appeler l'instance d'un singleton il suffit d'appeler la __méthode statique__ **get()**. Les classes descendantes de Singleton qui peuvent être instanciées doivent déclarer un propriété statique **instance** qui sera l'instance unique de cette classe
## Méthodes
Les descendants de Singleton bénéficient de la méthode qui sert à se procurer l'instance unique du Singleton
### get()
Retourne l'instance d'un singleton.
## UML
![](Singleton.png)
```plantUML
@startuml Singleton
class Singleton {
    -{static} Singleton instance
    constructor()
    +{static} Singleton get()
    ~void packagePrivateMethod()
}

class MonManager << (S,#FF7700) Singleton >> {
    # {static} MonManager instance
    + {static}void MethodeStatique()
    + void MethodeInstance()
}
Singleton <|-- MonManager : extends

@enduml
```
## Snippets
Trois snippets sont disponibles pour le plantUML, et les différents langages exposés, il sont accesibles via la clé **Singleton**. Ils servent à définir un singleton, une méthode statique de singleton et une méthode d'instance (publiques pour les deux).

## Exemples
C++
```CPP
//*********************************************************
// Fichier .h
//*********************************************************
#include "singleton.h"
class MonManager : public Singleton {
    // Création du Singleton
	SINGLETON(MonManager);
	public:
		static void MethodeStatique();
		void MethodeInstance();
};
//*********************************************************
// Fichier .cpp
//*********************************************************
// Réservation de mémoire pour le singleton
SINGLETON_INST(MonManager);
// Méthode statique
void MonManager::MethodeStatique() {
	MonManager* inst = MonManager::get();
	inst->MethodeInstance();
}
// Métode de l'instance
void MonManager::MethodeInstance()
{
	// ...
}
// Appel d'une méthode statique de la classe
MonManager::MethodeStatique();
// Appel d'une méthode de l'instance
// 1 - Récupération de l'instance du manager
MonManager* manager = MonManager::get();
// 2 - Appel de la méthode en elle même
manager->MethodeInstance();
// ou encore : 
MonManager::get()->MethodeInstance();
```
C#
```CSharp
public class MonManager : Singleton
{
    public MonManager() : base(instance) { }
    // L'instance UNIQUEMENT si ce singleton est instantiable
    new protected static MonManager instance = new MonManager();
    public static MonManager get() { return instance;  }
    // Méthode statique
    public static void MethodeStatique()
    {
        MonManager inst = get();
        inst.MethodeInstance();
        // ...
    }
    // Méthode de l'instance
    public void MethodeInstance()
    {
        // ...
    }
}
// Appel d'une méthode statique de la classe
monManager.MethodeStatique();
// Appel d'une méthode de l'instance
// 1 - Récupération de l'instance du manager
manager = monManager.get();
// 2 - Appel de la méthode en elle même
manager.MethodeInstance();
// ou encore : 
monManager.get().MethodeInstance();
```
Java
```Java
public class MonManager extends Singleton {
    // Le constructeur privé empèche la création ailleurs
    private MonManager() {super(instance); }
    private static MonManager instance=new MonManager();
    public static MonManager get(){ return instance;}
    // Méthode Statique
    public static void methodeStatique() {
        MonManager inst = get();
        inst.methodeInstance();
    }
    // Méthode d'instance
    public void methodeInstance() {
        Log.i("TAG","Message");
    }
}
// Appel d'une méthode statique de la classe
MonManager.methodeStatique();
// Appel d'une méthode de l'instance
// 1 - Récupération de l'instance du manager
val manager = MonManager.get();
// 2 - Appel de la méthode en elle même
manager.methodeInstance();
// ou encore : 
MonManager.get().methodeInstance();
```
JavaScript :
```javascript
class monManager extends Singleton{
    constructor() { super(monManager); }
    // L'instance UNIQUEMENT si ce singleton est instantiable
    static instance = new monManager();
    // Méthode statique
    static MethodeStatique() { 
        inst = monManager.get();
        inst.MethodeInstance();
        // ...
    }
    // Méthode de l'instance
    MethodeInstance() {
        this.someProperty = "Exemple";
    }
}
// Appel d'une méthode statique de la classe
monManager.MethodeStatique();
// Appel d'une méthode de l'instance
// 1 - Récupération de l'instance du manager
manager = monManager.get();
// 2 - Appel de la méthode en elle même
manager.MethodeInstance();
// ou encore : 
monManager.get().MethodeInstance();
```
PHP : 
```php
class monManager extends Singleton{
    // Nécessaire seulement si le constructeur est complété, sinon l'appel au parent est implicite
    function __construct() { parent::__construct(); }
    // L'instance UNIQUEMENT si ce singleton est instantiable
    protected static $instance;
    // Méthode statique
    public static function MethodeStatique() { 
        $inst = monManager::get();
        $inst->MethodeInstance();
        // ...
    }
    // Méthode de l'instance
    public function MethodeInstance() {
        $this->someProperty = "Exemple";
    }
}
// Appel d'une méthode statique de la classe
monManager::MethodeStatique();
// Appel d'une méthode de l'instance
// 1 - Récupération de l'instance du manager
$manager = monManager::get();
// 2 - Appel de la méthode en elle même
$manager->MethodeInstance();
// ou encore : 
monManager::get()->MethodeInstance();
```
Python : 
```Python
class monManager(Singleton):
    # L'instance UNIQUEMENT si ce singleton est instantiable
    instance = None
    def __new__(cls):
        return Singleton.__new__(cls)
    # Méthode statique
    @staticmethod
    def MethodeStatique():
        inst = monManager.get()
        inst.methodeInstance()
        # ...
    # Méthode de l'instance
    def MethodeInstance(self):
        self.someProperty = "Exemple"
# Appel d'une méthode statique de la classe
monManager.MethodeStatique()
# Appel d'une méthode de l'instance
# 1 - Récupération de l'instance du manager
manager = monManager.get()
# 2 - Appel de la méthode en elle même
Manager.MethodeInstance()
# ou encore : 
monManager.get().MethodeInstance()
```
