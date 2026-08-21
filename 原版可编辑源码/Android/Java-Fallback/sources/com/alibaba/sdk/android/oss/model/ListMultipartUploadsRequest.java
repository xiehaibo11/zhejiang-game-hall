package com.alibaba.sdk.android.oss.model;

public class ListMultipartUploadsRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private java.lang.String delimiter;
    private java.lang.String encodingType;
    private java.lang.String keyMarker;
    private java.lang.Integer maxUploads;
    private java.lang.String prefix;
    private java.lang.String uploadIdMarker;

    public ListMultipartUploadsRequest(java.lang.String r1) {
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

    public java.lang.String getDelimiter() {
            r1 = this;
            java.lang.String r0 = r1.delimiter
            return r0
    }

    public java.lang.String getEncodingType() {
            r1 = this;
            java.lang.String r0 = r1.encodingType
            return r0
    }

    public java.lang.String getKeyMarker() {
            r1 = this;
            java.lang.String r0 = r1.keyMarker
            return r0
    }

    public java.lang.Integer getMaxUploads() {
            r1 = this;
            java.lang.Integer r0 = r1.maxUploads
            return r0
    }

    public java.lang.String getPrefix() {
            r1 = this;
            java.lang.String r0 = r1.prefix
            return r0
    }

    public java.lang.String getUploadIdMarker() {
            r1 = this;
            java.lang.String r0 = r1.uploadIdMarker
            return r0
    }

    public void setDelimiter(java.lang.String r1) {
            r0 = this;
            r0.delimiter = r1
            return
    }

    public void setEncodingType(java.lang.String r1) {
            r0 = this;
            r0.encodingType = r1
            return
    }

    public void setKeyMarker(java.lang.String r1) {
            r0 = this;
            r0.keyMarker = r1
            return
    }

    public void setMaxUploads(java.lang.Integer r1) {
            r0 = this;
            r0.maxUploads = r1
            return
    }

    public void setPrefix(java.lang.String r1) {
            r0 = this;
            r0.prefix = r1
            return
    }

    public void setUploadIdMarker(java.lang.String r1) {
            r0 = this;
            r0.uploadIdMarker = r1
            return
    }
}
