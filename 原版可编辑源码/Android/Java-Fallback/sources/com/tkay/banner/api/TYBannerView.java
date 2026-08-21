package com.tkay.banner.api;

public class TYBannerView extends android.widget.FrameLayout implements com.tkay.banner.a.d {
    private final java.lang.String TAG;
    com.tkay.core.common.b.a adLoadListener;
    private boolean canRenderBanner;
    boolean hasTouchWindow;
    com.tkay.core.common.l.a.c impressionTracker;
    private com.tkay.banner.a.a mAdLoadManager;
    com.tkay.core.common.b.b mAdSourceEventListener;
    private com.tkay.banner.b.a mBannerRefreshTimer;
    com.tkay.banner.unitgroup.api.CustomBannerAdapter mCustomBannerAd;
    com.tkay.core.api.TYAdSourceStatusListener mDeveloperStatusListener;
    com.tkay.core.api.TYEventInterface mDownloadListener;
    private com.tkay.banner.a.e mInnerBannerListener;
    boolean mIsRefresh;
    private com.tkay.banner.api.TYBannerListener mListener;
    private java.lang.String mPlacementId;
    private java.lang.String mScenario;
    java.util.Map<java.lang.String, java.lang.Object> mTKExtraMap;
    com.tkay.core.common.l.a.f.b visibilityChecker;







    public TYBannerView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class<com.tkay.banner.api.TYBannerView> r1 = com.tkay.banner.api.TYBannerView.class
            java.lang.String r1 = r1.getSimpleName()
            r0.TAG = r1
            java.lang.String r1 = ""
            r0.mScenario = r1
            r1 = 0
            r0.hasTouchWindow = r1
            r0.mIsRefresh = r1
            com.tkay.banner.api.TYBannerView$1 r1 = new com.tkay.banner.api.TYBannerView$1
            r1.<init>(r0)
            r0.mInnerBannerListener = r1
            com.tkay.banner.api.TYBannerView$2 r1 = new com.tkay.banner.api.TYBannerView$2
            r1.<init>(r0)
            r0.adLoadListener = r1
            com.tkay.banner.b.a r1 = new com.tkay.banner.b.a
            r1.<init>(r0)
            r0.mBannerRefreshTimer = r1
            return
    }

    public TYBannerView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.Class<com.tkay.banner.api.TYBannerView> r1 = com.tkay.banner.api.TYBannerView.class
            java.lang.String r1 = r1.getSimpleName()
            r0.TAG = r1
            java.lang.String r1 = ""
            r0.mScenario = r1
            r1 = 0
            r0.hasTouchWindow = r1
            r0.mIsRefresh = r1
            com.tkay.banner.api.TYBannerView$1 r1 = new com.tkay.banner.api.TYBannerView$1
            r1.<init>(r0)
            r0.mInnerBannerListener = r1
            com.tkay.banner.api.TYBannerView$2 r1 = new com.tkay.banner.api.TYBannerView$2
            r1.<init>(r0)
            r0.adLoadListener = r1
            com.tkay.banner.b.a r1 = new com.tkay.banner.b.a
            r1.<init>(r0)
            r0.mBannerRefreshTimer = r1
            return
    }

    public TYBannerView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.Class<com.tkay.banner.api.TYBannerView> r1 = com.tkay.banner.api.TYBannerView.class
            java.lang.String r1 = r1.getSimpleName()
            r0.TAG = r1
            java.lang.String r1 = ""
            r0.mScenario = r1
            r1 = 0
            r0.hasTouchWindow = r1
            r0.mIsRefresh = r1
            com.tkay.banner.api.TYBannerView$1 r1 = new com.tkay.banner.api.TYBannerView$1
            r1.<init>(r0)
            r0.mInnerBannerListener = r1
            com.tkay.banner.api.TYBannerView$2 r1 = new com.tkay.banner.api.TYBannerView$2
            r1.<init>(r0)
            r0.adLoadListener = r1
            com.tkay.banner.b.a r1 = new com.tkay.banner.b.a
            r1.<init>(r0)
            r0.mBannerRefreshTimer = r1
            return
    }

    static com.tkay.banner.api.TYBannerListener access$000(com.tkay.banner.api.TYBannerView r0) {
            com.tkay.banner.api.TYBannerListener r0 = r0.mListener
            return r0
    }

    static boolean access$100(com.tkay.banner.api.TYBannerView r0) {
            boolean r0 = r0.canRenderBanner
            return r0
    }

    static boolean access$1000(com.tkay.banner.api.TYBannerView r0) {
            boolean r0 = r0.isRefreshOpen()
            return r0
    }

    static boolean access$102(com.tkay.banner.api.TYBannerView r0, boolean r1) {
            r0.canRenderBanner = r1
            return r1
    }

    static void access$1100(com.tkay.banner.api.TYBannerView r0, android.content.Context r1, com.tkay.core.api.TYBaseAdAdapter r2, boolean r3) {
            r0.notifyBannerImpression(r1, r2, r3)
            return
    }

    static void access$200(com.tkay.banner.api.TYBannerView r0, int r1) {
            r0.loadAd(r1)
            return
    }

    static com.tkay.banner.a.a access$300(com.tkay.banner.api.TYBannerView r0) {
            com.tkay.banner.a.a r0 = r0.mAdLoadManager
            return r0
    }

    static boolean access$400(com.tkay.banner.api.TYBannerView r0) {
            boolean r0 = r0.isInView()
            return r0
    }

    static com.tkay.banner.b.a access$500(com.tkay.banner.api.TYBannerView r0) {
            com.tkay.banner.b.a r0 = r0.mBannerRefreshTimer
            return r0
    }

    static java.lang.String access$600(com.tkay.banner.api.TYBannerView r0) {
            java.lang.String r0 = r0.TAG
            return r0
    }

    static void access$700(com.tkay.banner.api.TYBannerView r0, android.content.Context r1, com.tkay.core.common.f.a r2, boolean r3) {
            r0.notifyBannerShow(r1, r2, r3)
            return
    }

    static com.tkay.core.common.f.a access$800(com.tkay.banner.api.TYBannerView r0) {
            com.tkay.core.common.f.a r0 = r0.getBannerCache()
            return r0
    }

    static void access$900(com.tkay.banner.api.TYBannerView r0, com.tkay.core.common.f.a r1, boolean r2) {
            r0.renderBannerView(r1, r2)
            return
    }

    private boolean checkVisibilityPercent() {
            r4 = this;
            com.tkay.core.common.l.a.f$b r0 = r4.visibilityChecker
            if (r0 != 0) goto Lb
            com.tkay.core.common.l.a.f$b r0 = new com.tkay.core.common.l.a.f$b
            r0.<init>()
            r4.visibilityChecker = r0
        Lb:
            android.view.ViewParent r0 = r4.getParent()
            r1 = 0
            if (r0 == 0) goto L25
            com.tkay.core.common.l.a.f$b r0 = r4.visibilityChecker
            android.view.ViewParent r2 = r4.getParent()
            android.view.View r2 = (android.view.View) r2
            r3 = 80
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            boolean r0 = r0.a(r2, r4, r3, r1)
            return r0
        L25:
            return r1
    }

    private com.tkay.core.common.f.a getBannerCache() {
            r3 = this;
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a()
            android.content.Context r1 = r3.getContext()
            java.lang.String r2 = r3.mPlacementId
            com.tkay.core.common.f.a r0 = r0.a(r1, r2)
            return r0
    }

    private boolean isInView() {
            r1 = this;
            boolean r0 = r1.hasTouchWindow
            if (r0 == 0) goto L16
            boolean r0 = r1.isShown()
            if (r0 == 0) goto L16
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r1.mCustomBannerAd
            if (r0 == 0) goto L14
            boolean r0 = r1.checkVisibilityPercent()
            if (r0 == 0) goto L16
        L14:
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    private boolean isRefreshOpen() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            java.lang.String r1 = r2.mPlacementId
            com.tkay.core.c.d r0 = r0.a(r1)
            if (r0 == 0) goto L1c
            int r0 = r0.W()
            r1 = 1
            if (r0 != r1) goto L1c
            return r1
        L1c:
            r0 = 0
            return r0
    }

    private void loadAd(int r9) {
            r8 = this;
            java.lang.String r0 = r8.mPlacementId
            java.lang.String r1 = com.tkay.core.common.b.f.i.o
            java.lang.String r2 = com.tkay.core.common.b.f.i.w
            java.lang.String r3 = com.tkay.core.common.b.f.i.n
            java.lang.String r4 = ""
            r5 = 1
            com.tkay.core.common.l.n.a(r0, r1, r2, r3, r4, r5)
            r0 = 1
            if (r9 != r0) goto L13
            r1 = r0
            goto L14
        L13:
            r1 = 0
        L14:
            r8.mIsRefresh = r1
            if (r9 != 0) goto L1a
            r8.canRenderBanner = r0
        L1a:
            com.tkay.banner.a.a r2 = r8.mAdLoadManager
            if (r2 == 0) goto L2d
            android.content.Context r3 = r8.getContext()
            com.tkay.core.common.b.a r5 = r8.adLoadListener
            com.tkay.core.common.b.b r6 = r8.mAdSourceEventListener
            java.util.Map<java.lang.String, java.lang.Object> r7 = r8.mTKExtraMap
            r4 = r9
            r2.a(r3, r4, r5, r6, r7)
            return
        L2d:
            com.tkay.core.common.b.a r9 = r8.adLoadListener
            java.lang.String r0 = ""
            java.lang.String r1 = "3001"
            com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r0, r0)
            r9.onAdLoadFail(r0)
            return
    }

    private void notifyBannerImpression(android.content.Context r9, com.tkay.core.api.TYBaseAdAdapter r10, boolean r11) {
            r8 = this;
            com.tkay.core.common.f.d r2 = r10.getTrackingInfo()
            com.tkay.core.common.l.b.a r6 = com.tkay.core.common.l.b.a.a()
            com.tkay.banner.api.TYBannerView$6 r7 = new com.tkay.banner.api.TYBannerView$6
            r0 = r7
            r1 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            r6.a(r7)
            return
    }

    private void notifyBannerShow(android.content.Context r12, com.tkay.core.common.f.a r13, boolean r14) {
            r11 = this;
            com.tkay.core.api.TYBaseAdAdapter r5 = r13.e()
            com.tkay.core.common.f.d r2 = r5.getTrackingInfo()
            java.lang.String r0 = r2.W()
            com.tkay.core.common.x r1 = com.tkay.core.common.x.a()
            java.lang.String r0 = r1.b(r0)
            r2.v = r0
            long r6 = java.lang.System.currentTimeMillis()
            if (r2 == 0) goto L35
            java.lang.String r0 = r2.l()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L35
            java.lang.String r0 = r2.X()
            java.lang.String r1 = r2.x()
            java.lang.String r0 = com.tkay.core.common.l.g.a(r0, r1, r6)
            r2.h(r0)
        L35:
            com.tkay.core.common.l.b.a r9 = com.tkay.core.common.l.b.a.a()
            com.tkay.banner.api.TYBannerView$5 r10 = new com.tkay.banner.api.TYBannerView$5
            r0 = r10
            r1 = r11
            r3 = r12
            r4 = r13
            r8 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r8)
            r9.a(r10)
            return
    }

    private void registerDelayShow(android.content.Context r3, com.tkay.core.common.f.a r4, com.tkay.banner.unitgroup.api.CustomBannerAdapter r5, boolean r6) {
            r2 = this;
            android.view.View r5 = r5.getBannerView()
            if (r5 != 0) goto L7
            r5 = r2
        L7:
            com.tkay.core.common.l.a.c r0 = r2.impressionTracker
            if (r0 == 0) goto L13
            com.tkay.banner.api.TYBannerView$3 r1 = new com.tkay.banner.api.TYBannerView$3
            r1.<init>(r2, r3, r4, r6)
            r0.a(r5, r1)
        L13:
            return
    }

    private void renderBannerView(com.tkay.core.common.f.a r6, boolean r7) {
            r5 = this;
            r0 = 0
            if (r6 == 0) goto L12
            com.tkay.core.api.TYBaseAdAdapter r1 = r6.e()
            boolean r1 = r1 instanceof com.tkay.banner.unitgroup.api.CustomBannerAdapter
            if (r1 == 0) goto L12
            com.tkay.core.api.TYBaseAdAdapter r1 = r6.e()
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r1 = (com.tkay.banner.unitgroup.api.CustomBannerAdapter) r1
            goto L13
        L12:
            r1 = r0
        L13:
            if (r1 == 0) goto Le4
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r2 = r5.mCustomBannerAd
            if (r2 == 0) goto L1c
            r2.destory()
        L1c:
            android.view.View r2 = r1.getBannerView()
            if (r2 == 0) goto L37
            android.view.ViewParent r3 = r2.getParent()
            if (r3 == 0) goto L37
            android.view.ViewParent r3 = r2.getParent()
            if (r3 == r5) goto L37
            android.view.ViewParent r3 = r2.getParent()
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r3.removeView(r2)
        L37:
            r5.mCustomBannerAd = r1
            if (r2 == 0) goto Lc9
            com.tkay.core.common.f.d r3 = r1.getTrackingInfo()
            java.lang.String r4 = r5.mScenario
            r3.C = r4
            java.util.Map<java.lang.String, java.lang.Object> r4 = r5.mTKExtraMap
            com.tkay.core.common.l.s.a(r4, r3)
            com.tkay.banner.a.b r3 = new com.tkay.banner.a.b
            com.tkay.banner.a.e r4 = r5.mInnerBannerListener
            r3.<init>(r4, r1, r7)
            r1.setAdEventListener(r3)
            boolean r3 = r5.isInView()
            if (r3 != 0) goto L64
            android.content.Context r3 = r5.getContext()
            android.content.Context r3 = r3.getApplicationContext()
            r5.registerDelayShow(r3, r6, r1, r7)
            goto L6f
        L64:
            android.content.Context r3 = r5.getContext()
            android.content.Context r3 = r3.getApplicationContext()
            r5.notifyBannerShow(r3, r6, r7)
        L6f:
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r7 = r7.b()
            if (r7 == 0) goto L82
            com.tkay.core.api.TYEventInterface r3 = r5.mDownloadListener
            com.tkay.core.api.TYEventInterface r7 = r7.createDownloadListener(r1, r0, r3)
            r1.setAdDownloadListener(r7)
        L82:
            r5.removeAllViews()
            android.view.ViewGroup$LayoutParams r7 = r2.getLayoutParams()
            r0 = 0
            if (r7 == 0) goto L93
            android.view.ViewGroup$LayoutParams r7 = r2.getLayoutParams()
            int r7 = r7.width
            goto L94
        L93:
            r7 = r0
        L94:
            r1 = -2
            if (r7 != 0) goto L98
            r7 = r1
        L98:
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            if (r3 == 0) goto La4
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            int r0 = r0.height
        La4:
            if (r0 > 0) goto La7
            goto La8
        La7:
            r1 = r0
        La8:
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r0.<init>(r7, r1)
            r7 = 17
            r0.gravity = r7
            r2.setLayoutParams(r0)
            android.view.ViewParent r7 = r2.getParent()
            boolean r7 = r7 instanceof android.view.ViewGroup
            if (r7 == 0) goto Lc5
            android.view.ViewParent r7 = r2.getParent()
            android.view.ViewGroup r7 = (android.view.ViewGroup) r7
            r7.removeView(r2)
        Lc5:
            r5.addView(r2, r0)
            goto Ld0
        Lc9:
            java.lang.String r7 = r5.TAG
            java.lang.String r0 = "Network's banner view = null. Did you call destroy()?"
            android.util.Log.e(r7, r0)
        Ld0:
            com.tkay.banner.a.a r7 = r5.mAdLoadManager
            r7.a(r6)
            com.tkay.banner.b.a r6 = r5.mBannerRefreshTimer
            r6.b()
            boolean r6 = r5.isRefreshOpen()
            if (r6 == 0) goto Le4
            r6 = 1
            r5.loadAd(r6)
        Le4:
            return
    }

    public com.tkay.core.api.TYAdStatusInfo checkAdStatus() {
            r6 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1 = 0
            r2 = 0
            if (r0 == 0) goto L54
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L54
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L29
            goto L54
        L29:
            com.tkay.banner.a.a r0 = r6.mAdLoadManager
            if (r0 != 0) goto L3a
            java.lang.String r0 = r6.TAG
            java.lang.String r3 = "PlacementId is empty!"
            android.util.Log.e(r0, r3)
            com.tkay.core.api.TYAdStatusInfo r0 = new com.tkay.core.api.TYAdStatusInfo
            r0.<init>(r2, r2, r1)
            return r0
        L3a:
            android.content.Context r1 = r6.getContext()
            java.util.Map<java.lang.String, java.lang.Object> r2 = r6.mTKExtraMap
            com.tkay.core.api.TYAdStatusInfo r0 = r0.a(r1, r2)
            java.lang.String r1 = r6.mPlacementId
            java.lang.String r2 = com.tkay.core.common.b.f.i.o
            java.lang.String r3 = com.tkay.core.common.b.f.i.A
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = ""
            com.tkay.core.common.l.n.b(r1, r2, r3, r4, r5)
            return r0
        L54:
            java.lang.String r0 = r6.TAG
            java.lang.String r3 = "SDK init error!"
            android.util.Log.e(r0, r3)
            com.tkay.core.api.TYAdStatusInfo r0 = new com.tkay.core.api.TYAdStatusInfo
            r0.<init>(r2, r2, r1)
            return r0
    }

    public java.util.List<com.tkay.core.api.TYAdInfo> checkValidAdCaches() {
            r2 = this;
            com.tkay.banner.a.a r0 = r2.mAdLoadManager
            if (r0 == 0) goto Ld
            android.content.Context r1 = r2.getContext()
            java.util.List r0 = r0.a(r1)
            return r0
        Ld:
            r0 = 0
            return r0
    }

    protected void controlShow() {
            r3 = this;
            com.tkay.banner.a.a r0 = r3.mAdLoadManager
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r3.mIsRefresh
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()
            com.tkay.banner.api.TYBannerView$4 r2 = new com.tkay.banner.api.TYBannerView$4
            r2.<init>(r3, r0)
            r1.a(r2)
            return
    }

    public void destroy() {
            r1 = this;
            r1.removeAllViews()
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r1.mCustomBannerAd
            if (r0 == 0) goto La
            r0.destory()
        La:
            com.tkay.banner.b.a r0 = r1.mBannerRefreshTimer
            if (r0 == 0) goto L11
            r0.d()
        L11:
            com.tkay.core.common.l.a.c r0 = r1.impressionTracker
            if (r0 == 0) goto L18
            r0.a()
        L18:
            return
    }

    public void loadAd() {
            r1 = this;
            r0 = 0
            r1.loadAd(r0)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.hasTouchWindow = r0
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            r1.hasTouchWindow = r0
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            if (r2 != 0) goto L8
            r0.controlShow()
        L8:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            if (r1 == 0) goto L8
            r0.controlShow()
        L8:
            return
    }

    public void setAdDownloadListener(com.tkay.core.api.TYEventInterface r4) {
            r3 = this;
            r3.mDownloadListener = r4
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r4 = r3.mCustomBannerAd
            if (r4 == 0) goto L1c
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r4 = r4.b()
            if (r4 == 0) goto L1c
            com.tkay.banner.unitgroup.api.CustomBannerAdapter r0 = r3.mCustomBannerAd
            r1 = 0
            com.tkay.core.api.TYEventInterface r2 = r3.mDownloadListener
            com.tkay.core.api.TYEventInterface r4 = r4.createDownloadListener(r0, r1, r2)
            r0.setAdDownloadListener(r4)
        L1c:
            return
    }

    public void setAdSourceStatusListener(com.tkay.core.api.TYAdSourceStatusListener r2) {
            r1 = this;
            com.tkay.core.common.b.b r0 = r1.mAdSourceEventListener
            if (r0 != 0) goto Lb
            com.tkay.core.common.b.b r0 = new com.tkay.core.common.b.b
            r0.<init>()
            r1.mAdSourceEventListener = r0
        Lb:
            r1.mDeveloperStatusListener = r2
            com.tkay.core.common.b.b r0 = r1.mAdSourceEventListener
            r0.a(r2)
            return
    }

    public void setBannerAdListener(com.tkay.banner.api.TYBannerListener r1) {
            r0 = this;
            r0.mListener = r1
            return
    }

    public void setLocalExtra(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            java.lang.String r0 = r2.mPlacementId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            java.lang.String r3 = r2.TAG
            java.lang.String r0 = "You must set unit Id first."
            android.util.Log.e(r3, r0)
            return
        L10:
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = r2.mPlacementId
            r0.a(r1, r3)
            return
    }

    public void setPlacementId(java.lang.String r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            com.tkay.banner.a.a r0 = com.tkay.banner.a.a.a(r0, r2)
            r1.mAdLoadManager = r0
            r1.mPlacementId = r2
            com.tkay.banner.b.a r0 = r1.mBannerRefreshTimer
            r0.a(r2)
            com.tkay.core.common.l.a.c r2 = r1.impressionTracker
            if (r2 != 0) goto L21
            com.tkay.core.common.l.a.c r2 = new com.tkay.core.common.l.a.c
            r1.getContext()
            r0 = 50
            r2.<init>(r0)
            r1.impressionTracker = r2
        L21:
            return
    }

    public void setScenario(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.tkay.core.common.l.g.c(r2)
            if (r0 == 0) goto L8
            r1.mScenario = r2
        L8:
            return
    }

    public void setTKExtra(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mTKExtraMap
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.mTKExtraMap = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mTKExtraMap
            r0.clear()
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mTKExtraMap
            r0.putAll(r2)
            return
    }

    @Override
    public void timeUpRefreshView() {
            r1 = this;
            r0 = 1
            r1.canRenderBanner = r0
            r1.controlShow()
            return
    }
}
