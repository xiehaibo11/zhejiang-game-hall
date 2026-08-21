package com.loopj.android.http;

public final class HttpGet extends cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase {
    public static final java.lang.String METHOD_NAME = "GET";

    public HttpGet() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpGet(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            java.net.URI r1 = java.net.URI.create(r1)
            r0.setURI(r1)
            return
    }

    public HttpGet(java.net.URI r1) {
            r0 = this;
            r0.<init>()
            r0.setURI(r1)
            return
    }

    @Override
    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = "GET"
            return r0
    }
}
