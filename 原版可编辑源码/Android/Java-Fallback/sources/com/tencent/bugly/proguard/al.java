package com.tencent.bugly.proguard;

public final class al {
    public static java.lang.String a = "CrashReportInfo";
    public static java.lang.String b = "CrashReport";
    public static boolean c;

    static {
            return
    }

    private static boolean a(int r2, java.lang.String r3, java.lang.Object... r4) {
            boolean r0 = com.tencent.bugly.proguard.al.c
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            if (r3 != 0) goto Lb
            java.lang.String r3 = "null"
            goto L17
        Lb:
            if (r4 == 0) goto L17
            int r0 = r4.length
            if (r0 != 0) goto L11
            goto L17
        L11:
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r3 = java.lang.String.format(r0, r3, r4)
        L17:
            r4 = 1
            if (r2 == 0) goto L3e
            if (r2 == r4) goto L38
            r0 = 2
            if (r2 == r0) goto L32
            r0 = 3
            if (r2 == r0) goto L2c
            r0 = 5
            if (r2 == r0) goto L26
            return r1
        L26:
            java.lang.String r2 = com.tencent.bugly.proguard.al.a
            android.util.Log.i(r2, r3)
            return r4
        L2c:
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            android.util.Log.e(r2, r3)
            return r4
        L32:
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            android.util.Log.w(r2, r3)
            return r4
        L38:
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            android.util.Log.d(r2, r3)
            return r4
        L3e:
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            android.util.Log.i(r2, r3)
            return r4
    }

    private static boolean a(int r2, java.lang.Throwable r3) {
            boolean r0 = com.tencent.bugly.proguard.al.c
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r3 = com.tencent.bugly.proguard.ap.a(r3)
            java.lang.Object[] r0 = new java.lang.Object[r1]
            boolean r2 = a(r2, r3, r0)
            return r2
    }

    public static boolean a(java.lang.Class r3, java.lang.String r4, java.lang.Object... r5) {
            java.util.Locale r0 = java.util.Locale.US
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r3 = r3.getSimpleName()
            r2 = 0
            r1[r2] = r3
            r3 = 1
            r1[r3] = r4
            java.lang.String r3 = "[%s] %s"
            java.lang.String r3 = java.lang.String.format(r0, r3, r1)
            boolean r3 = a(r2, r3, r5)
            return r3
    }

    public static boolean a(java.lang.String r1, java.lang.Object... r2) {
            r0 = 0
            boolean r1 = a(r0, r1, r2)
            return r1
    }

    public static boolean a(java.lang.Throwable r1) {
            r0 = 2
            boolean r1 = a(r0, r1)
            return r1
    }

    public static boolean b(java.lang.String r1, java.lang.Object... r2) {
            r0 = 5
            boolean r1 = a(r0, r1, r2)
            return r1
    }

    public static boolean b(java.lang.Throwable r1) {
            r0 = 3
            boolean r1 = a(r0, r1)
            return r1
    }

    public static boolean c(java.lang.String r1, java.lang.Object... r2) {
            r0 = 1
            boolean r1 = a(r0, r1, r2)
            return r1
    }

    public static boolean d(java.lang.String r1, java.lang.Object... r2) {
            r0 = 2
            boolean r1 = a(r0, r1, r2)
            return r1
    }

    public static boolean e(java.lang.String r1, java.lang.Object... r2) {
            r0 = 3
            boolean r1 = a(r0, r1, r2)
            return r1
    }
}
