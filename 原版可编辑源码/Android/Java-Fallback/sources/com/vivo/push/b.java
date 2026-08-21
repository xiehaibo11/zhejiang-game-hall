package com.vivo.push;

public final class b implements android.content.ServiceConnection {
    private static final java.lang.Object a = null;
    private static java.util.Map<java.lang.String, com.vivo.push.b> b;
    private boolean c;
    private java.lang.String d;
    private android.content.Context e;
    private java.util.concurrent.atomic.AtomicInteger f;
    private volatile com.vivo.vms.IPCInvoke g;
    private java.lang.Object h;
    private java.lang.String i;
    private android.os.Handler j;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.vivo.push.b.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.vivo.push.b.b = r0
            return
    }

    private b(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.d = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r4.h = r1
            r4.j = r0
            r4.e = r5
            r4.i = r6
            java.util.concurrent.atomic.AtomicInteger r6 = new java.util.concurrent.atomic.AtomicInteger
            r0 = 1
            r6.<init>(r0)
            r4.f = r6
            android.os.Handler r6 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            com.vivo.push.c r2 = new com.vivo.push.c
            r2.<init>(r4)
            r6.<init>(r1, r2)
            r4.j = r6
            java.lang.String r6 = com.vivo.push.util.t.b(r5)
            r4.d = r6
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r6 != 0) goto L55
            java.lang.String r6 = r4.i
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L41
            goto L55
        L41:
            java.lang.String r6 = r4.d
            long r5 = com.vivo.push.util.z.a(r5, r6)
            r2 = 1260(0x4ec, double:6.225E-321)
            int r5 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r5 < 0) goto L4e
            goto L4f
        L4e:
            r0 = r1
        L4f:
            r4.c = r0
            r4.b()
            return
        L55:
            android.content.Context r5 = r4.e
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "init error : push pkgname is "
            r6.<init>(r0)
            java.lang.String r0 = r4.d
            r6.append(r0)
            java.lang.String r0 = " ; action is "
            r6.append(r0)
            java.lang.String r0 = r4.i
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.vivo.push.util.p.c(r5, r6)
            r4.c = r1
            return
    }

    public static com.vivo.push.b a(android.content.Context r2, java.lang.String r3) {
            java.util.Map<java.lang.String, com.vivo.push.b> r0 = com.vivo.push.b.b
            java.lang.Object r0 = r0.get(r3)
            com.vivo.push.b r0 = (com.vivo.push.b) r0
            if (r0 != 0) goto L26
            java.lang.Object r1 = com.vivo.push.b.a
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.vivo.push.b> r0 = com.vivo.push.b.b     // Catch: java.lang.Throwable -> L23
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L23
            com.vivo.push.b r0 = (com.vivo.push.b) r0     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L21
            com.vivo.push.b r0 = new com.vivo.push.b     // Catch: java.lang.Throwable -> L23
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L23
            java.util.Map<java.lang.String, com.vivo.push.b> r2 = com.vivo.push.b.b     // Catch: java.lang.Throwable -> L23
            r2.put(r3, r0)     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L23
            goto L26
        L23:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L23
            throw r2
        L26:
            return r0
    }

    static java.util.concurrent.atomic.AtomicInteger a(com.vivo.push.b r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.f
            return r0
    }

    private void a(int r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.f
            r0.set(r2)
            return
    }

    private void b() {
            r4 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r4.f
            int r0 = r0.get()
            java.lang.String r1 = java.lang.String.valueOf(r0)
            java.lang.String r2 = "Enter connect, Connection Status: "
            java.lang.String r1 = r2.concat(r1)
            java.lang.String r2 = "AidlManager"
            com.vivo.push.util.p.d(r2, r1)
            r1 = 4
            if (r0 == r1) goto L3c
            r1 = 2
            if (r0 == r1) goto L3c
            r3 = 3
            if (r0 == r3) goto L3c
            r3 = 5
            if (r0 != r3) goto L22
            goto L3c
        L22:
            boolean r0 = r4.c
            if (r0 == 0) goto L3c
            r4.a(r1)
            boolean r0 = r4.c()
            if (r0 != 0) goto L39
            r0 = 1
            r4.a(r0)
            java.lang.String r0 = "bind core service fail"
            com.vivo.push.util.p.a(r2, r0)
            return
        L39:
            r4.d()
        L3c:
            return
    }

    static void b(com.vivo.push.b r1) {
            r0 = 1
            r1.a(r0)
            return
    }

    static void c(com.vivo.push.b r0) {
            r0.f()
            return
    }

    private boolean c() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = r3.i
            r0.<init>(r1)
            java.lang.String r1 = r3.d
            r0.setPackage(r1)
            android.content.Context r1 = r3.e     // Catch: java.lang.Exception -> L14
            r2 = 1
            boolean r0 = r1.bindService(r0, r3, r2)     // Catch: java.lang.Exception -> L14
            return r0
        L14:
            r0 = move-exception
            java.lang.String r1 = "AidlManager"
            java.lang.String r2 = "bind core error"
            com.vivo.push.util.p.a(r1, r2, r0)
            r0 = 0
            return r0
    }

    private void d() {
            r4 = this;
            android.os.Handler r0 = r4.j
            r1 = 1
            r0.removeMessages(r1)
            android.os.Handler r0 = r4.j
            r2 = 3000(0xbb8, double:1.482E-320)
            r0.sendEmptyMessageDelayed(r1, r2)
            return
    }

    private void e() {
            r2 = this;
            android.os.Handler r0 = r2.j
            r1 = 1
            r0.removeMessages(r1)
            return
    }

    private void f() {
            r3 = this;
            android.content.Context r0 = r3.e     // Catch: java.lang.Exception -> L6
            r0.unbindService(r3)     // Catch: java.lang.Exception -> L6
            return
        L6:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "On unBindServiceException:"
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AidlManager"
            com.vivo.push.util.p.a(r1, r0)
            return
    }

    public final boolean a() {
            r6 = this;
            android.content.Context r0 = r6.e
            java.lang.String r0 = com.vivo.push.util.t.b(r0)
            r6.d = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto L17
            android.content.Context r0 = r6.e
            java.lang.String r2 = "push pkgname is null"
            com.vivo.push.util.p.c(r0, r2)
            return r1
        L17:
            android.content.Context r0 = r6.e
            java.lang.String r2 = r6.d
            long r2 = com.vivo.push.util.z.a(r0, r2)
            r4 = 1260(0x4ec, double:6.225E-321)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto L26
            r1 = 1
        L26:
            r6.c = r1
            return r1
    }

    public final boolean a(android.os.Bundle r7) {
            r6 = this;
            r6.b()
            java.util.concurrent.atomic.AtomicInteger r0 = r6.f
            int r0 = r0.get()
            r1 = 2
            if (r0 != r1) goto L21
            java.lang.Object r0 = r6.h
            monitor-enter(r0)
            java.lang.Object r2 = r6.h     // Catch: java.lang.Throwable -> L17 java.lang.InterruptedException -> L19
            r3 = 2000(0x7d0, double:9.88E-321)
            r2.wait(r3)     // Catch: java.lang.Throwable -> L17 java.lang.InterruptedException -> L19
            goto L1d
        L17:
            r7 = move-exception
            goto L1f
        L19:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L17
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            goto L21
        L1f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r7
        L21:
            r0 = 4
            r2 = 1
            java.util.concurrent.atomic.AtomicInteger r3 = r6.f     // Catch: java.lang.Exception -> L4e
            int r3 = r3.get()     // Catch: java.lang.Exception -> L4e
            if (r3 != r0) goto L3e
            android.os.Handler r3 = r6.j     // Catch: java.lang.Exception -> L4e
            r3.removeMessages(r1)     // Catch: java.lang.Exception -> L4e
            android.os.Handler r3 = r6.j     // Catch: java.lang.Exception -> L4e
            r4 = 30000(0x7530, double:1.4822E-319)
            r3.sendEmptyMessageDelayed(r1, r4)     // Catch: java.lang.Exception -> L4e
            com.vivo.vms.IPCInvoke r3 = r6.g     // Catch: java.lang.Exception -> L4e
            r4 = 0
            r3.asyncCall(r7, r4)     // Catch: java.lang.Exception -> L4e
            return r2
        L3e:
            java.lang.String r7 = "AidlManager"
            java.lang.String r4 = "invoke error : connect status = "
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = r4.concat(r3)     // Catch: java.lang.Exception -> L4e
            com.vivo.push.util.p.d(r7, r3)     // Catch: java.lang.Exception -> L4e
            goto L80
        L4e:
            r7 = move-exception
            java.lang.String r3 = "AidlManager"
            java.lang.String r4 = "invoke error "
            com.vivo.push.util.p.a(r3, r4, r7)
            java.util.concurrent.atomic.AtomicInteger r7 = r6.f
            int r7 = r7.get()
            java.lang.String r3 = java.lang.String.valueOf(r7)
            java.lang.String r4 = "Enter disconnect, Connection Status: "
            java.lang.String r3 = r4.concat(r3)
            java.lang.String r4 = "AidlManager"
            com.vivo.push.util.p.d(r4, r3)
            if (r7 == r1) goto L7a
            r1 = 3
            if (r7 == r1) goto L7d
            if (r7 == r0) goto L73
            goto L80
        L73:
            r6.a(r2)
            r6.f()
            goto L80
        L7a:
            r6.e()
        L7d:
            r6.a(r2)
        L80:
            r7 = 0
            return r7
    }

    @Override
    public final void onBindingDied(android.content.ComponentName r2) {
            r1 = this;
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "onBindingDied : "
            java.lang.String r2 = r0.concat(r2)
            java.lang.String r0 = "AidlManager"
            com.vivo.push.util.p.b(r0, r2)
            return
    }

    @Override
    public final void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            r1.e()
            com.vivo.vms.IPCInvoke r2 = com.vivo.vms.IPCInvoke.Stub.asInterface(r3)
            r1.g = r2
            com.vivo.vms.IPCInvoke r2 = r1.g
            if (r2 != 0) goto L1e
            java.lang.String r2 = "AidlManager"
            java.lang.String r3 = "onServiceConnected error : aidl must not be null."
            com.vivo.push.util.p.d(r2, r3)
            r1.f()
            java.util.concurrent.atomic.AtomicInteger r2 = r1.f
            r3 = 1
            r2.set(r3)
            return
        L1e:
            java.util.concurrent.atomic.AtomicInteger r2 = r1.f
            int r2 = r2.get()
            r3 = 2
            r0 = 4
            if (r2 != r3) goto L2c
            r1.a(r0)
            goto L37
        L2c:
            java.util.concurrent.atomic.AtomicInteger r2 = r1.f
            int r2 = r2.get()
            if (r2 == r0) goto L37
            r1.f()
        L37:
            java.lang.Object r2 = r1.h
            monitor-enter(r2)
            java.lang.Object r3 = r1.h     // Catch: java.lang.Throwable -> L41
            r3.notifyAll()     // Catch: java.lang.Throwable -> L41
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L41
            return
        L41:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L41
            throw r3
    }

    @Override
    public final void onServiceDisconnected(android.content.ComponentName r1) {
            r0 = this;
            r1 = 0
            r0.g = r1
            r1 = 1
            r0.a(r1)
            return
    }
}
