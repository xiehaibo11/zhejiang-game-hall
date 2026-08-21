package com.tkay.expressad.video.signal.activity;

public abstract class AbstractJSActivity extends com.tkay.expressad.activity.TYBaseActivity implements com.tkay.expressad.video.signal.factory.IJSFactory {
    protected static final java.lang.String n = "AbstractJSActivity";
    protected com.tkay.expressad.video.signal.factory.IJSFactory o;

    public AbstractJSActivity() {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.video.signal.factory.a r0 = new com.tkay.expressad.video.signal.factory.a
            r0.<init>()
            r1.o = r0
            return
    }

    private static boolean b() {
            r0 = 0
            return r0
    }

    public final void a(com.tkay.expressad.video.signal.factory.IJSFactory r1) {
            r0 = this;
            r0.o = r1
            return
    }

    @Override
    public com.tkay.expressad.video.signal.a getActivityProxy() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.o
            com.tkay.expressad.video.signal.a r0 = r0.getActivityProxy()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.i getIJSRewardVideoV1() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.o
            com.tkay.expressad.video.signal.i r0 = r0.getIJSRewardVideoV1()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.b getJSBTModule() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.o
            com.tkay.expressad.video.signal.b r0 = r0.getJSBTModule()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.c getJSCommon() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.o
            com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.e getJSContainerModule() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.o
            com.tkay.expressad.video.signal.e r0 = r0.getJSContainerModule()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.g getJSNotifyProxy() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.o
            com.tkay.expressad.video.signal.g r0 = r0.getJSNotifyProxy()
            return r0
    }

    @Override
    public com.tkay.expressad.video.signal.j getJSVideoModule() {
            r1 = this;
            com.tkay.expressad.video.signal.factory.IJSFactory r0 = r1.o
            com.tkay.expressad.video.signal.j r0 = r0.getJSVideoModule()
            return r0
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.tkay.expressad.video.signal.c r0 = r1.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L21
            com.tkay.expressad.video.signal.e r0 = r1.getJSContainerModule()
            if (r0 == 0) goto L1a
            com.tkay.expressad.video.signal.e r0 = r1.getJSContainerModule()
            boolean r0 = r0.miniCardShowing()
            if (r0 != 0) goto L21
        L1a:
            com.tkay.expressad.video.signal.a r0 = r1.getActivityProxy()
            r0.g()
        L21:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.tkay.expressad.video.signal.c r0 = r1.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L14
            com.tkay.expressad.video.signal.a r0 = r1.getActivityProxy()
            r0.a(r2)
        L14:
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public void onPause() {
            r2 = this;
            super.onPause()
            com.tkay.expressad.video.signal.c r0 = r2.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L14
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r0.a()
        L14:
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r1 = 1
            r0.a(r1)
            return
    }

    @Override
    public void onResume() {
            r2 = this;
            super.onResume()
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 == 0) goto L8
            return
        L8:
            com.tkay.expressad.video.signal.c r0 = r2.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L19
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r0.b()
        L19:
            com.tkay.expressad.video.signal.a r0 = r2.getActivityProxy()
            r1 = 0
            r0.a(r1)
            return
    }
}
