package com.kwad.components.ad.reward.m;

public class e extends com.kwad.sdk.core.download.a.a implements com.kwad.components.core.webview.jshandler.aa.b, com.kwad.components.core.webview.jshandler.ah.b {
    private com.kwad.sdk.core.webview.KsAdWebView cB;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private android.view.View yH;
    private com.kwad.components.core.webview.jshandler.ar yI;
    private com.kwad.components.ad.reward.m.f yJ;



    public e(com.kwad.sdk.core.webview.KsAdWebView r2, android.view.View r3, com.kwad.components.core.e.d.c r4, com.kwad.sdk.core.webview.d.a.a r5) {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.m.e$1 r0 = new com.kwad.components.ad.reward.m.e$1
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            r1.yH = r3
            r1.cB = r2
            r1.mApkDownloadHelper = r4
            r1.cH = r5
            return
    }

    static com.kwad.components.core.webview.jshandler.ar a(com.kwad.components.ad.reward.m.e r0) {
            com.kwad.components.core.webview.jshandler.ar r0 = r0.yI
            return r0
    }

    private void a(com.kwad.components.core.webview.a r5, java.lang.String r6) {
            r4 = this;
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
            com.kwad.components.core.webview.jshandler.t r0 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            r0.<init>(r4, r6)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ar r6 = new com.kwad.components.core.webview.jshandler.ar
            r6.<init>()
            r4.yI = r6
            r5.a(r6)
            com.kwad.components.core.webview.jshandler.ab r6 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r6.<init>(r0)
            r5.a(r6)
            com.kwad.components.core.webview.jshandler.x r6 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r6.<init>(r0)
            r5.a(r6)
            com.kwad.components.core.webview.b.a.f r6 = new com.kwad.components.core.webview.b.a.f
            r6.<init>()
            r5.a(r6)
            com.kwad.components.core.webview.jshandler.aa r6 = new com.kwad.components.core.webview.jshandler.aa
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r6.<init>(r0, r4)
            r5.a(r6)
            com.kwad.components.core.webview.jshandler.ap r6 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r0 = r4.cE
            com.kwad.components.core.e.d.c r1 = r4.mApkDownloadHelper
            r6.<init>(r0, r1)
            r5.a(r6)
            com.kwad.components.ad.reward.h.b r6 = new com.kwad.components.ad.reward.h.b
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.cB
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.components.core.playable.PlayableSource r2 = com.kwad.components.core.playable.PlayableSource.ACTIONBAR_CLICK
            r6.<init>(r0, r1, r2)
            r5.a(r6)
            return
    }

    private void ae(boolean r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "switchWebView: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "BottomCardWebViewHelper"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            if (r0 != 0) goto L18
            return
        L18:
            if (r3 == 0) goto L1c
            r3 = 0
            goto L1e
        L1c:
            r3 = 8
        L1e:
            r0.setVisibility(r3)
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

    static void b(com.kwad.components.ad.reward.m.e r0) {
            r0.jY()
            return
    }

    private void b(com.kwad.sdk.core.response.model.AdTemplate r2, android.view.ViewGroup r3) {
            r1 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r1.cE = r0
            r0.setAdTemplate(r2)
            com.kwad.sdk.core.webview.b r2 = r1.cE
            r0 = 0
            r2.mScreenOrientation = r0
            com.kwad.sdk.core.webview.b r2 = r1.cE
            r0 = 0
            r2.aye = r0
            com.kwad.sdk.core.webview.b r2 = r1.cE
            r2.MT = r3
            com.kwad.sdk.core.webview.b r2 = r1.cE
            com.kwad.sdk.core.webview.KsAdWebView r3 = r1.cB
            r2.Ms = r3
            com.kwad.sdk.core.webview.b r2 = r1.cE
            r2.mReportExtData = r0
            com.kwad.sdk.core.webview.b r2 = r1.cE
            r3 = 1
            r2.ayg = r3
            return
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d getWebErrorListener() {
            r1 = this;
            com.kwad.components.ad.reward.m.e$2 r0 = new com.kwad.components.ad.reward.m.e$2
            r0.<init>(r1)
            return r0
    }

    private void j(java.lang.String r2, int r3) {
            r1 = this;
            com.kwad.components.ad.reward.m.f r0 = r1.yJ
            if (r0 == 0) goto L7
            r0.h(r2, r3)
        L7:
            return
    }

    private void jY() {
            r2 = this;
            android.view.View r0 = r2.yH
            r1 = 0
            if (r0 == 0) goto L8
            r0.setVisibility(r1)
        L8:
            r2.ae(r1)
            return
    }

    private void r(java.lang.String r4) {
            r3 = this;
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r4)
            if (r0 == 0) goto La
            r3.jY()
            return
        La:
            r3.ay()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r3.getWebErrorListener()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.cB
            r1.setClientConfig(r0)
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.cB
            r0.<init>(r1)
            r3.cD = r0
            r3.a(r0, r4)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            com.kwad.components.core.webview.a r1 = r3.cD
            java.lang.String r2 = "KwaiAd"
            r0.addJavascriptInterface(r1, r2)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.cB
            r0.loadUrl(r4)
            return
    }

    public final void a(com.kwad.components.ad.reward.m.f r1) {
            r0 = this;
            r0.yJ = r1
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.aa.a r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onAdFrameValid : "
            r0.<init>(r1)
            org.json.JSONObject r3 = r3.toJson()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "BottomCardWebViewHelper"
            com.kwad.sdk.core.e.c.d(r0, r3)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.ah.a r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " updatePageStatus: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "BottomCardWebViewHelper"
            com.kwad.sdk.core.e.c.d(r1, r0)
            int r3 = r3.status
            r0 = 1
            if (r3 != r0) goto L2a
            r2.ae(r0)
            return
        L2a:
            r2.jY()
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r3, android.view.ViewGroup r4) {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            if (r0 == 0) goto L19
            r1 = 0
            r0.setBackgroundColor(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 == 0) goto L19
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r0.setAlpha(r1)
        L19:
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r2.mRewardVerifyListener
            r0.a(r1)
            r2.mAdTemplate = r3
            r2.b(r3, r4)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            java.lang.String r3 = com.kwad.sdk.core.response.b.b.aV(r3)
            r2.r(r3)
            com.kwad.components.core.e.d.c r3 = r2.mApkDownloadHelper
            if (r3 == 0) goto L37
            r3.b(r2)
        L37:
            return
    }

    public final void jX() {
            r2 = this;
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r2.mRewardVerifyListener
            r0.b(r1)
            return
    }

    @Override
    public void onDownloadFailed() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            goto Lf
        Ld:
            java.lang.String r0 = "立即下载"
        Lf:
            r1 = 100
            r2.j(r0, r1)
            return
    }

    @Override
    public void onDownloadFinished() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            goto Lb
        L7:
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aM(r0)
        Lb:
            r1 = 100
            r2.j(r0, r1)
            return
    }

    @Override
    public void onIdle() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            goto Lf
        Ld:
            java.lang.String r0 = "立即下载"
        Lf:
            r1 = 100
            r2.j(r0, r1)
            return
    }

    @Override
    public void onInstalled() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.U(r0)
            goto Lf
        Ld:
            java.lang.String r0 = "立即打开"
        Lf:
            r1 = 100
            r2.j(r0, r1)
            return
    }

    @Override
    public final void onPaused(int r2) {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.cw(r2)
            r1.j(r0, r2)
            return
    }

    @Override
    public void onProgressUpdate(int r2) {
            r1 = this;
            if (r2 == 0) goto L9
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.cv(r2)
            r1.j(r0, r2)
        L9:
            return
    }
}
