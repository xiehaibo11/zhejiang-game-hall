package com.tkay.core.common;

public class u {
    private static volatile com.tkay.core.common.u c;
    java.util.concurrent.atomic.AtomicInteger a;
    private java.lang.String b;




    private u() {
            r2 = this;
            r2.<init>()
            java.lang.Class<com.tkay.core.common.u> r0 = com.tkay.core.common.u.class
            java.lang.String r0 = r0.getSimpleName()
            r2.b = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public static com.tkay.core.common.u a() {
            com.tkay.core.common.u r0 = com.tkay.core.common.u.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.u> r0 = com.tkay.core.common.u.class
            monitor-enter(r0)
            com.tkay.core.common.u r1 = com.tkay.core.common.u.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.u r1 = new com.tkay.core.common.u     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.u.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.u r0 = com.tkay.core.common.u.c
            return r0
    }

    static java.lang.String a(com.tkay.core.common.u r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    public final void a(int r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r9 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.u$1 r8 = new com.tkay.core.common.u$1
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.a(r8)
            return
    }

    public final synchronized void b() {
            r6 = this;
            monitor-enter(r6)
            java.util.concurrent.atomic.AtomicInteger r0 = r6.a     // Catch: java.lang.Throwable -> Lb1
            int r0 = r0.get()     // Catch: java.lang.Throwable -> Lb1
            if (r0 > 0) goto Laf
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lb1
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.c.g r0 = com.tkay.core.common.c.g.a(r0)     // Catch: java.lang.Throwable -> Lb1
            java.util.List r0 = r0.c()     // Catch: java.lang.Throwable -> Lb1
            if (r0 == 0) goto Laf
            int r1 = r0.size()     // Catch: java.lang.Throwable -> Lb1
            if (r1 <= 0) goto Laf
            java.util.concurrent.atomic.AtomicInteger r1 = r6.a     // Catch: java.lang.Throwable -> Lb1
            int r2 = r0.size()     // Catch: java.lang.Throwable -> Lb1
            r1.set(r2)     // Catch: java.lang.Throwable -> Lb1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r2 = "need to send request count: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lb1
            java.util.concurrent.atomic.AtomicInteger r2 = r6.a     // Catch: java.lang.Throwable -> Lb1
            int r2 = r2.get()     // Catch: java.lang.Throwable -> Lb1
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb1
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Lb1
        L42:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> Lb1
            if (r1 == 0) goto Laf
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.f.n r1 = (com.tkay.core.common.f.n) r1     // Catch: java.lang.Throwable -> Lb1
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb1
            long r4 = r1.f     // Catch: java.lang.Throwable -> Lb1
            long r2 = r2 - r4
            r4 = 604800000(0x240c8400, double:2.988109026E-315)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto L75
            java.util.concurrent.atomic.AtomicInteger r2 = r6.a     // Catch: java.lang.Throwable -> Lb1
            r2.decrementAndGet()     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lb1
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.c.c r2 = com.tkay.core.common.c.c.a(r2)     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.c.g r2 = com.tkay.core.common.c.g.a(r2)     // Catch: java.lang.Throwable -> Lb1
            r2.b(r1)     // Catch: java.lang.Throwable -> Lb1
            goto L42
        L75:
            r2 = 1000(0x3e8, float:1.401E-42)
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L84
            java.lang.String r4 = r1.g     // Catch: java.lang.Throwable -> L84
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L84
            java.lang.String r4 = "business_type"
            int r2 = r3.optInt(r4)     // Catch: java.lang.Throwable -> L84
        L84:
            int r3 = r1.b     // Catch: java.lang.Throwable -> Lb1
            r4 = 3
            if (r3 != r4) goto L99
            com.tkay.core.common.h.a.b r3 = new com.tkay.core.common.h.a.b     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = r1.e     // Catch: java.lang.Throwable -> Lb1
            r3.<init>(r4, r2)     // Catch: java.lang.Throwable -> Lb1
            com.tkay.core.common.u$2 r2 = new com.tkay.core.common.u$2     // Catch: java.lang.Throwable -> Lb1
            r2.<init>(r6, r1)     // Catch: java.lang.Throwable -> Lb1
            r3.a(r2)     // Catch: java.lang.Throwable -> Lb1
            goto L42
        L99:
            com.tkay.core.common.h.n r3 = new com.tkay.core.common.h.n     // Catch: java.lang.Throwable -> Lb1
            r3.<init>(r1)     // Catch: java.lang.Throwable -> Lb1
            r4 = 1001(0x3e9, float:1.403E-42)
            if (r2 != r4) goto La5
            r3.p()     // Catch: java.lang.Throwable -> Lb1
        La5:
            r2 = 0
            com.tkay.core.common.u$3 r4 = new com.tkay.core.common.u$3     // Catch: java.lang.Throwable -> Lb1
            r4.<init>(r6, r1, r3)     // Catch: java.lang.Throwable -> Lb1
            r3.a(r2, r4)     // Catch: java.lang.Throwable -> Lb1
            goto L42
        Laf:
            monitor-exit(r6)
            return
        Lb1:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }
}
