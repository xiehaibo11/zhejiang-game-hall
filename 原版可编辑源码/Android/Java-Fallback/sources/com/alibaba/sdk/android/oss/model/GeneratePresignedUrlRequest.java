package com.alibaba.sdk.android.oss.model;

public class GeneratePresignedUrlRequest {
    private java.lang.String bucketName;
    private java.lang.String contentMD5;
    private java.lang.String contentType;
    private long expiration;
    private java.lang.String key;
    private com.alibaba.sdk.android.oss.common.HttpMethod method;
    private java.lang.String process;
    private java.util.Map<java.lang.String, java.lang.String> queryParam;

    public GeneratePresignedUrlRequest(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r0 = 3600(0xe10, double:1.7786E-320)
            r2.<init>(r3, r4, r0)
            return
    }

    public GeneratePresignedUrlRequest(java.lang.String r7, java.lang.String r8, long r9) {
            r6 = this;
            com.alibaba.sdk.android.oss.common.HttpMethod r5 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r3 = 3600(0xe10, double:1.7786E-320)
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r5)
            return
    }

    public GeneratePresignedUrlRequest(java.lang.String r2, java.lang.String r3, long r4, com.alibaba.sdk.android.oss.common.HttpMethod r6) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.queryParam = r0
            r1.bucketName = r2
            r1.key = r3
            r1.expiration = r4
            r1.method = r6
            return
    }

    public void addQueryParameter(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.queryParam
            r0.put(r2, r3)
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.lang.String getContentMD5() {
            r1 = this;
            java.lang.String r0 = r1.contentMD5
            return r0
    }

    public java.lang.String getContentType() {
            r1 = this;
            java.lang.String r0 = r1.contentType
            return r0
    }

    public long getExpiration() {
            r2 = this;
            long r0 = r2.expiration
            return r0
    }

    public java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = r1.key
            return r0
    }

    public com.alibaba.sdk.android.oss.common.HttpMethod getMethod() {
            r1 = this;
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = r1.method
            return r0
    }

    public java.lang.String getProcess() {
            r1 = this;
            java.lang.String r0 = r1.process
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getQueryParameter() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.queryParam
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setContentMD5(java.lang.String r1) {
            r0 = this;
            r0.contentMD5 = r1
            return
    }

    public void setContentType(java.lang.String r1) {
            r0 = this;
            r0.contentType = r1
            return
    }

    public void setExpiration(long r1) {
            r0 = this;
            r0.expiration = r1
            return
    }

    public void setKey(java.lang.String r1) {
            r0 = this;
            r0.key = r1
            return
    }

    public void setMethod(com.alibaba.sdk.android.oss.common.HttpMethod r2) {
            r1 = this;
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            if (r2 == r0) goto L11
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            if (r2 != r0) goto L9
            goto L11
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Only GET or PUT is supported!"
            r2.<init>(r0)
            throw r2
        L11:
            r1.method = r2
            return
    }

    public void setProcess(java.lang.String r1) {
            r0 = this;
            r0.process = r1
            return
    }

    public void setQueryParameter(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            if (r2 == 0) goto L17
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.queryParam
            if (r0 == 0) goto L11
            int r0 = r0.size()
            if (r0 <= 0) goto L11
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.queryParam
            r0.clear()
        L11:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.queryParam
            r0.putAll(r2)
            return
        L17:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "The argument 'queryParameter' is null."
            r2.<init>(r0)
            throw r2
    }
}
