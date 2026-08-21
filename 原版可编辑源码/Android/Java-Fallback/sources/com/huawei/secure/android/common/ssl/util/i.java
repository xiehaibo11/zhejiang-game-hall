package com.huawei.secure.android.common.ssl.util;

public class i {
    private static final java.lang.String a = "aegis";
    private static android.content.SharedPreferences b;

    static {
            return
    }

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r0, int r1, android.content.Context r2) {
            android.content.SharedPreferences r2 = b(r2)
            int r0 = r2.getInt(r0, r1)
            return r0
    }

    public static long a(java.lang.String r0, long r1, android.content.Context r3) {
            android.content.SharedPreferences r3 = b(r3)
            long r0 = r3.getLong(r0, r1)
            return r0
    }

    public static java.lang.String a(java.lang.String r0, java.lang.String r1, android.content.Context r2) {
            android.content.SharedPreferences r2 = b(r2)
            java.lang.String r0 = r2.getString(r0, r1)
            return r0
    }

    public static void a(android.content.Context r0) {
            android.content.SharedPreferences r0 = b(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.clear()
            r0.apply()
            return
    }

    public static void a(java.lang.String r0, android.content.Context r1) {
            android.content.SharedPreferences r1 = b(r1)
            android.content.SharedPreferences$Editor r1 = r1.edit()
            android.content.SharedPreferences$Editor r0 = r1.remove(r0)
            r0.apply()
            return
    }

    public static synchronized android.content.SharedPreferences b(android.content.Context r4) {
            java.lang.Class<com.huawei.secure.android.common.ssl.util.i> r0 = com.huawei.secure.android.common.ssl.util.i.class
            monitor-enter(r0)
            android.content.SharedPreferences r1 = com.huawei.secure.android.common.ssl.util.i.b     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L27
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2b
            r2 = 24
            r3 = 0
            if (r1 < r2) goto L1b
            android.content.Context r4 = r4.createDeviceProtectedStorageContext()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = "aegis"
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r1, r3)     // Catch: java.lang.Throwable -> L2b
            com.huawei.secure.android.common.ssl.util.i.b = r4     // Catch: java.lang.Throwable -> L2b
            goto L27
        L1b:
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = "aegis"
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r1, r3)     // Catch: java.lang.Throwable -> L2b
            com.huawei.secure.android.common.ssl.util.i.b = r4     // Catch: java.lang.Throwable -> L2b
        L27:
            android.content.SharedPreferences r4 = com.huawei.secure.android.common.ssl.util.i.b     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)
            return r4
        L2b:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static void b(java.lang.String r0, int r1, android.content.Context r2) {
            android.content.SharedPreferences r2 = b(r2)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r0 = r2.putInt(r0, r1)
            r0.apply()
            return
    }

    public static void b(java.lang.String r0, long r1, android.content.Context r3) {
            android.content.SharedPreferences r3 = b(r3)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            android.content.SharedPreferences$Editor r0 = r3.putLong(r0, r1)
            r0.apply()
            return
    }

    public static void b(java.lang.String r0, java.lang.String r1, android.content.Context r2) {
            android.content.SharedPreferences r2 = b(r2)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r0 = r2.putString(r0, r1)
            r0.apply()
            return
    }
}
