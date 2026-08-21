package com.tkay.core.common.l;

public final class p {
    public p() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Long a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.Long r5) {
            if (r2 != 0) goto L9
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            return r2
        L9:
            r0 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r0)     // Catch: java.lang.Throwable -> L1b
            long r0 = r5.longValue()     // Catch: java.lang.Throwable -> L1b
            long r2 = r2.getLong(r4, r0)     // Catch: java.lang.Throwable -> L1b
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            return r5
    }

    public static java.util.Map<java.lang.String, ?> a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> Le
            java.util.Map r2 = r2.getAll()     // Catch: java.lang.Throwable -> Le
            return r2
        Le:
            return r0
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            if (r1 != 0) goto L3
            return
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> L13
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L13
            android.content.SharedPreferences$Editor r1 = r1.remove(r3)     // Catch: java.lang.Throwable -> L13
            r1.apply()     // Catch: java.lang.Throwable -> L13
        L13:
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            if (r1 != 0) goto L3
            return
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L12
            r1.putInt(r3, r4)     // Catch: java.lang.Throwable -> L12
            r1.apply()     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            if (r1 != 0) goto L3
            return
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L12
            r1.putLong(r3, r4)     // Catch: java.lang.Throwable -> L12
            r1.apply()     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 != 0) goto L3
            return
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> L16
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L16
            r1.putString(r3, r2)     // Catch: java.lang.Throwable -> L16
            r1.apply()     // Catch: java.lang.Throwable -> L16
        L16:
            return
    }

    public static int b(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            if (r1 != 0) goto L3
            return r4
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> Ld
            int r1 = r1.getInt(r3, r4)     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            return r4
    }

    public static java.lang.String b(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> Le
            java.lang.String r1 = r1.getString(r3, r4)     // Catch: java.lang.Throwable -> Le
            return r1
        Le:
            return r4
    }

    private static void b(android.content.Context r1, java.lang.String r2) {
            if (r1 != 0) goto L3
            return
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> L13
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L13
            android.content.SharedPreferences$Editor r1 = r1.clear()     // Catch: java.lang.Throwable -> L13
            r1.apply()     // Catch: java.lang.Throwable -> L13
        L13:
            return
    }

    public static void b(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            if (r1 != 0) goto L3
            return
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Exception -> L12
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Exception -> L12
            r1.putBoolean(r3, r0)     // Catch: java.lang.Exception -> L12
            r1.apply()     // Catch: java.lang.Exception -> L12
        L12:
            return
    }

    public static boolean c(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 1
            if (r2 != 0) goto L4
            return r0
        L4:
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r1)     // Catch: java.lang.Exception -> Le
            boolean r2 = r2.getBoolean(r4, r0)     // Catch: java.lang.Exception -> Le
            return r2
        Le:
            return r0
    }
}
