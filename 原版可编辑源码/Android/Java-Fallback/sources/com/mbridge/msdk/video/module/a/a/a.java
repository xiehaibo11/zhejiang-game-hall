package com.mbridge.msdk.video.module.a.a;

public final class a extends com.mbridge.msdk.video.module.a.a.c {
    private com.mbridge.msdk.video.module.MBridgeVideoView k;
    private com.mbridge.msdk.video.module.MBridgeContainerView l;

    public a(com.mbridge.msdk.video.module.MBridgeVideoView r13, com.mbridge.msdk.video.module.MBridgeContainerView r14, com.mbridge.msdk.foundation.entity.CampaignEx r15, com.mbridge.msdk.videocommon.b.d r16, com.mbridge.msdk.videocommon.download.a r17, java.lang.String r18, java.lang.String r19, com.mbridge.msdk.video.module.a.a r20, int r21, boolean r22) {
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
            r9.k = r10
            r9.l = r11
            if (r10 == 0) goto L1e
            if (r11 != 0) goto L21
        L1e:
            r0 = 0
            r9.a = r0
        L21:
            return
    }

    @Override
    public final void a(int r5, java.lang.Object r6) {
            r4 = this;
            boolean r0 = r4.a
            if (r0 == 0) goto L77
            r0 = 8
            if (r5 == r0) goto L56
            r0 = 107(0x6b, float:1.5E-43)
            r1 = 1
            if (r5 == r0) goto L3f
            r0 = 112(0x70, float:1.57E-43)
            if (r5 == r0) goto L2e
            r0 = 115(0x73, float:1.61E-43)
            if (r5 == r0) goto L16
            goto L77
        L16:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r4.l
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r4.k
            int r1 = r1.getBorderViewWidth()
            com.mbridge.msdk.video.module.MBridgeVideoView r2 = r4.k
            int r2 = r2.getBorderViewHeight()
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r4.k
            int r3 = r3.getBorderViewRadius()
            r0.resizeMiniCard(r1, r2, r3)
            goto L77
        L2e:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            r0.setCover(r1)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            r0.setMiniEndCardState(r1)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            r1 = 2
            r0.videoOperate(r1)
            goto L77
        L3f:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r4.l
            r2 = -1
            r0.showVideoClickView(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            r2 = 0
            r0.setCover(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            r0.setMiniEndCardState(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            r0.videoOperate(r1)
            goto L77
        L56:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r4.l
            if (r0 == 0) goto L70
            boolean r0 = r0.showAlertWebView()
            if (r0 != 0) goto L68
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            if (r0 == 0) goto L77
            r0.showAlertView()
            goto L77
        L68:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            if (r0 == 0) goto L77
            r0.alertWebViewShowed()
            goto L77
        L70:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r4.k
            if (r0 == 0) goto L77
            r0.showAlertView()
        L77:
            super.a(r5, r6)
            return
    }
}
