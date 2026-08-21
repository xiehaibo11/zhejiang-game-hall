package com.kwad.components.ad.reward.presenter.platdetail.a;

public final class c extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener {
    private final com.kwad.components.ad.reward.e.e gN;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    private android.widget.ImageView vk;
    private android.widget.TextView vl;
    private boolean vm;
    private android.view.View vn;
    private long vo;





    public c() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.vm = r0
            r0 = 0
            r2.vn = r0
            r0 = -1
            r2.vo = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.c$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.c$1
            r0.<init>(r2)
            r2.gt = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.c$2 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.c$2
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.c$3 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.c$3
            r0.<init>(r2)
            r2.gN = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.platdetail.a.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.presenter.platdetail.a.c r0, boolean r1) {
            r1 = 1
            r0.vm = r1
            return r1
    }

    static void b(com.kwad.components.ad.reward.presenter.platdetail.a.c r0) {
            r0.bU()
            return
    }

    private void bU() {
            r4 = this;
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r4.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r4.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r4.qx
            java.util.Set<com.kwad.components.ad.reward.e.e> r0 = r0.pf
            com.kwad.components.ad.reward.e.e r1 = r4.gN
            r0.add(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            long r0 = com.kwad.sdk.core.response.b.a.X(r0)
            r4.vo = r0
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L33
            android.view.View r0 = r4.vn
            r1 = 0
        L2f:
            r0.setVisibility(r1)
            return
        L33:
            android.view.View r0 = r4.vn
            r1 = 8
            goto L2f
    }

    static long c(com.kwad.components.ad.reward.presenter.platdetail.a.c r2) {
            long r0 = r2.vo
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo d(com.kwad.components.ad.reward.presenter.platdetail.a.c r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static void e(com.kwad.components.ad.reward.presenter.platdetail.a.c r0) {
            r0.iu()
            return
    }

    static android.view.View f(com.kwad.components.ad.reward.presenter.platdetail.a.c r0) {
            android.view.View r0 = r0.vn
            return r0
    }

    private void iu() {
            r2 = this;
            android.view.View r0 = r2.vn
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L9
            return
        L9:
            android.view.View r0 = r2.vn
            r1 = 0
            r0.setAlpha(r1)
            android.view.View r0 = r2.vn
            r1 = 0
            r0.setVisibility(r1)
            r0 = 2
            float[] r0 = new float[r0]
            r0 = {x002c: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            com.kwad.components.ad.reward.presenter.platdetail.a.c$4 r1 = new com.kwad.components.ad.reward.presenter.platdetail.a.c$4
            r1.<init>(r2)
            r0.addUpdateListener(r1)
            r0.start()
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
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.view.View r0 = r1.vn
            if (r2 != r0) goto Lb
            com.kwad.components.ad.reward.j r2 = r1.qx
            boolean r0 = r1.vm
            com.kwad.components.ad.reward.presenter.e.a(r2, r0)
        Lb:
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_detail_close_btn
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.vk = r0
            int r0 = com.kwad.sdk.R.id.ksad_top_toolbar_close_tip
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.vl = r0
            java.lang.String r0 = com.kwad.components.ad.reward.a.b.gD()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            android.widget.TextView r0 = r2.vl
            java.lang.String r1 = com.kwad.components.ad.reward.a.b.gD()
            r0.setText(r1)
            android.widget.TextView r0 = r2.vl
        L2c:
            r2.vn = r0
            goto L44
        L2f:
            int r0 = com.kwad.components.ad.reward.a.b.gC()
            if (r0 != 0) goto L3a
            android.widget.ImageView r0 = r2.vk
            int r1 = com.kwad.sdk.R.drawable.ksad_page_close
            goto L3e
        L3a:
            android.widget.ImageView r0 = r2.vk
            int r1 = com.kwad.sdk.R.drawable.ksad_video_skip_icon
        L3e:
            r0.setImageResource(r1)
            android.widget.ImageView r0 = r2.vk
            goto L2c
        L44:
            android.view.View r0 = r2.vn
            r0.setOnClickListener(r2)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.Set<com.kwad.components.ad.reward.e.e> r0 = r0.pf
            com.kwad.components.ad.reward.e.e r1 = r2.gN
            r0.remove(r1)
            android.view.View r0 = r2.vn
            r1 = 8
            r0.setVisibility(r1)
            return
    }
}
