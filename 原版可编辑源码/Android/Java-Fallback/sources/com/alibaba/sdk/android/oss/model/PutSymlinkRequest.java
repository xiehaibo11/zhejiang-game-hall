package com.alibaba.sdk.android.oss.model;

public class PutSymlinkRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private com.alibaba.sdk.android.oss.model.ObjectMetadata metadata;
    private java.lang.String objectKey;
    private java.lang.String targetObjectName;

    public PutSymlinkRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public com.alibaba.sdk.android.oss.model.ObjectMetadata getMetadata() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = r1.metadata
            return r0
    }

    public java.lang.String getObjectKey() {
            r1 = this;
            java.lang.String r0 = r1.objectKey
            return r0
    }

    public java.lang.String getTargetObjectName() {
            r1 = this;
            java.lang.String r0 = r1.targetObjectName
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setMetadata(com.alibaba.sdk.android.oss.model.ObjectMetadata r1) {
            r0 = this;
            r0.metadata = r1
            return
    }

    public void setObjectKey(java.lang.String r1) {
            r0 = this;
            r0.objectKey = r1
            return
    }

    public void setTargetObjectName(java.lang.String r1) {
            r0 = this;
            r0.targetObjectName = r1
            return
    }
}
