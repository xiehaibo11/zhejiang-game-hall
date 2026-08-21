package com.alibaba.sdk.android.oss.model;

public class CompleteMultipartUploadRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private java.util.Map<java.lang.String, java.lang.String> callbackParam;
    private java.util.Map<java.lang.String, java.lang.String> callbackVars;
    private com.alibaba.sdk.android.oss.model.ObjectMetadata metadata;
    private java.lang.String objectKey;
    private java.util.List<com.alibaba.sdk.android.oss.model.PartETag> partETags;
    private java.lang.String uploadId;

    public CompleteMultipartUploadRequest(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r5) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.partETags = r0
            r1.setBucketName(r2)
            r1.setObjectKey(r3)
            r1.setUploadId(r4)
            r1.setPartETags(r5)
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getCallbackParam() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.callbackParam
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getCallbackVars() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.callbackVars
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

    public java.util.List<com.alibaba.sdk.android.oss.model.PartETag> getPartETags() {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r0 = r1.partETags
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

    public void setCallbackParam(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.callbackParam = r1
            return
    }

    public void setCallbackVars(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.callbackVars = r1
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

    public void setPartETags(java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r1) {
            r0 = this;
            r0.partETags = r1
            return
    }

    public void setUploadId(java.lang.String r1) {
            r0 = this;
            r0.uploadId = r1
            return
    }
}
