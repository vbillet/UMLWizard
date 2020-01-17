package fr.umlwizard.patterns.creational.singleton;
/**
 * Classe servant à la création du desing pattern Singleton
 * @author: Vincent BILLET
 * @lastupdate : 2020/01/17
 */

import android.util.Log;

public class Singleton {
    protected Singleton(Singleton instance) { if (instance==null) { Log.e("Singleton","Singleton instance does not exists! "); } }
}
