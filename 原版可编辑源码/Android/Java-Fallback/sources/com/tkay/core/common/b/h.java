package com.tkay.core.common.b;

public class h {
    private static volatile com.tkay.core.common.b.h b;
    private final java.lang.String a;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private boolean f;
    private boolean g;

    public h() {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            return
    }

    public static com.tkay.core.common.b.h a() {
            com.tkay.core.common.b.h r0 = com.tkay.core.common.b.h.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.b.h> r0 = com.tkay.core.common.b.h.class
            monitor-enter(r0)
            com.tkay.core.common.b.h r1 = com.tkay.core.common.b.h.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.b.h r1 = new com.tkay.core.common.b.h     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.b.h.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.b.h r0 = com.tkay.core.common.b.h.b
            return r0
    }

    private boolean e() {
            r1 = this;
            java.lang.String r0 = r1.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r1.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            r0 = 1
            return r0
        L1a:
            r0 = 0
            return r0
    }

    public final void a(int r7, com.tkay.core.common.f.d r8) {
            r6 = this;
            if (r8 == 0) goto L87
            r0 = 6
            r1 = 4
            if (r7 == r1) goto La
            if (r7 == r0) goto La
            goto L87
        La:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.core.c.b r2 = com.tkay.core.c.b.a(r2)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.o()
            com.tkay.core.c.a r2 = r2.b(r3)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            boolean r3 = r3.G()
            if (r3 != 0) goto L2d
            return
        L2d:
            r6.a(r2)
            boolean r3 = r6.e()
            if (r3 != 0) goto L37
            return
        L37:
            java.lang.String r3 = ""
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L4d
            java.util.Map r4 = r4.l()     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L4d
            java.lang.String r5 = "user_id"
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L4d
        L4d:
            int r4 = r2.h()     // Catch: java.lang.Throwable -> L87
            r5 = 1
            if (r4 != r5) goto L6b
            if (r7 != r1) goto L6b
            int r7 = r8.H()     // Catch: java.lang.Throwable -> L87
            java.lang.String r0 = r8.k()     // Catch: java.lang.Throwable -> L87
            double r1 = r8.w()     // Catch: java.lang.Throwable -> L87
            java.lang.String r8 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L87
            r1 = 2
            com.reyun.mobdna.MobDNA.dna_event_ad(r3, r7, r0, r8, r1)     // Catch: java.lang.Throwable -> L87
            return
        L6b:
            int r1 = r2.f()     // Catch: java.lang.Throwable -> L87
            if (r1 != r5) goto L87
            if (r7 != r0) goto L87
            int r7 = r8.H()     // Catch: java.lang.Throwable -> L87
            java.lang.String r0 = r8.k()     // Catch: java.lang.Throwable -> L87
            double r1 = r8.w()     // Catch: java.lang.Throwable -> L87
            java.lang.String r8 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L87
            r1 = 3
            com.reyun.mobdna.MobDNA.dna_event_ad(r3, r7, r0, r8, r1)     // Catch: java.lang.Throwable -> L87
        L87:
            return
    }

    public final synchronized boolean a(com.tkay.core.c.a r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.g     // Catch: java.lang.Throwable -> L83
            r1 = 1
            if (r0 == 0) goto L8
            monitor-exit(r2)
            return r1
        L8:
            r0 = 0
            if (r3 == 0) goto L81
            int r3 = r3.d()     // Catch: java.lang.Throwable -> L83
            if (r3 == r1) goto L12
            goto L81
        L12:
            java.lang.String r3 = r2.c     // Catch: java.lang.Throwable -> L66
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L66
            if (r3 != 0) goto L2a
            java.lang.String r3 = r2.d     // Catch: java.lang.Throwable -> L66
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L66
            if (r3 != 0) goto L2a
            java.lang.String r3 = r2.e     // Catch: java.lang.Throwable -> L66
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L66
            if (r3 == 0) goto L66
        L2a:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L66
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L66
            com.reyun.mobdna.MobClientInfo r3 = com.reyun.mobdna.MobDNA.getClientInfo(r3)     // Catch: java.lang.Throwable -> L66
            if (r3 != 0) goto L3a
            monitor-exit(r2)
            return r0
        L3a:
            java.lang.String r0 = r3.oid     // Catch: java.lang.Throwable -> L66
            r2.c = r0     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = r3.appkey     // Catch: java.lang.Throwable -> L66
            r2.d = r0     // Catch: java.lang.Throwable -> L66
            java.lang.String r3 = r3.rdid     // Catch: java.lang.Throwable -> L66
            r2.e = r3     // Catch: java.lang.Throwable -> L66
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = "oid: "
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = r2.c     // Catch: java.lang.Throwable -> L66
            r3.append(r0)     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = ", appkey: "
            r3.append(r0)     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = r2.d     // Catch: java.lang.Throwable -> L66
            r3.append(r0)     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = ", rdid: "
            r3.append(r0)     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = r2.e     // Catch: java.lang.Throwable -> L66
            r3.append(r0)     // Catch: java.lang.Throwable -> L66
        L66:
            boolean r3 = r2.e()     // Catch: java.lang.Throwable -> L83
            r2.g = r3     // Catch: java.lang.Throwable -> L83
            boolean r0 = r2.f     // Catch: java.lang.Throwable -> L83
            if (r0 != 0) goto L7d
            if (r3 == 0) goto L7d
            r2.f = r1     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = r2.c     // Catch: java.lang.Throwable -> L83
            java.lang.String r0 = r2.d     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = r2.e     // Catch: java.lang.Throwable -> L83
            com.tkay.core.common.k.c.b(r3, r0, r1)     // Catch: java.lang.Throwable -> L83
        L7d:
            boolean r3 = r2.g     // Catch: java.lang.Throwable -> L83
            monitor-exit(r2)
            return r3
        L81:
            monitor-exit(r2)
            return r0
        L83:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }
}
