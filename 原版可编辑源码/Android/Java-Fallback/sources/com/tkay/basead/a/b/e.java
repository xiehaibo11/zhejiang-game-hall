package com.tkay.basead.a.b;

final class e extends com.tkay.core.common.res.image.b {
    private java.lang.String a;
    private boolean b;
    private boolean j;
    private java.lang.String k;
    private int l;
    private com.tkay.core.common.f.h m;

    public e(java.lang.String r1, boolean r2, com.tkay.core.common.f.h r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r4)
            r0.m = r3
            r0.a = r1
            r0.b = r2
            java.lang.String r1 = r3.x()
            boolean r1 = android.text.TextUtils.equals(r1, r4)
            r0.j = r1
            java.lang.String r1 = r3.p()
            r0.k = r1
            int r1 = r3.d()
            r0.l = r1
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final void a(com.tkay.core.common.l.b.b r3) {
            r2 = this;
            boolean r0 = r2.b
            if (r0 == 0) goto Ld
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r1 = 6
            r0.a(r3, r1)
            return
        Ld:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r1 = 5
            r0.a(r3, r1)
            return
    }

    @Override
    protected final void a(java.lang.String r17, java.lang.String r18) {
            r16 = this;
            r0 = r16
            boolean r1 = r0.j
            if (r1 == 0) goto L20
            java.lang.String r2 = r0.a
            java.lang.String r3 = r0.k
            java.lang.String r4 = r0.c
            long r6 = r0.i
            long r9 = r0.e
            int r13 = r0.l
            long r14 = r0.h
            long r11 = r0.f
            long r14 = r14 - r11
            java.lang.String r5 = "0"
            r8 = r18
            r11 = 0
            com.tkay.core.common.k.c.a(r2, r3, r4, r5, r6, r8, r9, r11, r13, r14)
        L20:
            com.tkay.basead.a.b.d r1 = com.tkay.basead.a.b.d.a()
            java.lang.String r2 = r0.c
            com.tkay.basead.c.e r3 = com.tkay.basead.c.f.a(r17, r18)
            r1.a(r2, r3)
            return
    }

    @Override
    protected final boolean a(java.io.InputStream r2) {
            r1 = this;
            com.tkay.basead.a.f.a()
            java.lang.String r0 = r1.c
            boolean r2 = com.tkay.basead.a.f.a(r0, r2)
            return r2
    }

    @Override
    protected final void b() {
            r0 = this;
            return
    }

    @Override
    protected final void c() {
            r19 = this;
            r0 = r19
            boolean r1 = r0.j
            if (r1 == 0) goto L36
            r1 = 30
            com.tkay.core.common.f.h r2 = r0.m
            com.tkay.basead.c.i r3 = new com.tkay.basead.c.i
            java.lang.String r4 = ""
            r3.<init>(r4, r4)
            com.tkay.basead.a.b.a(r1, r2, r3)
            java.lang.String r5 = r0.a
            java.lang.String r6 = r0.k
            java.lang.String r7 = r0.c
            long r9 = r0.i
            long r12 = r0.e
            long r14 = r0.g
            int r1 = r0.l
            long r2 = r0.h
            r16 = r12
            long r11 = r0.f
            long r2 = r2 - r11
            java.lang.String r8 = "1"
            r4 = 0
            r11 = r4
            r12 = r16
            r16 = r1
            r17 = r2
            com.tkay.core.common.k.c.a(r5, r6, r7, r8, r9, r11, r12, r14, r16, r17)
        L36:
            com.tkay.basead.a.b.d r1 = com.tkay.basead.a.b.d.a()
            java.lang.String r2 = r0.c
            r3 = 100
            r1.a(r2, r3)
            return
    }
}
