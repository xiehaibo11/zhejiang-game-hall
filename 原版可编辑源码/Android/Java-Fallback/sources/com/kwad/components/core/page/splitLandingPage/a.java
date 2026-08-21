package com.kwad.components.core.page.splitLandingPage;

public final class a extends com.kwad.components.core.n.e {
    private com.kwad.components.core.widget.FeedVideoView Mt;
    private android.widget.LinearLayout Mu;
    private com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView Om;
    private com.kwad.sdk.mvp.Presenter On;
    private com.kwad.components.core.page.splitLandingPage.view.a Oo;
    private com.kwad.components.core.page.b.a Op;
    private boolean Oq;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;






    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.core.page.splitLandingPage.a T(com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.components.core.page.splitLandingPage.a r0 = new com.kwad.components.core.page.splitLandingPage.a
            r0.<init>()
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            org.json.JSONObject r2 = r4.toJson()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "key_photo"
            r1.putString(r3, r2)
            boolean r4 = r4.mPvReported
            java.lang.String r2 = "key_report"
            r1.putBoolean(r2, r4)
            r0.setArguments(r1)
            return r0
    }

    static android.widget.LinearLayout a(com.kwad.components.core.page.splitLandingPage.a r0) {
            android.widget.LinearLayout r0 = r0.Mu
            return r0
    }

    static boolean a(com.kwad.components.core.page.splitLandingPage.a r0, boolean r1) {
            r1 = 0
            r0.Oq = r1
            return r1
    }

    static void b(com.kwad.components.core.page.splitLandingPage.a r0) {
            r0.pn()
            return
    }

    static com.kwad.components.core.widget.FeedVideoView c(com.kwad.components.core.page.splitLandingPage.a r0) {
            com.kwad.components.core.widget.FeedVideoView r0 = r0.Mt
            return r0
    }

    static boolean d(com.kwad.components.core.page.splitLandingPage.a r0) {
            boolean r0 = r0.pm()
            return r0
    }

    static com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView e(com.kwad.components.core.page.splitLandingPage.a r0) {
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r0 = r0.Om
            return r0
    }

    static com.kwad.components.core.page.splitLandingPage.view.a f(com.kwad.components.core.page.splitLandingPage.a r0) {
            com.kwad.components.core.page.splitLandingPage.view.a r0 = r0.Oo
            return r0
    }

    private void initView() {
            r5 = this;
            com.kwad.components.core.page.recycle.e r0 = new com.kwad.components.core.page.recycle.e
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.components.core.e.d.c r2 = r5.mApkDownloadHelper
            r3 = 0
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.mvp.Presenter r1 = r5.On
            r1.k(r0)
            com.kwad.components.core.page.splitLandingPage.view.a r1 = new com.kwad.components.core.page.splitLandingPage.view.a
            android.content.Context r2 = r5.mContext
            com.kwad.components.core.page.splitLandingPage.a.a r3 = new com.kwad.components.core.page.splitLandingPage.a.a
            com.kwad.sdk.core.response.model.AdTemplate r4 = r0.adTemplate
            com.kwad.components.core.e.d.c r0 = r0.JG
            r3.<init>(r4, r0)
            r1.<init>(r2, r3)
            r5.Oo = r1
            com.kwad.components.core.page.splitLandingPage.a$3 r0 = new com.kwad.components.core.page.splitLandingPage.a$3
            r0.<init>(r5)
            r1.a(r0)
            com.kwad.components.core.widget.FeedVideoView r0 = r5.Mt
            com.kwad.components.core.page.splitLandingPage.a$4 r1 = new com.kwad.components.core.page.splitLandingPage.a$4
            r1.<init>(r5)
            r0.post(r1)
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r0 = r5.Om
            com.kwad.components.core.page.splitLandingPage.a$5 r1 = new com.kwad.components.core.page.splitLandingPage.a$5
            r1.<init>(r5)
            r0.setSplitScrollWebViewListener(r1)
            return
    }

    private void j(android.view.ViewGroup r3) {
            r2 = this;
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            r2.On = r0
            r0.F(r3)
            com.kwad.components.core.page.b.b r3 = new com.kwad.components.core.page.b.b
            r3.<init>()
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r0 = r2.Om
            r3.F(r0)
            com.kwad.components.core.page.b.a r0 = new com.kwad.components.core.page.b.a
            r0.<init>()
            r2.Op = r0
            com.kwad.components.core.widget.FeedVideoView r1 = r2.Mt
            r0.F(r1)
            com.kwad.sdk.mvp.Presenter r0 = r2.On
            r0.a(r3)
            com.kwad.sdk.mvp.Presenter r3 = r2.On
            com.kwad.components.core.page.b.a r0 = r2.Op
            r3.a(r0)
            return
    }

    private boolean pm() {
            r7 = this;
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r0 = r7.Om
            r1 = 0
            if (r0 == 0) goto L66
            float r0 = r0.getTranslationY()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L66
            boolean r0 = r7.Oq
            if (r0 == 0) goto L13
            goto L66
        L13:
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r0 = r7.Om
            r0.setDisableAnimation(r1)
            r0 = 1
            r7.Oq = r0
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r3 = r7.Om
            r4 = 0
            float r5 = r3.getTranslationY()
            com.kwad.components.core.widget.FeedVideoView r6 = r7.Mt
            int r6 = r6.getHeight()
            float r6 = (float) r6
            float r5 = r5 + r6
            android.animation.Animator r2 = com.kwad.components.core.t.m.a(r3, r4, r2, r5)
            android.animation.AnimatorSet r3 = new android.animation.AnimatorSet
            r3.<init>()
            int r4 = com.kwad.sdk.core.config.d.yY()
            r5 = 2
            if (r4 != r5) goto L57
            com.kwad.components.core.page.splitLandingPage.view.a r4 = r7.Oo
            boolean r4 = r4.isVisible()
            if (r4 == 0) goto L57
            com.kwad.components.core.page.splitLandingPage.view.a r4 = r7.Oo
            r4.po()
            com.kwad.components.core.page.splitLandingPage.view.a r4 = r7.Oo
            android.animation.Animator r4 = r4.aC(r1)
            android.animation.Animator[] r5 = new android.animation.Animator[r5]
            r5[r1] = r4
            r5[r0] = r2
            r3.playSequentially(r5)
            goto L5a
        L57:
            r3.play(r2)
        L5a:
            com.kwad.components.core.page.splitLandingPage.a$2 r1 = new com.kwad.components.core.page.splitLandingPage.a$2
            r1.<init>(r7)
            r3.addListener(r1)
            r3.start()
            return r0
        L66:
            return r1
    }

    private void pn() {
            r4 = this;
            com.kwad.components.core.page.b.a r0 = r4.Op
            r0.lI()
            com.kwad.components.core.page.b.a r0 = r4.Op
            com.kwad.components.core.widget.FeedVideoView r1 = r4.Mt
            r0.F(r1)
            com.kwad.components.core.page.recycle.e r0 = new com.kwad.components.core.page.recycle.e
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            r3 = 0
            r0.<init>(r1, r2, r3)
            com.kwad.components.core.page.b.a r1 = r4.Op
            r1.k(r0)
            return
    }

    private void v(android.view.View r4) {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_bar
            android.view.View r0 = r4.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r3.Mu = r0
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_bar_textview
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            int r1 = com.kwad.sdk.R.id.ksad_web_tip_close_btn
            android.view.View r4 = r4.findViewById(r1)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            com.kwad.components.core.page.splitLandingPage.a$1 r1 = new com.kwad.components.core.page.splitLandingPage.a$1
            r1.<init>(r3)
            r4.setOnClickListener(r1)
            com.kwad.sdk.core.response.model.AdTemplate r4 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r1 = com.kwad.sdk.core.response.b.a.bn(r4)
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.bj(r4)
            if (r1 == 0) goto L40
            android.widget.LinearLayout r1 = r3.Mu
            r2 = 0
            r1.setVisibility(r2)
            r0.setText(r4)
            r4 = 1
            r0.setSelected(r4)
            return
        L40:
            android.widget.LinearLayout r4 = r3.Mu
            r0 = 8
            r4.setVisibility(r0)
            return
    }

    @Override
    public final boolean bP() {
            r2 = this;
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r0 = r2.Om
            r1 = 1
            if (r0 == 0) goto L11
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L11
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r0 = r2.Om
            r0.goBack()
            return r1
        L11:
            boolean r0 = r2.pm()
            if (r0 == 0) goto L18
            return r1
        L18:
            com.kwad.components.core.widget.FeedVideoView r0 = r2.Mt
            if (r0 == 0) goto L21
            boolean r0 = r0.ss()
            return r0
        L21:
            r0 = 0
            return r0
    }

    @Override
    public final void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.os.Bundle r4 = r3.getArguments()
            java.lang.String r0 = "key_photo"
            java.lang.String r4 = r4.getString(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate
            r0.<init>()
            if (r4 == 0) goto L21
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1d
            r1.<init>(r4)     // Catch: org.json.JSONException -> L1d
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L21:
            r3.mAdTemplate = r0
            android.os.Bundle r4 = r3.getArguments()
            r1 = 0
            java.lang.String r2 = "key_report"
            boolean r4 = r4.getBoolean(r2, r1)
            r0.mPvReported = r4
            com.kwad.sdk.core.response.model.AdTemplate r4 = r3.mAdTemplate
            r0 = 1
            r4.mAdWebVideoPageShowing = r0
            return
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            super.onDestroy()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto La
            r1 = 0
            r0.mAdWebVideoPageShowing = r1
        La:
            return
    }

    @Override
    public final void onViewCreated(android.view.View r1, android.os.Bundle r2) {
            r0 = this;
            super.onViewCreated(r1, r2)
            int r2 = com.kwad.sdk.R.id.ksad_split_land_ad_feed_video
            android.view.View r2 = r0.findViewById(r2)
            com.kwad.components.core.widget.FeedVideoView r2 = (com.kwad.components.core.widget.FeedVideoView) r2
            r0.Mt = r2
            int r2 = com.kwad.sdk.R.id.ksad_video_webView
            android.view.View r2 = r0.findViewById(r2)
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView r2 = (com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView) r2
            r0.Om = r2
            r0.v(r1)
            android.view.ViewGroup r1 = r0.lJ
            r0.j(r1)
            r0.initView()
            return
    }

    @Override
    public final int ov() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_split_land_page
            return r0
    }

    public final void po() {
            r1 = this;
            com.kwad.components.core.widget.FeedVideoView r0 = r1.Mt
            r0.po()
            return
    }

    public final void setApkDownloadHelper(com.kwad.components.core.e.d.c r1) {
            r0 = this;
            r0.mApkDownloadHelper = r1
            return
    }
}
