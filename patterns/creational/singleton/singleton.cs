namespace umlWizard.patterns.creational
{
/**
 * Classe servant à la création du desing pattern Singleton
 * @author: Vincent BILLET
 * @lastupdate : 2020/01/17
 */
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