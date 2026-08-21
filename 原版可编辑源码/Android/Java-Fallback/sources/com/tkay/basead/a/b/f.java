package com.tkay.basead.a.b;

public class f {
    final java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private int e;
    private com.tkay.core.common.f.h f;
    private com.tkay.core.common.f.j g;
    private com.tkay.core.common.res.a.a h;



    public f(java.lang.String r3, com.tkay.core.common.f.h r4, com.tkay.core.common.f.j r5) {
            r2 = this;
            r2.<init>()
            java.lang.Class<com.tkay.basead.a.b.f> r0 = com.tkay.basead.a.b.f.class
            java.lang.String r0 = r0.getSimpleName()
            r2.a = r0
            java.lang.String r0 = r4.x()
            r2.b = r0
            r2.f = r4
            r2.g = r5
            r2.c = r3
            java.lang.String r3 = r4.p()
            r2.d = r3
            int r3 = r4.d()
            r2.e = r3
            com.tkay.core.common.res.a.c r3 = com.tkay.core.common.res.a.c.a()
            java.lang.String r5 = r2.b
            com.tkay.core.common.res.a.a r3 = r3.a(r5)
            r2.h = r3
            com.tkay.core.common.res.a.b r5 = new com.tkay.core.common.res.a.b
            com.tkay.core.common.f.j r0 = r2.g
            int r0 = r0.S()
            com.tkay.core.common.f.j r1 = r2.g
            int r1 = r1.U()
            r5.<init>(r0, r1)
            r3.a(r5)
            com.tkay.core.common.res.a.a r3 = r2.h
            com.tkay.basead.a.b.f$1 r5 = new com.tkay.basead.a.b.f$1
            r5.<init>(r2)
            r3.a(r5)
            com.tkay.core.common.res.a.a r3 = r2.h
            com.tkay.basead.a.b.f$2 r5 = new com.tkay.basead.a.b.f$2
            r5.<init>(r2, r4)
            r3.k = r5
            return
    }

    static com.tkay.core.common.f.j a(com.tkay.basead.a.b.f r0) {
            com.tkay.core.common.f.j r0 = r0.g
            return r0
    }

    static java.lang.String b(com.tkay.basead.a.b.f r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static java.lang.String c(com.tkay.basead.a.b.f r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    static java.lang.String d(com.tkay.basead.a.b.f r0) {
            java.lang.String r0 = r0.d
            return r0
    }

    static int e(com.tkay.basead.a.b.f r0) {
            int r0 = r0.e
            return r0
    }

    public final void a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.d
            r0.append(r1)
            java.lang.String r1 = ","
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = " startRequest"
            r0.append(r1)
            com.tkay.core.common.res.a.a r0 = r2.h
            r0.e()
            return
    }

    public final void b() {
            r3 = this;
            com.tkay.core.common.a.j r0 = com.tkay.core.common.a.j.a()
            java.lang.String r1 = r3.b
            int r0 = r0.b(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.d
            r1.append(r2)
            java.lang.String r2 = ","
            r1.append(r2)
            java.lang.String r2 = r3.b
            r1.append(r2)
            java.lang.String r2 = " resumeRequest: readyRate:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = ",cdRate:"
            r1.append(r2)
            com.tkay.core.common.f.j r2 = r3.g
            int r2 = r2.T()
            r1.append(r2)
            r1 = 100
            if (r0 != r1) goto L39
            return
        L39:
            com.tkay.core.common.res.a.a r0 = r3.h
            r0.f()
            return
    }
}
