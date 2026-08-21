package com.tkay.splashad.api;

public class TYSplashSkipInfo {
    public static final java.lang.String TAG = null;
    long mCallbackInterval;
    android.view.ViewGroup mContainer;
    long mCountDownDuration;
    android.view.View mSkipView;
    com.tkay.splashad.api.TYSplashSkipAdListener mTYSplashSkipAdListener;

    static {
            java.lang.Class<com.tkay.splashad.api.TYSplashSkipInfo> r0 = com.tkay.splashad.api.TYSplashSkipInfo.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.splashad.api.TYSplashSkipInfo.TAG = r0
            return
    }

    public TYSplashSkipInfo(android.view.View r1, long r2, long r4, com.tkay.splashad.api.TYSplashSkipAdListener r6) {
            r0 = this;
            r0.<init>()
            r0.mSkipView = r1
            r0.mCountDownDuration = r2
            r0.mCallbackInterval = r4
            r0.mTYSplashSkipAdListener = r6
            r4 = 2000(0x7d0, double:9.88E-321)
            int r1 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r1 >= 0) goto L1a
            java.lang.String r1 = com.tkay.splashad.api.TYSplashSkipInfo.TAG
            java.lang.String r2 = "mCountDownDuration is less than or equal to 2000, reset to 2000"
            android.util.Log.e(r1, r2)
            r0.mCountDownDuration = r4
        L1a:
            long r1 = r0.mCallbackInterval
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 > 0) goto L2e
            java.lang.String r1 = com.tkay.splashad.api.TYSplashSkipInfo.TAG
            java.lang.String r2 = "mCallbackInterval is less than or equal to 0, reset to 1000"
            android.util.Log.e(r1, r2)
            r1 = 1000(0x3e8, double:4.94E-321)
            r0.mCallbackInterval = r1
            return
        L2e:
            r3 = 20
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L3d
            java.lang.String r1 = com.tkay.splashad.api.TYSplashSkipInfo.TAG
            java.lang.String r2 = "mCallbackInterval is less than 10, reset to 20"
            android.util.Log.e(r1, r2)
            r0.mCallbackInterval = r3
        L3d:
            return
    }

    public TYSplashSkipInfo(android.view.View r8, com.tkay.splashad.api.TYSplashSkipAdListener r9) {
            r7 = this;
            r2 = 5000(0x1388, double:2.4703E-320)
            r4 = 1000(0x3e8, double:4.94E-321)
            r0 = r7
            r1 = r8
            r6 = r9
            r0.<init>(r1, r2, r4, r6)
            return
    }

    public boolean canUseCustomSkipView() {
            r1 = this;
            android.view.View r0 = r1.mSkipView
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public void destroy() {
            r2 = this;
            android.view.View r0 = r2.mSkipView
            r1 = 0
            if (r0 == 0) goto La
            r0.setOnClickListener(r1)
            r2.mSkipView = r1
        La:
            r2.mTYSplashSkipAdListener = r1
            return
    }

    public long getCallbackInterval() {
            r2 = this;
            long r0 = r2.mCallbackInterval
            return r0
    }

    public android.view.ViewGroup getContainer() {
            r1 = this;
            android.view.ViewGroup r0 = r1.mContainer
            return r0
    }

    public long getCountDownDuration() {
            r2 = this;
            long r0 = r2.mCountDownDuration
            return r0
    }

    public android.view.View getSkipView() {
            r1 = this;
            android.view.View r0 = r1.mSkipView
            return r0
    }

    public com.tkay.splashad.api.TYSplashSkipAdListener getTYSplashSkipAdListener() {
            r1 = this;
            com.tkay.splashad.api.TYSplashSkipAdListener r0 = r1.mTYSplashSkipAdListener
            return r0
    }

    public void setContainer(android.view.ViewGroup r1) {
            r0 = this;
            r0.mContainer = r1
            return
    }
}
