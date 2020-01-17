namespace violet.system.base
{
    public abstract class Singleton
    {
        protected virtual Singleton instance { get; set; } = null; 
        public Singleton(object inst)
        {
            if (inst!=null)
            {
                throw new Exception("Singletons are unique");
            }
        }
    }
}