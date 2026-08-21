package com.alibaba.sdk.android.oss.model;

import com.alibaba.sdk.android.oss.model.MultipartUploadRequest;

public class MultipartUploadRequest<T extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest> extends com.alibaba.sdk.android.oss.model.OSSRequest {
    protected java.lang.String bucketName;
    protected java.util.Map<java.lang.String, java.lang.String> callbackParam;
    protected java.util.Map<java.lang.String, java.lang.String> callbackVars;
    protected com.alibaba.sdk.android.oss.model.ObjectMetadata metadata;
    protected java.lang.String objectKey;
    protected long partSize;
    protected com.alibaba.sdk.android.oss.callback.OSSProgressCallback<T> progressCallback;
    protected java.lang.String uploadFilePath;
    protected java.lang.String uploadId;
    protected android.net.Uri uploadUri;

    public MultipartUploadRequest(java.lang.String r2, java.lang.String r3, android.net.Uri r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public MultipartUploadRequest(java.lang.String r3, java.lang.String r4, android.net.Uri r5, com.alibaba.sdk.android.oss.model.ObjectMetadata r6) {
            r2 = this;
            r2.<init>()
            r0 = 262144(0x40000, double:1.295163E-318)
            r2.partSize = r0
            r2.setBucketName(r3)
            r2.setObjectKey(r4)
            r2.setUploadUri(r5)
            r2.setMetadata(r6)
            return
    }

    public MultipartUploadRequest(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public MultipartUploadRequest(java.lang.String r3, java.lang.String r4, java.lang.String r5, com.alibaba.sdk.android.oss.model.ObjectMetadata r6) {
            r2 = this;
            r2.<init>()
            r0 = 262144(0x40000, double:1.295163E-318)
            r2.partSize = r0
            r2.setBucketName(r3)
            r2.setObjectKey(r4)
            r2.setUploadFilePath(r5)
            r2.setMetadata(r6)
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

    public long getPartSize() {
            r2 = this;
            long r0 = r2.partSize
            return r0
    }

    public com.alibaba.sdk.android.oss.callback.OSSProgressCallback<T> getProgressCallback() {
            r1 = this;
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback<T extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest> r0 = r1.progressCallback
            return r0
    }

    public java.lang.String getUploadFilePath() {
            r1 = this;
            java.lang.String r0 = r1.uploadFilePath
            return r0
    }

    public java.lang.String getUploadId() {
            r1 = this;
            java.lang.String r0 = r1.uploadId
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

    public void setPartSize(long r1) {
            r0 = this;
            r0.partSize = r1
            return
    }

    public void setProgressCallback(com.alibaba.sdk.android.oss.callback.OSSProgressCallback<T> r1) {
            r0 = this;
            r0.progressCallback = r1
            return
    }

    public void setUploadFilePath(java.lang.String r1) {
            r0 = this;
            r0.uploadFilePath = r1
            return
    }

    public void setUploadId(java.lang.String r1) {
            r0 = this;
            r0.uploadId = r1
            return
    }

    public void setUploadUri(android.net.Uri r1) {
            r0 = this;
            r0.uploadUri = r1
            return
    }
}
