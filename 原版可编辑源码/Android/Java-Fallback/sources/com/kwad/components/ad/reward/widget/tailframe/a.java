package com.kwad.components.ad.reward.widget.tailframe;

public abstract class a implements com.kwad.sdk.widget.c {
    protected android.view.View Bo;
    protected android.widget.ImageView Bp;
    private com.kwad.components.ad.widget.tailframe.appbar.a Bq;
    private com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View Br;
    private com.kwad.components.ad.reward.widget.tailframe.b Bs;
    private com.kwad.components.core.page.widget.TextProgressBar Bt;
    private android.view.View Bu;
    private int Bv;
    private android.widget.TextView dC;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    protected com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected com.kwad.components.core.widget.KsLogoView mLogoView;
    private org.json.JSONObject mReportExtData;
    private com.kwad.components.ad.reward.j qx;



    public a(int r1) {
            r0 = this;
            r0.<init>()
            r0.Bv = r1
            return
    }

    static com.kwad.components.ad.widget.tailframe.appbar.a a(com.kwad.components.ad.reward.widget.tailframe.a r0) {
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r0.Bq
            return r0
    }

    static com.kwad.components.core.page.widget.TextProgressBar b(com.kwad.components.ad.reward.widget.tailframe.a r0) {
            com.kwad.components.core.page.widget.TextProgressBar r0 = r0.Bt
            return r0
    }

    private void b(android.view.View r6, boolean r7) {
            r5 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r0)
            r1 = 2
            r2 = 1
            if (r0 == 0) goto L21
            if (r7 == 0) goto Le
            r7 = r2
            goto L10
        Le:
            r7 = 153(0x99, float:2.14E-43)
        L10:
            com.kwad.components.ad.reward.j r0 = r5.qx
            android.view.View r3 = r5.Bo
            android.content.Context r3 = r3.getContext()
            android.view.View r4 = r5.Bu
            if (r6 != r4) goto L1d
            r1 = r2
        L1d:
            r0.a(r2, r3, r7, r1)
            return
        L21:
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L2f
            com.kwad.components.core.page.widget.TextProgressBar r0 = r5.Bt
            if (r6 != r0) goto L34
        L2d:
            r1 = r2
            goto L34
        L2f:
            android.widget.TextView r0 = r5.dC
            if (r6 != r0) goto L34
            goto L2d
        L34:
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r6.getContext()
            r0.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            com.kwad.components.core.e.d.a$a r0 = r0.P(r3)
            com.kwad.components.core.e.d.c r3 = r5.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r0 = r0.b(r3)
            r3 = 0
            if (r1 != r2) goto L4e
            r4 = r2
            goto L4f
        L4e:
            r4 = r3
        L4f:
            com.kwad.components.core.e.d.a$a r0 = r0.an(r4)
            com.kwad.components.core.e.d.a$a r0 = r0.am(r2)
            com.kwad.components.core.page.widget.TextProgressBar r4 = r5.Bt
            if (r6 != r4) goto L5c
            goto L5d
        L5c:
            r2 = r3
        L5d:
            com.kwad.components.core.e.d.a$a r6 = r0.am(r2)
            com.kwad.components.core.e.d.a$a r6 = r6.ao(r1)
            com.kwad.components.ad.reward.widget.tailframe.a$2 r0 = new com.kwad.components.ad.reward.widget.tailframe.a$2
            r0.<init>(r5, r7)
            com.kwad.components.core.e.d.a$a r6 = r6.a(r0)
            com.kwad.components.core.e.d.a.a(r6)
            return
    }

    private void bindDownloadListener() {
            r4 = this;
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            org.json.JSONObject r2 = r4.mReportExtData
            com.kwad.components.ad.reward.widget.tailframe.a$1 r3 = new com.kwad.components.ad.reward.widget.tailframe.a$1
            r3.<init>(r4)
            r0.<init>(r1, r2, r3)
            r4.mApkDownloadHelper = r0
            return
    }

    static com.kwad.components.ad.reward.widget.tailframe.b c(com.kwad.components.ad.reward.widget.tailframe.a r0) {
            com.kwad.components.ad.reward.widget.tailframe.b r0 = r0.Bs
            return r0
    }

    private void km() {
            r2 = this;
            android.view.View r0 = r2.Bo
            r1 = 0
            r0.setOnClickListener(r1)
            r2.mApkDownloadHelper = r1
            return
    }

    private void ko() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L32
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r0)
            if (r0 == 0) goto L13
            goto L32
        L13:
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r0 = r4.Br
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            r0.b(r3)
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r0 = r4.Br
            android.widget.TextView r0 = r0.getH5OpenBtn()
            r4.dC = r0
            r0.setClickable(r2)
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r0 = r4.Br
            r0.setVisibility(r1)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.TextView r1 = r4.dC
            r0.<init>(r1, r4)
            return
        L32:
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r4.Bq
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            r0.b(r3)
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r4.Bq
            r0.setVisibility(r1)
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r4.Bq
            com.kwad.components.core.page.widget.TextProgressBar r0 = r0.getTextProgressBar()
            r4.Bt = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r0)
            if (r0 != 0) goto L5e
            com.kwad.components.core.page.widget.TextProgressBar r0 = r4.Bt
            r0.setClickable(r2)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            com.kwad.components.core.page.widget.TextProgressBar r1 = r4.Bt
            r0.<init>(r1, r4)
            r4.bindDownloadListener()
            return
        L5e:
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r4.Bq
            android.view.View r0 = r0.getBtnInstallContainer()
            r4.Bu = r0
            r0.setClickable(r2)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.View r1 = r4.Bu
            r0.<init>(r1, r4)
            return
    }

    public void D(android.content.Context r4) {
            r3 = this;
            int r0 = r3.Bv
            r1 = 0
            r2 = 0
            android.view.View r4 = com.kwad.sdk.m.l.a(r4, r0, r1, r2)
            r3.Bo = r4
            int r0 = com.kwad.sdk.R.id.ksad_video_thumb_img
            android.view.View r4 = r4.findViewById(r0)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            r3.Bp = r4
            android.view.View r4 = r3.Bo
            int r0 = com.kwad.sdk.R.id.ksad_video_tf_logo
            android.view.View r4 = r4.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r4 = (com.kwad.components.core.widget.KsLogoView) r4
            r3.mLogoView = r4
            android.view.View r4 = r3.Bo
            int r0 = com.kwad.sdk.R.id.ksad_video_app_tail_frame
            android.view.View r4 = r4.findViewById(r0)
            com.kwad.components.ad.widget.tailframe.appbar.a r4 = (com.kwad.components.ad.widget.tailframe.appbar.a) r4
            r3.Bq = r4
            android.view.View r4 = r3.Bo
            int r0 = com.kwad.sdk.R.id.ksad_video_h5_tail_frame
            android.view.View r4 = r4.findViewById(r0)
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r4 = (com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View) r4
            r3.Br = r4
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.b(r2, r0)
            return
    }

    public void a(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2, com.kwad.components.ad.reward.widget.tailframe.b r3) {
            r0 = this;
            r0.mAdTemplate = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            r0.mAdInfo = r1
            r0.mReportExtData = r2
            r0.Bs = r3
            com.kwad.components.core.widget.KsLogoView r1 = r0.mLogoView
            com.kwad.sdk.core.response.model.AdTemplate r2 = r0.mAdTemplate
            r1.aa(r2)
            r0.ko()
            android.view.View r1 = r0.Bo
            r2 = 1
            r1.setClickable(r2)
            com.kwad.sdk.widget.f r1 = new com.kwad.sdk.widget.f
            android.view.View r2 = r0.Bo
            r1.<init>(r2, r0)
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            r1.b(r2, r0)
        Lc:
            return
    }

    public final void d(boolean r2, boolean r3) {
            r1 = this;
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r0 = r1.Br
            r0.e(r2, r3)
            return
    }

    public final void destroy() {
            r2 = this;
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r2.Bq
            r1 = 8
            if (r0 == 0) goto Le
            r0.kq()
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r2.Bq
            r0.setVisibility(r1)
        Le:
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r0 = r2.Br
            if (r0 == 0) goto L1a
            r0.kq()
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r0 = r2.Br
            r0.setVisibility(r1)
        L1a:
            r2.km()
            return
    }

    public final void jV() {
            r1 = this;
            com.kwad.components.ad.widget.tailframe.appbar.a r0 = r1.Bq
            if (r0 == 0) goto L7
            r0.kq()
        L7:
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View r0 = r1.Br
            if (r0 == 0) goto Le
            r0.kq()
        Le:
            return
    }

    public final android.view.View kn() {
            r1 = this;
            android.view.View r0 = r1.Bo
            return r0
    }

    public final void setCallerContext(com.kwad.components.ad.reward.j r1) {
            r0 = this;
            r0.qx = r1
            return
    }
}
