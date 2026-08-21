package com.tkay.basead.a;

public class d {
    public static final java.lang.String a = null;
    private static volatile com.tkay.basead.a.d c;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.c.d> b;

    static {
            java.lang.Class<com.tkay.basead.a.d> r0 = com.tkay.basead.a.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.a.d.a = r0
            return
    }

    private d() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.tkay.basead.a.d a() {
            com.tkay.basead.a.d r0 = com.tkay.basead.a.d.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.a.d> r0 = com.tkay.basead.a.d.class
            monitor-enter(r0)
            com.tkay.basead.a.d r1 = com.tkay.basead.a.d.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.a.d r1 = new com.tkay.basead.a.d     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.a.d.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.basead.a.d r0 = com.tkay.basead.a.d.c
            return r0
    }

    public final com.tkay.basead.c.d a(int r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.c.d> r0 = r2.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            java.lang.Object r3 = r0.get(r3)
            com.tkay.basead.c.d r3 = (com.tkay.basead.c.d) r3
            return r3
    }

    public final void a(int r3, java.lang.String r4, com.tkay.basead.c.d r5) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.c.d> r0 = r2.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.put(r3, r5)
            return
    }
}
