package com.alibaba.sdk.android.oss.model;

public class GetObjectRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private java.lang.String objectKey;
    private com.alibaba.sdk.android.oss.callback.OSSProgressCallback progressListener;
    private com.alibaba.sdk.android.oss.model.Range range;
    private java.util.Map<java.lang.String, java.lang.String> requestHeaders;
    private java.lang.String xOssProcess;

    public GetObjectRequest(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setObjectKey(r2)
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

    public com.alibaba.sdk.android.oss.callback.OSSProgressCallback getProgressListener() {
            r1 = this;
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r0 = r1.progressListener
            return r0
    }

    public com.alibaba.sdk.android.oss.model.Range getRange() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Range r0 = r1.range
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getRequestHeaders() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.requestHeaders
            return r0
    }

    public java.lang.String getxOssProcess() {
            r1 = this;
            java.lang.String r0 = r1.xOssProcess
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

    public void setProgressListener(com.alibaba.sdk.android.oss.callback.OSSProgressCallback<com.alibaba.sdk.android.oss.model.GetObjectRequest> r1) {
            r0 = this;
            r0.progressListener = r1
            return
    }

    public void setRange(com.alibaba.sdk.android.oss.model.Range r1) {
            r0 = this;
            r0.range = r1
            return
    }

    public void setRequestHeaders(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.requestHeaders = r1
            return
    }

    public void setxOssProcess(java.lang.String r1) {
            r0 = this;
            r0.xOssProcess = r1
            return
    }
}
