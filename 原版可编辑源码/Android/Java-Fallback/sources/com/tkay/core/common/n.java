package com.tkay.core.common;

public class n {
    private static volatile com.tkay.core.common.n c;
    com.tkay.core.common.c.h a;
    private final java.lang.String b;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> d;


    public n() {
            r4 = this;
            r4.<init>()
            java.lang.Class r0 = r4.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r4.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 3
            r0.<init>(r1)
            r4.d = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)
            com.tkay.core.common.c.h r0 = com.tkay.core.common.c.h.a(r0)
            r4.a = r0
            java.util.List r0 = r0.d()
            if (r0 == 0) goto L49
            java.util.Iterator r0 = r0.iterator()
        L31:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L49
            java.lang.Object r1 = r0.next()
            com.tkay.core.common.f.o r1 = (com.tkay.core.common.f.o) r1
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r2 = r4.d
            java.lang.String r1 = r1.a()
            java.lang.String r3 = "1"
            r2.put(r1, r3)
            goto L31
        L49:
            return
    }

    public static com.tkay.core.common.n a() {
            com.tkay.core.common.n r0 = com.tkay.core.common.n.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.n> r0 = com.tkay.core.common.n.class
            monitor-enter(r0)
            com.tkay.core.common.n r1 = com.tkay.core.common.n.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.n r1 = new com.tkay.core.common.n     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.n.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.n r0 = com.tkay.core.common.n.c
            return r0
    }

    public static int b() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "SPU_INSPECT_INFO_OFFSET"
            r3 = 0
            int r0 = com.tkay.core.common.l.p.b(r0, r1, r2, r3)
            return r0
    }

    public final void a(java.lang.String r8) {
            r7 = this;
            java.lang.String r8 = com.tkay.core.common.l.c.c(r8)
            java.util.Map r8 = com.tkay.core.common.l.h.c(r8)
            int r0 = r8.size()
            java.lang.String r1 = "SPU_INSPECT_INFO_OFFSET"
            java.lang.String r2 = "tkay_sdk"
            if (r0 != 0) goto L1f
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            android.content.Context r8 = r8.f()
            r0 = 0
            com.tkay.core.common.l.p.a(r8, r2, r1, r0)
            return
        L1f:
            java.util.Set r0 = r8.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L27:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L62
            java.lang.Object r3 = r0.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getValue()     // Catch: java.lang.Throwable -> L27
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L27
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L27
            android.content.Context r5 = r5.f()     // Catch: java.lang.Throwable -> L27
            boolean r4 = com.tkay.core.common.l.h.a(r5, r4)     // Catch: java.lang.Throwable -> L27
            if (r4 == 0) goto L27
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r4 = r7.d     // Catch: java.lang.Throwable -> L27
            java.lang.Object r5 = r3.getKey()     // Catch: java.lang.Throwable -> L27
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L27
            java.lang.String r6 = "1"
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L27
            com.tkay.core.common.c.h r4 = r7.a     // Catch: java.lang.Throwable -> L27
            java.lang.Object r3 = r3.getKey()     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L27
            r4.a(r3)     // Catch: java.lang.Throwable -> L27
            goto L27
        L62:
            int r0 = b()
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
            int r8 = r8.size()
            int r0 = r0 + r8
            com.tkay.core.common.l.p.a(r3, r2, r1, r0)
            com.tkay.core.common.l.b.a r8 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.n$1 r0 = new com.tkay.core.common.n$1
            r0.<init>(r7)
            r8.a(r0)
            return
    }

    public final org.json.JSONArray c() {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r4.d
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
        Lf:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L29
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r2 = r2.getKey()     // Catch: java.lang.Throwable -> Lf
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Lf
            long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Throwable -> Lf
            r1.put(r2)     // Catch: java.lang.Throwable -> Lf
            goto Lf
        L29:
            return r1
    }
}
