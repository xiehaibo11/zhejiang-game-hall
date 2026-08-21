package com.vivo.push.c;

public class d {
    private static volatile com.vivo.push.c.d d;
    private com.vivo.push.c.b a;
    private com.vivo.push.c.c b;
    private android.content.Context c;

    private d(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.vivo.push.c.b r0 = r1.a
            if (r0 != 0) goto L1a
            android.content.Context r2 = r2.getApplicationContext()
            android.content.Context r2 = com.vivo.push.util.ContextDelegate.getContext(r2)
            r1.c = r2
            com.vivo.push.c.e r2 = new com.vivo.push.c.e
            android.content.Context r0 = r1.c
            r2.<init>(r0)
            r1.a = r2
        L1a:
            com.vivo.push.c.c r2 = r1.b
            if (r2 != 0) goto L25
            com.vivo.push.c.a r2 = new com.vivo.push.c.a
            r2.<init>()
            r1.b = r2
        L25:
            return
    }

    public static com.vivo.push.c.d a(android.content.Context r2) {
            com.vivo.push.c.d r0 = com.vivo.push.c.d.d
            if (r0 != 0) goto L19
            java.lang.Class<com.vivo.push.c.d> r0 = com.vivo.push.c.d.class
            monitor-enter(r0)
            com.vivo.push.c.d r1 = com.vivo.push.c.d.d     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L14
            if (r2 == 0) goto L14
            com.vivo.push.c.d r1 = new com.vivo.push.c.d     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            com.vivo.push.c.d.d = r1     // Catch: java.lang.Throwable -> L16
        L14:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            goto L19
        L16:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r2
        L19:
            com.vivo.push.c.d r2 = com.vivo.push.c.d.d
            return r2
    }

    public final com.vivo.push.c.b a() {
            r1 = this;
            com.vivo.push.c.b r0 = r1.a
            return r0
    }
}
