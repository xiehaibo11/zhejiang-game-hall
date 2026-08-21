package com.czhj.volley.toolbox;

public final class HttpResponse {
    private final int a;
    private final java.util.List<com.czhj.volley.Header> b;
    private final int c;
    private final java.io.InputStream d;

    public HttpResponse(int r3, java.util.List<com.czhj.volley.Header> r4) {
            r2 = this;
            r0 = -1
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public HttpResponse(int r1, java.util.List<com.czhj.volley.Header> r2, int r3, java.io.InputStream r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    public final java.io.InputStream getContent() {
            r1 = this;
            java.io.InputStream r0 = r1.d
            return r0
    }

    public final int getContentLength() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public final java.util.List<com.czhj.volley.Header> getHeaders() {
            r1 = this;
            java.util.List<com.czhj.volley.Header> r0 = r1.b
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public final int getStatusCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
