package com.alibaba.sdk.android.oss.model;

public class PutBucketLoggingRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String mBucketName;
    private java.lang.String mTargetBucketName;
    private java.lang.String mTargetPrefix;

    public PutBucketLoggingRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.mBucketName
            return r0
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

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.mBucketName = r1
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
