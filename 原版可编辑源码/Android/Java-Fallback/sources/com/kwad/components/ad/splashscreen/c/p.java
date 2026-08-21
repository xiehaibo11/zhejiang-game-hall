package com.kwad.components.ad.splashscreen.c;

public final class p extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.components.ad.splashscreen.e, com.kwad.components.ad.splashscreen.g {
    private com.kwad.components.ad.splashscreen.f.b DG;
    private boolean DH;
    private boolean DI;
    private long DJ;
    private com.kwad.components.core.webview.jshandler.am DK;
    private boolean DL;
    private android.view.ViewGroup DM;
    private final java.lang.Runnable DN;
    private com.kwad.sdk.core.webview.KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.g.d dO;
    private android.os.Vibrator dP;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private long mStartTime;














    public p() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.DI = r0
            r1.DL = r0
            com.kwad.components.ad.splashscreen.c.p$1 r0 = new com.kwad.components.ad.splashscreen.c.p$1
            r0.<init>(r1)
            r1.DN = r0
            return
    }

    private android.os.Vibrator F(android.content.Context r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            android.content.Context r2 = r1.getContext()
            java.lang.String r0 = "vibrator"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.os.Vibrator r2 = (android.os.Vibrator) r2
            return r2
        Lf:
            r2 = 0
            return r2
    }

    static android.os.Vibrator a(com.kwad.components.ad.splashscreen.c.p r0, android.content.Context r1) {
            android.os.Vibrator r0 = r0.F(r1)
            return r0
    }

    static android.os.Vibrator a(com.kwad.components.ad.splashscreen.c.p r0, android.os.Vibrator r1) {
            r0.dP = r1
            return r1
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.splashscreen.c.p r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private void a(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            r2.ay()
            android.webkit.WebSettings r0 = r3.getSettings()
            r1 = 1
            r0.setAllowFileAccess(r1)
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            r0.<init>(r3)
            r2.cD = r0
            r2.a(r0, r4)
            com.kwad.components.core.webview.a r4 = r2.cD
            java.lang.String r0 = "KwaiAd"
            r3.addJavascriptInterface(r4, r0)
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.p r0, double r1) {
            r0.h(r1)
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.p r0, boolean r1, int r2, com.kwad.sdk.core.report.z.b r3, int r4) {
            r1 = 0
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(com.kwad.components.core.webview.a r4, java.lang.String r5) {
            r3 = this;
            com.kwad.components.core.webview.jshandler.ap r0 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r1 = r3.cE
            com.kwad.components.ad.splashscreen.h r2 = r3.CM
            com.kwad.components.core.e.d.c r2 = r2.mApkDownloadHelper
            r0.<init>(r1, r2)
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.r r0 = r3.dt()
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.o r0 = r3.ds()
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r3.cE
            r0.<init>(r1)
            r4.a(r0)
            com.kwad.components.core.webview.b.a.f r0 = new com.kwad.components.core.webview.b.a.f
            r0.<init>()
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.ad.splashscreen.c.p$7 r1 = new com.kwad.components.ad.splashscreen.c.p$7
            r1.<init>(r3, r5)
            r0.<init>(r1, r5)
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.ao r5 = new com.kwad.components.core.webview.jshandler.ao
            com.kwad.components.ad.splashscreen.c.p$8 r0 = new com.kwad.components.ad.splashscreen.c.p$8
            r0.<init>(r3)
            r5.<init>(r0)
            r4.a(r5)
            com.kwad.components.core.webview.jshandler.ab r5 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r0 = r3.cE
            r5.<init>(r0)
            r4.a(r5)
            com.kwad.components.core.webview.jshandler.am r5 = new com.kwad.components.core.webview.jshandler.am
            r5.<init>()
            r3.DK = r5
            r4.a(r5)
            return
    }

    private void a(com.kwad.sdk.core.webview.KsAdWebView r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            r3.setBackgroundColor(r0)
            r3.setVisibility(r0)
            r2.av()
            r2.a(r3, r4)
            com.kwad.sdk.core.webview.a.c$a r0 = r3.getClientConfig()
            com.kwad.components.ad.splashscreen.h r1 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.components.ad.splashscreen.c.p$6 r1 = new com.kwad.components.ad.splashscreen.c.p$6
            r1.<init>(r2, r4)
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            r3.setClientConfig(r0)
            com.kwad.components.ad.splashscreen.monitor.b.Y(r4)
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.splashscreen.b.a.Cz
            boolean r0 = com.kwad.sdk.core.config.d.a(r0)
            if (r0 == 0) goto L38
            r3.loadUrl(r4)     // Catch: java.lang.Throwable -> L34
            return
        L34:
            r2.ls()
            return
        L38:
            r3.loadUrl(r4)
            return
    }

    private void a(boolean r9, int r10, com.kwad.sdk.core.report.z.b r11, int r12) {
            r8 = this;
            com.kwad.components.ad.splashscreen.h r0 = r8.CM
            r0.kE()
            r0 = 0
            r1 = 1
            if (r11 == 0) goto Lb
            r2 = r1
            goto Lc
        Lb:
            r2 = r0
        Lc:
            if (r10 != r1) goto L10
            r3 = r1
            goto L11
        L10:
            r3 = r0
        L11:
            if (r2 != 0) goto L51
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            com.kwad.components.ad.splashscreen.h r5 = r8.CM     // Catch: org.json.JSONException -> L4b
            if (r5 == 0) goto L51
            com.kwad.components.ad.splashscreen.h r5 = r8.CM     // Catch: org.json.JSONException -> L4b
            com.kwad.components.ad.splashscreen.e.a r5 = r5.Cd     // Catch: org.json.JSONException -> L4b
            if (r5 == 0) goto L2f
            java.lang.String r5 = "duration"
            com.kwad.components.ad.splashscreen.h r6 = r8.CM     // Catch: org.json.JSONException -> L4b
            com.kwad.components.ad.splashscreen.e.a r6 = r6.Cd     // Catch: org.json.JSONException -> L4b
            long r6 = r6.getCurrentPosition()     // Catch: org.json.JSONException -> L4b
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L4b
        L2f:
            if (r9 == 0) goto L34
            r0 = 153(0x99, float:2.14E-43)
            goto L38
        L34:
            if (r3 == 0) goto L38
            r0 = 132(0x84, float:1.85E-43)
        L38:
            com.kwad.sdk.core.report.j r9 = new com.kwad.sdk.core.report.j     // Catch: org.json.JSONException -> L49
            r9.<init>()     // Catch: org.json.JSONException -> L49
            com.kwad.sdk.core.report.j r9 = r9.cg(r0)     // Catch: org.json.JSONException -> L49
            com.kwad.components.ad.splashscreen.h r5 = r8.CM     // Catch: org.json.JSONException -> L49
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.mAdTemplate     // Catch: org.json.JSONException -> L49
            com.kwad.sdk.core.report.a.a(r5, r9, r4)     // Catch: org.json.JSONException -> L49
            goto L52
        L49:
            r9 = move-exception
            goto L4d
        L4b:
            r9 = move-exception
            r0 = r12
        L4d:
            com.kwad.sdk.core.e.c.printStackTrace(r9)
            goto L52
        L51:
            r0 = r12
        L52:
            com.kwad.components.core.e.d.a$a r9 = new com.kwad.components.core.e.d.a$a
            com.kwad.components.ad.splashscreen.h r4 = r8.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r4 = r4.mRootContainer
            android.content.Context r4 = r4.getContext()
            r9.<init>(r4)
            com.kwad.components.ad.splashscreen.h r4 = r8.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r9 = r9.P(r4)
            com.kwad.components.ad.splashscreen.h r4 = r8.CM
            com.kwad.components.core.e.d.c r4 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r9 = r9.b(r4)
            com.kwad.components.core.e.d.a$a r9 = r9.am(r3)
            com.kwad.components.core.e.d.a$a r9 = r9.ao(r10)
            com.kwad.components.core.e.d.a$a r9 = r9.a(r11)
            if (r2 == 0) goto L7e
            goto L7f
        L7e:
            r12 = r0
        L7f:
            com.kwad.components.core.e.d.a$a r9 = r9.an(r12)
            com.kwad.components.core.e.d.a$a r9 = r9.am(r1)
            com.kwad.components.core.e.d.a$a r9 = r9.ao(r2)
            com.kwad.components.ad.splashscreen.c.p$5 r10 = new com.kwad.components.ad.splashscreen.c.p$5
            r10.<init>(r8)
            com.kwad.components.core.e.d.a$a r9 = r9.a(r10)
            com.kwad.components.core.e.d.a.a(r9)
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.c.p r0, boolean r1) {
            r1 = 1
            r0.DL = r1
            return r1
    }

    private void av() {
            r3 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r3.cE = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r3.cE
            r1 = 0
            r0.mScreenOrientation = r1
            com.kwad.sdk.core.webview.b r0 = r3.cE
            com.kwad.components.ad.splashscreen.h r2 = r3.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r2.mRootContainer
            r0.aye = r2
            com.kwad.sdk.core.webview.b r0 = r3.cE
            com.kwad.components.ad.splashscreen.h r2 = r3.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r2.mRootContainer
            r0.MT = r2
            com.kwad.sdk.core.webview.b r0 = r3.cE
            com.kwad.sdk.core.webview.KsAdWebView r2 = r3.cB
            r0.Ms = r2
            com.kwad.sdk.core.webview.b r0 = r3.cE
            r2 = 0
            r0.mReportExtData = r2
            com.kwad.sdk.core.webview.b r0 = r3.cE
            r0.ayg = r1
            com.kwad.sdk.core.webview.b r0 = r3.cE
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            boolean r1 = com.kwad.components.ad.splashscreen.h.m(r1)
            r0.ayh = r1
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

    static long b(com.kwad.components.ad.splashscreen.c.p r2) {
            long r0 = r2.DJ
            return r0
    }

    private void bs() {
            r2 = this;
            com.kwad.sdk.core.g.d r0 = r2.dO
            if (r0 != 0) goto L29
            boolean r0 = r2.DI
            if (r0 == 0) goto L9
            goto L29
        L9:
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            float r0 = com.kwad.sdk.core.response.b.b.bD(r0)
            com.kwad.sdk.core.g.d r1 = new com.kwad.sdk.core.g.d
            r1.<init>(r0)
            r2.dO = r1
            com.kwad.components.ad.splashscreen.c.p$9 r0 = new com.kwad.components.ad.splashscreen.c.p$9
            r0.<init>(r2)
            r1.a(r0)
            com.kwad.sdk.core.g.d r0 = r2.dO
            android.content.Context r1 = r2.getContext()
            r0.bg(r1)
        L29:
            return
    }

    static void c(com.kwad.components.ad.splashscreen.c.p r0) {
            r0.ls()
            return
    }

    static java.lang.Runnable d(com.kwad.components.ad.splashscreen.c.p r0) {
            java.lang.Runnable r0 = r0.DN
            return r0
    }

    private com.kwad.components.core.webview.jshandler.o ds() {
            r4 = this;
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.components.core.e.d.c r2 = r2.mApkDownloadHelper
            com.kwad.components.ad.splashscreen.c.p$3 r3 = new com.kwad.components.ad.splashscreen.c.p$3
            r3.<init>(r4)
            r0.<init>(r1, r2, r3)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.r dt() {
            r4 = this;
            com.kwad.components.core.webview.jshandler.r r0 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.components.core.e.d.c r2 = r2.mApkDownloadHelper
            com.kwad.components.ad.splashscreen.c.p$4 r3 = new com.kwad.components.ad.splashscreen.c.p$4
            r3.<init>(r4)
            r0.<init>(r1, r2, r3)
            return r0
    }

    static long e(com.kwad.components.ad.splashscreen.c.p r2) {
            long r0 = r2.mStartTime
            return r0
    }

    static boolean f(com.kwad.components.ad.splashscreen.c.p r0) {
            boolean r0 = r0.DL
            return r0
    }

    static com.kwad.components.core.webview.jshandler.am g(com.kwad.components.ad.splashscreen.c.p r0) {
            com.kwad.components.core.webview.jshandler.am r0 = r0.DK
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo h(com.kwad.components.ad.splashscreen.c.p r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    private void h(double r8) {
            r7 = this;
            com.kwad.components.ad.splashscreen.h r0 = r7.CM
            if (r0 == 0) goto L16
            com.kwad.components.ad.splashscreen.h r1 = r7.CM
            r2 = 1
            android.content.Context r3 = r7.getContext()
            r4 = 157(0x9d, float:2.2E-43)
            r5 = 2
            com.kwad.components.ad.splashscreen.c.p$11 r6 = new com.kwad.components.ad.splashscreen.c.p$11
            r6.<init>(r7, r8)
            r1.a(r2, r3, r4, r5, r6)
        L16:
            return
    }

    static void i(com.kwad.components.ad.splashscreen.c.p r0) {
            r0.bs()
            return
    }

    static void j(com.kwad.components.ad.splashscreen.c.p r0) {
            r0.lq()
            return
    }

    static android.os.Vibrator k(com.kwad.components.ad.splashscreen.c.p r0) {
            android.os.Vibrator r0 = r0.dP
            return r0
    }

    static android.content.Context l(com.kwad.components.ad.splashscreen.c.p r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void lq() {
            r4 = this;
            com.kwad.components.ad.splashscreen.c.p$10 r0 = new com.kwad.components.ad.splashscreen.c.p$10
            r0.<init>(r4)
            r1 = 0
            r2 = 500(0x1f4, double:2.47E-321)
            com.kwad.sdk.utils.bj.a(r0, r1, r2)
            return
    }

    private void ls() {
            r2 = this;
            r0 = 1
            r2.DI = r0
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 8
            if (r0 == 0) goto Lc
            r0.setVisibility(r1)
        Lc:
            android.view.ViewGroup r0 = r2.DM
            if (r0 == 0) goto L13
            r0.setVisibility(r1)
        L13:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.b.dg(r0)
            if (r0 == 0) goto L24
            com.kwad.components.ad.splashscreen.c.p$12 r0 = new com.kwad.components.ad.splashscreen.c.p$12
            r0.<init>(r2)
        L20:
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
            return
        L24:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.b.di(r0)
            if (r0 == 0) goto L32
            com.kwad.components.ad.splashscreen.c.p$13 r0 = new com.kwad.components.ad.splashscreen.c.p$13
            r0.<init>(r2)
            goto L20
        L32:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.b.dl(r0)
            if (r0 == 0) goto L40
            com.kwad.components.ad.splashscreen.c.p$2 r0 = new com.kwad.components.ad.splashscreen.c.p$2
            r0.<init>(r2)
            goto L20
        L40:
            r2.lt()
            return
    }

    private void lt() {
            r5 = this;
            r5.lr()
            int r0 = com.kwad.sdk.R.id.ksad_splash_actionbar_native_stub
            android.view.View r0 = r5.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.c.bV(r1)
            com.kwad.components.ad.splashscreen.f.b r2 = new com.kwad.components.ad.splashscreen.f.b
            android.view.View r3 = r5.getRootView()
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            com.kwad.components.ad.splashscreen.h r4 = r5.CM
            com.kwad.components.core.e.d.c r4 = r4.mApkDownloadHelper
            r2.<init>(r3, r0, r1, r4)
            r5.DG = r2
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            r2.G(r0)
            com.kwad.components.ad.splashscreen.f.b r0 = r5.DG
            r0.a(r5)
            com.kwad.components.ad.splashscreen.f.b r0 = r5.DG
            r0.ls()
            return
    }

    static android.content.Context m(com.kwad.components.ad.splashscreen.c.p r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.sdk.core.g.d n(com.kwad.components.ad.splashscreen.c.p r0) {
            com.kwad.sdk.core.g.d r0 = r0.dO
            return r0
    }

    @Override
    public final void X(int r1) {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.mStartTime = r0
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.splashscreen.b.a.Cz
            boolean r0 = com.kwad.sdk.core.config.d.a(r0)
            r1 = 0
            if (r0 == 0) goto L3d
            int r0 = com.kwad.sdk.R.id.ksad_splash_webview_container
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.DM = r0
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = new com.kwad.sdk.core.webview.KsAdWebView     // Catch: java.lang.Throwable -> L47
            android.content.Context r2 = r4.getContext()     // Catch: java.lang.Throwable -> L47
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L47
            r4.cB = r0     // Catch: java.lang.Throwable -> L47
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L47
            r2 = -1
            r0.<init>(r2, r2)     // Catch: java.lang.Throwable -> L47
            com.kwad.sdk.core.webview.KsAdWebView r2 = r4.cB     // Catch: java.lang.Throwable -> L47
            r2.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L47
            android.view.ViewGroup r0 = r4.DM     // Catch: java.lang.Throwable -> L47
            com.kwad.sdk.core.webview.KsAdWebView r2 = r4.cB     // Catch: java.lang.Throwable -> L47
            r0.addView(r2)     // Catch: java.lang.Throwable -> L47
            goto L47
        L3d:
            int r0 = com.kwad.sdk.R.id.ksad_splash_web_card_webView
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r4.cB = r0
        L47:
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r4.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            r4.DH = r1
            r4.DI = r1
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.aT(r0)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r4.cB
            if (r1 == 0) goto L88
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L88
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            boolean r1 = r1.Ci
            if (r1 != 0) goto L88
            long r1 = android.os.SystemClock.elapsedRealtime()
            r4.DJ = r1
            com.kwad.components.ad.splashscreen.monitor.b.kP()
            com.kwad.sdk.core.webview.KsAdWebView r1 = r4.cB
            r4.a(r1, r0)
            java.lang.Runnable r0 = r4.DN
            r1 = 0
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            long r2 = com.kwad.sdk.core.response.b.b.dq(r2)
            com.kwad.sdk.utils.bj.a(r0, r1, r2)
            goto L8b
        L88:
            r4.ls()
        L8b:
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            r0.a(r4)
            return
    }

    @Override
    public final void f(boolean r3, boolean r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "isClick: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = ", isActionBar: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SplashWebViewPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r0 = 1
            if (r4 == 0) goto L20
            r4 = r0
            goto L21
        L20:
            r4 = 2
        L21:
            r3 = r3 ^ r0
            r0 = 0
            r1 = 132(0x84, float:1.85E-43)
            r2.a(r3, r4, r0, r1)
            return
    }

    @Override
    public final void kD() {
            r2 = this;
            com.kwad.sdk.core.g.d r0 = r2.dO
            if (r0 == 0) goto Lb
            android.content.Context r1 = r2.getContext()
            r0.bh(r1)
        Lb:
            return
    }

    public final void lr() {
            r4 = this;
            boolean r0 = r4.DH
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.DH = r0
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            com.kwad.sdk.core.report.z$a r1 = new com.kwad.sdk.core.report.z$a
            r1.<init>()
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            int r2 = com.kwad.components.ad.splashscreen.local.b.q(r2)
            r1.asJ = r2
            r0.att = r1
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r2 = 0
            r3 = 123(0x7b, float:1.72E-43)
            com.kwad.sdk.core.report.a.a(r1, r3, r0, r2)
            com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.sb()
            r0.aR(r3)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.splashscreen.f.b r0 = r2.DG
            if (r0 == 0) goto La
            r0.onUnbind()
        La:
            com.kwad.sdk.core.g.d r0 = r2.dO
            if (r0 == 0) goto L15
            android.content.Context r1 = r2.getContext()
            r0.bh(r1)
        L15:
            com.kwad.components.core.webview.jshandler.am r0 = r2.DK
            if (r0 == 0) goto L21
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r2.DK
            r0.rC()
        L21:
            r2.ay()
            return
    }
}
