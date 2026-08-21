package com.alibaba.sdk.android.oss.internal;

abstract class HttpMessage {
    private java.io.InputStream content;
    private long contentLength;
    private java.util.Map<java.lang.String, java.lang.String> headers;
    private java.lang.String stringBody;

    HttpMessage() {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap r0 = new com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap
            r0.<init>()
            r1.headers = r0
            return
    }

    public void addHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            r0.put(r2, r3)
            return
    }

    public void close() throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.content
            if (r0 == 0) goto La
            r0.close()
            r0 = 0
            r1.content = r0
        La:
            return
    }

    public java.io.InputStream getContent() {
            r1 = this;
            java.io.InputStream r0 = r1.content
            return r0
    }

    public long getContentLength() {
            r2 = this;
            long r0 = r2.contentLength
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            return r0
    }

    public java.lang.String getStringBody() {
            r1 = this;
            java.lang.String r0 = r1.stringBody
            return r0
    }

    public void setContent(java.io.InputStream r1) {
            r0 = this;
            r0.content = r1
            return
    }

    public void setContentLength(long r1) {
            r0 = this;
            r0.contentLength = r1
            return
    }

    public void setHeaders(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            if (r0 != 0) goto Lb
            com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap r0 = new com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap
            r0.<init>()
            r1.headers = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            if (r0 == 0) goto L1a
            int r0 = r0.size()
            if (r0 <= 0) goto L1a
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            r0.clear()
        L1a:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            r0.putAll(r2)
            return
    }

    public void setStringBody(java.lang.String r1) {
            r0 = this;
            r0.stringBody = r1
            return
    }
}
