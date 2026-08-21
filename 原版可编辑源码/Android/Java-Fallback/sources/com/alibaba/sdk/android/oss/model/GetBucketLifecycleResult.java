package com.alibaba.sdk.android.oss.model;

public class GetBucketLifecycleResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> mLifecycleRules;

    public GetBucketLifecycleResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public void addLifecycleRule(com.alibaba.sdk.android.oss.model.BucketLifecycleRule r2) {
            r1 = this;
            java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> r0 = r1.mLifecycleRules
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mLifecycleRules = r0
        Lb:
            java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> r0 = r1.mLifecycleRules
            r0.add(r2)
            return
    }

    public java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> getlifecycleRules() {
            r1 = this;
            java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> r0 = r1.mLifecycleRules
            return r0
    }

    public void setLifecycleRules(java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> r1) {
            r0 = this;
            r0.mLifecycleRules = r1
            return
    }
}
