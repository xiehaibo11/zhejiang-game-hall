package com.alibaba.sdk.android.oss.model;

public class AbortMultipartUploadRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private java.lang.String objectKey;
    private java.lang.String uploadId;

    public AbortMultipartUploadRequest(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setObjectKey(r2)
            r0.setUploadId(r3)
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.lang.String getObjectKey() {
            r1 = this;
            java.lang.String r0 = r1.objectKey
            return r0
    }

    public java.lang.String getUploadId() {
            r1 = this;
            java.lang.String r0 = r1.uploadId
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setObjectKey(java.lang.String r1) {
            r0 = this;
            r0.objectKey = r1
            return
    }

    public void setUploadId(java.lang.String r1) {
            r0 = this;
            r0.uploadId = r1
            return
    }
}
