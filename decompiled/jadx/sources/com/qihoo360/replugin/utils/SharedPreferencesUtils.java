package com.qihoo360.replugin.utils;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class SharedPreferencesUtils {
    private static SharedPreferences preferences;

    public static void init(Context context) {
        if (preferences == null) {
            synchronized (SharedPreferencesUtils.class) {
                if (preferences == null) {
                    preferences = context.getSharedPreferences("replugin_sp", 0);
                }
            }
        }
    }

    public static void put(String str, String str2) throws Exception {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putString(str, str2);
            editorEdit.apply();
        } catch (Exception e) {
            throw new Exception(e);
        }
    }

    public static void put(String str, boolean z) throws Exception {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putBoolean(str, z);
            editorEdit.apply();
        } catch (Exception e) {
            throw new Exception(e);
        }
    }

    public static void put(String str, int i) throws Exception {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putInt(str, i);
            editorEdit.apply();
        } catch (Exception e) {
            throw new Exception(e);
        }
    }

    public static void put(String str, long j) throws Exception {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putLong(str, j);
            editorEdit.apply();
        } catch (Exception e) {
            throw new Exception(e);
        }
    }

    public static String getString(String str) {
        SharedPreferences sharedPreferences = preferences;
        return sharedPreferences != null ? sharedPreferences.getString(str, "") : "";
    }

    public static boolean getBoolean(String str) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            return sharedPreferences.getBoolean(str, false);
        }
        return false;
    }

    public static int getInt(String str) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            return sharedPreferences.getInt(str, 0);
        }
        return 0;
    }

    public static long getLong(String str) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            return sharedPreferences.getLong(str, 0L);
        }
        return 0L;
    }

    public static void remove(String str) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            sharedPreferences.edit().remove(str);
        }
    }
}
