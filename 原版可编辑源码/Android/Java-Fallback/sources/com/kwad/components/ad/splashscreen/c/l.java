package com.kwad.components.ad.splashscreen.c;

public final class l extends com.kwad.components.ad.splashscreen.c.i implements com.kwad.components.ad.splashscreen.g, com.kwad.sdk.core.g.a {
    private android.view.View Dg;
    private com.kwad.components.ad.splashscreen.widget.KsRotateView Dh;
    private android.widget.TextView Di;
    private android.widget.TextView Dj;
    private com.kwad.sdk.core.g.c Dk;
    private com.kwad.components.ad.splashscreen.d Dl;
    private java.lang.Runnable Dm;
    private long mStartTime;





    public l() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.splashscreen.c.l$4 r0 = new com.kwad.components.ad.splashscreen.c.l$4
            r0.<init>(r1)
            r1.Dm = r0
            return
    }

    static com.kwad.components.ad.splashscreen.widget.KsRotateView a(com.kwad.components.ad.splashscreen.c.l r0) {
            com.kwad.components.ad.splashscreen.widget.KsRotateView r0 = r0.Dh
            return r0
    }

    static long b(com.kwad.components.ad.splashscreen.c.l r2) {
            long r0 = r2.mStartTime
            return r0
    }

    static com.kwad.sdk.core.g.c c(com.kwad.components.ad.splashscreen.c.l r0) {
            com.kwad.sdk.core.g.c r0 = r0.Dk
            return r0
    }

    @Override
    public final void X(int r1) {
            r0 = this;
            return
    }

    @Override
    protected final void Z(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.Dj
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    @Override
    public final void ab(java.lang.String r10) {
            r9 = this;
            com.kwad.components.ad.splashscreen.h r0 = r9.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            boolean r0 = r0.sB()
            boolean r1 = com.kwad.components.core.e.c.b.mZ()
            r2 = 0
            if (r0 == 0) goto L38
            if (r1 == 0) goto L12
            goto L38
        L12:
            com.kwad.components.ad.splashscreen.widget.KsRotateView r0 = r9.Dh
            r0.lG()
            com.kwad.components.ad.splashscreen.h r0 = r9.CM
            if (r0 == 0) goto L2d
            com.kwad.components.ad.splashscreen.h r3 = r9.CM
            r4 = 1
            android.content.Context r5 = r9.getContext()
            r6 = 161(0xa1, float:2.26E-43)
            r7 = 2
            com.kwad.components.ad.splashscreen.c.l$3 r8 = new com.kwad.components.ad.splashscreen.c.l$3
            r8.<init>(r9, r10)
            r3.a(r4, r5, r6, r7, r8)
        L2d:
            r9.lg()
            java.lang.Runnable r10 = r9.Dm
            r0 = 2000(0x7d0, double:9.88E-321)
        L34:
            com.kwad.sdk.utils.bj.a(r10, r2, r0)
            return
        L38:
            java.lang.Runnable r10 = r9.Dm
            r0 = 1800(0x708, double:8.893E-321)
            goto L34
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.c.l$2 r0 = new com.kwad.components.ad.splashscreen.c.l$2
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            if (r0 == 0) goto L14
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            r0.a(r1)
        L14:
            return
    }

    @Override
    protected final void initView() {
            r2 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.mStartTime = r0
            int r0 = com.kwad.sdk.R.id.ksad_rotate_layout
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto L15
            android.view.View r0 = r0.inflate()
            goto L1b
        L15:
            int r0 = com.kwad.sdk.R.id.ksad_rotate_root
            android.view.View r0 = r2.findViewById(r0)
        L1b:
            r2.Dg = r0
            int r0 = com.kwad.sdk.R.id.ksad_rotate_text
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Di = r0
            int r0 = com.kwad.sdk.R.id.ksad_rotate_action
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Dj = r0
            int r0 = com.kwad.sdk.R.id.ksad_rotate_view
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.splashscreen.widget.KsRotateView r0 = (com.kwad.components.ad.splashscreen.widget.KsRotateView) r0
            r2.Dh = r0
            return
    }

    @Override
    public final void kD() {
            r2 = this;
            com.kwad.sdk.core.g.c r0 = r2.Dk
            if (r0 == 0) goto Lb
            android.content.Context r1 = r2.getContext()
            r0.bh(r1)
        Lb:
            return
    }

    @Override
    protected final void la() {
            r4 = this;
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.getContext()
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.components.core.e.d.c r2 = r2.mApkDownloadHelper
            r3 = 1
            com.kwad.components.ad.splashscreen.d r0 = com.kwad.components.ad.splashscreen.d.a(r1, r0, r2, r3)
            r4.Dl = r0
            android.widget.TextView r1 = r4.Di
            if (r1 == 0) goto L25
            java.lang.String r0 = r0.getTitle()
            r1.setText(r0)
        L25:
            android.widget.TextView r0 = r4.Dj
            if (r0 == 0) goto L32
            com.kwad.components.ad.splashscreen.d r1 = r4.Dl
            java.lang.String r1 = r1.kx()
            r0.setText(r1)
        L32:
            return
    }

    @Override
    protected final void lb() {
            r3 = this;
            android.view.View r0 = r3.Dg
            if (r0 == 0) goto L1f
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            if (r0 == 0) goto L1f
            android.view.View r0 = r3.Dg
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1 = 0
            r2 = 184(0xb8, float:2.58E-43)
            com.kwad.sdk.core.report.a.b(r0, r2, r1)
            com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.sb()
            r0.aR(r2)
        L1f:
            return
    }

    @Override
    protected final void lc() {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = com.kwad.sdk.core.response.b.b.bE(r0)
            com.kwad.sdk.core.g.c r1 = r2.Dk
            if (r1 != 0) goto L17
            com.kwad.sdk.core.g.c r1 = new com.kwad.sdk.core.g.c
            r1.<init>(r0)
            r2.Dk = r1
            r1.a(r2)
            return
        L17:
            r1.a(r0)
            return
    }

    @Override
    protected final void ld() {
            r2 = this;
            com.kwad.sdk.core.g.c r0 = r2.Dk
            android.content.Context r1 = r2.getContext()
            r0.bg(r1)
            return
    }

    @Override
    protected final void le() {
            r2 = this;
            com.kwad.components.ad.splashscreen.widget.KsRotateView r0 = r2.Dh
            com.kwad.components.ad.splashscreen.c.l$1 r1 = new com.kwad.components.ad.splashscreen.c.l$1
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    @Override
    public final void lk() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.report.a.aC(r0)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            java.lang.String r0 = "SplashRotatePresenter"
            java.lang.String r1 = "onUnbind"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.g.c r0 = r2.Dk
            if (r0 == 0) goto L15
            android.content.Context r1 = r2.getContext()
            r0.bh(r1)
        L15:
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            if (r0 == 0) goto L1e
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            r0.b(r2)
        L1e:
            return
    }
}
