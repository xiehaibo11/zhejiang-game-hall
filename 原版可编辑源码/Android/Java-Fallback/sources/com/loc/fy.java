package com.loc;

public final class fy {
    public static int a(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> La
            int r4 = r1.getInt(r3, r4)     // Catch: java.lang.Throwable -> La
            goto L12
        La:
            r1 = move-exception
            java.lang.String r2 = "SpUtil"
            java.lang.String r3 = "getPrefsInt"
            com.loc.fr.a(r1, r2, r3)
        L12:
            return r4
    }

    public static long a(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> La
            long r4 = r1.getLong(r3, r4)     // Catch: java.lang.Throwable -> La
            goto L12
        La:
            r1 = move-exception
            java.lang.String r2 = "SpUtil"
            java.lang.String r3 = "getPrefsLong"
            com.loc.fr.a(r1, r2, r3)
        L12:
            return r4
    }

    public static android.content.SharedPreferences.Editor a(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)
            android.content.SharedPreferences$Editor r1 = r1.edit()
            return r1
    }

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = "00:00:00:00:00:00"
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "pref"
            java.lang.String r2 = "smac"
            java.lang.String r3 = a(r3, r1, r2, r0)
            return r3
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> La
            java.lang.String r4 = r1.getString(r3, r4)     // Catch: java.lang.Throwable -> La
            goto L12
        La:
            r1 = move-exception
            java.lang.String r2 = "SpUtil"
            java.lang.String r3 = "getPrefsInt"
            com.loc.fr.a(r1, r2, r3)
        L12:
            return r4
    }

    public static void a(android.content.SharedPreferences.Editor r0) {
            if (r0 != 0) goto L3
            return
        L3:
            r0.apply()
            return
    }

    public static void a(android.content.SharedPreferences.Editor r1, java.lang.String r2) {
            r1.remove(r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r1 = move-exception
            java.lang.String r2 = "SpUtil"
            java.lang.String r0 = "setPrefsLong"
            com.loc.fr.a(r1, r2, r0)
            return
    }

    public static void a(android.content.SharedPreferences.Editor r0, java.lang.String r1, int r2) {
            r0.putInt(r1, r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            java.lang.String r1 = "SpUtil"
            java.lang.String r2 = "setPrefsInt"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public static void a(android.content.SharedPreferences.Editor r0, java.lang.String r1, long r2) {
            r0.putLong(r1, r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            java.lang.String r1 = "SpUtil"
            java.lang.String r2 = "setPrefsLong"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public static void a(android.content.SharedPreferences.Editor r0, java.lang.String r1, java.lang.String r2) {
            r0.putString(r1, r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            java.lang.String r1 = "SpUtil"
            java.lang.String r2 = "setPrefsStr"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public static void a(android.content.SharedPreferences.Editor r0, java.lang.String r1, boolean r2) {
            r0.putBoolean(r1, r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            java.lang.String r1 = "SpUtil"
            java.lang.String r2 = "updatePrefsBoolean"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public static boolean a(android.content.Context r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> La
            boolean r4 = r1.getBoolean(r3, r4)     // Catch: java.lang.Throwable -> La
            goto L12
        La:
            r1 = move-exception
            java.lang.String r2 = "SpUtil"
            java.lang.String r3 = "getPrefsBoolean"
            com.loc.fr.a(r1, r2, r3)
        L12:
            return r4
    }
}
