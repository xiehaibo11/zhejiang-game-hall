package com.alibaba.sdk.android.oss.model;

public class PutBucketLifecycleRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> lifecycleRules;
    private java.lang.String mBucketName;

    public PutBucketLifecycleRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.mBucketName
            return r0
    }

    public java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> getLifecycleRules() {
            r1 = this;
            java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> r0 = r1.lifecycleRules
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.mBucketName = r1
            return
    }

    public void setLifecycleRules(java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> r1) {
            r0 = this;
            r0.lifecycleRules = r1
            return
    }
}
