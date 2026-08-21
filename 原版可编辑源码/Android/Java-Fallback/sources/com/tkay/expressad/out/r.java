package com.tkay.expressad.out;

public class r {
    private static com.tkay.expressad.e.b a;

    private r() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.e.b a() {
            com.tkay.expressad.e.b r0 = com.tkay.expressad.out.r.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.out.r> r0 = com.tkay.expressad.out.r.class
            monitor-enter(r0)
            com.tkay.expressad.e.b r1 = com.tkay.expressad.out.r.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.e.b r1 = new com.tkay.expressad.e.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.out.r.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.e.b r0 = com.tkay.expressad.out.r.a
            return r0
    }
}
