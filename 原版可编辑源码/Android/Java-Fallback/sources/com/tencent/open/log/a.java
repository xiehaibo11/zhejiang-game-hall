package com.tencent.open.log;

public class a extends com.tencent.open.log.Tracer implements android.os.Handler.Callback {
    private com.tencent.open.log.b a;
    private java.io.FileWriter b;
    private java.io.File c;
    private char[] d;
    private volatile com.tencent.open.log.f e;
    private volatile com.tencent.open.log.f f;
    private volatile com.tencent.open.log.f g;
    private volatile com.tencent.open.log.f h;
    private volatile boolean i;
    private android.os.HandlerThread j;
    private android.os.Handler k;

    public a(int r1, boolean r2, com.tencent.open.log.g r3, com.tencent.open.log.b r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.i = r1
            r0.a(r4)
            com.tencent.open.log.f r1 = new com.tencent.open.log.f
            r1.<init>()
            r0.e = r1
            com.tencent.open.log.f r1 = new com.tencent.open.log.f
            r1.<init>()
            r0.f = r1
            com.tencent.open.log.f r1 = r0.e
            r0.g = r1
            com.tencent.open.log.f r1 = r0.f
            r0.h = r1
            int r1 = r4.c()
            char[] r1 = new char[r1]
            r0.d = r1
            android.os.HandlerThread r1 = new android.os.HandlerThread
            java.lang.String r2 = r4.b()
            int r3 = r4.d()
            r1.<init>(r2, r3)
            r0.j = r1
            if (r1 == 0) goto L3b
            r1.start()
        L3b:
            android.os.HandlerThread r1 = r0.j
            boolean r1 = r1.isAlive()
            if (r1 == 0) goto L58
            android.os.HandlerThread r1 = r0.j
            android.os.Looper r1 = r1.getLooper()
            if (r1 == 0) goto L58
            android.os.Handler r1 = new android.os.Handler
            android.os.HandlerThread r2 = r0.j
            android.os.Looper r2 = r2.getLooper()
            r1.<init>(r2, r0)
            r0.k = r1
        L58:
            return
    }

    public a(com.tencent.open.log.b r4) {
            r3 = this;
            int r0 = com.tencent.open.log.c.b
            com.tencent.open.log.g r1 = com.tencent.open.log.g.a
            r2 = 1
            r3.<init>(r0, r2, r1, r4)
            return
    }

    private void a(java.io.File r10) {
            r9 = this;
            java.io.File r10 = r10.getParentFile()
            if (r10 == 0) goto L73
            boolean r0 = r10.exists()
            if (r0 == 0) goto L73
            boolean r0 = r10.isDirectory()
            if (r0 != 0) goto L13
            goto L73
        L13:
            java.io.File[] r10 = r10.listFiles()
            if (r10 != 0) goto L1a
            return
        L1a:
            int r0 = r10.length
            r1 = 0
        L1c:
            if (r1 >= r0) goto L73
            r2 = r10[r1]
            boolean r3 = r9.b(r2)
            if (r3 != 0) goto L27
            goto L70
        L27:
            java.lang.String r3 = r2.getName()
            r4 = 32
            r5 = 43
            java.lang.String r4 = r3.substring(r4, r5)
            long r5 = java.lang.System.currentTimeMillis()
            boolean r7 = com.tencent.tauth.Tencent.USE_ONE_HOUR
            if (r7 == 0) goto L3f
            r7 = 3600000(0x36ee80, double:1.7786363E-317)
            goto L42
        L3f:
            r7 = 259200000(0xf731400, double:1.280618154E-315)
        L42:
            long r5 = r5 - r7
            java.lang.String r5 = com.tencent.open.log.b.a(r5)
            int r4 = r5.compareTo(r4)
            if (r4 > 0) goto L4e
            goto L70
        L4e:
            boolean r2 = r2.delete()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "delete name="
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = ", success="
            r4.append(r3)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.String r3 = "FileTracer"
            com.tencent.open.log.SLog.d(r3, r2)
        L70:
            int r1 = r1 + 1
            goto L1c
        L73:
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            com.tencent.open.log.f r0 = r1.g
            r0.a(r2)
            com.tencent.open.log.f r2 = r1.g
            int r2 = r2.a()
            com.tencent.open.log.b r0 = r1.c()
            int r0 = r0.c()
            if (r2 < r0) goto L18
            r1.a()
        L18:
            return
    }

    private boolean b(java.io.File r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r4 = r4.getName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "name="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "FileTracer"
            com.tencent.open.log.SLog.d(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L25
            return r0
        L25:
            int r1 = r4.length()
            r2 = 47
            if (r1 == r2) goto L2e
            return r0
        L2e:
            java.lang.String r1 = "com.tencent.mobileqq_connectSdk."
            boolean r1 = r4.startsWith(r1)
            if (r1 == 0) goto L3f
            java.lang.String r1 = ".log"
            boolean r4 = r4.endsWith(r1)
            if (r4 == 0) goto L3f
            r0 = 1
        L3f:
            return r0
    }

    private void f() {
            r3 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.HandlerThread r1 = r3.j
            if (r0 == r1) goto L9
            return
        L9:
            boolean r0 = r3.i
            if (r0 == 0) goto Le
            return
        Le:
            r0 = 1
            r3.i = r0
            r3.i()
            com.tencent.open.log.f r0 = r3.h     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
            java.io.Writer r1 = r3.g()     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
            char[] r2 = r3.d     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
        L1f:
            com.tencent.open.log.f r0 = r3.h
            r0.b()
            goto L30
        L25:
            r0 = move-exception
            goto L34
        L27:
            r0 = move-exception
            java.lang.String r1 = "FileTracer"
            java.lang.String r2 = "flushBuffer exception"
            com.tencent.open.log.SLog.e(r1, r2, r0)     // Catch: java.lang.Throwable -> L25
            goto L1f
        L30:
            r0 = 0
            r3.i = r0
            return
        L34:
            com.tencent.open.log.f r1 = r3.h
            r1.b()
            throw r0
    }

    private java.io.Writer g() {
            r4 = this;
            com.tencent.open.log.b r0 = r4.c()
            java.io.File r0 = r0.a()
            if (r0 == 0) goto L37
            if (r0 == 0) goto L14
            java.io.File r1 = r4.c
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L1a
        L14:
            java.io.FileWriter r1 = r4.b
            if (r1 != 0) goto L37
            if (r0 == 0) goto L37
        L1a:
            r4.c = r0
            r4.h()
            java.io.FileWriter r1 = new java.io.FileWriter     // Catch: java.io.IOException -> L2a
            java.io.File r2 = r4.c     // Catch: java.io.IOException -> L2a
            r3 = 1
            r1.<init>(r2, r3)     // Catch: java.io.IOException -> L2a
            r4.b = r1     // Catch: java.io.IOException -> L2a
            goto L34
        L2a:
            r1 = 0
            r4.b = r1
            java.lang.String r1 = "openSDK_LOG"
            java.lang.String r2 = "-->obtainFileWriter() app specific file permission denied"
            com.tencent.open.log.SLog.e(r1, r2)
        L34:
            r4.a(r0)
        L37:
            java.io.FileWriter r0 = r4.b
            return r0
    }

    private void h() {
            r3 = this;
            java.io.FileWriter r0 = r3.b     // Catch: java.io.IOException -> Lf
            if (r0 == 0) goto L17
            java.io.FileWriter r0 = r3.b     // Catch: java.io.IOException -> Lf
            r0.flush()     // Catch: java.io.IOException -> Lf
            java.io.FileWriter r0 = r3.b     // Catch: java.io.IOException -> Lf
            r0.close()     // Catch: java.io.IOException -> Lf
            goto L17
        Lf:
            r0 = move-exception
            java.lang.String r1 = "openSDK_LOG"
            java.lang.String r2 = "-->closeAppSpecificFileWriter() exception:"
            com.tencent.open.log.SLog.e(r1, r2, r0)
        L17:
            return
    }

    private void i() {
            r2 = this;
            monitor-enter(r2)
            com.tencent.open.log.f r0 = r2.g     // Catch: java.lang.Throwable -> L1a
            com.tencent.open.log.f r1 = r2.e     // Catch: java.lang.Throwable -> L1a
            if (r0 != r1) goto L10
            com.tencent.open.log.f r0 = r2.f     // Catch: java.lang.Throwable -> L1a
            r2.g = r0     // Catch: java.lang.Throwable -> L1a
            com.tencent.open.log.f r0 = r2.e     // Catch: java.lang.Throwable -> L1a
            r2.h = r0     // Catch: java.lang.Throwable -> L1a
            goto L18
        L10:
            com.tencent.open.log.f r0 = r2.e     // Catch: java.lang.Throwable -> L1a
            r2.g = r0     // Catch: java.lang.Throwable -> L1a
            com.tencent.open.log.f r0 = r2.f     // Catch: java.lang.Throwable -> L1a
            r2.h = r0     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1a
            throw r0
    }

    public void a() {
            r2 = this;
            android.os.Handler r0 = r2.k
            r1 = 1024(0x400, float:1.435E-42)
            boolean r0 = r0.hasMessages(r1)
            if (r0 == 0) goto Lf
            android.os.Handler r0 = r2.k
            r0.removeMessages(r1)
        Lf:
            android.os.Handler r0 = r2.k
            r0.sendEmptyMessage(r1)
            return
    }

    public void a(com.tencent.open.log.b r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void b() {
            r1 = this;
            r1.h()
            android.os.HandlerThread r0 = r1.j
            r0.quit()
            return
    }

    public com.tencent.open.log.b c() {
            r1 = this;
            com.tencent.open.log.b r0 = r1.a
            return r0
    }

    @Override
    protected void doTrace(int r9, java.lang.Thread r10, long r11, java.lang.String r13, java.lang.String r14, java.lang.Throwable r15) {
            r8 = this;
            com.tencent.open.log.g r0 = r8.e()
            r1 = r9
            r2 = r10
            r3 = r11
            r5 = r13
            r6 = r14
            r7 = r15
            java.lang.String r9 = r0.a(r1, r2, r3, r5, r6, r7)
            r8.a(r9)
            return
    }

    @Override
    public boolean handleMessage(android.os.Message r2) {
            r1 = this;
            int r2 = r2.what
            r0 = 1024(0x400, float:1.435E-42)
            if (r2 == r0) goto L7
            goto La
        L7:
            r1.f()
        La:
            r2 = 1
            return r2
    }
}
