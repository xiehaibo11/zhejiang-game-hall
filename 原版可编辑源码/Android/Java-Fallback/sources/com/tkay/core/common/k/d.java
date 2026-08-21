package com.tkay.core.common.k;

public class d extends com.tkay.core.common.o<com.tkay.core.common.f.g> {
    private static volatile com.tkay.core.common.k.d f;


    static {
            return
    }

    private d(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static android.content.Context a(com.tkay.core.common.k.d r0) {
            android.content.Context r0 = r0.e
            return r0
    }

    public static com.tkay.core.common.k.d a(android.content.Context r2) {
            com.tkay.core.common.k.d r0 = com.tkay.core.common.k.d.f
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.k.d> r0 = com.tkay.core.common.k.d.class
            monitor-enter(r0)
            com.tkay.core.common.k.d r1 = com.tkay.core.common.k.d.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.k.d r1 = new com.tkay.core.common.k.d     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.k.d.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.k.d r2 = com.tkay.core.common.k.d.f
            return r2
    }

    static android.content.Context b(com.tkay.core.common.k.d r0) {
            android.content.Context r0 = r0.e
            return r0
    }

    @Override
    protected final void a(java.util.List<com.tkay.core.common.f.g> r3) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.k.d$1 r1 = new com.tkay.core.common.k.d$1
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }
}
