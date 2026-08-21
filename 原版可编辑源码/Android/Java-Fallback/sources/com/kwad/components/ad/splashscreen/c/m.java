package com.kwad.components.ad.splashscreen.c;

public final class m extends com.kwad.components.ad.splashscreen.c.e implements android.view.View.OnClickListener, com.kwad.components.ad.splashscreen.g, com.kwad.sdk.core.g.b, com.kwad.sdk.widget.c {
    private static long jM = 400;
    private boolean CC;
    private com.kwad.components.ad.splashscreen.f.a CY;
    private com.kwad.components.ad.splashscreen.d Dl;
    private android.view.ViewGroup Dp;
    private com.kwad.components.ad.splashscreen.widget.KsShakeView Dq;
    private android.widget.TextView Dr;
    private com.kwad.sdk.core.g.d dO;
    private android.os.Vibrator dP;
    private long mStartTime;






    static {
            return
    }

    public m() {
            r0 = this;
            r0.<init>()
            return
    }

    static long a(com.kwad.components.ad.splashscreen.c.m r2) {
            long r0 = r2.mStartTime
            return r0
    }

    static com.kwad.components.ad.splashscreen.widget.KsShakeView b(com.kwad.components.ad.splashscreen.c.m r0) {
            com.kwad.components.ad.splashscreen.widget.KsShakeView r0 = r0.Dq
            return r0
    }

    static android.widget.TextView c(com.kwad.components.ad.splashscreen.c.m r0) {
            android.widget.TextView r0 = r0.Dr
            return r0
    }

    static com.kwad.sdk.core.g.d d(com.kwad.components.ad.splashscreen.c.m r0) {
            com.kwad.sdk.core.g.d r0 = r0.dO
            return r0
    }

    static android.content.Context e(com.kwad.components.ad.splashscreen.c.m r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void lf() {
            r3 = this;
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            if (r0 == 0) goto L2a
            com.kwad.components.ad.splashscreen.f.a r0 = r3.CY
            if (r0 != 0) goto L18
            com.kwad.components.ad.splashscreen.c.m$3 r0 = new com.kwad.components.ad.splashscreen.c.m$3
            android.content.Context r1 = r3.getContext()
            com.kwad.components.ad.splashscreen.h r2 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.<init>(r3, r1, r2)
            r3.CY = r0
            goto L1f
        L18:
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
        L1f:
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            if (r0 == 0) goto L2a
            com.kwad.components.ad.splashscreen.f.a r1 = r3.CY
            r0.b(r1)
        L2a:
            return
    }

    private void ll() {
            r2 = this;
            android.widget.TextView r0 = r2.Dr
            if (r0 == 0) goto Ld
            com.kwad.components.ad.splashscreen.d r1 = r2.Dl
            java.lang.String r1 = r1.kx()
            r0.setText(r1)
        Ld:
            com.kwad.components.ad.splashscreen.widget.KsShakeView r0 = r2.Dq
            if (r0 == 0) goto L1a
            com.kwad.components.ad.splashscreen.d r1 = r2.Dl
            int r1 = r1.ky()
            r0.ae(r1)
        L1a:
            return
    }

    private void lm() {
            r3 = this;
            android.view.ViewGroup r0 = r3.Dp
            if (r0 == 0) goto L1f
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            if (r0 == 0) goto L1f
            android.view.ViewGroup r0 = r3.Dp
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1 = 0
            r2 = 185(0xb9, float:2.59E-43)
            com.kwad.sdk.core.report.a.b(r0, r2, r1)
            com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.sb()
            r0.aR(r2)
        L1f:
            return
    }

    @Override
    public final void X(int r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(double r3) {
            r2 = this;
            boolean r0 = com.kwad.components.core.e.c.b.mZ()
            com.kwad.components.ad.splashscreen.h r1 = r2.CM
            com.kwad.sdk.core.h.a r1 = r1.Ce
            boolean r1 = r1.sB()
            if (r1 == 0) goto L25
            if (r0 == 0) goto L11
            goto L25
        L11:
            com.kwad.components.ad.splashscreen.widget.KsShakeView r0 = r2.Dq
            com.kwad.components.ad.splashscreen.c.m$5 r1 = new com.kwad.components.ad.splashscreen.c.m$5
            r1.<init>(r2, r3)
            r0.b(r1)
            android.content.Context r3 = r2.getContext()
            android.os.Vibrator r4 = r2.dP
            com.kwad.sdk.utils.bj.a(r3, r4)
            return
        L25:
            com.kwad.components.ad.splashscreen.c.m$4 r3 = new com.kwad.components.ad.splashscreen.c.m$4
            r3.<init>(r2)
            r4 = 0
            r0 = 500(0x1f4, double:2.47E-321)
            com.kwad.sdk.utils.bj.a(r3, r4, r0)
            return
    }

    @Override
    public final void a(android.view.View r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onSingleTap: "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "SplashShakePresenter"
            com.kwad.sdk.core.e.c.d(r0, r4)
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r4 = com.kwad.sdk.core.response.b.b.dp(r4)
            if (r4 != 0) goto L22
            return
        L22:
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            if (r4 == 0) goto L32
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            android.content.Context r0 = r3.getContext()
            r1 = 158(0x9e, float:2.21E-43)
            r2 = 1
            r4.c(r2, r0, r1, r2)
        L32:
            return
    }

    @Override
    public final void aT() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.report.a.aC(r0)
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            if (r0 != 0) goto L8
            return
        L8:
            com.kwad.components.ad.splashscreen.c.m$1 r0 = new com.kwad.components.ad.splashscreen.c.m$1
            r0.<init>(r4)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.getContext()
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.components.core.e.d.c r2 = r2.mApkDownloadHelper
            r3 = 2
            com.kwad.components.ad.splashscreen.d r1 = com.kwad.components.ad.splashscreen.d.a(r1, r0, r2, r3)
            r4.Dl = r1
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            float r1 = com.kwad.sdk.core.response.b.b.bD(r1)
            com.kwad.sdk.core.g.d r2 = r4.dO
            if (r2 != 0) goto L41
            com.kwad.sdk.core.g.d r2 = new com.kwad.sdk.core.g.d
            r2.<init>(r1)
            r4.dO = r2
            r2.a(r4)
            goto L44
        L41:
            r2.e(r1)
        L44:
            r4.ll()
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L50
            r4.lf()
        L50:
            r4.lm()
            com.kwad.sdk.core.g.d r0 = r4.dO
            android.content.Context r1 = r4.getContext()
            r0.bg(r1)
            com.kwad.components.ad.splashscreen.widget.KsShakeView r0 = r4.Dq
            com.kwad.components.ad.splashscreen.c.m$2 r1 = new com.kwad.components.ad.splashscreen.c.m$2
            r1.<init>(r4)
            r0.post(r1)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            r4.CC = r0
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            com.kwad.components.ad.splashscreen.widget.KsShakeView r1 = r4.Dq
            android.content.Context r1 = r1.getContext()
            com.kwad.components.ad.splashscreen.widget.KsShakeView r2 = r4.Dq
            r0.<init>(r1, r2, r4)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            r0.a(r4)
            return
    }

    @Override
    public final void b(android.view.View r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onSlide: enableSlickClick: "
            r0.<init>(r1)
            boolean r1 = r3.CC
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SplashShakePresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r3.CC
            if (r0 != 0) goto L1a
            return
        L1a:
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            if (r0 == 0) goto L2a
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            android.content.Context r4 = r4.getContext()
            r1 = 153(0x99, float:2.14E-43)
            r2 = 1
            r0.c(r2, r4, r1, r2)
        L2a:
            return
    }

    @Override
    public final void kD() {
            r2 = this;
            com.kwad.sdk.core.g.d r0 = r2.dO
            if (r0 == 0) goto Lb
            android.content.Context r1 = r2.getContext()
            r0.bh(r1)
        Lb:
            return
    }

    @Override
    public final void onClick(android.view.View r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onClick: "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SplashShakePresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.components.ad.splashscreen.widget.KsShakeView r0 = r3.Dq
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L3f
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            if (r4 == 0) goto L3f
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            if (r4 == 0) goto L3f
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r4 = com.kwad.sdk.core.response.b.b.dp(r4)
            if (r4 == 0) goto L3f
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            android.content.Context r0 = r3.getContext()
            r1 = 158(0x9e, float:2.21E-43)
            r2 = 1
            r4.c(r2, r0, r1, r2)
        L3f:
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.mStartTime = r0
            android.content.Context r0 = r2.getContext()
            if (r0 == 0) goto L19
            java.lang.String r1 = "vibrator"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.os.Vibrator r0 = (android.os.Vibrator) r0
            r2.dP = r0
        L19:
            int r0 = com.kwad.sdk.R.id.ksad_shake_layout
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto L28
            android.view.View r0 = r0.inflate()
            goto L2e
        L28:
            int r0 = com.kwad.sdk.R.id.ksad_shake_root
            android.view.View r0 = r2.findViewById(r0)
        L2e:
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.Dp = r0
            android.view.ViewGroup r0 = r2.Dp
            int r1 = com.kwad.sdk.R.id.ksad_shake_action
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Dr = r0
            android.view.ViewGroup r0 = r2.Dp
            int r1 = com.kwad.sdk.R.id.ksad_shake_view
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.splashscreen.widget.KsShakeView r0 = (com.kwad.components.ad.splashscreen.widget.KsShakeView) r0
            r2.Dq = r0
            r0.setOnClickListener(r2)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            java.lang.String r0 = "SplashShakePresenter"
            java.lang.String r1 = "onUnbind"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            if (r0 == 0) goto L13
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            r0.b(r2)
        L13:
            com.kwad.sdk.core.g.d r0 = r2.dO
            if (r0 == 0) goto L1e
            android.content.Context r1 = r2.getContext()
            r0.bh(r1)
        L1e:
            com.kwad.components.ad.splashscreen.widget.KsShakeView r0 = r2.Dq
            if (r0 == 0) goto L25
            r0.lI()
        L25:
            return
    }
}
