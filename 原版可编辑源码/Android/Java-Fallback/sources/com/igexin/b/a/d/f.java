package com.igexin.b.a.d;

public class f extends android.content.BroadcastReceiver implements java.util.Comparator<com.igexin.b.a.d.e> {
    public static final java.lang.String g = null;
    public static final long u = 0;
    private boolean a;
    final com.igexin.b.a.d.j h;
    final java.util.HashMap<java.lang.Long, com.igexin.b.a.d.a.b> i;
    final com.igexin.b.a.d.c j;
    final com.igexin.b.a.d.d<com.igexin.b.a.d.e> k;
    final java.util.concurrent.locks.ReentrantLock l;
    android.os.PowerManager m;
    android.app.AlarmManager n;
    android.content.Intent o;
    android.app.PendingIntent p;
    android.content.Intent q;
    android.app.PendingIntent r;
    java.lang.String s;
    volatile boolean t;

    static {
            java.lang.Class<com.igexin.b.a.d.f> r0 = com.igexin.b.a.d.f.class
            java.lang.String r0 = r0.getName()
            com.igexin.b.a.d.f.g = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 2
            long r0 = r0.toMillis(r1)
            com.igexin.b.a.d.f.u = r0
            return
    }

    protected f() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            r2.l = r0
            r0 = 0
            r2.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 7
            r0.<init>(r1)
            r2.i = r0
            com.igexin.b.a.d.d r0 = new com.igexin.b.a.d.d
            r0.<init>(r2, r2)
            r2.k = r0
            com.igexin.b.a.d.c r0 = new com.igexin.b.a.d.c
            r0.<init>()
            r2.j = r0
            com.igexin.b.a.d.j r0 = new com.igexin.b.a.d.j
            r0.<init>(r2)
            r2.h = r0
            com.igexin.b.a.d.e.E = r2
            return
    }

    public final int a(com.igexin.b.a.d.e r7, com.igexin.b.a.d.e r8) {
            r6 = this;
            long r0 = r7.u
            long r2 = r8.u
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = -1
            if (r0 >= 0) goto La
            return r1
        La:
            long r2 = r7.u
            long r4 = r8.u
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r2 = 1
            if (r0 <= 0) goto L14
            return r2
        L14:
            int r0 = r7.A
            int r3 = r8.A
            if (r0 <= r3) goto L1b
            return r1
        L1b:
            int r0 = r7.A
            int r3 = r8.A
            if (r0 >= r3) goto L22
            return r2
        L22:
            int r0 = r7.v
            int r3 = r8.v
            if (r0 >= r3) goto L29
            return r1
        L29:
            int r0 = r7.v
            int r1 = r8.v
            if (r0 <= r1) goto L30
            return r2
        L30:
            int r7 = r7.hashCode()
            int r8 = r8.hashCode()
            int r7 = r7 - r8
            return r7
    }

    public final void a(long r5) {
            r4 = this;
            boolean r0 = r4.t
            if (r0 == 0) goto L76
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setalarm|"
            r0.append(r1)
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r2 = java.util.Locale.getDefault()
            java.lang.String r3 = "yyyy-MM-dd HH:mm:ss"
            r1.<init>(r3, r2)
            java.util.Date r2 = new java.util.Date
            r2.<init>(r5)
            java.lang.String r1 = r1.format(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            r2 = 0
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 >= 0) goto L3c
            long r5 = java.lang.System.currentTimeMillis()
            long r2 = com.igexin.b.a.d.f.u
            long r5 = r5 + r2
        L3c:
            android.app.PendingIntent r0 = r4.p     // Catch: java.lang.Throwable -> L5b
            if (r0 == 0) goto L76
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5b
            r2 = 19
            if (r0 >= r2) goto L4e
            android.app.AlarmManager r0 = r4.n     // Catch: java.lang.Throwable -> L5b
            android.app.PendingIntent r2 = r4.p     // Catch: java.lang.Throwable -> L5b
        L4a:
            r0.set(r1, r5, r2)     // Catch: java.lang.Throwable -> L5b
            goto L76
        L4e:
            android.app.AlarmManager r0 = r4.n     // Catch: java.lang.Throwable -> L56
            android.app.PendingIntent r2 = r4.p     // Catch: java.lang.Throwable -> L56
            r0.setExact(r1, r5, r2)     // Catch: java.lang.Throwable -> L56
            goto L76
        L56:
            android.app.AlarmManager r0 = r4.n     // Catch: java.lang.Throwable -> L5b
            android.app.PendingIntent r2 = r4.p     // Catch: java.lang.Throwable -> L5b
            goto L4a
        L5b:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "TaskService"
            r6.append(r0)
            java.lang.String r5 = r5.toString()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            java.lang.Object[] r6 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r5, r6)
        L76:
            return
    }

    public final void a(android.content.Context r6) {
            r5 = this;
            boolean r0 = r5.a
            if (r0 != 0) goto Le9
            boolean r0 = com.igexin.push.util.j.b()
            r1 = 1
            if (r0 != 0) goto Ldf
            java.lang.String r0 = "power"
            java.lang.Object r0 = r6.getSystemService(r0)
            android.os.PowerManager r0 = (android.os.PowerManager) r0
            r5.m = r0
            r5.t = r1
            java.lang.String r0 = "alarm"
            java.lang.Object r0 = r6.getSystemService(r0)
            android.app.AlarmManager r0 = (android.app.AlarmManager) r0
            r5.n = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "AlarmTaskSchedule."
            r2.append(r3)
            java.lang.String r4 = r6.getPackageName()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            r6.registerReceiver(r5, r0)
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "AlarmTaskScheduleBak."
            r2.append(r4)
            java.lang.String r4 = r6.getPackageName()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            r6.registerReceiver(r5, r0)
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r2 = "android.intent.action.SCREEN_OFF"
            r0.<init>(r2)
            r6.registerReceiver(r5, r0)
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r2 = "android.intent.action.SCREEN_ON"
            r0.<init>(r2)
            r6.registerReceiver(r5, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "AlarmNioTaskSchedule."
            r0.append(r2)
            java.lang.String r2 = r6.getPackageName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.s = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r2 = r5.s
            r0.<init>(r2)
            r6.registerReceiver(r5, r0)
            r0 = 134217728(0x8000000, float:3.85186E-34)
            int r2 = com.igexin.push.util.j.a(r6)
            r4 = 31
            if (r2 < r4) goto La2
            int r2 = android.os.Build.VERSION.SDK_INT
            r4 = 30
            if (r2 < r4) goto La2
            r0 = 201326592(0xc000000, float:9.8607613E-32)
        La2:
            android.content.Intent r2 = new android.content.Intent
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = r6.getPackageName()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r2.<init>(r3)
            r5.o = r2
            int r2 = r5.hashCode()
            android.content.Intent r3 = r5.o
            android.app.PendingIntent r2 = android.app.PendingIntent.getBroadcast(r6, r2, r3, r0)
            r5.p = r2
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = r5.s
            r2.<init>(r3)
            r5.q = r2
            int r2 = r5.hashCode()
            int r2 = r2 + 2
            android.content.Intent r3 = r5.q
            android.app.PendingIntent r6 = android.app.PendingIntent.getBroadcast(r6, r2, r3, r0)
            r5.r = r6
        Ldf:
            com.igexin.b.a.d.j r6 = r5.h
            r6.start()
            java.lang.Thread.yield()     // Catch: java.lang.Throwable -> Le7
        Le7:
            r5.a = r1
        Le9:
            return
    }

    public final boolean a(com.igexin.b.a.d.a.b r6) {
            r5 = this;
            if (r6 == 0) goto L5a
            java.util.concurrent.locks.ReentrantLock r0 = r5.l
            boolean r1 = r0.tryLock()
            r2 = 0
            if (r1 == 0) goto L59
            java.util.HashMap<java.lang.Long, com.igexin.b.a.d.a.b> r1 = r5.i     // Catch: java.lang.Throwable -> L35
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> L35
            long r3 = r6.m()     // Catch: java.lang.Throwable -> L35
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L35
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L23
            r0.unlock()
            return r2
        L23:
            java.util.HashMap<java.lang.Long, com.igexin.b.a.d.a.b> r1 = r5.i     // Catch: java.lang.Throwable -> L35
            long r3 = r6.m()     // Catch: java.lang.Throwable -> L35
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L35
            r1.put(r3, r6)     // Catch: java.lang.Throwable -> L35
            r6 = 1
            r0.unlock()
            return r6
        L35:
            r6 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r1.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = "TaskService|"
            r1.append(r3)     // Catch: java.lang.Throwable -> L54
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L54
            r1.append(r6)     // Catch: java.lang.Throwable -> L54
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L54
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L54
            com.igexin.b.a.c.b.a(r6, r1)     // Catch: java.lang.Throwable -> L54
            r0.unlock()
            goto L59
        L54:
            r6 = move-exception
            r0.unlock()
            throw r6
        L59:
            return r2
        L5a:
            r6 = 0
            throw r6
    }

    final boolean a(com.igexin.b.a.d.a.e r3, com.igexin.b.a.d.a.b r4) {
            r2 = this;
            int r0 = r3.b_()
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 <= r1) goto L20
            if (r0 >= 0) goto L20
            r0 = r3
            com.igexin.b.a.d.e r0 = (com.igexin.b.a.d.e) r0
            boolean r1 = r0.t
            if (r1 == 0) goto L16
            boolean r3 = r4.a(r0, r2)
            goto L1a
        L16:
            boolean r3 = r4.a(r3, r2)
        L1a:
            if (r3 == 0) goto L1f
            r0.c()
        L1f:
            return r3
        L20:
            if (r0 < 0) goto L2c
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r0 >= r1) goto L2c
            boolean r3 = r4.a(r3, r2)
            return r3
        L2c:
            r3 = 0
            return r3
    }

    public final boolean a(com.igexin.b.a.d.e r4, boolean r5) {
            r3 = this;
            if (r4 == 0) goto L36
            boolean r0 = r4.p
            r1 = 0
            if (r0 != 0) goto L35
            boolean r0 = r4.k
            if (r0 == 0) goto Lc
            goto L35
        Lc:
            com.igexin.b.a.d.d<com.igexin.b.a.d.e> r0 = r3.k
            boolean r2 = r4 instanceof com.igexin.b.a.b.e
            if (r2 == 0) goto L1d
            r2 = r4
            com.igexin.b.a.b.e r2 = (com.igexin.b.a.b.e) r2
            java.lang.Object r2 = r2.c
            boolean r2 = r2 instanceof com.igexin.push.d.c.n
            if (r2 == 0) goto L1d
            r2 = 1
            goto L1e
        L1d:
            r2 = r1
        L1e:
            if (r2 == 0) goto L26
            if (r5 == 0) goto L2e
            r1 = 2147483647(0x7fffffff, float:NaN)
            goto L2e
        L26:
            if (r5 == 0) goto L2e
            java.util.concurrent.atomic.AtomicInteger r5 = r0.e
            int r1 = r5.incrementAndGet()
        L2e:
            r4.A = r1
            boolean r4 = r0.a(r4)
            return r4
        L35:
            return r1
        L36:
            r4 = 0
            throw r4
    }

    public final boolean a(com.igexin.b.a.d.e r3, boolean r4, boolean r5) {
            r2 = this;
            if (r3 == 0) goto L4e
            boolean r0 = r3.m
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 1
            if (r4 == 0) goto L44
            if (r5 != 0) goto L44
            r3.d()
            r3.b()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L23
            r3.g()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L23
            r3.e_()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L23
            boolean r4 = r3.t
            if (r4 != 0) goto L20
            r3.c()
        L20:
            return r0
        L21:
            r4 = move-exception
            goto L3c
        L23:
            r4 = move-exception
            r3.t = r0     // Catch: java.lang.Throwable -> L21
            r3.B = r4     // Catch: java.lang.Throwable -> L21
            r3.p()     // Catch: java.lang.Throwable -> L21
            r3.t()     // Catch: java.lang.Throwable -> L21
            r2.a(r3)     // Catch: java.lang.Throwable -> L21
            r2.f()     // Catch: java.lang.Throwable -> L21
            boolean r4 = r3.t
            if (r4 != 0) goto L3b
            r3.c()
        L3b:
            return r1
        L3c:
            boolean r5 = r3.t
            if (r5 != 0) goto L43
            r3.c()
        L43:
            throw r4
        L44:
            if (r5 == 0) goto L49
            if (r4 == 0) goto L49
            r1 = r0
        L49:
            boolean r3 = r2.a(r3, r1)
            return r3
        L4e:
            r3 = 0
            throw r3
    }

    public final boolean a(java.lang.Class r2) {
            r1 = this;
            com.igexin.b.a.d.d<com.igexin.b.a.d.e> r0 = r1.k
            if (r0 == 0) goto Lc
            boolean r2 = r0.a(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public final boolean a(java.lang.Object r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            boolean r1 = r4 instanceof com.igexin.push.d.c.m     // Catch: java.lang.Exception -> Lb
            if (r1 == 0) goto Lb
            r1 = r4
            com.igexin.push.d.c.m r1 = (com.igexin.push.d.c.m) r1     // Catch: java.lang.Exception -> Lb
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TaskService|responseQueue ++ task = "
            r1.append(r2)
            java.lang.Class r2 = r4.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = "@"
            r1.append(r2)
            int r2 = r4.hashCode()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r2 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r2)
            boolean r1 = r4 instanceof com.igexin.b.a.d.a.e
            if (r1 == 0) goto L61
            r1 = r4
            com.igexin.b.a.d.a.e r1 = (com.igexin.b.a.d.a.e) r1
            boolean r2 = r1.l()
            if (r2 == 0) goto L43
            return r0
        L43:
            r1.a(r0)
            boolean r2 = r4 instanceof com.igexin.push.d.b.a
            if (r2 != 0) goto L4e
            boolean r4 = r4 instanceof com.igexin.push.d.b.b
            if (r4 == 0) goto L5a
        L4e:
            com.igexin.b.a.d.c r4 = r3.j
            r4.a()
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r0 = "TaskService|change to primaryQueue"
            com.igexin.b.a.c.b.a(r0, r4)
        L5a:
            com.igexin.b.a.d.c r4 = r3.j
            r4.a(r1)
            r4 = 1
            return r4
        L61:
            java.lang.ClassCastException r4 = new java.lang.ClassCastException
            java.lang.String r0 = "response Obj is not a TaskResult "
            r4.<init>(r0)
            throw r4
    }

    public final void b(long r5) {
            r4 = this;
            boolean r0 = com.igexin.push.util.j.b()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setnioalarm|"
            r0.append(r1)
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r2 = java.util.Locale.getDefault()
            java.lang.String r3 = "yyyy-MM-dd HH:mm:ss"
            r1.<init>(r3, r2)
            java.util.Date r2 = new java.util.Date
            r2.<init>(r5)
            java.lang.String r1 = r1.format(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            r2 = 0
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 >= 0) goto L3f
            long r5 = java.lang.System.currentTimeMillis()
            long r2 = com.igexin.b.a.d.f.u
            long r5 = r5 + r2
        L3f:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L58
            r2 = 19
            if (r0 >= r2) goto L4d
            android.app.AlarmManager r0 = r4.n     // Catch: java.lang.Throwable -> L58
        L47:
            android.app.PendingIntent r2 = r4.r     // Catch: java.lang.Throwable -> L58
            r0.set(r1, r5, r2)     // Catch: java.lang.Throwable -> L58
            goto L58
        L4d:
            android.app.AlarmManager r0 = r4.n     // Catch: java.lang.Exception -> L55 java.lang.Throwable -> L58
            android.app.PendingIntent r2 = r4.r     // Catch: java.lang.Exception -> L55 java.lang.Throwable -> L58
            r0.setExact(r1, r5, r2)     // Catch: java.lang.Exception -> L55 java.lang.Throwable -> L58
            goto L58
        L55:
            android.app.AlarmManager r0 = r4.n     // Catch: java.lang.Throwable -> L58
            goto L47
        L58:
            return
    }

    @Override
    public int compare(com.igexin.b.a.d.e r1, com.igexin.b.a.d.e r2) {
            r0 = this;
            com.igexin.b.a.d.e r1 = (com.igexin.b.a.d.e) r1
            com.igexin.b.a.d.e r2 = (com.igexin.b.a.d.e) r2
            int r1 = r0.a(r1, r2)
            return r1
    }

    public final void e() {
            r2 = this;
            android.app.PendingIntent r0 = r2.r     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lb
            android.app.AlarmManager r0 = r2.n     // Catch: java.lang.Throwable -> Lb
            android.app.PendingIntent r1 = r2.r     // Catch: java.lang.Throwable -> Lb
            r0.cancel(r1)     // Catch: java.lang.Throwable -> Lb
        Lb:
            return
    }

    protected final void f() {
            r1 = this;
            com.igexin.b.a.d.j r0 = r1.h
            if (r0 == 0) goto Lf
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto Lf
            com.igexin.b.a.d.j r0 = r1.h
            r0.interrupt()
        Lf:
            return
    }

    final void g() {
            r8 = this;
        L0:
            com.igexin.b.a.d.c r0 = r8.j
            boolean r0 = r0.c()
            if (r0 != 0) goto Le8
            com.igexin.b.a.d.c r0 = r8.j
            com.igexin.b.a.d.a.e r0 = r0.d()
            if (r0 != 0) goto L11
            return
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TaskService|notifyObserver responseQueue -- task = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r3)
            r1 = 1
            r0.a(r1)
            java.util.concurrent.locks.ReentrantLock r1 = r8.l
            r1.lock()
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            java.util.HashMap<java.lang.Long, com.igexin.b.a.d.a.b> r4 = r8.i     // Catch: java.lang.Throwable -> L9b
            boolean r4 = r4.isEmpty()     // Catch: java.lang.Throwable -> L9b
            if (r4 != 0) goto L86
            long r4 = r0.m()     // Catch: java.lang.Throwable -> L9b
            r6 = 0
            int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r6 == 0) goto L5e
            java.util.HashMap<java.lang.Long, com.igexin.b.a.d.a.b> r6 = r8.i     // Catch: java.lang.Throwable -> L9b
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r4 = r6.get(r4)     // Catch: java.lang.Throwable -> L9b
            com.igexin.b.a.d.a.b r4 = (com.igexin.b.a.d.a.b) r4     // Catch: java.lang.Throwable -> L9b
            if (r4 == 0) goto L86
            boolean r5 = r4.l()     // Catch: java.lang.Throwable -> L9b
            if (r5 == 0) goto L86
            boolean r4 = r8.a(r0, r4)     // Catch: java.lang.Throwable -> L9b
            goto L87
        L5e:
            java.util.HashMap<java.lang.Long, com.igexin.b.a.d.a.b> r4 = r8.i     // Catch: java.lang.Throwable -> L9b
            java.util.Collection r4 = r4.values()     // Catch: java.lang.Throwable -> L9b
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L9b
            r5 = r2
        L69:
            boolean r6 = r4.hasNext()     // Catch: java.lang.Throwable -> L84
            if (r6 == 0) goto L82
            java.lang.Object r6 = r4.next()     // Catch: java.lang.Throwable -> L84
            com.igexin.b.a.d.a.b r6 = (com.igexin.b.a.d.a.b) r6     // Catch: java.lang.Throwable -> L84
            boolean r7 = r6.l()     // Catch: java.lang.Throwable -> L84
            if (r7 != 0) goto L7c
            goto L69
        L7c:
            boolean r5 = r8.a(r0, r6)     // Catch: java.lang.Throwable -> L84
            if (r5 == 0) goto L69
        L82:
            r4 = r5
            goto L87
        L84:
            r4 = move-exception
            goto L9d
        L86:
            r4 = r2
        L87:
            if (r4 != 0) goto L97
            int r4 = r0.b_()
            if (r4 <= r3) goto L97
            if (r4 >= 0) goto L97
        L91:
            r3 = r0
            com.igexin.b.a.d.e r3 = (com.igexin.b.a.d.e) r3
            r3.c()
        L97:
            r1.unlock()
            goto Lc2
        L9b:
            r4 = move-exception
            r5 = r2
        L9d:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld4
            r6.<init>()     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r7 = "TaskService|"
            r6.append(r7)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Ld4
            r6.append(r4)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Object[] r6 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Ld4
            com.igexin.b.a.c.b.a(r4, r6)     // Catch: java.lang.Throwable -> Ld4
            if (r5 != 0) goto L97
            int r4 = r0.b_()
            if (r4 <= r3) goto L97
            if (r4 >= 0) goto L97
            goto L91
        Lc2:
            boolean r0 = r0 instanceof com.igexin.push.d.c.k
            if (r0 == 0) goto L0
            com.igexin.b.a.d.c r0 = r8.j
            r0.b()
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r1 = "TaskService|queue -> secondRespQueue"
            com.igexin.b.a.c.b.a(r1, r0)
            goto L0
        Ld4:
            r2 = move-exception
            if (r5 != 0) goto Le4
            int r4 = r0.b_()
            if (r4 <= r3) goto Le4
            if (r4 >= 0) goto Le4
            com.igexin.b.a.d.e r0 = (com.igexin.b.a.d.e) r0
            r0.c()
        Le4:
            r1.unlock()
            throw r2
        Le8:
            return
    }

    @Override
    public final void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            java.lang.String r3 = r4.getAction()
            java.lang.String r0 = "android.intent.action.SCREEN_OFF"
            boolean r3 = r0.equals(r3)
            r0 = 0
            if (r3 == 0) goto L31
            r3 = 1
            r2.t = r3
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = "screenoff"
            com.igexin.b.a.c.b.a(r4, r3)
            com.igexin.b.a.d.d<com.igexin.b.a.d.e> r3 = r2.k
            java.util.concurrent.atomic.AtomicLong r3 = r3.h
            long r3 = r3.get()
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 <= 0) goto L9d
            com.igexin.b.a.d.d<com.igexin.b.a.d.e> r3 = r2.k
            java.util.concurrent.atomic.AtomicLong r3 = r3.h
            long r3 = r3.get()
            r2.a(r3)
            goto L9d
        L31:
            java.lang.String r3 = r4.getAction()
            java.lang.String r1 = "android.intent.action.SCREEN_ON"
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L47
            r2.t = r0
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = "screenon"
            com.igexin.b.a.c.b.a(r4, r3)
            goto L9d
        L47:
            java.lang.String r3 = r4.getAction()
            java.lang.String r1 = "AlarmTaskSchedule."
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L82
            java.lang.String r3 = r4.getAction()
            java.lang.String r1 = "AlarmTaskScheduleBak."
            boolean r3 = r3.startsWith(r1)
            if (r3 == 0) goto L60
            goto L82
        L60:
            java.lang.String r3 = r2.s
            java.lang.String r4 = r4.getAction()
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L9d
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r4 = "receive nioalarm"
            com.igexin.b.a.c.b.a(r4, r3)
            java.lang.String r3 = "TaskService|alarm time out #######"
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L9d
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Exception -> L9d
            com.igexin.b.a.b.a.a.f r3 = com.igexin.b.a.b.a.a.f.a()     // Catch: java.lang.Exception -> L9d
            r3.e()     // Catch: java.lang.Exception -> L9d
            goto L9d
        L82:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "receivealarm|"
            r3.append(r4)
            boolean r4 = r2.t
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.Object[] r4 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r4)
            r2.f()
        L9d:
            return
    }
}
