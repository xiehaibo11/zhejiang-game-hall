package com.tencent.open.log;

public class SLog implements com.tencent.open.log.TraceLevel {
    public static final java.lang.String TAG = "openSDK_LOG";
    private static boolean c;
    public static com.tencent.open.log.SLog instance;
    protected com.tencent.open.log.a a;
    private com.tencent.open.log.Tracer b;

    static {
            return
    }

    private SLog() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static java.io.File a() {
            java.lang.String r0 = com.tencent.open.log.c.d
            com.tencent.open.log.d$c r1 = com.tencent.open.log.d.b.b()     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto L14
            long r1 = r1.c()     // Catch: java.lang.Throwable -> L2b
            long r3 = com.tencent.open.log.c.f     // Catch: java.lang.Throwable -> L2b
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 <= 0) goto L14
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            if (r1 == 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2b
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L2b
            goto L34
        L21:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2b
            java.io.File r2 = com.tencent.open.utils.g.c()     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L2b
            goto L34
        L2b:
            r0 = move-exception
            java.lang.String r1 = "openSDK_LOG"
            java.lang.String r2 = "getLogFilePath:"
            e(r1, r2, r0)
            r1 = 0
        L34:
            return r1
    }

    private java.lang.String a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = ""
            return r2
        L9:
            boolean r0 = com.tencent.open.log.d.a(r2)
            if (r0 == 0) goto L11
            java.lang.String r2 = "xxxxxx"
        L11:
            return r2
    }

    private void d() {
            r13 = this;
            com.tencent.open.log.b r12 = new com.tencent.open.log.b
            java.io.File r1 = a()
            int r2 = com.tencent.open.log.c.m
            int r3 = com.tencent.open.log.c.g
            int r4 = com.tencent.open.log.c.h
            java.lang.String r5 = com.tencent.open.log.c.c
            int r0 = com.tencent.open.log.c.i
            long r6 = (long) r0
            java.lang.String r9 = com.tencent.open.log.c.e
            long r10 = com.tencent.open.log.c.n
            r8 = 10
            r0 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r8, r9, r10)
            com.tencent.open.log.a r0 = new com.tencent.open.log.a
            r0.<init>(r12)
            r13.a = r0
            return
    }

    public static final void d(java.lang.String r3, java.lang.String r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 2
            r2 = 0
            r0.a(r1, r3, r4, r2)
            return
    }

    public static final void d(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 2
            r0.a(r1, r2, r3, r4)
            return
    }

    public static final void e(java.lang.String r3, java.lang.String r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 16
            r2 = 0
            r0.a(r1, r3, r4, r2)
            return
    }

    public static final void e(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 16
            r0.a(r1, r2, r3, r4)
            return
    }

    public static void flushLogs() {
            com.tencent.open.log.SLog r0 = getInstance()
            r0.c()
            return
    }

    public static com.tencent.open.log.SLog getInstance() {
            com.tencent.open.log.SLog r0 = com.tencent.open.log.SLog.instance
            if (r0 != 0) goto L1d
            java.lang.Class<com.tencent.open.log.SLog> r0 = com.tencent.open.log.SLog.class
            monitor-enter(r0)
            com.tencent.open.log.SLog r1 = com.tencent.open.log.SLog.instance     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L18
            com.tencent.open.log.SLog r1 = new com.tencent.open.log.SLog     // Catch: java.lang.Throwable -> L1a
            r1.<init>()     // Catch: java.lang.Throwable -> L1a
            com.tencent.open.log.SLog.instance = r1     // Catch: java.lang.Throwable -> L1a
            r1.d()     // Catch: java.lang.Throwable -> L1a
            r1 = 1
            com.tencent.open.log.SLog.c = r1     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            goto L1d
        L1a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r1
        L1d:
            com.tencent.open.log.SLog r0 = com.tencent.open.log.SLog.instance
            return r0
    }

    public static final void i(java.lang.String r3, java.lang.String r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 4
            r2 = 0
            r0.a(r1, r3, r4, r2)
            return
    }

    public static final void i(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 4
            r0.a(r1, r2, r3, r4)
            return
    }

    public static void release() {
            java.lang.Class<com.tencent.open.log.SLog> r0 = com.tencent.open.log.SLog.class
            monitor-enter(r0)
            com.tencent.open.log.SLog r1 = getInstance()     // Catch: java.lang.Throwable -> L13
            r1.b()     // Catch: java.lang.Throwable -> L13
            com.tencent.open.log.SLog r1 = com.tencent.open.log.SLog.instance     // Catch: java.lang.Throwable -> L13
            if (r1 == 0) goto L11
            r1 = 0
            com.tencent.open.log.SLog.instance = r1     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r1
    }

    public static final void u(java.lang.String r3, java.lang.String r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 32
            r2 = 0
            r0.a(r1, r3, r4, r2)
            return
    }

    public static final void u(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 32
            r0.a(r1, r2, r3, r4)
            return
    }

    public static final void v(java.lang.String r3, java.lang.String r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 1
            r2 = 0
            r0.a(r1, r3, r4, r2)
            return
    }

    public static final void v(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 1
            r0.a(r1, r2, r3, r4)
            return
    }

    public static final void w(java.lang.String r3, java.lang.String r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 8
            r2 = 0
            r0.a(r1, r3, r4, r2)
            return
    }

    public static final void w(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            com.tencent.open.log.SLog r0 = getInstance()
            r1 = 8
            r0.a(r1, r2, r3, r4)
            return
    }

    protected void a(int r11, java.lang.String r12, java.lang.String r13, java.lang.Throwable r14) {
            r10 = this;
            boolean r0 = com.tencent.open.log.SLog.c
            if (r0 == 0) goto L4f
            java.lang.String r0 = com.tencent.open.utils.g.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lf
            goto L4f
        Lf:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = " SDK_VERSION:"
            r1.append(r0)
            java.lang.String r0 = "3.5.14.lite"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.tencent.open.log.a r1 = r10.a
            if (r1 != 0) goto L2a
            return
        L2a:
            com.tencent.open.log.e r2 = com.tencent.open.log.e.a
            r3 = 32
            java.lang.Thread r4 = java.lang.Thread.currentThread()
            long r5 = java.lang.System.currentTimeMillis()
            r9 = 0
            java.lang.String r7 = "openSDK_LOG"
            r8 = r0
            r2.a(r3, r4, r5, r7, r8, r9)
            com.tencent.open.log.a r2 = r10.a
            java.lang.Thread r4 = java.lang.Thread.currentThread()
            long r5 = java.lang.System.currentTimeMillis()
            java.lang.String r7 = "openSDK_LOG"
            r2.a(r3, r4, r5, r7, r8, r9)
            r0 = 0
            com.tencent.open.log.SLog.c = r0
        L4f:
            com.tencent.open.log.e r1 = com.tencent.open.log.e.a
            java.lang.Thread r3 = java.lang.Thread.currentThread()
            long r4 = java.lang.System.currentTimeMillis()
            r2 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r1.a(r2, r3, r4, r6, r7, r8)
            int r0 = com.tencent.open.log.c.b
            boolean r0 = com.tencent.open.log.d.a.a(r0, r11)
            if (r0 == 0) goto L7c
            com.tencent.open.log.a r1 = r10.a
            if (r1 != 0) goto L6d
            return
        L6d:
            java.lang.Thread r3 = java.lang.Thread.currentThread()
            long r4 = java.lang.System.currentTimeMillis()
            r2 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r1.a(r2, r3, r4, r6, r7, r8)
        L7c:
            com.tencent.open.log.Tracer r1 = r10.b
            if (r1 == 0) goto L99
            java.lang.Thread r3 = java.lang.Thread.currentThread()     // Catch: java.lang.Exception -> L93
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L93
            java.lang.String r7 = r10.a(r13)     // Catch: java.lang.Exception -> L93
            r2 = r11
            r6 = r12
            r8 = r14
            r1.a(r2, r3, r4, r6, r7, r8)     // Catch: java.lang.Exception -> L93
            goto L99
        L93:
            r0 = move-exception
            java.lang.String r1 = "Exception"
            android.util.Log.e(r12, r1, r0)
        L99:
            return
    }

    protected void b() {
            r1 = this;
            com.tencent.open.log.a r0 = r1.a
            if (r0 == 0) goto Lf
            r0.a()
            com.tencent.open.log.a r0 = r1.a
            r0.b()
            r0 = 0
            r1.a = r0
        Lf:
            return
    }

    protected void c() {
            r1 = this;
            com.tencent.open.log.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    public void setCustomLogger(com.tencent.open.log.Tracer r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
