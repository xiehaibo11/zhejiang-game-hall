package com.alibaba.sdk.android.oss.model;

public class AppendObjectRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private java.lang.Long initCRC64;
    private com.alibaba.sdk.android.oss.model.ObjectMetadata metadata;
    private java.lang.String objectKey;
    private long position;
    private com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest> progressCallback;
    private byte[] uploadData;
    private java.lang.String uploadFilePath;
    private android.net.Uri uploadUri;

    public AppendObjectRequest(java.lang.String r2, java.lang.String r3, android.net.Uri r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AppendObjectRequest(java.lang.String r1, java.lang.String r2, android.net.Uri r3, com.alibaba.sdk.android.oss.model.ObjectMetadata r4) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setObjectKey(r2)
            r0.setUploadUri(r3)
            r0.setMetadata(r4)
            return
    }

    public AppendObjectRequest(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AppendObjectRequest(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.alibaba.sdk.android.oss.model.ObjectMetadata r4) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setObjectKey(r2)
            r0.setUploadFilePath(r3)
            r0.setMetadata(r4)
            return
    }

    public AppendObjectRequest(java.lang.String r2, java.lang.String r3, byte[] r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AppendObjectRequest(java.lang.String r1, java.lang.String r2, byte[] r3, com.alibaba.sdk.android.oss.model.ObjectMetadata r4) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setObjectKey(r2)
            r0.setUploadData(r3)
            r0.setMetadata(r4)
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.lang.Long getInitCRC64() {
            r1 = this;
            java.lang.Long r0 = r1.initCRC64
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

    public long getPosition() {
            r2 = this;
            long r0 = r2.position
            return r0
    }

    public com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest> getProgressCallback() {
            r1 = this;
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest> r0 = r1.progressCallback
            return r0
    }

    public byte[] getUploadData() {
            r1 = this;
            byte[] r0 = r1.uploadData
            return r0
    }

    public java.lang.String getUploadFilePath() {
            r1 = this;
            java.lang.String r0 = r1.uploadFilePath
            return r0
    }

    public android.net.Uri getUploadUri() {
            r1 = this;
            android.net.Uri r0 = r1.uploadUri
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setInitCRC64(java.lang.Long r1) {
            r0 = this;
            r0.initCRC64 = r1
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

    public void setPosition(long r1) {
            r0 = this;
            r0.position = r1
            return
    }

    public void setProgressCallback(com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest> r1) {
            r0 = this;
            r0.progressCallback = r1
            return
    }

    public void setUploadData(byte[] r1) {
            r0 = this;
            r0.uploadData = r1
            return
    }

    public void setUploadFilePath(java.lang.String r1) {
            r0 = this;
            r0.uploadFilePath = r1
            return
    }

    public void setUploadUri(android.net.Uri r1) {
            r0 = this;
            r0.uploadUri = r1
            return
    }
}
