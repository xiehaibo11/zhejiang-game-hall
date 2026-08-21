package com.tencent.bugly.crashreport;

public class BuglyLog {
    public BuglyLog() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            if (r2 != 0) goto L8
            java.lang.String r2 = "null"
        L8:
            boolean r0 = com.tencent.bugly.proguard.p.c
            if (r0 == 0) goto Lf
            android.util.Log.d(r1, r2)
        Lf:
            java.lang.String r0 = "D"
            com.tencent.bugly.proguard.ao.a(r0, r1, r2)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            if (r2 != 0) goto L8
            java.lang.String r2 = "null"
        L8:
            boolean r0 = com.tencent.bugly.proguard.p.c
            if (r0 == 0) goto Lf
            android.util.Log.e(r1, r2)
        Lf:
            java.lang.String r0 = "E"
            com.tencent.bugly.proguard.ao.a(r0, r1, r2)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            if (r2 != 0) goto L8
            java.lang.String r2 = "null"
        L8:
            boolean r0 = com.tencent.bugly.proguard.p.c
            if (r0 == 0) goto Lf
            android.util.Log.e(r1, r2, r3)
        Lf:
            java.lang.String r2 = "E"
            com.tencent.bugly.proguard.ao.a(r2, r1, r3)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            if (r2 != 0) goto L8
            java.lang.String r2 = "null"
        L8:
            boolean r0 = com.tencent.bugly.proguard.p.c
            if (r0 == 0) goto Lf
            android.util.Log.i(r1, r2)
        Lf:
            java.lang.String r0 = "I"
            com.tencent.bugly.proguard.ao.a(r0, r1, r2)
            return
    }

    public static void setCache(int r0) {
            com.tencent.bugly.proguard.ao.a(r0)
            return
    }

    public static void v(java.lang.String r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            if (r2 != 0) goto L8
            java.lang.String r2 = "null"
        L8:
            boolean r0 = com.tencent.bugly.proguard.p.c
            if (r0 == 0) goto Lf
            android.util.Log.v(r1, r2)
        Lf:
            java.lang.String r0 = "V"
            com.tencent.bugly.proguard.ao.a(r0, r1, r2)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            if (r2 != 0) goto L8
            java.lang.String r2 = "null"
        L8:
            boolean r0 = com.tencent.bugly.proguard.p.c
            if (r0 == 0) goto Lf
            android.util.Log.w(r1, r2)
        Lf:
            java.lang.String r0 = "W"
            com.tencent.bugly.proguard.ao.a(r0, r1, r2)
            return
    }
}
