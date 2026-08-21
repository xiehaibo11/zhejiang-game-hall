package com.bianfeng.seppellita.utils;

import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

/* JADX INFO: loaded from: classes.dex */
public class SeppellitaSharedPreferencesUtils {
    private static String delBD = "seppellita_delbd";
    private static String isNew = "seppellita_is_new_user_";
    private static String seppellita_aaid = "seppellita_aaid";
    private static String seppellita_oaid = "seppellita_oaid";
    private static String seppellita_vaid = "seppellita_vaid";

    public static void putDelDb(int i) {
        try {
            SharedPreferencesUtils.put(delBD, i);
        } catch (YmnException unused) {
        }
    }

    public static int getDelDb() {
        return SharedPreferencesUtils.getInt(delBD);
    }

    public static boolean getIsNew() {
        try {
            if (SharedPreferencesUtils.getBoolean(isNew)) {
                return false;
            }
            SharedPreferencesUtils.put(isNew, true);
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static void saveOaid(String str) {
        try {
            SharedPreferencesUtils.put(seppellita_oaid, str);
        } catch (Exception unused) {
        }
    }

    public static String getOaid() {
        try {
            return SharedPreferencesUtils.getString(seppellita_oaid);
        } catch (Exception unused) {
            return null;
        }
    }

    public static void saveVaid(String str) {
        try {
            SharedPreferencesUtils.put(seppellita_vaid, str);
        } catch (Exception unused) {
        }
    }

    public static String getVaid() {
        try {
            return SharedPreferencesUtils.getString(seppellita_vaid);
        } catch (Exception unused) {
            return null;
        }
    }

    public static void saveAaid(String str) {
        try {
            SharedPreferencesUtils.put(seppellita_aaid, str);
        } catch (Exception unused) {
        }
    }

    public static String getAaid() {
        try {
            return SharedPreferencesUtils.getString(seppellita_aaid);
        } catch (Exception unused) {
            return null;
        }
    }
}
