package com.kwad.components.ad.k;

public final class a {
    private boolean GP;
    private com.kwad.sdk.core.webview.KsAdWebView GQ;
    private boolean GR;
    private boolean GS;
    protected com.kwad.sdk.core.view.AdBaseFrameLayout GT;
    private com.kwad.components.ad.k.a.a GU;
    private boolean GV;
    private boolean GW;
    private boolean GX;
    private com.kwad.components.ad.k.a.b GY;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private android.widget.FrameLayout cQ;
    private com.kwad.sdk.core.view.AdBaseFrameLayout dr;
    private com.kwad.sdk.core.webview.a.c.a jX;
    private android.app.Activity mActivity;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.widget.ImageView mBackIcon;
    private android.os.Handler mHandler;
    private long mLastDown;







    public interface a {
        void T(boolean r1);
    }

    public interface b {
        void iA();
    }

    public a() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.GP = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r0 = 0
            r2.GV = r0
            r2.GW = r0
            r2.GX = r0
            return
    }

    static long a(com.kwad.components.ad.k.a r0, long r1) {
            r0.mLastDown = r1
            return r1
    }

    static com.kwad.components.ad.k.a.a a(com.kwad.components.ad.k.a r0) {
            com.kwad.components.ad.k.a$a r0 = r0.GU
            return r0
    }

    static boolean a(com.kwad.components.ad.k.a r0, boolean r1) {
            r1 = 1
            r0.GW = r1
            return r1
    }

    static boolean b(com.kwad.components.ad.k.a r0) {
            boolean r0 = r0.bv()
            return r0
    }

    static boolean b(com.kwad.components.ad.k.a r0, boolean r1) {
            r1 = 1
            r0.GP = r1
            return r1
    }

    private boolean bv() {
            r3 = this;
            boolean r0 = r3.GX
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Lc
            boolean r0 = r3.GP
            if (r0 != 0) goto Lb
            return r1
        Lb:
            return r2
        Lc:
            boolean r0 = r3.GP
            if (r0 != 0) goto L19
            boolean r0 = r3.GV
            if (r0 != 0) goto L19
            boolean r0 = r3.GW
            if (r0 != 0) goto L19
            return r1
        L19:
            return r2
    }

    static com.kwad.components.ad.k.a.b c(com.kwad.components.ad.k.a r0) {
            com.kwad.components.ad.k.a$b r0 = r0.GY
            return r0
    }

    static boolean c(com.kwad.components.ad.k.a r0, boolean r1) {
            r1 = 1
            r0.GV = r1
            return r1
    }

    static android.widget.ImageView d(com.kwad.components.ad.k.a r0) {
            android.widget.ImageView r0 = r0.mBackIcon
            return r0
    }

    static boolean d(com.kwad.components.ad.k.a r0, boolean r1) {
            r1 = 1
            r0.GR = r1
            return r1
    }

    static long e(com.kwad.components.ad.k.a r2) {
            long r0 = r2.mLastDown
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate f(com.kwad.components.ad.k.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private void fA() {
            r4 = this;
            android.widget.FrameLayout r0 = r4.cQ
            r0.removeAllViews()
            android.widget.FrameLayout r0 = r4.cQ
            r1 = 4
            r0.setVisibility(r1)
            android.widget.FrameLayout r0 = r4.cQ
            int r1 = com.kwad.sdk.R.layout.ksad_ad_landingpage_layout
            r2 = 1
            android.view.View r0 = com.kwad.sdk.d.a.a.a(r0, r1, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r1 = com.kwad.sdk.R.id.ksad_web_card_frame
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r4.GT = r0
            android.widget.FrameLayout r0 = r4.cQ
            int r1 = com.kwad.sdk.R.id.ksad_web_card_webView
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r4.GQ = r0
            r1 = -1
            r0.setBackgroundColor(r1)
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.ati = r2
            com.kwad.sdk.core.webview.KsAdWebView r1 = r4.GQ
            com.kwad.sdk.core.webview.a.c$a r1 = r1.getClientConfig()
            r3 = 0
            com.kwad.sdk.core.webview.a.c$a r1 = r1.bk(r3)
            com.kwad.sdk.core.webview.a.c$a r1 = r1.bm(r2)
            com.kwad.sdk.core.webview.a.c$a r1 = r1.bl(r3)
            com.kwad.sdk.core.webview.a.c$a r0 = r1.b(r0)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView$b r1 = r4.lT()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.a(r1)
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r4.getWebListener()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            r4.jX = r0
            com.kwad.sdk.core.webview.KsAdWebView r1 = r4.GQ
            r1.setClientConfig(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.GQ
            com.kwad.components.ad.k.a$1 r1 = new com.kwad.components.ad.k.a$1
            r1.<init>(r4)
            r0.setDownloadListener(r1)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r4.GT
            int r1 = com.kwad.sdk.R.id.ksad_end_close_btn
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.mBackIcon = r0
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r4.mBackIcon
            com.kwad.components.ad.k.a$2 r1 = new com.kwad.components.ad.k.a$2
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            return
    }

    static com.kwad.sdk.core.view.AdBaseFrameLayout g(com.kwad.components.ad.k.a r0) {
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.dr
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d getWebListener() {
            r1 = this;
            com.kwad.components.ad.k.a$3 r0 = new com.kwad.components.ad.k.a$3
            r0.<init>(r1)
            return r0
    }

    static boolean h(com.kwad.components.ad.k.a r0) {
            boolean r0 = r0.GR
            return r0
    }

    static com.kwad.sdk.core.webview.d.a.a i(com.kwad.components.ad.k.a r0) {
            com.kwad.sdk.core.webview.d.a.a r0 = r0.cH
            return r0
    }

    static android.app.Activity j(com.kwad.components.ad.k.a r0) {
            android.app.Activity r0 = r0.mActivity
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.b lT() {
            r1 = this;
            com.kwad.components.ad.k.a$4 r0 = new com.kwad.components.ad.k.a$4
            r0.<init>(r1)
            return r0
    }

    private boolean lU() {
            r3 = this;
            boolean r0 = r3.bv()
            r1 = 0
            if (r0 == 0) goto L10
            android.widget.FrameLayout r0 = r3.cQ
            if (r0 == 0) goto Le
            r0.setVisibility(r1)
        Le:
            r0 = 1
            return r0
        L10:
            android.widget.FrameLayout r0 = r3.cQ
            if (r0 == 0) goto L19
            r2 = 8
            r0.setVisibility(r2)
        L19:
            return r1
    }

    private static java.lang.String o(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aK(r0)
            return r0
    }

    public final void a(android.widget.FrameLayout r1, com.kwad.sdk.core.view.AdBaseFrameLayout r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            r0 = this;
            r0.cQ = r1
            r0.dr = r2
            r0.mAdTemplate = r3
            r0.fA()
            r1 = 0
            r0.GP = r1
            return
    }

    public final void a(com.kwad.components.ad.k.a.a r1) {
            r0 = this;
            r0.GU = r1
            return
    }

    public final void a(com.kwad.components.ad.k.a.b r1) {
            r0 = this;
            r0.GY = r1
            return
    }

    public final void a(com.kwad.sdk.core.webview.d.a.a r1) {
            r0 = this;
            r0.cH = r1
            return
    }

    public final com.kwad.components.ad.k.a ah(boolean r1) {
            r0 = this;
            r0.GS = r1
            return r0
    }

    public final boolean ap() {
            r5 = this;
            boolean r0 = r5.lU()
            r1 = 1
            r5.GX = r1
            if (r0 == 0) goto L5e
            android.app.Activity r2 = r5.mActivity
            if (r2 == 0) goto L5e
            com.kwad.sdk.core.webview.KsAdWebView r2 = r5.GQ
            com.kwad.sdk.core.webview.a.c$a r2 = r2.getClientConfig()
            if (r2 == 0) goto L27
            com.kwad.sdk.core.webview.KsAdWebView r2 = r5.GQ
            com.kwad.sdk.core.webview.a.c$a r2 = r2.getClientConfig()
            r2.bk(r1)
            com.kwad.sdk.core.webview.KsAdWebView r2 = r5.GQ
            com.kwad.sdk.core.webview.a.c$a r2 = r2.getClientConfig()
            r2.bl(r1)
        L27:
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r5.GT
            com.kwad.components.ad.k.a$5 r2 = new com.kwad.components.ad.k.a$5
            r2.<init>(r5)
            r1.a(r2)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            long r1 = com.kwad.sdk.core.response.b.a.ae(r1)
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L51
            boolean r3 = r5.GS
            if (r3 != 0) goto L46
            goto L51
        L46:
            android.os.Handler r3 = r5.mHandler
            com.kwad.components.ad.k.a$6 r4 = new com.kwad.components.ad.k.a$6
            r4.<init>(r5)
            r3.postDelayed(r4, r1)
            goto L57
        L51:
            android.widget.ImageView r1 = r5.mBackIcon
            r2 = 0
            r1.setVisibility(r2)
        L57:
            com.kwad.sdk.core.webview.KsAdWebView r1 = r5.GQ
            if (r1 == 0) goto L5e
            r1.onActivityCreate()
        L5e:
            return r0
    }

    public final void aw() {
            r2 = this;
            android.widget.FrameLayout r0 = r2.cQ
            r1 = 4
            r0.setVisibility(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            java.lang.String r0 = o(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L13
            return
        L13:
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.GQ
            r1.loadUrl(r0)
            return
    }

    public final void setActivity(android.app.Activity r1) {
            r0 = this;
            r0.mActivity = r1
            return
    }
}
