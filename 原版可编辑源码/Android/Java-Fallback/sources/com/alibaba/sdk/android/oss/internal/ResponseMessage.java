package com.alibaba.sdk.android.oss.internal;

public class ResponseMessage extends com.alibaba.sdk.android.oss.internal.HttpMessage {
    private com.alibaba.sdk.android.oss.internal.RequestMessage request;
    private okhttp3.Response response;
    private int statusCode;

    public ResponseMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void addHeader(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            super.addHeader(r1, r2)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r0 = this;
            super.close()
            return
    }

    @Override
    public java.io.InputStream getContent() {
            r1 = this;
            java.io.InputStream r0 = super.getContent()
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            long r0 = super.getContentLength()
            return r0
    }

    @Override
    public java.util.Map getHeaders() {
            r1 = this;
            java.util.Map r0 = super.getHeaders()
            return r0
    }

    public com.alibaba.sdk.android.oss.internal.RequestMessage getRequest() {
            r1 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = r1.request
            return r0
    }

    public okhttp3.Response getResponse() {
            r1 = this;
            okhttp3.Response r0 = r1.response
            return r0
    }

    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }

    @Override
    public java.lang.String getStringBody() {
            r1 = this;
            java.lang.String r0 = super.getStringBody()
            return r0
    }

    @Override
    public void setContent(java.io.InputStream r1) {
            r0 = this;
            super.setContent(r1)
            return
    }

    @Override
    public void setContentLength(long r1) {
            r0 = this;
            super.setContentLength(r1)
            return
    }

    @Override
    public void setHeaders(java.util.Map r1) {
            r0 = this;
            super.setHeaders(r1)
            return
    }

    public void setRequest(com.alibaba.sdk.android.oss.internal.RequestMessage r1) {
            r0 = this;
            r0.request = r1
            return
    }

    public void setResponse(okhttp3.Response r1) {
            r0 = this;
            r0.response = r1
            return
    }

    public void setStatusCode(int r1) {
            r0 = this;
            r0.statusCode = r1
            return
    }

    @Override
    public void setStringBody(java.lang.String r1) {
            r0 = this;
            super.setStringBody(r1)
            return
    }
}
