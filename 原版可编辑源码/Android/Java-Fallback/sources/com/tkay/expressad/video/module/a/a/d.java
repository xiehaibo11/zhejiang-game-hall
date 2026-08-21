package com.tkay.expressad.video.module.a.a;

public class d extends com.tkay.expressad.video.module.a.a.k {
    public d(com.tkay.expressad.foundation.d.c r1, com.tkay.expressad.videocommon.b.a r2, com.tkay.expressad.videocommon.c.c r3, java.lang.String r4, java.lang.String r5, com.tkay.expressad.video.module.a.a r6, int r7, boolean r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    @Override
    public void a(int r3, java.lang.Object r4) {
            r2 = this;
            super.a(r3, r4)
            boolean r0 = r2.W
            if (r0 == 0) goto L3a
            r0 = 122(0x7a, float:1.71E-43)
            if (r3 == r0) goto L37
            r0 = 1
            switch(r3) {
                case 109: goto L2f;
                case 110: goto L14;
                case 111: goto L10;
                default: goto Lf;
            }
        Lf:
            goto L3a
        L10:
            r2.a(r0)
            return
        L14:
            com.tkay.expressad.foundation.d.c r3 = r2.X
            if (r3 == 0) goto L28
            com.tkay.expressad.foundation.d.c r3 = r2.X
            int r3 = r3.k()
            r1 = 5
            if (r3 != r1) goto L28
            java.lang.String r3 = r4.toString()
            r2.a(r3)
        L28:
            r2.b(r0)
            r2.a(r0)
            return
        L2f:
            r3 = 2
            r2.b(r3)
            r2.a(r3)
            return
        L37:
            r2.a()
        L3a:
            return
    }
}
