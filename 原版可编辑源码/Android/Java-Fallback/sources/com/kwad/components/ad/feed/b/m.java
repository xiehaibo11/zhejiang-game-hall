package com.kwad.components.ad.feed.b;

public final class m extends com.kwad.components.core.widget.b<com.kwad.sdk.core.response.model.AdTemplate> implements android.view.View.OnClickListener, com.kwad.sdk.widget.c {
    private static final java.util.HashMap<java.lang.Long, java.lang.Double> fq = null;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private int cF;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private java.util.List<java.lang.Integer> cr;
    private com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private com.kwad.components.ad.feed.d.b dS;
    private boolean eA;
    private final com.kwad.components.core.video.a.a eC;
    private com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView eD;
    private com.kwad.components.core.offline.api.a.a eE;
    private com.kwad.components.offline.api.core.adlive.IAdLivePlayModule eF;
    private boolean eG;
    private android.view.View eH;
    private com.kwad.components.core.j.a.b eI;
    private final com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener eJ;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener eK;
    private long eh;
    private com.kwad.sdk.widget.KSRelativeLayout ev;
    private android.widget.ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.components.core.video.e ey;
    private com.kwad.components.ad.feed.b.d ez;
    private com.kwad.components.ad.feed.b.m.a fA;
    private android.view.ViewGroup.MarginLayoutParams fB;
    private com.kwad.components.ad.feed.b.e fC;
    private com.kwad.components.core.webview.jshandler.ai fD;
    private boolean fE;
    private boolean fF;
    private com.kwad.components.core.widget.b.a fG;
    private com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest fH;
    private com.kwad.sdk.widget.RatioFrameLayout fi;
    private double fj;
    private android.widget.LinearLayout fk;
    private android.widget.TextView fl;
    private com.kwad.components.core.webview.jshandler.aq fm;
    private com.kwad.components.core.webview.jshandler.am fn;
    private com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener fo;
    private com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener fp;
    private boolean fr;
    private java.lang.String fs;
    private com.kwad.components.core.webview.jshandler.an.b ft;
    private com.kwad.components.core.webview.jshandler.an.a fu;
    private boolean fv;
    private com.kwad.components.core.widget.b fw;
    private float fx;
    private float fy;
    private boolean fz;
    private com.kwad.sdk.core.webview.KsAdWebView mAdWebView;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private android.os.Handler mHandler;
    private boolean mIsAudioEnable;
    private final com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, com.kwad.components.core.liveEnd.AdLiveEndCommonResultData> mNetworking;
    private int mWidth;


























    public interface a {
        void c(int r1, java.lang.String r2);
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 8
            r0.<init>(r1)
            com.kwad.components.ad.feed.b.m.fq = r0
            return
    }

    public m(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = -1
            r2.cF = r3
            r3 = 0
            r2.mIsAudioEnable = r3
            r2.fv = r3
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r2.fE = r3
            r2.fF = r3
            com.kwad.components.ad.feed.b.m$1 r3 = new com.kwad.components.ad.feed.b.m$1
            r3.<init>(r2)
            r2.eK = r3
            com.kwad.components.ad.feed.b.m$20 r3 = new com.kwad.components.ad.feed.b.m$20
            r3.<init>(r2)
            r2.fG = r3
            com.kwad.components.ad.feed.b.m$3 r3 = new com.kwad.components.ad.feed.b.m$3
            r3.<init>(r2)
            r2.mNetworking = r3
            com.kwad.components.ad.feed.b.m$4 r3 = new com.kwad.components.ad.feed.b.m$4
            r3.<init>(r2)
            r2.eJ = r3
            com.kwad.components.ad.feed.b.m$8 r3 = new com.kwad.components.ad.feed.b.m$8
            r3.<init>(r2)
            r2.cK = r3
            com.kwad.components.ad.feed.b.m$18 r3 = new com.kwad.components.ad.feed.b.m$18
            r3.<init>(r2)
            r2.eC = r3
            return
    }

    static android.view.ViewGroup.MarginLayoutParams A(com.kwad.components.ad.feed.b.m r0) {
            android.view.ViewGroup$MarginLayoutParams r0 = r0.fB
            return r0
    }

    static com.kwad.sdk.api.KsAdVideoPlayConfig B(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r0.dJ
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo C(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate D(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static boolean E(com.kwad.components.ad.feed.b.m r0) {
            boolean r0 = r0.mIsAudioEnable
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo F(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static void G(com.kwad.components.ad.feed.b.m r0) {
            r0.sm()
            return
    }

    static android.os.Handler H(com.kwad.components.ad.feed.b.m r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static void I(com.kwad.components.ad.feed.b.m r0) {
            r0.bs()
            return
    }

    static com.kwad.components.core.webview.jshandler.an.a J(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.webview.jshandler.an$a r0 = r0.fu
            return r0
    }

    static com.kwad.components.core.webview.jshandler.an.b K(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.webview.jshandler.an$b r0 = r0.ft
            return r0
    }

    static com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest L(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r0.fH
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo M(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.sdk.core.network.m N(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, com.kwad.components.core.liveEnd.AdLiveEndCommonResultData> r0 = r0.mNetworking
            return r0
    }

    static com.kwad.components.core.j.a.b O(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.j.a$b r0 = r0.getCurrentVoiceItem()
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate P(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.e.d.c Q(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate R(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate S(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static android.content.Context T(com.kwad.components.ad.feed.b.m r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static void U(com.kwad.components.ad.feed.b.m r0) {
            r0.bu()
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo V(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.components.core.widget.b.a W(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.components.core.widget.b.a X(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate Y(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static boolean Z(com.kwad.components.ad.feed.b.m r0) {
            boolean r0 = r0.fr
            return r0
    }

    static double a(com.kwad.components.ad.feed.b.m r0, double r1) {
            r0.fj = r1
            return r1
    }

    static int a(com.kwad.components.ad.feed.b.m r0, int r1) {
            r0.cF = r1
            return r1
    }

    static android.view.ViewGroup.MarginLayoutParams a(com.kwad.components.ad.feed.b.m r0, android.view.ViewGroup.MarginLayoutParams r1) {
            r0.fB = r1
            return r1
    }

    static com.kwad.components.ad.feed.b.d a(com.kwad.components.ad.feed.b.m r0, com.kwad.components.ad.feed.b.d r1) {
            r0.ez = r1
            return r1
    }

    static com.kwad.components.ad.feed.b.e a(com.kwad.components.ad.feed.b.m r0, com.kwad.components.ad.feed.b.e r1) {
            r0.fC = r1
            return r1
    }

    static com.kwad.components.core.webview.jshandler.an.a a(com.kwad.components.ad.feed.b.m r0, com.kwad.components.core.webview.jshandler.an.a r1) {
            r0.fu = r1
            return r1
    }

    static com.kwad.components.core.webview.jshandler.an.b a(com.kwad.components.ad.feed.b.m r0, com.kwad.components.core.webview.jshandler.an.b r1) {
            r0.ft = r1
            return r1
    }

    static com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest a(com.kwad.components.ad.feed.b.m r0, com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r1) {
            r0.fH = r1
            return r1
    }

    static com.kwad.components.offline.api.core.adlive.IAdLivePlayModule a(com.kwad.components.ad.feed.b.m r0, com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r1) {
            r0.eF = r1
            return r1
    }

    static com.kwad.sdk.core.video.videoview.a a(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            return r0
    }

    static java.util.List a(com.kwad.components.ad.feed.b.m r0, java.util.List r1) {
            r0.cr = r1
            return r1
    }

    private void a(android.view.MotionEvent r2) {
            r1 = this;
            int r0 = r2.getActionMasked()
            if (r0 == 0) goto L7
            goto L13
        L7:
            float r0 = r2.getX()
            r1.fx = r0
            float r2 = r2.getY()
            r1.fy = r2
        L13:
            return
    }

    static void a(com.kwad.components.ad.feed.b.m r0, long r1) {
            r0.c(r1)
            return
    }

    static void a(com.kwad.components.ad.feed.b.m r0, android.view.View r1) {
            r0.c(r1)
            return
    }

    static void a(com.kwad.components.ad.feed.b.m r0, com.kwad.sdk.core.report.j r1) {
            r0.c(r1)
            return
    }

    static void a(com.kwad.components.ad.feed.b.m r0, java.lang.String r1, int r2) {
            r0.f(r1, r2)
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
            com.kwad.components.core.webview.jshandler.aa r0 = new com.kwad.components.core.webview.jshandler.aa
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.ad.feed.b.m$21 r2 = new com.kwad.components.ad.feed.b.m$21
            r2.<init>(r4)
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.b.a.f r0 = new com.kwad.components.core.webview.b.a.f
            r0.<init>()
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler r0 = new com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler
            com.kwad.components.ad.feed.b.m$22 r1 = new com.kwad.components.ad.feed.b.m$22
            r1.<init>(r4)
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.s r0 = new com.kwad.components.core.webview.jshandler.s
            com.kwad.sdk.core.webview.b r1 = r4.cE
            com.kwad.components.ad.feed.b.m$23 r2 = new com.kwad.components.ad.feed.b.m$23
            r2.<init>(r4)
            r0.<init>(r1, r2)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.t r0 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r1 = r4.cE
            r0.<init>(r1)
            com.kwad.components.ad.feed.b.m$24 r1 = new com.kwad.components.ad.feed.b.m$24
            r1.<init>(r4)
            r0.a(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r4.cK
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
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
            com.kwad.components.core.webview.jshandler.ao r0 = new com.kwad.components.core.webview.jshandler.ao
            com.kwad.components.ad.feed.b.m$25 r1 = new com.kwad.components.ad.feed.b.m$25
            r1.<init>(r4)
            r0.<init>(r1)
            r5.a(r0)
            com.kwad.components.core.webview.jshandler.ai r0 = new com.kwad.components.core.webview.jshandler.ai
            r0.<init>()
            r4.fD = r0
            r5.a(r0)
            boolean r0 = r4.eG
            if (r0 == 0) goto L109
            com.kwad.components.core.webview.jshandler.c r0 = new com.kwad.components.core.webview.jshandler.c
            r1 = 1
            r0.<init>(r1, r1)
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
        L109:
            return
    }

    private void a(com.kwad.sdk.core.video.videoview.a r3, int r4) {
            r2 = this;
            if (r3 == 0) goto L51
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.F(r3)
            com.kwad.components.core.video.e r0 = r2.ey
            r1 = 0
            r0.setAutoRelease(r1)
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r0 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.getInstance()
            com.kwad.sdk.core.video.videoview.a r1 = r2.ex
            r0.a(r3, r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            int r3 = r3.type
            com.kwad.components.model.FeedType.fromInt(r3)
            r2.bu()
            com.kwad.components.core.e.d.a$a r3 = new com.kwad.components.core.e.d.a$a
            android.content.Context r0 = r2.getContext()
            r3.<init>(r0)
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r3 = r3.P(r0)
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r3 = r3.b(r0)
            r0 = 2
            com.kwad.components.core.e.d.a$a r3 = r3.ao(r0)
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r0)
            com.kwad.components.core.e.d.a$a r3 = r3.aq(r0)
            com.kwad.components.ad.feed.b.m$17 r0 = new com.kwad.components.ad.feed.b.m$17
            r0.<init>(r2, r4)
            com.kwad.components.core.e.d.a$a r3 = r3.a(r0)
            com.kwad.components.core.e.d.a.a(r3)
        L51:
            return
    }

    static boolean a(com.kwad.components.ad.feed.b.m r0, com.kwad.sdk.core.webview.d.b.a r1) {
            boolean r0 = b(r1)
            return r0
    }

    static boolean a(com.kwad.components.ad.feed.b.m r0, boolean r1) {
            r1 = 0
            r0.eA = r1
            return r1
    }

    static void aA(com.kwad.components.ad.feed.b.m r0) {
            r0.eb()
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate aB(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static int aa(com.kwad.components.ad.feed.b.m r0) {
            int r0 = r0.cF
            return r0
    }

    static com.kwad.components.core.widget.b ab(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b r0 = r0.fw
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate ac(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.ad.feed.b.m.a ad(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.ad.feed.b.m$a r0 = r0.fA
            return r0
    }

    static com.kwad.components.offline.api.core.adlive.IAdLivePlayModule ae(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r0.bg()
            return r0
    }

    static com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener af(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener r0 = r0.fo
            return r0
    }

    static com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener ag(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener r0 = r0.fp
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate ah(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo ai(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static long aj(com.kwad.components.ad.feed.b.m r2) {
            long r0 = r2.eh
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate ak(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.webview.jshandler.aq al(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.webview.jshandler.aq r0 = r0.fm
            return r0
    }

    static com.kwad.components.ad.feed.b.d am(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.ad.feed.b.d r0 = r0.ez
            return r0
    }

    static com.kwad.components.ad.feed.b.e an(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.ad.feed.b.e r0 = r0.fC
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate ao(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static boolean ap(com.kwad.components.ad.feed.b.m r0) {
            boolean r0 = r0.fE
            return r0
    }

    static android.content.Context aq(com.kwad.components.ad.feed.b.m r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate ar(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate as(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate at(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.webview.jshandler.ai au(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.webview.jshandler.ai r0 = r0.fD
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate av(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private void av() {
            r4 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r4.cE = r0
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r1 = 0
            r0.mScreenOrientation = r1
            com.kwad.sdk.core.webview.b r0 = r4.cE
            r2 = 0
            r0.aye = r2
            com.kwad.sdk.core.webview.b r0 = r4.cE
            com.kwad.sdk.widget.RatioFrameLayout r3 = r4.fi
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

    static com.kwad.sdk.core.response.model.AdTemplate aw(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private void aw() {
            r3 = this;
            r3.ay()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.mAdWebView
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r3.getWebListener()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.mAdWebView
            r1.setClientConfig(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.mAdWebView
            r1 = 4
            r0.setVisibility(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.mAdWebView
            r1 = 0
            r0.setBackgroundColor(r1)
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
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bq(r1)
            r0.loadUrl(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.bq(r0)
            com.kwad.components.ad.feed.monitor.b.o(r0)
            r3.br()
            return
    }

    static android.content.Context ax(com.kwad.components.ad.feed.b.m r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate ay(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
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

    static com.kwad.sdk.core.response.model.AdInfo az(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.components.offline.api.core.adlive.IAdLivePlayModule b(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r0.eF
            return r0
    }

    static void b(com.kwad.components.ad.feed.b.m r0, int r1) {
            r0.u(r1)
            return
    }

    static boolean b(com.kwad.components.ad.feed.b.m r0, boolean r1) {
            r0.mIsAudioEnable = r1
            return r1
    }

    private static boolean b(com.kwad.sdk.core.webview.d.b.a r1) {
            boolean r0 = r1.JC
            if (r0 == 0) goto L7
            boolean r1 = r1.UX
            return r1
        L7:
            int r1 = r1.UZ
            r0 = 1
            if (r1 != r0) goto Ld
            return r0
        Ld:
            r1 = 0
            return r1
    }

    private boolean bf() {
            r5 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r5.eD
            r1 = 0
            if (r0 == 0) goto L8a
            android.view.View r0 = r0.getView()
            if (r0 == 0) goto L8a
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r5.eF
            if (r0 == 0) goto L8a
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r5.eD
            android.view.View r0 = r0.getView()
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            if (r0 == r2) goto L83
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r5.eD
            android.view.View r2 = r2.getView()
            r0.removeView(r2)
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            java.lang.Object r0 = r0.getTag()
            if (r0 == 0) goto L41
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            java.lang.Object r2 = r0.getTag()
            android.view.View r2 = (android.view.View) r2
            r0.removeView(r2)
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            r2 = 0
            r0.setTag(r2)
        L41:
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r5.eD
            android.view.View r2 = r2.getView()
            r0.addView(r2)
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r5.eD
            android.view.View r2 = r2.getView()
            r0.setTag(r2)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r5.eF
            boolean r2 = r5.mIsAudioEnable
            boolean r2 = r5.g(r2)
            r0.setAudioEnabled(r2, r1)
            com.kwad.components.core.offline.api.a.a r0 = r5.eE
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r1 = r5.eD
            com.kwad.sdk.KsAdSDKImpl r2 = com.kwad.sdk.KsAdSDKImpl.get()
            java.lang.String r2 = r2.getAppId()
            com.kwad.sdk.core.response.model.AdInfo r3 = r5.mAdInfo
            long r3 = com.kwad.sdk.core.response.b.a.bR(r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r0.getAdLivePlayModule(r1, r2, r3)
            r5.eF = r0
            com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r1 = r5.eJ
            r0.registerAdLivePlayStateListener(r1)
        L83:
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r5.eF
            r0.onResume()
            r0 = 1
            return r0
        L8a:
            return r1
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
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            java.lang.Object r2 = r2.getTag()
            if (r2 == 0) goto L52
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            java.lang.Object r3 = r2.getTag()
            android.view.View r3 = (android.view.View) r3
            r2.removeView(r3)
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            r3 = 0
            r2.setTag(r3)
        L52:
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            r2.addView(r1)
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            r2.setTag(r1)
            com.kwad.components.ad.feed.b.m$10 r2 = new com.kwad.components.ad.feed.b.m$10
            r2.<init>(r5, r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r2)
            r5.bw()
            boolean r1 = r5.mIsAudioEnable
            if (r1 == 0) goto L76
            android.content.Context r1 = r5.mContext
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r2 = r5.eK
            r1.a(r2)
        L76:
            return r0
    }

    private void bh() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            android.widget.ImageView r1 = r5.ew
            r2 = 0
            r1.setVisibility(r2)
            android.view.View r1 = r5.eH
            r1.setVisibility(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3d
            android.widget.ImageView r1 = r5.ew
            r2 = 0
            r1.setImageDrawable(r2)
            android.widget.ImageView r1 = r5.ew
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r3 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r3.<init>()
            r4 = 50
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r3 = r3.setBlurRadius(r4)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r3 = r3.build()
            com.kwad.components.ad.feed.b.m$14 r4 = new com.kwad.components.ad.feed.b.m$14
            r4.<init>(r5)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r2, r3, r4)
            return
        L3d:
            android.widget.ImageView r0 = r5.ew
            int r1 = com.kwad.sdk.R.drawable.ksad_ad_live_end
            r0.setImageResource(r1)
            return
    }

    private void br() {
            r4 = this;
            android.os.Handler r0 = r4.mHandler
            com.kwad.components.ad.feed.b.m$12 r1 = new com.kwad.components.ad.feed.b.m$12
            r1.<init>(r4)
            r2 = 2500(0x9c4, double:1.235E-320)
            r0.postDelayed(r1, r2)
            return
    }

    private void bs() {
            r3 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            int r0 = com.kwad.sdk.core.response.b.b.bu(r0)
            float r0 = (float) r0
            com.kwad.components.ad.feed.b.m$5 r1 = new com.kwad.components.ad.feed.b.m$5
            r1.<init>(r3)
            r3.dS = r1
            android.content.Context r1 = r3.mContext
            com.kwad.components.ad.feed.d$b r2 = r3.dS
            com.kwad.components.ad.feed.d.a(r0, r1, r2)
            return
    }

    private void bu() {
            r4 = this;
            boolean r0 = r4.fz
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.fz = r0
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            r1 = 2
            long r2 = r4.getStayTime()
            com.kwad.components.ad.feed.monitor.b.a(r0, r1, r2)
            return
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
            com.kwad.components.ad.feed.b.m$11 r1 = new com.kwad.components.ad.feed.b.m$11
            r1.<init>(r2)
            r0.registerLiveMessageListener(r1)
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r2.eD
            com.kwad.components.ad.feed.b.m$13 r1 = new com.kwad.components.ad.feed.b.m$13
            r1.<init>(r2)
            r0.registerLiveShopListener(r1)
            return
    }

    static java.util.HashMap bx() {
            java.util.HashMap<java.lang.Long, java.lang.Double> r0 = com.kwad.components.ad.feed.b.m.fq
            return r0
    }

    static com.kwad.sdk.core.webview.KsAdWebView c(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.webview.KsAdWebView r0 = r0.mAdWebView
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
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
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

    static void c(com.kwad.components.ad.feed.b.m r0, int r1) {
            r0.aK(r1)
            return
    }

    static boolean c(com.kwad.components.ad.feed.b.m r0, boolean r1) {
            boolean r0 = r0.g(r1)
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void d(com.kwad.components.ad.feed.b.m r0, int r1) {
            r0.aK(r1)
            return
    }

    static boolean d(com.kwad.components.ad.feed.b.m r0, boolean r1) {
            r1 = 1
            r0.fE = r1
            return r1
    }

    static com.kwad.components.core.widget.b.a e(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    private void e(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            boolean r0 = r1.fF
            if (r0 == 0) goto L5
            return
        L5:
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r2 = com.kwad.sdk.core.response.b.a.cw(r2)
            if (r2 == 0) goto L12
            int r2 = com.kwad.sdk.R.id.ksad_web_bottom_card_webView
            goto L14
        L12:
            int r2 = com.kwad.sdk.R.id.ksad_web_default_bottom_card_webView
        L14:
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.sdk.core.webview.KsAdWebView r2 = (com.kwad.sdk.core.webview.KsAdWebView) r2
            r1.mAdWebView = r2
            r2 = 1
            r1.fF = r2
            return
    }

    private static float f(com.kwad.sdk.core.response.model.AdTemplate r1) {
            int r1 = r1.type
            r0 = 1
            if (r1 != r0) goto L9
            r1 = 1058664140(0x3f19eecc, float:0.6013)
            return r1
        L9:
            r0 = 2
            if (r1 == r0) goto L14
            r0 = 3
            if (r1 != r0) goto L10
            goto L14
        L10:
            r1 = 1064816345(0x3f77ced9, float:0.968)
            return r1
        L14:
            r1 = 1049683296(0x3e90e560, float:0.283)
            return r1
    }

    static com.kwad.components.core.widget.b.a f(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    private void f(java.lang.String r8, int r9) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "handleWebViewError "
            r0.<init>(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FeedWebView"
            com.kwad.sdk.core.e.c.d(r1, r0)
            android.os.Handler r0 = r7.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            boolean r0 = r7.fr
            if (r0 == 0) goto L1e
            return
        L1e:
            r0 = 1
            r7.fr = r0
            com.kwad.sdk.core.webview.KsAdWebView r2 = r7.mAdWebView
            if (r2 == 0) goto L39
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r7.mAdTemplate
            java.lang.String r2 = com.kwad.sdk.core.response.b.b.bq(r2)
            long r3 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.core.webview.KsAdWebView r5 = r7.mAdWebView
            long r5 = r5.getLoadTime()
            long r3 = r3 - r5
            com.kwad.components.ad.feed.monitor.b.a(r2, r3, r9)
        L39:
            com.kwad.components.core.o.a r9 = com.kwad.components.core.o.a.pA()
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r7.mAdTemplate
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r7.mAdTemplate
            java.lang.String r3 = com.kwad.sdk.core.response.b.b.bq(r3)
            r9.b(r2, r3, r8)
            com.kwad.components.ad.feed.b.m$a r9 = r7.fA
            if (r9 == 0) goto L4f
            r9.c(r0, r8)
        L4f:
            r7.fA = r1
            com.kwad.components.core.widget.b r8 = r7.fw
            if (r8 != 0) goto Ld3
            r7.fv = r0
            c(r7)
            com.kwad.sdk.core.response.model.AdInfo r8 = r7.mAdInfo
            int r8 = com.kwad.sdk.core.response.b.a.aW(r8)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r9 = r7.eF
            if (r9 == 0) goto L6f
            r0 = 0
            r9.setAudioEnabled(r0, r0)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r9 = r7.eF
            r9.onDestroy()
            r7.eF = r1
        L6f:
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r9 = r7.eD
            if (r9 == 0) goto L78
            r9.onDestroy()
            r7.eD = r1
        L78:
            android.content.Context r9 = r7.mContext
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r7.mAdTemplate
            int r0 = r0.type
            com.kwad.components.model.FeedType r0 = com.kwad.components.model.FeedType.fromInt(r0)
            com.kwad.components.core.widget.b r8 = com.kwad.components.ad.feed.b.a(r9, r0, r8)
            r7.fw = r8
            if (r8 == 0) goto Ld3
            android.content.Context r8 = r7.mContext
            r9 = 1098907648(0x41800000, float:16.0)
            int r8 = com.kwad.sdk.d.a.a.a(r8, r9)
            com.kwad.components.core.widget.b r9 = r7.fw
            r9.setMargin(r8)
            com.kwad.sdk.widget.RatioFrameLayout r8 = r7.fi
            r8.removeAllViews()
            com.kwad.sdk.widget.RatioFrameLayout r8 = r7.fi
            r0 = 0
            r8.setRatio(r0)
            com.kwad.sdk.core.webview.KsAdWebView r8 = r7.mAdWebView
            r9 = 8
            if (r8 == 0) goto Lac
            r8.setVisibility(r9)
        Lac:
            com.kwad.sdk.widget.KSRelativeLayout r8 = r7.ev
            r8.setVisibility(r9)
            com.kwad.components.core.widget.b r8 = r7.fw
            com.kwad.components.core.widget.b$a r9 = r7.fG
            r8.setInnerAdInteractionListener(r9)
            com.kwad.sdk.widget.RatioFrameLayout r8 = r7.fi
            com.kwad.components.core.widget.b r9 = r7.fw
            r8.addView(r9)
            com.kwad.components.core.widget.b r8 = r7.fw
            T extends com.kwad.sdk.core.response.model.AdTemplate r9 = r7.mAdTemplate
            r8.b(r9)
            com.kwad.components.core.widget.b r8 = r7.fw
            boolean r9 = r8 instanceof com.kwad.components.ad.feed.b.c
            if (r9 == 0) goto Ld3
            com.kwad.components.ad.feed.b.c r8 = (com.kwad.components.ad.feed.b.c) r8
            com.kwad.sdk.api.KsAdVideoPlayConfig r9 = r7.dJ
            r8.a(r9)
        Ld3:
            return
    }

    static com.kwad.components.core.widget.b.a g(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    private void g(com.kwad.sdk.core.response.model.AdTemplate r5) {
            r4 = this;
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.<init>(r1)
            r4.mApkDownloadHelper = r0
            r0.setOnShowListener(r4)
            com.kwad.components.core.e.d.c r0 = r4.mApkDownloadHelper
            r0.setOnDismissListener(r4)
            r4.mAdTemplate = r5
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r5)
            r4.mAdInfo = r5
            java.util.HashMap<java.lang.Long, java.lang.Double> r5 = com.kwad.components.ad.feed.b.m.fq
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            long r0 = r0.posId
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.Object r5 = r5.get(r0)
            java.lang.Double r5 = (java.lang.Double) r5
            if (r5 == 0) goto L38
            com.kwad.sdk.widget.RatioFrameLayout r0 = r4.fi
            float r5 = r5.floatValue()
            double r1 = (double) r5
            r0.setRatio(r1)
            goto L64
        L38:
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            double r0 = com.kwad.sdk.core.response.b.b.bv(r5)
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L50
            com.kwad.sdk.widget.RatioFrameLayout r5 = r4.fi
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            double r0 = com.kwad.sdk.core.response.b.b.bv(r0)
        L4c:
            r5.setRatio(r0)
            goto L64
        L50:
            com.kwad.sdk.widget.RatioFrameLayout r5 = r4.fi
            double r0 = r5.getRatio()
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L64
            com.kwad.sdk.widget.RatioFrameLayout r5 = r4.fi
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            float r0 = f(r0)
            double r0 = (double) r0
            goto L4c
        L64:
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r5 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r5 = com.kwad.sdk.components.c.f(r5)
            com.kwad.components.core.offline.api.a.a r5 = (com.kwad.components.core.offline.api.a.a) r5
            r4.eE = r5
            if (r5 == 0) goto L81
            boolean r5 = r5.hasLiveCompoReady()
            if (r5 == 0) goto L81
            com.kwad.sdk.core.response.model.AdInfo r5 = r4.mAdInfo
            boolean r5 = com.kwad.sdk.core.response.b.a.cw(r5)
            if (r5 == 0) goto L81
            r5 = 1
            r4.eG = r5
        L81:
            r4.av()
            return
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
            com.kwad.components.ad.feed.b.m$7 r0 = new com.kwad.components.ad.feed.b.m$7
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.j.a.b getCurrentVoiceItem() {
            r2 = this;
            com.kwad.components.core.j.a$b r0 = r2.eI
            if (r0 != 0) goto L10
            com.kwad.components.core.j.a$b r0 = new com.kwad.components.core.j.a$b
            com.kwad.components.ad.feed.b.m$9 r1 = new com.kwad.components.ad.feed.b.m$9
            r1.<init>(r2)
            r0.<init>(r1)
            r2.eI = r0
        L10:
            com.kwad.components.core.j.a$b r0 = r2.eI
            return r0
    }

    private com.kwad.components.core.webview.jshandler.af.a getOpenNewPageListener() {
            r1 = this;
            com.kwad.components.ad.feed.b.m$6 r0 = new com.kwad.components.ad.feed.b.m$6
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.an.c getRegisterLiveListener() {
            r1 = this;
            com.kwad.components.ad.feed.b.m$2 r0 = new com.kwad.components.ad.feed.b.m$2
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.video.a.b getVideoPlayCallback() {
            r1 = this;
            com.kwad.components.ad.feed.b.m$15 r0 = new com.kwad.components.ad.feed.b.m$15
            r0.<init>(r1)
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d getWebListener() {
            r1 = this;
            com.kwad.components.ad.feed.b.m$19 r0 = new com.kwad.components.ad.feed.b.m$19
            r0.<init>(r1)
            return r0
    }

    static com.kwad.components.core.widget.b.a h(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static boolean i(com.kwad.components.ad.feed.b.m r0) {
            boolean r0 = r0.fv
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate j(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static double k(com.kwad.components.ad.feed.b.m r2) {
            double r0 = r2.fj
            return r0
    }

    static int l(com.kwad.components.ad.feed.b.m r0) {
            int r0 = r0.mWidth
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate m(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate n(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.widget.b.a o(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.components.core.widget.b.a p(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.components.core.widget.b.a q(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.components.core.widget.b.a r(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.components.core.widget.b.a s(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.components.core.widget.b.a t(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.components.core.widget.b$a r0 = r0.XT
            return r0
    }

    static com.kwad.sdk.widget.RatioFrameLayout u(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.widget.RatioFrameLayout r0 = r0.fi
            return r0
    }

    private void u(int r4) {
            r3 = this;
            r3.bu()
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.core.e.d.a$a r0 = r0.P(r1)
            com.kwad.components.core.e.d.c r1 = r3.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r0 = r0.b(r1)
            r1 = 1
            com.kwad.components.core.e.d.a$a r0 = r0.ao(r1)
            com.kwad.components.core.e.d.a$a r0 = r0.am(r1)
            com.kwad.components.core.e.d.a$a r0 = r0.an(r4)
            r2 = 5
            com.kwad.components.core.e.d.a$a r0 = r0.am(r2)
            r2 = 0
            com.kwad.components.core.e.d.a$a r0 = r0.ao(r2)
            com.kwad.components.core.e.d.a$a r0 = r0.aq(r1)
            com.kwad.components.ad.feed.b.m$16 r1 = new com.kwad.components.ad.feed.b.m$16
            r1.<init>(r3, r4)
            com.kwad.components.core.e.d.a$a r4 = r0.a(r1)
            com.kwad.components.core.e.d.a.a(r4)
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate v(com.kwad.components.ad.feed.b.m r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo w(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo x(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static boolean y(com.kwad.components.ad.feed.b.m r0) {
            boolean r0 = r0.eG
            return r0
    }

    static com.kwad.sdk.widget.KSRelativeLayout z(com.kwad.components.ad.feed.b.m r0) {
            com.kwad.sdk.widget.KSRelativeLayout r0 = r0.ev
            return r0
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.widget.KSRelativeLayout r0 = r1.ev
            if (r2 != r0) goto L2a
            com.kwad.sdk.core.video.videoview.a r2 = r1.ex
            boolean r2 = r2.isIdle()
            if (r2 == 0) goto L22
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.utils.l.cA(r2)
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r2 = com.kwad.sdk.contentalliance.a.a.a.ap(r2)
            com.kwad.sdk.core.video.videoview.a r0 = r1.ex
            r0.setKsPlayLogParam(r2)
            com.kwad.sdk.core.video.videoview.a r2 = r1.ex
            r2.start()
            return
        L22:
            com.kwad.sdk.core.video.videoview.a r2 = r1.ex
            r0 = 100
            r1.a(r2, r0)
            return
        L2a:
            android.widget.TextView r0 = r1.fl
            if (r2 != r0) goto L35
            com.kwad.sdk.core.video.videoview.a r2 = r1.ex
            r0 = 25
            r1.a(r2, r0)
        L35:
            return
    }

    public final void a(com.kwad.sdk.api.KsAdVideoPlayConfig r8) {
            r7 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r7.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            r3 = 0
            if (r1 != 0) goto L24
            android.widget.ImageView r1 = r7.ew
            r1.setImageDrawable(r3)
            android.widget.ImageView r1 = r7.ew
            T extends com.kwad.sdk.core.response.model.AdTemplate r4 = r7.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r4)
            android.widget.ImageView r0 = r7.ew
            r0.setVisibility(r2)
            goto L2b
        L24:
            android.widget.ImageView r0 = r7.ew
            r1 = 8
            r0.setVisibility(r1)
        L2b:
            com.kwad.sdk.core.video.videoview.a r0 = new com.kwad.sdk.core.video.videoview.a
            android.content.Context r1 = r7.mContext
            r0.<init>(r1)
            r7.ex = r0
            java.util.List<java.lang.Integer> r1 = r7.cr
            r0.setTag(r1)
            int r0 = com.kwad.sdk.core.config.d.zz()
            com.kwad.sdk.core.response.model.AdInfo r1 = r7.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r1)
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 == 0) goto L4a
            return
        L4a:
            if (r0 >= 0) goto L64
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r0 = r0.bR(r1)
            if (r0 == 0) goto L62
            boolean r1 = r0.exists()
            if (r1 == 0) goto L62
            java.lang.String r0 = r0.getAbsolutePath()
            r1 = r0
            goto L71
        L62:
            r1 = r3
            goto L71
        L64:
            if (r0 != 0) goto L67
            goto L71
        L67:
            android.content.Context r0 = r7.mContext
            com.kwad.sdk.core.videocache.f r0 = com.kwad.sdk.core.videocache.c.a.bj(r0)
            java.lang.String r1 = r0.dN(r1)
        L71:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L78
            return
        L78:
            com.kwad.sdk.contentalliance.a.a.b$a r0 = new com.kwad.sdk.contentalliance.a.a.b$a
            T extends com.kwad.sdk.core.response.model.AdTemplate r4 = r7.mAdTemplate
            r0.<init>(r4)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.cn(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r7.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r1 = com.kwad.sdk.core.response.b.d.ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.b(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.co(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r7.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.a(r1)
            com.kwad.sdk.contentalliance.a.a.a r1 = new com.kwad.sdk.contentalliance.a.a.a
            T extends com.kwad.sdk.core.response.model.AdTemplate r4 = r7.mAdTemplate
            long r5 = java.lang.System.currentTimeMillis()
            r1.<init>(r4, r5)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.b(r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r0.yS()
            com.kwad.sdk.core.video.videoview.a r1 = r7.ex
            r1.a(r0, r3)
            com.kwad.sdk.core.video.videoview.a r0 = r7.ex
            boolean r1 = r7.mIsAudioEnable
            boolean r1 = r7.g(r1)
            r0.setVideoSoundEnable(r1)
            com.kwad.components.core.video.e r0 = new com.kwad.components.core.video.e
            android.content.Context r1 = r7.mContext
            T extends com.kwad.sdk.core.response.model.AdTemplate r4 = r7.mAdTemplate
            com.kwad.sdk.core.video.videoview.a r5 = r7.ex
            r0.<init>(r1, r4, r5, r8)
            r7.ey = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r7.eh = r0
            com.kwad.components.core.video.e r8 = r7.ey
            com.kwad.components.core.video.a$b r0 = r7.getVideoPlayCallback()
            r8.setVideoPlayCallback(r0)
            com.kwad.components.core.video.e r8 = r7.ey
            com.kwad.components.core.video.a$a r0 = r7.eC
            r8.setAdClickListener(r0)
            com.kwad.sdk.core.video.videoview.a r8 = r7.ex
            com.kwad.components.core.video.e r0 = r7.ey
            r8.setController(r0)
            com.kwad.sdk.widget.KSRelativeLayout r8 = r7.ev
            java.lang.Object r8 = r8.getTag()
            if (r8 == 0) goto Lfe
            com.kwad.sdk.widget.KSRelativeLayout r8 = r7.ev
            java.lang.Object r0 = r8.getTag()
            android.view.View r0 = (android.view.View) r0
            r8.removeView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r8 = r7.ev
            r8.setTag(r3)
        Lfe:
            com.kwad.sdk.widget.KSRelativeLayout r8 = r7.ev
            com.kwad.sdk.core.video.videoview.a r0 = r7.ex
            r1 = 1
            r8.addView(r0, r1)
            com.kwad.sdk.widget.KSRelativeLayout r8 = r7.ev
            com.kwad.sdk.core.video.videoview.a r0 = r7.ex
            r8.setTag(r0)
            com.kwad.sdk.widget.KSRelativeLayout r8 = r7.ev
            r8.setClickable(r1)
            com.kwad.sdk.widget.f r8 = new com.kwad.sdk.widget.f
            com.kwad.sdk.widget.KSRelativeLayout r0 = r7.ev
            r8.<init>(r0, r7)
            boolean r8 = r7.mIsAudioEnable
            if (r8 == 0) goto L128
            android.content.Context r8 = r7.mContext
            com.kwad.components.core.t.a r8 = com.kwad.components.core.t.a.al(r8)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r0 = r7.eK
            r8.a(r0)
        L128:
            T extends com.kwad.sdk.core.response.model.AdTemplate r8 = r7.mAdTemplate
            int r8 = r8.type
            if (r8 == r1) goto L136
            T extends com.kwad.sdk.core.response.model.AdTemplate r8 = r7.mAdTemplate
            int r8 = r8.type
            r0 = 19
            if (r8 != r0) goto L152
        L136:
            android.widget.LinearLayout r8 = r7.fk
            r8.setVisibility(r2)
            android.widget.TextView r8 = r7.fl
            r8.setVisibility(r2)
            android.widget.TextView r8 = r7.fl
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r7.mAdTemplate
            java.lang.String r0 = com.kwad.components.ad.feed.f.c(r0)
            r8.setText(r0)
            com.kwad.sdk.widget.f r8 = new com.kwad.sdk.widget.f
            android.widget.TextView r0 = r7.fl
            r8.<init>(r0, r7)
        L152:
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            super.aK()
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.getCurrentVoiceItem()
            r0.a(r1)
            boolean r0 = r2.eG
            if (r0 != 0) goto L13
            return
        L13:
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            if (r0 != 0) goto L1e
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.bg()
            r2.eF = r0
            return
        L1e:
            r0.onResume()
            return
    }

    @Override
    public final void aL() {
            r2 = this;
            super.aL()
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            if (r0 == 0) goto La
            r0.onPause()
        La:
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.eI
            r0.c(r1)
            return
    }

    @Override
    public final void aa() {
            r3 = this;
            super.aa()
            com.kwad.components.ad.feed.d$b r0 = r3.dS
            if (r0 == 0) goto L15
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            int r0 = com.kwad.sdk.core.response.b.b.bu(r0)
            float r0 = (float) r0
            android.content.Context r1 = r3.mContext
            com.kwad.components.ad.feed.d$b r2 = r3.dS
            com.kwad.components.ad.feed.d.a(r0, r1, r2)
        L15:
            return
    }

    @Override
    public final void ab() {
            r3 = this;
            super.ab()
            android.os.Handler r0 = r3.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.utils.l.cz(r0)
            com.kwad.components.ad.feed.d$b r0 = r3.dS
            if (r0 == 0) goto L15
            com.kwad.components.ad.feed.d.a(r0)
        L15:
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r3.eF
            if (r0 == 0) goto L1e
            r0.onDestroy()
            r3.eF = r1
        L1e:
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r3.eD
            if (r0 == 0) goto L27
            r0.onDestroy()
            r3.eD = r1
        L27:
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r2 = r3.eI
            r0.c(r2)
            r3.ft = r1
            r3.fu = r1
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 != 0) goto L9
            return
        L9:
            com.kwad.sdk.widget.KSRelativeLayout r0 = r1.ev
            if (r2 == r0) goto L11
            android.widget.TextView r0 = r1.fl
            if (r2 != r0) goto L18
        L11:
            com.kwad.sdk.core.video.videoview.a r2 = r1.ex
            r0 = 153(0x99, float:2.14E-43)
            r1.a(r2, r0)
        L18:
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.response.model.AdTemplate r5) {
            r4 = this;
            r4.e(r5)
            r0 = 2
            r5.realShowType = r0
            super.b(r5)
            boolean r0 = r4.fr
            if (r0 == 0) goto L24
            com.kwad.components.core.widget.b r5 = r4.fw
            if (r5 == 0) goto L23
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            r5.b(r0)
            com.kwad.components.core.widget.b r5 = r4.fw
            boolean r0 = r5 instanceof com.kwad.components.ad.feed.b.c
            if (r0 == 0) goto L23
            com.kwad.components.ad.feed.b.c r5 = (com.kwad.components.ad.feed.b.c) r5
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r4.dJ
            r5.a(r0)
        L23:
            return
        L24:
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.bw(r0)
            r1 = 0
            java.lang.String r2 = "0"
            if (r0 != 0) goto L33
            r4.f(r2, r1)
            return
        L33:
            boolean r0 = r4.bv()
            if (r0 != 0) goto L3e
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            r4.g(r0)
        L3e:
            java.lang.String r0 = r4.fs     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L4c
            java.lang.String r0 = r4.fs     // Catch: java.lang.Throwable -> L5c
            java.lang.String r3 = r5.mOriginJString     // Catch: java.lang.Throwable -> L5c
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> L5c
            if (r0 != 0) goto L5f
        L4c:
            boolean r0 = r4.bv()     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L58
            com.kwad.sdk.core.webview.KsAdWebView r0 = r4.mAdWebView     // Catch: java.lang.Throwable -> L5c
            r0.reload()     // Catch: java.lang.Throwable -> L5c
            goto L5f
        L58:
            r4.aw()     // Catch: java.lang.Throwable -> L5c
            goto L5f
        L5c:
            r4.f(r2, r1)
        L5f:
            java.lang.String r5 = r5.mOriginJString
            r4.fs = r5
            return
    }

    @Override
    public final void ba() {
            r1 = this;
            com.kwad.components.ad.feed.monitor.b.aX()
            int r0 = com.kwad.sdk.R.id.ksad_container
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.widget.RatioFrameLayout r0 = (com.kwad.sdk.widget.RatioFrameLayout) r0
            r1.fi = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_container
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.widget.KSRelativeLayout r0 = (com.kwad.sdk.widget.KSRelativeLayout) r0
            r1.ev = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_immerse_text_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r1.fk = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_immerse_text
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.fl = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_first_frame_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.ew = r0
            int r0 = com.kwad.sdk.R.id.ksad_live_end_bg_mantle
            android.view.View r0 = r1.findViewById(r0)
            r1.eH = r0
            return
    }

    @Override
    public final void bt() {
            r2 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = r0.mPvReported
            if (r0 != 0) goto L15
            com.kwad.components.core.widget.b$a r0 = r2.XT
            if (r0 == 0) goto L15
            com.kwad.components.core.widget.b$a r0 = r2.XT
            r0.onAdShow()
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r1 = 2
            com.kwad.components.ad.feed.monitor.b.a(r0, r1)
        L15:
            boolean r0 = r2.fv
            if (r0 != 0) goto L20
            com.kwad.components.core.webview.jshandler.am r0 = r2.fn
            if (r0 == 0) goto L20
            r0.rA()
        L20:
            return
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_feed_webview
            return r0
    }

    @Override
    public final void onClick(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public final boolean onInterceptTouchEvent(android.view.MotionEvent r10) {
            r9 = this;
            int r0 = r10.getAction()
            r0 = r0 & 255(0xff, float:3.57E-43)
            boolean r1 = com.kwad.sdk.core.config.d.zK()
            if (r1 == 0) goto L84
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.c.bV(r1)
            if (r1 != 0) goto L15
            goto L84
        L15:
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.FeedSlideConf r1 = com.kwad.sdk.core.response.b.b.aQ(r1)
            if (r1 != 0) goto L22
            boolean r10 = super.onInterceptTouchEvent(r10)
            return r10
        L22:
            r9.a(r10)
            r2 = 2
            if (r0 == r2) goto L2b
            r2 = 3
            if (r0 != r2) goto L7f
        L2b:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r9.mAdWebView
            if (r0 == 0) goto L7f
            boolean r0 = r9.fv
            if (r0 != 0) goto L7f
            float r0 = r10.getX()
            float r2 = r9.fx
            float r0 = r0 - r2
            float r0 = java.lang.Math.abs(r0)
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L7f
            com.kwad.sdk.core.webview.KsAdWebView r0 = r9.mAdWebView
            r2 = 1
            r0.requestDisallowInterceptTouchEvent(r2)
            float r0 = r10.getX()
            float r2 = r9.fx
            float r0 = r0 - r2
            float r0 = java.lang.Math.abs(r0)
            float r2 = r10.getY()
            float r3 = r9.fy
            float r2 = r2 - r3
            float r2 = java.lang.Math.abs(r2)
            int r3 = r1.maxRange
            double r3 = (double) r3
            double r3 = java.lang.Math.tan(r3)
            double r5 = (double) r0
            double r3 = r3 * r5
            double r7 = (double) r2
            int r0 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r0 < 0) goto L79
            int r0 = r1.minRange
            double r0 = (double) r0
            double r0 = java.lang.Math.tan(r0)
            double r0 = r0 * r5
            int r0 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r0 >= 0) goto L7f
        L79:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r9.mAdWebView
            r1 = 0
            r0.requestDisallowInterceptTouchEvent(r1)
        L7f:
            boolean r10 = super.onInterceptTouchEvent(r10)
            return r10
        L84:
            boolean r10 = super.onInterceptTouchEvent(r10)
            return r10
    }

    @Override
    public final void onWindowFocusChanged(boolean r2) {
            r1 = this;
            super.onWindowFocusChanged(r2)
            if (r2 == 0) goto L7f
            boolean r2 = r1.bf()
            if (r2 == 0) goto Lc
            return
        Lc:
            com.kwad.sdk.core.video.videoview.a r2 = r1.ex
            if (r2 == 0) goto L71
            android.view.ViewParent r2 = r2.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            com.kwad.sdk.widget.KSRelativeLayout r0 = r1.ev
            if (r2 == r0) goto L71
            com.kwad.sdk.core.video.videoview.a r0 = r1.ex
            r2.removeView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r2 = r1.ev
            java.lang.Object r2 = r2.getTag()
            if (r2 == 0) goto L38
            com.kwad.sdk.widget.KSRelativeLayout r2 = r1.ev
            java.lang.Object r0 = r2.getTag()
            android.view.View r0 = (android.view.View) r0
            r2.removeView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r2 = r1.ev
            r0 = 0
            r2.setTag(r0)
        L38:
            com.kwad.sdk.widget.KSRelativeLayout r2 = r1.ev
            com.kwad.sdk.core.video.videoview.a r0 = r1.ex
            r2.addView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r2 = r1.ev
            com.kwad.sdk.core.video.videoview.a r0 = r1.ex
            r2.setTag(r0)
            com.kwad.sdk.core.video.videoview.a r2 = r1.ex
            boolean r0 = r1.mIsAudioEnable
            r2.setVideoSoundEnable(r0)
            com.kwad.components.core.video.e r2 = r1.ey
            com.kwad.components.core.video.a$b r0 = r1.getVideoPlayCallback()
            r2.setVideoPlayCallback(r0)
            com.kwad.components.core.video.e r2 = r1.ey
            com.kwad.components.core.video.a$a r0 = r1.eC
            r2.setAdClickListener(r0)
            com.kwad.components.core.video.e r2 = r1.ey
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
            r0 = 0
            r2.mAdWebVideoPageShowing = r0
            com.kwad.components.core.video.e r2 = r1.ey
            r2.qW()
            com.kwad.components.core.video.e r2 = r1.ey
            r0 = 1
            r2.setAutoRelease(r0)
        L71:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.F(r2)
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r0 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.getInstance()
            r0.remove(r2)
            return
        L7f:
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r1.eD
            if (r2 == 0) goto L90
            android.view.View r2 = r2.getView()
            if (r2 == 0) goto L90
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r2 = r1.eF
            if (r2 == 0) goto L90
            r2.onPause()
        L90:
            return
    }

    @Override
    public final void setMargin(int r1) {
            r0 = this;
            return
    }

    public final void setPreloadListener(com.kwad.components.ad.feed.b.m.a r4) {
            r3 = this;
            com.kwad.components.ad.feed.b.m$a r0 = r3.fA
            if (r0 == 0) goto L10
            int r1 = r3.cF
            r2 = 1
            if (r1 == r2) goto La
            goto Lb
        La:
            r2 = 2
        Lb:
            java.lang.String r1 = ""
            r0.c(r2, r1)
        L10:
            r3.fA = r4
            return
    }

    public final void setVideoPlayConfig(com.kwad.sdk.api.KsAdVideoPlayConfig r4) {
            r3 = this;
            r3.dJ = r4
            boolean r0 = r4 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            if (r0 == 0) goto L60
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r4 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r4
            int r0 = r4.getVideoSoundValue()
            if (r0 == 0) goto L4f
            boolean r0 = r4.isVideoSoundEnable()
            r3.mIsAudioEnable = r0
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            boolean r1 = r3.mIsAudioEnable
            r0.mIsAudioEnable = r1
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r3.eD
            if (r0 == 0) goto L33
            android.view.View r0 = r0.getView()
            if (r0 == 0) goto L33
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r3.eF
            if (r0 == 0) goto L33
            boolean r1 = r3.mIsAudioEnable
            boolean r1 = r3.g(r1)
            r2 = 0
            r0.setAudioEnabled(r1, r2)
            goto L40
        L33:
            com.kwad.sdk.core.video.videoview.a r0 = r3.ex
            if (r0 == 0) goto L40
            boolean r1 = r3.mIsAudioEnable
            boolean r1 = r3.g(r1)
            r0.setVideoSoundEnable(r1)
        L40:
            boolean r0 = r3.mIsAudioEnable
            if (r0 == 0) goto L4f
            android.content.Context r0 = r3.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r3.eK
            r0.a(r1)
        L4f:
            int r0 = r4.getDataFlowAutoStartValue()
            if (r0 == 0) goto L60
            com.kwad.components.core.video.e r0 = r3.ey
            if (r0 == 0) goto L60
            boolean r4 = r4.isDataFlowAutoStart()
            r0.setDataAutoStart(r4)
        L60:
            return
    }

    public final void setWidth(int r1) {
            r0 = this;
            if (r1 <= 0) goto L3
            goto L11
        L3:
            android.content.Context r1 = r0.getContext()
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.widthPixels
        L11:
            r0.mWidth = r1
            return
    }
}
