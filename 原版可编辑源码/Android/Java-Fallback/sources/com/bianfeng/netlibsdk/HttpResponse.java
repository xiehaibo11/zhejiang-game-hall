package com.bianfeng.netlibsdk;

public class HttpResponse {
    private final java.io.InputStream mContent;
    private final int mContentLength;
    private final java.util.List<com.bianfeng.netlibsdk.Header> mHeaders;
    private final int mStatusCode;

    public HttpResponse(int r3, java.util.List<com.bianfeng.netlibsdk.Header> r4) {
            r2 = this;
            r0 = -1
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public HttpResponse(int r1, java.util.List<com.bianfeng.netlibsdk.Header> r2, int r3, java.io.InputStream r4) {
            r0 = this;
            r0.<init>()
            r0.mStatusCode = r1
            r0.mHeaders = r2
            r0.mContentLength = r3
            r0.mContent = r4
            return
    }

    public final java.io.InputStream getContent() {
            r1 = this;
            java.io.InputStream r0 = r1.mContent
            return r0
    }

    public final int getContentLength() {
            r1 = this;
            int r0 = r1.mContentLength
            return r0
    }

    public final java.util.List<com.bianfeng.netlibsdk.Header> getHeaders() {
            r1 = this;
            java.util.List<com.bianfeng.netlibsdk.Header> r0 = r1.mHeaders
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public final int getStatusCode() {
            r1 = this;
            int r0 = r1.mStatusCode
            return r0
    }
}
