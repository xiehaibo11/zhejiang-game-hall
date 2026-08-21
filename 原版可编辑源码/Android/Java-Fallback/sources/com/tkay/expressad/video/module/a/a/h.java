package com.tkay.expressad.video.module.a.a;

public final class h extends com.tkay.expressad.video.module.a.a.k {
    public h(com.tkay.expressad.foundation.d.c r1, com.tkay.expressad.videocommon.b.a r2, com.tkay.expressad.videocommon.c.c r3, java.lang.String r4, java.lang.String r5, com.tkay.expressad.video.module.a.a r6, int r7, boolean r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    @Override
    public final void a(int r3, java.lang.Object r4) {
            r2 = this;
            r0 = 100
            r1 = 2
            if (r3 == r0) goto L5a
            r0 = 109(0x6d, float:1.53E-43)
            if (r3 == r0) goto L56
            r0 = 122(0x7a, float:1.71E-43)
            if (r3 == r0) goto L52
            r0 = 129(0x81, float:1.81E-43)
            if (r3 == r0) goto L38
            r0 = 118(0x76, float:1.65E-43)
            java.lang.String r1 = ""
            if (r3 == r0) goto L2a
            r0 = 119(0x77, float:1.67E-43)
            if (r3 == r0) goto L1c
            goto L66
        L1c:
            if (r4 == 0) goto L25
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L25
            r1 = r4
            java.lang.String r1 = (java.lang.String) r1
        L25:
            r0 = 4
            r2.a(r0, r1)
            goto L66
        L2a:
            if (r4 == 0) goto L33
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L33
            r1 = r4
            java.lang.String r1 = (java.lang.String) r1
        L33:
            r0 = 3
            r2.a(r0, r1)
            goto L66
        L38:
            com.tkay.expressad.foundation.d.c r0 = r2.X
            if (r0 == 0) goto L66
            com.tkay.expressad.foundation.d.c r0 = r2.X
            int r0 = r0.J()
            if (r0 != r1) goto L66
            r2.e()
            r2.d()
            r2.c()
            r0 = 1
            r2.a(r0)
            goto L66
        L52:
            r2.a()
            goto L66
        L56:
            r2.b(r1)
            goto L66
        L5a:
            r2.e()
            r2.d()
            r2.c()
            r2.a(r1)
        L66:
            super.a(r3, r4)
            return
    }
}
