# Classe servant à la création du desing pattern Singleton
# @author: Vincent BILLET
# @lastupdate : 2020/01/17

class Singleton:
    def __new__(cls):
        if cls.instance is None:
            cls.instance = object.__new__(cls)
            return cls.instance
        else:
            raise Exception("Error, singletons can only be instanciated once.")
    @classmethod
    def get(cls):
        if cls.instance is None:
            cls.instance = object.__new__(cls)
        return cls.instance
