/**
 * Classe servant à la création du desing pattern Singleton
 * @author: Vincent BILLET
 * @lastupdate : 2020/01/17
 */
class Singleton {
    constructor(SingletonClass){
        if (SingletonClass.get()!=undefined) throw "Singletons are unique.";
    }
    static get(){ return this.instance; }
}