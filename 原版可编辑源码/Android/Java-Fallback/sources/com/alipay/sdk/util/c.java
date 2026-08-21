package com.alipay.sdk.util;

public class c {
    private static final java.lang.String a = "alipaysdk";

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1) {
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1, java.lang.Throwable r2) {
            return
    }

    public static void a(java.lang.String r0, java.lang.Throwable r1) {
            return
    }

    public static void a(java.lang.Throwable r0) {
            if (r0 != 0) goto L2
        L2:
            return
    }

    private static java.lang.String b(java.lang.Throwable r2) {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r2.printStackTrace(r1)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void b(java.lang.String r0, java.lang.String r1) {
            return
    }

    public static void c(java.lang.String r0, java.lang.String r1) {
            return
    }

    public static void d(java.lang.String r0, java.lang.String r1) {
            return
    }

    public static void e(java.lang.String r0, java.lang.String r1) {
            return
    }

    private static java.lang.String f(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = ""
            if (r2 != 0) goto L5
            r2 = r0
        L5:
            if (r3 != 0) goto L8
            r3 = r0
        L8:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            r2 = 1
            r0[r2] = r3
            java.lang.String r2 = "[%s][%s]"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            return r2
    }
}
