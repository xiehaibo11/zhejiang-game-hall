package com.tkay.nativead.api;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import com.tkay.nativead.api.NativeAd;

/* JADX INFO: loaded from: classes3.dex */
public class TYNativeAdView extends FrameLayout {
    private static final String TAG = TYNativeAdView.class.getSimpleName();
    View mAdView;
    NativeAd.ImpressionEventListener mImpressionEventListener;
    boolean mIsInWindow;
    NativeAd mNativeAd;
    int mNativeAdId;

    public TYNativeAdView(Context context) {
        super(context);
    }

    public TYNativeAdView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYNativeAdView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    protected void renderView(int i, View view, NativeAd.ImpressionEventListener impressionEventListener) {
        View view2 = this.mAdView;
        if (view2 != null) {
            removeView(view2);
        }
        this.mAdView = view;
        this.mNativeAdId = i;
        this.mImpressionEventListener = impressionEventListener;
        addView(view);
        if (this.mIsInWindow && getVisibility() == 0) {
            callbackImpression();
        }
    }

    public synchronized void attachNativeAd(NativeAd nativeAd) {
        this.mNativeAd = nativeAd;
    }

    synchronized void clear() {
        if (this.mNativeAd != null) {
            try {
                this.mNativeAd.clear(this);
            } catch (Throwable unused) {
            }
            this.mNativeAd = null;
        }
    }

    public void clearImpressionListener(int i) {
        if (this.mNativeAdId == i) {
            this.mImpressionEventListener = null;
        }
    }

    @Override // android.view.View
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (i == 0 && getVisibility() == 0) {
            callbackImpression();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mIsInWindow = true;
        if (getVisibility() == 0) {
            callbackImpression();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.mIsInWindow = false;
    }

    private void callbackImpression() {
        NativeAd.ImpressionEventListener impressionEventListener = this.mImpressionEventListener;
        if (impressionEventListener != null) {
            impressionEventListener.onImpression();
        }
    }

    protected boolean isAttachInWindow() {
        return this.mIsInWindow;
    }

    public void destory() {
        this.mImpressionEventListener = null;
    }
}
