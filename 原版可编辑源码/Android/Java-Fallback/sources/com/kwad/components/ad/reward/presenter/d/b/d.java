package com.kwad.components.ad.reward.presenter.d.b;

public final class d extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener, com.kwad.components.ad.reward.presenter.d.b.c {
    private static final java.lang.String[] vV = null;
    private com.kwad.components.core.webview.b.e.e gt;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private android.view.ViewGroup vR;
    private android.widget.ImageView vS;
    private android.view.ViewGroup vT;
    private android.widget.TextView vU;




    static {
            java.lang.String r0 = "未获得奖励"
            java.lang.String r1 = "已获得奖励1/2"
            java.lang.String r2 = "已获得全部奖励"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.kwad.components.ad.reward.presenter.d.b.d.vV = r0
            return
    }

    public d() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.d.b.d$1 r0 = new com.kwad.components.ad.reward.presenter.d.b.d$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.reward.presenter.d.b.d$2 r0 = new com.kwad.components.ad.reward.presenter.d.b.d$2
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.d.b.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void b(com.kwad.components.ad.reward.presenter.d.b.d r0) {
            r0.bU()
            return
    }

    private void bU() {
            r3 = this;
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r3.mRewardVerifyListener
            r0.a(r1)
            android.view.ViewGroup r0 = r3.vR
            r1 = 0
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r3.vT
            com.kwad.components.ad.reward.j r2 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            boolean r2 = com.kwad.components.ad.reward.j.t(r2)
            if (r2 == 0) goto L1c
            goto L1e
        L1c:
            r1 = 8
        L1e:
            r0.setVisibility(r1)
            return
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.d.b.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void d(com.kwad.components.ad.reward.presenter.d.b.d r0) {
            r0.iM()
            return
    }

    static void e(com.kwad.components.ad.reward.presenter.d.b.d r0) {
            r0.notifyAdClick()
            return
    }

    private void iL() {
            r2 = this;
            android.widget.ImageView r0 = r2.vS
            r1 = 0
            if (r0 == 0) goto Ld
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.vS
            r0.setOnClickListener(r2)
        Ld:
            android.view.ViewGroup r0 = r2.vR
            if (r0 == 0) goto L19
            r0.setOnClickListener(r2)
            android.view.ViewGroup r0 = r2.vR
            r0.setVisibility(r1)
        L19:
            return
    }

    private void iM() {
            r3 = this;
            android.widget.TextView r0 = r3.vU
            java.lang.String[] r1 = com.kwad.components.ad.reward.presenter.d.b.d.vV
            r2 = 2
            r1 = r1[r2]
            r0.setText(r1)
            return
    }

    private void notifyAdClick() {
            r4 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            r1 = 41
            com.kwad.sdk.core.report.j r0 = r0.cg(r1)
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.ad.reward.j r2 = r4.qx
            org.json.JSONObject r2 = r2.mReportExtData
            r3 = 0
            com.kwad.components.ad.reward.i.b.a(r1, r3, r3, r0, r2)
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L15:
            r2.bU()
            return
    }

    @Override
    public final void iJ() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.pu
            if (r0 == 0) goto L1c
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.ak(r0)
            if (r0 == 0) goto L1b
            android.view.ViewGroup r0 = r3.vT
            r1 = 8
            r0.setVisibility(r1)
        L1b:
            return
        L1c:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.r(r0)
            if (r0 != 0) goto L3e
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.s(r0)
            if (r0 == 0) goto L31
            goto L3e
        L31:
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.gc()
            if (r0 != 0) goto L3a
            return
        L3a:
            r3.iL()
            return
        L3e:
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.gc()
            if (r0 != 0) goto L5c
            android.widget.TextView r0 = r3.vU
            com.kwad.components.ad.reward.j r1 = r3.qx
            boolean r1 = r1.pp
            if (r1 == 0) goto L54
            java.lang.String[] r1 = com.kwad.components.ad.reward.presenter.d.b.d.vV
            r2 = 1
            r1 = r1[r2]
            goto L59
        L54:
            java.lang.String[] r1 = com.kwad.components.ad.reward.presenter.d.b.d.vV
            r2 = 0
            r1 = r1[r2]
        L59:
            r0.setText(r1)
        L5c:
            return
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.vS
            if (r2 == r0) goto L8
            android.view.ViewGroup r0 = r1.vR
            if (r2 != r0) goto L37
        L8:
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.content.Context r2 = r2.getContext()
            r0.<init>(r2)
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r0.P(r2)
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r0)
            r0 = 0
            com.kwad.components.core.e.d.a$a r2 = r2.am(r0)
            r0 = 2
            com.kwad.components.core.e.d.a$a r2 = r2.ao(r0)
            com.kwad.components.ad.reward.presenter.d.b.d$3 r0 = new com.kwad.components.ad.reward.presenter.d.b.d$3
            r0.<init>(r1)
            com.kwad.components.core.e.d.a$a r2 = r2.a(r0)
            com.kwad.components.core.e.d.a.a(r2)
        L37:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_end_reward_icon_layout
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.vR = r0
            int r0 = com.kwad.sdk.R.id.ksad_end_reward_icon
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.vS = r0
            int r0 = com.kwad.sdk.R.id.ksad_detail_reward_deep_task_view_playend
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.vT = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_deep_task_count_down_playend
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.vU = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r2.mRewardVerifyListener
            r0.b(r1)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            android.view.ViewGroup r0 = r2.vR
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.vS
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r2.vT
            r0.setVisibility(r1)
            return
    }
}
