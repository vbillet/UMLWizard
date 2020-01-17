class Singleton {
    constructor(SingletonClass){
        if (SingletonClass.get()!=undefined) throw "Singletons are unique.";
    }
    static get(){ return this.instance; }
}