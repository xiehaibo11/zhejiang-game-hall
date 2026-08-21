package org.cocos2dx.lib;

class ShouldStartLoadingWorker implements java.lang.Runnable {
    private java.util.concurrent.CountDownLatch mLatch;
    private boolean[] mResult;
    private final java.lang.String mUrlString;
    private final int mViewTag;

    ShouldStartLoadingWorker(java.util.concurrent.CountDownLatch r1, boolean[] r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.mLatch = r1
            r0.mResult = r2
            r0.mViewTag = r3
            r0.mUrlString = r4
            return
    }

    @Override
    public void run() {
            r3 = this;
            boolean[] r0 = r3.mResult
            int r1 = r3.mViewTag
            java.lang.String r2 = r3.mUrlString
            boolean r1 = org.cocos2dx.lib.Cocos2dxWebViewHelper._shouldStartLoading(r1, r2)
            r2 = 0
            r0[r2] = r1
            java.util.concurrent.CountDownLatch r0 = r3.mLatch
            r0.countDown()
            return
    }
}
