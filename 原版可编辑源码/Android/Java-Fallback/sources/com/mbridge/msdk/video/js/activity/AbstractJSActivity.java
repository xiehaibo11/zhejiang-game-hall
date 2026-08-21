package com.mbridge.msdk.video.js.activity;

public abstract class AbstractJSActivity extends com.mbridge.msdk.activity.MBBaseActivity implements com.mbridge.msdk.video.js.factory.IJSFactory {
    protected static final java.lang.String TAG = "AbstractJSActivity";
    protected com.mbridge.msdk.video.js.factory.IJSFactory jsFactory;

    public AbstractJSActivity() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.video.js.factory.a r0 = new com.mbridge.msdk.video.js.factory.a
            r0.<init>()
            r1.jsFactory = r0
            return
    }

    public boolean canBackPress() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.a getActivityProxy() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.jsFactory
            com.mbridge.msdk.video.js.a r0 = r0.getActivityProxy()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.h getIJSRewardVideoV1() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.jsFactory
            com.mbridge.msdk.video.js.h r0 = r0.getIJSRewardVideoV1()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.b getJSBTModule() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.jsFactory
            com.mbridge.msdk.video.js.b r0 = r0.getJSBTModule()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.c getJSCommon() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.jsFactory
            com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.e getJSContainerModule() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.jsFactory
            com.mbridge.msdk.video.js.e r0 = r0.getJSContainerModule()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.f getJSNotifyProxy() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.jsFactory
            com.mbridge.msdk.video.js.f r0 = r0.getJSNotifyProxy()
            return r0
    }

    @Override
    public com.mbridge.msdk.video.js.i getJSVideoModule() {
            r1 = this;
            com.mbridge.msdk.video.js.factory.IJSFactory r0 = r1.jsFactory
            com.mbridge.msdk.video.js.i r0 = r0.getJSVideoModule()
            return r0
    }

    @Override
    public void onBackPressed() {
            r2 = this;
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L23
            com.mbridge.msdk.video.js.e r0 = r2.getJSContainerModule()
            if (r0 == 0) goto L1b
            com.mbridge.msdk.video.js.e r0 = r2.getJSContainerModule()
            boolean r0 = r0.miniCardShowing()
            if (r0 == 0) goto L1b
            goto L34
        L1b:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.g()
            goto L34
        L23:
            boolean r0 = r2.canBackPress()
            if (r0 == 0) goto L2d
            super.onBackPressed()
            goto L34
        L2d:
            java.lang.String r0 = "AbstractJSActivity"
            java.lang.String r1 = "onBackPressed can't excute"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L34:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.mbridge.msdk.video.js.c r0 = r1.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L14
            com.mbridge.msdk.video.js.a r0 = r1.getActivityProxy()
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
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L14
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.a()
        L14:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r1 = 1
            r0.a(r1)
            return
    }

    @Override
    public void onResume() {
            r2 = this;
            super.onResume()
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 == 0) goto L8
            return
        L8:
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L19
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.b()
        L19:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r1 = 0
            r0.a(r1)
            return
    }

    public void registerJsFactory(com.mbridge.msdk.video.js.factory.IJSFactory r1) {
            r0 = this;
            r0.jsFactory = r1
            return
    }
}
