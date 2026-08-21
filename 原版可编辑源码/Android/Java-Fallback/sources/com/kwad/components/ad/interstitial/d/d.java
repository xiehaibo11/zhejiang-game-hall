package com.kwad.components.ad.interstitial.d;

public final class d extends com.kwad.components.ad.interstitial.d.b {
    private static long jM = 400;
    private static float jN = 0.8f;
    private static float jO = 1.0f;
    private static float jP = 0.749f;
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private int cF;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private com.kwad.sdk.core.h.c cV;
    private com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private com.kwad.sdk.core.g.d dO;
    private android.os.Vibrator dP;
    private android.widget.ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.components.core.webview.jshandler.am fn;
    private boolean fr;
    private com.kwad.components.core.webview.jshandler.ao jL;
    private com.kwad.sdk.widget.KSFrameLayout jQ;
    private com.kwad.sdk.widget.KSFrameLayout jR;
    private android.app.Dialog jS;
    private com.kwad.sdk.core.webview.KsAdWebView jT;
    private android.widget.ImageView jU;
    private com.kwad.components.core.video.a.c jV;
    private com.kwad.components.core.webview.b.a.p jW;
    private com.kwad.sdk.core.webview.a.c.a jX;
    private com.kwad.components.ad.g.a.a.b jY;
    private boolean jZ;
    private com.kwad.components.ad.interstitial.d.c jf;
    private com.kwad.components.ad.interstitial.d.h ka;
    private final java.lang.Runnable kb;
    private com.kwad.components.core.webview.jshandler.ab.a kc;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected android.content.Context mContext;
    private android.os.Handler mHandler;



























    static {
            return
    }

    public d() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r0 = -1
            r2.cF = r0
            r0 = 0
            r2.jZ = r0
            com.kwad.components.ad.interstitial.d.d$1 r0 = new com.kwad.components.ad.interstitial.d.d$1
            r0.<init>(r2)
            r2.ka = r0
            com.kwad.components.ad.interstitial.d.d$12 r0 = new com.kwad.components.ad.interstitial.d.d$12
            r0.<init>(r2)
            r2.cV = r0
            com.kwad.components.ad.interstitial.d.d$20 r0 = new com.kwad.components.ad.interstitial.d.d$20
            r0.<init>(r2)
            r2.kb = r0
            com.kwad.components.ad.interstitial.d.d$25 r0 = new com.kwad.components.ad.interstitial.d.d$25
            r0.<init>(r2)
            r2.kc = r0
            com.kwad.components.ad.interstitial.d.d$18 r0 = new com.kwad.components.ad.interstitial.d.d$18
            r0.<init>(r2)
            r2.cK = r0
            return
    }

    private static android.view.ViewGroup.LayoutParams A(int r2) {
            float r0 = com.kwad.components.ad.interstitial.d.d.jP
            float r2 = (float) r2
            float r2 = r2 * r0
            int r2 = (int) r2
            float r0 = (float) r2
            r1 = 1061142135(0x3f3fbe77, float:0.749)
            float r0 = r0 / r1
            int r0 = (int) r0
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r1.<init>(r0, r2)
            return r1
    }

    static android.view.ViewGroup.LayoutParams B(int r0) {
            android.view.ViewGroup$LayoutParams r0 = A(r0)
            return r0
    }

    private static float a(boolean r0, boolean r1) {
            if (r0 == 0) goto L8
            if (r1 == 0) goto L8
            r0 = 1071877689(0x3fe38e39, float:1.7777778)
            goto Lb
        L8:
            r0 = 1061142135(0x3f3fbe77, float:0.749)
        Lb:
            return r0
    }

    static int a(com.kwad.components.ad.interstitial.d.d r0, int r1) {
            r0.cF = r1
            return r1
    }

    private static android.view.ViewGroup.LayoutParams a(int r1, boolean r2) {
            if (r2 == 0) goto L5
            float r0 = com.kwad.components.ad.interstitial.d.d.jN
            goto L7
        L5:
            float r0 = com.kwad.components.ad.interstitial.d.d.jO
        L7:
            if (r2 == 0) goto Ld
            r2 = 1071877689(0x3fe38e39, float:1.7777778)
            goto L10
        Ld:
            r2 = 1061142135(0x3f3fbe77, float:0.749)
        L10:
            float r1 = (float) r1
            float r1 = r1 * r0
            int r1 = (int) r1
            float r0 = (float) r1
            float r0 = r0 * r2
            int r2 = (int) r0
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r1, r2)
            return r0
    }

    private static android.view.ViewGroup.MarginLayoutParams a(com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition r1, android.view.ViewGroup.MarginLayoutParams r2) {
            int r0 = r1.topMargin
            r2.topMargin = r0
            int r0 = r1.leftMargin
            r2.leftMargin = r0
            int r0 = r1.width
            r2.width = r0
            int r1 = r1.height
            r2.height = r1
            return r2
    }

    static com.kwad.sdk.core.h.c a(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.core.h.c r0 = r0.cV
            return r0
    }

    private static void a(android.view.ViewGroup.MarginLayoutParams r1, android.view.ViewGroup.MarginLayoutParams r2) {
            int r0 = r1.leftMargin
            r2.leftMargin = r0
            int r0 = r1.rightMargin
            r2.rightMargin = r0
            int r0 = r1.topMargin
            r2.topMargin = r0
            int r0 = r1.bottomMargin
            r2.bottomMargin = r0
            int r0 = r1.width
            r2.width = r0
            int r1 = r1.height
            r2.height = r1
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.d r0, double r1) {
            r0.d(r1)
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.d r0, com.kwad.sdk.core.response.model.AdInfo r1, com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition r2, com.kwad.sdk.widget.KSFrameLayout r3, boolean r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.d r0, java.lang.String r1) {
            r0.s(r1)
            return
    }

    private void a(com.kwad.components.core.webview.a r3, java.lang.String r4) {
            r2 = this;
            com.kwad.components.core.webview.jshandler.r r0 = r2.dt()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.o r0 = r2.ds()
            r3.a(r0)
            com.kwad.components.core.webview.b.a.f r0 = new com.kwad.components.core.webview.b.a.f
            r0.<init>()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.aa r0 = r2.dl()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r2.cE
            r0.<init>(r1)
            r3.a(r0)
            com.kwad.components.core.webview.b.a.o r0 = r2.dk()
            r3.a(r0)
            com.kwad.components.core.webview.b.a.u r0 = r2.dj()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.z r0 = r2.dp()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.am r0 = new com.kwad.components.core.webview.jshandler.am
            r0.<init>()
            r2.fn = r0
            r3.a(r0)
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.components.core.video.a$c r1 = r2.dm()
            r0.a(r1)
            com.kwad.components.core.webview.b.a.p r0 = r2.dq()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler r0 = r2.dn()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r1 = r2.cE
            r0.<init>(r1)
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.t r0 = r2.dg()
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r2.cK
            r0.<init>(r1, r4)
            r3.a(r0)
            com.kwad.components.core.webview.jshandler.ap r4 = r2.de()
            r3.a(r4)
            com.kwad.components.core.webview.jshandler.ab r4 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r0 = r2.cE
            r4.<init>(r0)
            com.kwad.components.core.webview.jshandler.ab$a r0 = r2.kc
            r4.a(r0)
            r3.a(r4)
            com.kwad.components.core.webview.jshandler.av r4 = r2.do()
            r3.a(r4)
            com.kwad.components.core.webview.jshandler.af r4 = new com.kwad.components.core.webview.jshandler.af
            com.kwad.components.core.webview.jshandler.af$a r0 = r2.getOpenNewPageListener()
            r4.<init>(r0)
            r3.a(r4)
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r4 = com.kwad.sdk.core.response.b.b.cX(r4)
            if (r4 == 0) goto Lb4
            com.kwad.components.core.webview.jshandler.ao r4 = r2.dd()
            r3.a(r4)
        Lb4:
            com.kwad.components.ad.g.a.a.b r4 = r2.dh()
            if (r4 == 0) goto Lbf
            com.kwad.components.ad.g.a.a.b r4 = r2.jY
            r3.a(r4)
        Lbf:
            com.kwad.components.core.webview.b.a.g r4 = r2.df()
            r3.a(r4)
            com.kwad.components.ad.g.a.a.a r4 = r2.di()
            r3.a(r4)
            return
    }

    private void a(com.kwad.sdk.core.response.model.AdInfo r8, com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler.VideoPosition r9, com.kwad.sdk.widget.KSFrameLayout r10, boolean r11) {
            r7 = this;
            r0 = r11 ^ 1
            r10.setWidthBasedRatio(r0)
            android.view.ViewGroup$LayoutParams r0 = r10.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "updateVideoContainerSize before size: "
            r1.<init>(r2)
            int r2 = r0.width
            r1.append(r2)
            java.lang.String r2 = ", "
            r1.append(r2)
            int r2 = r0.height
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "InterstitialWebViewPresenter"
            com.kwad.sdk.core.e.c.d(r2, r1)
            a(r9, r0)
            android.view.ViewGroup$MarginLayoutParams r1 = new android.view.ViewGroup$MarginLayoutParams
            r1.<init>(r0)
            float r3 = com.kwad.sdk.core.response.b.a.aP(r8)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "updateVideoContainerSize materialRatio: "
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.kwad.sdk.core.e.c.d(r2, r4)
            r4 = 0
            if (r11 == 0) goto L7f
            int r5 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r5 <= 0) goto L7f
            int r5 = r0.width
            int r6 = r0.height
            float r6 = (float) r6
            float r6 = r6 / r3
            int r3 = (int) r6
            int r5 = r5 - r3
            int r5 = r5 / 2
            r0.width = r3
            int r3 = r0.leftMargin
            int r3 = r3 + r5
            r0.leftMargin = r3
            int r3 = r0.width
            if (r3 == 0) goto L82
            int r3 = r0.height
            float r3 = (float) r3
            int r5 = r0.width
            float r5 = (float) r5
            float r3 = r3 / r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "cardParams ratio: "
            r5.<init>(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            com.kwad.sdk.core.e.c.d(r2, r5)
            r10.setRatio(r3)
            goto L82
        L7f:
            r10.setRatio(r4)
        L82:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r5 = "cardParams width: "
            r3.<init>(r5)
            int r5 = r0.width
            r3.append(r5)
            java.lang.String r5 = ", height: "
            r3.append(r5)
            int r5 = r0.height
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r2, r3)
            r10.setLayoutParams(r0)
            android.content.Context r2 = r7.getContext()
            android.content.res.Resources r2 = r2.getResources()
            int r3 = com.kwad.sdk.R.dimen.ksad_interstitial_card_radius
            float r2 = r2.getDimension(r3)
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel r3 = r9.cornerRadius
            if (r3 == 0) goto Lcc
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel r0 = r9.cornerRadius
            double r2 = r0.topLeft
            float r0 = (float) r2
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel r2 = r9.cornerRadius
            double r2 = r2.topRight
            float r2 = (float) r2
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel r3 = r9.cornerRadius
            double r3 = r3.bottomRight
            float r3 = (float) r3
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler$VideoPosition$KSAdJSCornerModel r9 = r9.cornerRadius
            double r4 = r9.bottomLeft
            float r9 = (float) r4
            r10.setRadius(r0, r2, r3, r9)
            goto Ld9
        Lcc:
            int r9 = r0.width
            int r0 = r0.height
            if (r9 <= r0) goto Ld6
            r10.setRadius(r2, r2, r4, r4)
            goto Ld9
        Ld6:
            r10.setRadius(r2, r2, r2, r2)
        Ld9:
            if (r11 == 0) goto Lfd
            android.widget.ImageView r9 = r7.jU
            r11 = 0
            r9.setVisibility(r11)
            android.widget.ImageView r9 = r7.jU
            android.view.ViewGroup$LayoutParams r9 = r9.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r9 = (android.view.ViewGroup.MarginLayoutParams) r9
            a(r1, r9)
            android.widget.ImageView r11 = r7.jU
            r11.setLayoutParams(r9)
            com.kwad.components.ad.interstitial.d.c r9 = r7.jf
            android.content.Context r11 = r7.mContext
            com.kwad.sdk.core.response.model.AdTemplate r0 = r7.mAdTemplate
            android.widget.ImageView r1 = r7.jU
            r9.a(r11, r8, r0, r1)
            goto L104
        Lfd:
            android.widget.ImageView r8 = r7.jU
            r9 = 8
            r8.setVisibility(r9)
        L104:
            int r8 = android.os.Build.VERSION.SDK_INT
            r9 = 21
            if (r8 < r9) goto L116
            com.kwad.components.ad.interstitial.d.d$17 r8 = new com.kwad.components.ad.interstitial.d.d$17
            r8.<init>(r7)
            r10.setOutlineProvider(r8)
            r8 = 1
            r10.setClipToOutline(r8)
        L116:
            return
    }

    static boolean a(com.kwad.components.ad.interstitial.d.d r0, boolean r1) {
            r1 = 1
            r0.jZ = r1
            return r1
    }

    private void av() {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r2.cE = r0
            com.kwad.components.ad.interstitial.d.c r1 = r2.jf
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            r0 = r0 ^ 1
            com.kwad.sdk.core.webview.b r1 = r2.cE
            r1.mScreenOrientation = r0
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.widget.KSFrameLayout r1 = r2.jQ
            r0.aye = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.widget.KSFrameLayout r1 = r2.jQ
            r0.MT = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.jT
            r0.Ms = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            r1 = 0
            r0.mReportExtData = r1
            return
    }

    private void aw() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.bC(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L15
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.jT
            if (r1 != 0) goto L11
            goto L15
        L11:
            r2.r(r0)
            return
        L15:
            java.lang.String r0 = "1"
            r2.s(r0)
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

    static android.view.ViewGroup.LayoutParams b(int r0, boolean r1) {
            android.view.ViewGroup$LayoutParams r0 = a(r0, r1)
            return r0
    }

    static com.kwad.components.core.webview.jshandler.am b(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.components.core.webview.jshandler.am r0 = r0.fn
            return r0
    }

    private void bs() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            float r0 = com.kwad.sdk.core.response.b.b.bz(r0)
            com.kwad.sdk.core.g.d r1 = r3.dO
            if (r1 != 0) goto L19
            com.kwad.sdk.core.g.d r1 = new com.kwad.sdk.core.g.d
            r1.<init>(r0)
            r3.dO = r1
            com.kwad.components.ad.interstitial.d.d$19 r2 = new com.kwad.components.ad.interstitial.d.d$19
            r2.<init>(r3)
            r1.a(r2)
        L19:
            com.kwad.sdk.core.g.d r1 = r3.dO
            r1.e(r0)
            com.kwad.sdk.core.g.d r0 = r3.dO
            android.content.Context r1 = r3.getContext()
            r0.bg(r1)
            return
    }

    static void c(com.kwad.components.ad.interstitial.d.d r0) {
            r0.dc()
            return
    }

    static com.kwad.components.ad.interstitial.d.c d(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.components.ad.interstitial.d.c r0 = r0.jf
            return r0
    }

    private void d(double r3) {
            r2 = this;
            com.kwad.components.ad.interstitial.d.c$b r0 = new com.kwad.components.ad.interstitial.d.c$b
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r1 = 1
            com.kwad.components.ad.interstitial.d.c$b r0 = r0.l(r1)
            com.kwad.components.ad.interstitial.d.c$b r3 = r0.c(r3)
            r4 = 2
            com.kwad.components.ad.interstitial.d.c$b r3 = r3.y(r4)
            com.kwad.sdk.widget.KSFrameLayout r4 = r2.jQ
            com.kwad.sdk.utils.ac$a r4 = r4.getTouchCoords()
            com.kwad.components.ad.interstitial.d.c$b r3 = r3.a(r4)
            r4 = 157(0x9d, float:2.2E-43)
            com.kwad.components.ad.interstitial.d.c$b r3 = r3.z(r4)
            com.kwad.components.ad.interstitial.d.c r4 = r2.jf
            r4.a(r3)
            android.content.Context r3 = r2.getContext()
            android.os.Vibrator r4 = r2.dP
            com.kwad.sdk.utils.bj.a(r3, r4)
            return
    }

    private void dc() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.aO(r0)
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            float r2 = a(r1, r0)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "replaceNativeView cardRatio: "
            r3.<init>(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "InterstitialWebViewPresenter"
            com.kwad.sdk.core.e.c.d(r4, r3)
            com.kwad.components.ad.interstitial.d.c r3 = r5.jf
            com.kwad.components.ad.interstitial.f.f r3 = r3.jg
            r3.setRatio(r2)
            com.kwad.sdk.widget.KSFrameLayout r2 = r5.jQ
            int r3 = com.kwad.sdk.R.id.ksad_interstitial_native
            android.view.View r2 = r2.findViewById(r3)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r3 = 0
            r2.setVisibility(r3)
            com.kwad.components.ad.interstitial.d.d$24 r3 = new com.kwad.components.ad.interstitial.d.d$24
            r3.<init>(r5, r1, r0, r2)
            r2.post(r3)
            return
    }

    private com.kwad.components.core.webview.jshandler.ao dd() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.ao r0 = new com.kwad.components.core.webview.jshandler.ao
            com.kwad.components.ad.interstitial.d.d$26 r1 = new com.kwad.components.ad.interstitial.d.d$26
            r1.<init>(r2)
            r0.<init>(r1)
            r2.jL = r0
            return r0
    }

    private com.kwad.components.core.webview.jshandler.ap de() {
            r3 = this;
            com.kwad.components.core.webview.jshandler.ap r0 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r1 = r3.cE
            com.kwad.components.core.e.d.c r2 = r3.mApkDownloadHelper
            r0.<init>(r1, r2)
            return r0
    }

    private com.kwad.components.core.webview.b.a.g df() {
            r2 = this;
            com.kwad.components.core.webview.b.b.k r0 = new com.kwad.components.core.webview.b.b.k
            r0.<init>()
            com.kwad.components.ad.interstitial.d.c r1 = r2.jf
            int r1 = r1.ju
            r0.WX = r1
            com.kwad.components.core.webview.b.a.g r1 = new com.kwad.components.core.webview.b.a.g
            r1.<init>(r0)
            return r1
    }

    private com.kwad.components.core.webview.jshandler.t dg() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.t r0 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r1 = r2.cE
            r0.<init>(r1)
            com.kwad.components.ad.interstitial.d.d$2 r1 = new com.kwad.components.ad.interstitial.d.d$2
            r1.<init>(r2)
            r0.a(r1)
            return r0
    }

    private com.kwad.components.ad.g.a.a.b dh() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.components.ad.g.a.a.b r0 = com.kwad.components.ad.g.a.a.b.m(r0)
            r2.jY = r0
            if (r0 == 0) goto L12
            com.kwad.components.ad.interstitial.d.d$3 r1 = new com.kwad.components.ad.interstitial.d.d$3
            r1.<init>(r2)
            r0.a(r1)
        L12:
            com.kwad.components.ad.g.a.a.b r0 = r2.jY
            return r0
    }

    private com.kwad.components.ad.g.a.a.a di() {
            r3 = this;
            com.kwad.components.ad.g.a.a.a r0 = new com.kwad.components.ad.g.a.a.a
            r0.<init>()
            com.kwad.components.ad.interstitial.d.c r1 = r3.jf
            java.util.List<com.kwad.components.ad.interstitial.d.c$c> r1 = r1.jq
            com.kwad.components.ad.interstitial.d.d$4 r2 = new com.kwad.components.ad.interstitial.d.d$4
            r2.<init>(r3, r0)
            r1.add(r2)
            return r0
    }

    private com.kwad.components.core.webview.b.a.u dj() {
            r2 = this;
            com.kwad.components.core.webview.b.a.u r0 = new com.kwad.components.core.webview.b.a.u
            r0.<init>()
            com.kwad.components.ad.interstitial.d.d$5 r1 = new com.kwad.components.ad.interstitial.d.d$5
            r1.<init>(r2)
            r0.a(r1)
            return r0
    }

    private com.kwad.components.core.webview.b.a.o dk() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.d$6 r0 = new com.kwad.components.ad.interstitial.d.d$6
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.aa dl() {
            r3 = this;
            com.kwad.components.core.webview.jshandler.aa r0 = new com.kwad.components.core.webview.jshandler.aa
            com.kwad.sdk.core.webview.b r1 = r3.cE
            com.kwad.components.ad.interstitial.d.d$7 r2 = new com.kwad.components.ad.interstitial.d.d$7
            r2.<init>(r3)
            r0.<init>(r1, r2)
            return r0
    }

    private com.kwad.components.core.video.a.c dm() {
            r2 = this;
            com.kwad.components.core.webview.b.b.y r0 = new com.kwad.components.core.webview.b.b.y
            r0.<init>()
            com.kwad.components.ad.interstitial.d.d$8 r1 = new com.kwad.components.ad.interstitial.d.d$8
            r1.<init>(r2, r0)
            r2.jV = r1
            return r1
    }

    private com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler dn() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler r0 = new com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler
            com.kwad.components.ad.interstitial.d.d$9 r1 = new com.kwad.components.ad.interstitial.d.d$9
            r1.<init>(r2)
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.av do() {
            r3 = this;
            com.kwad.components.core.webview.jshandler.av r0 = new com.kwad.components.core.webview.jshandler.av
            android.content.Context r1 = r3.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            r0.<init>(r1, r2)
            com.kwad.components.ad.interstitial.d.d$10 r1 = new com.kwad.components.ad.interstitial.d.d$10
            r1.<init>(r3)
            r0.a(r1)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.z dp() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.z r0 = new com.kwad.components.core.webview.jshandler.z
            com.kwad.components.ad.interstitial.d.d$13 r1 = new com.kwad.components.ad.interstitial.d.d$13
            r1.<init>(r2)
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.b.a.p dq() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.d$14 r0 = new com.kwad.components.ad.interstitial.d.d$14
            r0.<init>(r1)
            r1.jW = r0
            return r0
    }

    private void dr() {
            r1 = this;
            android.app.Dialog r0 = r1.jS
            if (r0 != 0) goto L5
            return
        L5:
            android.app.Activity r0 = r0.getOwnerActivity()
            if (r0 == 0) goto L33
            boolean r0 = r0.isFinishing()
            if (r0 == 0) goto L12
            goto L33
        L12:
            android.app.Dialog r0 = r1.jS
            r0.dismiss()
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            boolean r0 = r0.jk
            if (r0 != 0) goto L26
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r0.hz
            if (r0 == 0) goto L26
            r0.onAdClosed()
        L26:
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            if (r0 == 0) goto L33
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            r0.release()
        L33:
            return
    }

    private com.kwad.components.core.webview.jshandler.o ds() {
            r4 = this;
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.components.ad.interstitial.d.d$15 r3 = new com.kwad.components.ad.interstitial.d.d$15
            r3.<init>(r4)
            r0.<init>(r1, r2, r3)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.r dt() {
            r4 = this;
            com.kwad.components.core.webview.jshandler.r r0 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.components.ad.interstitial.d.d$16 r3 = new com.kwad.components.ad.interstitial.d.d$16
            r3.<init>(r4)
            r0.<init>(r1, r2, r3)
            return r0
    }

    static com.kwad.sdk.widget.KSFrameLayout e(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.widget.KSFrameLayout r0 = r0.jQ
            return r0
    }

    static com.kwad.sdk.core.webview.KsAdWebView f(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.core.webview.KsAdWebView r0 = r0.jT
            return r0
    }

    static com.kwad.sdk.widget.KSFrameLayout g(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.widget.KSFrameLayout r0 = r0.jR
            return r0
    }

    private com.kwad.components.core.webview.jshandler.af.a getOpenNewPageListener() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.d$11 r0 = new com.kwad.components.ad.interstitial.d.d$11
            r0.<init>(r1)
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d getWebListener() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.d$22 r0 = new com.kwad.components.ad.interstitial.d.d$22
            r0.<init>(r1)
            return r0
    }

    static com.kwad.sdk.core.video.videoview.a h(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate i(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void j(com.kwad.components.ad.interstitial.d.d r0) {
            r0.bs()
            return
    }

    static android.content.Context k(com.kwad.components.ad.interstitial.d.d r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static void l(com.kwad.components.ad.interstitial.d.d r0) {
            r0.dr()
            return
    }

    static com.kwad.sdk.api.KsAdVideoPlayConfig m(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r0.dJ
            return r0
    }

    static com.kwad.components.core.webview.b.a.p n(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.components.core.webview.b.a.p r0 = r0.jW
            return r0
    }

    static android.widget.ImageView o(com.kwad.components.ad.interstitial.d.d r0) {
            android.widget.ImageView r0 = r0.ew
            return r0
    }

    static com.kwad.sdk.core.webview.b p(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.core.webview.b r0 = r0.cE
            return r0
    }

    static boolean q(com.kwad.components.ad.interstitial.d.d r0) {
            boolean r0 = r0.jZ
            return r0
    }

    static android.app.Dialog r(com.kwad.components.ad.interstitial.d.d r0) {
            android.app.Dialog r0 = r0.jS
            return r0
    }

    private void r(java.lang.String r4) {
            r3 = this;
            r3.ay()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.jT
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r3.getWebListener()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            r3.jX = r0
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.jT
            r1.setClientConfig(r0)
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.jT
            r0.<init>(r1)
            r3.cD = r0
            r3.a(r0, r4)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.jT
            com.kwad.components.core.webview.a r1 = r3.cD
            java.lang.String r2 = "KwaiAd"
            r0.addJavascriptInterface(r1, r2)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.jT
            r1 = 0
            r0.setBackgroundColor(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.jT
            r1 = 4
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.jT
            r0.loadUrl(r4)
            java.lang.Runnable r4 = r3.kb
            r0 = 0
            r1 = 3000(0xbb8, double:1.482E-320)
            com.kwad.sdk.utils.bj.a(r4, r0, r1)
            return
    }

    static android.os.Handler s(com.kwad.components.ad.interstitial.d.d r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    private void s(java.lang.String r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "handleWebViewError "
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "InterstitialWebViewPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.core.g.d r0 = r4.dO
            if (r0 == 0) goto L1e
            android.content.Context r1 = r4.getContext()
            r0.bh(r1)
        L1e:
            android.os.Handler r0 = r4.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            boolean r0 = r4.fr
            if (r0 == 0) goto L29
            return
        L29:
            r0 = 1
            r4.fr = r0
            com.kwad.components.core.o.a r0 = com.kwad.components.core.o.a.pA()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            java.lang.String r3 = com.kwad.sdk.core.response.b.b.bC(r2)
            r0.b(r2, r3, r5)
            android.os.Handler r5 = r4.mHandler
            com.kwad.components.ad.interstitial.d.d$23 r0 = new com.kwad.components.ad.interstitial.d.d$23
            r0.<init>(r4)
            r5.post(r0)
            com.kwad.sdk.core.webview.a.c$a r5 = r4.jX
            if (r5 == 0) goto L4a
            r5.b(r1)
        L4a:
            return
    }

    static boolean t(com.kwad.components.ad.interstitial.d.d r0) {
            boolean r0 = r0.fr
            return r0
    }

    static int u(com.kwad.components.ad.interstitial.d.d r0) {
            int r0 = r0.cF
            return r0
    }

    static java.lang.Runnable v(com.kwad.components.ad.interstitial.d.d r0) {
            java.lang.Runnable r0 = r0.kb
            return r0
    }

    static com.kwad.components.ad.g.a.a.b w(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.components.ad.g.a.a.b r0 = r0.jY
            return r0
    }

    static com.kwad.sdk.core.g.d x(com.kwad.components.ad.interstitial.d.d r0) {
            com.kwad.sdk.core.g.d r0 = r0.dO
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            java.lang.Object r0 = r2.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            r2.jf = r0
            r1 = 0
            r2.jZ = r1
            com.kwad.components.ad.interstitial.d r0 = r0.hG
            r2.jS = r0
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r0.dJ
            r2.dJ = r0
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r2.mApkDownloadHelper = r0
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r2.mAdInfo = r0
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            r2.ex = r0
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.sy()
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.c r1 = r2.cV
            r0.a(r1)
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.components.ad.interstitial.d.h r1 = r2.ka
            r0.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.bA(r0)
            if (r0 == 0) goto L56
            android.os.Handler r0 = r2.mHandler
            com.kwad.components.ad.interstitial.d.d$21 r1 = new com.kwad.components.ad.interstitial.d.d$21
            r1.<init>(r2)
            r0.post(r1)
            return
        L56:
            r2.av()
            r2.aw()
            return
    }

    @Override
    public final void cN() {
            r1 = this;
            super.cN()
            com.kwad.components.ad.g.a.a.b r0 = r1.jY
            if (r0 == 0) goto La
            r0.eZ()
        La:
            return
    }

    @Override
    public final void cO() {
            r1 = this;
            super.cO()
            com.kwad.components.ad.g.a.a.b r0 = r1.jY
            if (r0 == 0) goto La
            r0.eY()
        La:
            return
    }

    @Override
    public final void onCreate() {
            r3 = this;
            super.onCreate()
            android.view.View r0 = r3.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_web_card_webView
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r3.jT = r0
            com.kwad.components.core.widget.a.b r0 = new com.kwad.components.core.widget.a.b
            android.view.View r1 = r3.getRootView()
            r2 = 100
            r0.<init>(r1, r2)
            r3.bG = r0
            android.view.View r0 = r3.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r3.jQ = r0
            android.view.View r0 = r3.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_video_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r3.jR = r0
            android.view.View r0 = r3.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_video_first_frame_container
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.ew = r0
            android.view.View r0 = r3.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_interstitial_video_blur
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.jU = r0
            android.content.Context r0 = r3.getContext()
            r3.mContext = r0
            if (r0 == 0) goto L68
            java.lang.String r1 = "vibrator"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.os.Vibrator r0 = (android.os.Vibrator) r0
            r3.dP = r0
        L68:
            return
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public final void onUnbind() {
            r3 = this;
            super.onUnbind()
            android.os.Handler r0 = r3.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            com.kwad.components.core.widget.a.b r0 = r3.bG
            com.kwad.sdk.core.h.c r2 = r3.cV
            r0.b(r2)
            com.kwad.components.core.widget.a.b r0 = r3.bG
            r0.sz()
            com.kwad.sdk.core.g.d r0 = r3.dO
            if (r0 == 0) goto L20
            android.content.Context r2 = r3.getContext()
            r0.bh(r2)
        L20:
            com.kwad.sdk.core.webview.a.c$a r0 = r3.jX
            if (r0 == 0) goto L27
            r0.b(r1)
        L27:
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            com.kwad.components.ad.interstitial.d.h r1 = r3.ka
            r0.b(r1)
            return
    }
}
