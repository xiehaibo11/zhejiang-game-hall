package com.alibaba.sdk.android.oss.model;

public class HeadObjectResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private com.alibaba.sdk.android.oss.model.ObjectMetadata metadata;

    public HeadObjectResult() {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = new com.alibaba.sdk.android.oss.model.ObjectMetadata
            r0.<init>()
            r1.metadata = r0
            return
    }

    public com.alibaba.sdk.android.oss.model.ObjectMetadata getMetadata() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = r1.metadata
            return r0
    }

    public void setMetadata(com.alibaba.sdk.android.oss.model.ObjectMetadata r1) {
            r0 = this;
            r0.metadata = r1
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
            com.alibaba.sdk.android.oss.model.ObjectMetadata r1 = r3.metadata
            java.lang.String r1 = r1.toString()
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "HeadObjectResult<%s>:\n metadata:%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
