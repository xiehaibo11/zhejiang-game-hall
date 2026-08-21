package com.qihoo360.mobilesafe.api;

import android.content.SharedPreferences;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginInternal;
import com.tkay.china.common.a.a;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class Pref {
    public static final String PREF_TEMP_FILE_PACM = "plugins_PACM";

    public static SharedPreferences getSharedPreferences(String str) {
        return RePlugin.getConfig().getCallbacks().getSharedPreferences(RePluginInternal.getAppContext(), str, 0);
    }

    public static SharedPreferences getDefaultSharedPreferences() {
        return getSharedPreferences(RePluginInternal.getAppContext().getPackageName() + "_preferences");
    }

    public static SharedPreferences getTempSharedPreferences(String str) {
        return getSharedPreferences(str + a.e);
    }

    public static String ipcGet(String str, String str2) {
        return getTempSharedPreferences(PREF_TEMP_FILE_PACM).getString(str, str2);
    }

    public static void ipcSet(String str, String str2) {
        getTempSharedPreferences(PREF_TEMP_FILE_PACM).edit().putString(str, str2).commit();
    }

    public static Map<String, ?> ipcGetAll() {
        return getTempSharedPreferences(PREF_TEMP_FILE_PACM).getAll();
    }
}
