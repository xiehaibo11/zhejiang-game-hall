package com.tkay.basead.a;

public final class i implements com.tkay.core.common.g.b {
    com.tkay.basead.d a;
    android.content.Context b;



    public i() {
            r1 = this;
            r1.<init>()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1.b = r0
            return
    }

    @Override
    public final void a(com.tkay.core.common.f.h r11, java.lang.String r12, java.lang.String r13, boolean r14) {
            r10 = this;
            if (r14 == 0) goto L8
            android.content.Context r12 = r10.b
            com.tkay.basead.a.b.a(r12, r11)
            return
        L8:
            com.tkay.core.common.f.j r14 = r11.k()
            if (r14 != 0) goto Lf
            return
        Lf:
            int r0 = r14.H()
            int r14 = r14.I()
            r1 = 1
            if (r0 == r1) goto L2d
            r14 = 3
            if (r0 == r14) goto L1e
            goto L2c
        L1e:
            com.tkay.core.common.b r14 = com.tkay.core.common.b.a()
            com.tkay.basead.c.g r0 = new com.tkay.basead.c.g
            r0.<init>(r11, r13, r12)
            java.lang.String r11 = "1"
            r14.a(r11, r0)
        L2c:
            return
        L2d:
            com.tkay.basead.a.i$1 r0 = new com.tkay.basead.a.i$1
            r0.<init>(r10)
            com.tkay.basead.d r7 = new com.tkay.basead.d
            long r8 = (long) r14
            com.tkay.basead.a.i$2 r14 = new com.tkay.basead.a.i$2
            r1 = r14
            r2 = r10
            r3 = r0
            r4 = r11
            r5 = r12
            r6 = r13
            r1.<init>(r2, r3, r4, r5, r6)
            r7.<init>(r8, r14)
            r10.a = r7
            android.content.Context r11 = r10.b     // Catch: java.lang.Exception -> L4d
            android.app.Application r11 = (android.app.Application) r11     // Catch: java.lang.Exception -> L4d
            r11.registerActivityLifecycleCallbacks(r0)     // Catch: java.lang.Exception -> L4d
            return
        L4d:
            com.tkay.core.common.b.m r11 = com.tkay.core.common.b.m.a()
            java.lang.String r11 = r11.q()
            java.lang.String r12 = "Error"
            java.lang.String r13 = "Error, cannot registerActivityLifecycleCallbacks here!"
            com.tkay.core.common.k.c.a(r12, r13, r11)
            return
    }
}
