package com.kwad.components.core.e.c;

public final class e extends com.kwad.components.core.e.c.c implements android.view.View.OnClickListener {
    public com.kwad.components.core.e.c.b Jp;
    public com.kwad.components.core.e.c.b.b Jq;
    private java.lang.Runnable Jy;
    private boolean Jz;
    private com.kwad.sdk.core.webview.KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.components.core.webview.jshandler.am cG;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private com.kwad.components.core.webview.jshandler.aa.b cI;
    private com.kwad.components.core.webview.jshandler.z.b cJ;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;







    public e() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.Jz = r0
            com.kwad.components.core.e.c.e$1 r0 = new com.kwad.components.core.e.c.e$1
            r0.<init>(r1)
            r1.cH = r0
            com.kwad.components.core.e.c.e$4 r0 = new com.kwad.components.core.e.c.e$4
            r0.<init>(r1)
            r1.cI = r0
            com.kwad.components.core.e.c.e$5 r0 = new com.kwad.components.core.e.c.e$5
            r0.<init>(r1)
            r1.cJ = r0
            com.kwad.components.core.e.c.e$6 r0 = new com.kwad.components.core.e.c.e$6
            r0.<init>(r1)
            r1.cK = r0
            return
    }

    private void a(com.kwad.components.core.webview.a r8) {
            r7 = this;
            com.kwad.components.core.webview.jshandler.r r6 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r1 = r7.cE
            com.kwad.components.core.e.d.c r2 = r7.mApkDownloadHelper
            com.kwad.sdk.core.webview.d.a.a r3 = r7.cH
            r4 = 0
            r5 = 1
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            r8.a(r6)
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r1 = r7.cE
            com.kwad.components.core.e.d.c r2 = r7.mApkDownloadHelper
            com.kwad.sdk.core.webview.d.a.a r3 = r7.cH
            r4 = 1
            r0.<init>(r1, r2, r3, r4)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r7.cE
            r0.<init>(r1)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r1 = r7.cE
            r0.<init>(r1)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.t r0 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r1 = r7.cE
            r0.<init>(r1)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.aa r0 = new com.kwad.components.core.webview.jshandler.aa
            com.kwad.sdk.core.webview.b r1 = r7.cE
            com.kwad.components.core.webview.jshandler.aa$b r2 = r7.cI
            r0.<init>(r1, r2)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r7.cK
            com.kwad.components.core.e.c.b$b r2 = r7.Jq
            java.lang.String r2 = r2.url
            r0.<init>(r1, r2)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.am r0 = new com.kwad.components.core.webview.jshandler.am
            r0.<init>()
            r7.cG = r0
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.ap r0 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r1 = r7.cE
            com.kwad.components.core.e.d.c r2 = r7.mApkDownloadHelper
            com.kwad.components.core.e.c.e$3 r3 = new com.kwad.components.core.e.c.e$3
            r3.<init>(r7)
            r0.<init>(r1, r2, r3)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.z r0 = new com.kwad.components.core.webview.jshandler.z
            com.kwad.components.core.webview.jshandler.z$b r1 = r7.cJ
            r0.<init>(r1)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r1 = r7.cE
            r0.<init>(r1)
            r8.a(r0)
            return
    }

    static boolean a(com.kwad.components.core.e.c.e r0) {
            boolean r0 = r0.Jz
            return r0
    }

    static boolean a(com.kwad.components.core.e.c.e r0, boolean r1) {
            r1 = 1
            r0.Jz = r1
            return r1
    }

    private void aD() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "hideWithOutAnimation  convertBridgeClicked: "
            r0.<init>(r1)
            boolean r1 = r2.Jz
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DownloadTipsDialogWebCardPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L1e
            return
        L1e:
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L25
            r0.rB()
        L25:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 4
            r0.setVisibility(r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L32
            r0.rC()
        L32:
            boolean r0 = r2.Jz
            if (r0 == 0) goto L3b
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.report.a.aD(r0)
        L3b:
            com.kwad.components.core.e.c.b r0 = r2.Jp
            if (r0 == 0) goto L4c
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L4c
            com.kwad.components.core.e.c.b r0 = r2.Jp
            boolean r1 = r2.Jz
            r0.al(r1)
        L4c:
            return
    }

    private void av() {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r2.cE = r0
            com.kwad.components.core.e.c.d r1 = r2.Jr
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.components.core.e.c.d r1 = r2.Jr
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            r0.aye = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.components.core.e.c.d r1 = r2.Jr
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            r0.MT = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.cB
            r0.Ms = r1
            return
    }

    private void ax() {
            r3 = this;
            java.lang.String r0 = "DownloadTipsDialogWebCardPresenter"
            java.lang.String r1 = "setupJsBridge"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r3.ay()
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.cB
            r0.<init>(r1)
            r3.cD = r0
            r3.a(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            com.kwad.components.core.webview.a r1 = r3.cD
            java.lang.String r2 = "KwaiAd"
            r0.addJavascriptInterface(r1, r2)
            return
    }

    private void ay() {
            r1 = this;
            com.kwad.components.core.webview.a r0 = r1.cD
            if (r0 == 0) goto La
            r0.destroy()
            r0 = 0
            r1.cD = r0
        La:
            return
    }

    static void b(com.kwad.components.core.e.c.e r0) {
            r0.aD()
            return
    }

    static android.content.Context c(com.kwad.components.core.e.c.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.content.Context d(com.kwad.components.core.e.c.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.content.Context e(com.kwad.components.core.e.c.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate f(com.kwad.components.core.e.c.e r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static android.content.Context g(com.kwad.components.core.e.c.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.sdk.core.webview.KsAdWebView h(com.kwad.components.core.e.c.e r0) {
            com.kwad.sdk.core.webview.KsAdWebView r0 = r0.cB
            return r0
    }

    static void i(com.kwad.components.core.e.c.e r0) {
            r0.nf()
            return
    }

    static android.content.Context j(com.kwad.components.core.e.c.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.content.Context k(com.kwad.components.core.e.c.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.content.Context l(com.kwad.components.core.e.c.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void nd() {
            r4 = this;
            r4.ax()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            com.kwad.components.core.e.c.b$b r1 = r4.Jq
            java.lang.String r1 = r1.url
            r0.loadUrl(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            java.lang.Runnable r1 = r4.ne()
            r2 = 1500(0x5dc, double:7.41E-321)
            r0.postDelayed(r1, r2)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            r1 = 0
            r0.setBackgroundColor(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r0.setAlpha(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            r0.setVisibility(r1)
            return
    }

    private java.lang.Runnable ne() {
            r1 = this;
            java.lang.Runnable r0 = r1.Jy
            if (r0 != 0) goto Lb
            com.kwad.components.core.e.c.e$2 r0 = new com.kwad.components.core.e.c.e$2
            r0.<init>(r1)
            r1.Jy = r0
        Lb:
            java.lang.Runnable r0 = r1.Jy
            return r0
    }

    private void nf() {
            r2 = this;
            java.lang.Runnable r0 = r2.Jy
            if (r0 == 0) goto L9
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.cB
            r1.removeCallbacks(r0)
        L9:
            return
    }

    private void release() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r0.release()
            r2.ay()
            return
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.core.e.c.d r0 = r1.Jr
            com.kwad.components.core.e.c.b r0 = r0.Jp
            r1.Jp = r0
            com.kwad.components.core.e.c.d r0 = r1.Jr
            com.kwad.components.core.e.c.b$b r0 = r0.Jq
            r1.Jq = r0
            com.kwad.components.core.e.c.d r0 = r1.Jr
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1.mAdTemplate = r0
            com.kwad.components.core.e.c.d r0 = r1.Jr
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            r0.setOnClickListener(r1)
            com.kwad.components.core.e.c.d r0 = r1.Jr
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r1.mApkDownloadHelper = r0
            r1.av()
            r1.nd()
            return
    }

    @Override
    public final void onClick(android.view.View r1) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdTemplate r1 = r0.mAdTemplate
            com.kwad.sdk.core.report.a.aD(r1)
            com.kwad.components.core.e.c.b r1 = r0.Jp
            if (r1 == 0) goto Lc
            r1.dismiss()
        Lc:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_download_tips_web_card_webView
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r1.cB = r0
            return
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            super.onDestroy()
            r0.release()
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            r0.nf()
            return
    }
}
