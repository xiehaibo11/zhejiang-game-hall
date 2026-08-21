package com.alipay.sdk.app.statistic;

public class a {
    public static final java.lang.String a = "alipay_cashier_statistic_record";
    private static com.alipay.sdk.app.statistic.c b;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r1) {
            com.alipay.sdk.app.statistic.c r0 = com.alipay.sdk.app.statistic.a.b
            if (r0 == 0) goto L5
            return
        L5:
            com.alipay.sdk.app.statistic.c r0 = new com.alipay.sdk.app.statistic.c
            r0.<init>(r1)
            com.alipay.sdk.app.statistic.a.b = r0
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3) {
            java.lang.Thread r0 = new java.lang.Thread
            com.alipay.sdk.app.statistic.b r1 = new com.alipay.sdk.app.statistic.b
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 != 0) goto L3
            return
        L3:
            com.alipay.sdk.app.statistic.c r0 = new com.alipay.sdk.app.statistic.c     // Catch: java.lang.Throwable -> L15
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L15
            r0.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = ""
            java.lang.String r2 = r0.a(r2)     // Catch: java.lang.Throwable -> L15
            a(r1, r2)     // Catch: java.lang.Throwable -> L15
            goto L19
        L15:
            r1 = move-exception
            com.alipay.sdk.util.c.a(r1)
        L19:
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            com.alipay.sdk.app.statistic.c r0 = com.alipay.sdk.app.statistic.a.b
            if (r0 != 0) goto L5
            return
        L5:
            r0.a(r1, r2, r3)
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            com.alipay.sdk.app.statistic.c r0 = com.alipay.sdk.app.statistic.a.b
            if (r0 != 0) goto L5
            return
        L5:
            r0.a(r1, r2, r3)
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3, java.lang.String r4) {
            com.alipay.sdk.app.statistic.c r0 = com.alipay.sdk.app.statistic.a.b
            if (r0 != 0) goto L5
            return
        L5:
            r0.a(r1, r2, r3, r4)
            return
    }

    public static void a(java.lang.String r2, java.lang.Throwable r3) {
            com.alipay.sdk.app.statistic.c r0 = com.alipay.sdk.app.statistic.a.b
            if (r0 != 0) goto L5
            return
        L5:
            if (r3 == 0) goto L1b
            java.lang.Class r0 = r3.getClass()
            if (r0 != 0) goto Le
            goto L1b
        Le:
            com.alipay.sdk.app.statistic.c r0 = com.alipay.sdk.app.statistic.a.b
            java.lang.Class r1 = r3.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.a(r2, r1, r3)
        L1b:
            return
    }

    public static synchronized void b(android.content.Context r2, java.lang.String r3) {
            java.lang.Class<com.alipay.sdk.app.statistic.a> r0 = com.alipay.sdk.app.statistic.a.class
            monitor-enter(r0)
            com.alipay.sdk.app.statistic.c r1 = com.alipay.sdk.app.statistic.a.b     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L9
            monitor-exit(r0)
            return
        L9:
            com.alipay.sdk.app.statistic.c r1 = com.alipay.sdk.app.statistic.a.b     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L17
            a(r2, r3)     // Catch: java.lang.Throwable -> L17
            r2 = 0
            com.alipay.sdk.app.statistic.a.b = r2     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)
            return
        L17:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }
}
