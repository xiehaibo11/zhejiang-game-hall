package com.alibaba.sdk.android.oss.model;

public class GetBucketLoggingResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private boolean mLoggingEnabled;
    private java.lang.String mTargetBucketName;
    private java.lang.String mTargetPrefix;

    public GetBucketLoggingResult() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mLoggingEnabled = r0
            return
    }

    public java.lang.String getTargetBucketName() {
            r1 = this;
            java.lang.String r0 = r1.mTargetBucketName
            return r0
    }

    public java.lang.String getTargetPrefix() {
            r1 = this;
            java.lang.String r0 = r1.mTargetPrefix
            return r0
    }

    public boolean loggingEnabled() {
            r1 = this;
            boolean r0 = r1.mLoggingEnabled
            return r0
    }

    public void setLoggingEnabled(boolean r1) {
            r0 = this;
            r0.mLoggingEnabled = r1
            return
    }

    public void setTargetBucketName(java.lang.String r1) {
            r0 = this;
            r0.mTargetBucketName = r1
            return
    }

    public void setTargetPrefix(java.lang.String r1) {
            r0 = this;
            r0.mTargetPrefix = r1
            return
    }
}
