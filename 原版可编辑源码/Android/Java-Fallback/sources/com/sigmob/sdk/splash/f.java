package com.sigmob.sdk.splash;

class f extends com.sigmob.sdk.base.common.v {
    com.sigmob.sdk.splash.c d;
    private com.sigmob.sdk.splash.SplashAdBroadcastReceiver e;

    interface a extends com.sigmob.sdk.base.common.m.b, com.sigmob.sdk.base.common.m.c {
        void c();

        void d();

        void e();

        void f();
    }

    protected f(com.sigmob.sdk.base.common.m.b r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static boolean c(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.getMaterial()
            java.lang.String r1 = r1.getCrid()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L21
            java.lang.String r1 = r0.video_url
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1f
            java.lang.String r1 = r0.image_src
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1f
            goto L21
        L1f:
            r1 = 1
            return r1
        L21:
            r1 = 0
            return r1
    }

    @Override
    protected void a(com.sigmob.sdk.base.common.m.b r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r2, android.os.Bundle r3) {
            r1 = this;
            if (r2 != 0) goto L4
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r1.c
        L4:
            com.sigmob.sdk.base.common.h r0 = r2.getAdConfig()
            com.sigmob.sdk.splash.c r0 = (com.sigmob.sdk.splash.c) r0
            r1.d = r0
            super.a(r2, r3)
            com.sigmob.sdk.base.common.m$b r2 = r1.b
            boolean r2 = r2 instanceof com.sigmob.sdk.splash.f.a
            if (r2 == 0) goto L25
            com.sigmob.sdk.splash.SplashAdBroadcastReceiver r2 = new com.sigmob.sdk.splash.SplashAdBroadcastReceiver
            com.sigmob.sdk.base.common.m$b r3 = r1.b
            com.sigmob.sdk.splash.f$a r3 = (com.sigmob.sdk.splash.f.a) r3
            java.lang.String r0 = r1.a
            r2.<init>(r3, r0)
            r1.e = r2
            r2.a(r2)
        L25:
            return
    }

    @Override
    public void a(java.util.Map<java.lang.String, java.lang.Object> r1, com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r0 = this;
            super.a(r1, r2)
            return
    }

    @Override
    protected boolean a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            boolean r1 = c(r1)
            return r1
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            super.b(r1)
            com.sigmob.sdk.splash.SplashAdBroadcastReceiver r1 = r0.e
            if (r1 == 0) goto Ld
            r1.b(r1)
            r1 = 0
            r0.e = r1
        Ld:
            return
    }
}
