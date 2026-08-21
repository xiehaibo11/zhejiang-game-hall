package com.tkay.nativead.api;

public class TYNativeAdView extends android.widget.FrameLayout {
    private static final java.lang.String TAG = null;
    android.view.View mAdView;
    com.tkay.nativead.api.NativeAd.ImpressionEventListener mImpressionEventListener;
    boolean mIsInWindow;
    com.tkay.nativead.api.NativeAd mNativeAd;
    int mNativeAdId;

    static {
            java.lang.Class<com.tkay.nativead.api.TYNativeAdView> r0 = com.tkay.nativead.api.TYNativeAdView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.nativead.api.TYNativeAdView.TAG = r0
            return
    }

    public TYNativeAdView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TYNativeAdView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public TYNativeAdView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private void callbackImpression() {
            r1 = this;
            com.tkay.nativead.api.NativeAd$ImpressionEventListener r0 = r1.mImpressionEventListener
            if (r0 == 0) goto L7
            r0.onImpression()
        L7:
            return
    }

    public synchronized void attachNativeAd(com.tkay.nativead.api.NativeAd r1) {
            r0 = this;
            monitor-enter(r0)
            r0.mNativeAd = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    synchronized void clear() {
            r1 = this;
            monitor-enter(r1)
            com.tkay.nativead.api.NativeAd r0 = r1.mNativeAd     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Ld
            com.tkay.nativead.api.NativeAd r0 = r1.mNativeAd     // Catch: java.lang.Throwable -> La
            r0.clear(r1)     // Catch: java.lang.Throwable -> La
        La:
            r0 = 0
            r1.mNativeAd = r0     // Catch: java.lang.Throwable -> Lf
        Ld:
            monitor-exit(r1)
            return
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public void clearImpressionListener(int r2) {
            r1 = this;
            int r0 = r1.mNativeAdId
            if (r0 != r2) goto L7
            r2 = 0
            r1.mImpressionEventListener = r2
        L7:
            return
    }

    public void destory() {
            r1 = this;
            r0 = 0
            r1.mImpressionEventListener = r0
            return
    }

    protected boolean isAttachInWindow() {
            r1 = this;
            boolean r0 = r1.mIsInWindow
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.mIsInWindow = r0
            int r0 = r1.getVisibility()
            if (r0 != 0) goto Lf
            r1.callbackImpression()
        Lf:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            r1.mIsInWindow = r0
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            if (r2 != 0) goto Le
            int r1 = r0.getVisibility()
            if (r1 != 0) goto Le
            r0.callbackImpression()
        Le:
            return
    }

    protected void renderView(int r2, android.view.View r3, com.tkay.nativead.api.NativeAd.ImpressionEventListener r4) {
            r1 = this;
            android.view.View r0 = r1.mAdView
            if (r0 == 0) goto L7
            r1.removeView(r0)
        L7:
            r1.mAdView = r3
            r1.mNativeAdId = r2
            r1.mImpressionEventListener = r4
            r1.addView(r3)
            boolean r2 = r1.mIsInWindow
            if (r2 == 0) goto L1d
            int r2 = r1.getVisibility()
            if (r2 != 0) goto L1d
            r1.callbackImpression()
        L1d:
            return
    }
}
