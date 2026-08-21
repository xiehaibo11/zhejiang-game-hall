package com.qihoo360.mobilesafe.api;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class Pref {
    public static final java.lang.String PREF_TEMP_FILE_PACM = "plugins_PACM";

    public Pref() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.SharedPreferences getDefaultSharedPreferences() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            java.lang.String r1 = r1.getPackageName()
            r0.append(r1)
            java.lang.String r1 = "_preferences"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.content.SharedPreferences r0 = getSharedPreferences(r0)
            return r0
    }

    public static android.content.SharedPreferences getSharedPreferences(java.lang.String r3) {
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r0 = r0.getCallbacks()
            android.content.Context r1 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            r2 = 0
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r1, r3, r2)
            return r3
    }

    public static android.content.SharedPreferences getTempSharedPreferences(java.lang.String r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ".temp"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            android.content.SharedPreferences r1 = getSharedPreferences(r1)
            return r1
    }

    public static java.lang.String ipcGet(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "plugins_PACM"
            android.content.SharedPreferences r0 = getTempSharedPreferences(r0)
            java.lang.String r1 = r0.getString(r1, r2)
            return r1
    }

    public static java.util.Map<java.lang.String, ?> ipcGetAll() {
            java.lang.String r0 = "plugins_PACM"
            android.content.SharedPreferences r0 = getTempSharedPreferences(r0)
            java.util.Map r0 = r0.getAll()
            return r0
    }

    public static void ipcSet(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "plugins_PACM"
            android.content.SharedPreferences r0 = getTempSharedPreferences(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r1 = r0.putString(r1, r2)
            r1.commit()
            return
    }
}
