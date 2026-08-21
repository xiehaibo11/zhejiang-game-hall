package com.tkay.core.common.d;

public class c extends com.tkay.core.common.d.a {
    private static volatile com.tkay.core.common.d.c c;

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.b = r1
            return
    }

    public static com.tkay.core.common.d.c a(android.content.Context r2) {
            com.tkay.core.common.d.c r0 = com.tkay.core.common.d.c.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.d.c> r0 = com.tkay.core.common.d.c.class
            monitor-enter(r0)
            com.tkay.core.common.d.c r1 = com.tkay.core.common.d.c.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.d.c r1 = new com.tkay.core.common.d.c     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.d.c.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.d.c r2 = com.tkay.core.common.d.c.c
            return r2
    }
}
