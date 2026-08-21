package com.alibaba.sdk.android.oss.model;

public class GetBucketInfoRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;

    public GetBucketInfoRequest(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.bucketName = r1
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }
}
