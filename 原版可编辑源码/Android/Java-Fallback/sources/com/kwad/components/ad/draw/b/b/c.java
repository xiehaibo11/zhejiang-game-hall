package com.kwad.components.ad.draw.b.b;

public final class c extends com.kwad.components.ad.draw.a.a {
    private com.kwad.sdk.core.webview.KsAdWebView cB;
    private com.kwad.components.core.webview.jshandler.aa.a cC;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private int cF;
    private com.kwad.components.core.webview.jshandler.am cG;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private com.kwad.components.core.webview.jshandler.aa.b cI;
    private com.kwad.components.core.webview.jshandler.z.b cJ;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private android.animation.ValueAnimator cL;
    private android.animation.ValueAnimator cM;
    private android.view.ViewGroup ce;
    private com.kwad.components.ad.draw.b.b.a.b cw;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.video.k mVideoPlayStateListener;









    public c() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.cF = r0
            com.kwad.components.ad.draw.b.b.c$1 r0 = new com.kwad.components.ad.draw.b.b.c$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            com.kwad.components.ad.draw.b.b.c$2 r0 = new com.kwad.components.ad.draw.b.b.c$2
            r0.<init>(r1)
            r1.cw = r0
            com.kwad.components.ad.draw.b.b.c$3 r0 = new com.kwad.components.ad.draw.b.b.c$3
            r0.<init>(r1)
            r1.cH = r0
            com.kwad.components.ad.draw.b.b.c$4 r0 = new com.kwad.components.ad.draw.b.b.c$4
            r0.<init>(r1)
            r1.cI = r0
            com.kwad.components.ad.draw.b.b.c$5 r0 = new com.kwad.components.ad.draw.b.b.c$5
            r0.<init>(r1)
            r1.cJ = r0
            com.kwad.components.ad.draw.b.b.c$6 r0 = new com.kwad.components.ad.draw.b.b.c$6
            r0.<init>(r1)
            r1.cK = r0
            return
    }

    static int a(com.kwad.components.ad.draw.b.b.c r0, int r1) {
            r0.cF = r1
            return r1
    }

    static com.kwad.components.core.webview.jshandler.aa.a a(com.kwad.components.ad.draw.b.b.c r0, com.kwad.components.core.webview.jshandler.aa.a r1) {
            r0.cC = r1
            return r1
    }

    static void a(com.kwad.components.ad.draw.b.b.c r0) {
            r0.release()
            return
    }

    private void a(com.kwad.components.core.webview.a r5) {
            r4 = this;
            com.kwad.components.core.webview.jshandler.r r0 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.sdk.core.webview.d.a.a r3 = r4.cH
            r0.<init>(r1, r2, r3)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.sdk.core.webview.d.a.a r3 = r4.cH
            r0.<init>(r1, r2, r3)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.t r0 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.aa r0 = new com.kwad.components.core.webview.jshandler.aa
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.webview.jshandler.aa$b r2 = r4.cI
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r4.cK
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            java.lang.String r2 = com.kwad.sdk.core.response.b.b.aV(r2)
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.am r0 = new com.kwad.components.core.webview.jshandler.am
            r0.<init>()
            r4.cG = r0
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ap r0 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.z r0 = new com.kwad.components.core.webview.jshandler.z
            com.kwad.components.core.webview.jshandler.z$b r1 = r4.cJ
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            return
    }

    private void aA() {
            r4 = this;
            com.kwad.components.core.webview.jshandler.aa$a r0 = r4.cC
            if (r0 != 0) goto L8
            r4.aB()
            return
        L8:
            r4.aE()
            android.view.ViewGroup r0 = r4.ce
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            com.kwad.components.core.webview.jshandler.aa$a r2 = r4.cC
            int r2 = r2.height
            com.kwad.components.core.webview.jshandler.aa$a r3 = r4.cC
            int r3 = r3.bottomMargin
            int r2 = r2 + r3
            android.animation.ValueAnimator r0 = com.kwad.components.core.t.m.c(r0, r2, r1)
            r4.cL = r0
            android.view.animation.DecelerateInterpolator r1 = new android.view.animation.DecelerateInterpolator
            r2 = 1073741824(0x40000000, float:2.0)
            r1.<init>(r2)
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r4.cL
            r1 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r4.cL
            com.kwad.components.ad.draw.b.b.c$7 r1 = new com.kwad.components.ad.draw.b.b.c$7
            r1.<init>(r4)
            r0.addListener(r1)
            android.animation.ValueAnimator r0 = r4.cL
            r0.start()
            return
    }

    private void aB() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L7
            r0.rz()
        L7:
            android.view.ViewGroup r0 = r2.ce
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L1b
            r0.rA()
        L1b:
            return
    }

    private void aC() {
            r4 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L9
            return
        L9:
            com.kwad.components.core.webview.jshandler.aa$a r0 = r4.cC
            if (r0 != 0) goto L11
            r4.aD()
            return
        L11:
            r4.aE()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            r1 = 0
            com.kwad.components.core.webview.jshandler.aa$a r2 = r4.cC
            int r2 = r2.height
            com.kwad.components.core.webview.jshandler.aa$a r3 = r4.cC
            int r3 = r3.bottomMargin
            int r2 = r2 + r3
            android.animation.ValueAnimator r0 = com.kwad.components.core.t.m.c(r0, r1, r2)
            r4.cM = r0
            android.view.animation.DecelerateInterpolator r1 = new android.view.animation.DecelerateInterpolator
            r2 = 1073741824(0x40000000, float:2.0)
            r1.<init>(r2)
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r4.cM
            r1 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r4.cM
            com.kwad.components.ad.draw.b.b.c$8 r1 = new com.kwad.components.ad.draw.b.b.c$8
            r1.<init>(r4)
            r0.addListener(r1)
            android.animation.ValueAnimator r0 = r4.cM
            r0.start()
            return
    }

    private void aD() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L9
            return
        L9:
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L10
            r0.rB()
        L10:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 4
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r2.ce
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto L23
            r0.rC()
        L23:
            return
    }

    private void aE() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.cL
            if (r0 == 0) goto Lc
            r0.removeAllListeners()
            android.animation.ValueAnimator r0 = r1.cL
            r0.cancel()
        Lc:
            android.animation.ValueAnimator r0 = r1.cM
            if (r0 == 0) goto L18
            r0.removeAllListeners()
            android.animation.ValueAnimator r0 = r1.cM
            r0.cancel()
        L18:
            return
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
            java.lang.String r1 = "DrawPlayWebCard"
            com.kwad.sdk.core.e.c.w(r1, r0)
            return
    }

    private void av() {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r2.cE = r0
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r2.cE
            r1 = 0
            r0.mScreenOrientation = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            r0.aye = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            r0.MT = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.cB
            r0.Ms = r1
            return
    }

    private void aw() {
            r2 = this;
            r0 = -1
            r2.cF = r0
            r2.ax()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 0
            r0.setBackgroundColor(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r0.setAlpha(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 4
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.aV(r1)
            r0.loadUrl(r1)
            return
    }

    private void ax() {
            r3 = this;
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

    private boolean az() {
            r2 = this;
            int r0 = r2.cF
            r1 = 1
            if (r0 != r1) goto L9
            r2.aA()
            return r1
        L9:
            r2.aF()
            r0 = 0
            return r0
    }

    static boolean b(com.kwad.components.ad.draw.b.b.c r0) {
            boolean r0 = r0.az()
            return r0
    }

    static com.kwad.components.ad.draw.a.b c(com.kwad.components.ad.draw.b.b.c r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b d(com.kwad.components.ad.draw.b.b.c r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.sdk.core.webview.KsAdWebView e(com.kwad.components.ad.draw.b.b.c r0) {
            com.kwad.sdk.core.webview.KsAdWebView r0 = r0.cB
            return r0
    }

    static void f(com.kwad.components.ad.draw.b.b.c r0) {
            r0.aC()
            return
    }

    static com.kwad.components.core.webview.jshandler.am g(com.kwad.components.ad.draw.b.b.c r0) {
            com.kwad.components.core.webview.jshandler.am r0 = r0.cG
            return r0
    }

    static android.view.ViewGroup h(com.kwad.components.ad.draw.b.b.c r0) {
            android.view.ViewGroup r0 = r0.ce
            return r0
    }

    private void release() {
            r2 = this;
            r0 = -1
            r2.cF = r0
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            r1 = 8
            r0.setVisibility(r1)
            r2.ay()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.b.b.a r0 = r0.bX
            com.kwad.components.ad.draw.b.b.a$b r1 = r2.cw
            r0.a(r1)
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r2.mApkDownloadHelper = r0
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            r2.av()
            r2.aw()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_ad_normal_container
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.ce = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_web_card_webView
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r1.cB = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.b.b.a r0 = r0.bX
            r1 = 0
            r0.a(r1)
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            r2.aE()
            r2.release()
            return
    }
}
