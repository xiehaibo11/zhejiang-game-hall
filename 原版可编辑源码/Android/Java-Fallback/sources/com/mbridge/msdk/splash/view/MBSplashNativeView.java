package com.mbridge.msdk.splash.view;

public class MBSplashNativeView extends android.widget.RelativeLayout {
    private int A;
    private int B;
    private float C;
    private float D;
    private boolean E;
    private boolean F;
    private boolean G;
    private boolean H;
    private boolean I;
    private java.lang.String J;
    private java.lang.String K;
    private com.mbridge.msdk.splash.view.MBSplashView L;
    private com.mbridge.msdk.foundation.entity.CampaignEx M;
    private com.mbridge.msdk.shake.MBShakeView N;
    private java.lang.String O;
    private java.lang.String P;
    private java.lang.String Q;
    private com.mbridge.msdk.shake.b R;
    private com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView a;
    private com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView b;
    private android.widget.RelativeLayout c;
    private android.widget.ImageView d;
    private com.mbridge.msdk.widget.FeedBackButton e;
    private android.widget.TextView f;
    private android.widget.RelativeLayout g;
    private com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView h;
    private android.widget.TextView i;
    private com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView j;
    private android.widget.TextView k;
    private android.widget.TextView l;
    private android.widget.RelativeLayout m;
    private android.widget.TextView n;
    private android.widget.TextView o;
    private android.widget.TextView p;
    private com.mbridge.msdk.splash.view.nativeview.MBSplashClickView q;
    private int r;
    private int s;
    private int t;
    private int u;
    private int v;
    private int w;
    private int x;
    private int y;
    private int z;












    public MBSplashNativeView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.H = r1
            r0.I = r1
            return
    }

    public MBSplashNativeView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public MBSplashNativeView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.H = r1
            r0.I = r1
            return
    }

    public MBSplashNativeView(android.content.Context r8, com.mbridge.msdk.splash.view.MBSplashView r9, com.mbridge.msdk.splash.a.c r10) {
            r7 = this;
            java.lang.String r0 = "string"
            java.lang.String r1 = "MBSplashNativeView"
            java.lang.String r2 = "id"
            r7.<init>(r8)
            r8 = 0
            r7.H = r8
            r7.I = r8
            if (r10 == 0) goto L4b4
            java.lang.String r3 = r10.b()
            r7.J = r3
            java.lang.String r3 = r10.a()
            r7.K = r3
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r10.c()
            r7.M = r3
            r7.L = r9
            int r9 = r10.e()
            r7.r = r9
            int r9 = r10.f()
            r7.u = r9
            int r9 = r10.g()
            r7.t = r9
            int r9 = r10.h()
            r7.v = r9
            int r9 = r10.i()
            r7.w = r9
            int r9 = r10.j()
            r7.x = r9
            int r9 = r10.k()
            r7.y = r9
            int r9 = r10.l()
            r7.z = r9
            boolean r9 = r10.d()
            r7.G = r9
            int r9 = r10.m()
            r7.A = r9
            r9 = 1
            r10 = 0
            int r3 = r7.z     // Catch: java.lang.Throwable -> L26b
            java.lang.String r4 = "layout"
            if (r3 != r9) goto L77
            android.content.Context r3 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_portrait"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r5, r4)     // Catch: java.lang.Throwable -> L26b
            goto L85
        L77:
            android.content.Context r3 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_landscape"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r5, r4)     // Catch: java.lang.Throwable -> L26b
        L85:
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.view.LayoutInflater r4 = android.view.LayoutInflater.from(r4)     // Catch: java.lang.Throwable -> L26b
            android.view.View r3 = r4.inflate(r3, r10)     // Catch: java.lang.Throwable -> L26b
            r7.addView(r3)     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_iv_image_bg"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r4 = (com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView) r4     // Catch: java.lang.Throwable -> L26b
            r7.a = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_iv_image"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r4 = (com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView) r4     // Catch: java.lang.Throwable -> L26b
            r7.b = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_topcontroller"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4     // Catch: java.lang.Throwable -> L26b
            r7.c = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_iv_link"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.ImageView r4 = (android.widget.ImageView) r4     // Catch: java.lang.Throwable -> L26b
            r7.d = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_feedback"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            com.mbridge.msdk.widget.FeedBackButton r4 = (com.mbridge.msdk.widget.FeedBackButton) r4     // Catch: java.lang.Throwable -> L26b
            r7.e = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_skip"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L26b
            r7.f = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_landscape_foreground"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4     // Catch: java.lang.Throwable -> L26b
            r7.g = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_iv_icon"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r4 = (com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView) r4     // Catch: java.lang.Throwable -> L26b
            r7.h = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_title"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L26b
            r7.i = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_iv_foregroundimage"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r4 = (com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView) r4     // Catch: java.lang.Throwable -> L26b
            r7.j = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_adrect"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L26b
            r7.k = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_layout_appinfo"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4     // Catch: java.lang.Throwable -> L26b
            r7.m = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_appinfo"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L26b
            r7.n = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_privacy"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L26b
            r7.o = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_permission"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L26b
            r7.p = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_click"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r4 = r3.findViewById(r4)     // Catch: java.lang.Throwable -> L26b
            com.mbridge.msdk.splash.view.nativeview.MBSplashClickView r4 = (com.mbridge.msdk.splash.view.nativeview.MBSplashClickView) r4     // Catch: java.lang.Throwable -> L26b
            r7.q = r4     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_tv_adcircle"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L26b
            android.view.View r2 = r3.findViewById(r2)     // Catch: java.lang.Throwable -> L26b
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L26b
            r7.l = r2     // Catch: java.lang.Throwable -> L26b
            android.content.Context r2 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r3 = "mbridge_splash_count_time_can_skip"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L26b
            android.content.Context r3 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r4 = "mbridge_splash_count_time_can_skip_not"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r4, r0)     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r5 = "mbridge_splash_count_time_can_skip_s"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r0)     // Catch: java.lang.Throwable -> L26b
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L26b
            r7.P = r2     // Catch: java.lang.Throwable -> L26b
            android.content.Context r2 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Throwable -> L26b
            r7.Q = r2     // Catch: java.lang.Throwable -> L26b
            android.content.Context r2 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L26b
            java.lang.String r0 = r2.getString(r0)     // Catch: java.lang.Throwable -> L26b
            r7.O = r0     // Catch: java.lang.Throwable -> L26b
            android.content.Context r0 = r7.getContext()     // Catch: java.lang.Throwable -> L26b
            r2 = 1091567616(0x41100000, float:9.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)     // Catch: java.lang.Throwable -> L26b
            r7.B = r0     // Catch: java.lang.Throwable -> L26b
            goto L273
        L26b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L273:
            android.content.Context r0 = r7.getContext()     // Catch: java.lang.Throwable -> L28e
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Throwable -> L28e
            android.content.res.Configuration r0 = r0.getConfiguration()     // Catch: java.lang.Throwable -> L28e
            java.util.Locale r0 = r0.locale     // Catch: java.lang.Throwable -> L28e
            java.lang.String r0 = r0.getLanguage()     // Catch: java.lang.Throwable -> L28e
            java.lang.String r2 = "zh"
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L28e
            r7.E = r0     // Catch: java.lang.Throwable -> L28e
            goto L296
        L28e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L296:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            boolean r0 = r0.b()
            r2 = 8
            if (r0 == 0) goto L2ce
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.M
            java.lang.String r3 = r7.J
            r0.setCampaignUnitId(r3)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r3 = r7.J
            com.mbridge.msdk.splash.view.MBSplashNativeView$11 r4 = new com.mbridge.msdk.splash.view.MBSplashNativeView$11
            r4.<init>(r7)
            r0.a(r3, r4)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r3 = r7.J
            com.mbridge.msdk.widget.FeedBackButton r4 = r7.e
            r0.a(r3, r4)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.String r3 = r7.J
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r7.M
            r0.a(r3, r4)
            goto L2d5
        L2ce:
            com.mbridge.msdk.widget.FeedBackButton r0 = r7.e
            if (r0 == 0) goto L2d5
            r0.setVisibility(r2)
        L2d5:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.M
            java.lang.String r0 = r0.getImageUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r3 = 4
            if (r0 != 0) goto L2fd
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r7.M
            java.lang.String r4 = r4.getImageUrl()
            com.mbridge.msdk.splash.view.MBSplashNativeView$1 r5 = new com.mbridge.msdk.splash.view.MBSplashNativeView$1
            r5.<init>(r7)
            r0.a(r4, r5)
            goto L302
        L2fd:
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r0 = r7.b
            r0.setVisibility(r3)
        L302:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r4.b(r0)
            if (r0 == 0) goto L32e
            java.lang.String r0 = r0.az()
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 == 0) goto L323
            android.widget.ImageView r4 = r7.d
            r4.setVisibility(r2)
        L323:
            android.widget.ImageView r4 = r7.d
            com.mbridge.msdk.splash.view.MBSplashNativeView$5 r5 = new com.mbridge.msdk.splash.view.MBSplashNativeView$5
            r5.<init>(r7, r0)
            r4.setOnClickListener(r5)
            goto L333
        L32e:
            android.widget.ImageView r0 = r7.d
            r0.setVisibility(r2)
        L333:
            android.content.Context r0 = r7.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r4 = "mbridge_splash_m_circle"
            java.lang.String r5 = "drawable"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r4, r5)
            android.content.res.Resources r4 = r7.getResources()     // Catch: java.lang.Throwable -> L363
            android.graphics.drawable.Drawable r0 = r4.getDrawable(r0)     // Catch: java.lang.Throwable -> L363
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L361
            r5 = 1092616192(0x41200000, float:10.0)
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r5)     // Catch: java.lang.Throwable -> L361
            android.content.Context r6 = r7.getContext()     // Catch: java.lang.Throwable -> L361
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r6, r5)     // Catch: java.lang.Throwable -> L361
            r0.setBounds(r8, r8, r4, r5)     // Catch: java.lang.Throwable -> L361
            goto L36c
        L361:
            r4 = move-exception
            goto L365
        L363:
            r4 = move-exception
            r0 = r10
        L365:
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L36c:
            int r1 = r7.z
            java.lang.String r4 = "广告"
            java.lang.String r5 = "AD"
            if (r1 != r9) goto L394
            boolean r1 = r7.F
            if (r1 == 0) goto L394
            int r1 = r7.A
            if (r1 == 0) goto L383
            if (r0 == 0) goto L383
            android.widget.TextView r1 = r7.l
            r1.setCompoundDrawables(r0, r10, r10, r10)
        L383:
            android.widget.TextView r10 = r7.l
            boolean r0 = r7.E
            if (r0 == 0) goto L38a
            goto L38b
        L38a:
            r4 = r5
        L38b:
            r10.setText(r4)
            android.widget.TextView r10 = r7.k
            r10.setVisibility(r3)
            goto L3af
        L394:
            int r1 = r7.A
            if (r1 == 0) goto L39f
            if (r0 == 0) goto L39f
            android.widget.TextView r1 = r7.k
            r1.setCompoundDrawables(r0, r10, r10, r10)
        L39f:
            android.widget.TextView r10 = r7.k
            boolean r0 = r7.E
            if (r0 == 0) goto L3a6
            goto L3a7
        L3a6:
            r4 = r5
        L3a7:
            r10.setText(r4)
            android.widget.TextView r10 = r7.l
            r10.setVisibility(r3)
        L3af:
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r7.M
            com.mbridge.msdk.out.ApkDisplayInfo r10 = r10.getApkDisplayInfo()
            if (r10 == 0) goto L407
            int r10 = r7.v
            if (r10 != 0) goto L407
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r7.M
            com.mbridge.msdk.out.ApkDisplayInfo r10 = r10.getApkDisplayInfo()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "应用名称："
            r0.append(r1)
            java.lang.String r1 = r10.getAppName()
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            java.lang.String r4 = "版本："
            r0.append(r4)
            java.lang.String r4 = r10.getAppVersion()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = "开发者："
            r0.append(r4)
            java.lang.String r4 = r10.getDevName()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r1 = "更新时间："
            r0.append(r1)
            java.lang.String r10 = r10.getUpdateTime()
            r0.append(r10)
            android.widget.TextView r10 = r7.n
            r10.setText(r0)
            goto L40c
        L407:
            android.widget.RelativeLayout r10 = r7.m
            r10.setVisibility(r2)
        L40c:
            int r10 = r7.u
            if (r10 != r9) goto L416
            com.mbridge.msdk.splash.view.nativeview.MBSplashClickView r10 = r7.q
            r10.setVisibility(r2)
            goto L42b
        L416:
            int r10 = r7.w
            if (r10 != r9) goto L420
            com.mbridge.msdk.splash.view.nativeview.MBSplashClickView r10 = r7.q
            r10.setVisibility(r2)
            goto L42b
        L420:
            com.mbridge.msdk.splash.view.nativeview.MBSplashClickView r10 = r7.q
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.M
            java.lang.String r0 = r0.getAdCall()
            r10.initView(r0)
        L42b:
            int r10 = r7.t
            if (r10 != r9) goto L438
            com.mbridge.msdk.splash.view.MBSplashNativeView$6 r10 = new com.mbridge.msdk.splash.view.MBSplashNativeView$6
            r10.<init>(r7)
            r7.setOnClickListener(r10)
            goto L442
        L438:
            com.mbridge.msdk.splash.view.nativeview.MBSplashClickView r10 = r7.q
            com.mbridge.msdk.splash.view.MBSplashNativeView$7 r0 = new com.mbridge.msdk.splash.view.MBSplashNativeView$7
            r0.<init>(r7)
            r10.setOnClickListener(r0)
        L442:
            android.widget.TextView r10 = r7.o
            com.mbridge.msdk.splash.view.MBSplashNativeView$8 r0 = new com.mbridge.msdk.splash.view.MBSplashNativeView$8
            r0.<init>(r7)
            r10.setOnClickListener(r0)
            android.widget.TextView r10 = r7.p
            com.mbridge.msdk.splash.view.MBSplashNativeView$9 r0 = new com.mbridge.msdk.splash.view.MBSplashNativeView$9
            r0.<init>(r7)
            r10.setOnClickListener(r0)
            android.widget.TextView r10 = r7.f
            com.mbridge.msdk.splash.view.MBSplashNativeView$10 r0 = new com.mbridge.msdk.splash.view.MBSplashNativeView$10
            r0.<init>(r7)
            r10.setOnClickListener(r0)
            int r10 = r7.w
            if (r10 != r9) goto L4ae
            com.mbridge.msdk.shake.MBShakeView r9 = new com.mbridge.msdk.shake.MBShakeView
            android.content.Context r10 = r7.getContext()
            r9.<init>(r10)
            r7.N = r9
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r7.M
            java.lang.String r10 = r10.getAdCall()
            r9.initView(r10)
            android.widget.RelativeLayout$LayoutParams r9 = new android.widget.RelativeLayout$LayoutParams
            r10 = -2
            r9.<init>(r10, r10)
            r10 = 13
            r9.addRule(r10)
            com.mbridge.msdk.shake.MBShakeView r10 = r7.N
            r10.setLayoutParams(r9)
            com.mbridge.msdk.shake.MBShakeView r9 = r7.N
            r7.addView(r9)
            com.mbridge.msdk.splash.view.nativeview.MBSplashClickView r9 = r7.q
            r9.setVisibility(r3)
            com.mbridge.msdk.splash.view.nativeview.MBSplashClickView r9 = r7.q
            r9.setEnabled(r8)
            com.mbridge.msdk.shake.MBShakeView r8 = r7.N
            com.mbridge.msdk.splash.view.MBSplashNativeView$2 r9 = new com.mbridge.msdk.splash.view.MBSplashNativeView$2
            r9.<init>(r7)
            r8.setOnClickListener(r9)
            com.mbridge.msdk.splash.view.MBSplashNativeView$3 r8 = new com.mbridge.msdk.splash.view.MBSplashNativeView$3
            int r9 = r7.x
            int r10 = r7.y
            int r10 = r10 * 1000
            r8.<init>(r7, r9, r10)
            r7.R = r8
        L4ae:
            int r8 = r7.r
            r7.updateCountDown(r8)
            return
        L4b4:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "Parameters is NULL, can't gen view."
            r8.<init>(r9)
            throw r8
    }

    static android.widget.RelativeLayout a(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            android.widget.RelativeLayout r0 = r0.g
            return r0
    }

    static void a(com.mbridge.msdk.splash.view.MBSplashNativeView r2, int r3) {
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.L
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L49
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.L
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()
            com.mbridge.msdk.splash.d.a r0 = r0.a()
            if (r0 == 0) goto L49
            float r0 = r2.C     // Catch: java.lang.Throwable -> L30
            float r1 = r2.D     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = com.mbridge.msdk.splash.a.a.a.a(r3, r0, r1)     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.M     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = com.mbridge.msdk.splash.a.a.a.a(r3, r0)     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.L     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.splash.d.a r0 = r0.a()     // Catch: java.lang.Throwable -> L30
            r0.a(r3)     // Catch: java.lang.Throwable -> L30
            goto L49
        L30:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "MBSplashNativeView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            com.mbridge.msdk.splash.view.MBSplashView r3 = r2.L
            com.mbridge.msdk.splash.js.b r3 = r3.getSplashJSBridgeImpl()
            com.mbridge.msdk.splash.d.a r3 = r3.a()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.M
            r3.a(r2)
        L49:
            return
    }

    static boolean a(com.mbridge.msdk.splash.view.MBSplashNativeView r0, boolean r1) {
            r0.F = r1
            return r1
    }

    static com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView b(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r0 = r0.b
            return r0
    }

    static boolean b(com.mbridge.msdk.splash.view.MBSplashNativeView r0, boolean r1) {
            r0.I = r1
            return r1
    }

    static int c(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            int r0 = r0.z
            return r0
    }

    static void c(com.mbridge.msdk.splash.view.MBSplashNativeView r1, boolean r2) {
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.L
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L28
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.L
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()
            com.mbridge.msdk.splash.d.a r0 = r0.a()
            if (r0 == 0) goto L28
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.L
            com.mbridge.msdk.splash.js.b r0 = r0.getSplashJSBridgeImpl()
            com.mbridge.msdk.splash.d.a r0 = r0.a()
            if (r2 == 0) goto L22
            r2 = 2
            goto L23
        L22:
            r2 = 1
        L23:
            int r1 = r1.s
            r0.a(r2, r1)
        L28:
            return
    }

    static com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView d(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r0 = r0.j
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx e(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.M
            return r0
    }

    static android.widget.TextView f(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            android.widget.TextView r0 = r0.i
            return r0
    }

    static void g(com.mbridge.msdk.splash.view.MBSplashNativeView r3) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.M
            java.lang.String r0 = r0.getIconUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.M
            java.lang.String r1 = r1.getIconUrl()
            com.mbridge.msdk.splash.view.MBSplashNativeView$4 r2 = new com.mbridge.msdk.splash.view.MBSplashNativeView$4
            r2.<init>(r3)
            r0.a(r1, r2)
            goto L2d
        L27:
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r3 = r3.h
            r0 = 4
            r3.setVisibility(r0)
        L2d:
            return
    }

    static com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView h(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r0 = r0.a
            return r0
    }

    static com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView i(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView r0 = r0.h
            return r0
    }

    static com.mbridge.msdk.splash.view.MBSplashView j(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            com.mbridge.msdk.splash.view.MBSplashView r0 = r0.L
            return r0
    }

    static int k(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            int r0 = r0.r
            return r0
    }

    static java.lang.String l(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            java.lang.String r0 = r0.J
            return r0
    }

    static boolean m(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            boolean r0 = r0.G
            return r0
    }

    static android.widget.TextView n(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            android.widget.TextView r0 = r0.f
            return r0
    }

    static boolean o(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            boolean r0 = r0.I
            return r0
    }

    static boolean p(com.mbridge.msdk.splash.view.MBSplashNativeView r0) {
            boolean r0 = r0.H
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            int r0 = r2.w     // Catch: java.lang.Throwable -> L1a
            r1 = 1
            if (r0 != r1) goto L24
            com.mbridge.msdk.shake.MBShakeView r0 = r2.N     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L24
            com.mbridge.msdk.shake.b r0 = r2.R     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L24
            com.mbridge.msdk.shake.a r0 = com.mbridge.msdk.shake.a.a()     // Catch: java.lang.Throwable -> L1a
            com.mbridge.msdk.shake.b r1 = r2.R     // Catch: java.lang.Throwable -> L1a
            r0.a(r1)     // Catch: java.lang.Throwable -> L1a
            goto L24
        L1a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBSplashNativeView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L24:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.release()
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            float r0 = r2.getRawX()
            r1.C = r0
            float r0 = r2.getRawY()
            r1.D = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    public void release() {
            r2 = this;
            com.mbridge.msdk.shake.b r0 = r2.R     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L10
            com.mbridge.msdk.shake.a r0 = com.mbridge.msdk.shake.a.a()     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.shake.b r1 = r2.R     // Catch: java.lang.Exception -> L1d
            r0.b(r1)     // Catch: java.lang.Exception -> L1d
            r0 = 0
            r2.R = r0     // Catch: java.lang.Exception -> L1d
        L10:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = r2.J     // Catch: java.lang.Exception -> L1d
            r0.c(r1)     // Catch: java.lang.Exception -> L1d
            r2.detachAllViewsFromParent()     // Catch: java.lang.Exception -> L1d
            goto L27
        L1d:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBSplashNativeView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L27:
            return
    }

    public void setIsPause(boolean r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public void setNotchPadding(int r3, int r4, int r5, int r6) {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.c     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L5
            return
        L5:
            android.widget.RelativeLayout r0 = r2.c     // Catch: java.lang.Throwable -> L22
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L22
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L22
            int r1 = r2.B     // Catch: java.lang.Throwable -> L22
            int r1 = r1 + r3
            r0.leftMargin = r1     // Catch: java.lang.Throwable -> L22
            int r3 = r2.B     // Catch: java.lang.Throwable -> L22
            int r3 = r3 + r4
            r0.rightMargin = r3     // Catch: java.lang.Throwable -> L22
            int r3 = r2.B     // Catch: java.lang.Throwable -> L22
            int r3 = r3 + r5
            r0.topMargin = r3     // Catch: java.lang.Throwable -> L22
            int r3 = r2.B     // Catch: java.lang.Throwable -> L22
            int r3 = r3 + r6
            r0.bottomMargin = r3     // Catch: java.lang.Throwable -> L22
            goto L2c
        L22:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "MBSplashNativeView"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L2c:
            return
    }

    public void updateCountDown(int r4) {
            r3 = this;
            android.widget.TextView r0 = r3.f
            if (r0 == 0) goto L44
            r3.s = r4
            boolean r0 = r3.G
            java.lang.String r1 = " "
            if (r0 == 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.P
            r0.append(r2)
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r3.O
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            goto L3f
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = r3.O
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r3.Q
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L3f:
            android.widget.TextView r0 = r3.f
            r0.setText(r4)
        L44:
            return
    }
}
