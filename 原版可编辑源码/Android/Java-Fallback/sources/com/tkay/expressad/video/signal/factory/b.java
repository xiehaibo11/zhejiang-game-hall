package com.tkay.expressad.video.signal.factory;

public class b extends com.tkay.expressad.video.signal.factory.a {
    private android.app.Activity h;
    private android.webkit.WebView i;
    private com.tkay.expressad.video.module.TkayVideoView j;
    private com.tkay.expressad.video.module.TkayContainerView k;
    private com.tkay.expressad.foundation.d.c l;
    private com.tkay.expressad.video.bt.module.TkayBTContainer m;
    private java.util.List<com.tkay.expressad.foundation.d.c> n;
    private com.tkay.expressad.video.signal.c.a o;
    private java.lang.String p;

    public b(android.app.Activity r1) {
            r0 = this;
            r0.<init>()
            r0.h = r1
            return
    }

    private b(android.app.Activity r1, android.webkit.WebView r2, com.tkay.expressad.video.module.TkayVideoView r3, com.tkay.expressad.video.module.TkayContainerView r4, com.tkay.expressad.foundation.d.c r5) {
            r0 = this;
            r0.<init>()
            r0.h = r1
            r0.i = r2
            r0.j = r3
            r0.k = r4
            r0.l = r5
            return
    }

    public b(android.app.Activity r1, android.webkit.WebView r2, com.tkay.expressad.video.module.TkayVideoView r3, com.tkay.expressad.video.module.TkayContainerView r4, com.tkay.expressad.foundation.d.c r5, com.tkay.expressad.video.signal.c.a r6) {
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

    public b(android.app.Activity r1, com.tkay.expressad.video.bt.module.TkayBTContainer r2, android.webkit.WebView r3) {
            r0 = this;
            r0.<init>()
            r0.h = r1
            r0.m = r2
            r0.i = r3
            return
    }

    public final void a(com.tkay.expressad.video.signal.a.j r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.n = r1
            return
    }

    @Override
    public com.tkay.expressad.video.signal.a getActivityProxy() {
            r2 = this;
            android.webkit.WebView r0 = r2.i
            if (r0 != 0) goto L9
            com.tkay.expressad.video.signal.a r0 = super.getActivityProxy()
            return r0
        L9:
            com.tkay.expressad.video.signal.a r0 = r2.a
            if (r0 != 0) goto L16
            com.tkay.expressad.video.signal.a.h r0 = new com.tkay.expressad.video.signal.a.h
            android.webkit.WebView r1 = r2.i
            r0.<init>(r1)
            r2.a = r0
        L16:
            com.tkay.expressad.video.signal.a r0 = r2.a
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.i getIJSRewardVideoV1() {
            r3 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r3.k
            if (r0 == 0) goto L1b
            android.app.Activity r0 = r3.h
            if (r0 != 0) goto L9
            goto L1b
        L9:
            com.tkay.expressad.video.signal.i r0 = r3.f
            if (r0 != 0) goto L18
            com.tkay.expressad.video.signal.a.m r0 = new com.tkay.expressad.video.signal.a.m
            android.app.Activity r1 = r3.h
            com.tkay.expressad.video.module.TkayContainerView r2 = r3.k
            r0.<init>(r1, r2)
            r3.f = r0
        L18:
            com.tkay.expressad.video.signal.i r0 = r3.f
            return r0
        L1b:
            com.tkay.expressad.video.signal.i r0 = super.getIJSRewardVideoV1()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.b getJSBTModule() {
            r3 = this;
            android.app.Activity r0 = r3.h
            if (r0 == 0) goto L1b
            com.tkay.expressad.video.bt.module.TkayBTContainer r0 = r3.m
            if (r0 != 0) goto L9
            goto L1b
        L9:
            com.tkay.expressad.video.signal.b r0 = r3.g
            if (r0 != 0) goto L18
            com.tkay.expressad.video.signal.a.i r0 = new com.tkay.expressad.video.signal.a.i
            android.app.Activity r1 = r3.h
            com.tkay.expressad.video.bt.module.TkayBTContainer r2 = r3.m
            r0.<init>(r1, r2)
            r3.g = r0
        L18:
            com.tkay.expressad.video.signal.b r0 = r3.g
            return r0
        L1b:
            com.tkay.expressad.video.signal.b r0 = super.getJSBTModule()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.c getJSCommon() {
            r3 = this;
            android.app.Activity r0 = r3.h
            if (r0 == 0) goto L4c
            com.tkay.expressad.foundation.d.c r0 = r3.l
            if (r0 != 0) goto L9
            goto L4c
        L9:
            com.tkay.expressad.video.signal.c r0 = r3.b
            if (r0 != 0) goto L18
            com.tkay.expressad.video.signal.a.j r0 = new com.tkay.expressad.video.signal.a.j
            android.app.Activity r1 = r3.h
            com.tkay.expressad.foundation.d.c r2 = r3.l
            r0.<init>(r1, r2)
            r3.b = r0
        L18:
            com.tkay.expressad.foundation.d.c r0 = r3.l
            int r0 = r0.k()
            r1 = 5
            if (r0 != r1) goto L34
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.n
            if (r0 == 0) goto L34
            com.tkay.expressad.video.signal.c r0 = r3.b
            boolean r0 = r0 instanceof com.tkay.expressad.video.signal.a.j
            if (r0 == 0) goto L34
            com.tkay.expressad.video.signal.c r0 = r3.b
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r3.n
            r0.a(r1)
        L34:
            com.tkay.expressad.video.signal.c r0 = r3.b
            android.app.Activity r1 = r3.h
            r0.a(r1)
            com.tkay.expressad.video.signal.c r0 = r3.b
            java.lang.String r1 = r3.p
            r0.a(r1)
            com.tkay.expressad.video.signal.c r0 = r3.b
            com.tkay.expressad.video.signal.c$a r1 = r3.o
            r0.a(r1)
            com.tkay.expressad.video.signal.c r0 = r3.b
            return r0
        L4c:
            com.tkay.expressad.video.signal.c r0 = super.getJSCommon()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.e getJSContainerModule() {
            r2 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r2.k
            if (r0 != 0) goto L9
            com.tkay.expressad.video.signal.e r0 = super.getJSContainerModule()
            return r0
        L9:
            com.tkay.expressad.video.signal.e r0 = r2.e
            if (r0 != 0) goto L16
            com.tkay.expressad.video.signal.a.k r0 = new com.tkay.expressad.video.signal.a.k
            com.tkay.expressad.video.module.TkayContainerView r1 = r2.k
            r0.<init>(r1)
            r2.e = r0
        L16:
            com.tkay.expressad.video.signal.e r0 = r2.e
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.g getJSNotifyProxy() {
            r2 = this;
            android.webkit.WebView r0 = r2.i
            if (r0 != 0) goto L9
            com.tkay.expressad.video.signal.g r0 = super.getJSNotifyProxy()
            return r0
        L9:
            com.tkay.expressad.video.signal.g r0 = r2.d
            if (r0 != 0) goto L16
            com.tkay.expressad.video.signal.a.l r0 = new com.tkay.expressad.video.signal.a.l
            android.webkit.WebView r1 = r2.i
            r0.<init>(r1)
            r2.d = r0
        L16:
            com.tkay.expressad.video.signal.g r0 = r2.d
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.j getJSVideoModule() {
            r2 = this;
            com.tkay.expressad.video.module.TkayVideoView r0 = r2.j
            if (r0 != 0) goto L9
            com.tkay.expressad.video.signal.j r0 = super.getJSVideoModule()
            return r0
        L9:
            com.tkay.expressad.video.signal.j r0 = r2.c
            if (r0 != 0) goto L16
            com.tkay.expressad.video.signal.a.n r0 = new com.tkay.expressad.video.signal.a.n
            com.tkay.expressad.video.module.TkayVideoView r1 = r2.j
            r0.<init>(r1)
            r2.c = r0
        L16:
            com.tkay.expressad.video.signal.j r0 = r2.c
            return r0
    }
}
