package com.sigmob.sdk.splash;

public class c extends com.sigmob.sdk.base.common.h {
    private int k;
    private boolean l;
    private int m;
    private int n;

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 3
            r1.k = r0
            return
    }

    public static com.sigmob.sdk.splash.c f(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            com.sigmob.sdk.splash.c r0 = new com.sigmob.sdk.splash.c
            r0.<init>()
            r0.b(r1)
            return r0
    }

    @Override
    public void a(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            java.lang.String r1 = "start"
            r2 = 0
            com.sigmob.sdk.base.common.z.b(r1, r2, r3)
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.a
            com.sigmob.sdk.base.network.f.a(r3, r1)
            return
    }

    @Override
    public void a(android.content.Context r1, com.czhj.sdk.common.utils.TouchLocation r2, com.czhj.sdk.common.utils.TouchLocation r3, com.sigmob.sdk.base.a r4, com.sigmob.sdk.base.models.BaseAdUnit r5) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.c
            com.sigmob.sdk.base.network.f.a(r5, r1)
            return
    }

    @Override
    public void b(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            java.lang.String r1 = "close"
            r2 = 0
            com.sigmob.sdk.base.common.z.b(r1, r2, r3)
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.w
            com.sigmob.sdk.base.network.f.a(r3, r1)
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            super.b(r2)
            com.sigmob.sdk.base.models.rtb.SplashAdSetting r2 = r2.getSplashAdSetting()
            if (r2 == 0) goto L29
            java.lang.Integer r0 = r2.show_duration
            int r0 = r0.intValue()
            r1.k = r0
            java.lang.Boolean r0 = r2.enable_close_on_click
            boolean r0 = r0.booleanValue()
            r1.l = r0
            java.lang.Integer r0 = r2.auto_click_mode
            int r0 = r0.intValue()
            r1.m = r0
            java.lang.Integer r2 = r2.auto_click_time_ratio
            int r2 = r2.intValue()
            r1.n = r2
        L29:
            return
    }

    @Override
    public void c(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            java.lang.String r1 = "skip"
            r2 = 0
            com.sigmob.sdk.base.common.z.b(r1, r2, r3)
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.s
            com.sigmob.sdk.base.network.f.a(r3, r1)
            return
    }

    public int l() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public boolean m() {
            r1 = this;
            boolean r0 = r1.l
            return r0
    }

    public int n() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public int o() {
            r1 = this;
            int r0 = r1.n
            return r0
    }
}
