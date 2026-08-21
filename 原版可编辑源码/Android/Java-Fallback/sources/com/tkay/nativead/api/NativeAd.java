package com.tkay.nativead.api;

public class NativeAd {
    private final java.lang.String TAG;
    private boolean hasSetShowTkDetail;
    boolean isManualImpressionTrack;
    private com.tkay.core.common.f.a mAdCacheInfo;
    protected com.tkay.nativead.unitgroup.a mBaseNativeAd;
    com.tkay.nativead.api.NativeAd.DownloadConfirmListener mConfirmListener;
    private android.content.Context mContext;
    android.view.View.OnClickListener mDefaultCloseViewListener;
    private com.tkay.nativead.api.TYNativeDislikeListener mDislikeListener;
    com.tkay.core.api.TYEventInterface mEventInterface;
    private boolean mIsDestroyed;
    private com.tkay.nativead.api.TYNativeEventListener mNativeEventListener;
    com.tkay.nativead.api.TYNativeAdView mNativeView;
    private java.lang.String mPlacementId;
    private boolean mRecordedImpression;
    private boolean mRecordedShow;
    com.tkay.nativead.api.TYNativeMaterial nativeMaterial;











    public interface DownloadConfirmListener {
        void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, android.view.View r3, com.tkay.core.api.TYNetworkConfirmInfo r4);
    }

    public interface ImpressionEventListener {
        void onImpression();
    }

    protected NativeAd(android.content.Context r2, java.lang.String r3, com.tkay.core.common.f.a r4) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.TAG = r0
            com.tkay.nativead.api.NativeAd$4 r0 = new com.tkay.nativead.api.NativeAd$4
            r0.<init>(r1)
            r1.mDefaultCloseViewListener = r0
            r0 = 0
            r1.isManualImpressionTrack = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.mContext = r2
            r1.mPlacementId = r3
            r1.mAdCacheInfo = r4
            com.tkay.core.api.BaseAd r2 = r4.f()
            com.tkay.nativead.unitgroup.a r2 = (com.tkay.nativead.unitgroup.a) r2
            r1.mBaseNativeAd = r2
            com.tkay.nativead.api.NativeAd$1 r3 = new com.tkay.nativead.api.NativeAd$1
            r3.<init>(r1)
            r2.setNativeEventListener(r3)
            com.tkay.nativead.unitgroup.a r2 = r1.mBaseNativeAd
            boolean r2 = r2 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r2 == 0) goto L42
            com.tkay.nativead.a.b r2 = new com.tkay.nativead.a.b
            com.tkay.nativead.unitgroup.a r3 = r1.mBaseNativeAd
            com.tkay.nativead.unitgroup.api.CustomNativeAd r3 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r3
            r2.<init>(r3)
            r1.nativeMaterial = r2
        L42:
            return
    }

    static boolean access$000(com.tkay.nativead.api.NativeAd r0) {
            boolean r0 = r0.mIsDestroyed
            return r0
    }

    static com.tkay.core.common.f.a access$100(com.tkay.nativead.api.NativeAd r0) {
            com.tkay.core.common.f.a r0 = r0.mAdCacheInfo
            return r0
    }

    static void access$200(com.tkay.nativead.api.NativeAd r0, com.tkay.core.common.f.d r1) {
            r0.fillShowTrackingInfo(r1)
            return
    }

    static android.content.Context access$300(com.tkay.nativead.api.NativeAd r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static com.tkay.nativead.api.TYNativeEventListener access$400(com.tkay.nativead.api.NativeAd r0) {
            com.tkay.nativead.api.TYNativeEventListener r0 = r0.mNativeEventListener
            return r0
    }

    static com.tkay.nativead.api.TYNativeDislikeListener access$500(com.tkay.nativead.api.NativeAd r0) {
            com.tkay.nativead.api.TYNativeDislikeListener r0 = r0.mDislikeListener
            return r0
    }

    private void bindListener() {
            r2 = this;
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto L20
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            boolean r1 = r0.checkHasCloseViewListener()
            if (r1 == 0) goto Lf
            return
        Lf:
            com.tkay.nativead.api.TYNativePrepareInfo r0 = r0.getNativePrepareInfo()
            if (r0 == 0) goto L20
            android.view.View r0 = r0.getCloseView()
            if (r0 == 0) goto L20
            android.view.View$OnClickListener r1 = r2.mDefaultCloseViewListener
            r0.setOnClickListener(r1)
        L20:
            return
    }

    private void checkBindView(com.tkay.nativead.api.TYNativePrepareInfo r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            android.view.View r0 = r2.getTitleView()
            if (r0 != 0) goto Le
            java.lang.String r0 = "titleView"
            r1.printNotSetViewLog(r0)
        Le:
            android.view.View r0 = r2.getCtaView()
            if (r0 != 0) goto L19
            java.lang.String r0 = "ctaView"
            r1.printNotSetViewLog(r0)
        L19:
            android.view.View r0 = r2.getDescView()
            if (r0 != 0) goto L24
            java.lang.String r0 = "descView"
            r1.printNotSetViewLog(r0)
        L24:
            android.view.View r0 = r2.getIconView()
            if (r0 != 0) goto L2f
            java.lang.String r0 = "iconView"
            r1.printNotSetViewLog(r0)
        L2f:
            android.view.View r2 = r2.getMainImageView()
            if (r2 != 0) goto L3a
            java.lang.String r2 = "mainImageView"
            r1.printNotSetViewLog(r2)
        L3a:
            return
    }

    private synchronized void fillShowTrackingInfo(com.tkay.core.common.f.d r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.hasSetShowTkDetail     // Catch: java.lang.Throwable -> L1d
            if (r0 != 0) goto L1b
            com.tkay.core.common.x r0 = com.tkay.core.common.x.a()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r2.mPlacementId     // Catch: java.lang.Throwable -> L1d
            java.lang.String r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L1d
            r1 = 1
            r2.hasSetShowTkDetail = r1     // Catch: java.lang.Throwable -> L1d
            if (r3 == 0) goto L1b
            r3.v = r0     // Catch: java.lang.Throwable -> L1d
            android.content.Context r0 = r2.mContext     // Catch: java.lang.Throwable -> L1d
            com.tkay.core.common.l.s.a(r0, r3)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r2)
            return
        L1d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void printNotSetViewLog(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = r3.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "The "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = " is not set, it may cause the ad to not be clicked normally."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.util.Log.w(r0, r4)
            return
    }

    private void renderViewToWindow(android.view.View r6) {
            r5 = this;
            java.lang.String r0 = r5.mPlacementId
            java.lang.String r1 = com.tkay.core.common.b.f.i.r
            java.lang.String r2 = com.tkay.core.common.b.f.i.y
            java.lang.String r3 = com.tkay.core.common.b.f.i.n
            java.lang.String r4 = ""
            com.tkay.core.common.l.n.b(r0, r1, r2, r3, r4)
            com.tkay.nativead.unitgroup.a r0 = r5.mBaseNativeAd
            android.view.ViewGroup r0 = r0.getCustomAdContainer()
            int r1 = r5.hashCode()
            android.view.ViewParent r2 = r6.getParent()
            if (r2 == 0) goto L26
            android.view.ViewParent r2 = r6.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r2.removeView(r6)
        L26:
            if (r0 == 0) goto L3a
            android.view.ViewParent r2 = r0.getParent()
            if (r2 == 0) goto L37
            android.view.ViewParent r2 = r0.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r2.removeView(r0)
        L37:
            r0.addView(r6)
        L3a:
            if (r0 != 0) goto L3d
            goto L3e
        L3d:
            r6 = r0
        L3e:
            com.tkay.nativead.api.TYNativeAdView r0 = r5.mNativeView
            com.tkay.nativead.api.NativeAd$3 r2 = new com.tkay.nativead.api.NativeAd$3
            r2.<init>(r5)
            r0.renderView(r1, r6, r2)
            return
    }

    public synchronized void clear(com.tkay.nativead.api.TYNativeAdView r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r2 = r1.mIsDestroyed     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            com.tkay.nativead.unitgroup.a r2 = r1.mBaseNativeAd     // Catch: java.lang.Throwable -> L12
            if (r2 == 0) goto L12
            com.tkay.nativead.unitgroup.a r2 = r1.mBaseNativeAd     // Catch: java.lang.Throwable -> L12
            com.tkay.nativead.api.TYNativeAdView r0 = r1.mNativeView     // Catch: java.lang.Throwable -> L12
            r2.clear(r0)     // Catch: java.lang.Throwable -> L12
        L12:
            com.tkay.nativead.api.TYNativeAdView r2 = r1.mNativeView     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L22
            com.tkay.nativead.api.TYNativeAdView r2 = r1.mNativeView     // Catch: java.lang.Throwable -> L24
            int r0 = r1.hashCode()     // Catch: java.lang.Throwable -> L24
            r2.clearImpressionListener(r0)     // Catch: java.lang.Throwable -> L24
            r2 = 0
            r1.mNativeView = r2     // Catch: java.lang.Throwable -> L24
        L22:
            monitor-exit(r1)
            return
        L24:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void destory() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mIsDestroyed     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            com.tkay.nativead.api.TYNativeAdView r0 = r1.mNativeView     // Catch: java.lang.Throwable -> L23
            r1.clear(r0)     // Catch: java.lang.Throwable -> L23
            r0 = 1
            r1.mIsDestroyed = r0     // Catch: java.lang.Throwable -> L23
            r0 = 0
            r1.mNativeEventListener = r0     // Catch: java.lang.Throwable -> L23
            r1.mDislikeListener = r0     // Catch: java.lang.Throwable -> L23
            r1.mDefaultCloseViewListener = r0     // Catch: java.lang.Throwable -> L23
            r1.mNativeView = r0     // Catch: java.lang.Throwable -> L23
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L21
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd     // Catch: java.lang.Throwable -> L23
            r0.destroy()     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r1)
            return
        L23:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public com.tkay.core.api.TYAdInfo getAdInfo() {
            r1 = this;
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0)
            return r0
    }

    public int getAdInteractionType() {
            r2 = this;
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            if (r0 == 0) goto Lf
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto Lf
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            int r0 = r0.getNativeAdInteractionType()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public com.tkay.nativead.api.TYNativeMaterial getAdMaterial() {
            r1 = this;
            com.tkay.nativead.api.TYNativeMaterial r0 = r1.nativeMaterial
            return r0
    }

    @java.lang.Deprecated
    public com.tkay.core.api.TYCustomVideo getCustomVideo() {
            r2 = this;
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            if (r0 == 0) goto Lf
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto Lf
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            com.tkay.core.api.TYCustomVideo r0 = r0.getNativeCustomVideo()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public int getNativeType() {
            r2 = this;
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            if (r0 == 0) goto Lf
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto Lf
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            int r0 = r0.getNativeType()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public double getVideoDuration() {
            r2 = this;
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            if (r0 == 0) goto Lf
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto Lf
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            double r0 = r0.getVideoDuration()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public double getVideoProgress() {
            r2 = this;
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            if (r0 == 0) goto Lf
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto Lf
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            double r0 = r0.getVideoProgress()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    synchronized void handleAdDislikeButtonClick(com.tkay.nativead.api.TYNativeAdView r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.mIsDestroyed     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L7
            monitor-exit(r2)
            return
        L7:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L15
            com.tkay.nativead.api.NativeAd$9 r1 = new com.tkay.nativead.api.NativeAd$9     // Catch: java.lang.Throwable -> L15
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L15
            r0.a(r1)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)
            return
        L15:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    synchronized void handleClick(com.tkay.nativead.api.TYNativeAdView r4, android.view.View r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r5 = r3.mIsDestroyed     // Catch: java.lang.Throwable -> L36
            if (r5 == 0) goto L7
            monitor-exit(r3)
            return
        L7:
            com.tkay.nativead.unitgroup.a r5 = r3.mBaseNativeAd     // Catch: java.lang.Throwable -> L36
            if (r5 == 0) goto L28
            com.tkay.nativead.unitgroup.a r5 = r3.mBaseNativeAd     // Catch: java.lang.Throwable -> L36
            com.tkay.core.common.f.d r5 = r5.getDetail()     // Catch: java.lang.Throwable -> L36
            java.lang.String r0 = com.tkay.core.common.b.f.i.d     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = com.tkay.core.common.b.f.i.l     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r5, r0, r1, r2)     // Catch: java.lang.Throwable -> L36
            android.content.Context r0 = r3.mContext     // Catch: java.lang.Throwable -> L36
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L36
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)     // Catch: java.lang.Throwable -> L36
            r1 = 6
            r0.a(r1, r5)     // Catch: java.lang.Throwable -> L36
        L28:
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L36
            com.tkay.nativead.api.NativeAd$7 r0 = new com.tkay.nativead.api.NativeAd$7     // Catch: java.lang.Throwable -> L36
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L36
            r5.a(r0)     // Catch: java.lang.Throwable -> L36
            monitor-exit(r3)
            return
        L36:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    synchronized void handleDeeplinkCallback(com.tkay.nativead.api.TYNativeAdView r3, boolean r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.mIsDestroyed     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L7
            monitor-exit(r2)
            return
        L7:
            com.tkay.nativead.api.TYNativeEventListener r0 = r2.mNativeEventListener     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1e
            com.tkay.nativead.api.TYNativeEventListener r0 = r2.mNativeEventListener     // Catch: java.lang.Throwable -> L20
            boolean r0 = r0 instanceof com.tkay.nativead.api.TYNativeEventExListener     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1e
            com.tkay.nativead.api.TYNativeEventListener r0 = r2.mNativeEventListener     // Catch: java.lang.Throwable -> L20
            com.tkay.nativead.api.TYNativeEventExListener r0 = (com.tkay.nativead.api.TYNativeEventExListener) r0     // Catch: java.lang.Throwable -> L20
            com.tkay.nativead.unitgroup.a r1 = r2.mBaseNativeAd     // Catch: java.lang.Throwable -> L20
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)     // Catch: java.lang.Throwable -> L20
            r0.onDeeplinkCallback(r3, r1, r4)     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r2)
            return
        L20:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    synchronized void handleDownloadConfirm(android.content.Context r3, android.view.View r4, com.tkay.core.api.TYNetworkConfirmInfo r5) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.mIsDestroyed     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L7
            monitor-exit(r2)
            return
        L7:
            com.tkay.nativead.api.NativeAd$DownloadConfirmListener r0 = r2.mConfirmListener     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L1f
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L1f
            com.tkay.nativead.api.NativeAd$DownloadConfirmListener r0 = r2.mConfirmListener     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L14
            goto L16
        L14:
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L21
        L16:
            com.tkay.nativead.unitgroup.a r1 = r2.mBaseNativeAd     // Catch: java.lang.Throwable -> L21
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)     // Catch: java.lang.Throwable -> L21
            r0.onDownloadConfirm(r3, r1, r4, r5)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r2)
            return
        L21:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    synchronized void handleImpression(com.tkay.nativead.api.TYNativeAdView r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.mRecordedImpression     // Catch: java.lang.Throwable -> L1d
            if (r0 != 0) goto L1b
            boolean r0 = r2.mIsDestroyed     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto La
            goto L1b
        La:
            r0 = 1
            r2.mRecordedImpression = r0     // Catch: java.lang.Throwable -> L1d
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L1d
            com.tkay.nativead.api.NativeAd$6 r1 = new com.tkay.nativead.api.NativeAd$6     // Catch: java.lang.Throwable -> L1d
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1d
            r0.a(r1)     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r2)
            return
        L1b:
            monitor-exit(r2)
            return
        L1d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    synchronized void handleVideoEnd(com.tkay.nativead.api.TYNativeAdView r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.mIsDestroyed     // Catch: java.lang.Throwable -> L32
            if (r0 == 0) goto L7
            monitor-exit(r3)
            return
        L7:
            com.tkay.nativead.unitgroup.a r0 = r3.mBaseNativeAd     // Catch: java.lang.Throwable -> L32
            if (r0 == 0) goto L24
            com.tkay.nativead.unitgroup.a r0 = r3.mBaseNativeAd     // Catch: java.lang.Throwable -> L32
            com.tkay.core.common.f.d r0 = r0.getDetail()     // Catch: java.lang.Throwable -> L32
            r1 = 100
            r0.t = r1     // Catch: java.lang.Throwable -> L32
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Throwable -> L32
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L32
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)     // Catch: java.lang.Throwable -> L32
            r2 = 9
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L32
        L24:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L32
            com.tkay.nativead.api.NativeAd$10 r1 = new com.tkay.nativead.api.NativeAd$10     // Catch: java.lang.Throwable -> L32
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L32
            r0.a(r1)     // Catch: java.lang.Throwable -> L32
            monitor-exit(r3)
            return
        L32:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    synchronized void handleVideoProgress(com.tkay.nativead.api.TYNativeAdView r3, int r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.mIsDestroyed     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L7
            monitor-exit(r2)
            return
        L7:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L15
            com.tkay.nativead.api.NativeAd$2 r1 = new com.tkay.nativead.api.NativeAd$2     // Catch: java.lang.Throwable -> L15
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L15
            r0.a(r1)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)
            return
        L15:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    synchronized void handleVideoStart(com.tkay.nativead.api.TYNativeAdView r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.mIsDestroyed     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L7
            monitor-exit(r3)
            return
        L7:
            com.tkay.nativead.unitgroup.a r0 = r3.mBaseNativeAd     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L23
            com.tkay.nativead.unitgroup.a r0 = r3.mBaseNativeAd     // Catch: java.lang.Throwable -> L31
            com.tkay.core.common.f.d r0 = r0.getDetail()     // Catch: java.lang.Throwable -> L31
            r1 = 0
            r0.t = r1     // Catch: java.lang.Throwable -> L31
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Throwable -> L31
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L31
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)     // Catch: java.lang.Throwable -> L31
            r2 = 8
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L31
        L23:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L31
            com.tkay.nativead.api.NativeAd$8 r1 = new com.tkay.nativead.api.NativeAd$8     // Catch: java.lang.Throwable -> L31
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L31
            r0.a(r1)     // Catch: java.lang.Throwable -> L31
            monitor-exit(r3)
            return
        L31:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public boolean isNativeExpress() {
            r2 = this;
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            if (r0 == 0) goto Lf
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto Lf
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            boolean r0 = r0.isNativeExpress()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public void manualImpressionTrack() {
            r4 = this;
            boolean r0 = r4.mIsDestroyed
            if (r0 == 0) goto Lc
            java.lang.String r0 = r4.TAG
            java.lang.String r1 = "NativeAd had been destroyed."
            android.util.Log.e(r0, r1)
            return
        Lc:
            boolean r0 = r4.isManualImpressionTrack
            if (r0 != 0) goto L22
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            if (r0 == 0) goto L21
            java.lang.String r0 = r4.TAG
            java.lang.String r1 = "Must call \"setManualImpressionTrack(true);\" first."
            android.util.Log.e(r0, r1)
        L21:
            return
        L22:
            com.tkay.nativead.api.TYNativeAdView r0 = r4.mNativeView
            com.tkay.core.common.f.a r1 = r4.mAdCacheInfo
            if (r1 == 0) goto L2d
            com.tkay.core.api.TYBaseAdAdapter r1 = r1.e()
            goto L2e
        L2d:
            r1 = 0
        L2e:
            if (r1 == 0) goto L48
            boolean r1 = r1.supportImpressionCallback()
            if (r1 == 0) goto L48
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            if (r0 == 0) goto L47
            java.lang.String r0 = r4.TAG
            java.lang.String r1 = "This NativeAd don't support tracking impressions manually."
            android.util.Log.e(r0, r1)
        L47:
            return
        L48:
            if (r0 != 0) goto L5c
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            if (r0 == 0) goto L5b
            java.lang.String r0 = r4.TAG
            java.lang.String r1 = "NativeAd don't call render."
            android.util.Log.e(r0, r1)
        L5b:
            return
        L5c:
            boolean r1 = r0.isShown()
            if (r1 != 0) goto L74
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            if (r0 == 0) goto L73
            java.lang.String r0 = r4.TAG
            java.lang.String r1 = "TYNativeAdView isn't visible."
            android.util.Log.e(r0, r1)
        L73:
            return
        L74:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            java.lang.String r3 = "TYNativeAdView don't attach window."
            if (r1 < r2) goto L92
            boolean r1 = r0.isAttachedToWindow()
            if (r1 != 0) goto La8
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            if (r0 == 0) goto L91
            java.lang.String r0 = r4.TAG
            android.util.Log.e(r0, r3)
        L91:
            return
        L92:
            boolean r1 = r0.isAttachInWindow()
            if (r1 != 0) goto La8
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            if (r0 == 0) goto La7
            java.lang.String r0 = r4.TAG
            android.util.Log.e(r0, r3)
        La7:
            return
        La8:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            boolean r1 = r1.z()
            if (r1 == 0) goto Lb9
            java.lang.String r1 = r4.TAG
            java.lang.String r2 = "try to track impression manually."
            android.util.Log.i(r1, r2)
        Lb9:
            com.tkay.nativead.unitgroup.a r1 = r4.mBaseNativeAd
            boolean r2 = r1 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r2 == 0) goto Lc4
            com.tkay.nativead.unitgroup.api.CustomNativeAd r1 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r1
            r1.impressionTrack(r0)
        Lc4:
            return
    }

    public void onPause() {
            r1 = this;
            boolean r0 = r1.mIsDestroyed
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd
            if (r0 == 0) goto Lc
            r0.onPause()
        Lc:
            return
    }

    public void onResume() {
            r1 = this;
            boolean r0 = r1.mIsDestroyed
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd
            if (r0 == 0) goto Lc
            r0.onResume()
        Lc:
            return
    }

    public void pauseVideo() {
            r1 = this;
            boolean r0 = r1.mIsDestroyed
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd
            if (r0 == 0) goto Lc
            r0.pauseVideo()
        Lc:
            return
    }

    public synchronized void prepare(com.tkay.nativead.api.TYNativeAdView r2, com.tkay.nativead.api.TYNativePrepareInfo r3) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mIsDestroyed     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            if (r2 == 0) goto L28
            if (r3 != 0) goto L10
            com.tkay.nativead.api.TYNativePrepareInfo r3 = new com.tkay.nativead.api.TYNativePrepareInfo     // Catch: java.lang.Throwable -> L2a
            r3.<init>()     // Catch: java.lang.Throwable -> L2a
        L10:
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd     // Catch: java.lang.Throwable -> L2a
            r0.setNativePrepareInfo(r3)     // Catch: java.lang.Throwable -> L2a
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd     // Catch: java.lang.Throwable -> L2a
            r0.prepare(r2, r3)     // Catch: java.lang.Throwable -> L2a
            r1.bindListener()     // Catch: java.lang.Throwable -> L2a
            com.tkay.nativead.unitgroup.a r2 = r1.mBaseNativeAd     // Catch: java.lang.Throwable -> L2a
            boolean r2 = r2.isNativeExpress()     // Catch: java.lang.Throwable -> L2a
            if (r2 != 0) goto L28
            r1.checkBindView(r3)     // Catch: java.lang.Throwable -> L2a
        L28:
            monitor-exit(r1)
            return
        L2a:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    synchronized void recordShow(com.tkay.nativead.api.TYNativeAdView r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r4 = r3.mRecordedShow     // Catch: java.lang.Throwable -> L42
            if (r4 != 0) goto L40
            com.tkay.nativead.unitgroup.a r4 = r3.mBaseNativeAd     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.d r4 = r4.getDetail()     // Catch: java.lang.Throwable -> L42
            r0 = 1
            r3.mRecordedShow = r0     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.a r1 = r3.mAdCacheInfo     // Catch: java.lang.Throwable -> L42
            if (r1 == 0) goto L34
            com.tkay.core.common.f.a r1 = r3.mAdCacheInfo     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.a r2 = r3.mAdCacheInfo     // Catch: java.lang.Throwable -> L42
            int r2 = r2.d()     // Catch: java.lang.Throwable -> L42
            int r2 = r2 + r0
            r1.a(r2)     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = r3.mPlacementId     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "0"
            com.tkay.core.common.f r0 = r0.a(r1, r2)     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L34
            com.tkay.core.common.f.a r1 = r3.mAdCacheInfo     // Catch: java.lang.Throwable -> L42
            r0.a(r1)     // Catch: java.lang.Throwable -> L42
            r0.f()     // Catch: java.lang.Throwable -> L42
        L34:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L42
            com.tkay.nativead.api.NativeAd$5 r1 = new com.tkay.nativead.api.NativeAd$5     // Catch: java.lang.Throwable -> L42
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L42
            r0.a(r1)     // Catch: java.lang.Throwable -> L42
        L40:
            monitor-exit(r3)
            return
        L42:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void renderAdContainer(com.tkay.nativead.api.TYNativeAdView r5, android.view.View r6) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.mIsDestroyed     // Catch: java.lang.Throwable -> L62
            if (r0 == 0) goto L7
            monitor-exit(r4)
            return
        L7:
            if (r5 == 0) goto Lc
            r5.clear()     // Catch: java.lang.Throwable -> L62
        Lc:
            r0 = 0
            boolean r1 = r4.isNativeExpress()     // Catch: java.lang.Throwable -> L62
            r2 = 0
            if (r1 == 0) goto L46
            com.tkay.nativead.unitgroup.a r6 = r4.mBaseNativeAd     // Catch: java.lang.Throwable -> L62
            if (r6 == 0) goto L44
            if (r5 != 0) goto L23
            java.lang.String r5 = "tkay"
            java.lang.String r6 = "renderAdContainer: TYNativeAdView cannot be null for template-rendering ads!"
            android.util.Log.e(r5, r6)     // Catch: java.lang.Throwable -> L62
            monitor-exit(r4)
            return
        L23:
            com.tkay.nativead.unitgroup.a r6 = r4.mBaseNativeAd     // Catch: java.lang.Throwable -> L62
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L62
            r0[r2] = r5     // Catch: java.lang.Throwable -> L62
            r1 = 1
            int r3 = r5.getWidth()     // Catch: java.lang.Throwable -> L62
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L62
            r0[r1] = r3     // Catch: java.lang.Throwable -> L62
            android.view.View r6 = r6.getAdMediaView(r0)     // Catch: java.lang.Throwable -> L62
            if (r6 != 0) goto L51
            java.lang.String r5 = "tkay"
            java.lang.String r6 = "renderAdContainer: getAdMediaView() cannot be null for template-rendering ads!"
            android.util.Log.e(r5, r6)     // Catch: java.lang.Throwable -> L62
            monitor-exit(r4)
            return
        L44:
            r6 = r0
            goto L51
        L46:
            if (r6 != 0) goto L51
            java.lang.String r5 = "tkay"
            java.lang.String r6 = "renderAdContainer: selfRenderView cannot be null for self-rendering ads!"
            android.util.Log.e(r5, r6)     // Catch: java.lang.Throwable -> L62
            monitor-exit(r4)
            return
        L51:
            r4.mNativeView = r5     // Catch: java.lang.Throwable -> L62
            if (r5 == 0) goto L58
            r5.attachNativeAd(r4)     // Catch: java.lang.Throwable -> L62
        L58:
            if (r6 == 0) goto L60
            r6.setVisibility(r2)     // Catch: java.lang.Throwable -> L62
            r4.renderViewToWindow(r6)     // Catch: java.lang.Throwable -> L62
        L60:
            monitor-exit(r4)
            return
        L62:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public void resumeVideo() {
            r1 = this;
            boolean r0 = r1.mIsDestroyed
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd
            if (r0 == 0) goto Lc
            r0.resumeVideo()
        Lc:
            return
    }

    public void setAdDownloadListener(com.tkay.core.api.TYEventInterface r5) {
            r4 = this;
            r4.mEventInterface = r5
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r0 = r0.b()
            r1 = 0
            if (r0 == 0) goto L27
            if (r5 == 0) goto L21
            com.tkay.nativead.unitgroup.a r1 = r4.mBaseNativeAd
            com.tkay.core.common.f.a r2 = r4.mAdCacheInfo
            com.tkay.core.api.TYBaseAdAdapter r2 = r2.e()
            com.tkay.nativead.unitgroup.a r3 = r4.mBaseNativeAd
            com.tkay.core.api.TYEventInterface r5 = r0.createDownloadListener(r2, r3, r5)
            r1.setDownloadListener(r5)
            return
        L21:
            com.tkay.nativead.unitgroup.a r5 = r4.mBaseNativeAd
            r5.setDownloadListener(r1)
            return
        L27:
            com.tkay.nativead.unitgroup.a r5 = r4.mBaseNativeAd
            r5.setDownloadListener(r1)
            java.lang.String r5 = r4.TAG
            java.lang.String r0 = "This method is not supported in this version"
            android.util.Log.e(r5, r0)
            return
    }

    public void setDislikeCallbackListener(com.tkay.nativead.api.TYNativeDislikeListener r2) {
            r1 = this;
            boolean r0 = r1.mIsDestroyed
            if (r0 == 0) goto L5
            return
        L5:
            r1.mDislikeListener = r2
            return
    }

    public void setDownloadConfirmListener(com.tkay.nativead.api.NativeAd.DownloadConfirmListener r3) {
            r2 = this;
            if (r3 == 0) goto Le
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto L19
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            r0.registerDownloadConfirmListener()
            goto L19
        Le:
            com.tkay.nativead.unitgroup.a r0 = r2.mBaseNativeAd
            boolean r1 = r0 instanceof com.tkay.nativead.unitgroup.api.CustomNativeAd
            if (r1 == 0) goto L19
            com.tkay.nativead.unitgroup.api.CustomNativeAd r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd) r0
            r0.unregeisterDownloadConfirmListener()
        L19:
            r2.mConfirmListener = r3
            return
    }

    public void setManualImpressionTrack(boolean r1) {
            r0 = this;
            r0.isManualImpressionTrack = r1
            return
    }

    public void setNativeEventListener(com.tkay.nativead.api.TYNativeEventListener r2) {
            r1 = this;
            boolean r0 = r1.mIsDestroyed
            if (r0 == 0) goto L5
            return
        L5:
            r1.mNativeEventListener = r2
            return
    }

    public void setVideoMute(boolean r2) {
            r1 = this;
            boolean r0 = r1.mIsDestroyed
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.nativead.unitgroup.a r0 = r1.mBaseNativeAd
            if (r0 == 0) goto Lc
            r0.setVideoMute(r2)
        Lc:
            return
    }
}
