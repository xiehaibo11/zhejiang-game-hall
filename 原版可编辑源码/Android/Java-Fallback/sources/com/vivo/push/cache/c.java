package com.vivo.push.cache;

public abstract class c<T> {
    protected static final java.lang.Object a = null;
    protected java.util.List<T> b;
    protected android.content.Context c;
    private byte[] d;
    private byte[] e;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.vivo.push.cache.c.a = r0
            return
    }

    protected c(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            android.content.Context r2 = com.vivo.push.util.ContextDelegate.getContext(r2)
            r1.c = r2
            com.vivo.push.util.w r2 = com.vivo.push.util.w.b()
            android.content.Context r0 = r1.c
            r2.a(r0)
            byte[] r0 = r2.c()
            r1.d = r0
            byte[] r2 = r2.d()
            r1.e = r2
            r1.c()
            return
    }

    private java.lang.String b() {
            r3 = this;
            android.content.Context r0 = r3.c
            com.vivo.push.util.y r0 = com.vivo.push.util.y.b(r0)
            java.lang.String r1 = r3.a()
            r2 = 0
            java.lang.String r0 = r0.a(r1, r2)
            return r0
    }

    private void c(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = "ClientManager init "
            java.lang.String r2 = "CacheSettings"
            if (r0 == 0) goto L23
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>(r1)
            java.lang.String r0 = r4.a()
            r5.append(r0)
            java.lang.String r0 = " strApps empty."
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.vivo.push.util.p.d(r2, r5)
            return
        L23:
            int r0 = r5.length()
            r3 = 10000(0x2710, float:1.4013E-41)
            if (r0 <= r3) goto L49
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r0 = "sync "
            r5.<init>(r0)
            java.lang.String r0 = r4.a()
            r5.append(r0)
            java.lang.String r0 = " strApps lenght too large"
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.vivo.push.util.p.d(r2, r5)
            r4.d()
            return
        L49:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L74
            r0.<init>(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = r4.a()     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = " strApps : "
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            r0.append(r5)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L74
            com.vivo.push.util.p.d(r2, r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r5 = r4.b(r5)     // Catch: java.lang.Exception -> L74
            java.util.List r5 = r4.a(r5)     // Catch: java.lang.Exception -> L74
            if (r5 == 0) goto L73
            java.util.List<T> r0 = r4.b     // Catch: java.lang.Exception -> L74
            r0.addAll(r5)     // Catch: java.lang.Exception -> L74
        L73:
            return
        L74:
            r5 = move-exception
            r4.d()
            java.lang.String r5 = com.vivo.push.util.p.a(r5)
            com.vivo.push.util.p.d(r2, r5)
            return
    }

    private void d(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.c
            com.vivo.push.util.y r0 = com.vivo.push.util.y.b(r0)
            java.lang.String r1 = r2.a()
            r0.b(r1, r3)
            return
    }

    protected abstract java.lang.String a();

    protected abstract java.util.List<T> a(java.lang.String r1);

    abstract java.lang.String b(java.lang.String r1);

    public final void c() {
            r2 = this;
            java.lang.Object r0 = com.vivo.push.cache.c.a
            monitor-enter(r0)
            java.lang.String r1 = r2.a()     // Catch: java.lang.Throwable -> L18
            com.vivo.push.util.g.a(r1)     // Catch: java.lang.Throwable -> L18
            java.util.List<T> r1 = r2.b     // Catch: java.lang.Throwable -> L18
            r1.clear()     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = r2.b()     // Catch: java.lang.Throwable -> L18
            r2.c(r1)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r1
    }

    public final void d() {
            r4 = this;
            java.lang.Object r0 = com.vivo.push.cache.c.a
            monitor-enter(r0)
            java.util.List<T> r1 = r4.b     // Catch: java.lang.Throwable -> L2b
            r1.clear()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = ""
            r4.d(r1)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = "CacheSettings"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = "clear "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = r4.a()     // Catch: java.lang.Throwable -> L2b
            r2.append(r3)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = " strApps"
            r2.append(r3)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2b
            com.vivo.push.util.p.d(r1, r2)     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return
        L2b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r1
    }

    protected final byte[] e() {
            r2 = this;
            byte[] r0 = r2.d
            if (r0 == 0) goto L8
            int r1 = r0.length
            if (r1 <= 0) goto L8
            return r0
        L8:
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            byte[] r0 = r0.c()
            return r0
    }

    protected final byte[] f() {
            r2 = this;
            byte[] r0 = r2.e
            if (r0 == 0) goto L8
            int r1 = r0.length
            if (r1 <= 0) goto L8
            return r0
        L8:
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            byte[] r0 = r0.d()
            return r0
    }
}
