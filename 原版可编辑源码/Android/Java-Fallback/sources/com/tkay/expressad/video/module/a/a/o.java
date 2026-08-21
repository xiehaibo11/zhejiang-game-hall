package com.tkay.expressad.video.module.a.a;

public class o extends com.tkay.expressad.video.module.a.a.k {
    private boolean ag;
    protected int ah;
    private boolean ai;
    private boolean aj;
    private boolean ak;
    private boolean al;
    private java.util.Map<java.lang.Integer, java.lang.String> am;
    private int an;

    public o(com.tkay.expressad.foundation.d.c r11, com.tkay.expressad.videocommon.c.c r12, com.tkay.expressad.videocommon.b.a r13, java.lang.String r14, java.lang.String r15, com.tkay.expressad.video.module.a.a r16, int r17, boolean r18) {
            r10 = this;
            r9 = r10
            r0 = r10
            r1 = r11
            r2 = r13
            r3 = r12
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 0
            r9.al = r0
            r9.ah = r0
            r0 = -1
            r9.an = r0
            boolean r0 = r9.W
            if (r0 == 0) goto L22
            java.util.Map r0 = r11.R()
            r9.am = r0
        L22:
            int r0 = r11.i()
            r9.ah = r0
            return
    }

    @Override
    public void a(int r8, java.lang.Object r9) {
            r7 = this;
            r0 = 2
            r1 = 1
            if (r8 == r0) goto Ld4
            r2 = 6
            if (r8 == r2) goto Ld4
            r2 = 7
            if (r8 == r2) goto L97
            r0 = 11
            r2 = 0
            if (r8 == r0) goto L8c
            r0 = 12
            if (r8 == r0) goto L81
            r0 = 15
            if (r8 == r0) goto L1d
            r0 = 16
            if (r8 == r0) goto Ld4
            goto Lee
        L1d:
            r7.e()     // Catch: java.lang.Throwable -> Lf4
            r7.d()     // Catch: java.lang.Throwable -> Lf4
            r7.c()     // Catch: java.lang.Throwable -> Lf4
            if (r9 == 0) goto L3a
            boolean r0 = r9 instanceof com.tkay.expressad.video.module.TkayVideoView.a     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto L3a
            r0 = r9
            com.tkay.expressad.video.module.TkayVideoView$a r0 = (com.tkay.expressad.video.module.TkayVideoView.a) r0     // Catch: java.lang.Throwable -> Lf4
            int r2 = r0.a     // Catch: java.lang.Throwable -> Lf4
            r0 = r9
            com.tkay.expressad.video.module.TkayVideoView$a r0 = (com.tkay.expressad.video.module.TkayVideoView.a) r0     // Catch: java.lang.Throwable -> Lf4
            int r0 = r0.b     // Catch: java.lang.Throwable -> Lf4
            r6 = r2
            r2 = r0
            r0 = r6
            goto L3b
        L3a:
            r0 = r2
        L3b:
            if (r2 != 0) goto L47
            com.tkay.expressad.foundation.d.c r3 = r7.X     // Catch: java.lang.Throwable -> Lf4
            if (r3 == 0) goto L47
            com.tkay.expressad.foundation.d.c r2 = r7.X     // Catch: java.lang.Throwable -> Lf4
            int r2 = r2.bi()     // Catch: java.lang.Throwable -> Lf4
        L47:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.foundation.d.c r4 = r7.X     // Catch: java.lang.Throwable -> Lf4
            int r5 = r7.af     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.video.module.b.a.a(r3, r4, r0, r2, r5)     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.foundation.d.c r3 = r7.X     // Catch: java.lang.Throwable -> Lf4
            java.util.Map<java.lang.Integer, java.lang.String> r4 = r7.am     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r5 = r7.ac     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.video.module.b.a.a(r3, r4, r5, r0)     // Catch: java.lang.Throwable -> Lf4
            boolean r3 = r7.ak     // Catch: java.lang.Throwable -> Lf4
            if (r3 != 0) goto L6c
            r7.ak = r1     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.foundation.d.c r3 = r7.X     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r4 = r7.ac     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.video.module.b.a.a(r3, r4)     // Catch: java.lang.Throwable -> Lf4
        L6c:
            boolean r3 = r7.al     // Catch: java.lang.Throwable -> Lf4
            if (r3 != 0) goto L7d
            int r3 = r7.ah     // Catch: java.lang.Throwable -> Lf4
            if (r3 != 0) goto L75
            goto L77
        L75:
            int r2 = r7.ah     // Catch: java.lang.Throwable -> Lf4
        L77:
            if (r0 < r2) goto L7d
            r7.al = r1     // Catch: java.lang.Throwable -> Lf4
            r8 = 17
        L7d:
            r7.an = r0     // Catch: java.lang.Throwable -> Lf4
            goto Lee
        L81:
            r7.b()     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Throwable -> Lf4
            r0.a(r2)     // Catch: java.lang.Throwable -> Lf4
            goto Lee
        L8c:
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Throwable -> Lf4
            r0.a(r2)     // Catch: java.lang.Throwable -> Lf4
            r7.b()     // Catch: java.lang.Throwable -> Lf4
            goto Lee
        L97:
            boolean r2 = r7.W     // Catch: java.lang.Throwable -> Lf4
            if (r2 == 0) goto Lee
            if (r9 == 0) goto Lee
            boolean r2 = r9 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> Lf4
            if (r2 == 0) goto Lee
            r2 = r9
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> Lf4
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> Lf4
            if (r2 != r0) goto Lbe
            boolean r0 = r7.ai     // Catch: java.lang.Throwable -> Lf4
            if (r0 != 0) goto Lee
            r7.ai = r1     // Catch: java.lang.Throwable -> Lf4
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.foundation.d.c r1 = r7.X     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.video.module.b.a.b(r0, r1)     // Catch: java.lang.Throwable -> Lf4
            goto Lee
        Lbe:
            if (r2 != r1) goto Lee
            boolean r0 = r7.ag     // Catch: java.lang.Throwable -> Lf4
            if (r0 != 0) goto Lee
            r7.ag = r1     // Catch: java.lang.Throwable -> Lf4
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.foundation.d.c r1 = r7.X     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.video.module.b.a.c(r0, r1)     // Catch: java.lang.Throwable -> Lf4
            goto Lee
        Ld4:
            boolean r0 = r7.W     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto Lee
            boolean r0 = r7.aj     // Catch: java.lang.Throwable -> Lf4
            if (r0 != 0) goto Lee
            r7.aj = r1     // Catch: java.lang.Throwable -> Lf4
            r7.b()     // Catch: java.lang.Throwable -> Lf4
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.foundation.d.c r1 = r7.X     // Catch: java.lang.Throwable -> Lf4
            com.tkay.expressad.video.module.b.a.d(r0, r1)     // Catch: java.lang.Throwable -> Lf4
        Lee:
            com.tkay.expressad.video.module.a.a r0 = r7.ae     // Catch: java.lang.Throwable -> Lf4
            r0.a(r8, r9)     // Catch: java.lang.Throwable -> Lf4
            return
        Lf4:
            r8 = move-exception
            r8.getMessage()
            return
    }
}
