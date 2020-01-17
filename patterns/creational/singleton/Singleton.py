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

# class monManager(Singleton):
#     instance = None
#     def __new__(cls):
#         return Singleton.__new__(cls)
#     def aff(self, x):
#         print(x)
#     @staticmethod
#     def aff2(x):
#         monManager.get().aff(x)
# 
# #a=monManager()
# print(monManager.get())
# monManager.get().aff("inst")
# monManager.aff2("stat")
# a=monManager()
# print(a)
