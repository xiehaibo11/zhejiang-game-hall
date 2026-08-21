package com.kwad.sdk.api.loader;

public final class t {
    public static void a(android.content.Context r2, java.lang.String r3, long r4) {
            java.lang.String r0 = "kssdk_api_pref"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r2 = r2.putLong(r3, r4)     // Catch: java.lang.Throwable -> L12
            r2.commit()     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, boolean r4) {
            java.lang.String r0 = "kssdk_api_pref"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r2 = r2.putBoolean(r3, r4)     // Catch: java.lang.Throwable -> L12
            r2.commit()     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    private static long b(android.content.Context r2, java.lang.String r3, long r4) {
            r4 = 0
            java.lang.String r0 = "kssdk_api_pref"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> Le
            long r2 = r2.getLong(r3, r4)     // Catch: java.lang.Throwable -> Le
            return r2
        Le:
            return r4
    }

    public static boolean b(android.content.Context r1, java.lang.String r2, boolean r3) {
            r3 = 0
            java.lang.String r0 = "kssdk_api_pref"
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r0, r3)     // Catch: java.lang.Throwable -> Lc
            boolean r1 = r1.getBoolean(r2, r3)     // Catch: java.lang.Throwable -> Lc
            return r1
        Lc:
            return r3
    }

    public static void c(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "kssdk_api_pref"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r2 = r2.putString(r3, r4)     // Catch: java.lang.Throwable -> L12
            r2.commit()     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public static java.lang.String d(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "kssdk_api_pref"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> Lc
            java.lang.String r2 = r2.getString(r3, r4)     // Catch: java.lang.Throwable -> Lc
            return r2
        Lc:
            return r4
    }

    public static java.lang.String getString(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = ""
            java.lang.String r1 = d(r1, r2, r0)
            return r1
    }

    public static long v(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            long r2 = b(r2, r3, r0)
            return r2
    }
}
