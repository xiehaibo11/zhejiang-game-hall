package com.tkay.expressad.video.module.a.a;

public final class c extends com.tkay.expressad.video.module.a.a.d {
    private com.tkay.expressad.video.signal.factory.IJSFactory ag;

    public c(com.tkay.expressad.video.signal.factory.IJSFactory r12, com.tkay.expressad.foundation.d.c r13, com.tkay.expressad.videocommon.c.c r14, com.tkay.expressad.videocommon.b.a r15, java.lang.String r16, java.lang.String r17, com.tkay.expressad.video.module.a.a r18, int r19, boolean r20) {
            r11 = this;
            r9 = r11
            r10 = r12
            r0 = r11
            r1 = r13
            r2 = r15
            r3 = r14
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r9.ag = r10
            if (r10 != 0) goto L1a
            r0 = 0
            r9.W = r0
        L1a:
            return
    }

    @Override
    public final void a(int r5, java.lang.Object r6) {
            r4 = this;
            boolean r0 = r4.W
            r1 = -1
            if (r0 == 0) goto L98
            r0 = 8
            if (r5 == r0) goto L79
            r0 = 105(0x69, float:1.47E-43)
            if (r5 == r0) goto L69
            r0 = 107(0x6b, float:1.5E-43)
            r2 = 1
            if (r5 == r0) goto L4c
            r0 = 112(0x70, float:1.57E-43)
            if (r5 == r0) goto L38
            r0 = 115(0x73, float:1.61E-43)
            if (r5 == r0) goto L1c
            goto L98
        L1c:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r4.ag
            com.tkay.expressad.video.signal.e r1 = r1.getJSContainerModule()
            int r2 = r0.getBorderViewWidth()
            int r3 = r0.getBorderViewHeight()
            int r0 = r0.getBorderViewRadius()
            r1.resizeMiniCard(r2, r3, r0)
            goto L98
        L38:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.setCover(r2)
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r1 = 2
            r0.videoOperate(r1)
            goto L98
        L4c:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            r0.showVideoClickView(r1)
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r1 = 0
            r0.setCover(r1)
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.videoOperate(r2)
            goto L98
        L69:
            java.lang.String r5 = r6.toString()
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.g r0 = r0.getJSNotifyProxy()
            r2 = 3
            r0.a(r2, r5)
            r5 = r1
            goto L98
        L79:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            boolean r0 = r0.showAlertWebView()
            if (r0 != 0) goto L8f
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.showAlertView()
            goto L98
        L8f:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r4.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.alertWebViewShowed()
        L98:
            super.a(r5, r6)
            return
    }
}
