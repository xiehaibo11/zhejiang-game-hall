package com.alibaba.sdk.android.oss.model;

public class GetObjectResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private long contentLength;
    private com.alibaba.sdk.android.oss.model.ObjectMetadata metadata;
    private java.io.InputStream objectContent;

    public GetObjectResult() {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = new com.alibaba.sdk.android.oss.model.ObjectMetadata
            r0.<init>()
            r1.metadata = r0
            return
    }

    @Override
    public java.lang.Long getClientCRC() {
            r2 = this;
            java.io.InputStream r0 = r2.objectContent
            if (r0 == 0) goto L13
            boolean r1 = r0 instanceof com.alibaba.sdk.android.oss.internal.CheckCRC64DownloadInputStream
            if (r1 == 0) goto L13
            com.alibaba.sdk.android.oss.internal.CheckCRC64DownloadInputStream r0 = (com.alibaba.sdk.android.oss.internal.CheckCRC64DownloadInputStream) r0
            long r0 = r0.getClientCRC64()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            return r0
        L13:
            java.lang.Long r0 = super.getClientCRC()
            return r0
    }

    public long getContentLength() {
            r2 = this;
            long r0 = r2.contentLength
            return r0
    }

    public com.alibaba.sdk.android.oss.model.ObjectMetadata getMetadata() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = r1.metadata
            return r0
    }

    public java.io.InputStream getObjectContent() {
            r1 = this;
            java.io.InputStream r0 = r1.objectContent
            return r0
    }

    public void setContentLength(long r1) {
            r0 = this;
            r0.contentLength = r1
            return
    }

    public void setMetadata(com.alibaba.sdk.android.oss.model.ObjectMetadata r1) {
            r0 = this;
            r0.metadata = r1
            return
    }

    public void setObjectContent(java.io.InputStream r1) {
            r0 = this;
            r0.objectContent = r1
            return
    }
}
