package com.igexin.push.core;

public class x {
    public static android.content.Context a;
    public android.util.Pair<java.lang.Integer, java.lang.String> b;
    private com.igexin.sdk.IPushCore c;
    private final java.util.concurrent.atomic.AtomicBoolean d;
    private java.util.concurrent.ExecutorService e;
    private java.lang.Class f;
    private java.lang.Class g;
    private java.lang.String h;
    private android.content.ServiceConnection i;

    private x() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.d = r0
            com.igexin.push.core.z r0 = new com.igexin.push.core.z
            r0.<init>(r2)
            r2.i = r0
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r2.e = r0
            return
    }

    x(com.igexin.push.core.y r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(android.app.Service r4) {
            r3 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "ServiceManager|start by system ####"
            com.igexin.b.a.c.b.a(r2, r1)
            boolean r1 = r3.f(r4)
            r2 = 2
            if (r1 == 0) goto L24
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "ServiceManager|intent = null"
            com.igexin.b.a.c.b.a(r1, r0)
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.d
            r1 = 1
            boolean r0 = r0.getAndSet(r1)
            if (r0 != 0) goto L23
            r0 = 0
            r3.b(r4, r0)
        L23:
            return r2
        L24:
            r4.stopSelf()
            return r2
    }

    private int a(android.content.Intent r3, int r4, int r5) {
            r2 = this;
            com.igexin.sdk.IPushCore r0 = r2.c
            if (r0 == 0) goto L13
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "ServiceManager|inInit = true, call onServiceStartCommand..."
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.sdk.IPushCore r0 = r2.c
            int r3 = r0.onServiceStartCommand(r3, r4, r5)
            return r3
        L13:
            r3 = 2
            return r3
    }

    public static com.igexin.push.core.x a() {
            com.igexin.push.core.x r0 = com.igexin.push.core.aa.a()
            return r0
    }

    static java.lang.String a(com.igexin.push.core.x r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    static java.lang.String a(com.igexin.push.core.x r0, java.lang.String r1) {
            r0.h = r1
            return r1
    }

    private int b(android.app.Service r3, android.content.Intent r4, int r5, int r6) {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "ServiceManager|start from initialize..."
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.String r1 = "ServiceManager start from initialize..."
            r0.a(r1)
            r2.b(r3, r4)
            com.igexin.sdk.IPushCore r3 = r2.c
            if (r3 == 0) goto L1d
            int r3 = r3.onServiceStartCommand(r4, r5, r6)
            return r3
        L1d:
            r3 = 2
            return r3
    }

    static android.content.ServiceConnection b(com.igexin.push.core.x r0) {
            android.content.ServiceConnection r0 = r0.i
            return r0
    }

    private void b(android.app.Service r2, android.content.Intent r3) {
            r1 = this;
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r0 = "ServiceManager|startPushCore ++++"
            com.igexin.b.a.c.b.a(r0, r3)
            boolean r3 = com.igexin.push.util.EncryptUtils.isLoadSuccess()
            if (r3 == 0) goto L25
            com.igexin.sdk.a.a r3 = com.igexin.sdk.a.a.a()
            r3.b()
            com.igexin.sdk.a.a r3 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r3 = r3.c()
            r1.c = r3
            if (r3 == 0) goto L2f
            r3.start(r2)
            goto L2f
        L25:
            java.lang.String r3 = "ServiceManager"
            java.lang.String r0 = "load so error, stop Service"
            android.util.Log.e(r3, r0)
            r2.stopSelf()
        L2f:
            return
    }

    private boolean b(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = r2.e
            com.igexin.push.core.y r1 = new com.igexin.push.core.y
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
            r3 = 1
            return r3
    }

    private int c(android.app.Service r2, android.content.Intent r3, int r4, int r5) {
            r1 = this;
            boolean r0 = r1.f(r2)
            if (r0 == 0) goto L12
            r1.b(r2, r3)
            com.igexin.sdk.IPushCore r2 = r1.c
            if (r2 == 0) goto L1b
            int r2 = r2.onServiceStartCommand(r3, r4, r5)
            return r2
        L12:
            java.util.concurrent.atomic.AtomicBoolean r3 = r1.d
            r4 = 0
            r3.set(r4)
            r2.stopSelf()
        L1b:
            r2 = 2
            return r2
    }

    private boolean f(android.content.Context r1) {
            r0 = this;
            boolean r1 = com.igexin.push.util.c.a(r1)
            r1 = r1 ^ 1
            return r1
    }

    public int a(android.app.Service r6, android.content.Intent r7, int r8, int r9) {
            r5 = this;
            r0 = 0
            r1 = 0
            r2 = 1
            if (r7 != 0) goto L14
            java.lang.Integer r7 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L56
            android.util.Pair r7 = android.util.Pair.create(r7, r1)     // Catch: java.lang.Throwable -> L56
            r5.b = r7     // Catch: java.lang.Throwable -> L56
            int r6 = r5.a(r6)     // Catch: java.lang.Throwable -> L56
            return r6
        L14:
            com.igexin.push.util.k.a(r6, r7)     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "action"
            java.lang.String r3 = r7.getStringExtra(r3)     // Catch: java.lang.Throwable -> L56
            java.util.concurrent.atomic.AtomicBoolean r4 = r5.d     // Catch: java.lang.Throwable -> L56
            boolean r4 = r4.getAndSet(r2)     // Catch: java.lang.Throwable -> L56
            if (r4 == 0) goto L2a
            int r6 = r5.a(r7, r8, r9)     // Catch: java.lang.Throwable -> L56
            return r6
        L2a:
            java.lang.String r4 = com.igexin.sdk.PushConsts.ACTION_SERVICE_INITIALIZE     // Catch: java.lang.Throwable -> L56
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Throwable -> L56
            if (r3 == 0) goto L41
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L56
            android.util.Pair r1 = android.util.Pair.create(r2, r1)     // Catch: java.lang.Throwable -> L56
            r5.b = r1     // Catch: java.lang.Throwable -> L56
            int r6 = r5.b(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L56
            return r6
        L41:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "pkg"
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L56
            android.util.Pair r1 = android.util.Pair.create(r1, r2)     // Catch: java.lang.Throwable -> L56
            r5.b = r1     // Catch: java.lang.Throwable -> L56
            int r6 = r5.c(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L56
            return r6
        L56:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "ServiceManager|"
            r7.append(r8)
            java.lang.String r6 = r6.toString()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.Object[] r7 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r6, r7)
            r6 = 2
            return r6
    }

    public android.os.IBinder a(android.app.Service r4, android.content.Intent r5) {
            r3 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "ServiceManager|onBind..."
            com.igexin.b.a.c.b.a(r2, r1)
            r3.a(r4, r5, r0, r0)
            r4 = 0
            return r4
    }

    public void a(android.app.Activity r6) {
            r5 = this;
            r0 = 0
            android.content.Intent r1 = r6.getIntent()     // Catch: java.lang.Throwable -> L2c
            android.content.Context r2 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L2c
            if (r1 != 0) goto L15
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L2c
            java.lang.Class r3 = r5.c(r2)     // Catch: java.lang.Throwable -> L2c
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2c
            goto L21
        L15:
            android.content.ComponentName r3 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L2c
            java.lang.Class r4 = r5.c(r2)     // Catch: java.lang.Throwable -> L2c
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L2c
            r1.setComponent(r3)     // Catch: java.lang.Throwable -> L2c
        L21:
            r5.a(r2, r1)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "ServiceManager|start PushService from da"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L2c
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L2c
            goto L47
        L2c:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b
            r2.<init>()     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = "ServiceManager"
            r2.append(r3)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L4b
            r2.append(r1)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L4b
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L4b
            com.igexin.b.a.c.b.a(r1, r0)     // Catch: java.lang.Throwable -> L4b
        L47:
            r6.finish()
            return
        L4b:
            r0 = move-exception
            r6.finish()
            throw r0
    }

    public void a(android.content.Context r1) {
            r0 = this;
            android.content.Context r1 = r1.getApplicationContext()
            com.igexin.push.core.x.a = r1
            return
    }

    public boolean a(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            boolean r1 = r0.b(r1, r2)
            return r1
    }

    public void b() {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "ServiceManager|onDestroy..."
            com.igexin.b.a.c.b.a(r1, r0)
            return
    }

    public boolean b(android.content.Context r5) {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "us"
            java.lang.String r2 = ""
            java.lang.String[] r3 = new java.lang.String[r0]     // Catch: java.lang.Exception -> L19
            java.lang.Object r5 = com.igexin.push.util.k.c(r5, r1, r2, r3)     // Catch: java.lang.Exception -> L19
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L19
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L19
            if (r1 == 0) goto L14
            return r0
        L14:
            java.lang.Class.forName(r5)     // Catch: java.lang.Exception -> L19
            r5 = 1
            return r5
        L19:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ServiceManager|"
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.Object[] r1 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r1)
            return r0
    }

    public java.lang.Class c(android.content.Context r5) {
            r4 = this;
            java.lang.Class r0 = r4.g
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Class<com.igexin.sdk.PushService> r0 = com.igexin.sdk.PushService.class
            android.util.Pair r0 = com.igexin.push.util.b.a(r5, r0)
            java.lang.Object r0 = r0.second
            java.lang.Class r0 = (java.lang.Class) r0
            r4.g = r0
            if (r0 == 0) goto L14
            return r0
        L14:
            r0 = 0
            java.lang.String r1 = "us"
            java.lang.String r2 = ""
            java.lang.String[] r3 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r5 = com.igexin.push.util.k.c(r5, r1, r2, r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L2e
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto L49
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> L2e
            r4.g = r5     // Catch: java.lang.Throwable -> L2e
            return r5
        L2e:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ServiceManager|"
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r0)
        L49:
            java.lang.Class<com.igexin.sdk.PushService> r5 = com.igexin.sdk.PushService.class
            return r5
    }

    public java.lang.Class d(android.content.Context r5) {
            r4 = this;
            java.lang.Class r0 = r4.f
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Class<com.igexin.sdk.GTIntentService> r0 = com.igexin.sdk.GTIntentService.class
            android.util.Pair r0 = com.igexin.push.util.b.a(r5, r0)
            java.lang.Object r0 = r0.second
            java.lang.Class r0 = (java.lang.Class) r0
            r4.f = r0
            if (r0 == 0) goto L14
            return r0
        L14:
            r0 = 0
            java.lang.String r1 = "uis"
            java.lang.String r2 = ""
            java.lang.String[] r3 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r5 = com.igexin.push.util.k.c(r5, r1, r2, r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L2e
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto L49
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> L2e
            r4.f = r5     // Catch: java.lang.Throwable -> L2e
            return r5
        L2e:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ServiceManager|"
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r0)
        L49:
            java.lang.Class r5 = r4.f
            return r5
    }

    public java.lang.String e(android.content.Context r4) {
            r3 = this;
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r1 = "ua"
            java.lang.String r2 = ""
            java.lang.Object r4 = com.igexin.push.util.k.c(r4, r1, r2, r0)
            java.lang.String r4 = (java.lang.String) r4
            return r4
    }
}
