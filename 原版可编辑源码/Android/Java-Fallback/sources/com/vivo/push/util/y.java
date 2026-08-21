package com.vivo.push.util;

public final class y implements com.vivo.push.util.d {
    private static final java.util.HashMap<java.lang.String, java.lang.Integer> a = null;
    private static final java.util.HashMap<java.lang.String, java.lang.Long> b = null;
    private static final java.util.HashMap<java.lang.String, java.lang.String> c = null;
    private static com.vivo.push.util.y d;
    private android.content.Context e;
    private com.vivo.push.util.d f;
    private boolean g;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.vivo.push.util.y.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.vivo.push.util.y.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.vivo.push.util.y.c = r0
            return
    }

    private y(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.e = r2
            boolean r2 = r1.a(r2)
            r1.g = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "init status is "
            r2.<init>(r0)
            boolean r0 = r1.g
            r2.append(r0)
            java.lang.String r0 = ";  curCache is "
            r2.append(r0)
            com.vivo.push.util.d r0 = r1.f
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "SystemCache"
            com.vivo.push.util.p.d(r0, r2)
            return
    }

    public static synchronized com.vivo.push.util.y b(android.content.Context r2) {
            java.lang.Class<com.vivo.push.util.y> r0 = com.vivo.push.util.y.class
            monitor-enter(r0)
            com.vivo.push.util.y r1 = com.vivo.push.util.y.d     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.vivo.push.util.y r1 = new com.vivo.push.util.y     // Catch: java.lang.Throwable -> L16
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            com.vivo.push.util.y.d = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.vivo.push.util.y r2 = com.vivo.push.util.y.d     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    @Override
    public final java.lang.String a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.vivo.push.util.y.c
            java.lang.Object r0 = r0.get(r3)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 != 0) goto L14
            com.vivo.push.util.d r1 = r2.f
            if (r1 != 0) goto Lf
            goto L14
        Lf:
            java.lang.String r3 = r1.a(r3, r4)
            return r3
        L14:
            return r0
    }

    public final void a() {
            r2 = this;
            com.vivo.push.util.x r0 = new com.vivo.push.util.x
            r0.<init>()
            android.content.Context r1 = r2.e
            boolean r1 = r0.a(r1)
            if (r1 != 0) goto Le
            return
        Le:
            r0.a()
            java.lang.String r0 = "SystemCache"
            java.lang.String r1 = "sp cache is cleared"
            com.vivo.push.util.p.d(r0, r1)
            return
    }

    @Override
    public final boolean a(android.content.Context r2) {
            r1 = this;
            com.vivo.push.util.v r0 = new com.vivo.push.util.v
            r0.<init>()
            r1.f = r0
            boolean r0 = r0.a(r2)
            if (r0 != 0) goto L18
            com.vivo.push.util.x r0 = new com.vivo.push.util.x
            r0.<init>()
            r1.f = r0
            boolean r0 = r0.a(r2)
        L18:
            if (r0 != 0) goto L1d
            r2 = 0
            r1.f = r2
        L1d:
            return r0
    }

    @Override
    public final void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.vivo.push.util.y.c
            r0.put(r2, r3)
            boolean r0 = r1.g
            if (r0 == 0) goto L11
            com.vivo.push.util.d r0 = r1.f
            if (r0 != 0) goto Le
            goto L11
        Le:
            r0.b(r2, r3)
        L11:
            return
    }
}
