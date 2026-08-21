package com.mbridge.msdk.foundation.same.report;

public final class b {
    private static final java.lang.String a = null;
    private static volatile com.mbridge.msdk.foundation.same.report.b b;
    private android.os.Handler c;
    private boolean d;
    private int e;
    private long f;
    private java.lang.String g;
    private com.mbridge.msdk.foundation.db.BatchReportDao h;
    private java.util.concurrent.atomic.AtomicInteger i;
    private java.util.Stack<java.lang.Long> j;
    private java.util.concurrent.Executor k;




    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.report.b> r0 = com.mbridge.msdk.foundation.same.report.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.report.b.a = r0
            return
    }

    private b() {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.d = r0
            r1 = 30
            r6.e = r1
            r1 = 5000(0x1388, double:2.4703E-320)
            r6.f = r1
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r1 = r1.a
            r6.g = r1
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r6.k = r1
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            com.mbridge.msdk.c.a r1 = r1.b(r2)
            if (r1 == 0) goto L48
            int r2 = r1.aB()
            r6.e = r2
            int r2 = r1.aC()
            int r2 = r2 * 1000
            long r2 = (long) r2
            r6.f = r2
            int r1 = r1.aD()
            r2 = 1
            if (r1 != r2) goto L45
            goto L46
        L45:
            r2 = r0
        L46:
            r6.d = r2
        L48:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.report.b.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "初始化批量上报： "
            r2.append(r3)
            java.lang.String r3 = r6.g
            r2.append(r3)
            java.lang.String r3 = " "
            r2.append(r3)
            int r4 = r6.e
            r2.append(r4)
            r2.append(r3)
            long r4 = r6.f
            r2.append(r4)
            r2.append(r3)
            boolean r3 = r6.d
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            boolean r1 = r6.d
            if (r1 != 0) goto L7f
            goto Lb0
        L7f:
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
            r1.<init>(r0)
            r6.i = r1
            java.util.Stack r0 = new java.util.Stack
            r0.<init>()
            r6.j = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.BatchReportDao r0 = com.mbridge.msdk.foundation.db.BatchReportDao.getInstance(r0)
            r6.h = r0
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "mb_batch_report_thread"
            r0.<init>(r1)
            r0.start()
            com.mbridge.msdk.foundation.same.report.b$1 r1 = new com.mbridge.msdk.foundation.same.report.b$1
            android.os.Looper r0 = r0.getLooper()
            r1.<init>(r6, r0)
            r6.c = r1
        Lb0:
            return
    }

    static android.os.Handler a(com.mbridge.msdk.foundation.same.report.b r0) {
            android.os.Handler r0 = r0.c
            return r0
    }

    public static synchronized com.mbridge.msdk.foundation.same.report.b a() {
            java.lang.Class<com.mbridge.msdk.foundation.same.report.b> r0 = com.mbridge.msdk.foundation.same.report.b.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.mbridge.msdk.foundation.same.report.b r1 = new com.mbridge.msdk.foundation.same.report.b     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.mbridge.msdk.foundation.same.report.b.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static void a(com.mbridge.msdk.foundation.same.report.b r3, java.util.ArrayList r4, long r5) {
            if (r4 == 0) goto L26
            int r0 = r4.size()
            if (r0 <= 0) goto L26
            android.os.Message r0 = android.os.Message.obtain()
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "report_message"
            r1.putParcelableArrayList(r2, r4)
            java.lang.String r4 = "last_report_time"
            r1.putLong(r4, r5)
            r0.setData(r1)
            r4 = 3
            r0.what = r4
            android.os.Handler r3 = r3.c
            r3.sendMessage(r0)
        L26:
            return
    }

    static com.mbridge.msdk.foundation.db.BatchReportDao b(com.mbridge.msdk.foundation.same.report.b r0) {
            com.mbridge.msdk.foundation.db.BatchReportDao r0 = r0.h
            return r0
    }

    static void b(com.mbridge.msdk.foundation.same.report.b r10, java.util.ArrayList r11, long r12) {
            if (r11 == 0) goto Lf4
            int r0 = r11.size()
            if (r0 <= 0) goto Lf4
            java.lang.String r0 = com.mbridge.msdk.foundation.same.report.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "需要上报的数据条数： "
            r1.append(r2)
            int r2 = r11.size()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 != 0) goto L2e
            goto Lfb
        L2e:
            com.mbridge.msdk.foundation.same.net.g.d r0 = com.mbridge.msdk.foundation.same.report.e.a(r0)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = "app_id"
            r0.a(r2, r1)
            java.lang.String r1 = "m_sdk"
            java.lang.String r2 = "msdk"
            r0.a(r1, r2)
            r1 = 1
            java.lang.String r2 = java.lang.String.valueOf(r1)
            java.lang.String r3 = "lqswt"
            r0.a(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            com.mbridge.msdk.c.a r3 = r3.g(r4)
            r4 = 0
            r5 = r4
        L67:
            int r6 = r11.size()
            if (r5 >= r6) goto Lac
            java.lang.Object r6 = r11.get(r5)
            com.mbridge.msdk.foundation.same.report.BatchReportMessage r6 = (com.mbridge.msdk.foundation.same.report.BatchReportMessage) r6
            if (r6 == 0) goto La9
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = r6.getReportMessage()
            r7.append(r8)
            java.lang.String r8 = "&ts="
            r7.append(r8)
            long r8 = r6.getTimestamp()
            r7.append(r8)
            java.lang.String r6 = r7.toString()
            boolean r7 = com.mbridge.msdk.foundation.same.report.e.a(r3, r6)
            if (r7 != 0) goto L98
            goto La9
        L98:
            r2.append(r6)
            if (r5 < 0) goto La9
            int r6 = r11.size()
            int r6 = r6 - r1
            if (r5 >= r6) goto La9
            java.lang.String r6 = "\n"
            r2.append(r6)
        La9:
            int r5 = r5 + 1
            goto L67
        Lac:
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r2)     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = "data"
            r0.a(r2, r1)     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = com.mbridge.msdk.foundation.same.report.b.a     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r3.<init>()     // Catch: java.lang.Exception -> Le9
            java.lang.String r5 = "需要批量上报的数据： "
            r3.append(r5)     // Catch: java.lang.Exception -> Le9
            r3.append(r1)     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.same.report.d.a r1 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le9
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> Le9
            r1.<init>(r2)     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = r10.g     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.same.report.b$2 r3 = new com.mbridge.msdk.foundation.same.report.b$2     // Catch: java.lang.Exception -> Le9
            r3.<init>(r10, r12, r11)     // Catch: java.lang.Exception -> Le9
            r1.post(r4, r2, r0, r3)     // Catch: java.lang.Exception -> Le9
            goto Lfb
        Le9:
            r10 = move-exception
            java.lang.String r11 = com.mbridge.msdk.foundation.same.report.b.a
            java.lang.String r10 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r11, r10)
            goto Lfb
        Lf4:
            java.lang.String r10 = com.mbridge.msdk.foundation.same.report.b.a
            java.lang.String r11 = "需要上报的数据条数： 0"
            com.mbridge.msdk.foundation.tools.z.a(r10, r11)
        Lfb:
            return
    }

    static java.util.concurrent.atomic.AtomicInteger c(com.mbridge.msdk.foundation.same.report.b r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.i
            return r0
    }

    static java.lang.String d() {
            java.lang.String r0 = com.mbridge.msdk.foundation.same.report.b.a
            return r0
    }

    static java.util.Stack d(com.mbridge.msdk.foundation.same.report.b r0) {
            java.util.Stack<java.lang.Long> r0 = r0.j
            return r0
    }

    static boolean e(com.mbridge.msdk.foundation.same.report.b r0) {
            boolean r0 = r0.d
            return r0
    }

    static long f(com.mbridge.msdk.foundation.same.report.b r2) {
            long r0 = r2.f
            return r0
    }

    static int g(com.mbridge.msdk.foundation.same.report.b r0) {
            int r0 = r0.e
            return r0
    }

    public final synchronized void a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.same.report.b$3 r0 = new com.mbridge.msdk.foundation.same.report.b$3     // Catch: java.lang.Throwable -> L23
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.foundation.controller.b r2 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Throwable -> L23
            boolean r2 = r2.d()     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L1e
            java.util.concurrent.Executor r2 = r1.k     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L1a
            java.util.concurrent.Executor r2 = r1.k     // Catch: java.lang.Throwable -> L23
            r2.execute(r0)     // Catch: java.lang.Throwable -> L23
            goto L21
        L1a:
            r0.run()     // Catch: java.lang.Throwable -> L23
            goto L21
        L1e:
            r0.run()     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r1)
            return
        L23:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void b() {
            r4 = this;
            boolean r0 = r4.d
            if (r0 == 0) goto L1c
            android.os.Handler r0 = r4.c
            if (r0 == 0) goto L1c
            r1 = 1
            boolean r0 = r0.hasMessages(r1)
            if (r0 != 0) goto L1c
            android.os.Message r0 = android.os.Message.obtain()
            r0.what = r1
            android.os.Handler r1 = r4.c
            r2 = 5000(0x1388, double:2.4703E-320)
            r1.sendMessageDelayed(r0, r2)
        L1c:
            return
    }

    public final synchronized boolean c() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.d     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
