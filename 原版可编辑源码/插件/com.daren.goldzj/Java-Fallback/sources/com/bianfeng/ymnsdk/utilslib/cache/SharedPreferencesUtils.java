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

    public static void setStringFromBfData(String r0, String r1) {
    }

    public SharedPreferencesUtils() {
    }

    public static void init(Context r3) {
        if (preferences == null) goto L5;
        return;
    L5:
        monitor-enter(SharedPreferencesUtils.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (preferences != null) goto L9;
        preferences = r3.getSharedPreferences(SP_NAME, 0);     // Catch: Throwable -> L11
    L9:
        monitor-exit(SharedPreferencesUtils.class);     // Catch: Throwable -> L11
    }

    public static void put(String r1, String r2) throws YmnException {
        SharedPreferences.Editor r0 = preferences.edit();     // Catch: Exception -> L4
        r0.putString(r1, r2);     // Catch: Exception -> L4
        r0.apply();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        throw new YmnException(e);
    }

    public static void put(String r1, boolean r2) throws YmnException {
        SharedPreferences.Editor r0 = preferences.edit();     // Catch: Exception -> L4
        r0.putBoolean(r1, r2);     // Catch: Exception -> L4
        r0.apply();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        throw new YmnException(e);
    }

    public static void put(String r1, int r2) throws YmnException {
        SharedPreferences.Editor r0 = preferences.edit();     // Catch: Exception -> L4
        r0.putInt(r1, r2);     // Catch: Exception -> L4
        r0.apply();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        throw new YmnException(e);
    }

    public static void put(String r1, long r2) throws YmnException {
        SharedPreferences.Editor r0 = preferences.edit();     // Catch: Exception -> L4
        r0.putLong(r1, r2);     // Catch: Exception -> L4
        r0.apply();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        throw new YmnException(e);
    }

    public static String getString(String r2) {
        if (preferences == null) goto L6;
        UtilsLogger.i("");
        return preferences.getString(r2, "");
    L6:
        return "";
    }

    public static boolean getBoolean(String r2) {
        SharedPreferences r0 = preferences;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.getBoolean(r2, false);
    }

    public static int getInt(String r2) {
        SharedPreferences r0 = preferences;
        if (r0 != null) goto L5;
        return 0;
    L5:
        return r0.getInt(r2, 0);
    }

    public static long getLong(String r3) {
        SharedPreferences r0 = preferences;
        if (r0 != null) goto L5;
        return 0;
    L5:
        return r0.getLong(r3, 0);
    }

    public static void remove(String r1) {
        SharedPreferences r0 = preferences;
        if (r0 == null) goto L6;
        r0.edit().remove(r1);
        return;
    }

    public static String getStringFromBfData(Context r2, String r3) {
        return r2.getSharedPreferences(BFDATA_NAME_PREFERENCES, 0).getString(r3, "");
    }

    public static void setYmnagreeprivacy() {
        boolean r1 = getBoolean(YMNAGREEPRIVACY);     // Catch: Exception -> L7
        if (r1 == true) goto L12;
        Log.i("ymnsdk", "setYmnagreeprivacy: " + r1);     // Catch: Exception -> L7
        put(YMNAGREEPRIVACY, true);     // Catch: Exception -> L7
        return;
    L12:
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    public static boolean isAgreeprivacy() {
        return getBoolean(YMNAGREEPRIVACY);
    }
}
