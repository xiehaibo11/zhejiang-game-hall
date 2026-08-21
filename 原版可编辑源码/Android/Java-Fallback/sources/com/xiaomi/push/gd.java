package com.xiaomi.push;

public abstract class gd extends com.xiaomi.push.fw {
    protected java.lang.Exception a;
    protected java.net.Socket a;
    protected com.xiaomi.push.service.XMPushService b;
    private int c;
    java.lang.String c;
    private java.lang.String d;
    protected volatile long e;
    protected volatile long f;
    protected volatile long g;
    private long h;

    public gd(com.xiaomi.push.service.XMPushService r3, com.xiaomi.push.fx r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r4 = 0
            r2.a = r4
            r2.c = r4
            r0 = 0
            r2.e = r0
            r2.f = r0
            r2.g = r0
            r2.h = r0
            r2.b = r3
            return
    }

    private void a(com.xiaomi.push.fx r2) {
            r1 = this;
            java.lang.String r0 = r2.c()
            int r2 = r2.a()
            r1.a(r0, r2)
            return
    }

    private void a(java.lang.String r32, int r33) {
            r31 = this;
            r1 = r31
            r0 = r32
            r2 = r33
            java.lang.String r3 = "|"
            java.lang.String r4 = "\n"
            java.lang.String r5 = " err:"
            java.lang.String r6 = " port:"
            java.lang.String r7 = "SMACK: Could not connect to "
            java.lang.String r8 = "SMACK: Could not connect to:"
            r9 = 0
            r1.a = r9
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "get bucket for host : "
            r10.append(r11)
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            java.lang.Integer r10 = com.xiaomi.channel.commonutils.logger.b.a(r10)
            int r10 = r10.intValue()
            com.xiaomi.push.cr r15 = r31.a(r32)
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            com.xiaomi.channel.commonutils.logger.b.a(r10)
            r10 = 1
            if (r15 == 0) goto L45
            java.util.ArrayList r9 = r15.a(r10)
        L45:
            com.xiaomi.push.cv r11 = com.xiaomi.push.cv.a()
            com.xiaomi.push.cr r11 = r11.d(r0)
            if (r11 == 0) goto L6e
            java.util.ArrayList r11 = r11.a(r10)
            java.util.Iterator r11 = r11.iterator()
        L57:
            boolean r12 = r11.hasNext()
            if (r12 == 0) goto L6e
            java.lang.Object r12 = r11.next()
            java.lang.String r12 = (java.lang.String) r12
            int r13 = r9.indexOf(r12)
            r14 = -1
            if (r13 != r14) goto L57
            r9.add(r12)
            goto L57
        L6e:
            boolean r11 = r9.isEmpty()
            if (r11 == 0) goto L77
            r9.add(r0)
        L77:
            r13 = 0
            r1.g = r13
            long r18 = android.os.SystemClock.elapsedRealtime()
            com.xiaomi.push.service.XMPushService r0 = r1.b
            java.lang.String r12 = com.xiaomi.push.bj.a(r0)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.util.Iterator r9 = r9.iterator()
            java.lang.String r0 = ""
            r32 = r0
            r0 = 0
        L93:
            boolean r16 = r9.hasNext()
            if (r16 == 0) goto L303
            java.lang.Object r16 = r9.next()
            r10 = r16
            java.lang.String r10 = (java.lang.String) r10
            long r21 = java.lang.System.currentTimeMillis()
            int r13 = r1.a
            r14 = 1
            int r13 = r13 + r14
            r1.a = r13
            int r23 = r0 + 1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            r0.<init>()     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            java.lang.String r13 = "begin to connect to "
            r0.append(r13)     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            r0.append(r10)     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            java.net.Socket r0 = r31.a()     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            r1.a = r0     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            java.net.InetSocketAddress r0 = com.xiaomi.push.ct.a(r10, r2)     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            java.net.Socket r13 = r1.a     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            r14 = 8000(0x1f40, float:1.121E-41)
            r13.connect(r0, r14)     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            java.lang.String r0 = "tcp connected"
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            java.net.Socket r0 = r1.a     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            r13 = 1
            r0.setTcpNoDelay(r13)     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L150
            r1.d = r10     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L150
            r31.a()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L150
            long r24 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L150
            long r13 = r24 - r21
            r1.a = r13     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            r1.b = r12     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            if (r15 == 0) goto L105
            long r13 = r1.a     // Catch: java.lang.Throwable -> L15a java.lang.Exception -> L1f2
            r24 = 0
            r26 = r9
            r9 = r11
            r11 = r15
            r27 = r12
            r12 = r10
            r20 = 1
            r28 = 0
            r30 = r15
            r15 = r24
            r11.b(r12, r13, r15)     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            goto L110
        L105:
            r26 = r9
            r9 = r11
            r27 = r12
            r30 = r15
            r20 = 1
            r28 = 0
        L110:
            long r11 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            r1.g = r11     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            r0.<init>()     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            java.lang.String r11 = "connected to "
            r0.append(r11)     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            r0.append(r10)     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            java.lang.String r11 = " in "
            r0.append(r11)     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            long r11 = r1.a     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            r0.append(r11)     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L13c java.lang.Exception -> L13e
            r0 = r32
            r10 = r20
            r2 = r23
            goto L30b
        L13c:
            r0 = move-exception
            goto L166
        L13e:
            r0 = move-exception
            r11 = r32
            r15 = r27
            goto L1ff
        L145:
            r0 = move-exception
            r26 = r9
            r9 = r11
            r27 = r12
            r20 = r13
            r30 = r15
            goto L164
        L150:
            r0 = move-exception
            r26 = r9
            r9 = r11
            r20 = r13
            r30 = r15
            goto L1fa
        L15a:
            r0 = move-exception
            r26 = r9
            r9 = r11
            r27 = r12
            r30 = r15
            r20 = 1
        L164:
            r28 = 0
        L166:
            java.lang.Exception r11 = new java.lang.Exception     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r12 = "abnormal exception"
            r11.<init>(r12, r0)     // Catch: java.lang.Throwable -> L1eb
            r1.a = r11     // Catch: java.lang.Throwable -> L1eb
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L1eb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            r9.append(r7)
            r9.append(r10)
            r9.append(r6)
            r9.append(r2)
            r9.append(r5)
            java.lang.Exception r0 = r1.a
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r9.append(r0)
            r9.append(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r32)
            if (r0 == 0) goto L1ab
            r0 = r10
            goto L1bf
        L1ab:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r11 = r32
            r0.append(r11)
            r0.append(r3)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
        L1bf:
            java.lang.Exception r11 = r1.a
            com.xiaomi.push.fj.a(r10, r11)
            if (r30 == 0) goto L1d8
            long r11 = java.lang.System.currentTimeMillis()
            long r13 = r11 - r21
            r15 = 0
            java.lang.Exception r12 = r1.a
            r11 = r30
            r17 = r12
            r12 = r10
            r11.b(r12, r13, r15, r17)
        L1d8:
            com.xiaomi.push.service.XMPushService r10 = r1.b
            java.lang.String r10 = com.xiaomi.push.bj.a(r10)
            r15 = r27
            boolean r10 = android.text.TextUtils.equals(r15, r10)
            if (r10 != 0) goto L1e8
            goto L278
        L1e8:
            r10 = r15
            goto L27c
        L1eb:
            r0 = move-exception
            r11 = r32
            r15 = r27
            goto L28b
        L1f2:
            r0 = move-exception
            r26 = r9
            r9 = r11
            r30 = r15
            r20 = 1
        L1fa:
            r28 = 0
            r11 = r32
            r15 = r12
        L1ff:
            r1.a = r0     // Catch: java.lang.Throwable -> L28a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            r9.append(r7)
            r9.append(r10)
            r9.append(r6)
            r9.append(r2)
            r9.append(r5)
            java.lang.Exception r0 = r1.a
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r9.append(r0)
            r9.append(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 == 0) goto L23a
            r0 = r10
            goto L24c
        L23a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r11)
            r0.append(r3)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
        L24c:
            java.lang.Exception r11 = r1.a
            com.xiaomi.push.fj.a(r10, r11)
            if (r30 == 0) goto L26b
            long r11 = java.lang.System.currentTimeMillis()
            long r13 = r11 - r21
            r16 = 0
            java.lang.Exception r12 = r1.a
            r11 = r30
            r21 = r12
            r12 = r10
            r10 = r15
            r15 = r16
            r17 = r21
            r11.b(r12, r13, r15, r17)
            goto L26c
        L26b:
            r10 = r15
        L26c:
            com.xiaomi.push.service.XMPushService r11 = r1.b
            java.lang.String r11 = com.xiaomi.push.bj.a(r11)
            boolean r11 = android.text.TextUtils.equals(r10, r11)
            if (r11 != 0) goto L27c
        L278:
            r2 = r23
            goto L30a
        L27c:
            r32 = r0
            r11 = r9
            r12 = r10
            r0 = r23
            r9 = r26
            r13 = r28
            r15 = r30
            goto L93
        L28a:
            r0 = move-exception
        L28b:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r8)
            r12.append(r10)
            java.lang.String r8 = r12.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r8)
            r9.append(r7)
            r9.append(r10)
            r9.append(r6)
            r9.append(r2)
            r9.append(r5)
            java.lang.Exception r2 = r1.a
            java.lang.Class r2 = r2.getClass()
            java.lang.String r2 = r2.getSimpleName()
            r9.append(r2)
            r9.append(r4)
            boolean r2 = android.text.TextUtils.isEmpty(r11)
            if (r2 == 0) goto L2c4
            r2 = r10
            goto L2d6
        L2c4:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r3)
            r2.append(r10)
            java.lang.String r2 = r2.toString()
        L2d6:
            java.lang.Exception r3 = r1.a
            com.xiaomi.push.fj.a(r10, r3)
            if (r30 == 0) goto L2f2
            long r3 = java.lang.System.currentTimeMillis()
            long r13 = r3 - r21
            r3 = 0
            java.lang.Exception r5 = r1.a
            r11 = r30
            r12 = r10
            r6 = r15
            r15 = r3
            r17 = r5
            r11.b(r12, r13, r15, r17)
            goto L2f3
        L2f2:
            r6 = r15
        L2f3:
            com.xiaomi.push.service.XMPushService r3 = r1.b
            java.lang.String r3 = com.xiaomi.push.bj.a(r3)
            boolean r3 = android.text.TextUtils.equals(r6, r3)
            if (r3 != 0) goto L302
            r0 = r2
            goto L278
        L302:
            throw r0
        L303:
            r9 = r11
            r28 = r13
            r11 = r32
            r2 = r0
            r0 = r11
        L30a:
            r10 = 0
        L30b:
            com.xiaomi.push.cv r3 = com.xiaomi.push.cv.a()
            r3.c()
            long r3 = android.os.SystemClock.elapsedRealtime()
            long r3 = r3 - r18
            int r3 = (int) r3
            if (r10 != 0) goto L353
            long r4 = r1.h
            int r2 = (r4 > r28 ? 1 : (r4 == r28 ? 0 : -1))
            if (r2 == 0) goto L32f
            long r4 = android.os.SystemClock.elapsedRealtime()
            long r6 = r1.h
            long r4 = r4 - r6
            r6 = 480000(0x75300, double:2.371515E-318)
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 <= 0) goto L349
        L32f:
            long r4 = android.os.SystemClock.elapsedRealtime()
            r1.h = r4
            com.xiaomi.push.service.XMPushService r2 = r1.b
            android.content.Context r2 = r2.getApplicationContext()
            boolean r2 = com.xiaomi.push.bj.c(r2)
            com.xiaomi.push.ez r4 = com.xiaomi.push.ez.j
            int r4 = r4.a()
            r5 = 0
            com.xiaomi.push.fj.a(r5, r4, r3, r0, r2)
        L349:
            com.xiaomi.push.gh r0 = new com.xiaomi.push.gh
            java.lang.String r2 = r9.toString()
            r0.<init>(r2)
            throw r0
        L353:
            r5 = 0
            com.xiaomi.push.ez r4 = com.xiaomi.push.ez.i
            int r4 = r4.a()
            com.xiaomi.push.fj.a(r5, r4, r3, r0, r2)
            return
    }

    com.xiaomi.push.cr a(java.lang.String r3) {
            r2 = this;
            com.xiaomi.push.cv r0 = com.xiaomi.push.cv.a()
            r1 = 0
            com.xiaomi.push.cr r0 = r0.a(r3, r1)
            boolean r1 = r0.b()
            if (r1 != 0) goto L17
            com.xiaomi.push.gg r1 = new com.xiaomi.push.gg
            r1.<init>(r2, r3)
            com.xiaomi.push.gz.a(r1)
        L17:
            return r0
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.net.Socket a() {
            r1 = this;
            java.net.Socket r0 = new java.net.Socket
            r0.<init>()
            return r0
    }

    protected synchronized void a() {
            r0 = this;
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    protected synchronized void a(int r3, java.lang.Exception r4) {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.b()     // Catch: java.lang.Throwable -> L1e
            r1 = 2
            if (r0 != r1) goto La
            monitor-exit(r2)
            return
        La:
            r2.a(r1, r3, r4)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = ""
            r2.a = r3     // Catch: java.lang.Throwable -> L1e
            java.net.Socket r3 = r2.a     // Catch: java.lang.Throwable -> L16
            r3.close()     // Catch: java.lang.Throwable -> L16
        L16:
            r3 = 0
            r2.e = r3     // Catch: java.lang.Throwable -> L1e
            r2.f = r3     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r2)
            return
        L1e:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    protected void a(java.lang.Exception r5) {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.g
            long r0 = r0 - r2
            r2 = 300000(0x493e0, double:1.482197E-318)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 >= 0) goto L3d
            com.xiaomi.push.service.XMPushService r0 = r4.b
            boolean r0 = com.xiaomi.push.bj.b(r0)
            if (r0 == 0) goto L3f
            int r0 = r4.c
            int r0 = r0 + 1
            r4.c = r0
            r2 = 2
            if (r0 < r2) goto L3f
            java.lang.String r0 = r4.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "max short conn time reached, sink down current host:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            r2 = 0
            r4.a(r0, r2, r5)
        L3d:
            r4.c = r1
        L3f:
            return
    }

    protected void a(java.lang.String r11, long r12, java.lang.Exception r14) {
            r10 = this;
            java.lang.String r0 = com.xiaomi.push.fx.a()
            com.xiaomi.push.cv r1 = com.xiaomi.push.cv.a()
            r2 = 0
            com.xiaomi.push.cr r3 = r1.a(r0, r2)
            if (r3 == 0) goto L1e
            r7 = 0
            r4 = r11
            r5 = r12
            r9 = r14
            r3.b(r4, r5, r7, r9)
            com.xiaomi.push.cv r11 = com.xiaomi.push.cv.a()
            r11.c()
        L1e:
            return
    }

    protected abstract void a(boolean r1);

    @Override
    public void a(com.xiaomi.push.fl[] r2) {
            r1 = this;
            com.xiaomi.push.gh r2 = new com.xiaomi.push.gh
            java.lang.String r0 = "Don't support send Blob"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void b(int r5, java.lang.Exception r6) {
            r4 = this;
            r4.a(r5, r6)
            if (r6 != 0) goto L9
            r0 = 18
            if (r5 != r0) goto L14
        L9:
            long r0 = r4.g
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 == 0) goto L14
            r4.a(r6)
        L14:
            return
    }

    @Override
    public void b(boolean r9) {
            r8 = this;
            long r3 = android.os.SystemClock.elapsedRealtime()
            long r5 = java.lang.System.currentTimeMillis()
            r8.a(r9)
            com.xiaomi.push.service.XMPushService r0 = r8.b
            com.xiaomi.push.service.o r0 = com.xiaomi.push.service.o.a(r0)
            r0.c()
            if (r9 != 0) goto L26
            com.xiaomi.push.service.XMPushService r9 = r8.b
            com.xiaomi.push.ge r7 = new com.xiaomi.push.ge
            r2 = 13
            r0 = r7
            r1 = r8
            r0.<init>(r1, r2, r3, r5)
            r0 = 10000(0x2710, double:4.9407E-320)
            r9.a(r7, r0)
        L26:
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void c(int r4, java.lang.Exception r5) {
            r3 = this;
            com.xiaomi.push.service.XMPushService r0 = r3.b
            com.xiaomi.push.gf r1 = new com.xiaomi.push.gf
            r2 = 2
            r1.<init>(r3, r2, r4, r5)
            r0.a(r1)
            return
    }

    public synchronized void e() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.c()     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            if (r0 != 0) goto L1a
            boolean r0 = r2.b()     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            if (r0 == 0) goto Le
            goto L1a
        Le:
            r0 = 0
            r1 = 0
            r2.a(r1, r1, r0)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            com.xiaomi.push.fx r0 = r2.a     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            r2.a(r0)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            monitor-exit(r2)
            return
        L1a:
            java.lang.String r0 = "WARNING: current xmpp has connected"
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L23
            monitor-exit(r2)
            return
        L21:
            r0 = move-exception
            goto L2a
        L23:
            r0 = move-exception
            com.xiaomi.push.gh r1 = new com.xiaomi.push.gh     // Catch: java.lang.Throwable -> L21
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L21
            throw r1     // Catch: java.lang.Throwable -> L21
        L2a:
            monitor-exit(r2)
            throw r0
    }

    public void f() {
            r2 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.e = r0
            return
    }

    public void g() {
            r2 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.f = r0
            return
    }
}
