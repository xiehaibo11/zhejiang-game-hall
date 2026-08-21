package com.bianfeng.ymnsdk.utilslib.cache;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

public final class SharedPreferencesUtils {
    private static final String BFDATA_NAME_PREFERENCES = "resource_cfg";
    private static final String SP_NAME = "ymnsdk_sp";
    private static final String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private static SharedPreferences preferences;

    public static void setStringFromBfData(String str, String str2) {
    }

    public static void init(Context context) {
        if (preferences == null) {
            synchronized (SharedPreferencesUtils.class) {
                if (preferences == null) {
                    preferences = context.getSharedPreferences(SP_NAME, 0);
                }
            }
        }
    }

    public static void put(String str, String str2) throws YmnException {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putString(str, str2);
            editorEdit.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static void put(String str, boolean z) throws YmnException {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putBoolean(str, z);
            editorEdit.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static void put(String str, int i) throws YmnException {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putInt(str, i);
            editorEdit.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static void put(String str, long j) throws YmnException {
        try {
            SharedPreferences.Editor editorEdit = preferences.edit();
            editorEdit.putLong(str, j);
            editorEdit.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static String getString(String str) {
        if (preferences == null) {
            return "";
        }
        UtilsLogger.i("");
        return preferences.getString(str, "");
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

    public static String getStringFromBfData(Context context, String str) {
        return context.getSharedPreferences(BFDATA_NAME_PREFERENCES, 0).getString(str, "");
    }

    public static void setYmnagreeprivacy() {
        try {
            boolean z = getBoolean(YMNAGREEPRIVACY);
            if (z) {
                return;
            }
            Log.i("ymnsdk", "setYmnagreeprivacy: " + z);
            put(YMNAGREEPRIVACY, true);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static boolean isAgreeprivacy() {
        return getBoolean(YMNAGREEPRIVACY);
    }
}
