package com.alibaba.sdk.android.oss.model;

public class UploadPartRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private java.lang.String md5Digest;
    private java.lang.String objectKey;
    private byte[] partContent;
    private int partNumber;
    private com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest> progressCallback;
    private java.lang.String uploadId;

    public UploadPartRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public UploadPartRequest(java.lang.String r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = this;
            r0.<init>()
            r0.bucketName = r1
            r0.objectKey = r2
            r0.uploadId = r3
            r0.partNumber = r4
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.lang.String getMd5Digest() {
            r1 = this;
            java.lang.String r0 = r1.md5Digest
            return r0
    }

    public java.lang.String getObjectKey() {
            r1 = this;
            java.lang.String r0 = r1.objectKey
            return r0
    }

    public byte[] getPartContent() {
            r1 = this;
            byte[] r0 = r1.partContent
            return r0
    }

    public int getPartNumber() {
            r1 = this;
            int r0 = r1.partNumber
            return r0
    }

    public com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest> getProgressCallback() {
            r1 = this;
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest> r0 = r1.progressCallback
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

    public void setMd5Digest(java.lang.String r1) {
            r0 = this;
            r0.md5Digest = r1
            return
    }

    public void setObjectKey(java.lang.String r1) {
            r0 = this;
            r0.objectKey = r1
            return
    }

    public void setPartContent(byte[] r1) {
            r0 = this;
            r0.partContent = r1
            return
    }

    public void setPartNumber(int r1) {
            r0 = this;
            r0.partNumber = r1
            return
    }

    public void setProgressCallback(com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest> r1) {
            r0 = this;
            r0.progressCallback = r1
            return
    }

    public void setUploadId(java.lang.String r1) {
            r0 = this;
            r0.uploadId = r1
            return
    }
}
