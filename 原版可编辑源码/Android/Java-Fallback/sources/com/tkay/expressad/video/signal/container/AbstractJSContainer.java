package com.tkay.expressad.video.signal.container;

public abstract class AbstractJSContainer extends android.widget.FrameLayout implements com.tkay.expressad.video.signal.factory.IJSFactory {
    protected static final java.lang.String k = "AbstractJSContainer";
    private int a;
    private int b;
    protected android.app.Activity l;
    protected java.lang.String m;
    protected java.lang.String n;
    protected com.tkay.expressad.videocommon.e.d o;
    protected java.lang.String p;
    protected com.tkay.expressad.videocommon.c.c q;
    protected java.lang.String r;
    protected int s;
    protected boolean t;
    protected boolean u;
    protected int v;
    protected int w;
    protected int x;
    protected boolean y;
    protected com.tkay.expressad.video.signal.factory.IJSFactory z;

    public AbstractJSContainer(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.a = r2
            r0 = 1
            r1.b = r0
            r0 = 2
            r1.s = r0
            r1.t = r2
            r1.u = r2
            r1.y = r2
            com.tkay.expressad.video.signal.factory.a r2 = new com.tkay.expressad.video.signal.factory.a
            r2.<init>()
            r1.z = r2
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
            r0.s = r2
            r0.t = r1
            r0.u = r1
            r0.y = r1
            com.tkay.expressad.video.signal.factory.a r1 = new com.tkay.expressad.video.signal.factory.a
            r1.<init>()
            r0.z = r1
            return
    }

    private static java.lang.String a(int r3) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L20
            r1.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "code"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L20
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L20
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L20
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L20
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Throwable -> L20
            r0 = r3
        L20:
            return r0
    }

    private static void a(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1, java.lang.String r2, java.lang.String r3) {
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            byte[] r3 = r3.getBytes()
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)
            com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r3)
            return
    }

    protected static void a(java.lang.Object r2, java.lang.String r3) {
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            byte[] r3 = r3.getBytes()
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)
            r0.b(r2, r3)
            return
    }

    private void b(java.lang.Object r3) {
            r2 = this;
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            int r1 = r2.b
            java.lang.String r1 = a(r1)
            r0.b(r3, r1)
            return
    }

    private static void b(java.lang.Object r2, java.lang.String r3) {
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            byte[] r3 = r3.getBytes()
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)
            r0.a(r2, r3)
            return
    }

    private boolean b(int r5) {
            r4 = this;
            r0 = 18
            r1 = 0
            r2 = 1
            if (r5 == r2) goto L1d
            r3 = 2
            if (r5 == r3) goto La
            goto L33
        La:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2f
            if (r5 < r0) goto L16
            android.app.Activity r5 = r4.l     // Catch: java.lang.Throwable -> L2f
            r0 = 11
            r5.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2f
            goto L1b
        L16:
            android.app.Activity r5 = r4.l     // Catch: java.lang.Throwable -> L2f
            r5.setRequestedOrientation(r1)     // Catch: java.lang.Throwable -> L2f
        L1b:
            r1 = r2
            goto L33
        L1d:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2f
            if (r5 < r0) goto L29
            android.app.Activity r5 = r4.l     // Catch: java.lang.Throwable -> L2f
            r0 = 12
            r5.setRequestedOrientation(r0)     // Catch: java.lang.Throwable -> L2f
            goto L1b
        L29:
            android.app.Activity r5 = r4.l     // Catch: java.lang.Throwable -> L2f
            r5.setRequestedOrientation(r2)     // Catch: java.lang.Throwable -> L2f
            goto L1b
        L2f:
            r5 = move-exception
            r5.getMessage()
        L33:
            return r1
    }

    protected final void a(com.tkay.expressad.videocommon.e.d r3, com.tkay.expressad.foundation.d.c r4) {
            r2 = this;
            int r0 = r2.c(r4)
            r1 = 1
            if (r0 != r1) goto L8
            return
        L8:
            r0 = 0
            if (r4 == 0) goto L19
            com.tkay.expressad.foundation.d.c$c r4 = r4.M()
            if (r4 == 0) goto L19
            int r4 = r4.c()
            boolean r0 = r2.b(r4)
        L19:
            if (r0 != 0) goto L26
            if (r3 == 0) goto L26
            com.tkay.expressad.videocommon.e.d r3 = r2.o
            int r3 = r3.b()
            r2.b(r3)
        L26:
            return
    }

    protected final void a(java.lang.Object r3) {
            r2 = this;
            com.tkay.expressad.atsignalcommon.windvane.j r0 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            int r1 = r2.a
            java.lang.String r1 = a(r1)
            r0.a(r3, r1)
            return
    }

    protected void a(java.lang.String r1) {
            r0 = this;
            android.app.Activity r1 = r0.l
            if (r1 == 0) goto L7
            r1.finish()
        L7:
            return
    }

    protected final com.tkay.expressad.video.signal.a.j b(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2.t
            if (r1 == 0) goto Lb
            r1 = 287(0x11f, float:4.02E-43)
            goto Ld
        Lb:
            r1 = 94
        Ld:
            com.tkay.expressad.videocommon.a$a r3 = com.tkay.expressad.videocommon.a.a(r1, r3)
            if (r3 == 0) goto L2c
            boolean r1 = r3.c()
            if (r1 == 0) goto L2c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a()
            java.lang.Object r1 = r3.getObject()
            boolean r1 = r1 instanceof com.tkay.expressad.video.signal.a.j
            if (r1 == 0) goto L2c
            java.lang.Object r3 = r3.getObject()
            com.tkay.expressad.video.signal.a.j r3 = (com.tkay.expressad.video.signal.a.j) r3
            return r3
        L2c:
            return r0
    }

    protected final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.n
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1d
            com.tkay.expressad.videocommon.e.d r0 = r1.o
            if (r0 == 0) goto L1d
            java.lang.String r0 = r0.O()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1d
            com.tkay.expressad.videocommon.e.d r0 = r1.o
            java.lang.String r0 = r0.O()
            return r0
        L1d:
            java.lang.String r0 = r1.n
            return r0
    }

    protected final int c(com.tkay.expressad.foundation.d.c r1) {
            r0 = this;
            com.tkay.expressad.video.signal.a.j r1 = r0.b(r1)
            if (r1 == 0) goto Lb
            int r1 = r1.d()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    @Override
    public com.tkay.expressad.video.signal.a getActivityProxy() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.z
            com.tkay.expressad.video.signal.a r0 = r0.getActivityProxy()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.i getIJSRewardVideoV1() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.z
            com.tkay.expressad.video.signal.i r0 = r0.getIJSRewardVideoV1()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.b getJSBTModule() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.z
            com.tkay.expressad.video.signal.b r0 = r0.getJSBTModule()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.c getJSCommon() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.z
            com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.e getJSContainerModule() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.z
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.g getJSNotifyProxy() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.z
            com.tkay.expressad.video.signal.g r0 = r0.getJSNotifyProxy()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.j getJSVideoModule() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.z
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            return r0
    }

    public java.lang.String getPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public java.lang.String getUnitId() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            com.tkay.expressad.video.signal.c r0 = r1.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L11
            com.tkay.expressad.video.signal.a r0 = r1.getActivityProxy()
            r0.a(r2)
        L11:
            return
    }

    public void onDestroy() {
            r1 = this;
            com.tkay.expressad.video.signal.c r0 = r1.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L11
            com.tkay.expressad.video.signal.a r0 = r1.getActivityProxy()
            r0.c()
        L11:
            return
    }

    public void onPause() {
            r2 = this;
            com.tkay.expressad.video.signal.c r0 = r2.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L11
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r0.a()
        L11:
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r1 = 1
            r0.a(r1)
            return
    }

    public void onRestart() {
            r2 = this;
            com.tkay.expressad.video.signal.c r0 = r2.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto Ld
            r2.getActivityProxy()
        Ld:
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r1 = 4
            r0.a(r1)
            return
    }

    public void onResume() {
            r2 = this;
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.expressad.video.signal.c r0 = r2.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L16
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r0.b()
        L16:
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r1 = 0
            r0.a(r1)
            return
    }

    public void onStart() {
            r2 = this;
            com.tkay.expressad.video.signal.c r0 = r2.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto Ld
            r2.getActivityProxy()
        Ld:
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r1 = 2
            r0.a(r1)
            return
    }

    public void onStop() {
            r2 = this;
            com.tkay.expressad.video.signal.c r0 = r2.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto Ld
            r2.getActivityProxy()
        Ld:
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r1 = 3
            r0.a(r1)
            return
    }

    public void registerJsFactory(com.tkay.expressad.video.signal.factory.IJSFactory r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setActivity(android.app.Activity r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void setBidCampaign(boolean r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public void setBigOffer(boolean r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void setIV(boolean r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public void setIVRewardEnable(int r1, int r2, int r3) {
            r0 = this;
            r0.v = r1
            r0.w = r2
            r0.x = r3
            return
    }

    public void setMute(int r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public void setPlacementId(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void setReward(com.tkay.expressad.videocommon.c.c r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setRewardId(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public void setRewardUnitSetting(com.tkay.expressad.videocommon.e.d r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setUserId(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }
}
