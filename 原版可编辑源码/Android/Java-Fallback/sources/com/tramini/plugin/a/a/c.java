package com.tramini.plugin.a.a;

public class c {
    private static com.tramini.plugin.a.a.c b;
    boolean a;
    private android.content.Context c;
    private android.os.Handler d;
    private android.content.BroadcastReceiver e;
    private android.content.BroadcastReceiver f;
    private java.lang.String[] g;







    public c() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.d = r0
            return
    }

    static android.content.BroadcastReceiver a(com.tramini.plugin.a.a.c r0, android.content.BroadcastReceiver r1) {
            r0.e = r1
            return r1
    }

    static android.content.Context a(com.tramini.plugin.a.a.c r0) {
            android.content.Context r0 = r0.c
            return r0
    }

    public static com.tramini.plugin.a.a.c a() {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.b
            if (r0 != 0) goto L13
            java.lang.Class<com.tramini.plugin.a.a.c> r0 = com.tramini.plugin.a.a.c.class
            monitor-enter(r0)
            com.tramini.plugin.a.a.c r1 = new com.tramini.plugin.a.a.c     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.tramini.plugin.a.a.c.b = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L13:
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.b
            return r0
    }

    static void a(com.tramini.plugin.a.a.c r1, android.content.Context r2) {
            com.tramini.plugin.b.b r0 = com.tramini.plugin.b.b.a(r2)
            com.tramini.plugin.b.a r0 = r0.b()
            r1.b(r0)
            r1.b(r2)
            return
    }

    static void a(com.tramini.plugin.a.a.c r0, com.tramini.plugin.b.a r1) {
            r0.b(r1)
            return
    }

    public static void a(java.lang.Runnable r1) {
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a()
            r0.a(r1)
            return
    }

    static android.content.BroadcastReceiver b(com.tramini.plugin.a.a.c r0) {
            android.content.BroadcastReceiver r0 = r0.e
            return r0
    }

    private void b(com.tramini.plugin.b.a r2) {
            r1 = this;
            com.tramini.plugin.a.a.c$4 r0 = new com.tramini.plugin.a.a.c$4
            r0.<init>(r1, r2)
            r1.b(r0)
            return
    }

    private void b(java.lang.Runnable r3) {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Le
            r3.run()
            return
        Le:
            android.os.Handler r0 = r2.d
            r0.post(r3)
            return
    }

    private static void b(java.lang.Runnable r1, long r2) {
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a()
            r0.a(r1, r2)
            return
    }

    private static void c() {
            return
    }

    private void c(android.content.Context r1) {
            r0 = this;
            r0.c = r1
            return
    }

    private void c(java.lang.Runnable r2) {
            r1 = this;
            android.os.Handler r0 = r1.d
            r0.removeCallbacks(r2)
            return
    }

    private void d(android.content.Context r2) {
            r1 = this;
            com.tramini.plugin.b.b r0 = com.tramini.plugin.b.b.a(r2)
            com.tramini.plugin.b.a r0 = r0.b()
            r1.b(r0)
            r1.b(r2)
            return
    }

    public final void a(android.content.Context r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            android.content.Context r0 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L61
            r2.c = r0     // Catch: java.lang.Throwable -> L61
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a()     // Catch: java.lang.Throwable -> L61
            com.tramini.plugin.a.a.c$1 r1 = new com.tramini.plugin.a.a.c$1     // Catch: java.lang.Throwable -> L61
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L61
            r0.a(r1)     // Catch: java.lang.Throwable -> L61
            boolean r3 = com.tramini.plugin.a.g.h.a(r3)     // Catch: java.lang.Throwable -> L61
            if (r3 == 0) goto L1c
            return
        L1c:
            android.content.BroadcastReceiver r3 = r2.f     // Catch: java.lang.Throwable -> L2e
            if (r3 == 0) goto L2e
            android.content.Context r3 = r2.c     // Catch: java.lang.Throwable -> L2e
            com.tramini.plugin.a.a.b r3 = com.tramini.plugin.a.a.b.a(r3)     // Catch: java.lang.Throwable -> L2e
            android.content.BroadcastReceiver r0 = r2.f     // Catch: java.lang.Throwable -> L2e
            r3.a(r0)     // Catch: java.lang.Throwable -> L2e
            r3 = 0
            r2.f = r3     // Catch: java.lang.Throwable -> L2e
        L2e:
            com.tramini.plugin.a.c r3 = new com.tramini.plugin.a.c     // Catch: java.lang.Throwable -> L61
            r3.<init>()     // Catch: java.lang.Throwable -> L61
            r2.f = r3     // Catch: java.lang.Throwable -> L61
            android.content.IntentFilter r3 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L61
            r3.<init>()     // Catch: java.lang.Throwable -> L61
            android.content.Context r0 = r2.c     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> L61
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61
            r1.<init>()     // Catch: java.lang.Throwable -> L61
            r1.append(r0)     // Catch: java.lang.Throwable -> L61
            r1.append(r0)     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = com.tramini.plugin.a.g.f.a(r0)     // Catch: java.lang.Throwable -> L61
            r3.addAction(r0)     // Catch: java.lang.Throwable -> L61
            android.content.Context r0 = r2.c     // Catch: java.lang.Throwable -> L61
            com.tramini.plugin.a.a.b r0 = com.tramini.plugin.a.a.b.a(r0)     // Catch: java.lang.Throwable -> L61
            android.content.BroadcastReceiver r1 = r2.f     // Catch: java.lang.Throwable -> L61
            r0.a(r1, r3)     // Catch: java.lang.Throwable -> L61
        L61:
            return
    }

    public final synchronized void a(com.tramini.plugin.b.a r5) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.a     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L7
            monitor-exit(r4)
            return
        L7:
            if (r5 == 0) goto L22
            r0 = 1
            r4.a = r0     // Catch: java.lang.Throwable -> L24
            com.tramini.plugin.a.g.b r0 = com.tramini.plugin.a.g.b.a()     // Catch: java.lang.Throwable -> L24
            r0.a(r5)     // Catch: java.lang.Throwable -> L24
            com.tramini.plugin.a.a.c r0 = a()     // Catch: java.lang.Throwable -> L24
            com.tramini.plugin.a.a.c$2 r1 = new com.tramini.plugin.a.a.c$2     // Catch: java.lang.Throwable -> L24
            r1.<init>(r4, r5)     // Catch: java.lang.Throwable -> L24
            r2 = 120000(0x1d4c0, double:5.9288E-319)
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L24
        L22:
            monitor-exit(r4)
            return
        L24:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final void a(java.lang.Runnable r2, long r3) {
            r1 = this;
            android.os.Handler r0 = r1.d
            r0.postDelayed(r2, r3)
            return
    }

    public final void a(java.lang.String[] r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final boolean a(java.lang.String r6) {
            r5 = this;
            java.lang.String[] r0 = r5.g
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r2 = r0.length
            r3 = r1
        L8:
            if (r3 >= r2) goto L17
            r4 = r0[r3]
            boolean r4 = android.text.TextUtils.equals(r4, r6)
            if (r4 == 0) goto L14
            r6 = 1
            return r6
        L14:
            int r3 = r3 + 1
            goto L8
        L17:
            return r1
    }

    public final android.content.Context b() {
            r1 = this;
            android.content.Context r0 = r1.c
            return r0
    }

    public final void b(android.content.Context r3) {
            r2 = this;
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a()
            com.tramini.plugin.a.a.c$3 r1 = new com.tramini.plugin.a.a.c$3
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final void b(java.lang.String r3) {
            r2 = this;
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a()
            com.tramini.plugin.a.a.c$5 r1 = new com.tramini.plugin.a.a.c$5
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final void c(java.lang.String r3) {
            r2 = this;
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a()
            com.tramini.plugin.a.a.c$6 r1 = new com.tramini.plugin.a.a.c$6
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }
}
