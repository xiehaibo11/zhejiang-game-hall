package com.bianfeng.utilslib;

import android.content.Context;
import android.content.SharedPreferences;

public class SharedPreferencesUtils {
    private static volatile SharedPreferencesUtils utils;
    private String delBD = "ymnh5gamesdk_sp";
    private SharedPreferences sp;

    private SharedPreferencesUtils() {
    }

    public static SharedPreferencesUtils getInstance() {
        if (utils == null) {
            synchronized (SharedPreferencesUtils.class) {
                if (utils == null) {
                    utils = new SharedPreferencesUtils();
                }
            }
        }
        return utils;
    }

    public void init(Context context) {
        this.sp = context.getSharedPreferences(this.delBD, 0);
    }

    public void putString(String str, String str2) {
        try {
            SharedPreferences.Editor editorEdit = this.sp.edit();
            editorEdit.putString(str, str2);
            editorEdit.commit();
        } catch (Exception e) {
            UtilsSdk.getLogger().i("SharedPreferencesUtils" + e.getMessage());
        }
    }

    public void putInt(String str, int i) {
        try {
            SharedPreferences.Editor editorEdit = this.sp.edit();
            editorEdit.putInt(str, i);
            editorEdit.commit();
        } catch (Exception unused) {
            UtilsSdk.getLogger().i("SharedPreferencesUtils");
        }
    }

    public void putBoolean(String str, boolean z) {
        try {
            SharedPreferences.Editor editorEdit = this.sp.edit();
            editorEdit.putBoolean(str, z);
            editorEdit.commit();
        } catch (Exception unused) {
            UtilsSdk.getLogger().i("SharedPreferencesUtils");
        }
    }

    public String getString(String str) {
        return isCheckNull() ? "0" : this.sp.getString(str, "0");
    }

    public int getInt(String str) {
        if (isCheckNull()) {
            return 0;
        }
        return this.sp.getInt(str, 0);
    }

    public boolean getBoolean(String str) {
        if (isCheckNull()) {
            return false;
        }
        return this.sp.getBoolean(str, false);
    }

    private boolean isCheckNull() {
        return this.sp == null;
    }
}
