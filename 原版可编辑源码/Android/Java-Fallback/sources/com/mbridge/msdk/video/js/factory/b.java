package com.mbridge.msdk.video.js.factory;

public final class b extends com.mbridge.msdk.video.js.factory.a {
    private android.app.Activity h;
    private android.webkit.WebView i;
    private com.mbridge.msdk.video.module.MBridgeVideoView j;
    private com.mbridge.msdk.video.module.MBridgeContainerView k;
    private com.mbridge.msdk.foundation.entity.CampaignEx l;
    private com.mbridge.msdk.video.bt.module.MBridgeBTContainer m;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> n;
    private com.mbridge.msdk.video.js.c.a o;
    private java.lang.String p;

    public b(android.app.Activity r1) {
            r0 = this;
            r0.<init>()
            r0.h = r1
            return
    }

    public b(android.app.Activity r1, android.webkit.WebView r2, com.mbridge.msdk.video.module.MBridgeVideoView r3, com.mbridge.msdk.video.module.MBridgeContainerView r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, com.mbridge.msdk.video.js.c.a r6) {
            r0 = this;
            r0.<init>()
            r0.h = r1
            r0.i = r2
            r0.j = r3
            r0.k = r4
            r0.l = r5
            r0.o = r6
            java.lang.String r1 = r3.getUnitId()
            r0.p = r1
            return
    }

    public b(android.app.Activity r1, com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2, android.webkit.WebView r3) {
            r0 = this;
            r0.<init>()
            r0.h = r1
            r0.m = r2
            r0.i = r3
            return
    }

    public final void a(com.mbridge.msdk.video.js.a.j r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.n = r1
            return
    }

    @Override
    public final com.mbridge.msdk.video.js.a getActivityProxy() {
            r2 = this;
            android.webkit.WebView r0 = r2.i
            if (r0 != 0) goto L9
            com.mbridge.msdk.video.js.a r0 = super.getActivityProxy()
            return r0
        L9:
            com.mbridge.msdk.video.js.a r0 = r2.a
            if (r0 != 0) goto L16
            com.mbridge.msdk.video.js.a.h r0 = new com.mbridge.msdk.video.js.a.h
            android.webkit.WebView r1 = r2.i
            r0.<init>(r1)
            r2.a = r0
        L16:
            com.mbridge.msdk.video.js.a r0 = r2.a
            return r0
    }

    @Override
    public final com.mbridge.msdk.video.js.h getIJSRewardVideoV1() {
            r3 = this;
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r3.k
            if (r0 == 0) goto L1b
            android.app.Activity r0 = r3.h
            if (r0 != 0) goto L9
            goto L1b
        L9:
            com.mbridge.msdk.video.js.h r0 = r3.f
            if (r0 != 0) goto L18
            com.mbridge.msdk.video.js.a.m r0 = new com.mbridge.msdk.video.js.a.m
            android.app.Activity r1 = r3.h
            com.mbridge.msdk.video.module.MBridgeContainerView r2 = r3.k
            r0.<init>(r1, r2)
            r3.f = r0
        L18:
            com.mbridge.msdk.video.js.h r0 = r3.f
            return r0
        L1b:
            com.mbridge.msdk.video.js.h r0 = super.getIJSRewardVideoV1()
            return r0
    }

    @Override
    public final com.mbridge.msdk.video.js.b getJSBTModule() {
            r3 = this;
            android.app.Activity r0 = r3.h
            if (r0 == 0) goto L1b
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r3.m
            if (r0 != 0) goto L9
            goto L1b
        L9:
            com.mbridge.msdk.video.js.b r0 = r3.g
            if (r0 != 0) goto L18
            com.mbridge.msdk.video.js.a.i r0 = new com.mbridge.msdk.video.js.a.i
            android.app.Activity r1 = r3.h
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = r3.m
            r0.<init>(r1, r2)
            r3.g = r0
        L18:
            com.mbridge.msdk.video.js.b r0 = r3.g
            return r0
        L1b:
            com.mbridge.msdk.video.js.b r0 = super.getJSBTModule()
            return r0
    }

    @Override
    public final com.mbridge.msdk.video.js.c getJSCommon() {
            r3 = this;
            android.app.Activity r0 = r3.h
            if (r0 == 0) goto L4c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.l
            if (r0 != 0) goto L9
            goto L4c
        L9:
            com.mbridge.msdk.video.js.c r0 = r3.b
            if (r0 != 0) goto L18
            com.mbridge.msdk.video.js.a.j r0 = new com.mbridge.msdk.video.js.a.j
            android.app.Activity r1 = r3.h
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r3.l
            r0.<init>(r1, r2)
            r3.b = r0
        L18:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.l
            int r0 = r0.getDynamicTempCode()
            r1 = 5
            if (r0 != r1) goto L34
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.n
            if (r0 == 0) goto L34
            com.mbridge.msdk.video.js.c r0 = r3.b
            boolean r0 = r0 instanceof com.mbridge.msdk.video.js.a.j
            if (r0 == 0) goto L34
            com.mbridge.msdk.video.js.c r0 = r3.b
            com.mbridge.msdk.video.js.a.j r0 = (com.mbridge.msdk.video.js.a.j) r0
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r3.n
            r0.a(r1)
        L34:
            com.mbridge.msdk.video.js.c r0 = r3.b
            android.app.Activity r1 = r3.h
            r0.a(r1)
            com.mbridge.msdk.video.js.c r0 = r3.b
            java.lang.String r1 = r3.p
            r0.a(r1)
            com.mbridge.msdk.video.js.c r0 = r3.b
            com.mbridge.msdk.video.js.c$a r1 = r3.o
            r0.a(r1)
            com.mbridge.msdk.video.js.c r0 = r3.b
            return r0
        L4c:
            com.mbridge.msdk.video.js.c r0 = super.getJSCommon()
            return r0
    }

    @Override
    public final com.mbridge.msdk.video.js.e getJSContainerModule() {
            r2 = this;
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r2.k
            if (r0 != 0) goto L9
            com.mbridge.msdk.video.js.e r0 = super.getJSContainerModule()
            return r0
        L9:
            com.mbridge.msdk.video.js.e r0 = r2.e
            if (r0 != 0) goto L16
            com.mbridge.msdk.video.js.a.k r0 = new com.mbridge.msdk.video.js.a.k
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r2.k
            r0.<init>(r1)
            r2.e = r0
        L16:
            com.mbridge.msdk.video.js.e r0 = r2.e
            return r0
    }

    @Override
    public final com.mbridge.msdk.video.js.f getJSNotifyProxy() {
            r2 = this;
            android.webkit.WebView r0 = r2.i
            if (r0 != 0) goto L9
            com.mbridge.msdk.video.js.f r0 = super.getJSNotifyProxy()
            return r0
        L9:
            com.mbridge.msdk.video.js.f r0 = r2.d
            if (r0 != 0) goto L16
            com.mbridge.msdk.video.js.a.l r0 = new com.mbridge.msdk.video.js.a.l
            android.webkit.WebView r1 = r2.i
            r0.<init>(r1)
            r2.d = r0
        L16:
            com.mbridge.msdk.video.js.f r0 = r2.d
            return r0
    }

    @Override
    public final com.mbridge.msdk.video.js.i getJSVideoModule() {
            r2 = this;
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.j
            if (r0 != 0) goto L9
            com.mbridge.msdk.video.js.i r0 = super.getJSVideoModule()
            return r0
        L9:
            com.mbridge.msdk.video.js.i r0 = r2.c
            if (r0 != 0) goto L16
            com.mbridge.msdk.video.js.a.n r0 = new com.mbridge.msdk.video.js.a.n
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r2.j
            r0.<init>(r1)
            r2.c = r0
        L16:
            com.mbridge.msdk.video.js.i r0 = r2.c
            return r0
    }
}
