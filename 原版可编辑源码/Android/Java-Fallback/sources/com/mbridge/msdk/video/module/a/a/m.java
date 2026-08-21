package com.mbridge.msdk.video.module.a.a;

public final class m extends com.mbridge.msdk.video.module.a.a.n {
    private com.mbridge.msdk.video.js.factory.IJSFactory l;
    private int m;
    private boolean n;
    private int o;
    private boolean p;

    public m(com.mbridge.msdk.video.js.factory.IJSFactory r12, com.mbridge.msdk.foundation.entity.CampaignEx r13, com.mbridge.msdk.videocommon.b.d r14, com.mbridge.msdk.videocommon.download.a r15, java.lang.String r16, java.lang.String r17, int r18, int r19, com.mbridge.msdk.video.module.a.a r20, int r21, boolean r22, int r23) {
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
            r9.n = r0
            r9.p = r0
            r9.l = r10
            r1 = r18
            r9.m = r1
            if (r19 != 0) goto L22
            r1 = 1
            goto L23
        L22:
            r1 = r0
        L23:
            r9.n = r1
            r1 = r23
            r9.o = r1
            if (r10 != 0) goto L2d
            r9.a = r0
        L2d:
            return
    }

    @Override
    public final void a(int r11, java.lang.Object r12) {
            r10 = this;
            boolean r0 = r10.a
            if (r0 == 0) goto L2bd
            java.lang.String r0 = ""
            r1 = 1
            if (r11 == r1) goto L2a1
            r2 = 8
            r3 = 3
            r4 = 0
            r5 = 2
            if (r11 == r5) goto L227
            r6 = -1
            r7 = 5
            if (r11 == r7) goto L1e8
            r7 = 6
            if (r11 == r7) goto L227
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
            goto L2bd
        L29:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            r0.hideAlertWebview()
            goto L2bd
        L34:
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r10.l
            com.mbridge.msdk.video.js.f r1 = r1.getJSNotifyProxy()
            r2 = 123(0x7b, float:1.72E-43)
            if (r11 != r2) goto L3f
            r7 = 7
        L3f:
            r1.a(r7, r0)
            goto L2bd
        L44:
            if (r12 == 0) goto L2bd
            boolean r0 = r12 instanceof com.mbridge.msdk.video.module.MBridgeVideoView.a
            if (r0 == 0) goto L2bd
            r0 = r12
            com.mbridge.msdk.video.module.MBridgeVideoView$a r0 = (com.mbridge.msdk.video.module.MBridgeVideoView.a) r0
            r10.n = r1
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r10.l
            com.mbridge.msdk.video.js.f r1 = r1.getJSNotifyProxy()
            r1.a(r0)
            goto L2bd
        L5a:
            boolean r0 = r10.n
            if (r0 != 0) goto L2bd
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.closeVideoOperate(r4, r1)
            goto L2bd
        L69:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            boolean r0 = r0.isH5Canvas()
            if (r0 != 0) goto L7e
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.closeVideoOperate(r4, r5)
        L7e:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.f r0 = r0.getJSNotifyProxy()
            r0.a(r6)
            goto L2bd
        L89:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.videoOperate(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            int r0 = r0.getVideo_end_type()
            if (r0 == r3) goto Lac
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            int r0 = r0.getAdSpaceT()
            if (r0 == r5) goto Lb5
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.setVisible(r2)
            goto Lb5
        Lac:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.setVisible(r4)
        Lb5:
            r0 = 12
            if (r11 != r0) goto Lbe
            r10.h()
            r2 = r5
            goto Lbf
        Lbe:
            r2 = r1
        Lbf:
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r10.l
            com.mbridge.msdk.video.js.f r3 = r3.getJSNotifyProxy()
            r3.a(r2)
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()
            int r2 = r2.h()
            if (r2 != r5) goto L101
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.i r2 = r2.getJSVideoModule()
            r2.setVisible(r4)
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.i r2 = r2.getJSVideoModule()
            com.mbridge.msdk.video.js.factory.IJSFactory r3 = r10.l
            com.mbridge.msdk.video.js.e r4 = r3.getJSContainerModule()
            int r5 = r2.getBorderViewTop()
            int r6 = r2.getBorderViewLeft()
            int r7 = r2.getBorderViewWidth()
            int r8 = r2.getBorderViewHeight()
            int r9 = r2.getBorderViewRadius()
            r4.showMiniCard(r5, r6, r7, r8, r9)
            goto L14a
        L101:
            if (r11 != r0) goto L129
            int r2 = r10.o
            if (r2 != r1) goto L14a
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r10.b
            int r2 = r2.getAdSpaceT()
            if (r2 == r5) goto L11f
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.e r2 = r2.getJSContainerModule()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r10.b
            int r3 = r3.getVideo_end_type()
            r2.showEndcard(r3)
            goto L14a
        L11f:
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.e r2 = r2.getJSContainerModule()
            r2.showVideoEndCover()
            goto L14a
        L129:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r10.b
            int r2 = r2.getAdSpaceT()
            if (r2 == r5) goto L141
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.e r2 = r2.getJSContainerModule()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r10.b
            int r3 = r3.getVideo_end_type()
            r2.showEndcard(r3)
            goto L14a
        L141:
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.e r2 = r2.getJSContainerModule()
            r2.showVideoEndCover()
        L14a:
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.i r2 = r2.getJSVideoModule()
            r2.dismissAllAlert()
            if (r11 != r0) goto L2bd
            boolean r0 = r10.p
            if (r0 != 0) goto L2bd
            int r0 = r10.o
            if (r0 != r1) goto L2bd
            r10.h()
            r10.g()
            r10.f()
            r10.e()
            goto L2bd
        L16b:
            r10.p = r1
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.f r0 = r0.getJSNotifyProxy()
            r0.a(r4)
            goto L2bd
        L178:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r10.l
            com.mbridge.msdk.video.js.e r1 = r1.getJSContainerModule()
            int r2 = r0.getBorderViewWidth()
            int r3 = r0.getBorderViewHeight()
            int r0 = r0.getBorderViewRadius()
            r1.configurationChanged(r2, r3, r0)
            goto L2bd
        L195:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
            int r0 = r0.h()
            if (r0 != r5) goto L2bd
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r10.l
            com.mbridge.msdk.video.js.e r2 = r1.getJSContainerModule()
            int r3 = r0.getBorderViewTop()
            int r4 = r0.getBorderViewLeft()
            int r5 = r0.getBorderViewWidth()
            int r6 = r0.getBorderViewHeight()
            int r7 = r0.getBorderViewRadius()
            r2.showMiniCard(r3, r4, r5, r6, r7)
            goto L2bd
        L1c6:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            boolean r0 = r0.showAlertWebView()
            if (r0 != 0) goto L1dd
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.showAlertView()
            goto L2bd
        L1dd:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.alertWebViewShowed()
            goto L2bd
        L1e8:
            if (r12 == 0) goto L2bd
            boolean r2 = r12 instanceof java.lang.Integer
            if (r2 == 0) goto L2bd
            r2 = r12
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            if (r2 != r1) goto L1fc
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)
            goto L200
        L1fc:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
        L200:
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.i r2 = r2.getJSVideoModule()
            int r3 = r1.intValue()
            r2.soundOperate(r3, r6)
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.f r2 = r2.getJSNotifyProxy()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.a(r7, r0)
            goto L2bd
        L227:
            com.mbridge.msdk.video.js.factory.IJSFactory r6 = r10.l
            com.mbridge.msdk.video.js.i r6 = r6.getJSVideoModule()
            r6.dismissAllAlert()
            if (r11 != r5) goto L23b
            com.mbridge.msdk.video.js.factory.IJSFactory r6 = r10.l
            com.mbridge.msdk.video.js.f r6 = r6.getJSNotifyProxy()
            r6.a(r5, r0)
        L23b:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.videoOperate(r3)
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
            int r0 = r0.h()
            r6 = 16
            if (r0 != r5) goto L253
            goto L296
        L253:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            int r0 = r0.getVideo_end_type()
            if (r0 == r3) goto L265
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.setVisible(r2)
            goto L26e
        L265:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.setVisible(r4)
        L26e:
            int r0 = r10.m
            if (r0 != r5) goto L296
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            boolean r0 = r0.endCardShowing()
            if (r0 != 0) goto L296
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            int r0 = r0.getAdSpaceT()
            if (r0 == r5) goto L296
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r10.b
            int r2 = r2.getVideo_end_type()
            r0.showEndcard(r2)
            goto L297
        L296:
            r11 = r6
        L297:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r10.l
            com.mbridge.msdk.video.js.f r0 = r0.getJSNotifyProxy()
            r0.a(r1)
            goto L2bd
        L2a1:
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.e r2 = r2.getJSContainerModule()
            boolean r2 = r2.endCardShowing()
            if (r2 != 0) goto L2bd
            com.mbridge.msdk.video.js.factory.IJSFactory r2 = r10.l
            com.mbridge.msdk.video.js.f r2 = r2.getJSNotifyProxy()
            if (r12 != 0) goto L2b6
            goto L2ba
        L2b6:
            java.lang.String r0 = r12.toString()
        L2ba:
            r2.a(r1, r0)
        L2bd:
            super.a(r11, r12)
            return
    }
}
