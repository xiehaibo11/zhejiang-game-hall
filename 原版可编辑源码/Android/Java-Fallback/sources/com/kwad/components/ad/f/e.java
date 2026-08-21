package com.kwad.components.ad.f;

public final class e extends com.kwad.sdk.widget.KSRelativeLayout implements com.kwad.sdk.core.h.c {
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private int cF;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private java.util.List<java.lang.Integer> cr;
    private boolean eA;
    private com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView eD;
    private com.kwad.components.core.offline.api.a.a eE;
    public com.kwad.components.offline.api.core.adlive.IAdLivePlayModule eF;
    private com.kwad.components.core.j.a.b eI;
    private final com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener eJ;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener eK;
    private com.kwad.sdk.widget.KSRelativeLayout ev;
    private com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest fH;
    private com.kwad.components.core.webview.jshandler.aq fm;
    private com.kwad.components.core.webview.jshandler.am fn;
    private com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener fo;
    private com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener fp;
    private com.kwad.components.core.webview.jshandler.an.b ft;
    private com.kwad.components.core.webview.jshandler.an.a fu;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.core.webview.KsAdWebView mAdWebView;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private int mB;
    private int mC;
    private android.content.Context mContext;
    private com.kwad.components.ad.f.d.a mE;
    private boolean mIsAudioEnable;
    private final com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, com.kwad.components.core.liveEnd.AdLiveEndCommonResultData> mNetworking;
    private android.widget.ImageView mO;
    private android.widget.RelativeLayout mP;
    private com.kwad.sdk.core.view.AdBasePvFrameLayout mQ;
    private com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl mR;
    private com.kwad.sdk.api.KsNativeAd.VideoPlayListener mz;













    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.mB = r1
            r0.mC = r1
            com.kwad.components.ad.f.e$10 r1 = new com.kwad.components.ad.f.e$10
            r1.<init>(r0)
            r0.cK = r1
            com.kwad.components.ad.f.e$12 r1 = new com.kwad.components.ad.f.e$12
            r1.<init>(r0)
            r0.mNetworking = r1
            com.kwad.components.ad.f.e$2 r1 = new com.kwad.components.ad.f.e$2
            r1.<init>(r0)
            r0.eJ = r1
            com.kwad.components.ad.f.e$3 r1 = new com.kwad.components.ad.f.e$3
            r1.<init>(r0)
            r0.eK = r1
            r0.initView()
            return
    }

    static int a(com.kwad.components.ad.f.e r0, int r1) {
            r0.cF = r1
            return r1
    }

    static com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener a(com.kwad.components.ad.f.e r0) {
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener r0 = r0.fo
            return r0
    }

    static com.kwad.components.core.webview.jshandler.an.a a(com.kwad.components.ad.f.e r0, com.kwad.components.core.webview.jshandler.an.a r1) {
            r0.fu = r1
            return r1
    }

    static com.kwad.components.core.webview.jshandler.an.b a(com.kwad.components.ad.f.e r0, com.kwad.components.core.webview.jshandler.an.b r1) {
            r0.ft = r1
            return r1
    }

    static com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest a(com.kwad.components.ad.f.e r0, com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r1) {
            r0.fH = r1
            return r1
    }

    static void a(com.kwad.components.ad.f.e r0, long r1) {
            r0.c(r1)
            return
    }

    static void a(com.kwad.components.ad.f.e r0, android.view.View r1) {
            r0.c(r1)
            return
    }

    private void a(com.kwad.components.core.webview.a r5) {
            r4 = this;
            com.kwad.components.core.webview.jshandler.aq r0 = new com.kwad.components.core.webview.jshandler.aq
            r0.<init>()
            r4.fm = r0
            com.kwad.components.core.webview.jshandler.am r0 = new com.kwad.components.core.webview.jshandler.am
            r0.<init>()
            r4.fn = r0
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.r r0 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.sdk.core.webview.d.a.a r3 = r4.getClickListener()
            r0.<init>(r1, r2, r3)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.sdk.core.webview.d.a.a r3 = r4.getClickListener()
            r0.<init>(r1, r2, r3)
            r5.a(r0)
            com.kwad.components.core.webview.b.a.f r0 = new com.kwad.components.core.webview.b.a.f
            r0.<init>()
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
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r4.cK
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            java.lang.String r2 = com.kwad.sdk.core.response.b.b.bq(r2)
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ap r0 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.aq r0 = r4.fm
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.af r0 = new com.kwad.components.core.webview.jshandler.af
            com.kwad.components.core.webview.jshandler.af$a r1 = r4.getOpenNewPageListener()
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.c r0 = new com.kwad.components.core.webview.jshandler.c
            int r1 = r4.mB
            int r2 = r4.mC
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener r0 = new com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener
            r0.<init>()
            r4.fp = r0
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener r0 = new com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener
            r0.<init>()
            r4.fo = r0
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener r0 = r4.fp
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener r0 = r4.fo
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.an r0 = new com.kwad.components.core.webview.jshandler.an
            com.kwad.components.core.webview.jshandler.an$c r1 = r4.getRegisterLiveListener()
            r0.<init>(r1)
            r5.a(r0)
            return
    }

    static boolean a(com.kwad.components.ad.f.e r0, boolean r1) {
            boolean r0 = r0.g(r1)
            return r0
    }

    private void av() {
            r4 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r4.cE = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r1 = 0
            r0.mScreenOrientation = r1
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r2 = 0
            r0.aye = r2
            com.kwad.sdk.core.webview.b r0 = r4.cE
            com.kwad.sdk.core.view.AdBasePvFrameLayout r3 = r4.mQ
            r0.MT = r3
            com.kwad.sdk.core.webview.b r0 = r4.cE
            com.kwad.sdk.core.webview.KsAdWebView r3 = r4.mAdWebView
            r0.Ms = r3
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r0.mReportExtData = r2
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r0.ayg = r1
            return
    }

    private void aw() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.bx(r0)
            if (r0 != 0) goto L9
            return
        L9:
            r1.eL()
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

    static com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener b(com.kwad.components.ad.f.e r0) {
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener r0 = r0.fp
            return r0
    }

    private com.kwad.components.offline.api.core.adlive.IAdLivePlayModule bg() {
            r5 = this;
            r5.bh()
            com.kwad.components.core.offline.api.a.a r0 = r5.eE
            android.content.Context r1 = r5.mContext
            r2 = 3
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r0.getView(r1, r2)
            r5.eD = r0
            com.kwad.components.core.offline.api.a.a r1 = r5.eE
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()
            java.lang.String r2 = r2.appId
            com.kwad.sdk.core.response.model.AdInfo r3 = r5.mAdInfo
            long r3 = com.kwad.sdk.core.response.b.a.bR(r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.getAdLivePlayModule(r0, r2, r3)
            boolean r1 = r5.mIsAudioEnable
            boolean r1 = r5.g(r1)
            r2 = 0
            r0.setAudioEnabled(r1, r2)
            com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r1 = r5.eJ
            r0.registerAdLivePlayStateListener(r1)
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r1 = r5.eD
            android.view.View r1 = r1.getView()
            android.widget.RelativeLayout r2 = r5.mP
            r2.removeAllViews()
            android.widget.RelativeLayout r2 = r5.mP
            r2.addView(r1)
            com.kwad.components.ad.f.e$1 r2 = new com.kwad.components.ad.f.e$1
            r2.<init>(r5, r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r2)
            r5.bw()
            boolean r1 = r5.mIsAudioEnable
            if (r1 == 0) goto L5d
            android.content.Context r1 = r5.mContext
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r2 = r5.eK
            r1.a(r2)
        L5d:
            return r0
    }

    private void bh() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L38
            android.widget.ImageView r1 = r5.mO
            r2 = 0
            r1.setImageDrawable(r2)
            android.widget.ImageView r1 = r5.mO
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r3 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r3.<init>()
            r4 = 50
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r3 = r3.setBlurRadius(r4)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r3 = r3.build()
            com.kwad.components.ad.f.e$5 r4 = new com.kwad.components.ad.f.e$5
            r4.<init>(r5)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r2, r3, r4)
            android.widget.ImageView r0 = r5.mO
            r1 = 0
        L34:
            r0.setVisibility(r1)
            return
        L38:
            android.widget.ImageView r0 = r5.mO
            r1 = 8
            goto L34
    }

    private boolean bv() {
            r2 = this;
            int r0 = r2.cF
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }

    private void bw() {
            r2 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r2.eD
            com.kwad.components.ad.f.e$6 r1 = new com.kwad.components.ad.f.e$6
            r1.<init>(r2)
            r0.registerLiveMessageListener(r1)
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r2.eD
            com.kwad.components.ad.f.e$7 r1 = new com.kwad.components.ad.f.e$7
            r1.<init>(r2)
            r0.registerLiveShopListener(r1)
            return
    }

    static com.kwad.components.core.webview.jshandler.an.a c(com.kwad.components.ad.f.e r0) {
            com.kwad.components.core.webview.jshandler.an$a r0 = r0.fu
            return r0
    }

    private void c(long r3) {
            r2 = this;
            float r3 = (float) r3
            r4 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r4
            double r3 = (double) r3
            double r3 = java.lang.Math.ceil(r3)
            int r3 = (int) r3
            java.util.List<java.lang.Integer> r4 = r2.cr
            if (r4 == 0) goto L36
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L15
            goto L36
        L15:
            java.util.List<java.lang.Integer> r4 = r2.cr
            java.util.Iterator r4 = r4.iterator()
        L1b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L36
            java.lang.Object r0 = r4.next()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            if (r3 < r0) goto L1b
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.a(r0, r3, r1)
            r4.remove()
        L36:
            return
    }

    private void c(android.view.View r4) {
            r3 = this;
            com.kwad.sdk.widget.KSRelativeLayout r0 = r3.ev
            int r0 = r0.getWidth()
            com.kwad.sdk.widget.KSRelativeLayout r1 = r3.ev
            int r1 = r1.getHeight()
            if (r0 == 0) goto L24
            if (r1 != 0) goto L11
            goto L24
        L11:
            r0 = 1058013184(0x3f100000, float:0.5625)
            float r2 = (float) r1
            float r2 = r2 * r0
            int r0 = (int) r2
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r2.<init>(r0, r1)
            r0 = 13
            r1 = -1
            r2.addRule(r0, r1)
            r4.setLayoutParams(r2)
        L24:
            return
    }

    static com.kwad.components.core.webview.jshandler.an.b d(com.kwad.components.ad.f.e r0) {
            com.kwad.components.core.webview.jshandler.an$b r0 = r0.ft
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate e(com.kwad.components.ad.f.e r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private void eG() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r0.nativeAdExtraData     // Catch: java.lang.Throwable -> L14
            int r0 = r0.showLiveStatus     // Catch: java.lang.Throwable -> L14
            r1.mB = r0     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r0.nativeAdExtraData     // Catch: java.lang.Throwable -> L14
            int r0 = r0.showLiveStyle     // Catch: java.lang.Throwable -> L14
            r1.mC = r0     // Catch: java.lang.Throwable -> L14
        L14:
            return
    }

    private void eK() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            r1 = 8
            r0.setVisibility(r1)
            r2.av()
            boolean r0 = r2.bv()
            if (r0 == 0) goto L16
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            r0.reload()
            return
        L16:
            r2.aw()
            return
    }

    private void eL() {
            r3 = this;
            r3.ay()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.mAdWebView
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.mAdWebView
            r1.setClientConfig(r0)
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.mAdWebView
            r0.<init>(r1)
            r3.cD = r0
            r3.a(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.mAdWebView
            com.kwad.components.core.webview.a r1 = r3.cD
            java.lang.String r2 = "KwaiAd"
            r0.addJavascriptInterface(r1, r2)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.mAdWebView
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.br(r1)
            r0.loadUrl(r1)
            return
    }

    static android.content.Context f(com.kwad.components.ad.f.e r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static int g(com.kwad.components.ad.f.e r0) {
            int r0 = r0.cF
            return r0
    }

    private boolean g(boolean r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.kwad.components.core.j.a$b r3 = r2.eI
            if (r3 == 0) goto L14
            com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r3 = r2.eI
            boolean r3 = com.kwad.components.core.j.a.b(r3)
            if (r3 != 0) goto L14
            return r0
        L14:
            boolean r3 = com.kwad.sdk.core.config.d.gF()
            r1 = 1
            if (r3 != 0) goto L40
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.qi()
            if (r3 != 0) goto L32
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.aJ(r0)
            return r3
        L32:
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.qh()
            if (r3 != 0) goto L3f
            return r1
        L3f:
            return r0
        L40:
            boolean r3 = r2.eA
            if (r3 != 0) goto L50
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.aJ(r1)
            r2.eA = r3
        L50:
            boolean r3 = r2.eA
            return r3
    }

    private com.kwad.sdk.core.webview.d.a.a getClickListener() {
            r1 = this;
            com.kwad.components.ad.f.e$11 r0 = new com.kwad.components.ad.f.e$11
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.j.a.b getCurrentVoiceItem() {
            r2 = this;
            com.kwad.components.core.j.a$b r0 = r2.eI
            if (r0 != 0) goto L10
            com.kwad.components.core.j.a$b r0 = new com.kwad.components.core.j.a$b
            com.kwad.components.ad.f.e$4 r1 = new com.kwad.components.ad.f.e$4
            r1.<init>(r2)
            r0.<init>(r1)
            r2.eI = r0
        L10:
            com.kwad.components.core.j.a$b r0 = r2.eI
            return r0
    }

    private com.kwad.components.core.webview.jshandler.af.a getOpenNewPageListener() {
            r1 = this;
            com.kwad.components.ad.f.e$9 r0 = new com.kwad.components.ad.f.e$9
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.an.c getRegisterLiveListener() {
            r1 = this;
            com.kwad.components.ad.f.e$8 r0 = new com.kwad.components.ad.f.e$8
            r0.<init>(r1)
            return r0
    }

    static com.kwad.sdk.core.webview.KsAdWebView h(com.kwad.components.ad.f.e r0) {
            com.kwad.sdk.core.webview.KsAdWebView r0 = r0.mAdWebView
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo i(com.kwad.components.ad.f.e r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    private void initView() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_native_live_layout
            com.kwad.sdk.m.l.inflate(r0, r1, r2)
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.sdk.core.view.AdBasePvFrameLayout r0 = (com.kwad.sdk.core.view.AdBasePvFrameLayout) r0
            r2.mQ = r0
            int r1 = com.kwad.sdk.R.id.ksad_live_bg_img
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.mO = r0
            com.kwad.sdk.core.view.AdBasePvFrameLayout r0 = r2.mQ
            int r1 = com.kwad.sdk.R.id.ksad_live_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.widget.KSRelativeLayout r0 = (com.kwad.sdk.widget.KSRelativeLayout) r0
            r2.ev = r0
            com.kwad.sdk.core.view.AdBasePvFrameLayout r0 = r2.mQ
            int r1 = com.kwad.sdk.R.id.ksad_live_video_container
            android.view.View r0 = r0.findViewById(r1)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r2.mP = r0
            com.kwad.sdk.core.view.AdBasePvFrameLayout r0 = r2.mQ
            int r1 = com.kwad.sdk.R.id.ksad_web_card_webView
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r2.mAdWebView = r0
            r1 = 0
            r0.setBackgroundColor(r1)
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r0 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.core.offline.api.a.a r0 = (com.kwad.components.core.offline.api.a.a) r0
            r2.eE = r0
            return
    }

    static com.kwad.components.ad.f.d.a j(com.kwad.components.ad.f.e r0) {
            com.kwad.components.ad.f.d$a r0 = r0.mE
            return r0
    }

    static com.kwad.components.core.e.d.c k(com.kwad.components.ad.f.e r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    static com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest l(com.kwad.components.ad.f.e r0) {
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r0.fH
            return r0
    }

    static com.kwad.sdk.api.KsNativeAd.VideoPlayListener m(com.kwad.components.ad.f.e r0) {
            com.kwad.sdk.api.KsNativeAd$VideoPlayListener r0 = r0.mz
            return r0
    }

    static com.kwad.sdk.core.network.m n(com.kwad.components.ad.f.e r0) {
            com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, com.kwad.components.core.liveEnd.AdLiveEndCommonResultData> r0 = r0.mNetworking
            return r0
    }

    static com.kwad.components.core.j.a.b o(com.kwad.components.ad.f.e r0) {
            com.kwad.components.core.j.a$b r0 = r0.getCurrentVoiceItem()
            return r0
    }

    static boolean p(com.kwad.components.ad.f.e r0) {
            boolean r0 = r0.mIsAudioEnable
            return r0
    }

    static com.kwad.components.offline.api.core.adlive.IAdLivePlayModule q(com.kwad.components.ad.f.e r0) {
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r0.bg()
            return r0
    }

    public final void a(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.e.d.c r3, com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r4) {
            r0 = this;
            r0.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            r0.mAdInfo = r2
            r0.mContext = r1
            r0.mR = r4
            r0.mApkDownloadHelper = r3
            java.util.List r1 = com.kwad.sdk.core.response.b.a.bd(r2)
            r0.cr = r1
            android.view.ViewParent r1 = r0.getParent()
            if (r1 != 0) goto L1c
            r1 = r0
            goto L22
        L1c:
            android.view.ViewParent r1 = r0.getParent()
            android.view.View r1 = (android.view.View) r1
        L22:
            com.kwad.components.core.widget.a.b r2 = new com.kwad.components.core.widget.a.b
            r3 = 30
            r2.<init>(r1, r3)
            r0.bG = r2
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r1 = r0.mR
            int r1 = r1.getVideoSoundValue()
            if (r1 == 0) goto L3a
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r1 = r0.mR
            boolean r1 = r1.isVideoSoundEnable()
            goto L40
        L3a:
            com.kwad.sdk.core.response.model.AdInfo r1 = r0.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.bH(r1)
        L40:
            r0.mIsAudioEnable = r1
            r0.eG()
            r0.eK()
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.getCurrentVoiceItem()
            r0.a(r1)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            if (r0 != 0) goto L16
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.bg()
            r2.eF = r0
            return
        L16:
            r0.onResume()
            return
    }

    @Override
    public final void aL() {
            r2 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            if (r0 == 0) goto L7
            r0.onPause()
        L7:
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.eI
            r0.c(r1)
            return
    }

    @Override
    public final void aa() {
            r1 = this;
            super.aa()
            com.kwad.components.core.widget.a.b r0 = r1.bG
            r0.sy()
            com.kwad.components.core.widget.a.b r0 = r1.bG
            r0.a(r1)
            return
    }

    @Override
    public final void ab() {
            r3 = this;
            super.ab()
            com.kwad.components.core.widget.a.b r0 = r3.bG
            r0.sy()
            com.kwad.components.core.widget.a.b r0 = r3.bG
            r0.b(r3)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r3.eF
            r1 = 0
            if (r0 == 0) goto L17
            r0.onDestroy()
            r3.eF = r1
        L17:
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r2 = r3.eI
            r0.c(r2)
            r3.fu = r1
            r3.ft = r1
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r3.eD
            if (r0 == 0) goto L2d
            r0.onDestroy()
            r3.eD = r1
        L2d:
            return
    }

    public final void setInnerAdInteractionListener(com.kwad.components.ad.f.d.a r1) {
            r0 = this;
            r0.mE = r1
            return
    }

    public final void setVideoPlayListener(com.kwad.sdk.api.KsNativeAd.VideoPlayListener r1) {
            r0 = this;
            r0.mz = r1
            return
    }
}
