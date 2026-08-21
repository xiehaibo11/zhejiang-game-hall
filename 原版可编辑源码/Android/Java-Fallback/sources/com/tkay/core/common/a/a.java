package com.tkay.core.common.a;

public class a {
    private static volatile com.tkay.core.common.a.a a;
    private com.tkay.core.common.c.k b;


    private a() {
            r1 = this;
            r1.<init>()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L1f
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)
            com.tkay.core.common.c.k r0 = com.tkay.core.common.c.k.a(r0)
            r1.b = r0
        L1f:
            return
    }

    public static com.tkay.core.common.a.a a() {
            com.tkay.core.common.a.a r0 = com.tkay.core.common.a.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.a.a> r0 = com.tkay.core.common.a.a.class
            monitor-enter(r0)
            com.tkay.core.common.a.a r1 = com.tkay.core.common.a.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.a.a r1 = new com.tkay.core.common.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.a.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.a.a r0 = com.tkay.core.common.a.a.a
            return r0
    }

    static com.tkay.core.common.c.k a(com.tkay.core.common.a.a r0) {
            com.tkay.core.common.c.k r0 = r0.b
            return r0
    }

    static com.tkay.core.common.c.k a(com.tkay.core.common.a.a r0, com.tkay.core.common.c.k r1) {
            r0.b = r1
            return r1
    }

    public static void c(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_win_notice"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "tkayadx_file"
            r1 = 1
            com.tkay.core.common.l.p.a(r2, r0, r3, r1)
            return
    }

    public static boolean d(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_win_notice"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.String r1 = "tkayadx_file"
            int r2 = com.tkay.core.common.l.p.b(r2, r1, r3, r0)
            r3 = 1
            if (r2 != r3) goto L1c
            return r3
        L1c:
            return r0
    }

    public final java.lang.String a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.tkay.core.common.c.k r0 = r1.b
            if (r0 != 0) goto L12
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.core.common.c.c r2 = com.tkay.core.common.c.c.a(r2)
            com.tkay.core.common.c.k r2 = com.tkay.core.common.c.k.a(r2)
            r1.b = r2
        L12:
            com.tkay.core.common.c.k r2 = r1.b
            java.lang.String r2 = r2.b(r3)
            return r2
    }

    public final void a(android.content.Context r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            com.tkay.core.common.c.k r0 = r1.b
            if (r0 != 0) goto L12
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.core.common.c.c r2 = com.tkay.core.common.c.c.a(r2)
            com.tkay.core.common.c.k r2 = com.tkay.core.common.c.k.a(r2)
            r1.b = r2
        L12:
            com.tkay.core.common.a.h r2 = new com.tkay.core.common.a.h
            r2.<init>()
            r2.a(r5)
            r2.b(r4)
            r2.a(r3)
            r2.c(r6)
            com.tkay.core.common.c.k r3 = r1.b
            r3.a(r2)
            return
    }

    public final void b(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.a.a$1 r1 = new com.tkay.core.common.a.a$1
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "_win_notice"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "tkayadx_file"
            com.tkay.core.common.l.p.a(r3, r0, r4)
            return
    }
}
