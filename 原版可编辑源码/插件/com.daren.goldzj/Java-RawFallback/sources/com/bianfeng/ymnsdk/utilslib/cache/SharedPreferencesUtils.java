package com.bianfeng.ymnsdk.utilslib.cache;

public final class SharedPreferencesUtils {
    private static final java.lang.String BFDATA_NAME_PREFERENCES = "resource_cfg";
    private static final java.lang.String SP_NAME = "ymnsdk_sp";
    private static final java.lang.String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private static android.content.SharedPreferences preferences;

    public SharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getBoolean(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto La
            boolean r2 = r0.getBoolean(r2, r1)
            return r2
        La:
            return r1
    }

    public static int getInt(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto La
            int r2 = r0.getInt(r2, r1)
            return r2
        La:
            return r1
    }

    public static long getLong(java.lang.String r3) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto Lb
            long r0 = r0.getLong(r3, r1)
            return r0
        Lb:
            return r1
    }

    public static java.lang.String getString(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            java.lang.String r1 = ""
            if (r0 == 0) goto L10
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            java.lang.String r2 = r0.getString(r2, r1)
            return r2
        L10:
            return r1
    }

    public static java.lang.String getStringFromBfData(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "resource_cfg"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.String r0 = ""
            java.lang.String r2 = r2.getString(r3, r0)
            return r2
    }

    public static void init(android.content.Context r3) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            if (r0 != 0) goto L19
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils> r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.class
            monitor-enter(r0)
            android.content.SharedPreferences r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L14
            java.lang.String r1 = "ymnsdk_sp"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L16
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences = r3     // Catch: java.lang.Throwable -> L16
        L14:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            goto L19
        L16:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r3
        L19:
            return
    }

    public static boolean isAgreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r0 = getBoolean(r0)
            return r0
    }

    public static void put(java.lang.String r1, int r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putInt(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r2 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r2.<init>(r1)
            throw r2
    }

    public static void put(java.lang.String r1, long r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putLong(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r2 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r2.<init>(r1)
            throw r2
    }

    public static void put(java.lang.String r1, java.lang.String r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putString(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r2 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r2.<init>(r1)
            throw r2
    }

    public static void put(java.lang.String r1, boolean r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putBoolean(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r2 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r2.<init>(r1)
            throw r2
    }

    public static void remove(java.lang.String r1) {
            android.content.SharedPreferences r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.preferences
            if (r0 == 0) goto Lb
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r1)
        Lb:
            return
    }

    public static void setStringFromBfData(java.lang.String r0, java.lang.String r1) {
            return
    }

    public static void setYmnagreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r1 = getBoolean(r0)     // Catch: java.lang.Exception -> L23
            if (r1 != 0) goto L27
            java.lang.String r2 = "ymnsdk"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L23
            r3.<init>()     // Catch: java.lang.Exception -> L23
            java.lang.String r4 = "setYmnagreeprivacy: "
            r3.append(r4)     // Catch: java.lang.Exception -> L23
            r3.append(r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> L23
            android.util.Log.i(r2, r1)     // Catch: java.lang.Exception -> L23
            r1 = 1
            put(r0, r1)     // Catch: java.lang.Exception -> L23
            goto L27
        L23:
            r0 = move-exception
            r0.printStackTrace()
        L27:
            return
    }
}
