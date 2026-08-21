package com.tkay.nativead.unitgroup;

public abstract class a extends com.tkay.core.api.BaseAd {
    private static final java.lang.String TAG = null;
    public final int NETWORK_UNKNOW;
    protected java.lang.String mAdSourceType;
    protected com.tkay.core.common.f.d mAdTrackingInfo;
    protected com.tkay.core.api.TYEventInterface mDownloadListener;
    private com.tkay.core.common.b.k mNativeEventListener;
    protected int mNetworkType;
    private com.tkay.nativead.api.TYNativePrepareInfo nativePrepareInfo;

    static {
            java.lang.Class<com.tkay.nativead.unitgroup.a> r0 = com.tkay.nativead.unitgroup.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.nativead.unitgroup.a.TAG = r0
            return
    }

    protected a() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.NETWORK_UNKNOW = r0
            java.lang.String r1 = "0"
            r2.mAdSourceType = r1
            r2.mNetworkType = r0
            return
    }

    public abstract void bindDislikeListener(android.view.View.OnClickListener r1);

    public abstract void clear(android.view.View r1);

    @Override
    public abstract android.view.View getAdIconView();

    @Override
    public abstract android.view.View getAdMediaView(java.lang.Object... r1);

    @Override
    public final java.lang.String getAdType() {
            r1 = this;
            java.lang.String r0 = r1.mAdSourceType
            return r0
    }

    @Override
    public com.tkay.core.api.ITYAdvertiserInfoOperate getAdvertiserInfoOperate() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final com.tkay.core.common.f.d getDetail() {
            r1 = this;
            com.tkay.core.common.f.d r0 = r1.mAdTrackingInfo
            return r0
    }

    public final com.tkay.nativead.api.TYNativePrepareInfo getNativePrepareInfo() {
            r1 = this;
            com.tkay.nativead.api.TYNativePrepareInfo r0 = r1.nativePrepareInfo
            return r0
    }

    @Override
    public android.view.View getShakeView(int r1, int r2, com.tkay.core.api.ATShakeViewListener r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    public abstract boolean isNativeExpress();

    public final void notifyAdClicked() {
            r2 = this;
            com.tkay.core.common.b.k r0 = r2.mNativeEventListener
            if (r0 == 0) goto L8
            r1 = 0
            r0.onAdClicked(r1)
        L8:
            return
    }

    public final void notifyAdDislikeClick() {
            r1 = this;
            com.tkay.core.common.b.k r0 = r1.mNativeEventListener
            if (r0 == 0) goto L7
            r0.onAdDislikeButtonClick()
        L7:
            return
    }

    public final void notifyAdImpression() {
            r1 = this;
            com.tkay.core.common.b.k r0 = r1.mNativeEventListener
            if (r0 == 0) goto L7
            r0.onAdImpressed()
        L7:
            return
    }

    public final void notifyAdVideoEnd() {
            r1 = this;
            com.tkay.core.common.b.k r0 = r1.mNativeEventListener
            if (r0 == 0) goto L7
            r0.onAdVideoEnd()
        L7:
            return
    }

    public final void notifyAdVideoPlayProgress(int r2) {
            r1 = this;
            com.tkay.core.common.b.k r0 = r1.mNativeEventListener
            if (r0 == 0) goto L7
            r0.onAdVideoProgress(r2)
        L7:
            return
    }

    public final void notifyAdVideoStart() {
            r1 = this;
            com.tkay.core.common.b.k r0 = r1.mNativeEventListener
            if (r0 == 0) goto L7
            r0.onAdVideoStart()
        L7:
            return
    }

    public final void notifyAdVideoVideoPlayFail(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "notifyAdVideoVideoPlayFail..."
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = ","
            r0.append(r1)
            r0.append(r4)
            com.tkay.core.common.b.k r0 = r2.mNativeEventListener
            if (r0 == 0) goto L1f
            boolean r1 = r0 instanceof com.tkay.core.common.b.l
            if (r1 == 0) goto L1f
            com.tkay.core.common.b.l r0 = (com.tkay.core.common.b.l) r0
            r0.a(r3, r4)
        L1f:
            return
    }

    public final void notifyDeeplinkCallback(boolean r2) {
            r1 = this;
            com.tkay.core.common.b.k r0 = r1.mNativeEventListener
            if (r0 == 0) goto L7
            r0.onDeeplinkCallback(r2)
        L7:
            return
    }

    public final void notifyDownloadConfirm(android.content.Context r2, android.view.View r3, com.tkay.core.api.TYNetworkConfirmInfo r4) {
            r1 = this;
            com.tkay.core.common.b.k r0 = r1.mNativeEventListener
            if (r0 == 0) goto L7
            r0.onDownloadConfirmCallback(r2, r3, r4)
        L7:
            return
    }

    public abstract void onPause();

    public abstract void onResume();

    public abstract void pauseVideo();

    public abstract void prepare(android.view.View r1, com.tkay.nativead.api.TYNativePrepareInfo r2);

    public abstract void resumeVideo();

    public final void setDownloadListener(com.tkay.core.api.TYEventInterface r1) {
            r0 = this;
            r0.mDownloadListener = r1
            return
    }

    @Override
    public void setNativeEventListener(com.tkay.core.common.b.k r1) {
            r0 = this;
            r0.mNativeEventListener = r1
            return
    }

    public final void setNativePrepareInfo(com.tkay.nativead.api.TYNativePrepareInfo r1) {
            r0 = this;
            r0.nativePrepareInfo = r1
            return
    }

    @Override
    public final void setTrackingInfo(com.tkay.core.common.f.d r1) {
            r0 = this;
            r0.mAdTrackingInfo = r1
            return
    }
}
