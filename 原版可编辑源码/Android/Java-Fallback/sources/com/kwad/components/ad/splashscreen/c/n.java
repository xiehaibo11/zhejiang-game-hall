package com.kwad.components.ad.splashscreen.c;

public final class n extends com.kwad.components.ad.splashscreen.c.e {
    private com.kwad.components.ad.splashscreen.f.a CY;
    private double DA;
    private com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo Du;
    private android.widget.TextView Dv;
    private android.widget.ImageView Dw;
    private com.kwad.components.ad.splashscreen.widget.c Dx;
    private com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView Dy;
    private com.kwad.components.core.e.d.c Dz;
    private android.widget.TextView gQ;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    private long mStartTime;





    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.content.Context a(com.kwad.components.ad.splashscreen.c.n r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static double b(com.kwad.components.ad.splashscreen.c.n r2) {
            double r0 = r2.DA
            return r0
    }

    static android.content.Context c(com.kwad.components.ad.splashscreen.c.n r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo d(com.kwad.components.ad.splashscreen.c.n r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r0.Du
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo e(com.kwad.components.ad.splashscreen.c.n r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static android.content.Context f(com.kwad.components.ad.splashscreen.c.n r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static long g(com.kwad.components.ad.splashscreen.c.n r2) {
            long r0 = r2.mStartTime
            return r0
    }

    static void h(com.kwad.components.ad.splashscreen.c.n r0) {
            r0.lo()
            return
    }

    static com.kwad.components.ad.splashscreen.widget.c i(com.kwad.components.ad.splashscreen.c.n r0) {
            com.kwad.components.ad.splashscreen.widget.c r0 = r0.Dx
            return r0
    }

    private void initView() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r0.slideInfo
            r3.Du = r0
            int r0 = r0.convertDistance
            double r0 = (double) r0
            r3.DA = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r3.Du
            int r0 = r0.style
            com.kwad.components.ad.splashscreen.widget.c r1 = new com.kwad.components.ad.splashscreen.widget.c
            android.content.Context r2 = r3.getContext()
            r1.<init>(r2, r0)
            r3.Dx = r1
            android.widget.ImageView r2 = r3.Dw
            r2.setImageDrawable(r1)
            android.widget.ImageView r1 = r3.Dw
            com.kwad.components.ad.splashscreen.c.n$3 r2 = new com.kwad.components.ad.splashscreen.c.n$3
            r2.<init>(r3)
            r1.post(r2)
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = r3.Du
            java.lang.String r1 = r1.title
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L45
            android.widget.TextView r0 = r3.gQ
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = r3.Du
            java.lang.String r1 = r1.title
        L41:
            r0.setText(r1)
            goto L5d
        L45:
            if (r0 == 0) goto L58
            r1 = 1
            if (r0 == r1) goto L53
            r1 = 2
            if (r0 == r1) goto L4e
            goto L5d
        L4e:
            android.widget.TextView r0 = r3.gQ
            java.lang.String r1 = "向右滑动"
            goto L41
        L53:
            android.widget.TextView r0 = r3.gQ
            java.lang.String r1 = "向左滑动"
            goto L41
        L58:
            android.widget.TextView r0 = r3.gQ
            java.lang.String r1 = "向上滑动"
            goto L41
        L5d:
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r3.Du
            java.lang.String r0 = r0.subtitle
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L71
            android.widget.TextView r0 = r3.Dv
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = r3.Du
            java.lang.String r1 = r1.subtitle
            r0.setText(r1)
            return
        L71:
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L8f
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            com.kwad.components.core.e.d.c r2 = r3.Dz
            int r2 = r2.nw()
            java.lang.String r0 = com.kwad.components.ad.splashscreen.d.a(r0, r1, r2)
            android.widget.TextView r1 = r3.Dv
            r1.setText(r0)
            return
        L8f:
            android.widget.TextView r0 = r3.Dv
            java.lang.String r1 = "跳转详情页或者第三方应用"
            r0.setText(r1)
            return
    }

    static android.widget.TextView j(com.kwad.components.ad.splashscreen.c.n r0) {
            android.widget.TextView r0 = r0.Dv
            return r0
    }

    private void ln() {
            r3 = this;
            com.kwad.components.ad.splashscreen.f.a r0 = r3.CY
            if (r0 != 0) goto L19
            com.kwad.components.ad.splashscreen.c.n$4 r0 = new com.kwad.components.ad.splashscreen.c.n$4
            android.content.Context r1 = r3.getContext()
            com.kwad.components.ad.splashscreen.h r2 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.<init>(r3, r1, r2)
            r3.CY = r0
            com.kwad.components.core.e.d.c r1 = r3.Dz
            r1.b(r0)
            return
        L19:
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
            return
    }

    private void lo() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r4.Du
            if (r0 == 0) goto L21
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r1 = r4.Du
            int r1 = r1.style
            r0.cu(r1)
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r2 = 0
            r3 = 190(0xbe, float:2.66E-43)
            com.kwad.sdk.core.report.a.a(r1, r3, r0, r2)
            com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.sb()
            r0.aR(r3)
        L21:
            return
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            if (r0 != 0) goto L8
            return
        L8:
            com.kwad.components.ad.splashscreen.c.n$2 r0 = new com.kwad.components.ad.splashscreen.c.n$2
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r1.mAdInfo = r0
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r1.Dz = r0
            r1.initView()
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L2e
            r1.ln()
        L2e:
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.mStartTime = r0
            int r0 = com.kwad.sdk.R.id.ksad_slide_layout
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            r0.inflate()
            int r0 = com.kwad.sdk.R.id.ksad_splash_slide_title
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.gQ = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_slide_actiontext
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Dv = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_slideView
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.Dw = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_root_container
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r2.mRootContainer = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_slideTouchView
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            android.view.View r0 = r0.inflate()
            com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView r0 = (com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView) r0
            r2.Dy = r0
            com.kwad.components.ad.splashscreen.c.n$1 r1 = new com.kwad.components.ad.splashscreen.c.n$1
            r1.<init>(r2)
            r0.setOnSlideTouchListener(r1)
            return
    }
}
