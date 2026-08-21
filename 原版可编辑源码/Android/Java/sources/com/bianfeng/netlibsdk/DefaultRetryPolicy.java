package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;

public class DefaultRetryPolicy implements RetryPolicy {
    public static final float DEFAULT_BACKOFF_MULT = 1.0f;
    public static final int DEFAULT_MAX_RETRIES = 1;
    public static final int DEFAULT_TIMEOUT_MS = 2500;
    private final float mBackoffMultiplier;
    private int mCurrentRetryCount;
    private int mCurrentTimeoutMs;
    private final int mMaxNumRetries;

    public DefaultRetryPolicy() {
        this(2500, 1, 1.0f);
    }

    public DefaultRetryPolicy(int i, int i2, float f) {
        this.mCurrentTimeoutMs = i;
        this.mMaxNumRetries = i2;
        this.mBackoffMultiplier = f;
    }

    @Override
    public int getCurrentTimeout() {
        return this.mCurrentTimeoutMs;
    }

    @Override
    public int getCurrentRetryCount() {
        return this.mCurrentRetryCount;
    }

    @Override
    public void retry(NetException netException) throws NetException {
        this.mCurrentRetryCount++;
        int i = this.mCurrentTimeoutMs;
        this.mCurrentTimeoutMs = i + ((int) (i * this.mBackoffMultiplier));
        if (!hasAttemptRemaining()) {
            throw netException;
        }
    }

    protected boolean hasAttemptRemaining() {
        return this.mCurrentRetryCount <= this.mMaxNumRetries;
    }
}
