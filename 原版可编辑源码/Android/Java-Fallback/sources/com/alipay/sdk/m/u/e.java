package com.alipay.sdk.m.u;

public class e {
    public static com.alipay.sdk.interior.Log.ISdkLogCallback a = null;
    public static final java.lang.String b = "alipaysdk";

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3) {
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

    public static void a(com.alipay.sdk.interior.Log.ISdkLogCallback r0) {
            com.alipay.sdk.m.u.e.a = r0
            return
    }

    public static void a(java.lang.String r5) {
            com.alipay.sdk.interior.Log$ISdkLogCallback r0 = com.alipay.sdk.m.u.e.a     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L2a
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = "hh:mm:ss.SSS"
            java.util.Locale r3 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> L2a
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2a
            java.util.Date r2 = new java.util.Date     // Catch: java.lang.Throwable -> L2a
            r2.<init>()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = r1.format(r2)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = "[AlipaySDK] %s %s"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L2a
            r4 = 0
            r3[r4] = r1     // Catch: java.lang.Throwable -> L2a
            r1 = 1
            r3[r1] = r5     // Catch: java.lang.Throwable -> L2a
            java.lang.String r5 = java.lang.String.format(r2, r3)     // Catch: java.lang.Throwable -> L2a
            r0.onLogLine(r5)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1, java.lang.Throwable r2) {
            java.lang.String r0 = a(r0, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = " "
            r1.append(r0)
            java.lang.String r0 = b(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            a(r0)
            return
    }

    public static void a(java.lang.Throwable r0) {
            if (r0 != 0) goto L3
            return
        L3:
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> La
            a(r0)     // Catch: java.lang.Throwable -> La
        La:
            return
    }

    public static java.lang.String b(java.lang.Throwable r2) {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r2.printStackTrace(r1)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void b(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = a(r0, r1)
            a(r0)
            return
    }

    public static void c(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = a(r0, r1)
            a(r0)
            return
    }

    public static void d(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = a(r0, r1)
            a(r0)
            return
    }

    public static void e(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = a(r0, r1)
            a(r0)
            return
    }
}
