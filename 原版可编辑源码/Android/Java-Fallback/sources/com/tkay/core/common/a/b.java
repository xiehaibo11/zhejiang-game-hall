package com.tkay.core.common.a;

public class b {
    private static volatile com.tkay.core.common.a.b b;
    final java.lang.String a;
    private com.tkay.core.common.c.f c;
    private com.tkay.core.common.c.e d;





    private b() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.core.common.a.b> r0 = com.tkay.core.common.a.b.class
            java.lang.String r0 = r0.getName()
            r1.a = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L39
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)
            com.tkay.core.common.c.f r0 = com.tkay.core.common.c.f.a(r0)
            r1.c = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)
            com.tkay.core.common.c.e r0 = com.tkay.core.common.c.e.a(r0)
            r1.d = r0
        L39:
            return
    }

    public static com.tkay.core.common.a.b a() {
            com.tkay.core.common.a.b r0 = com.tkay.core.common.a.b.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.a.b> r0 = com.tkay.core.common.a.b.class
            monitor-enter(r0)
            com.tkay.core.common.a.b r1 = com.tkay.core.common.a.b.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.a.b r1 = new com.tkay.core.common.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.a.b.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.a.b r0 = com.tkay.core.common.a.b.b
            return r0
    }

    static com.tkay.core.common.c.f a(com.tkay.core.common.a.b r0) {
            com.tkay.core.common.c.f r0 = r0.c
            return r0
    }

    static com.tkay.core.common.c.e b(com.tkay.core.common.a.b r0) {
            com.tkay.core.common.c.e r0 = r0.d
            return r0
    }

    public final java.util.List<com.tkay.core.common.a.d> a(int r2) {
            r1 = this;
            com.tkay.core.common.c.f r0 = r1.c
            java.util.List r2 = r0.a(r2)
            return r2
    }

    public final void a(com.tkay.core.common.f.f r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "insertDspOfferShowRecord dspOfferId:"
            r0.<init>(r1)
            java.lang.String r1 = r3.U()
            r0.append(r1)
            com.tkay.core.common.b.m.a()
            com.tkay.core.common.a.b$1 r0 = new com.tkay.core.common.a.b$1
            r0.<init>(r2, r3)
            com.tkay.core.common.b.m.b(r0)
            return
    }

    public final java.util.List<com.tkay.core.common.a.d> b(int r2) {
            r1 = this;
            com.tkay.core.common.c.e r0 = r1.d
            java.util.List r2 = r0.a(r2)
            return r2
    }

    public final void b() {
            r1 = this;
            com.tkay.core.common.b.m.a()
            com.tkay.core.common.a.b$3 r0 = new com.tkay.core.common.a.b$3
            r0.<init>(r1)
            com.tkay.core.common.b.m.b(r0)
            return
    }

    public final void b(com.tkay.core.common.f.f r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "updateDspOfferShowRecord dspOfferId:"
            r0.<init>(r1)
            java.lang.String r1 = r3.U()
            r0.append(r1)
            com.tkay.core.common.b.m.a()
            com.tkay.core.common.a.b$2 r0 = new com.tkay.core.common.a.b$2
            r0.<init>(r2, r3)
            com.tkay.core.common.b.m.b(r0)
            return
    }

    public final void c(com.tkay.core.common.f.f r4) {
            r3 = this;
            int r0 = r4.W()
            java.lang.String r1 = ",not need to record install"
            r2 = 1
            if (r0 != r2) goto L35
            int r0 = r4.D()
            if (r0 == r2) goto L29
            int r0 = r4.D()
            r2 = 4
            if (r0 != r2) goto L17
            goto L29
        L17:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "adxOffer.getClickType = "
            r0.<init>(r2)
            int r4 = r4.D()
            r0.append(r4)
            r0.append(r1)
            return
        L29:
            com.tkay.core.common.b.m.a()
            com.tkay.core.common.a.b$4 r0 = new com.tkay.core.common.a.b$4
            r0.<init>(r3, r4)
            com.tkay.core.common.b.m.b(r0)
            return
        L35:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "adxOffer.getDspInstallIdUploadSwitch() = "
            r0.<init>(r2)
            int r4 = r4.W()
            r0.append(r4)
            r0.append(r1)
            return
    }
}
