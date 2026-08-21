package com.tkay.splashad.a;

public abstract class b implements com.tkay.core.common.b.a {
    private volatile boolean isAdTimeout;
    private volatile boolean mHasReturn;
    private java.lang.String mRequestId;
    private final com.tkay.core.common.j.a timeOutHandler;
    private final com.tkay.core.common.j.b timeoutRunnable;


    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mHasReturn = r0
            r1.isAdTimeout = r0
            com.tkay.core.common.j.a r0 = com.tkay.core.common.j.c.a()
            r1.timeOutHandler = r0
            com.tkay.splashad.a.b$1 r0 = new com.tkay.splashad.a.b$1
            r0.<init>(r1)
            r1.timeoutRunnable = r0
            return
    }

    static boolean access$000(com.tkay.splashad.a.b r0) {
            boolean r0 = r0.mHasReturn
            return r0
    }

    static boolean access$102(com.tkay.splashad.a.b r0, boolean r1) {
            r0.isAdTimeout = r1
            return r1
    }

    static java.lang.String access$200(com.tkay.splashad.a.b r0) {
            java.lang.String r0 = r0.mRequestId
            return r0
    }

    @Override
    public void onAdLoadFail(com.tkay.core.api.AdError r3) {
            r2 = this;
            com.tkay.core.common.j.a r0 = r2.timeOutHandler
            com.tkay.core.common.j.b r1 = r2.timeoutRunnable
            r0.a(r1)
            boolean r0 = r2.mHasReturn
            if (r0 != 0) goto L13
            r0 = 1
            r2.mHasReturn = r0
            java.lang.String r0 = r2.mRequestId
            r2.onNoAdError(r0, r3)
        L13:
            return
    }

    @Override
    public void onAdLoaded() {
            r2 = this;
            com.tkay.core.common.j.a r0 = r2.timeOutHandler
            com.tkay.core.common.j.b r1 = r2.timeoutRunnable
            r0.a(r1)
            boolean r0 = r2.mHasReturn
            if (r0 != 0) goto L15
            r0 = 1
            r2.mHasReturn = r0
            java.lang.String r0 = r2.mRequestId
            boolean r1 = r2.isAdTimeout
            r2.onAdLoaded(r0, r1)
        L15:
            return
    }

    public abstract void onAdLoaded(java.lang.String r1, boolean r2);

    public abstract void onNoAdError(java.lang.String r1, com.tkay.core.api.AdError r2);

    public abstract void onTimeout(java.lang.String r1);

    public void setRequestId(java.lang.String r1) {
            r0 = this;
            r0.mRequestId = r1
            return
    }

    public void startCountDown(int r5) {
            r4 = this;
            com.tkay.core.common.j.a r0 = r4.timeOutHandler
            com.tkay.core.common.j.b r1 = r4.timeoutRunnable
            long r2 = (long) r5
            r5 = 0
            r0.a(r1, r2, r5)
            return
    }
}
