package com.alibaba.sdk.android.oss.model;

public class ListObjectsRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private static final int MAX_RETURNED_KEYS_LIMIT = 1000;
    private java.lang.String bucketName;
    private java.lang.String delimiter;
    private java.lang.String encodingType;
    private java.lang.String marker;
    private java.lang.Integer maxKeys;
    private java.lang.String prefix;

    public ListObjectsRequest() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ListObjectsRequest(java.lang.String r7) {
            r6 = this;
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ListObjectsRequest(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.Integer r5) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setPrefix(r2)
            r0.setMarker(r3)
            r0.setDelimiter(r4)
            if (r5 == 0) goto L14
            r0.setMaxKeys(r5)
        L14:
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

    public java.lang.String getMarker() {
            r1 = this;
            java.lang.String r0 = r1.marker
            return r0
    }

    public java.lang.Integer getMaxKeys() {
            r1 = this;
            java.lang.Integer r0 = r1.maxKeys
            return r0
    }

    public java.lang.String getPrefix() {
            r1 = this;
            java.lang.String r0 = r1.prefix
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
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

    public void setMarker(java.lang.String r1) {
            r0 = this;
            r0.marker = r1
            return
    }

    public void setMaxKeys(java.lang.Integer r3) {
            r2 = this;
            int r0 = r3.intValue()
            if (r0 < 0) goto L11
            int r0 = r3.intValue()
            r1 = 1000(0x3e8, float:1.401E-42)
            if (r0 > r1) goto L11
            r2.maxKeys = r3
            return
        L11:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Maxkeys should less can not exceed 1000."
            r3.<init>(r0)
            throw r3
    }

    public void setPrefix(java.lang.String r1) {
            r0 = this;
            r0.prefix = r1
            return
    }
}
