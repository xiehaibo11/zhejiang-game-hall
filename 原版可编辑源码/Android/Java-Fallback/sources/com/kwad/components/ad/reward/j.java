package com.kwad.components.ad.reward;

public final class j extends com.kwad.components.core.l.a {
    public boolean fz;
    public com.kwad.components.ad.reward.e.b mAdOpenInteractionListener;
    public com.kwad.components.ad.reward.e.d mAdRewardStepListener;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public boolean mCheckExposureResult;
    private android.os.Handler mHandler;
    public long mPageEnterTime;
    public org.json.JSONObject mReportExtData;
    private boolean mRewardVerifyCalled;
    public com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    public int mScreenOrientation;
    public com.kwad.sdk.utils.bi mTimerHelper;
    public com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;
    public boolean oU;
    public com.kwad.components.ad.reward.l.d oV;
    public com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView oW;
    public com.kwad.components.core.playable.a oX;
    public com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl oY;
    public com.kwad.components.ad.reward.l oZ;
    public com.kwad.components.ad.reward.k.b.a pA;
    public com.kwad.components.ad.reward.k.a.a pB;
    public int pC;
    private int pD;
    public long pE;
    public long pF;
    public boolean pG;
    private boolean pH;
    private boolean pI;
    public boolean pJ;
    public boolean pK;
    public boolean pL;
    public com.kwad.components.ad.reward.LoadStrategy pM;
    private com.kwad.components.ad.reward.RewardRenderResult pN;
    private java.util.List<com.kwad.components.ad.reward.j.a> pO;
    private java.util.List<com.kwad.components.ad.reward.j.b> pP;
    private java.util.List<com.kwad.components.core.i.a.a> pQ;
    public com.kwad.components.ad.k.a pa;
    public com.kwad.components.ad.reward.g pb;
    private final java.util.PriorityQueue<com.kwad.components.ad.reward.e.f> pc;
    public final java.util.List<com.kwad.components.ad.reward.j.a> pd;
    private final java.util.List<com.kwad.components.ad.reward.j.r> pe;
    public java.util.Set<com.kwad.components.ad.reward.e.e> pf;
    private com.kwad.components.core.webview.b.e.a pg;
    private boolean ph;
    private boolean pi;
    public boolean pj;
    public boolean pk;
    public boolean pl;
    public boolean pm;
    private boolean pn;
    public boolean po;
    public boolean pp;
    public java.util.List<java.lang.Integer> pq;
    public int pr;
    public boolean ps;
    public com.kwad.components.ad.reward.m.p pt;
    public boolean pu;
    private com.kwad.components.core.playable.PlayableSource pv;
    private boolean pw;
    private java.util.List<android.content.DialogInterface.OnDismissListener> px;
    public com.kwad.components.ad.reward.e.m py;
    public boolean pz;












    public interface a {
        void gj();

        void gk();

        void gl();

        void gm();
    }

    public interface b {
        boolean interceptPlayCardResume();
    }

    public j(com.kwad.components.core.l.b<?> r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.oU = r3
            java.util.PriorityQueue r0 = new java.util.PriorityQueue
            r0.<init>()
            r2.pc = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.pd = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.pe = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.pf = r0
            r2.ph = r3
            r2.pi = r3
            r2.pk = r3
            r2.pl = r3
            r2.pm = r3
            r2.pn = r3
            r2.po = r3
            r2.mRewardVerifyCalled = r3
            r2.pp = r3
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.pq = r0
            r0 = 1
            r2.mCheckExposureResult = r0
            r2.pr = r3
            r2.ps = r3
            r2.pu = r3
            r0 = 0
            r2.pv = r0
            r2.pw = r3
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.px = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r2.pz = r3
            r0 = 2
            r2.pD = r0
            r2.pH = r3
            r2.pI = r3
            r2.pJ = r3
            r2.pK = r3
            r2.pL = r3
            com.kwad.components.ad.reward.LoadStrategy r3 = com.kwad.components.ad.reward.LoadStrategy.FULL_TK
            r2.pM = r3
            java.util.concurrent.CopyOnWriteArrayList r3 = new java.util.concurrent.CopyOnWriteArrayList
            r3.<init>()
            r2.pO = r3
            java.util.concurrent.CopyOnWriteArrayList r3 = new java.util.concurrent.CopyOnWriteArrayList
            r3.<init>()
            r2.pP = r3
            java.util.concurrent.CopyOnWriteArrayList r3 = new java.util.concurrent.CopyOnWriteArrayList
            r3.<init>()
            r2.pQ = r3
            java.util.List<com.kwad.components.core.l.a.a> r3 = r2.Lg
            com.kwad.components.ad.reward.j$1 r0 = new com.kwad.components.ad.reward.j$1
            r0.<init>(r2)
            r3.add(r0)
            return
    }

    public static long a(long r2, com.kwad.sdk.core.response.model.AdInfo r4) {
            long r0 = com.kwad.sdk.core.response.b.a.Y(r4)
            long r2 = java.lang.Math.min(r0, r2)
            return r2
    }

    public static com.kwad.components.core.i.c a(java.util.List<com.kwad.components.core.i.c> r4, long r5) {
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r1 = 0
            if (r0 < 0) goto L27
            if (r4 != 0) goto La
            goto L27
        La:
            java.util.Iterator r4 = r4.iterator()
        Le:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r4.next()
            com.kwad.components.core.i.c r0 = (com.kwad.components.core.i.c) r0
            com.kwad.sdk.core.response.model.AdTemplate r2 = r0.getAdTemplate()
            long r2 = com.kwad.sdk.core.response.b.d.cq(r2)
            int r2 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r2 != 0) goto Le
            return r0
        L27:
            return r1
    }

    private void a(int r3, com.kwad.sdk.core.report.j r4) {
            r2 = this;
            if (r4 != 0) goto L7
            com.kwad.sdk.core.report.j r4 = new com.kwad.sdk.core.report.j
            r4.<init>()
        L7:
            r4.cg(r3)
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r2.mRootContainer
            com.kwad.sdk.utils.ac$a r3 = r3.getTouchCoords()
            r4.c(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            org.json.JSONObject r0 = r2.mReportExtData
            r1 = 0
            com.kwad.components.ad.reward.i.b.a(r3, r1, r1, r4, r0)
            com.kwad.components.ad.reward.c.a r3 = com.kwad.components.ad.reward.c.a.gW()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.mAdTemplate
            int r0 = com.kwad.components.ad.reward.c.b.STATUS_NONE
            r3.d(r4, r0)
            com.kwad.components.ad.reward.e.b r3 = r2.mAdOpenInteractionListener
            r3.bE()
            return
    }

    public static void a(android.app.Activity r7, com.kwad.components.ad.reward.j r8) {
            java.lang.String r0 = "RewardCallerContext"
            java.lang.String r1 = "showExtraDialog"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.l.d r0 = r8.oV
            long r3 = r0.getPlayDuration()
            com.kwad.components.ad.reward.j$2 r5 = new com.kwad.components.ad.reward.j$2
            r5.<init>(r8)
            com.kwad.components.ad.reward.j$3 r6 = new com.kwad.components.ad.reward.j$3
            r6.<init>(r8)
            r1 = r8
            r2 = r7
            com.kwad.components.ad.reward.j.a.b.a(r1, r2, r3, r5, r6)
            return
    }

    public static void a(android.content.Context r4, com.kwad.components.ad.reward.j r5, android.view.ViewGroup r6) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r1 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r1 = com.kwad.sdk.components.c.f(r1)
            com.kwad.components.core.offline.api.a.a r1 = (com.kwad.components.core.offline.api.a.a) r1
            if (r1 == 0) goto L55
            boolean r2 = r1.hasLiveCompoReady()
            if (r2 == 0) goto L55
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r2 = com.kwad.sdk.core.response.b.a.cw(r2)
            if (r2 == 0) goto L55
            int r2 = com.kwad.sdk.core.response.b.a.aX(r0)
            r3 = 8
            if (r2 != r3) goto L2c
            r2 = 1
            goto L2d
        L2c:
            r2 = 0
        L2d:
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r4 = r1.getView(r4, r2)
            android.view.View r2 = r4.getView()
            r5.oW = r4
            r6.addView(r2)
            com.kwad.sdk.KsAdSDKImpl r6 = com.kwad.sdk.KsAdSDKImpl.get()
            java.lang.String r6 = r6.getAppId()
            long r2 = com.kwad.sdk.core.response.b.a.bR(r0)
            java.lang.String r0 = java.lang.String.valueOf(r2)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r4 = r1.getAdLivePlayModule(r4, r6, r0)
            com.kwad.components.ad.reward.l.d r6 = r5.oV
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.mAdTemplate
            r6.a(r5, r4)
        L55:
            return
    }

    static void a(com.kwad.components.ad.reward.j r0, int r1, com.kwad.sdk.core.report.j r2) {
            r0.a(r1, r2)
            return
    }

    public static void a(com.kwad.components.ad.reward.j r8, com.kwad.components.ad.reward.k.c r9, com.kwad.components.ad.reward.k.a r10) {
            com.kwad.components.ad.reward.l.d r0 = r8.oV
            boolean r0 = r0.jR()
            r1 = 0
            if (r0 != 0) goto L2c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r8.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.components.ad.reward.a.b.j(r0)
            if (r2 != 0) goto L1f
            int r0 = com.kwad.sdk.core.response.b.a.bN(r0)
            r2 = 2
            if (r0 != r2) goto L1d
            goto L1f
        L1d:
            r0 = 0
            goto L20
        L1f:
            r0 = 1
        L20:
            if (r0 == 0) goto L26
            com.kwad.components.ad.reward.j.a.b r1 = f(r8)
        L26:
            if (r1 != 0) goto L2c
            com.kwad.components.ad.reward.j.a.b r1 = g(r8)
        L2c:
            r2 = r1
            if (r2 == 0) goto L43
            android.app.Activity r3 = r8.getActivity()
            com.kwad.components.ad.reward.l.d r0 = r8.oV
            long r4 = r0.getPlayDuration()
            com.kwad.components.ad.reward.j$10 r7 = new com.kwad.components.ad.reward.j$10
            r7.<init>(r8, r9, r10)
            r6 = r10
            com.kwad.components.ad.reward.j.a.b.a(r2, r3, r4, r6, r7)
            return
        L43:
            b(r8, r9, r10)
            return
    }

    public static <T> void a(java.util.List<T> r1, com.kwad.sdk.g.a<T> r2) {
            if (r1 == 0) goto L14
            java.util.Iterator r1 = r1.iterator()
        L6:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L14
            java.lang.Object r0 = r1.next()
            r2.accept(r0)
            goto L6
        L14:
            return
    }

    public static boolean a(com.kwad.components.ad.reward.j r3) {
            boolean r0 = com.kwad.sdk.core.config.d.isCanUseTk()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aV(r0)
            if (r0 == 0) goto L15
            return r1
        L15:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = com.kwad.sdk.core.response.b.b.bM(r0)
            if (r0 == 0) goto L2b
            int r0 = r0.renderType
            r2 = 1
            if (r0 != r2) goto L2b
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.mAdTemplate
            boolean r3 = com.kwad.sdk.core.response.b.a.aN(r3)
            if (r3 != 0) goto L2b
            return r2
        L2b:
            return r1
    }

    private static void b(com.kwad.components.ad.reward.j r3, com.kwad.components.ad.reward.k.c r4, com.kwad.components.ad.reward.k.a r5) {
            boolean r0 = e(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "showNativeCloseDialog isCloseDialogShowing: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "RewardCallerContext"
            com.kwad.sdk.core.e.c.d(r2, r1)
            if (r0 == 0) goto L1a
            return
        L1a:
            android.app.Activity r0 = r3.getActivity()
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.mAdTemplate
            com.kwad.components.ad.reward.k.a(r0, r3, r4, r5)
            return
    }

    public static boolean b(com.kwad.components.ad.reward.j r4) {
            com.kwad.components.ad.reward.l.d r0 = r4.oV
            boolean r0 = r0.jR()
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            boolean r0 = com.kwad.sdk.core.config.d.isCanUseTk()
            if (r0 != 0) goto L11
            return r1
        L11:
            java.lang.Class<com.kwad.components.core.offline.api.b.c> r0 = com.kwad.components.core.offline.api.b.c.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            if (r0 != 0) goto L1a
            return r1
        L1a:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.sdk.core.response.b.a.bv(r0)
            r3 = 1
            if (r2 == 0) goto L2f
            boolean r2 = com.kwad.components.ad.reward.a.b.gJ()
            if (r2 == 0) goto L2f
            r2 = r3
            goto L30
        L2f:
            r2 = r1
        L30:
            boolean r0 = com.kwad.sdk.core.response.b.a.cq(r0)
            if (r0 != 0) goto L42
            if (r2 != 0) goto L42
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.d.cs(r0)
            if (r0 != 0) goto L42
            r0 = r3
            goto L43
        L42:
            r0 = r1
        L43:
            if (r0 == 0) goto L4b
            boolean r2 = r4.pK
            if (r2 != 0) goto L4b
            r2 = r3
            goto L4c
        L4b:
            r2 = r1
        L4c:
            r4.pl = r2
            if (r0 == 0) goto L55
            boolean r2 = r4.pK
            if (r2 != 0) goto L55
            r1 = r3
        L55:
            r4.C(r1)
            return r0
    }

    static void c(com.kwad.components.ad.reward.j r0, com.kwad.components.ad.reward.k.c r1, com.kwad.components.ad.reward.k.a r2) {
            b(r0, r1, r2)
            return
    }

    public static boolean c(com.kwad.components.ad.reward.j r4) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.ad.reward.l.d r1 = r4.oV
            boolean r1 = r1.jR()
            r2 = 0
            if (r1 != 0) goto L56
            boolean r1 = com.kwad.sdk.core.response.b.a.cw(r0)
            if (r1 == 0) goto L16
            goto L56
        L16:
            boolean r1 = com.kwad.sdk.core.config.d.isCanUseTk()
            if (r1 != 0) goto L1d
            return r2
        L1d:
            java.lang.Class<com.kwad.components.core.offline.api.b.c> r1 = com.kwad.components.core.offline.api.b.c.class
            com.kwad.sdk.components.a r1 = com.kwad.sdk.components.c.f(r1)
            if (r1 != 0) goto L26
            return r2
        L26:
            boolean r1 = a(r4)
            if (r1 == 0) goto L2d
            return r2
        L2d:
            boolean r1 = com.kwad.components.ad.reward.a.b.j(r0)
            r3 = 1
            if (r1 == 0) goto L36
        L34:
            r0 = r3
            goto L4c
        L36:
            boolean r1 = com.kwad.components.ad.reward.a.b.i(r0)
            if (r1 != 0) goto L4b
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.d.ct(r1)
            if (r1 != 0) goto L4b
            boolean r0 = com.kwad.sdk.core.response.b.a.cq(r0)
            if (r0 != 0) goto L4b
            goto L34
        L4b:
            r0 = r2
        L4c:
            if (r0 == 0) goto L53
            boolean r1 = r4.pK
            if (r1 != 0) goto L53
            r2 = r3
        L53:
            r4.pl = r2
            return r0
        L56:
            return r2
    }

    public static boolean d(com.kwad.components.ad.reward.j r5) {
            com.kwad.components.ad.reward.l.d r0 = r5.oV
            boolean r0 = r0.jR()
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            boolean r0 = com.kwad.sdk.core.config.d.isCanUseTk()
            if (r0 != 0) goto L11
            return r1
        L11:
            java.lang.Class<com.kwad.components.core.offline.api.b.c> r0 = com.kwad.components.core.offline.api.b.c.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            if (r0 != 0) goto L1a
            return r1
        L1a:
            boolean r0 = r5.pJ
            if (r0 == 0) goto L1f
            return r1
        L1f:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.sdk.core.response.b.a.cA(r0)
            r3 = 1
            if (r2 == 0) goto L2d
            return r3
        L2d:
            boolean r2 = com.kwad.sdk.core.response.b.a.bv(r0)
            if (r2 == 0) goto L3b
            boolean r2 = com.kwad.components.ad.reward.a.b.gJ()
            if (r2 == 0) goto L3b
            r2 = r3
            goto L3c
        L3b:
            r2 = r1
        L3c:
            boolean r4 = com.kwad.components.ad.reward.a.b.j(r0)
            if (r4 == 0) goto L44
        L42:
            r0 = r3
            goto L64
        L44:
            boolean r4 = com.kwad.components.ad.reward.a.b.i(r0)
            if (r4 != 0) goto L63
            boolean r0 = com.kwad.sdk.core.response.b.a.cq(r0)
            if (r0 != 0) goto L63
            if (r2 != 0) goto L63
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.d.ct(r0)
            if (r0 != 0) goto L63
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.a.aN(r0)
            if (r0 != 0) goto L63
            goto L42
        L63:
            r0 = r1
        L64:
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            boolean r2 = r(r2)
            if (r2 != 0) goto L77
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.mAdTemplate
            boolean r5 = s(r5)
            if (r5 != 0) goto L77
            if (r0 == 0) goto L77
            return r3
        L77:
            return r1
    }

    public static boolean e(com.kwad.components.ad.reward.j r0) {
            boolean r0 = r0.ph
            return r0
    }

    private static com.kwad.components.ad.reward.j.a.b f(com.kwad.components.ad.reward.j r2) {
            com.kwad.components.core.webview.b.c.d$b r0 = new com.kwad.components.core.webview.b.c.d$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            java.lang.String r1 = "ksad-video-confirm-card"
            r0.aO(r1)
            r1 = 0
            r0.aP(r1)
            r1 = 1
            r0.aQ(r1)
            com.kwad.components.ad.reward.j.a.b r2 = com.kwad.components.ad.reward.j.a.b.a(r2, r0)
            return r2
    }

    private void fK() {
            r2 = this;
            java.util.List<com.kwad.components.ad.reward.j$a> r0 = r2.pO
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.j$a r1 = (com.kwad.components.ad.reward.j.a) r1
            r1.gj()
            goto L6
        L16:
            return
    }

    private void fL() {
            r3 = this;
            boolean r0 = r3.pi
            if (r0 != 0) goto L3f
            boolean r0 = r3.ph
            if (r0 != 0) goto L3f
            boolean r0 = r3.pH
            if (r0 == 0) goto Ld
            goto L3f
        Ld:
            r0 = 0
            java.util.List<com.kwad.components.ad.reward.j$b> r1 = r3.pP
            java.util.Iterator r1 = r1.iterator()
        L14:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L26
            java.lang.Object r2 = r1.next()
            com.kwad.components.ad.reward.j$b r2 = (com.kwad.components.ad.reward.j.b) r2
            boolean r2 = r2.interceptPlayCardResume()
            r0 = r0 | r2
            goto L14
        L26:
            if (r0 == 0) goto L29
            return
        L29:
            java.util.List<com.kwad.components.ad.reward.j$a> r0 = r3.pO
            java.util.Iterator r0 = r0.iterator()
        L2f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.j$a r1 = (com.kwad.components.ad.reward.j.a) r1
            r1.gk()
            goto L2f
        L3f:
            return
    }

    private void fM() {
            r2 = this;
            java.util.List<com.kwad.components.ad.reward.j$a> r0 = r2.pO
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.j$a r1 = (com.kwad.components.ad.reward.j.a) r1
            r1.gl()
            goto L6
        L16:
            return
    }

    private void fN() {
            r2 = this;
            java.util.List<com.kwad.components.ad.reward.j$a> r0 = r2.pO
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.reward.j$a r1 = (com.kwad.components.ad.reward.j.a) r1
            r1.gm()
            goto L6
        L16:
            return
    }

    private void fQ() {
            r1 = this;
            java.util.PriorityQueue<com.kwad.components.ad.reward.e.f> r0 = r1.pc
            r0.clear()
            com.kwad.components.core.e.d.c r0 = r1.mApkDownloadHelper
            if (r0 == 0) goto Lc
            r0.clear()
        Lc:
            com.kwad.components.ad.reward.l r0 = r1.oZ
            if (r0 == 0) goto L13
            r0.release()
        L13:
            com.kwad.components.ad.reward.g r0 = r1.pb
            if (r0 == 0) goto L1a
            r0.release()
        L1a:
            java.util.Set<com.kwad.components.ad.reward.e.e> r0 = r1.pf
            if (r0 == 0) goto L21
            r0.clear()
        L21:
            return
    }

    private void fS() {
            r3 = this;
            java.util.PriorityQueue<com.kwad.components.ad.reward.e.f> r0 = r3.pc
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L19
            java.util.PriorityQueue<com.kwad.components.ad.reward.e.f> r2 = r3.pc
            java.lang.Object r2 = r2.poll()
            com.kwad.components.ad.reward.e.f r2 = (com.kwad.components.ad.reward.e.f) r2
            if (r2 == 0) goto L16
            r2.bD()
        L16:
            int r1 = r1 + 1
            goto L7
        L19:
            return
    }

    private static com.kwad.components.ad.reward.j.a.b g(com.kwad.components.ad.reward.j r2) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.bN(r0)
            r1 = 4
            if (r0 == r1) goto L1d
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.bN(r0)
            r1 = 3
            if (r0 != r1) goto L1b
            goto L1d
        L1b:
            r2 = 0
            return r2
        L1d:
            com.kwad.components.core.webview.b.c.d$b r0 = new com.kwad.components.core.webview.b.c.d$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            java.lang.String r1 = "ksad-video-confirm-card"
            r0.aO(r1)
            r1 = 0
            r0.aP(r1)
            r1 = 1
            r0.aQ(r1)
            com.kwad.components.ad.reward.j.a.b r2 = com.kwad.components.ad.reward.j.a.b.a(r2, r0)
            return r2
    }

    public static boolean g(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = com.kwad.sdk.core.response.b.b.g(r1)
            if (r0 == 0) goto Le
            boolean r1 = com.kwad.components.ad.reward.a.b.k(r1)
            if (r1 != 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    static void h(com.kwad.components.ad.reward.j r0) {
            r0.fK()
            return
    }

    static void i(com.kwad.components.ad.reward.j r0) {
            r0.fL()
            return
    }

    private static boolean isMainThread() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    static void j(com.kwad.components.ad.reward.j r0) {
            r0.fM()
            return
    }

    static void k(com.kwad.components.ad.reward.j r0) {
            r0.fN()
            return
    }

    static void l(com.kwad.components.ad.reward.j r0) {
            r0.fS()
            return
    }

    public static boolean r(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r0 = com.kwad.components.ad.reward.a.b.k(r0)
            boolean r1 = com.kwad.sdk.core.response.b.d.f(r1, r0)
            return r1
    }

    public static boolean s(com.kwad.sdk.core.response.model.AdTemplate r0) {
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r0)
            return r0
    }

    public static boolean t(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r0 = com.kwad.sdk.core.response.b.a.cA(r0)
            r1 = 0
            if (r0 == 0) goto Lc
            return r1
        Lc:
            boolean r0 = r(r2)
            if (r0 != 0) goto L1a
            boolean r2 = s(r2)
            if (r2 == 0) goto L19
            goto L1a
        L19:
            return r1
        L1a:
            r2 = 1
            return r2
    }

    public final void A(boolean r1) {
            r0 = this;
            r0.pi = r1
            if (r1 == 0) goto L8
            r0.fM()
            return
        L8:
            r0.fL()
            return
    }

    public final void B(boolean r1) {
            r0 = this;
            r0.pI = r1
            return
    }

    public final void C(boolean r1) {
            r0 = this;
            r0.pn = r1
            return
    }

    public final void D(boolean r1) {
            r0 = this;
            r1 = 1
            r0.pw = r1
            return
    }

    public final void E(boolean r1) {
            r0 = this;
            r1 = 1
            r0.pH = r1
            return
    }

    public final void F(boolean r1) {
            r0 = this;
            r0.ph = r1
            return
    }

    public final void G(java.lang.String r5) {
            r4 = this;
            r0 = -1
            boolean r1 = com.kwad.sdk.core.config.d.xN()     // Catch: java.lang.Throwable -> L10
            if (r1 == 0) goto L14
            android.app.Activity r1 = r4.getActivity()     // Catch: java.lang.Throwable -> L10
            int r0 = com.kwad.components.ad.reward.i.a.a(r1)     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
        L14:
            android.content.Context r1 = r4.mContext
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            org.json.JSONObject r3 = r4.mReportExtData
            com.kwad.components.ad.reward.i.b.a(r1, r2, r5, r0, r3)
            return
    }

    public final void G(boolean r3) {
            r2 = this;
            boolean r0 = r2.mRewardVerifyCalled
            if (r3 == r0) goto Le
            java.util.List<com.kwad.components.ad.reward.j.r> r0 = r2.pe
            com.kwad.components.ad.reward.j$9 r1 = new com.kwad.components.ad.reward.j$9
            r1.<init>(r2, r3)
            a(r0, r1)
        Le:
            r2.mRewardVerifyCalled = r3
            return
    }

    public final void K(int r1) {
            r0 = this;
            r0.pD = r1
            return
    }

    public final void a(int r1, android.content.Context r2, int r3, int r4) {
            r0 = this;
            r0.b(r1, r2, r3, r4)
            return
    }

    public final void a(int r10, android.content.Context r11, int r12, int r13, long r14) {
            r9 = this;
            r1 = 1
            r3 = 40
            r4 = 1
            r7 = 0
            r8 = 0
            r0 = r9
            r2 = r11
            r5 = r14
            r0.a(r1, r2, r3, r4, r5, r7, r8)
            return
    }

    public final void a(int r1, android.content.Context r2, int r3, int r4, long r5, boolean r7, com.kwad.sdk.core.report.j r8) {
            r0 = this;
            com.kwad.components.core.e.d.a$a r7 = new com.kwad.components.core.e.d.a$a
            r7.<init>(r2)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r0.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r7.P(r2)
            com.kwad.components.core.e.d.c r7 = r0.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r7)
            r7 = 0
            com.kwad.components.core.e.d.a$a r2 = r2.am(r7)
            com.kwad.components.core.e.d.a$a r2 = r2.ao(r4)
            com.kwad.components.core.e.d.a$a r2 = r2.s(r5)
            com.kwad.components.core.e.d.a$a r2 = r2.an(r3)
            com.kwad.components.core.e.d.a$a r1 = r2.am(r1)
            java.lang.String r2 = r0.fP()
            com.kwad.components.core.e.d.a$a r1 = r1.al(r2)
            com.kwad.components.ad.reward.j$6 r2 = new com.kwad.components.ad.reward.j$6
            r2.<init>(r0)
            com.kwad.components.core.e.d.a$a r1 = r1.a(r2)
            com.kwad.components.ad.reward.j$5 r2 = new com.kwad.components.ad.reward.j$5
            r2.<init>(r0, r3, r8)
            com.kwad.components.core.e.d.a$a r1 = r1.a(r2)
            com.kwad.components.core.e.d.a.a(r1)
            return
    }

    public final void a(long r1, long r3, int r5) {
            r0 = this;
            java.util.Set<com.kwad.components.ad.reward.e.e> r1 = r0.pf
            java.util.Iterator r1 = r1.iterator()
        L6:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L16
            java.lang.Object r2 = r1.next()
            com.kwad.components.ad.reward.e.e r2 = (com.kwad.components.ad.reward.e.e) r2
            r2.bY()
            goto L6
        L16:
            return
    }

    public final void a(android.content.DialogInterface.OnDismissListener r2) {
            r1 = this;
            java.util.List<android.content.DialogInterface$OnDismissListener> r0 = r1.px
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.ad.reward.RewardRenderResult r1) {
            r0 = this;
            r0.pN = r1
            return
    }

    public final void a(com.kwad.components.ad.reward.e.m r1) {
            r0 = this;
            r0.py = r1
            return
    }

    public final void a(com.kwad.components.ad.reward.j.a r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j$a> r0 = r1.pO
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.ad.reward.j.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j$b> r0 = r1.pP
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.ad.reward.j.a r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j.a> r0 = r1.pd
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.ad.reward.j.r r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j.r> r0 = r1.pe
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.core.i.a.a r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.i.a$a> r0 = r1.pQ
            if (r0 == 0) goto L7
            r0.add(r2)
        L7:
            return
    }

    public final void a(com.kwad.components.core.i.c r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            java.lang.String r0 = r0.getUniqueId()
            com.kwad.components.core.i.d r0 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.C(r0)
            com.kwad.components.ad.reward.j$7 r1 = new com.kwad.components.ad.reward.j$7
            r1.<init>(r2, r0, r3)
            com.kwad.sdk.utils.bj.runOnUiThread(r1)
            return
    }

    public final void a(com.kwad.components.core.webview.b.e.a r1) {
            r0 = this;
            r0.pg = r1
            return
    }

    public final void b(int r10, android.content.Context r11, int r12, int r13) {
            r9 = this;
            r5 = 0
            r7 = 0
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r0.a(r1, r2, r3, r4, r5, r7, r8)
            return
    }

    public final void b(android.content.DialogInterface.OnDismissListener r2) {
            r1 = this;
            java.util.List<android.content.DialogInterface$OnDismissListener> r0 = r1.px
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.ad.reward.c.b r3) {
            r2 = this;
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.gW()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.a(r1, r3)
            return
    }

    public final void b(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            java.util.PriorityQueue<com.kwad.components.ad.reward.e.f> r0 = r1.pc
            r0.offer(r2)
            return
    }

    public final void b(com.kwad.components.ad.reward.j.a r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j$a> r0 = r1.pO
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.ad.reward.j.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j$b> r0 = r1.pP
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.ad.reward.j.a r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j.a> r0 = r1.pd
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.ad.reward.j.r r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.reward.j.r> r0 = r1.pe
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.core.i.a.a r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.i.a$a> r0 = r1.pQ
            if (r0 == 0) goto L7
            r0.remove(r2)
        L7:
            return
    }

    public final void b(com.kwad.components.core.i.c r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            java.lang.String r0 = r0.getUniqueId()
            com.kwad.components.core.i.d r0 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.C(r0)
            com.kwad.components.ad.reward.j$8 r1 = new com.kwad.components.ad.reward.j$8
            r1.<init>(r2, r0, r3)
            com.kwad.sdk.utils.bj.runOnUiThread(r1)
            return
    }

    public final void c(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            java.util.PriorityQueue<com.kwad.components.ad.reward.e.f> r0 = r1.pc
            r0.remove(r2)
            return
    }

    public final void c(boolean r2, boolean r3) {
            r1 = this;
            com.kwad.components.ad.reward.l.d r0 = r1.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L12
            com.kwad.components.ad.reward.j$11 r0 = new com.kwad.components.ad.reward.j$11
            r0.<init>(r1, r2, r3)
            r2 = 500(0x1f4, double:2.47E-321)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r2)
        L12:
            return
    }

    public final void d(android.content.DialogInterface r3) {
            r2 = this;
            java.util.List<android.content.DialogInterface$OnDismissListener> r0 = r2.px
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            android.content.DialogInterface$OnDismissListener r1 = (android.content.DialogInterface.OnDismissListener) r1
            r1.onDismiss(r3)
            goto L6
        L16:
            return
    }

    public final void d(com.kwad.components.core.playable.PlayableSource r1) {
            r0 = this;
            r0.pv = r1
            return
    }

    public final boolean fO() {
            r1 = this;
            boolean r0 = r1.pi
            return r0
    }

    public final java.lang.String fP() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r0 = r0.tkLiveShopItemInfo
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r0 = r0.tkLiveShopItemInfo
            java.lang.String r0 = r0.itemId
            return r0
    }

    public final void fR() {
            r2 = this;
            boolean r0 = isMainThread()
            if (r0 == 0) goto La
            r2.fS()
            return
        La:
            android.os.Handler r0 = r2.mHandler
            com.kwad.components.ad.reward.j$4 r1 = new com.kwad.components.ad.reward.j$4
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    public final boolean fT() {
            r1 = this;
            boolean r0 = r1.pI
            return r0
    }

    public final void fU() {
            r1 = this;
            com.kwad.components.core.webview.b.e.a r0 = r1.pg
            if (r0 != 0) goto L5
            return
        L5:
            r0.ck()
            return
    }

    public final boolean fV() {
            r1 = this;
            boolean r0 = r1.pn
            return r0
    }

    public final com.kwad.components.core.playable.PlayableSource fW() {
            r1 = this;
            com.kwad.components.core.playable.PlayableSource r0 = r1.pv
            return r0
    }

    public final boolean fX() {
            r1 = this;
            boolean r0 = r1.pw
            return r0
    }

    public final java.util.List<com.kwad.components.core.i.a.a> fY() {
            r1 = this;
            java.util.List<com.kwad.components.core.i.a$a> r0 = r1.pQ
            return r0
    }

    public final com.kwad.components.ad.reward.RewardRenderResult fZ() {
            r1 = this;
            com.kwad.components.ad.reward.RewardRenderResult r0 = r1.pN
            return r0
    }

    public final boolean ga() {
            r1 = this;
            boolean r0 = r1.pH
            return r0
    }

    public final boolean gb() {
            r1 = this;
            boolean r0 = r1.ph
            return r0
    }

    public final boolean gc() {
            r1 = this;
            boolean r0 = r1.mRewardVerifyCalled
            return r0
    }

    public final void gd() {
            r4 = this;
            long r0 = r4.pF
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto Ld
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            int r0 = (int) r0
            goto Le
        Ld:
            r0 = 0
        Le:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            int r2 = com.kwad.sdk.core.response.b.a.W(r2)
            com.kwad.sdk.core.report.a.d(r1, r2, r0)
            return
    }

    @Override
    public final void release() {
            r1 = this;
            r1.fQ()
            com.kwad.components.ad.reward.l.d r0 = r1.oV
            r0.release()
            return
    }
}
