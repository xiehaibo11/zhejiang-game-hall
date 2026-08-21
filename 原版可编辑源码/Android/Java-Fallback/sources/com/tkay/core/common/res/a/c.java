package com.tkay.core.common.res.a;

public class c {
    private static volatile com.tkay.core.common.res.a.c a;
    private final java.util.Map<java.lang.String, com.tkay.core.common.res.a.a> b;

    private c() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.tkay.core.common.res.a.c a() {
            com.tkay.core.common.res.a.c r0 = com.tkay.core.common.res.a.c.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.res.a.c> r0 = com.tkay.core.common.res.a.c.class
            monitor-enter(r0)
            com.tkay.core.common.res.a.c r1 = com.tkay.core.common.res.a.c.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.res.a.c r1 = new com.tkay.core.common.res.a.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.res.a.c.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.res.a.c r0 = com.tkay.core.common.res.a.c.a
            return r0
    }

    public final com.tkay.core.common.res.a.a a(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.res.a.a> r0 = r2.b
            java.lang.Object r0 = r0.get(r3)
            com.tkay.core.common.res.a.a r0 = (com.tkay.core.common.res.a.a) r0
            if (r0 == 0) goto Lb
            return r0
        Lb:
            com.tkay.core.common.res.a.a r0 = new com.tkay.core.common.res.a.a
            r0.<init>(r3)
            java.util.Map<java.lang.String, com.tkay.core.common.res.a.a> r1 = r2.b
            r1.put(r3, r0)
            return r0
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.res.a.a> r0 = r1.b
            if (r0 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lf
            java.util.Map<java.lang.String, com.tkay.core.common.res.a.a> r0 = r1.b
            r0.remove(r2)
        Lf:
            return
    }
}
