package com.sigmob.sdk.base.views;

public class t extends android.app.Dialog implements android.content.DialogInterface.OnShowListener {
    protected com.sigmob.sdk.base.common.r a;
    private android.view.View b;
    private android.view.Window c;
    private com.sigmob.sdk.base.views.t.a d;
    private android.widget.RelativeLayout e;
    private com.sigmob.sdk.videoAd.a f;
    private com.sigmob.sdk.base.models.BaseAdUnit g;
    private com.sigmob.sdk.mraid.d h;
    private android.content.Context i;
    private int j;
    private int k;
    private boolean l;




    public interface a {
        void a();
    }

    public t(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3, com.sigmob.sdk.videoAd.a r4) {
            r1 = this;
            int r0 = com.sigmob.sdk.base.d.e()
            r1.<init>(r2, r0)
            r0 = 0
            r1.c = r0
            r0 = 0
            r1.j = r0
            r1.k = r0
            r1.l = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.i = r2
            r1.g = r3
            r1.f = r4
            android.view.View r2 = r1.b()
            r1.b = r2
            return
    }

    static int a(com.sigmob.sdk.base.views.t r0, int r1) {
            r0.k = r1
            return r1
    }

    static com.sigmob.sdk.base.views.t.a a(com.sigmob.sdk.base.views.t r0) {
            com.sigmob.sdk.base.views.t$a r0 = r0.d
            return r0
    }

    static boolean a(com.sigmob.sdk.base.views.t r0, boolean r1) {
            r0.l = r1
            return r1
    }

    static int b(com.sigmob.sdk.base.views.t r0, int r1) {
            r0.j = r1
            return r1
    }

    static com.sigmob.sdk.mraid.d b(com.sigmob.sdk.base.views.t r0) {
            com.sigmob.sdk.mraid.d r0 = r0.h
            return r0
    }

    static com.sigmob.sdk.videoAd.a c(com.sigmob.sdk.base.views.t r0) {
            com.sigmob.sdk.videoAd.a r0 = r0.f
            return r0
    }

    static android.content.Context d(com.sigmob.sdk.base.views.t r0) {
            android.content.Context r0 = r0.i
            return r0
    }

    private void d() {
            r6 = this;
            android.view.Window r0 = r6.getWindow()
            r6.c = r0
            if (r0 == 0) goto L88
            r1 = 80
            r0.setGravity(r1)
            int r0 = com.sigmob.sdk.base.d.f()
            if (r0 == 0) goto L18
            android.view.Window r1 = r6.c
            r1.setWindowAnimations(r0)
        L18:
            android.view.Window r0 = r6.c
            android.view.View r0 = r0.getDecorView()
            r1 = 0
            r0.setPadding(r1, r1, r1, r1)
            android.view.Window r0 = r6.c
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            android.content.Context r1 = r6.i
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.widthPixels
            android.content.Context r2 = r6.i
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.heightPixels
            int r3 = r6.k
            int r4 = r3 + (-1)
            r5 = -1
            if (r4 > r1) goto L4a
            r0.width = r5
            goto L4c
        L4a:
            r0.width = r3
        L4c:
            int r3 = r6.j
            int r4 = r3 + (-1)
            if (r4 > r2) goto L55
            r0.height = r5
            goto L57
        L55:
            r0.height = r3
        L57:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "RecommendDialog windowDeploy: "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = "===="
            r3.append(r1)
            r3.append(r2)
            r3.append(r1)
            int r2 = r0.width
            r3.append(r2)
            r3.append(r1)
            int r1 = r0.height
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.i(r1)
            android.view.Window r1 = r6.c
            r1.setAttributes(r0)
        L88:
            return
    }

    static android.view.View e(com.sigmob.sdk.base.views.t r0) {
            android.view.View r0 = r0.b
            return r0
    }

    static int f(com.sigmob.sdk.base.views.t r0) {
            int r0 = r0.k
            return r0
    }

    static int g(com.sigmob.sdk.base.views.t r0) {
            int r0 = r0.j
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit h(com.sigmob.sdk.base.views.t r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.g
            return r0
    }

    public void a(com.sigmob.sdk.base.common.a r3) {
            r2 = this;
            com.sigmob.sdk.base.common.r r0 = r2.a
            if (r0 == 0) goto L8
            r1 = 0
            r0.a(r3, r1)
        L8:
            return
    }

    public void a(com.sigmob.sdk.base.views.t.a r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public boolean a() {
            r1 = this;
            int r0 = r1.k
            if (r0 <= 0) goto L8
            int r0 = r1.j
            if (r0 > 0) goto Lb
        L8:
            r0 = 1
            r1.l = r0
        Lb:
            boolean r0 = r1.l
            return r0
    }

    public android.view.View b() {
            r4 = this;
            com.sigmob.sdk.mraid.d r0 = r4.h
            if (r0 != 0) goto L11
            com.sigmob.sdk.mraid.d r0 = new com.sigmob.sdk.mraid.d
            android.content.Context r1 = r4.i
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.g
            com.sigmob.sdk.base.models.PlacementType r3 = com.sigmob.sdk.base.models.PlacementType.INTERSTITIAL
            r0.<init>(r1, r2, r3)
            r4.h = r0
        L11:
            com.sigmob.sdk.mraid.d r0 = r4.h
            com.sigmob.sdk.base.views.t$1 r1 = new com.sigmob.sdk.base.views.t$1
            r1.<init>(r4)
            r0.a(r1)
            com.sigmob.sdk.mraid.d r0 = r4.h
            com.sigmob.sdk.base.views.t$2 r1 = new com.sigmob.sdk.base.views.t$2
            r1.<init>(r4)
            r0.a(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.g
            java.lang.String r0 = r0.getCloseCardHtmlData()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L41
            com.sigmob.sdk.mraid.d r0 = r4.h
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.g
            java.lang.String r1 = r1.getCloseCardHtmlData()
            com.sigmob.sdk.base.views.t$3 r2 = new com.sigmob.sdk.base.views.t$3
            r2.<init>(r4)
            r0.a(r1, r2)
        L41:
            com.sigmob.sdk.mraid.d r0 = r4.h
            android.widget.FrameLayout r0 = r0.p()
            return r0
    }

    public void c() {
            r2 = this;
            com.sigmob.sdk.mraid.d r0 = r2.h
            if (r0 == 0) goto Lc
            r1 = 0
            r2.d = r1
            r0.l()
            r2.h = r1
        Lc:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            android.widget.RelativeLayout r3 = new android.widget.RelativeLayout
            android.content.Context r0 = r2.getContext()
            r3.<init>(r0)
            r2.e = r3
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r3.setLayoutParams(r0)
            android.widget.RelativeLayout r3 = r2.e
            r0 = 0
            r3.setBackgroundColor(r0)
            android.widget.RelativeLayout r3 = r2.e
            r2.setContentView(r3)
            r2.setOnShowListener(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "RecommendDialog onCreate:"
            r3.append(r1)
            int r1 = r2.k
            r3.append(r1)
            java.lang.String r1 = ":"
            r3.append(r1)
            int r1 = r2.j
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.i(r3)
            android.view.View r3 = r2.b
            if (r3 == 0) goto L4e
            android.widget.RelativeLayout r1 = r2.e
            r1.addView(r3)
        L4e:
            r2.setCanceledOnTouchOutside(r0)
            r3 = 1
            r2.setCancelable(r3)
            r2.d()
            return
    }

    @Override
    public void onShow(android.content.DialogInterface r1) {
            r0 = this;
            java.lang.String r1 = "RecommendDialog  onShow"
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.d
            r0.a(r1)
            return
    }

    @Override
    protected void onStart() {
            r2 = this;
            super.onStart()
            android.view.Window r0 = r2.getWindow()
            android.view.View r0 = r0.getDecorView()
            r1 = 6918(0x1b06, float:9.694E-42)
            r0.setSystemUiVisibility(r1)
            return
    }
}
