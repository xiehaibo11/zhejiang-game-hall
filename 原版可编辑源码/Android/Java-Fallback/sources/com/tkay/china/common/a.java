package com.tkay.china.common;

public class a implements com.tkay.china.common.a.g {
    public static final java.lang.String a = null;
    public static final java.lang.String b = "action_offer_download_start";
    public static final java.lang.String c = "action_offer_download_end";
    public static final java.lang.String d = "action_offer_install_start";
    public static final java.lang.String e = "action_offer_install_successful";
    public static final java.lang.String f = "receiver_extra_offer_id";
    public static final java.lang.String g = "receiver_extra_click_id";
    private static volatile com.tkay.china.common.a h;
    private android.content.Context i;
    private java.util.List<com.tkay.china.common.a.e> j;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> k;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> l;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.a.a> m;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> n;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> o;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> p;
    private java.util.Map<java.lang.String, com.tkay.china.common.a.e> q;
    private final int r;
    private long s;
    private android.content.BroadcastReceiver t;
    private com.tkay.china.common.service.ApkDownloadService.a u;
    private android.content.BroadcastReceiver v;
    private android.content.ServiceConnection w;



    final class 3 implements com.tkay.china.common.a.a.a {
        final com.tkay.china.common.a a;






        3(com.tkay.china.common.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.china.common.a.e r4, long r5) {
                r3 = this;
                java.lang.String r0 = com.tkay.china.common.a.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "onSuccess: "
                r1.<init>(r2)
                java.lang.String r2 = r4.c
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                android.util.Log.i(r0, r1)
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.china.common.a$3$2 r1 = new com.tkay.china.common.a$3$2
                r1.<init>(r3, r4, r5)
                r0.a(r1)
                return
        }

        @Override
        public final void a(com.tkay.china.common.a.e r10, long r11, long r13) {
                r9 = this;
                java.lang.String r0 = com.tkay.china.common.a.a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onStartBefore: "
                r0.<init>(r1)
                java.lang.String r1 = r10.b
                r0.append(r1)
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.china.common.a$3$1 r8 = new com.tkay.china.common.a$3$1
                r1 = r8
                r2 = r9
                r3 = r11
                r5 = r13
                r7 = r10
                r1.<init>(r2, r3, r5, r7)
                r0.a(r8)
                return
        }

        @Override
        public final void a(com.tkay.china.common.a.e r11, long r12, long r14, int r16) {
                r10 = this;
                java.lang.String r0 = com.tkay.china.common.a.a
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.china.common.a$3$5 r9 = new com.tkay.china.common.a$3$5
                r1 = r9
                r2 = r10
                r3 = r11
                r4 = r16
                r5 = r12
                r7 = r14
                r1.<init>(r2, r3, r4, r5, r7)
                r0.a(r9)
                return
        }

        @Override
        public final void a(com.tkay.china.common.a.e r4, java.lang.String r5) {
                r3 = this;
                java.lang.String r0 = com.tkay.china.common.a.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "("
                r1.<init>(r2)
                java.lang.String r2 = r4.c
                r1.append(r2)
                java.lang.String r2 = ") download fail: "
                r1.append(r2)
                r1.append(r5)
                java.lang.String r1 = r1.toString()
                android.util.Log.e(r0, r1)
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.china.common.a$3$4 r1 = new com.tkay.china.common.a$3$4
                r1.<init>(r3, r4, r5)
                r0.a(r1)
                return
        }

        @Override
        public final void b(com.tkay.china.common.a.e r10, long r11, long r13) {
                r9 = this;
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.china.common.a$3$3 r8 = new com.tkay.china.common.a$3$3
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                r6 = r13
                r1.<init>(r2, r3, r4, r6)
                r0.a(r8)
                return
        }
    }

    final class 4 implements java.lang.Runnable {
        final com.tkay.china.common.a a;

        4(com.tkay.china.common.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                com.tkay.china.common.a r0 = r6.a
                java.util.Map r0 = com.tkay.china.common.a.f(r0)
                if (r0 == 0) goto L5a
                com.tkay.china.common.a r0 = r6.a
                java.util.Map r0 = com.tkay.china.common.a.f(r0)
                monitor-enter(r0)
                com.tkay.china.common.a r1 = r6.a     // Catch: java.lang.Throwable -> L57
                java.util.Map r1 = com.tkay.china.common.a.f(r1)     // Catch: java.lang.Throwable -> L57
                java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L57
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L57
            L1d:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L57
                if (r2 == 0) goto L55
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L57
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L57
                java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L57
                com.tkay.china.common.a.e r2 = (com.tkay.china.common.a.e) r2     // Catch: java.lang.Throwable -> L57
                java.lang.String r3 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L57
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L57
                java.lang.String r5 = "("
                r4.<init>(r5)     // Catch: java.lang.Throwable -> L57
                java.lang.String r5 = r2.c     // Catch: java.lang.Throwable -> L57
                r4.append(r5)     // Catch: java.lang.Throwable -> L57
                java.lang.String r5 = ") retry to download"
                r4.append(r5)     // Catch: java.lang.Throwable -> L57
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L57
                android.util.Log.i(r3, r4)     // Catch: java.lang.Throwable -> L57
                r2.e()     // Catch: java.lang.Throwable -> L57
                com.tkay.china.common.a r3 = r6.a     // Catch: java.lang.Throwable -> L57
                r3.d(r2)     // Catch: java.lang.Throwable -> L57
                r1.remove()     // Catch: java.lang.Throwable -> L57
                goto L1d
            L55:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L57
                return
            L57:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
            L5a:
                return
        }
    }


    static {
            java.lang.Class<com.tkay.china.common.a> r0 = com.tkay.china.common.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.china.common.a.a = r0
            return
    }

    private a(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.r = r0
            r0 = 604800000(0x240c8400, double:2.988109026E-315)
            r2.s = r0
            com.tkay.china.common.a$1 r0 = new com.tkay.china.common.a$1
            r0.<init>(r2)
            r2.w = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.i = r3
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            java.util.List r3 = java.util.Collections.synchronizedList(r3)
            r2.j = r3
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            r3.<init>()
            r2.k = r3
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            r3.<init>()
            r2.l = r3
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            r3.<init>()
            r2.m = r3
            java.lang.String r3 = com.tkay.china.common.c.b.a()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L50
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            if (r3 != 0) goto L50
            r0.mkdirs()
        L50:
            com.tkay.china.common.a$2 r3 = new com.tkay.china.common.a$2     // Catch: java.lang.Throwable -> L68
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L68
            r2.v = r3     // Catch: java.lang.Throwable -> L68
            android.content.IntentFilter r3 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L68
            r3.<init>()     // Catch: java.lang.Throwable -> L68
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            r3.addAction(r0)     // Catch: java.lang.Throwable -> L68
            android.content.Context r0 = r2.i     // Catch: java.lang.Throwable -> L68
            android.content.BroadcastReceiver r1 = r2.v     // Catch: java.lang.Throwable -> L68
            r0.registerReceiver(r1, r3)     // Catch: java.lang.Throwable -> L68
        L68:
            return
    }

    public static com.tkay.china.common.a a(android.content.Context r2) {
            com.tkay.china.common.a r0 = com.tkay.china.common.a.h
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.china.common.a> r0 = com.tkay.china.common.a.class
            monitor-enter(r0)
            com.tkay.china.common.a r1 = com.tkay.china.common.a.h     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.china.common.a r1 = new com.tkay.china.common.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.china.common.a.h = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.china.common.a r2 = com.tkay.china.common.a.h
            return r2
    }

    static com.tkay.china.common.service.ApkDownloadService.a a(com.tkay.china.common.a r0, com.tkay.china.common.service.ApkDownloadService.a r1) {
            r0.u = r1
            return r1
    }

    static java.util.Map a(com.tkay.china.common.a r0, java.util.Map r1) {
            r0.q = r1
            return r1
    }

    static java.util.concurrent.ConcurrentHashMap a(com.tkay.china.common.a r0, java.util.concurrent.ConcurrentHashMap r1) {
            r0.n = r1
            return r1
    }

    private void a(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L8
            r2.s = r3
        L8:
            return
    }

    private static void a(com.tkay.china.common.a.e r3, boolean r4) {
            com.tkay.core.common.g.b r0 = r3.l
            if (r0 == 0) goto Lf
            com.tkay.core.common.g.b r0 = r3.l
            com.tkay.core.common.f.h r1 = r3.j
            java.lang.String r2 = r3.a
            java.lang.String r3 = r3.b
            r0.a(r1, r2, r3, r4)
        Lf:
            return
    }

    static void a(com.tkay.china.common.a r2) {
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.china.common.a$4 r1 = new com.tkay.china.common.a$4
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    static void a(com.tkay.china.common.a r0, java.lang.String r1) {
            r0.d(r1)
            return
    }

    static android.content.Context b(com.tkay.china.common.a r0) {
            android.content.Context r0 = r0.i
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap c(com.tkay.china.common.a r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.a$a> r0 = r0.m
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap d(com.tkay.china.common.a r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r0.k
            return r0
    }

    private void d(java.lang.String r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.china.common.a$5 r1 = new com.tkay.china.common.a$5
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    static java.util.concurrent.ConcurrentHashMap e(com.tkay.china.common.a r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r0.n
            return r0
    }

    private void e(com.tkay.china.common.a.e r4) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r3.k
            java.lang.String r1 = r4.n
            r0.put(r1, r4)
            com.tkay.china.common.a$3 r0 = new com.tkay.china.common.a$3
            r0.<init>(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.a$a> r1 = r3.m
            java.lang.String r2 = r4.n
            r1.put(r2, r0)
            com.tkay.china.common.service.ApkDownloadService$a r0 = r3.u     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L1f
            com.tkay.china.common.service.ApkDownloadService$a r0 = r3.u     // Catch: java.lang.Throwable -> L3a
            java.lang.String r4 = r4.n     // Catch: java.lang.Throwable -> L3a
            r0.a(r4)     // Catch: java.lang.Throwable -> L3a
            return
        L1f:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L3a
            r0.<init>()     // Catch: java.lang.Throwable -> L3a
            android.content.Context r1 = r3.i     // Catch: java.lang.Throwable -> L3a
            java.lang.Class<com.tkay.china.common.service.ApkDownloadService> r2 = com.tkay.china.common.service.ApkDownloadService.class
            r0.setClass(r1, r2)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "extra_unique_id"
            java.lang.String r4 = r4.n     // Catch: java.lang.Throwable -> L3a
            r0.putExtra(r1, r4)     // Catch: java.lang.Throwable -> L3a
            android.content.Context r4 = r3.i     // Catch: java.lang.Throwable -> L3a
            android.content.ServiceConnection r1 = r3.w     // Catch: java.lang.Throwable -> L3a
            r2 = 1
            r4.bindService(r0, r1, r2)     // Catch: java.lang.Throwable -> L3a
        L3a:
            return
    }

    private static java.lang.String f(com.tkay.china.common.a.e r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r1.n
            java.lang.String r1 = com.tkay.china.common.c.b.a(r1)
            r0.append(r1)
            java.lang.String r1 = ".apk"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    static java.util.Map f(com.tkay.china.common.a r0) {
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r0 = r0.q
            return r0
    }

    private void g() {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.china.common.a$4 r1 = new com.tkay.china.common.a$4
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    private void h() {
            r3 = this;
            android.content.BroadcastReceiver r0 = r3.t     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.china.common.b r0 = new com.tkay.china.common.b     // Catch: java.lang.Throwable -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L27
            r3.t = r0     // Catch: java.lang.Throwable -> L27
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "android.intent.action.PACKAGE_REPLACED"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "package"
            r0.addDataScheme(r1)     // Catch: java.lang.Throwable -> L27
            android.content.Context r1 = r3.i     // Catch: java.lang.Throwable -> L27
            android.content.BroadcastReceiver r2 = r3.t     // Catch: java.lang.Throwable -> L27
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L27
        L27:
            return
    }

    private void i() {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.t     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto Le
            android.content.Context r0 = r2.i     // Catch: java.lang.Throwable -> Le
            android.content.BroadcastReceiver r1 = r2.t     // Catch: java.lang.Throwable -> Le
            r0.unregisterReceiver(r1)     // Catch: java.lang.Throwable -> Le
            r0 = 0
            r2.t = r0     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }

    @Override
    public final int a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void a(android.content.Context r18, com.tkay.core.common.f.i r19, com.tkay.core.common.f.h r20, java.lang.String r21, java.lang.String r22, java.lang.Runnable r23, com.tkay.core.common.g.b r24) {
            r17 = this;
            r1 = r17
            r2 = r18
            r0 = r19
            java.lang.String r3 = r20.B()
            boolean r3 = com.tkay.china.common.c.a.a(r2, r3)
            if (r3 == 0) goto L2c
            java.lang.String r0 = r20.B()
            android.content.pm.PackageManager r3 = r18.getPackageManager()     // Catch: java.lang.Throwable -> L27
            android.content.Intent r0 = r3.getLaunchIntentForPackage(r0)     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L26
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r3)     // Catch: java.lang.Throwable -> L27
            r2.startActivity(r0)     // Catch: java.lang.Throwable -> L27
        L26:
            return
        L27:
            r0 = move-exception
            r0.printStackTrace()
            return
        L2c:
            if (r23 == 0) goto L31
            r23.run()
        L31:
            com.tkay.china.common.a.e r3 = new com.tkay.china.common.a.e
            r3.<init>()
            java.lang.String r4 = com.tkay.core.common.l.g.a(r20)
            r3.n = r4
            java.lang.String r4 = r0.d
            r3.a = r4
            java.lang.String r4 = r20.p()
            r3.f = r4
            r4 = r21
            r3.b = r4
            r4 = r22
            r3.m = r4
            java.lang.String r4 = r20.B()
            r3.e = r4
            java.lang.String r4 = r20.r()
            r3.c = r4
            r4 = r20
            r3.j = r4
            com.tkay.core.common.f.j r5 = r0.m
            r6 = 0
            r7 = 1
            if (r5 == 0) goto L81
            com.tkay.core.common.f.j r5 = r0.m
            int r5 = r5.d()
            if (r5 != r7) goto L6e
            r5 = r7
            goto L6f
        L6e:
            r5 = r6
        L6f:
            r3.o = r5
            com.tkay.core.common.f.j r5 = r0.m
            int r5 = r5.L()
            r3.q = r5
            com.tkay.core.common.f.j r5 = r0.m
            int r5 = r5.K()
            r3.p = r5
        L81:
            r5 = 1112014848(0x42480000, float:50.0)
            android.content.res.Resources r8 = r18.getResources()
            android.util.DisplayMetrics r8 = r8.getDisplayMetrics()
            float r5 = android.util.TypedValue.applyDimension(r7, r5, r8)
            int r5 = (int) r5
            com.tkay.core.common.res.b r8 = com.tkay.core.common.res.b.a(r18)
            com.tkay.core.common.res.e r9 = new com.tkay.core.common.res.e
            java.lang.String r10 = r20.t()
            r9.<init>(r7, r10)
            android.graphics.Bitmap r5 = r8.a(r9, r5, r5)
            r3.d = r5
            java.lang.String r5 = r20.z()
            if (r5 == 0) goto Lbe
            java.lang.String r4 = r20.z()
            java.lang.String r5 = r0.d
            if (r5 != 0) goto Lb4
            java.lang.String r5 = ""
            goto Lb6
        Lb4:
            java.lang.String r5 = r0.d
        Lb6:
            java.lang.String r7 = "\\{req_id\\}"
            java.lang.String r4 = r4.replaceAll(r7, r5)
            r3.k = r4
        Lbe:
            r4 = r24
            r3.l = r4
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r4 = r1.p
            if (r4 == 0) goto Lcb
            java.lang.String r5 = r3.n
            r4.remove(r5)
        Lcb:
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r4 = r1.q
            if (r4 == 0) goto Ld4
            java.lang.String r5 = r3.n
            r4.remove(r5)
        Ld4:
            com.tkay.china.common.a r4 = a(r18)
            com.tkay.core.common.f.j r0 = r0.m
            long r7 = r0.A()
            r9 = 0
            int r0 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r0 <= 0) goto Le6
            r4.s = r7
        Le6:
            com.tkay.china.common.a r0 = a(r18)
            java.lang.String r4 = com.tkay.china.common.c.b.a()     // Catch: java.lang.Throwable -> L17e
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L17e
            if (r5 == 0) goto Lf6
            goto L182
        Lf6:
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L17e
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L17e
            java.io.File[] r4 = r5.listFiles()     // Catch: java.lang.Throwable -> L17e
            if (r4 == 0) goto L106
            int r5 = r4.length     // Catch: java.lang.Throwable -> L17e
            if (r5 != 0) goto L106
            goto L182
        L106:
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L17e
            r5.<init>()     // Catch: java.lang.Throwable -> L17e
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L17e
            long r9 = r0.s     // Catch: java.lang.Throwable -> L17e
            int r11 = r4.length     // Catch: java.lang.Throwable -> L17e
            r12 = r6
        L113:
            if (r12 >= r11) goto L14f
            r13 = r4[r12]     // Catch: java.lang.Throwable -> L17e
            java.lang.String r14 = r13.getName()     // Catch: java.lang.Throwable -> L17e
            java.lang.String r15 = ".apk"
            boolean r14 = r14.endsWith(r15)     // Catch: java.lang.Throwable -> L17e
            if (r14 == 0) goto L140
            android.content.Context r14 = r0.i     // Catch: java.lang.Throwable -> L17e
            if (r14 == 0) goto L139
            if (r13 != 0) goto L12a
            goto L139
        L12a:
            java.lang.String r15 = com.tkay.china.common.c.a.a(r14, r13)     // Catch: java.lang.Throwable -> L17e
            boolean r16 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L17e
            if (r16 != 0) goto L139
            boolean r14 = com.tkay.china.common.c.a.a(r14, r15)     // Catch: java.lang.Throwable -> L17e
            goto L13a
        L139:
            r14 = r6
        L13a:
            if (r14 == 0) goto L140
            r5.add(r13)     // Catch: java.lang.Throwable -> L17e
            goto L14c
        L140:
            long r14 = r13.lastModified()     // Catch: java.lang.Throwable -> L17e
            long r14 = r14 + r9
            int r14 = (r14 > r7 ? 1 : (r14 == r7 ? 0 : -1))
            if (r14 >= 0) goto L14c
            r5.add(r13)     // Catch: java.lang.Throwable -> L17e
        L14c:
            int r12 = r12 + 1
            goto L113
        L14f:
            int r0 = r5.size()     // Catch: java.lang.Throwable -> L17e
        L153:
            if (r6 >= r0) goto L182
            java.lang.String r4 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L17e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17e
            java.lang.String r8 = "clean expired file -> "
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L17e
            java.lang.Object r8 = r5.get(r6)     // Catch: java.lang.Throwable -> L17e
            java.io.File r8 = (java.io.File) r8     // Catch: java.lang.Throwable -> L17e
            java.lang.String r8 = r8.getName()     // Catch: java.lang.Throwable -> L17e
            r7.append(r8)     // Catch: java.lang.Throwable -> L17e
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L17e
            android.util.Log.i(r4, r7)     // Catch: java.lang.Throwable -> L17e
            java.lang.Object r4 = r5.get(r6)     // Catch: java.lang.Throwable -> L17e
            java.io.File r4 = (java.io.File) r4     // Catch: java.lang.Throwable -> L17e
            r4.delete()     // Catch: java.lang.Throwable -> L17e
            int r6 = r6 + 1
            goto L153
        L17e:
            r0 = move-exception
            r0.printStackTrace()
        L182:
            com.tkay.china.common.a r0 = a(r18)
            r0.d(r3)
            return
    }

    @Override
    public final void a(com.tkay.china.common.a.e r9) {
            r8 = this;
            if (r9 != 0) goto L3
            return
        L3:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r8.k
            java.lang.String r1 = r9.n
            boolean r0 = r0.containsKey(r1)
            java.lang.String r1 = "("
            if (r0 == 0) goto L86
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r9.n
            java.lang.String r3 = com.tkay.china.common.c.b.a(r3)
            r2.append(r3)
            java.lang.String r3 = ".temp"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r9.n
            java.lang.String r4 = com.tkay.china.common.c.b.a(r4)
            r3.append(r4)
            java.lang.String r4 = ".log"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L7f
            boolean r0 = r2.exists()
            if (r0 == 0) goto L7f
            java.lang.String r0 = com.tkay.china.common.a.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            java.lang.String r1 = r9.c
            r2.append(r1)
            java.lang.String r1 = ") is downloading, do nothing"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            android.util.Log.i(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "正在下载中： "
            r0.<init>(r1)
            java.lang.String r9 = r9.c
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.d(r9)
            return
        L7f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r8.k
            java.lang.String r2 = r9.n
            r0.remove(r2)
        L86:
            java.util.List<com.tkay.china.common.a.e> r0 = r8.j
            int r0 = r0.size()
            r2 = 0
        L8d:
            if (r2 >= r0) goto Ld0
            java.lang.String r3 = r9.n
            java.util.List<com.tkay.china.common.a.e> r4 = r8.j
            java.lang.Object r4 = r4.get(r2)
            com.tkay.china.common.a.e r4 = (com.tkay.china.common.a.e) r4
            java.lang.String r4 = r4.n
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 == 0) goto Lcd
            java.lang.String r0 = com.tkay.china.common.a.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            java.lang.String r1 = r9.c
            r2.append(r1)
            java.lang.String r1 = ") is waiting for downloading, do nothing"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            android.util.Log.i(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "等待下载： "
            r0.<init>(r1)
            java.lang.String r9 = r9.c
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.d(r9)
            return
        Lcd:
            int r2 = r2 + 1
            goto L8d
        Ld0:
            java.util.List<com.tkay.china.common.a.e> r0 = r8.j
            r0.add(r9)
            android.content.Context r0 = r8.i
            com.tkay.china.common.b.a r0 = com.tkay.china.common.b.a.a(r0)
            r0.c(r9)
            android.content.Context r0 = r8.i
            com.tkay.china.common.b.a r1 = com.tkay.china.common.b.a.a(r0)
            r3 = 0
            r5 = 100
            r7 = 1
            r2 = r9
            r1.a(r2, r3, r5, r7)
            return
    }

    @Override
    public final void a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            com.tkay.china.common.a.e$a r0 = com.tkay.china.common.a.e.a.f     // Catch: java.lang.Throwable -> L113
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L113
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Throwable -> L113
            java.lang.String r1 = "("
            if (r0 == 0) goto L48
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r0 = r5.q     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto L48
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r0 = r5.q     // Catch: java.lang.Throwable -> L113
            boolean r0 = r0.containsKey(r6)     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto L48
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r0 = r5.q     // Catch: java.lang.Throwable -> L113
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L113
            com.tkay.china.common.a.e r0 = (com.tkay.china.common.a.e) r0     // Catch: java.lang.Throwable -> L113
            java.lang.String r2 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L113
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L113
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L113
            java.lang.String r4 = r0.c     // Catch: java.lang.Throwable -> L113
            r3.append(r4)     // Catch: java.lang.Throwable -> L113
            java.lang.String r4 = ") onCleanNotification: download fail"
            r3.append(r4)     // Catch: java.lang.Throwable -> L113
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L113
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> L113
            android.content.Context r2 = r5.i     // Catch: java.lang.Throwable -> L113
            com.tkay.china.common.b.a r2 = com.tkay.china.common.b.a.a(r2)     // Catch: java.lang.Throwable -> L113
            r2.c(r0)     // Catch: java.lang.Throwable -> L113
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r0 = r5.q     // Catch: java.lang.Throwable -> L113
            r0.remove(r6)     // Catch: java.lang.Throwable -> L113
        L48:
            com.tkay.china.common.a.e$a r0 = com.tkay.china.common.a.e.a.e     // Catch: java.lang.Throwable -> L113
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L113
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto L8e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.n     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto L8e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.n     // Catch: java.lang.Throwable -> L113
            boolean r0 = r0.containsKey(r6)     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto L8e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.n     // Catch: java.lang.Throwable -> L113
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L113
            com.tkay.china.common.a.e r0 = (com.tkay.china.common.a.e) r0     // Catch: java.lang.Throwable -> L113
            java.lang.String r2 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L113
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L113
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L113
            java.lang.String r4 = r0.c     // Catch: java.lang.Throwable -> L113
            r3.append(r4)     // Catch: java.lang.Throwable -> L113
            java.lang.String r4 = ") onCleanNotification: download success"
            r3.append(r4)     // Catch: java.lang.Throwable -> L113
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L113
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> L113
            android.content.Context r2 = r5.i     // Catch: java.lang.Throwable -> L113
            com.tkay.china.common.b.a r2 = com.tkay.china.common.b.a.a(r2)     // Catch: java.lang.Throwable -> L113
            r2.c(r0)     // Catch: java.lang.Throwable -> L113
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.n     // Catch: java.lang.Throwable -> L113
            r0.remove(r6)     // Catch: java.lang.Throwable -> L113
        L8e:
            com.tkay.china.common.a.e$a r0 = com.tkay.china.common.a.e.a.g     // Catch: java.lang.Throwable -> L113
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L113
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto Ld4
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.p     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto Ld4
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.p     // Catch: java.lang.Throwable -> L113
            boolean r0 = r0.containsKey(r6)     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto Ld4
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.p     // Catch: java.lang.Throwable -> L113
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L113
            com.tkay.china.common.a.e r0 = (com.tkay.china.common.a.e) r0     // Catch: java.lang.Throwable -> L113
            java.lang.String r2 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L113
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L113
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L113
            java.lang.String r4 = r0.c     // Catch: java.lang.Throwable -> L113
            r3.append(r4)     // Catch: java.lang.Throwable -> L113
            java.lang.String r4 = ") onCleanNotification: install success"
            r3.append(r4)     // Catch: java.lang.Throwable -> L113
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L113
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> L113
            android.content.Context r2 = r5.i     // Catch: java.lang.Throwable -> L113
            com.tkay.china.common.b.a r2 = com.tkay.china.common.b.a.a(r2)     // Catch: java.lang.Throwable -> L113
            r2.c(r0)     // Catch: java.lang.Throwable -> L113
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.p     // Catch: java.lang.Throwable -> L113
            r0.remove(r6)     // Catch: java.lang.Throwable -> L113
        Ld4:
            com.tkay.china.common.a.e$a r0 = com.tkay.china.common.a.e.a.c     // Catch: java.lang.Throwable -> L113
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L113
            boolean r7 = r7.equals(r0)     // Catch: java.lang.Throwable -> L113
            if (r7 == 0) goto L112
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r7 = r5.l     // Catch: java.lang.Throwable -> L113
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Throwable -> L113
            com.tkay.china.common.a.e r7 = (com.tkay.china.common.a.e) r7     // Catch: java.lang.Throwable -> L113
            if (r7 == 0) goto L112
            com.tkay.china.common.service.ApkDownloadService$a r0 = r5.u     // Catch: java.lang.Throwable -> L113
            if (r0 == 0) goto Lf5
            com.tkay.china.common.service.ApkDownloadService$a r0 = r5.u     // Catch: java.lang.Throwable -> L113
            java.lang.String r2 = r7.n     // Catch: java.lang.Throwable -> L113
            r0.c(r2)     // Catch: java.lang.Throwable -> L113
        Lf5:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r5.l     // Catch: java.lang.Throwable -> L113
            r0.remove(r6)     // Catch: java.lang.Throwable -> L113
            java.lang.String r6 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L113
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L113
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L113
            java.lang.String r7 = r7.c     // Catch: java.lang.Throwable -> L113
            r0.append(r7)     // Catch: java.lang.Throwable -> L113
            java.lang.String r7 = ") onCleanNotification: stop download"
            r0.append(r7)     // Catch: java.lang.Throwable -> L113
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Throwable -> L113
            android.util.Log.i(r6, r7)     // Catch: java.lang.Throwable -> L113
        L112:
            return
        L113:
            r6 = move-exception
            r6.printStackTrace()
            return
    }

    @Override
    public final void a(java.lang.String r8, java.lang.String r9, int r10) {
            r7 = this;
            r0 = 0
            com.tkay.china.common.a.e$a r1 = com.tkay.china.common.a.e.a.f     // Catch: java.lang.Throwable -> L201
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L201
            boolean r1 = r9.equals(r1)     // Catch: java.lang.Throwable -> L201
            if (r1 == 0) goto L46
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r9 = r7.q     // Catch: java.lang.Throwable -> L201
            if (r9 == 0) goto L45
            java.util.Map<java.lang.String, com.tkay.china.common.a.e> r9 = r7.q     // Catch: java.lang.Throwable -> L201
            java.lang.Object r8 = r9.remove(r8)     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.a.e r8 = (com.tkay.china.common.a.e) r8     // Catch: java.lang.Throwable -> L201
            if (r8 == 0) goto L3c
            r8.e()     // Catch: java.lang.Throwable -> L201
            java.lang.String r9 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L201
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = "("
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = r8.c     // Catch: java.lang.Throwable -> L201
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = ") onClickNotification: download fail to retry"
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L201
            android.util.Log.i(r9, r10)     // Catch: java.lang.Throwable -> L201
            r7.d(r8)     // Catch: java.lang.Throwable -> L201
            return
        L3c:
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r8 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r8.a(r10)     // Catch: java.lang.Throwable -> L201
        L45:
            return
        L46:
            com.tkay.china.common.a.e$a r1 = com.tkay.china.common.a.e.a.e     // Catch: java.lang.Throwable -> L201
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L201
            boolean r1 = r9.equals(r1)     // Catch: java.lang.Throwable -> L201
            if (r1 == 0) goto L9a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r9 = r7.n     // Catch: java.lang.Throwable -> L201
            if (r9 == 0) goto L99
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r9 = r7.n     // Catch: java.lang.Throwable -> L201
            java.lang.Object r8 = r9.get(r8)     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.a.e r8 = (com.tkay.china.common.a.e) r8     // Catch: java.lang.Throwable -> L201
            if (r8 == 0) goto L90
            java.lang.String r9 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L201
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = "("
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = r8.c     // Catch: java.lang.Throwable -> L201
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = ") onClickNotification: start intall"
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L201
            android.util.Log.i(r9, r10)     // Catch: java.lang.Throwable -> L201
            android.content.Context r9 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r9 = com.tkay.china.common.b.a.a(r9)     // Catch: java.lang.Throwable -> L201
            r9.c(r8)     // Catch: java.lang.Throwable -> L201
            android.content.Context r9 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r9 = com.tkay.china.common.b.a.a(r9)     // Catch: java.lang.Throwable -> L201
            r9.a(r8)     // Catch: java.lang.Throwable -> L201
            r7.b(r8)     // Catch: java.lang.Throwable -> L201
            return
        L90:
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r8 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r8.a(r10)     // Catch: java.lang.Throwable -> L201
        L99:
            return
        L9a:
            com.tkay.china.common.a.e$a r1 = com.tkay.china.common.a.e.a.g     // Catch: java.lang.Throwable -> L201
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L201
            boolean r1 = r9.equals(r1)     // Catch: java.lang.Throwable -> L201
            if (r1 == 0) goto Le6
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r9 = r7.p     // Catch: java.lang.Throwable -> L201
            if (r9 == 0) goto Le5
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r9 = r7.p     // Catch: java.lang.Throwable -> L201
            java.lang.Object r8 = r9.get(r8)     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.a.e r8 = (com.tkay.china.common.a.e) r8     // Catch: java.lang.Throwable -> L201
            if (r8 == 0) goto Ldc
            java.lang.String r9 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L201
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = "("
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = r8.c     // Catch: java.lang.Throwable -> L201
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = ") onClickNotification: start open"
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L201
            android.util.Log.i(r9, r10)     // Catch: java.lang.Throwable -> L201
            android.content.Context r9 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r9 = com.tkay.china.common.b.a.a(r9)     // Catch: java.lang.Throwable -> L201
            r9.c(r8)     // Catch: java.lang.Throwable -> L201
            r9 = 1
            a(r8, r9)     // Catch: java.lang.Throwable -> L201
            return
        Ldc:
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r8 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r8.a(r10)     // Catch: java.lang.Throwable -> L201
        Le5:
            return
        Le6:
            com.tkay.china.common.a.e$a r1 = com.tkay.china.common.a.e.a.b     // Catch: java.lang.Throwable -> L201
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L201
            boolean r1 = r9.equals(r1)     // Catch: java.lang.Throwable -> L201
            r2 = 2
            if (r1 == 0) goto L13f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r9 = r7.k     // Catch: java.lang.Throwable -> L201
            java.lang.Object r8 = r9.get(r8)     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.a.e r8 = (com.tkay.china.common.a.e) r8     // Catch: java.lang.Throwable -> L201
            if (r8 == 0) goto L135
            boolean r9 = r8.d()     // Catch: java.lang.Throwable -> L201
            if (r9 == 0) goto L13e
            int r9 = r8.q     // Catch: java.lang.Throwable -> L201
            if (r9 != r2) goto L108
            return
        L108:
            java.lang.String r9 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L201
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = "("
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = r8.c     // Catch: java.lang.Throwable -> L201
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = ") onClickNotification: pause download"
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L201
            android.util.Log.i(r9, r10)     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.service.ApkDownloadService$a r9 = r7.u     // Catch: java.lang.Throwable -> L201
            if (r9 == 0) goto L12d
            com.tkay.china.common.service.ApkDownloadService$a r9 = r7.u     // Catch: java.lang.Throwable -> L201
            java.lang.String r10 = r8.n     // Catch: java.lang.Throwable -> L201
            r9.b(r10)     // Catch: java.lang.Throwable -> L201
        L12d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r9 = r7.l     // Catch: java.lang.Throwable -> L201
            java.lang.String r10 = r8.n     // Catch: java.lang.Throwable -> L201
            r9.put(r10, r8)     // Catch: java.lang.Throwable -> L201
            return
        L135:
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r8 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r8.a(r10)     // Catch: java.lang.Throwable -> L201
        L13e:
            return
        L13f:
            com.tkay.china.common.a.e$a r1 = com.tkay.china.common.a.e.a.c     // Catch: java.lang.Throwable -> L201
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L201
            boolean r1 = r9.equals(r1)     // Catch: java.lang.Throwable -> L201
            if (r1 == 0) goto L17d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r9 = r7.l     // Catch: java.lang.Throwable -> L201
            java.lang.Object r8 = r9.get(r8)     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.a.e r8 = (com.tkay.china.common.a.e) r8     // Catch: java.lang.Throwable -> L201
            if (r8 == 0) goto L173
            java.lang.String r9 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L201
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = "("
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = r8.c     // Catch: java.lang.Throwable -> L201
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r0 = ") onClickNotification: resume download"
            r10.append(r0)     // Catch: java.lang.Throwable -> L201
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L201
            android.util.Log.i(r9, r10)     // Catch: java.lang.Throwable -> L201
            r7.d(r8)     // Catch: java.lang.Throwable -> L201
            return
        L173:
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r8 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r8.a(r10)     // Catch: java.lang.Throwable -> L201
            return
        L17d:
            com.tkay.china.common.a.e$a r1 = com.tkay.china.common.a.e.a.a     // Catch: java.lang.Throwable -> L201
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L201
            boolean r9 = r9.equals(r1)     // Catch: java.lang.Throwable -> L201
            if (r9 == 0) goto L200
            java.util.List<com.tkay.china.common.a.e> r9 = r7.j     // Catch: java.lang.Throwable -> L201
            monitor-enter(r9)     // Catch: java.lang.Throwable -> L201
            java.util.List<com.tkay.china.common.a.e> r1 = r7.j     // Catch: java.lang.Throwable -> L1fd
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1fd
        L192:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L1fd
            if (r3 == 0) goto L1cd
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L1fd
            com.tkay.china.common.a.e r3 = (com.tkay.china.common.a.e) r3     // Catch: java.lang.Throwable -> L1fd
            java.lang.String r4 = r3.n     // Catch: java.lang.Throwable -> L1fd
            boolean r4 = r4.equals(r8)     // Catch: java.lang.Throwable -> L1fd
            if (r4 == 0) goto L192
            int r8 = r3.q     // Catch: java.lang.Throwable -> L1fd
            if (r8 != r2) goto L1ac
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L1fd
            return
        L1ac:
            java.lang.String r8 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L1fd
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fd
            java.lang.String r1 = "("
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1fd
            java.lang.String r1 = r3.c     // Catch: java.lang.Throwable -> L1fd
            r0.append(r1)     // Catch: java.lang.Throwable -> L1fd
            java.lang.String r1 = ") onClickNotification: pause download"
            r0.append(r1)     // Catch: java.lang.Throwable -> L1fd
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1fd
            android.util.Log.i(r8, r0)     // Catch: java.lang.Throwable -> L1fd
            java.util.List<com.tkay.china.common.a.e> r8 = r7.j     // Catch: java.lang.Throwable -> L1fd
            r8.remove(r3)     // Catch: java.lang.Throwable -> L1fd
            r1 = r3
            goto L1ce
        L1cd:
            r1 = r0
        L1ce:
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L1fd
            if (r1 == 0) goto L1f3
            r1.k()     // Catch: java.lang.Throwable -> L201
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r8 = r7.l     // Catch: java.lang.Throwable -> L201
            java.lang.String r9 = r1.n     // Catch: java.lang.Throwable -> L201
            r8.put(r9, r1)     // Catch: java.lang.Throwable -> L201
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r8 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r8.c(r1)     // Catch: java.lang.Throwable -> L201
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r0 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r2 = 0
            r4 = 100
            r6 = 1
            r0.a(r1, r2, r4, r6)     // Catch: java.lang.Throwable -> L201
            return
        L1f3:
            android.content.Context r8 = r7.i     // Catch: java.lang.Throwable -> L201
            com.tkay.china.common.b.a r8 = com.tkay.china.common.b.a.a(r8)     // Catch: java.lang.Throwable -> L201
            r8.a(r10)     // Catch: java.lang.Throwable -> L201
            return
        L1fd:
            r8 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L201
            throw r8     // Catch: java.lang.Throwable -> L201
        L200:
            return
        L201:
            r8 = move-exception
            r8.printStackTrace()
            return
    }

    public final boolean a(com.tkay.core.common.f.h r2) {
            r1 = this;
            java.lang.String r2 = com.tkay.core.common.l.g.a(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r1.k
            if (r0 == 0) goto L10
            boolean r2 = r0.containsKey(r2)
            if (r2 == 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    @Override
    public final boolean a(java.lang.String r2) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.tkay.china.common.c.b.a(r2)
            r0.append(r2)
            java.lang.String r2 = ".apk"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L25
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            return r2
        L25:
            r2 = 0
            return r2
    }

    public final int b(com.tkay.core.common.f.h r6) {
            r5 = this;
            java.lang.String r0 = com.tkay.core.common.l.g.a(r6)
            java.util.List<com.tkay.china.common.a.e> r1 = r5.j
            monitor-enter(r1)
            r2 = 0
            r3 = r2
        L9:
            java.util.List<com.tkay.china.common.a.e> r4 = r5.j     // Catch: java.lang.Throwable -> L63
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L63
            if (r3 >= r4) goto L28
            java.util.List<com.tkay.china.common.a.e> r4 = r5.j     // Catch: java.lang.Throwable -> L63
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L63
            com.tkay.china.common.a.e r4 = (com.tkay.china.common.a.e) r4     // Catch: java.lang.Throwable -> L63
            if (r4 == 0) goto L25
            java.lang.String r4 = r4.n     // Catch: java.lang.Throwable -> L63
            boolean r4 = r4.equals(r0)     // Catch: java.lang.Throwable -> L63
            if (r4 == 0) goto L25
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L63
            return r2
        L25:
            int r3 = r3 + 1
            goto L9
        L28:
            monitor-exit(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r1 = r5.k
            if (r1 == 0) goto L34
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L34
            return r2
        L34:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r1 = r5.l
            if (r1 == 0) goto L40
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L40
            r6 = 6
            return r6
        L40:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r1 = r5.n
            r2 = 4
            if (r1 == 0) goto L4c
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L4c
            return r2
        L4c:
            boolean r0 = r5.a(r0)
            if (r0 == 0) goto L53
            return r2
        L53:
            android.content.Context r0 = r5.i
            java.lang.String r6 = r6.B()
            boolean r6 = com.tkay.china.common.c.a.a(r0, r6)
            if (r6 == 0) goto L61
            r6 = 5
            return r6
        L61:
            r6 = 1
            return r6
        L63:
            r6 = move-exception
            monitor-exit(r1)
            throw r6
    }

    @Override
    public final void b() {
            r9 = this;
            java.util.List<com.tkay.china.common.a.e> r0 = r9.j
            monitor-enter(r0)
            java.util.List<com.tkay.china.common.a.e> r1 = r9.j     // Catch: java.lang.Throwable -> L70
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L70
            if (r1 != 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L70
            return
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r2 = r9.k     // Catch: java.lang.Throwable -> L70
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L70
            if (r2 <= 0) goto L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L70
            return
        L17:
            r3 = 1
            int r2 = 1 - r2
            int r1 = java.lang.Math.min(r2, r1)     // Catch: java.lang.Throwable -> L70
            r2 = 0
            r4 = r2
        L20:
            if (r4 >= r1) goto L6e
            java.util.List<com.tkay.china.common.a.e> r5 = r9.j     // Catch: java.lang.Throwable -> L70
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L70
            if (r5 <= 0) goto L6e
            java.util.List<com.tkay.china.common.a.e> r5 = r9.j     // Catch: java.lang.Throwable -> L70
            java.lang.Object r5 = r5.remove(r2)     // Catch: java.lang.Throwable -> L70
            com.tkay.china.common.a.e r5 = (com.tkay.china.common.a.e) r5     // Catch: java.lang.Throwable -> L70
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r6 = r9.k     // Catch: java.lang.Throwable -> L70
            java.lang.String r7 = r5.n     // Catch: java.lang.Throwable -> L70
            r6.put(r7, r5)     // Catch: java.lang.Throwable -> L70
            com.tkay.china.common.a$3 r6 = new com.tkay.china.common.a$3     // Catch: java.lang.Throwable -> L70
            r6.<init>(r9)     // Catch: java.lang.Throwable -> L70
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.a$a> r7 = r9.m     // Catch: java.lang.Throwable -> L70
            java.lang.String r8 = r5.n     // Catch: java.lang.Throwable -> L70
            r7.put(r8, r6)     // Catch: java.lang.Throwable -> L70
            com.tkay.china.common.service.ApkDownloadService$a r6 = r9.u     // Catch: java.lang.Throwable -> L6b
            if (r6 == 0) goto L51
            com.tkay.china.common.service.ApkDownloadService$a r6 = r9.u     // Catch: java.lang.Throwable -> L6b
            java.lang.String r5 = r5.n     // Catch: java.lang.Throwable -> L6b
            r6.a(r5)     // Catch: java.lang.Throwable -> L6b
            goto L6b
        L51:
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> L6b
            r6.<init>()     // Catch: java.lang.Throwable -> L6b
            android.content.Context r7 = r9.i     // Catch: java.lang.Throwable -> L6b
            java.lang.Class<com.tkay.china.common.service.ApkDownloadService> r8 = com.tkay.china.common.service.ApkDownloadService.class
            r6.setClass(r7, r8)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r7 = "extra_unique_id"
            java.lang.String r5 = r5.n     // Catch: java.lang.Throwable -> L6b
            r6.putExtra(r7, r5)     // Catch: java.lang.Throwable -> L6b
            android.content.Context r5 = r9.i     // Catch: java.lang.Throwable -> L6b
            android.content.ServiceConnection r7 = r9.w     // Catch: java.lang.Throwable -> L6b
            r5.bindService(r6, r7, r3)     // Catch: java.lang.Throwable -> L6b
        L6b:
            int r4 = r4 + 1
            goto L20
        L6e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L70
            return
        L70:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public final void b(com.tkay.china.common.a.e r13) {
            r12 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "action_offer_install_start"
            r0.setAction(r1)
            android.content.Context r1 = r12.i
            java.lang.String r1 = r1.getPackageName()
            r0.setPackage(r1)
            java.lang.String r1 = r13.f
            java.lang.String r2 = "receiver_extra_offer_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r13.m
            java.lang.String r2 = "receiver_extra_click_id"
            r0.putExtra(r2, r1)
            android.content.Context r1 = r12.i
            com.tkay.core.common.m r1 = com.tkay.core.common.m.a(r1)
            r1.a(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r12.o
            if (r0 != 0) goto L35
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r12.o = r0
        L35:
            java.lang.String r0 = r13.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L54
            java.lang.String r0 = f(r13)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L54
            android.content.Context r1 = r12.i
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            java.lang.String r0 = com.tkay.china.common.c.a.a(r1, r2)
            r13.e = r0
        L54:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r12.o
            java.lang.String r1 = r13.e
            r0.put(r1, r13)
            android.content.BroadcastReceiver r0 = r12.t     // Catch: java.lang.Throwable -> L82
            if (r0 == 0) goto L60
            goto L82
        L60:
            com.tkay.china.common.b r0 = new com.tkay.china.common.b     // Catch: java.lang.Throwable -> L82
            r0.<init>()     // Catch: java.lang.Throwable -> L82
            r12.t = r0     // Catch: java.lang.Throwable -> L82
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L82
            r0.<init>()     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = "android.intent.action.PACKAGE_REPLACED"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = "package"
            r0.addDataScheme(r1)     // Catch: java.lang.Throwable -> L82
            android.content.Context r1 = r12.i     // Catch: java.lang.Throwable -> L82
            android.content.BroadcastReceiver r2 = r12.t     // Catch: java.lang.Throwable -> L82
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L82
        L82:
            java.lang.String r0 = f(r13)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L117
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "install: "
            r1.<init>(r2)
            java.lang.String r2 = r13.c
            r1.append(r2)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lfe
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r3)     // Catch: java.lang.Throwable -> Lfe
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lfe
            r4 = 24
            java.lang.String r5 = "application/vnd.android.package-archive"
            if (r3 < r4) goto Ld6
            r0 = 1
            r2.addFlags(r0)     // Catch: java.lang.Throwable -> Lfe
            android.content.Context r0 = r12.i     // Catch: java.lang.Throwable -> Lfe
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            r3.<init>()     // Catch: java.lang.Throwable -> Lfe
            android.content.Context r4 = r12.i     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> Lfe
            r3.append(r4)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r4 = ".tkay.fileProvider"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lfe
            android.net.Uri r0 = android.support.v4.content.FileProvider.getUriForFile(r0, r3, r1)     // Catch: java.lang.Throwable -> Lfe
            r2.setDataAndType(r0, r5)     // Catch: java.lang.Throwable -> Lfe
            goto Le7
        Ld6:
            java.lang.String r3 = "file://"
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r0 = r3.concat(r0)     // Catch: java.lang.Throwable -> Lfe
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> Lfe
            r2.setDataAndType(r0, r5)     // Catch: java.lang.Throwable -> Lfe
        Le7:
            android.content.Context r0 = r12.i     // Catch: java.lang.Throwable -> Lfe
            r0.startActivity(r2)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r3 = r13.a     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r4 = r13.f     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r5 = r13.b     // Catch: java.lang.Throwable -> Lfe
            r6 = 4
            r7 = 0
            r8 = 0
            long r10 = r1.length()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.k.c.a(r3, r4, r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> Lfe
            return
        Lfe:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r2 = r13.a
            java.lang.String r3 = r13.f
            java.lang.String r4 = r13.b
            r5 = 10
            java.lang.String r6 = r0.getMessage()
            r7 = 0
            long r9 = r1.length()
            com.tkay.core.common.k.c.a(r2, r3, r4, r5, r6, r7, r9)
        L117:
            return
    }

    public final void b(java.lang.String r12) {
            r11 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r11.o     // Catch: java.lang.Throwable -> Lb7
            boolean r0 = r0.containsKey(r12)     // Catch: java.lang.Throwable -> Lb7
            if (r0 != 0) goto L9
            return
        L9:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r11.o     // Catch: java.lang.Throwable -> Lb7
            java.lang.Object r0 = r0.get(r12)     // Catch: java.lang.Throwable -> Lb7
            com.tkay.china.common.a.e r0 = (com.tkay.china.common.a.e) r0     // Catch: java.lang.Throwable -> Lb7
            if (r0 != 0) goto L14
            return
        L14:
            java.lang.String r1 = f(r0)     // Catch: java.lang.Throwable -> Lb7
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lb7
            if (r2 != 0) goto L26
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Lb7
            r2.<init>(r1)     // Catch: java.lang.Throwable -> Lb7
            r2.delete()     // Catch: java.lang.Throwable -> Lb7
        L26:
            r0.m()     // Catch: java.lang.Throwable -> Lb7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r1 = r11.o     // Catch: java.lang.Throwable -> Lb7
            r1.remove(r12)     // Catch: java.lang.Throwable -> Lb7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r12 = r11.p     // Catch: java.lang.Throwable -> Lb7
            if (r12 != 0) goto L39
            java.util.concurrent.ConcurrentHashMap r12 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> Lb7
            r12.<init>()     // Catch: java.lang.Throwable -> Lb7
            r11.p = r12     // Catch: java.lang.Throwable -> Lb7
        L39:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r12 = r11.p     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = r0.n     // Catch: java.lang.Throwable -> Lb7
            r12.put(r1, r0)     // Catch: java.lang.Throwable -> Lb7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r12 = r11.n     // Catch: java.lang.Throwable -> Lb7
            if (r12 == 0) goto L4b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r12 = r11.n     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = r0.n     // Catch: java.lang.Throwable -> Lb7
            r12.remove(r1)     // Catch: java.lang.Throwable -> Lb7
        L4b:
            android.content.Context r12 = r11.i     // Catch: java.lang.Throwable -> Lb7
            com.tkay.china.common.b.a r12 = com.tkay.china.common.b.a.a(r12)     // Catch: java.lang.Throwable -> Lb7
            r12.c(r0)     // Catch: java.lang.Throwable -> Lb7
            android.content.Context r12 = r11.i     // Catch: java.lang.Throwable -> Lb7
            com.tkay.china.common.b.a r1 = com.tkay.china.common.b.a.a(r12)     // Catch: java.lang.Throwable -> Lb7
            r3 = 0
            r5 = 100
            r7 = 1
            r2 = r0
            r1.a(r2, r3, r5, r7)     // Catch: java.lang.Throwable -> Lb7
            android.content.Intent r12 = new android.content.Intent     // Catch: java.lang.Throwable -> Lb7
            r12.<init>()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = "action_offer_install_successful"
            r12.setAction(r1)     // Catch: java.lang.Throwable -> Lb7
            android.content.Context r1 = r11.i     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> Lb7
            r12.setPackage(r1)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = "receiver_extra_offer_id"
            java.lang.String r2 = r0.f     // Catch: java.lang.Throwable -> Lb7
            r12.putExtra(r1, r2)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = "receiver_extra_click_id"
            java.lang.String r2 = r0.m     // Catch: java.lang.Throwable -> Lb7
            r12.putExtra(r1, r2)     // Catch: java.lang.Throwable -> Lb7
            android.content.Context r1 = r11.i     // Catch: java.lang.Throwable -> Lb7
            com.tkay.core.common.m r1 = com.tkay.core.common.m.a(r1)     // Catch: java.lang.Throwable -> Lb7
            r1.a(r12)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r2 = r0.a     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r3 = r0.f     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = r0.b     // Catch: java.lang.Throwable -> Lb7
            r5 = 5
            r6 = 0
            r7 = 0
            r9 = 0
            com.tkay.core.common.k.c.a(r2, r3, r4, r5, r6, r7, r9)     // Catch: java.lang.Throwable -> Lb7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r12 = r11.o     // Catch: java.lang.Throwable -> Lb7
            int r12 = r12.size()     // Catch: java.lang.Throwable -> Lb7
            if (r12 != 0) goto Lb2
            android.content.BroadcastReceiver r12 = r11.t     // Catch: java.lang.Throwable -> Lb2
            if (r12 == 0) goto Lb2
            android.content.Context r12 = r11.i     // Catch: java.lang.Throwable -> Lb2
            android.content.BroadcastReceiver r1 = r11.t     // Catch: java.lang.Throwable -> Lb2
            r12.unregisterReceiver(r1)     // Catch: java.lang.Throwable -> Lb2
            r12 = 0
            r11.t = r12     // Catch: java.lang.Throwable -> Lb2
        Lb2:
            r12 = 0
            a(r0, r12)     // Catch: java.lang.Throwable -> Lb7
            return
        Lb7:
            r12 = move-exception
            r12.printStackTrace()
            return
    }

    public final com.tkay.china.common.a.a.a c(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.a$a> r0 = r1.m
            java.lang.Object r2 = r0.get(r2)
            com.tkay.china.common.a.a$a r2 = (com.tkay.china.common.a.a.a) r2
            return r2
    }

    @Override
    public final void c(com.tkay.china.common.a.e r13) {
            r12 = this;
            java.lang.String r0 = f(r13)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lb
            return
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "install: "
            r1.<init>(r2)
            java.lang.String r2 = r13.c
            r1.append(r2)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L7d
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r3)     // Catch: java.lang.Throwable -> L7d
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L7d
            r4 = 24
            java.lang.String r5 = "application/vnd.android.package-archive"
            if (r3 < r4) goto L55
            r0 = 1
            r2.addFlags(r0)     // Catch: java.lang.Throwable -> L7d
            android.content.Context r0 = r12.i     // Catch: java.lang.Throwable -> L7d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            r3.<init>()     // Catch: java.lang.Throwable -> L7d
            android.content.Context r4 = r12.i     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L7d
            r3.append(r4)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = ".tkay.fileProvider"
            r3.append(r4)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L7d
            android.net.Uri r0 = android.support.v4.content.FileProvider.getUriForFile(r0, r3, r1)     // Catch: java.lang.Throwable -> L7d
            r2.setDataAndType(r0, r5)     // Catch: java.lang.Throwable -> L7d
            goto L66
        L55:
            java.lang.String r3 = "file://"
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r0 = r3.concat(r0)     // Catch: java.lang.Throwable -> L7d
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L7d
            r2.setDataAndType(r0, r5)     // Catch: java.lang.Throwable -> L7d
        L66:
            android.content.Context r0 = r12.i     // Catch: java.lang.Throwable -> L7d
            r0.startActivity(r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r13.a     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = r13.f     // Catch: java.lang.Throwable -> L7d
            java.lang.String r5 = r13.b     // Catch: java.lang.Throwable -> L7d
            r6 = 4
            r7 = 0
            r8 = 0
            long r10 = r1.length()     // Catch: java.lang.Throwable -> L7d
            com.tkay.core.common.k.c.a(r3, r4, r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> L7d
            return
        L7d:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r2 = r13.a
            java.lang.String r3 = r13.f
            java.lang.String r4 = r13.b
            r5 = 10
            java.lang.String r6 = r0.getMessage()
            r7 = 0
            long r9 = r1.length()
            com.tkay.core.common.k.c.a(r2, r3, r4, r5, r6, r7, r9)
            return
    }

    @Override
    public final boolean c() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L11
            android.content.Context r0 = r2.i
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            boolean r0 = r0.canRequestPackageInstalls()
            return r0
        L11:
            r0 = 1
            return r0
    }

    @Override
    public final void d() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "package:"
            r0.<init>(r1)
            android.content.Context r1 = r3.i
            java.lang.String r1 = r1.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.settings.MANAGE_UNKNOWN_APP_SOURCES"
            r1.<init>(r2, r0)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r0)
            android.content.Context r0 = r3.i
            r0.startActivity(r1)
            return
    }

    @Override
    public final void d(com.tkay.china.common.a.e r3) {
            r2 = this;
            java.lang.String r0 = r3.n     // Catch: java.lang.Throwable -> L30
            boolean r0 = r2.a(r0)     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto Lf
            r3.l()     // Catch: java.lang.Throwable -> L30
            r2.b(r3)     // Catch: java.lang.Throwable -> L30
            return
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r2.l     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = r3.n     // Catch: java.lang.Throwable -> L30
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L30
            com.tkay.china.common.a.e r0 = (com.tkay.china.common.a.e) r0     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L29
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r1 = r2.l     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = r3.n     // Catch: java.lang.Throwable -> L30
            r1.remove(r3)     // Catch: java.lang.Throwable -> L30
            r0.e()     // Catch: java.lang.Throwable -> L30
            r2.a(r0)     // Catch: java.lang.Throwable -> L30
            goto L2c
        L29:
            r2.a(r3)     // Catch: java.lang.Throwable -> L30
        L2c:
            r2.b()     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public final void e() {
            r13 = this;
            java.lang.String r0 = com.tkay.china.common.c.b.a()     // Catch: java.lang.Throwable -> L94
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto Lb
            return
        Lb:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L94
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L94
            java.io.File[] r0 = r1.listFiles()     // Catch: java.lang.Throwable -> L94
            if (r0 == 0) goto L1a
            int r1 = r0.length     // Catch: java.lang.Throwable -> L94
            if (r1 != 0) goto L1a
            return
        L1a:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L94
            r1.<init>()     // Catch: java.lang.Throwable -> L94
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L94
            long r4 = r13.s     // Catch: java.lang.Throwable -> L94
            int r6 = r0.length     // Catch: java.lang.Throwable -> L94
            r7 = 0
            r8 = r7
        L28:
            if (r8 >= r6) goto L64
            r9 = r0[r8]     // Catch: java.lang.Throwable -> L94
            java.lang.String r10 = r9.getName()     // Catch: java.lang.Throwable -> L94
            java.lang.String r11 = ".apk"
            boolean r10 = r10.endsWith(r11)     // Catch: java.lang.Throwable -> L94
            if (r10 == 0) goto L55
            android.content.Context r10 = r13.i     // Catch: java.lang.Throwable -> L94
            if (r10 == 0) goto L4e
            if (r9 != 0) goto L3f
            goto L4e
        L3f:
            java.lang.String r11 = com.tkay.china.common.c.a.a(r10, r9)     // Catch: java.lang.Throwable -> L94
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L94
            if (r12 != 0) goto L4e
            boolean r10 = com.tkay.china.common.c.a.a(r10, r11)     // Catch: java.lang.Throwable -> L94
            goto L4f
        L4e:
            r10 = r7
        L4f:
            if (r10 == 0) goto L55
            r1.add(r9)     // Catch: java.lang.Throwable -> L94
            goto L61
        L55:
            long r10 = r9.lastModified()     // Catch: java.lang.Throwable -> L94
            long r10 = r10 + r4
            int r10 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r10 >= 0) goto L61
            r1.add(r9)     // Catch: java.lang.Throwable -> L94
        L61:
            int r8 = r8 + 1
            goto L28
        L64:
            int r0 = r1.size()     // Catch: java.lang.Throwable -> L94
        L68:
            if (r7 >= r0) goto L93
            java.lang.String r2 = com.tkay.china.common.a.a     // Catch: java.lang.Throwable -> L94
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94
            java.lang.String r4 = "clean expired file -> "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L94
            java.lang.Object r4 = r1.get(r7)     // Catch: java.lang.Throwable -> L94
            java.io.File r4 = (java.io.File) r4     // Catch: java.lang.Throwable -> L94
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L94
            r3.append(r4)     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L94
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> L94
            java.lang.Object r2 = r1.get(r7)     // Catch: java.lang.Throwable -> L94
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Throwable -> L94
            r2.delete()     // Catch: java.lang.Throwable -> L94
            int r7 = r7 + 1
            goto L68
        L93:
            return
        L94:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public final java.util.Map<java.lang.String, com.tkay.china.common.a.e> f() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.china.common.a.e> r0 = r1.k
            return r0
    }
}
