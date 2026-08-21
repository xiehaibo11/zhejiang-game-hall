package com.tkay.splashad.api;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;

public class TYSplashSkipInfo {
    public static final String TAG = TYSplashSkipInfo.class.getSimpleName();
    long mCallbackInterval;
    ViewGroup mContainer;
    long mCountDownDuration;
    View mSkipView;
    TYSplashSkipAdListener mTYSplashSkipAdListener;

    public TYSplashSkipInfo(View view, long j, long j2, TYSplashSkipAdListener tYSplashSkipAdListener) {
        this.mSkipView = view;
        this.mCountDownDuration = j;
        this.mCallbackInterval = j2;
        this.mTYSplashSkipAdListener = tYSplashSkipAdListener;
        if (j < 2000) {
            Log.e(TAG, "mCountDownDuration is less than or equal to 2000, reset to 2000");
            this.mCountDownDuration = 2000L;
        }
        long j3 = this.mCallbackInterval;
        if (j3 <= 0) {
            Log.e(TAG, "mCallbackInterval is less than or equal to 0, reset to 1000");
            this.mCallbackInterval = 1000L;
        } else if (j3 < 20) {
            Log.e(TAG, "mCallbackInterval is less than 10, reset to 20");
            this.mCallbackInterval = 20L;
        }
    }

    public TYSplashSkipInfo(View view, TYSplashSkipAdListener tYSplashSkipAdListener) {
        this(view, 5000L, 1000L, tYSplashSkipAdListener);
    }

    public void setContainer(ViewGroup viewGroup) {
        this.mContainer = viewGroup;
    }

    public ViewGroup getContainer() {
        return this.mContainer;
    }

    public View getSkipView() {
        return this.mSkipView;
    }

    public long getCountDownDuration() {
        return this.mCountDownDuration;
    }

    public long getCallbackInterval() {
        return this.mCallbackInterval;
    }

    public TYSplashSkipAdListener getTYSplashSkipAdListener() {
        return this.mTYSplashSkipAdListener;
    }

    public void destroy() {
        View view = this.mSkipView;
        if (view != null) {
            view.setOnClickListener(null);
            this.mSkipView = null;
        }
        this.mTYSplashSkipAdListener = null;
    }

    public boolean canUseCustomSkipView() {
        return this.mSkipView != null;
    }
}
