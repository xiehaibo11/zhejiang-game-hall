package com.bianfeng.netlibsdk;

public class DefaultRetryPolicy implements com.bianfeng.netlibsdk.RetryPolicy {
    public static final float DEFAULT_BACKOFF_MULT = 1.0f;
    public static final int DEFAULT_MAX_RETRIES = 1;
    public static final int DEFAULT_TIMEOUT_MS = 2500;
    private final float mBackoffMultiplier;
    private int mCurrentRetryCount;
    private int mCurrentTimeoutMs;
    private final int mMaxNumRetries;

    public DefaultRetryPolicy() {
            r3 = this;
            r0 = 2500(0x9c4, float:3.503E-42)
            r1 = 1
            r2 = 1065353216(0x3f800000, float:1.0)
            r3.<init>(r0, r1, r2)
            return
    }

    public DefaultRetryPolicy(int r1, int r2, float r3) {
            r0 = this;
            r0.<init>()
            r0.mCurrentTimeoutMs = r1
            r0.mMaxNumRetries = r2
            r0.mBackoffMultiplier = r3
            return
    }

    @Override
    public int getCurrentRetryCount() {
            r1 = this;
            int r0 = r1.mCurrentRetryCount
            return r0
    }

    @Override
    public int getCurrentTimeout() {
            r1 = this;
            int r0 = r1.mCurrentTimeoutMs
            return r0
    }

    protected boolean hasAttemptRemaining() {
            r2 = this;
            int r0 = r2.mCurrentRetryCount
            int r1 = r2.mMaxNumRetries
            if (r0 > r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public void retry(com.bianfeng.netlibsdk.utils.NetException r4) throws com.bianfeng.netlibsdk.utils.NetException {
            r3 = this;
            int r0 = r3.mCurrentRetryCount
            int r0 = r0 + 1
            r3.mCurrentRetryCount = r0
            int r0 = r3.mCurrentTimeoutMs
            float r1 = (float) r0
            float r2 = r3.mBackoffMultiplier
            float r1 = r1 * r2
            int r1 = (int) r1
            int r0 = r0 + r1
            r3.mCurrentTimeoutMs = r0
            boolean r0 = r3.hasAttemptRemaining()
            if (r0 == 0) goto L18
            return
        L18:
            throw r4
    }
}
