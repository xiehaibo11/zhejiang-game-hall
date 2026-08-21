package com.kwad.components.core.playable;

public final class a implements com.kwad.components.core.webview.jshandler.i {
    private final com.kwad.sdk.core.webview.KsAdWebView Pb;
    private long Pc;
    private int Pd;
    private com.kwad.components.core.playable.PlayableSource Pe;
    private java.util.List<com.kwad.components.core.webview.jshandler.ah.b> Pf;
    private java.util.List<com.kwad.sdk.core.webview.KsAdWebView.d> Pg;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.components.core.webview.jshandler.am cG;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private android.content.Context mContext;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;





    static class a implements com.kwad.components.core.webview.jshandler.au.b {
        private final java.lang.ref.WeakReference<com.kwad.components.core.playable.a> Pi;

        public a(com.kwad.components.core.playable.a r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.Pi = r0
                return
        }

        @Override
        public final void P(int r2) {
                r1 = this;
                java.lang.ref.WeakReference<com.kwad.components.core.playable.a> r0 = r1.Pi
                java.lang.Object r0 = r0.get()
                com.kwad.components.core.playable.a r0 = (com.kwad.components.core.playable.a) r0
                if (r0 == 0) goto Ld
                com.kwad.components.core.playable.a.b(r0, r2)
            Ld:
                return
        }
    }

    public a(com.kwad.sdk.core.webview.KsAdWebView r3) {
            r2 = this;
            r2.<init>()
            com.kwad.components.core.playable.PlayableSource r0 = com.kwad.components.core.playable.PlayableSource.UNKNOWN_TRYPLAY_ENTRY_SOURCE
            r2.Pe = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.Pf = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.Pg = r0
            r2.Pb = r3
            com.kwad.components.core.playable.a$1 r0 = new com.kwad.components.core.playable.a$1
            r0.<init>(r2)
            r3.setOnTouchListener(r0)
            com.kwad.sdk.core.webview.a.c$a r0 = r3.getClientConfig()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r2.getWebListener()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            r3.setClientConfig(r0)
            com.kwad.sdk.core.webview.KsAdWebView r3 = r2.Pb
            a(r3)
            return
    }

    static int a(com.kwad.components.core.playable.a r0, int r1) {
            r0.Pd = r1
            return r1
    }

    static long a(com.kwad.components.core.playable.a r0, long r1) {
            r0.Pc = r1
            return r1
    }

    static com.kwad.sdk.core.webview.KsAdWebView a(com.kwad.components.core.playable.a r0) {
            com.kwad.sdk.core.webview.KsAdWebView r0 = r0.Pb
            return r0
    }

    private static void a(com.kwad.sdk.core.webview.KsAdWebView r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L14
            boolean r0 = com.kwad.sdk.core.config.d.zL()
            if (r0 == 0) goto L14
            android.webkit.WebSettings r2 = r2.getSettings()
            r0 = 0
            r2.setMediaPlaybackRequiresUserGesture(r0)
        L14:
            return
    }

    private void a(com.kwad.sdk.core.webview.b r3, com.kwad.components.core.webview.a r4, com.kwad.components.core.e.d.c r5) {
            r2 = this;
            com.kwad.components.core.webview.jshandler.au r0 = new com.kwad.components.core.webview.jshandler.au
            com.kwad.components.core.playable.a$a r1 = new com.kwad.components.core.playable.a$a
            r1.<init>(r2)
            r0.<init>(r3, r5, r1)
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.ah r5 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.playable.a$3 r0 = new com.kwad.components.core.playable.a$3
            r0.<init>(r2)
            java.lang.String r1 = r2.getUrl()
            r5.<init>(r0, r1)
            r4.a(r5)
            com.kwad.components.core.webview.jshandler.ab r5 = new com.kwad.components.core.webview.jshandler.ab
            r5.<init>(r3)
            r4.a(r5)
            com.kwad.components.core.webview.jshandler.am r5 = new com.kwad.components.core.webview.jshandler.am
            r5.<init>()
            r2.cG = r5
            com.kwad.components.core.webview.jshandler.w r5 = new com.kwad.components.core.webview.jshandler.w
            r5.<init>()
            r4.a(r5)
            com.kwad.components.core.webview.jshandler.v r5 = new com.kwad.components.core.webview.jshandler.v
            r5.<init>(r3)
            r4.a(r5)
            com.kwad.components.core.webview.b.a.f r3 = new com.kwad.components.core.webview.b.a.f
            r3.<init>()
            r4.a(r3)
            com.kwad.components.core.webview.jshandler.am r3 = r2.cG
            r4.a(r3)
            com.kwad.components.core.webview.jshandler.e r3 = new com.kwad.components.core.webview.jshandler.e
            r3.<init>(r2)
            r4.a(r3)
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

    private void az(int r7) {
            r6 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.getAdTemplate()
            if (r0 != 0) goto L7
            return
        L7:
            long r0 = com.kwad.sdk.core.config.d.zM()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1d
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r4 = r6.Pc
            long r2 = r2 - r4
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1d
            return
        L1d:
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.jG = r7
            com.kwad.sdk.core.view.AdBaseFrameLayout r7 = r6.mRootContainer
            com.kwad.sdk.utils.ac$a r7 = r7.getTouchCoords()
            r0.jI = r7
            com.kwad.components.core.e.d.a$a r7 = new com.kwad.components.core.e.d.a$a
            android.content.Context r1 = r6.mContext
            r7.<init>(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            com.kwad.components.core.e.d.a$a r7 = r7.P(r1)
            com.kwad.components.core.e.d.c r1 = r6.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r7 = r7.b(r1)
            r1 = 0
            com.kwad.components.core.e.d.a$a r7 = r7.am(r1)
            com.kwad.components.core.e.d.a$a r7 = r7.a(r0)
            r0 = 1
            com.kwad.components.core.e.d.a$a r7 = r7.ao(r0)
            com.kwad.components.core.e.d.a.a(r7)
            return
    }

    static java.util.List b(com.kwad.components.core.playable.a r0) {
            java.util.List<com.kwad.sdk.core.webview.KsAdWebView$d> r0 = r0.Pg
            return r0
    }

    static void b(com.kwad.components.core.playable.a r0, int r1) {
            r0.az(r1)
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.core.playable.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static java.util.List d(com.kwad.components.core.playable.a r0) {
            java.util.List<com.kwad.components.core.webview.jshandler.ah$b> r0 = r0.Pf
            return r0
    }

    private com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    private java.lang.String getUrl() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            return r0
        L7:
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bB(r0)
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d getWebListener() {
            r1 = this;
            com.kwad.components.core.playable.a$2 r0 = new com.kwad.components.core.playable.a$2
            r0.<init>(r1)
            return r0
    }

    private void oV() {
            r6 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            long r0 = com.kwad.sdk.core.response.b.a.bx(r0)
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L22
            com.kwad.components.core.playable.a$4 r0 = new com.kwad.components.core.playable.a$4
            r0.<init>(r6)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            long r4 = com.kwad.sdk.core.response.b.a.bx(r1)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r4)
        L22:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            long r0 = com.kwad.sdk.core.response.b.a.bx(r0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L3a
            com.kwad.sdk.core.webview.KsAdWebView r0 = r6.Pb
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r1 = 1
            r0.bk(r1)
        L3a:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.bZ(r0)
            if (r0 <= 0) goto L53
            com.kwad.sdk.core.webview.KsAdWebView r0 = r6.Pb
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            boolean r1 = r1.converted
            r0.bk(r1)
        L53:
            return
    }

    public final void a(com.kwad.components.core.webview.jshandler.ah.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.webview.jshandler.ah$b> r0 = r1.Pf
            r0.add(r2)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.e r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "playableSrc"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Ld
            com.kwad.components.core.playable.PlayableSource r0 = r1.Pe
            r2.f(r0)
        Ld:
            java.lang.String r0 = "getAdType"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L1e
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.mAdTemplate
            if (r3 == 0) goto L1e
            int r3 = r3.adStyle
            r2.aM(r3)
        L1e:
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.view.AdBaseFrameLayout r3, com.kwad.components.core.e.d.c r4) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Pb
            if (r0 != 0) goto Lc
            java.lang.String r2 = "PlayableViewHelper"
            java.lang.String r3 = "registerJsBridge mPlayableView is null"
            com.kwad.sdk.core.e.c.w(r2, r3)
            return
        Lc:
            android.content.Context r0 = r3.getContext()
            r1.mContext = r0
            r1.mRootContainer = r3
            r1.mAdTemplate = r2
            r1.mApkDownloadHelper = r4
            r3 = -1
            r1.Pd = r3
            com.kwad.sdk.core.webview.b r3 = new com.kwad.sdk.core.webview.b
            r3.<init>()
            r3.setAdTemplate(r2)
            r2 = 0
            r3.mScreenOrientation = r2
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r1.mRootContainer
            r3.aye = r2
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r1.mRootContainer
            r3.MT = r2
            com.kwad.sdk.core.webview.KsAdWebView r2 = r1.Pb
            r3.Ms = r2
            r1.ay()
            com.kwad.components.core.webview.a r2 = new com.kwad.components.core.webview.a
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Pb
            r2.<init>(r0)
            r1.cD = r2
            r1.a(r3, r2, r4)
            com.kwad.sdk.core.webview.KsAdWebView r2 = r1.Pb
            com.kwad.components.core.webview.a r3 = r1.cD
            java.lang.String r4 = "KwaiAd"
            r2.addJavascriptInterface(r3, r4)
            return
    }

    public final void a(com.kwad.sdk.core.webview.KsAdWebView.d r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.core.webview.KsAdWebView$d> r0 = r1.Pg
            r0.add(r2)
            return
    }

    public final void b(com.kwad.components.core.webview.jshandler.ah.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.webview.jshandler.ah$b> r0 = r1.Pf
            r0.remove(r2)
            return
    }

    public final void e(com.kwad.components.core.playable.PlayableSource r2) {
            r1 = this;
            if (r2 == 0) goto L4
            r1.Pe = r2
        L4:
            com.kwad.sdk.core.webview.KsAdWebView r2 = r1.Pb
            if (r2 != 0) goto L9
            return
        L9:
            r1.oV()
            java.lang.String r2 = "PlayableViewHelper"
            java.lang.String r0 = "showPlayable"
            com.kwad.sdk.core.e.c.d(r2, r0)
            com.kwad.components.core.webview.jshandler.am r2 = r1.cG
            if (r2 == 0) goto L1a
            r2.rz()
        L1a:
            com.kwad.sdk.core.webview.KsAdWebView r2 = r1.Pb
            r0 = 0
            r2.setVisibility(r0)
            com.kwad.components.core.webview.jshandler.am r2 = r1.cG
            if (r2 == 0) goto L27
            r2.rA()
        L27:
            return
    }

    public final long getLoadTime() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Pb
            if (r0 == 0) goto L9
            long r0 = r0.getLoadTime()
            return r0
        L9:
            r0 = -1
            return r0
    }

    public final void hH() {
            r2 = this;
            java.lang.String r0 = "PlayableViewHelper"
            java.lang.String r1 = "showPlayable"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Pb
            if (r0 != 0) goto Lc
            return
        Lc:
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L13
            r0.rB()
        L13:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Pb
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L21
            r0.rC()
        L21:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Pb
            r0.reload()
            return
    }

    public final void pv() {
            r1 = this;
            com.kwad.components.core.webview.a r0 = r1.cD
            if (r0 == 0) goto La
            r0.destroy()
            r0 = 0
            r1.cD = r0
        La:
            return
    }

    public final void pw() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto L25
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Pb
            if (r0 != 0) goto L9
            goto L25
        L9:
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r1 = 0
            r0.bk(r1)
            java.lang.String r0 = r2.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L20
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.Pb
            r1.loadUrl(r0)
        L20:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.report.a.aF(r0)
        L25:
            return
    }

    public final boolean px() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Pb
            if (r0 == 0) goto La
            int r0 = r2.Pd
            r1 = 1
            if (r0 != r1) goto La
            return r1
        La:
            r0 = 0
            return r0
    }
}
