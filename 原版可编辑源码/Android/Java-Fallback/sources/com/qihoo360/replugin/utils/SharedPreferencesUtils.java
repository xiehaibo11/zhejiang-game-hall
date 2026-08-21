package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class SharedPreferencesUtils {
    private static android.content.SharedPreferences preferences;

    public SharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getBoolean(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto L9
            boolean r1 = r0.getBoolean(r2, r1)
        L9:
            return r1
    }

    public static int getInt(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto L9
            int r1 = r0.getInt(r2, r1)
        L9:
            return r1
    }

    public static long getLong(java.lang.String r3) {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences
            r1 = 0
            if (r0 == 0) goto La
            long r1 = r0.getLong(r3, r1)
        La:
            return r1
    }

    public static java.lang.String getString(java.lang.String r2) {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            java.lang.String r2 = r0.getString(r2, r1)
            return r2
        Lb:
            return r1
    }

    public static void init(android.content.Context r3) {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences
            if (r0 != 0) goto L19
            java.lang.Class<com.qihoo360.replugin.utils.SharedPreferencesUtils> r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.class
            monitor-enter(r0)
            android.content.SharedPreferences r1 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L14
            java.lang.String r1 = "replugin_sp"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L16
            com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences = r3     // Catch: java.lang.Throwable -> L16
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

    public static void put(java.lang.String r1, int r2) throws java.lang.Exception {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putInt(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            java.lang.Exception r2 = new java.lang.Exception
            r2.<init>(r1)
            throw r2
    }

    public static void put(java.lang.String r1, long r2) throws java.lang.Exception {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putLong(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            java.lang.Exception r2 = new java.lang.Exception
            r2.<init>(r1)
            throw r2
    }

    public static void put(java.lang.String r1, java.lang.String r2) throws java.lang.Exception {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putString(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            java.lang.Exception r2 = new java.lang.Exception
            r2.<init>(r1)
            throw r2
    }

    public static void put(java.lang.String r1, boolean r2) throws java.lang.Exception {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putBoolean(r1, r2)     // Catch: java.lang.Exception -> Ld
            r0.apply()     // Catch: java.lang.Exception -> Ld
            return
        Ld:
            r1 = move-exception
            java.lang.Exception r2 = new java.lang.Exception
            r2.<init>(r1)
            throw r2
    }

    public static void remove(java.lang.String r1) {
            android.content.SharedPreferences r0 = com.qihoo360.replugin.utils.SharedPreferencesUtils.preferences
            if (r0 == 0) goto Lb
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r1)
        Lb:
            return
    }
}
