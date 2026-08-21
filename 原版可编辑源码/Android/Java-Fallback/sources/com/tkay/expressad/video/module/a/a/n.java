package com.tkay.expressad.video.module.a.a;

public final class n extends com.tkay.expressad.video.module.a.a.o {
    private com.tkay.expressad.video.signal.factory.IJSFactory ag;
    private int ai;
    private boolean aj;
    private int ak;
    private boolean al;

    public n(com.tkay.expressad.video.signal.factory.IJSFactory r12, com.tkay.expressad.foundation.d.c r13, com.tkay.expressad.videocommon.c.c r14, com.tkay.expressad.videocommon.b.a r15, java.lang.String r16, java.lang.String r17, int r18, int r19, com.tkay.expressad.video.module.a.a r20, int r21, boolean r22, int r23) {
            r11 = this;
            r9 = r11
            r10 = r12
            r0 = r11
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r20
            r7 = r21
            r8 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 0
            r9.aj = r0
            r9.al = r0
            r9.ag = r10
            r1 = r18
            r9.ai = r1
            if (r19 != 0) goto L22
            r1 = 1
            goto L23
        L22:
            r1 = r0
        L23:
            r9.aj = r1
            r1 = r23
            r9.ak = r1
            if (r10 != 0) goto L2d
            r9.W = r0
        L2d:
            return
    }

    @Override
    public final void a(int r11, java.lang.Object r12) {
            r10 = this;
            boolean r0 = r10.W
            if (r0 == 0) goto L2aa
            java.lang.String r0 = ""
            r1 = 1
            if (r11 == r1) goto L295
            r2 = 8
            r3 = 3
            r4 = 0
            r5 = 2
            if (r11 == r5) goto L21c
            r6 = -1
            r7 = 5
            if (r11 == r7) goto L1e8
            r7 = 6
            if (r11 == r7) goto L21c
            if (r11 == r2) goto L1c6
            r8 = 114(0x72, float:1.6E-43)
            if (r11 == r8) goto L195
            r8 = 116(0x74, float:1.63E-43)
            if (r11 == r8) goto L178
            switch(r11) {
                case 10: goto L16b;
                case 11: goto L89;
                case 12: goto L89;
                case 13: goto L69;
                case 14: goto L5a;
                case 15: goto L44;
                default: goto L24;
            }
        L24:
            switch(r11) {
                case 123: goto L34;
                case 124: goto L34;
                case 125: goto L29;
                default: goto L27;
            }
        L27:
            goto L2aa
        L29:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            r0.hideAlertWebview()
            goto L2aa
        L34:
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r10.ag
            com.tkay.expressad.video.signal.g r1 = r1.getJSNotifyProxy()
            r2 = 123(0x7b, float:1.72E-43)
            if (r11 != r2) goto L3f
            r7 = 7
        L3f:
            r1.a(r7, r0)
            goto L2aa
        L44:
            if (r12 == 0) goto L2aa
            boolean r0 = r12 instanceof com.tkay.expressad.video.module.TkayVideoView.a
            if (r0 == 0) goto L2aa
            r0 = r12
            com.tkay.expressad.video.module.TkayVideoView$a r0 = (com.tkay.expressad.video.module.TkayVideoView.a) r0
            r10.aj = r1
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r10.ag
            com.tkay.expressad.video.signal.g r1 = r1.getJSNotifyProxy()
            r1.a(r0)
            goto L2aa
        L5a:
            boolean r0 = r10.aj
            if (r0 != 0) goto L2aa
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.closeVideoOperate(r4, r1)
            goto L2aa
        L69:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            boolean r0 = r0.isH5Canvas()
            if (r0 != 0) goto L7e
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.closeVideoOperate(r4, r5)
        L7e:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.g r0 = r0.getJSNotifyProxy()
            r0.a(r6)
            goto L2aa
        L89:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.videoOperate(r3)
            com.tkay.expressad.foundation.d.c r0 = r10.X
            int r0 = r0.F()
            if (r0 == r3) goto Lac
            com.tkay.expressad.foundation.d.c r0 = r10.X
            int r0 = r0.f()
            if (r0 == r5) goto Lb5
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.setVisible(r2)
            goto Lb5
        Lac:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.setVisible(r4)
        Lb5:
            r0 = 12
            if (r11 != r0) goto Lbe
            r10.f()
            r2 = r5
            goto Lbf
        Lbe:
            r2 = r1
        Lbf:
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r10.ag
            com.tkay.expressad.video.signal.g r3 = r3.getJSNotifyProxy()
            r3.a(r2)
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.c r2 = r2.getJSCommon()
            int r2 = r2.m()
            if (r2 != r5) goto L101
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.j r2 = r2.getJSVideoModule()
            r2.setVisible(r4)
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.j r2 = r2.getJSVideoModule()
            com.tkay.expressad.video.signal.factory.IJSFactory r3 = r10.ag
            com.tkay.expressad.video.signal.e r4 = r3.getJSContainerModule()
            int r5 = r2.getBorderViewTop()
            int r6 = r2.getBorderViewLeft()
            int r7 = r2.getBorderViewWidth()
            int r8 = r2.getBorderViewHeight()
            int r9 = r2.getBorderViewRadius()
            r4.showMiniCard(r5, r6, r7, r8, r9)
            goto L14a
        L101:
            if (r11 != r0) goto L129
            int r2 = r10.ak
            if (r2 != r1) goto L14a
            com.tkay.expressad.foundation.d.c r2 = r10.X
            int r2 = r2.f()
            if (r2 == r5) goto L11f
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.e r2 = r2.getJSContainerModule()
            com.tkay.expressad.foundation.d.c r3 = r10.X
            int r3 = r3.F()
            r2.showEndcard(r3)
            goto L14a
        L11f:
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.e r2 = r2.getJSContainerModule()
            r2.showVideoEndCover()
            goto L14a
        L129:
            com.tkay.expressad.foundation.d.c r2 = r10.X
            int r2 = r2.f()
            if (r2 == r5) goto L141
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.e r2 = r2.getJSContainerModule()
            com.tkay.expressad.foundation.d.c r3 = r10.X
            int r3 = r3.F()
            r2.showEndcard(r3)
            goto L14a
        L141:
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.e r2 = r2.getJSContainerModule()
            r2.showVideoEndCover()
        L14a:
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.j r2 = r2.getJSVideoModule()
            r2.dismissAllAlert()
            if (r11 != r0) goto L2aa
            boolean r0 = r10.al
            if (r0 != 0) goto L2aa
            int r0 = r10.ak
            if (r0 != r1) goto L2aa
            r10.f()
            r10.e()
            r10.d()
            r10.c()
            goto L2aa
        L16b:
            r10.al = r1
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.g r0 = r0.getJSNotifyProxy()
            r0.a(r4)
            goto L2aa
        L178:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r10.ag
            com.tkay.expressad.video.signal.e r1 = r1.getJSContainerModule()
            int r2 = r0.getBorderViewWidth()
            int r3 = r0.getBorderViewHeight()
            int r0 = r0.getBorderViewRadius()
            r1.configurationChanged(r2, r3, r0)
            goto L2aa
        L195:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
            int r0 = r0.m()
            if (r0 != r5) goto L2aa
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r10.ag
            com.tkay.expressad.video.signal.e r2 = r1.getJSContainerModule()
            int r3 = r0.getBorderViewTop()
            int r4 = r0.getBorderViewLeft()
            int r5 = r0.getBorderViewWidth()
            int r6 = r0.getBorderViewHeight()
            int r7 = r0.getBorderViewRadius()
            r2.showMiniCard(r3, r4, r5, r6, r7)
            goto L2aa
        L1c6:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            boolean r0 = r0.showAlertWebView()
            if (r0 != 0) goto L1dd
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.showAlertView()
            goto L2aa
        L1dd:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.alertWebViewShowed()
            goto L2aa
        L1e8:
            if (r12 == 0) goto L2aa
            boolean r0 = r12 instanceof java.lang.Integer
            if (r0 == 0) goto L2aa
            r0 = r12
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            if (r0 != r1) goto L1fc
            java.lang.Integer r0 = java.lang.Integer.valueOf(r5)
            goto L200
        L1fc:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
        L200:
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r10.ag
            com.tkay.expressad.video.signal.j r1 = r1.getJSVideoModule()
            int r2 = r0.intValue()
            r1.soundOperate(r2, r6)
            com.tkay.expressad.video.signal.factory.IJSFactory r1 = r10.ag
            com.tkay.expressad.video.signal.g r1 = r1.getJSNotifyProxy()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.a(r7, r0)
            goto L2aa
        L21c:
            com.tkay.expressad.video.signal.factory.IJSFactory r6 = r10.ag
            com.tkay.expressad.video.signal.j r6 = r6.getJSVideoModule()
            r6.dismissAllAlert()
            if (r11 != r5) goto L230
            com.tkay.expressad.video.signal.factory.IJSFactory r6 = r10.ag
            com.tkay.expressad.video.signal.g r6 = r6.getJSNotifyProxy()
            r6.a(r5, r0)
        L230:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.videoOperate(r3)
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
            int r0 = r0.m()
            r6 = 16
            if (r0 == r5) goto L28a
            com.tkay.expressad.foundation.d.c r0 = r10.X
            int r0 = r0.F()
            if (r0 == r3) goto L259
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.setVisible(r2)
            goto L262
        L259:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            r0.setVisible(r4)
        L262:
            int r0 = r10.ai
            if (r0 != r5) goto L28a
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            boolean r0 = r0.endCardShowing()
            if (r0 != 0) goto L28a
            com.tkay.expressad.foundation.d.c r0 = r10.X
            int r0 = r0.f()
            if (r0 == r5) goto L28a
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            com.tkay.expressad.foundation.d.c r2 = r10.X
            int r2 = r2.F()
            r0.showEndcard(r2)
            goto L28b
        L28a:
            r11 = r6
        L28b:
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r10.ag
            com.tkay.expressad.video.signal.g r0 = r0.getJSNotifyProxy()
            r0.a(r1)
            goto L2aa
        L295:
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.e r2 = r2.getJSContainerModule()
            boolean r2 = r2.endCardShowing()
            if (r2 != 0) goto L2aa
            com.tkay.expressad.video.signal.factory.IJSFactory r2 = r10.ag
            com.tkay.expressad.video.signal.g r2 = r2.getJSNotifyProxy()
            r2.a(r1, r0)
        L2aa:
            super.a(r11, r12)
            return
    }
}
