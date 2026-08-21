package com.igexin.push.core;

public class c implements com.igexin.b.a.d.a.b {
    private static com.igexin.push.core.c l;
    private android.content.Context a;
    private com.igexin.push.core.f b;
    private android.os.Handler c;
    private android.os.Handler d;
    private java.util.concurrent.ConcurrentLinkedQueue<android.os.Message> e;
    private com.igexin.push.core.a.e f;
    private com.igexin.b.a.b.c g;
    private com.igexin.b.a.b.b h;
    private volatile com.igexin.push.e.a i;
    private final java.util.concurrent.atomic.AtomicBoolean j;
    private com.igexin.push.b.b k;

    private c() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.j = r0
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            r2.e = r0
            com.igexin.push.core.f r0 = new com.igexin.push.core.f
            r0.<init>()
            r2.b = r0
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            r2.g = r0
            com.igexin.push.d.a r0 = new com.igexin.push.d.a
            android.content.Context r1 = r2.a
            r0.<init>(r1)
            com.igexin.b.a.b.c r1 = r2.g
            r1.a(r0)
            com.igexin.b.a.b.c r0 = r2.g
            r0.a(r2)
            com.igexin.push.e.a r0 = new com.igexin.push.e.a
            r0.<init>()
            r2.i = r0
            return
    }

    public static com.igexin.push.core.c a() {
            com.igexin.push.core.c r0 = com.igexin.push.core.c.l
            if (r0 != 0) goto Lb
            com.igexin.push.core.c r0 = new com.igexin.push.core.c
            r0.<init>()
            com.igexin.push.core.c.l = r0
        Lb:
            com.igexin.push.core.c r0 = com.igexin.push.core.c.l
            return r0
    }

    private void n() {
            r3 = this;
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)
            java.lang.String r1 = com.igexin.push.core.CoreConsts.b
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.TIME_SET"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.SCREEN_ON"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.SCREEN_OFF"
            r0.addAction(r1)
            android.content.Context r1 = r3.a
            com.igexin.push.core.l r2 = com.igexin.push.core.l.a()
            r1.registerReceiver(r2, r0)
            return
    }

    public boolean a(android.content.Context r3) {
            r2 = this;
            android.content.Context r3 = r3.getApplicationContext()
            r2.a = r3
            com.igexin.push.core.f r3 = r2.b
            r0 = 0
            r1 = 1
            if (r3 == 0) goto L1a
            boolean r3 = r3.isAlive()
            if (r3 == 0) goto L1a
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r0 = "CoreLogic|coreThread is alive +++++"
            com.igexin.b.a.c.b.a(r0, r3)
            return r1
        L1a:
            java.util.concurrent.atomic.AtomicBoolean r3 = r2.j
            boolean r3 = r3.getAndSet(r1)
            if (r3 != 0) goto L48
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r0 = "CoreLogic|start coreThread +++++"
            com.igexin.b.a.c.b.a(r0, r3)
            com.igexin.push.core.f r3 = r2.b
            r3.start()
            com.igexin.push.core.b r3 = new com.igexin.push.core.b
            com.igexin.push.core.f r0 = r2.b
            android.os.Looper r0 = r0.getLooper()
            r3.<init>(r0)
            r2.c = r3
            com.igexin.b.a.b.a.a.d r3 = new com.igexin.b.a.b.a.a.d
            com.igexin.push.core.f r0 = r2.b
            android.os.Looper r0 = r0.getLooper()
            r3.<init>(r0)
            r2.d = r3
        L48:
            return r1
    }

    public boolean a(android.os.Message r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = com.igexin.push.core.d.h
            boolean r0 = r0.get()
            if (r0 == 0) goto Le
            android.os.Handler r0 = r1.c
            r0.sendMessage(r2)
            goto L13
        Le:
            java.util.concurrent.ConcurrentLinkedQueue<android.os.Message> r0 = r1.e
            r0.add(r2)
        L13:
            r2 = 1
            return r2
    }

    @Override
    public boolean a(com.igexin.b.a.d.a.e r1, com.igexin.b.a.d.f r2) {
            r0 = this;
            com.igexin.push.core.a.e r2 = r0.f
            if (r2 == 0) goto Lc
            boolean r1 = r2.a(r1)
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    @Override
    public boolean a(com.igexin.b.a.d.e r1, com.igexin.b.a.d.f r2) {
            r0 = this;
            com.igexin.push.core.a.e r2 = r0.f
            if (r2 == 0) goto Lc
            boolean r1 = r2.a(r1)
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public boolean a(com.igexin.push.f.b.g r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            if (r4 == 0) goto Lf
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            boolean r4 = r2.a(r4, r1, r0)
            if (r4 == 0) goto Lf
            goto L10
        Lf:
            r0 = r1
        L10:
            return r0
    }

    public boolean a(boolean r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CoreLogic|start sdkSwitch isSlave = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            android.content.Context r0 = com.igexin.push.core.d.g
            if (r0 != 0) goto L1c
            return r1
        L1c:
            com.igexin.sdk.a.c r0 = new com.igexin.sdk.a.c
            android.content.Context r1 = com.igexin.push.core.d.g
            r0.<init>(r1)
            boolean r0 = r0.b()
            r1 = 1
            if (r0 != 0) goto L40
            com.igexin.sdk.a.d r0 = new com.igexin.sdk.a.d
            android.content.Context r2 = com.igexin.push.core.d.g
            r0.<init>(r2)
            r0.a()
            com.igexin.push.core.d.k = r1
            com.igexin.sdk.a.c r0 = new com.igexin.sdk.a.c
            android.content.Context r2 = com.igexin.push.core.d.g
            r0.<init>(r2)
            r0.a()
        L40:
            if (r4 == 0) goto L4e
            com.igexin.sdk.a.d r4 = new com.igexin.sdk.a.d
            android.content.Context r0 = com.igexin.push.core.d.g
            r4.<init>(r0)
            r4.a()
            com.igexin.push.core.d.k = r1
        L4e:
            com.igexin.push.core.c r4 = a()
            com.igexin.push.e.a r4 = r4.i()
            r4.b()
            return r1
    }

    public android.os.Handler b() {
            r1 = this;
            android.os.Handler r0 = r1.d
            return r0
    }

    public void c() {
            r4 = this;
            r0 = 0
            com.igexin.push.b.b r1 = new com.igexin.push.b.b     // Catch: java.lang.Throwable -> Ldb
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> Ldb
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Ldb
            r4.k = r1     // Catch: java.lang.Throwable -> Ldb
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.d.a(r1)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.config.h r1 = com.igexin.push.config.h.a()     // Catch: java.lang.Throwable -> Ldb
            r1.b()     // Catch: java.lang.Throwable -> Ldb
            r4.n()     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.b.a r1 = new com.igexin.push.b.a     // Catch: java.lang.Throwable -> Ldb
            r1.<init>()     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.b.i r2 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.b.e r2 = com.igexin.push.core.b.e.a()     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.b.c r2 = com.igexin.push.core.b.c.a()     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.config.a r2 = com.igexin.push.config.a.a()     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.b.a.b.c r2 = r4.g     // Catch: java.lang.Throwable -> Ldb
            r3 = 1
            r2.a(r1, r3, r0)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.b.a.b.c r1 = r4.g     // Catch: java.lang.Throwable -> Ldb
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.b.a.b.c r1 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r2 = com.igexin.push.core.d.D     // Catch: java.lang.Throwable -> Ldb
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> Ldb
            byte[] r2 = com.igexin.b.b.a.a(r2)     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.b.a.b.c r1 = r4.g     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.f.b.b r2 = com.igexin.push.f.b.b.i()     // Catch: java.lang.Throwable -> Ldb
            boolean r1 = r1.a(r2, r0, r3)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.d.W = r1     // Catch: java.lang.Throwable -> Ldb
            com.igexin.b.a.b.c r1 = r4.g     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.f.b.f r2 = com.igexin.push.f.b.f.i()     // Catch: java.lang.Throwable -> Ldb
            boolean r1 = r1.a(r2, r3, r3)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.d.X = r1     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.c.i r1 = com.igexin.push.c.i.a()     // Catch: java.lang.Throwable -> Ldb
            r1.b()     // Catch: java.lang.Throwable -> Ldb
            r4.d()     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> Ldb
            r4.f = r1     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.e.a r1 = r4.i     // Catch: java.lang.Throwable -> Ldb
            r1.b()     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.a.a.c r1 = com.igexin.push.a.a.c.c()     // Catch: java.lang.Throwable -> Ldb
            r1.d()     // Catch: java.lang.Throwable -> Ldb
            java.util.concurrent.atomic.AtomicBoolean r1 = com.igexin.push.core.d.h     // Catch: java.lang.Throwable -> Ldb
            r1.set(r3)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.core.r r1 = com.igexin.push.core.r.a()     // Catch: java.lang.Throwable -> Ldb
            int r2 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
            com.igexin.push.extension.a r1 = com.igexin.push.extension.a.a()     // Catch: java.lang.Throwable -> Ldb
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> Ldb
            r1.a(r2)     // Catch: java.lang.Throwable -> Ldb
        La5:
            java.util.concurrent.ConcurrentLinkedQueue<android.os.Message> r1 = r4.e     // Catch: java.lang.Throwable -> Ldb
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> Ldb
            if (r1 != 0) goto Lc1
            java.util.concurrent.ConcurrentLinkedQueue<android.os.Message> r1 = r4.e     // Catch: java.lang.Throwable -> Ldb
            java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> Ldb
            android.os.Message r1 = (android.os.Message) r1     // Catch: java.lang.Throwable -> Ldb
            if (r1 == 0) goto La5
            android.os.Handler r2 = r4.c     // Catch: java.lang.Throwable -> Ldb
            if (r2 == 0) goto La5
            android.os.Handler r2 = r4.c     // Catch: java.lang.Throwable -> Ldb
            r2.sendMessage(r1)     // Catch: java.lang.Throwable -> Ldb
            goto La5
        Lc1:
            com.igexin.push.core.w r1 = com.igexin.push.core.w.a()     // Catch: java.lang.Throwable -> Ldb
            r1.d()     // Catch: java.lang.Throwable -> Ldb
            com.igexin.assist.sdk.AssistPushManager r0 = com.igexin.assist.sdk.AssistPushManager.getInstance()     // Catch: java.lang.Throwable -> L112
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L112
            r0.initialize(r1)     // Catch: java.lang.Throwable -> L112
            com.igexin.assist.sdk.AssistPushManager r0 = com.igexin.assist.sdk.AssistPushManager.getInstance()     // Catch: java.lang.Throwable -> L112
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L112
            r0.register(r1)     // Catch: java.lang.Throwable -> L112
            goto L112
        Ldb:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CoreLogic|init|failed|"
            r2.append(r3)
            java.lang.String r3 = r1.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r2, r0)
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CoreLogic init failed = "
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.a(r1)
        L112:
            return
    }

    public void d() {
            r4 = this;
            com.igexin.push.f.b.a r0 = com.igexin.push.f.b.a.i()
            com.igexin.push.a.a.b r1 = new com.igexin.push.a.a.b
            r1.<init>()
            r0.a(r1)
            com.igexin.push.a.a.a r2 = new com.igexin.push.a.a.a
            r2.<init>()
            r0.a(r2)
            com.igexin.push.a.a.c r2 = com.igexin.push.a.a.c.c()
            r0.a(r2)
            r1.a()     // Catch: java.lang.Throwable -> L25
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L25
            r1.a(r2)     // Catch: java.lang.Throwable -> L25
        L25:
            com.igexin.b.a.b.c r1 = r4.g
            r2 = 0
            r3 = 1
            boolean r0 = r1.a(r0, r2, r3)
            com.igexin.push.core.d.Y = r0
            return
    }

    public long e() {
            r2 = this;
            android.os.Handler r0 = r2.c
            if (r0 != 0) goto L7
            r0 = -2
            return r0
        L7:
            android.os.Looper r0 = r0.getLooper()
            java.lang.Thread r0 = r0.getThread()
            long r0 = r0.getId()
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            r0 = 0
            return r0
    }

    void g() {
            r2 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            if (r0 == 0) goto L18
            com.igexin.sdk.a.d r0 = new com.igexin.sdk.a.d
            android.content.Context r1 = com.igexin.push.core.d.g
            r0.<init>(r1)
            r0.b()
            r0 = 0
            com.igexin.push.core.d.k = r0
            com.igexin.push.core.d.o = r0
            com.igexin.push.e.a r0 = r2.i
            r0.c()
        L18:
            return
    }

    public com.igexin.b.a.b.b h() {
            r1 = this;
            com.igexin.b.a.b.b r0 = r1.h
            if (r0 != 0) goto La
            com.igexin.b.a.b.b r0 = com.igexin.push.d.a.b.a()
            r1.h = r0
        La:
            com.igexin.b.a.b.b r0 = r1.h
            return r0
    }

    public com.igexin.push.e.a i() {
            r1 = this;
            com.igexin.push.e.a r0 = r1.i
            return r0
    }

    public com.igexin.push.core.a.e j() {
            r1 = this;
            com.igexin.push.core.a.e r0 = r1.f
            return r0
    }

    public com.igexin.push.b.b k() {
            r1 = this;
            com.igexin.push.b.b r0 = r1.k
            return r0
    }

    @Override
    public boolean l() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public long m() {
            r2 = this;
            r0 = 94808(0x17258, double:4.68414E-319)
            return r0
    }
}
