package org.cocos2dx.lib;

import java.util.concurrent.CountDownLatch;

class ShouldStartLoadingWorker implements Runnable {
    private CountDownLatch mLatch;
    private boolean[] mResult;
    private final String mUrlString;
    private final int mViewTag;

    ShouldStartLoadingWorker(CountDownLatch r1, boolean[] r2, int r3, String r4) {
        this.mLatch = r1;
        this.mResult = r2;
        this.mViewTag = r3;
        this.mUrlString = r4;
    }

    @Override
    public void run() {
        this.mResult[0] = Cocos2dxWebViewHelper._shouldStartLoading(this.mViewTag, this.mUrlString);
        this.mLatch.countDown();
    }
}
