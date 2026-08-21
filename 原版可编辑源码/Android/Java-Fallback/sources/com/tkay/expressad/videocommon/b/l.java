package com.tkay.expressad.videocommon.b;

public class l {
    private static volatile com.tkay.expressad.videocommon.b.l a;
    private final com.tkay.core.common.res.a.c b;

    private l() {
            r1 = this;
            r1.<init>()
            com.tkay.core.common.res.a.c r0 = com.tkay.core.common.res.a.c.a()
            r1.b = r0
            return
    }

    public static com.tkay.expressad.videocommon.b.l a() {
            com.tkay.expressad.videocommon.b.l r0 = com.tkay.expressad.videocommon.b.l.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.videocommon.b.l> r0 = com.tkay.expressad.videocommon.b.l.class
            monitor-enter(r0)
            com.tkay.expressad.videocommon.b.l r1 = com.tkay.expressad.videocommon.b.l.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.videocommon.b.l r1 = new com.tkay.expressad.videocommon.b.l     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.videocommon.b.l.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.videocommon.b.l r0 = com.tkay.expressad.videocommon.b.l.a
            return r0
    }

    public static java.lang.String a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = ""
            return r2
        L9:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            r1 = 4
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            java.lang.String r2 = r0.b(r1, r2)
            return r2
    }

    public static com.tkay.core.common.a.i b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            com.tkay.core.common.a.j r0 = com.tkay.core.common.a.j.a()
            com.tkay.core.common.a.i r1 = r0.a(r1)
            return r1
    }
}
