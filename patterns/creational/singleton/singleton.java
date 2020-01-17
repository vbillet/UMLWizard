package fr.violet.system.base.singleton;

import android.util.Log;

public class Singleton {
    protected Singleton(Singleton instance) { if (instance==null) { Log.e("Singleton","Singleton instance does not exists! "); } }
}
