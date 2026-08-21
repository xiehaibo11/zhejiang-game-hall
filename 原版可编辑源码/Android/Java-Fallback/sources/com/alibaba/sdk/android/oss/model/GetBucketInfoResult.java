package com.alibaba.sdk.android.oss.model;

public class GetBucketInfoResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private com.alibaba.sdk.android.oss.model.OSSBucketSummary bucket;

    public GetBucketInfoResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.alibaba.sdk.android.oss.model.OSSBucketSummary getBucket() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.OSSBucketSummary r0 = r1.bucket
            return r0
    }

    public void setBucket(com.alibaba.sdk.android.oss.model.OSSBucketSummary r1) {
            r0 = this;
            r0.bucket = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = super.toString()
            r2 = 0
            r0[r2] = r1
            com.alibaba.sdk.android.oss.model.OSSBucketSummary r1 = r3.bucket
            java.lang.String r1 = r1.toString()
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "GetBucketInfoResult<%s>:\n bucket:%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
