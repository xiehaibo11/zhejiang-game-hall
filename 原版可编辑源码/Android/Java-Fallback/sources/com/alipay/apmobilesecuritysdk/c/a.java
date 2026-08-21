package com.alipay.apmobilesecuritysdk.c;

public final class a {
    public static synchronized void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.c.a> r0 = com.alipay.apmobilesecuritysdk.c.a.class
            monitor-enter(r0)
            com.alipay.sdk.m.c0.a r3 = b(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r4.<init>()     // Catch: java.lang.Throwable -> L4d
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L4d
            r4.append(r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "/log/ap"
            r4.append(r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L4d
            java.util.Calendar r4 = java.util.Calendar.getInstance()     // Catch: java.lang.Throwable -> L4d
            java.util.Date r4 = r4.getTime()     // Catch: java.lang.Throwable -> L4d
            java.text.SimpleDateFormat r5 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L4d
            java.lang.String r1 = "yyyyMMdd"
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = r5.format(r4)     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r5.<init>()     // Catch: java.lang.Throwable -> L4d
            r5.append(r4)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = ".log"
            r5.append(r4)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4d
            com.alipay.sdk.m.c0.d.a(r2, r4, r3)     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r0)
            return
        L4d:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static synchronized void a(java.lang.String r1) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.c.a> r0 = com.alipay.apmobilesecuritysdk.c.a.class
            monitor-enter(r0)
            com.alipay.sdk.m.c0.d.a(r1)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void a(java.lang.Throwable r1) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.c.a> r0 = com.alipay.apmobilesecuritysdk.c.a.class
            monitor-enter(r0)
            com.alipay.sdk.m.c0.d.a(r1)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static com.alipay.sdk.m.c0.a b(android.content.Context r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> L6
        L4:
            r2 = r8
            goto L9
        L6:
            java.lang.String r8 = ""
            goto L4
        L9:
            com.alipay.sdk.m.c0.a r8 = new com.alipay.sdk.m.c0.a
            java.lang.String r1 = android.os.Build.MODEL
            java.lang.String r3 = "APPSecuritySDK-ALIPAYSDK"
            java.lang.String r4 = "3.4.0.202303020703"
            r0 = r8
            r5 = r9
            r6 = r10
            r7 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }
}
