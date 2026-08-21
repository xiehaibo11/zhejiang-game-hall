package com.reyun.tracking.utils;

public class f {
    public static long a(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            if (r1 != 0) goto L3
            return r4
        L3:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Exception -> Ld
            long r1 = r1.getLong(r3, r4)     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            return r4
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "_default_"
            java.lang.String r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 != 0) goto L5
            java.lang.String r1 = "unknown"
            return r1
        L5:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = r1.getString(r3, r4)     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            return r4
    }

    public static long b(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            long r2 = a(r2, r3, r4, r0)
            return r2
    }

    public static void b(android.content.Context r8, java.lang.String r9, java.lang.String r10, long r11) {
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.utils.g r7 = new com.reyun.tracking.utils.g
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.<init>(r2, r3, r4, r5)
            r0.a(r7)
            return
    }

    public static void b(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.utils.h r1 = new com.reyun.tracking.utils.h
            r1.<init>(r2, r3, r4, r5)
            r0.a(r1)
            return
    }
}
