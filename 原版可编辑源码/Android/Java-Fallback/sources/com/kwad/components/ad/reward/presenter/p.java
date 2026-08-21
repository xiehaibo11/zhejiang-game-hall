package com.kwad.components.ad.reward.presenter;

public final class p extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private com.kwad.components.ad.reward.presenter.q sB;
    private boolean sC;
    private com.kwad.components.ad.reward.widget.KsToastView sI;
    private boolean sJ;
    private boolean sK;
    private java.lang.Runnable sL;
    private boolean sM;
    private float sz;




    public p(com.kwad.components.ad.reward.presenter.q r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.sJ = r0
            r1.sK = r0
            r1.sM = r0
            r1.sC = r0
            com.kwad.components.ad.reward.presenter.p$1 r0 = new com.kwad.components.ad.reward.presenter.p$1
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            r1.sB = r2
            return
    }

    static com.kwad.components.ad.reward.widget.KsToastView a(com.kwad.components.ad.reward.presenter.p r0) {
            com.kwad.components.ad.reward.widget.KsToastView r0 = r0.sI
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.presenter.p r0, boolean r1) {
            r1 = 1
            r0.sM = r1
            return r1
    }

    static boolean b(com.kwad.components.ad.reward.presenter.p r0) {
            boolean r0 = r0.sM
            return r0
    }

    private synchronized void hF() {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.sC     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L7
            monitor-exit(r5)
            return
        L7:
            com.kwad.components.ad.reward.j r0 = r5.qx     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate     // Catch: java.lang.Throwable -> L2b
            r1 = 0
            com.kwad.sdk.core.report.j r2 = new com.kwad.sdk.core.report.j     // Catch: java.lang.Throwable -> L2b
            r2.<init>()     // Catch: java.lang.Throwable -> L2b
            r3 = 192(0xc0, float:2.69E-43)
            com.kwad.sdk.core.report.j r2 = r2.ci(r3)     // Catch: java.lang.Throwable -> L2b
            com.kwad.components.ad.reward.j r3 = r5.qx     // Catch: java.lang.Throwable -> L2b
            com.kwad.components.ad.reward.l.d r3 = r3.oV     // Catch: java.lang.Throwable -> L2b
            long r3 = r3.getPlayDuration()     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.core.report.j r2 = r2.af(r3)     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.core.report.a.d(r0, r1, r2)     // Catch: java.lang.Throwable -> L2b
            r0 = 1
            r5.sC = r0     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r5)
            return
        L2b:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    private void hK() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.p$3 r0 = new com.kwad.components.ad.reward.presenter.p$3
            r0.<init>(r1)
            r1.sL = r0
            return
    }

    private void hL() {
            r1 = this;
            java.lang.Runnable r0 = r1.sL
            com.kwad.sdk.utils.bj.b(r0)
            r0 = 0
            r1.sL = r0
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.b(r1)
            return
    }

    public final void hI() {
            r4 = this;
            boolean r0 = r4.sK
            if (r0 == 0) goto L5
            return
        L5:
            r4.hF()
            r0 = 1
            r4.sK = r0
            com.kwad.components.ad.reward.widget.KsToastView r0 = r4.sI
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.widget.KsToastView r0 = r4.sI
            r1 = 3
            r0.V(r1)
            r4.hK()
            java.lang.Runnable r0 = r4.sL
            r1 = 0
            r2 = 3000(0xbb8, double:1.482E-320)
            com.kwad.sdk.utils.bj.a(r0, r1, r2)
            return
    }

    public final void hJ() {
            r2 = this;
            r0 = 0
            r2.sK = r0
            com.kwad.components.ad.reward.widget.KsToastView r0 = r2.sI
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_toast_view
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.reward.widget.KsToastView r0 = (com.kwad.components.ad.reward.widget.KsToastView) r0
            r2.sI = r0
            com.kwad.components.ad.reward.presenter.p$2 r1 = new com.kwad.components.ad.reward.presenter.p$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            float r0 = com.kwad.components.ad.reward.a.b.gI()
            r2.sz = r0
            boolean r0 = com.kwad.components.ad.reward.a.b.gJ()
            if (r0 == 0) goto L29
            boolean r0 = com.kwad.components.ad.reward.a.b.gK()
            if (r0 == 0) goto L29
            r0 = 1
            goto L2a
        L29:
            r0 = 0
        L2a:
            r2.sJ = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            r2.hL()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            return
    }
}
