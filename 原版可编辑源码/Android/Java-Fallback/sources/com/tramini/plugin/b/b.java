package com.tramini.plugin.b;

public class b {
    public static final java.lang.String a = null;
    private static volatile com.tramini.plugin.b.b b;
    private static com.tramini.plugin.b.a c;
    private android.content.Context d;
    private boolean e;
    private long f;


    static {
            java.lang.Class<com.tramini.plugin.b.b> r0 = com.tramini.plugin.b.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.b.b.a = r0
            r0 = 0
            com.tramini.plugin.b.b.c = r0
            return
    }

    private b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.f = r0
            r2.d = r3
            r3 = 0
            r2.e = r3
            return
    }

    static long a(com.tramini.plugin.b.b r0, long r1) {
            r0.f = r1
            return r1
    }

    static android.content.Context a(com.tramini.plugin.b.b r0) {
            android.content.Context r0 = r0.d
            return r0
    }

    static com.tramini.plugin.b.a a(com.tramini.plugin.b.a r0) {
            com.tramini.plugin.b.b.c = r0
            return r0
    }

    public static com.tramini.plugin.b.b a(android.content.Context r2) {
            com.tramini.plugin.b.b r0 = com.tramini.plugin.b.b.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tramini.plugin.b.b> r0 = com.tramini.plugin.b.b.class
            monitor-enter(r0)
            com.tramini.plugin.b.b r1 = com.tramini.plugin.b.b.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tramini.plugin.b.b r1 = new com.tramini.plugin.b.b     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tramini.plugin.b.b.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tramini.plugin.b.b r2 = com.tramini.plugin.b.b.b
            return r2
    }

    private void a(com.tramini.plugin.a.d.b r3) {
            r2 = this;
            boolean r0 = r2.e
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = com.tramini.plugin.a.g.c.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Le
            return
        Le:
            com.tramini.plugin.a.d.d r0 = new com.tramini.plugin.a.d.d
            r0.<init>()
            r1 = 0
            r0.a(r1, r3)
            return
    }

    static boolean a(com.tramini.plugin.b.b r0, boolean r1) {
            r0.e = r1
            return r1
    }

    static long b(com.tramini.plugin.b.b r2) {
            long r0 = r2.f
            return r0
    }

    public static com.tramini.plugin.b.a b(android.content.Context r3) {
            java.lang.String r0 = "tramini"
            java.lang.String r1 = "P_SY"
            java.lang.String r2 = ""
            java.lang.String r3 = com.tramini.plugin.a.g.i.b(r3, r0, r1, r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L19
            java.lang.String r3 = com.tramini.plugin.a.g.c.a(r3)
            com.tramini.plugin.b.a r3 = com.tramini.plugin.b.a.a(r3)
            return r3
        L19:
            r3 = 0
            return r3
    }

    public final void a(com.tramini.plugin.a.d.c r3) {
            r2 = this;
            com.tramini.plugin.b.b$1 r0 = new com.tramini.plugin.b.b$1
            r0.<init>(r2, r3)
            boolean r3 = r2.e
            if (r3 != 0) goto L1a
            java.lang.String r3 = com.tramini.plugin.a.g.c.a
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L1a
            com.tramini.plugin.a.d.d r3 = new com.tramini.plugin.a.d.d
            r3.<init>()
            r1 = 0
            r3.a(r1, r0)
        L1a:
            return
    }

    public final boolean a() {
            r4 = this;
            long r0 = r4.f
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L1c
            android.content.Context r0 = r4.d
            java.lang.Long r1 = java.lang.Long.valueOf(r2)
            java.lang.String r2 = "tramini"
            java.lang.String r3 = "P_UD_TE"
            java.lang.Long r0 = com.tramini.plugin.a.g.i.a(r0, r2, r3, r1)
            long r0 = r0.longValue()
            r4.f = r0
        L1c:
            com.tramini.plugin.b.a r0 = r4.b()
            if (r0 == 0) goto L33
            long r0 = r0.c()
            long r2 = r4.f
            long r2 = r2 + r0
            long r0 = java.lang.System.currentTimeMillis()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L33
            r0 = 0
            return r0
        L33:
            r0 = 1
            return r0
    }

    public final synchronized com.tramini.plugin.b.a b() {
            r2 = this;
            monitor-enter(r2)
            com.tramini.plugin.b.a r0 = com.tramini.plugin.b.b.c     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L24
            android.content.Context r0 = r2.d     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L28
            if (r0 != 0) goto L13
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L28
            android.content.Context r0 = r0.b()     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L28
            r2.d = r0     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L28
        L13:
            android.content.Context r0 = r2.d     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L28
            com.tramini.plugin.b.a r0 = b(r0)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L28
            com.tramini.plugin.b.b.c = r0     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L28
        L1b:
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L28
            com.tramini.plugin.b.a r1 = com.tramini.plugin.b.b.c     // Catch: java.lang.Throwable -> L28
            r0.a(r1)     // Catch: java.lang.Throwable -> L28
        L24:
            com.tramini.plugin.b.a r0 = com.tramini.plugin.b.b.c     // Catch: java.lang.Throwable -> L28
            monitor-exit(r2)
            return r0
        L28:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
