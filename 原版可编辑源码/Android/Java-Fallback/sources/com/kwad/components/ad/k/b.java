package com.kwad.components.ad.k;

public class b {
    private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> Ha;
    private java.util.List<com.kwad.components.core.e.d.c> Hb;
    protected android.view.View Hc;
    protected boolean Hd;
    private java.lang.String He;
    private com.kwad.components.ad.k.b.a Hf;
    private com.kwad.components.ad.k.b.b Hg;
    protected com.kwad.sdk.core.webview.KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    protected com.kwad.sdk.core.webview.b cE;
    private int cF;
    protected com.kwad.components.core.webview.jshandler.am cG;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private com.kwad.components.core.webview.jshandler.z.b cJ;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private android.widget.FrameLayout cQ;
    private com.kwad.sdk.core.view.AdBaseFrameLayout dr;
    protected com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private org.json.JSONObject mReportExtData;
    private int mScreenOrientation;
    private com.kwad.components.core.webview.jshandler.ar yI;





    public interface a {
        void iG();
    }

    public interface b {
        void hR();
    }

    public b() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Ha = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Hb = r0
            r0 = -1
            r1.cF = r0
            r0 = 0
            r1.Hd = r0
            com.kwad.components.ad.k.b$3 r0 = new com.kwad.components.ad.k.b$3
            r0.<init>(r1)
            r1.cJ = r0
            com.kwad.components.ad.k.b$4 r0 = new com.kwad.components.ad.k.b$4
            r0.<init>(r1)
            r1.cK = r0
            return
    }

    public b(org.json.JSONObject r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Ha = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Hb = r0
            r0 = -1
            r1.cF = r0
            r0 = 0
            r1.Hd = r0
            com.kwad.components.ad.k.b$3 r0 = new com.kwad.components.ad.k.b$3
            r0.<init>(r1)
            r1.cJ = r0
            com.kwad.components.ad.k.b$4 r0 = new com.kwad.components.ad.k.b$4
            r0.<init>(r1)
            r1.cK = r0
            r1.mReportExtData = r2
            r1.He = r3
            return
    }

    static int a(com.kwad.components.ad.k.b r0, int r1) {
            r0.cF = r1
            return r1
    }

    static com.kwad.components.ad.k.b.a a(com.kwad.components.ad.k.b r0) {
            com.kwad.components.ad.k.b$a r0 = r0.Hf
            return r0
    }

    private void aF() {
            r3 = this;
            int r0 = r3.cF
            r1 = -1
            if (r0 != r1) goto L8
            java.lang.String r0 = "timeout"
            goto L10
        L8:
            r1 = 1
            if (r0 == r1) goto Le
            java.lang.String r0 = "h5error"
            goto L10
        Le:
            java.lang.String r0 = "others"
        L10:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "show webCard fail, reason: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "PlayEndWebCard"
            com.kwad.sdk.core.e.c.w(r1, r0)
            return
    }

    private void av() {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r2.cE = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r2.cE
            int r1 = r2.mScreenOrientation
            r0.mScreenOrientation = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r2.dr
            r0.aye = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            android.widget.FrameLayout r1 = r2.cQ
            r0.MT = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.cB
            r0.Ms = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            org.json.JSONObject r1 = r2.mReportExtData
            r0.mReportExtData = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            r2.b(r0)
            return
    }

    private void ax() {
            r3 = this;
            r3.ay()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 1
            r0.setAllowFileAccess(r1)
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

    static java.lang.String b(com.kwad.components.ad.k.b r0) {
            java.lang.String r0 = r0.He
            return r0
    }

    static com.kwad.components.ad.k.b.b c(com.kwad.components.ad.k.b r0) {
            com.kwad.components.ad.k.b$b r0 = r0.Hg
            return r0
    }

    private static int getLayoutId() {
            int r0 = com.kwad.sdk.R.layout.ksad_ad_web_card_layout
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d getWebListener() {
            r1 = this;
            com.kwad.components.ad.k.b$1 r0 = new com.kwad.components.ad.k.b$1
            r0.<init>(r1)
            return r0
    }

    public final void a(android.widget.FrameLayout r7, com.kwad.sdk.core.view.AdBaseFrameLayout r8, com.kwad.sdk.core.response.model.AdTemplate r9, com.kwad.components.core.e.d.c r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    public void a(android.widget.FrameLayout r2, com.kwad.sdk.core.view.AdBaseFrameLayout r3, com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.components.core.e.d.c r5, int r6) {
            r1 = this;
            java.util.List<com.kwad.components.core.e.d.c> r0 = r1.Hb
            r0.add(r5)
            r1.dr = r3
            r1.cQ = r2
            r1.mScreenOrientation = r6
            r1.mAdTemplate = r4
            r1.fA()
            r1.av()
            return
    }

    public final void a(android.widget.FrameLayout r1, com.kwad.sdk.core.view.AdBaseFrameLayout r2, java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3, java.util.List<com.kwad.components.core.e.d.c> r4, int r5) {
            r0 = this;
            r0.Hb = r4
            r0.dr = r2
            r0.cQ = r1
            r0.mScreenOrientation = r5
            if (r3 == 0) goto L1b
            int r1 = r3.size()
            if (r1 <= 0) goto L1b
            r0.Ha = r3
            r1 = 0
            java.lang.Object r1 = r3.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            r0.mAdTemplate = r1
        L1b:
            r0.fA()
            r0.av()
            return
    }

    public final void a(com.kwad.components.ad.k.b.a r1) {
            r0 = this;
            r0.Hf = r1
            return
    }

    public final void a(com.kwad.components.ad.k.b.b r3) {
            r2 = this;
            r2.Hg = r3
            android.widget.FrameLayout r3 = r2.cQ
            r0 = 4
            r3.setVisibility(r0)
            r3 = -1
            r2.cF = r3
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            java.lang.String r3 = r2.o(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "startPreloadWebView url : "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PlayEndWebCard"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L2b
            return
        L2b:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            if (r0 == 0) goto L3a
            r2.ax()
            r2.fE()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r0.loadUrl(r3)
        L3a:
            return
    }

    protected void a(com.kwad.components.core.webview.a r5) {
            r4 = this;
            java.util.List<com.kwad.components.core.e.d.c> r0 = r4.Hb
            int r0 = r0.size()
            r1 = 0
            r2 = 1
            if (r0 <= r2) goto L41
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r4.Ha
            int r0 = r0.size()
            if (r0 <= r2) goto L41
            com.kwad.components.core.webview.jshandler.r r0 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r2 = r4.cE
            java.util.List<com.kwad.components.core.e.d.c> r3 = r4.Hb
            java.lang.Object r1 = r3.get(r1)
            com.kwad.components.core.e.d.c r1 = (com.kwad.components.core.e.d.c) r1
            com.kwad.sdk.core.webview.d.a.a r3 = r4.cH
            r0.<init>(r2, r1, r3)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r1 = r4.cE
            java.util.List<com.kwad.components.core.e.d.c> r2 = r4.Hb
            com.kwad.sdk.core.webview.d.a.a r3 = r4.cH
            r0.<init>(r1, r2, r3)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ad r0 = new com.kwad.components.core.webview.jshandler.ad
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r1 = r4.Ha
            java.util.List<com.kwad.components.core.e.d.c> r2 = r4.Hb
            r0.<init>(r1, r2)
            r5.a(r0)
            goto L6b
        L41:
            java.util.List<com.kwad.components.core.e.d.c> r0 = r4.Hb
            java.lang.Object r0 = r0.get(r1)
            com.kwad.components.core.e.d.c r0 = (com.kwad.components.core.e.d.c) r0
            com.kwad.components.core.webview.jshandler.r r1 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r2 = r4.cE
            com.kwad.sdk.core.webview.d.a.a r3 = r4.cH
            r1.<init>(r2, r0, r3)
            r5.a(r1)
            com.kwad.components.core.webview.jshandler.o r1 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r2 = r4.cE
            com.kwad.sdk.core.webview.d.a.a r3 = r4.cH
            r1.<init>(r2, r0, r3)
            r5.a(r1)
            com.kwad.components.core.webview.jshandler.ap r1 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r2 = r4.cE
            r1.<init>(r2, r0)
            r5.a(r1)
        L6b:
            com.kwad.components.core.webview.jshandler.ar r0 = new com.kwad.components.core.webview.jshandler.ar
            r0.<init>()
            r4.yI = r0
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.b.a.f r0 = new com.kwad.components.core.webview.b.a.f
            r0.<init>()
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.t r0 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r4.cK
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            java.lang.String r2 = r4.o(r2)
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.am r0 = new com.kwad.components.core.webview.jshandler.am
            r0.<init>()
            r4.cG = r0
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.z r0 = new com.kwad.components.core.webview.jshandler.z
            com.kwad.components.core.webview.jshandler.z$b r1 = r4.cJ
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.p r0 = new com.kwad.components.core.webview.jshandler.p
            com.kwad.components.ad.k.b$2 r1 = new com.kwad.components.ad.k.b$2
            r1.<init>(r4)
            r0.<init>(r1)
            r5.a(r0)
            return
    }

    public final void a(com.kwad.sdk.core.webview.d.a.a r1) {
            r0 = this;
            r0.cH = r1
            return
    }

    public final void ai(boolean r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.ar r2 = r1.yI
            r0 = 1
            r2.ai(r0)
            return
    }

    public final boolean ap() {
            r3 = this;
            boolean r0 = r3.bv()
            r1 = 0
            if (r0 == 0) goto L26
            com.kwad.components.core.webview.jshandler.am r0 = r3.cG
            if (r0 == 0) goto Le
            r0.rz()
        Le:
            android.widget.FrameLayout r0 = r3.cQ
            if (r0 == 0) goto L15
            r0.setVisibility(r1)
        L15:
            com.kwad.components.core.webview.jshandler.am r0 = r3.cG
            if (r0 == 0) goto L24
            boolean r0 = r3.fB()
            if (r0 == 0) goto L24
            com.kwad.components.core.webview.jshandler.am r0 = r3.cG
            r0.rA()
        L24:
            r0 = 1
            return r0
        L26:
            android.widget.FrameLayout r0 = r3.cQ
            if (r0 == 0) goto L2e
            r2 = 4
            r0.setVisibility(r2)
        L2e:
            r3.aF()
            return r1
    }

    protected void b(com.kwad.sdk.core.webview.b r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            r2.setAdTemplate(r0)
            return
    }

    protected boolean bv() {
            r2 = this;
            int r0 = r2.cF
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }

    protected void fA() {
            r3 = this;
            android.widget.FrameLayout r0 = r3.cQ
            r0.removeAllViews()
            android.widget.FrameLayout r0 = r3.cQ
            r1 = 4
            r0.setVisibility(r1)
            android.widget.FrameLayout r0 = r3.cQ
            android.content.Context r0 = r0.getContext()
            int r1 = getLayoutId()
            android.widget.FrameLayout r2 = r3.cQ
            android.view.View r0 = com.kwad.sdk.m.l.inflate(r0, r1, r2)
            r3.Hc = r0
            android.widget.FrameLayout r0 = r3.cQ
            int r1 = com.kwad.sdk.R.id.ksad_web_card_webView
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r3.cB = r0
            if (r0 == 0) goto L54
            r1 = 0
            r0.setBackgroundColor(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r0.setAlpha(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r3.getWebListener()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.cB
            r1.setClientConfig(r0)
            r3.fD()
        L54:
            return
    }

    protected boolean fB() {
            r1 = this;
            r0 = 1
            return r0
    }

    protected void fD() {
            r0 = this;
            return
    }

    protected void fE() {
            r0 = this;
            return
    }

    protected void fF() {
            r0 = this;
            return
    }

    public final long getLoadTime() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            if (r0 == 0) goto L9
            long r0 = r0.getLoadTime()
            return r0
        L9:
            r0 = -1
            return r0
    }

    protected java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = "PlayEndWebCard"
            return r0
    }

    public final void lI() {
            r0 = this;
            r0.ay()
            return
    }

    public final void lV() {
            r3 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            r1 = 50
            r2 = 0
            boolean r0 = com.kwad.sdk.utils.bm.a(r0, r1, r2)
            if (r0 != 0) goto Lc
            return
        Lc:
            com.kwad.components.core.webview.jshandler.am r0 = r3.cG
            if (r0 == 0) goto L13
            r0.rB()
        L13:
            android.widget.FrameLayout r0 = r3.cQ
            r1 = 4
            r0.setVisibility(r1)
            com.kwad.components.core.webview.jshandler.am r0 = r3.cG
            if (r0 == 0) goto L20
            r0.rC()
        L20:
            return
    }

    protected java.lang.String o(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            java.lang.String r1 = r0.He
            if (r1 != 0) goto La
            com.kwad.sdk.core.response.model.AdTemplate r1 = r0.mAdTemplate
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bj(r1)
        La:
            return r1
    }

    public final void release() {
            r1 = this;
            r1.ay()
            r0 = 0
            r1.Hg = r0
            return
    }
}
