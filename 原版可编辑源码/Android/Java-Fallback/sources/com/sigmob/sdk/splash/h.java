package com.sigmob.sdk.splash;

class h extends com.sigmob.sdk.splash.d {
    private final com.sigmob.sdk.base.views.c b;
    private final com.sigmob.sdk.base.models.BaseAdUnit c;


    public h(android.content.Context r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r2 = this;
            r2.<init>(r3)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.sigmob.sdk.base.views.c r1 = new com.sigmob.sdk.base.views.c
            r1.<init>(r3)
            r2.b = r1
            r3 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2.setBackgroundColor(r3)
            r2.c = r4
            com.sigmob.sdk.base.views.c r3 = r2.b
            r2.addView(r3, r0)
            return
    }

    static com.sigmob.sdk.base.models.BaseAdUnit a(com.sigmob.sdk.splash.h r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.c
            return r0
    }

    @Override
    public void a() {
            r2 = this;
            r0 = 0
            super.setVisibility(r0)
            java.lang.String r1 = "video showAd"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.sdk.base.views.c r1 = r2.b
            r1.setVisibility(r0)
            com.sigmob.sdk.base.views.c r0 = r2.b
            r0.d()
            return
    }

    @Override
    public boolean a(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            java.lang.String r0 = "video start"
            com.czhj.sdk.logger.SigmobLog.i(r0)
            java.lang.String r3 = r3.getSplashFilePath()
            com.sigmob.sdk.base.views.c r0 = r2.b
            r1 = 0
            r0.a(r1, r1)
            com.sigmob.sdk.base.views.c r0 = r2.b
            com.sigmob.sdk.splash.h$1 r1 = new com.sigmob.sdk.splash.h$1
            r1.<init>(r2)
            r0.setOnPreparedListener(r1)
            com.sigmob.sdk.base.views.c r0 = r2.b
            r0.setVideoPath(r3)
            r3 = 1
            return r3
    }

    @Override
    public void b() {
            r1 = this;
            com.sigmob.sdk.base.views.c r0 = r1.b
            r0.a()
            return
    }

    @Override
    public void c() {
            r1 = this;
            com.sigmob.sdk.base.views.c r0 = r1.b
            r0.b()
            return
    }

    @Override
    public void setVisibility(int r4) {
            r3 = this;
            r0 = 8
            if (r4 != r0) goto L2f
            com.sigmob.sdk.base.views.c r0 = r3.b     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L2f
            java.lang.String r0 = "video GONE"
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L16
            com.sigmob.sdk.base.views.c r0 = r3.b     // Catch: java.lang.Throwable -> L16
            r0.c()     // Catch: java.lang.Throwable -> L16
            r3.removeAllViews()     // Catch: java.lang.Throwable -> L16
            goto L2f
        L16:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "set splash ad video content error: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L2f:
            super.setVisibility(r4)
            return
    }
}
