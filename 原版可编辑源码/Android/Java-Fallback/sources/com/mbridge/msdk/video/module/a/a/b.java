package com.mbridge.msdk.video.module.a.a;

public final class b extends com.mbridge.msdk.video.module.a.a.c {
    private com.mbridge.msdk.video.js.factory.IJSFactory k;

    public b(com.mbridge.msdk.video.js.factory.IJSFactory r12, com.mbridge.msdk.foundation.entity.CampaignEx r13, com.mbridge.msdk.videocommon.b.d r14, com.mbridge.msdk.videocommon.download.a r15, java.lang.String r16, java.lang.String r17, com.mbridge.msdk.video.module.a.a r18, int r19, boolean r20) {
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
            r9.k = r10
            if (r10 != 0) goto L1a
            r0 = 0
            r9.a = r0
        L1a:
            return
    }

    @Override
    public final void a(int r5, java.lang.Object r6) {
            r4 = this;
            boolean r0 = r4.a
            r1 = -1
            if (r0 == 0) goto Lc1
            r0 = 8
            if (r5 == r0) goto La2
            r0 = 105(0x69, float:1.47E-43)
            if (r5 == r0) goto L7c
            r0 = 107(0x6b, float:1.5E-43)
            r2 = 1
            if (r5 == r0) goto L56
            r0 = 112(0x70, float:1.57E-43)
            if (r5 == r0) goto L39
            r0 = 115(0x73, float:1.61E-43)
            if (r5 == r0) goto L1c
            goto Lc1
        L1c:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            com.mbridge.msdk.video.js.factory.IJSFactory r1 = r4.k
            com.mbridge.msdk.video.js.e r1 = r1.getJSContainerModule()
            int r2 = r0.getBorderViewWidth()
            int r3 = r0.getBorderViewHeight()
            int r0 = r0.getBorderViewRadius()
            r1.resizeMiniCard(r2, r3, r0)
            goto Lc1
        L39:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.setCover(r2)
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.setMiniEndCardState(r2)
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r1 = 2
            r0.videoOperate(r1)
            goto Lc1
        L56:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            r0.showVideoClickView(r1)
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r1 = 0
            r0.setCover(r1)
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.setMiniEndCardState(r1)
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.videoOperate(r2)
            goto Lc1
        L7c:
            java.lang.String r5 = r6.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "pt:"
            r0.append(r2)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "======="
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.f r0 = r0.getJSNotifyProxy()
            r2 = 3
            r0.a(r2, r5)
            r5 = r1
            goto Lc1
        La2:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            boolean r0 = r0.showAlertWebView()
            if (r0 != 0) goto Lb8
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.showAlertView()
            goto Lc1
        Lb8:
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r4.k
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            r0.alertWebViewShowed()
        Lc1:
            super.a(r5, r6)
            return
    }
}
