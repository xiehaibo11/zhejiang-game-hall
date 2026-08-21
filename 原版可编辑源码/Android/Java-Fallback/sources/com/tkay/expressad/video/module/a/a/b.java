package com.tkay.expressad.video.module.a.a;

public final class b extends com.tkay.expressad.video.module.a.a.d {
    private com.tkay.expressad.video.module.TkayVideoView ag;
    private com.tkay.expressad.video.module.TkayContainerView ah;

    public b(com.tkay.expressad.video.module.TkayVideoView r13, com.tkay.expressad.video.module.TkayContainerView r14, com.tkay.expressad.foundation.d.c r15, com.tkay.expressad.videocommon.c.c r16, com.tkay.expressad.videocommon.b.a r17, java.lang.String r18, java.lang.String r19, com.tkay.expressad.video.module.a.a r20, int r21, boolean r22) {
            r12 = this;
            r9 = r12
            r10 = r13
            r11 = r14
            r0 = r12
            r1 = r15
            r2 = r17
            r3 = r16
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r9.ag = r10
            r9.ah = r11
            if (r10 == 0) goto L1e
            if (r11 != 0) goto L21
        L1e:
            r0 = 0
            r9.W = r0
        L21:
            return
    }

    @Override
    public final void a(int r5, java.lang.Object r6) {
            r4 = this;
            boolean r0 = r4.W
            if (r0 == 0) goto L6d
            r0 = 8
            if (r5 == r0) goto L4c
            r0 = 107(0x6b, float:1.5E-43)
            r1 = 1
            if (r5 == r0) goto L3a
            r0 = 112(0x70, float:1.57E-43)
            if (r5 == r0) goto L2e
            r0 = 115(0x73, float:1.61E-43)
            if (r5 == r0) goto L16
            goto L6d
        L16:
            com.tkay.expressad.video.module.TkayContainerView r0 = r4.ah
            com.tkay.expressad.video.module.TkayVideoView r1 = r4.ag
            int r1 = r1.getBorderViewWidth()
            com.tkay.expressad.video.module.TkayVideoView r2 = r4.ag
            int r2 = r2.getBorderViewHeight()
            com.tkay.expressad.video.module.TkayVideoView r3 = r4.ag
            int r3 = r3.getBorderViewRadius()
            r0.resizeMiniCard(r1, r2, r3)
            goto L6d
        L2e:
            com.tkay.expressad.video.module.TkayVideoView r0 = r4.ag
            r0.setCover(r1)
            com.tkay.expressad.video.module.TkayVideoView r0 = r4.ag
            r1 = 2
            r0.videoOperate(r1)
            goto L6d
        L3a:
            com.tkay.expressad.video.module.TkayContainerView r0 = r4.ah
            r2 = -1
            r0.showVideoClickView(r2)
            com.tkay.expressad.video.module.TkayVideoView r0 = r4.ag
            r2 = 0
            r0.setCover(r2)
            com.tkay.expressad.video.module.TkayVideoView r0 = r4.ag
            r0.videoOperate(r1)
            goto L6d
        L4c:
            com.tkay.expressad.video.module.TkayContainerView r0 = r4.ah
            if (r0 == 0) goto L66
            boolean r0 = r0.showAlertWebView()
            if (r0 != 0) goto L5e
            com.tkay.expressad.video.module.TkayVideoView r0 = r4.ag
            if (r0 == 0) goto L6d
            r0.showAlertView()
            goto L6d
        L5e:
            com.tkay.expressad.video.module.TkayVideoView r0 = r4.ag
            if (r0 == 0) goto L6d
            r0.alertWebViewShowed()
            goto L6d
        L66:
            com.tkay.expressad.video.module.TkayVideoView r0 = r4.ag
            if (r0 == 0) goto L6d
            r0.showAlertView()
        L6d:
            super.a(r5, r6)
            return
    }
}
