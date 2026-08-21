package com.mbridge.msdk.video.js.container;

public abstract class AbstractJSContainer extends android.widget.FrameLayout implements com.mbridge.msdk.video.js.factory.IJSFactory {
    private int a;
    private int b;
    protected android.app.Activity j;
    protected java.lang.String k;
    protected java.lang.String l;
    protected com.mbridge.msdk.videocommon.d.c m;
    protected java.lang.String n;
    protected com.mbridge.msdk.videocommon.b.d o;
    protected java.lang.String p;
    protected int q;
    protected boolean r;
    protected boolean s;
    protected int t;
    protected int u;
    protected int v;
    protected boolean w;
    protected com.mbridge.msdk.video.js.factory.IJSFactory x;

    public AbstractJSContainer(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.a = r2
            r0 = 1
            r1.b = r0
            r0 = 2
            r1.q = r0
            r1.r = r2
            r1.s = r2
            r1.w = r2
            com.mbridge.msdk.video.js.factory.a r2 = new com.mbridge.msdk.video.js.factory.a
            r2.<init>()
            r1.x = r2
            return
    }

    public AbstractJSContainer(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.a = r1
            r2 = 1
            r0.b = r2
            r2 = 2
            r0.q = r2
            r0.r = r1
            r0.s = r1
            r0.w = r1
            com.mbridge.msdk.video.js.factory.a r1 = new com.mbridge.msdk.video.js.factory.a
            r1.<init>()
            r0.x = r1
            return
    }

    private java.lang.String a(int r4) {
            r3 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "code"
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L21
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L28
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L21
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Throwable -> L21
            r0 = r4
            goto L28
        L21:
            java.lang.String r4 = "AbstractJSContainer"
            java.lang.String r1 = "code to string is error"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)
        L28:
            return r0
    }

    private boolean b(int r5) {
            r4 = this;
            r0 = 18
            r1 = 0
            r2 = 1
            if (r5 == r2) goto L1c
            r3 = 2
            if (r5 == r3) goto La
            goto L39
        La:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2f
            if (r5 < r0) goto L16
            android.app.Activity r5 = r4.j     // Catch: java.lang.Throwable -> L2f
            r0 = 11
            r5.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2f
            goto L2d
        L16:
            android.app.Activity r5 = r4.j     // Catch: java.lang.Throwable -> L2f
            r5.setRequestedOrientation(r1)     // Catch: java.lang.Throwable -> L2f
            goto L2d
        L1c:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2f
            if (r5 < r0) goto L28
            android.app.Activity r5 = r4.j     // Catch: java.lang.Throwable -> L2f
            r0 = 12
            r5.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2f
            goto L2d
        L28:
            android.app.Activity r5 = r4.j     // Catch: java.lang.Throwable -> L2f
            r5.setRequestedOrientation(r2)     // Catch: java.lang.Throwable -> L2f
        L2d:
            r1 = r2
            goto L39
        L2f:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            java.lang.String r2 = "AbstractJSContainer"
            com.mbridge.msdk.foundation.tools.z.c(r2, r0, r5)
        L39:
            return r1
    }

    protected final void a(com.mbridge.msdk.videocommon.d.c r3, com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r2 = this;
            int r0 = r2.c(r4)
            r1 = 1
            if (r0 != r1) goto L8
            return
        L8:
            r0 = 0
            if (r4 == 0) goto L19
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r4.getRewardTemplateMode()
            if (r4 == 0) goto L19
            int r4 = r4.c()
            boolean r0 = r2.b(r4)
        L19:
            if (r0 != 0) goto L26
            if (r3 == 0) goto L26
            com.mbridge.msdk.videocommon.d.c r3 = r2.m
            int r3 = r3.e()
            r2.b(r3)
        L26:
            return
    }

    protected final void a(java.lang.Object r3) {
            r2 = this;
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            int r1 = r2.a
            java.lang.String r1 = r2.a(r1)
            r0.a(r3, r1)
            return
    }

    protected final void a(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            byte[] r4 = r4.getBytes()
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)
            r0.b(r3, r4)
            return
    }

    protected void a(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "AbstractJSContainer"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            android.app.Activity r2 = r1.j
            if (r2 == 0) goto Lc
            r2.finish()
        Lc:
            return
    }

    protected final com.mbridge.msdk.video.js.a.j b(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2.r
            if (r1 == 0) goto Lb
            r1 = 287(0x11f, float:4.02E-43)
            goto Ld
        Lb:
            r1 = 94
        Ld:
            com.mbridge.msdk.videocommon.a$a r3 = com.mbridge.msdk.videocommon.a.a(r1, r3)
            if (r3 == 0) goto L33
            boolean r1 = r3.c()
            if (r1 == 0) goto L33
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r3.a()
            java.lang.Object r1 = r3.getObject()
            boolean r1 = r1 instanceof com.mbridge.msdk.video.js.a.j
            if (r1 == 0) goto L33
            java.lang.String r0 = "AbstractJSContainer"
            java.lang.String r1 = "JSCommon 进来"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            java.lang.Object r3 = r3.getObject()
            com.mbridge.msdk.video.js.a.j r3 = (com.mbridge.msdk.video.js.a.j) r3
            return r3
        L33:
            return r0
    }

    protected final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.l
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1d
            com.mbridge.msdk.videocommon.d.c r0 = r1.m
            if (r0 == 0) goto L1d
            java.lang.String r0 = r0.D()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1d
            com.mbridge.msdk.videocommon.d.c r0 = r1.m
            java.lang.String r0 = r0.D()
            return r0
        L1d:
            java.lang.String r0 = r1.l
            return r0
    }

    protected final int c(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            com.mbridge.msdk.video.js.a.j r1 = r0.b(r1)
            if (r1 == 0) goto Lb
            int r1 = r1.m()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    @Override
    public com.mbridge.msdk.video.js.a getActivityProxy() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.x
            com.mbridge.msdk.video.js.a r0 = r0.getActivityProxy()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.h getIJSRewardVideoV1() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.x
            com.mbridge.msdk.video.js.h r0 = r0.getIJSRewardVideoV1()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.b getJSBTModule() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.x
            com.mbridge.msdk.video.js.b r0 = r0.getJSBTModule()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.c getJSCommon() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.x
            com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.e getJSContainerModule() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.x
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.f getJSNotifyProxy() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.x
            com.mbridge.msdk.video.js.f r0 = r0.getJSNotifyProxy()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.i getJSVideoModule() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.x
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            return r0
    }

    public java.lang.String getPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public java.lang.String getUnitId() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            com.mbridge.msdk.video.js.c r0 = r1.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.js.a r0 = r1.getActivityProxy()
            r0.a(r2)
        L11:
            return
    }

    public void onDestroy() {
            r1 = this;
            com.mbridge.msdk.video.js.c r0 = r1.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.js.a r0 = r1.getActivityProxy()
            r0.c()
        L11:
            return
    }

    public void onPause() {
            r2 = this;
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.a()
        L11:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r1 = 1
            r0.a(r1)
            return
    }

    public void onRestart() {
            r2 = this;
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.f()
        L11:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r1 = 4
            r0.a(r1)
            return
    }

    public void onResume() {
            r2 = this;
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 == 0) goto L5
            return
        L5:
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L16
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.b()
        L16:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r1 = 0
            r0.a(r1)
            return
    }

    public void onStart() {
            r2 = this;
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.e()
        L11:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r1 = 2
            r0.a(r1)
            return
    }

    public void onStop() {
            r2 = this;
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.d()
        L11:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r1 = 3
            r0.a(r1)
            return
    }

    public void registerJsFactory(com.mbridge.msdk.video.js.factory.IJSFactory r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setActivity(android.app.Activity r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setBidCampaign(boolean r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public void setBigOffer(boolean r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setIV(boolean r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public void setIVRewardEnable(int r1, int r2, int r3) {
            r0 = this;
            r0.t = r1
            r0.u = r2
            r0.v = r3
            return
    }

    public void setMute(int r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setPlacementId(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void setReward(com.mbridge.msdk.videocommon.b.d r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setRewardId(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public void setRewardUnitSetting(com.mbridge.msdk.videocommon.d.c r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setUserId(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }
}
