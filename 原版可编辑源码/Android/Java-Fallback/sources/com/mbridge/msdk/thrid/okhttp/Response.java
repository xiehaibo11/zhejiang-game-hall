package com.mbridge.msdk.thrid.okhttp;

public final class Response implements java.io.Closeable {

    @javax.annotation.Nullable
    final com.mbridge.msdk.thrid.okhttp.ResponseBody body;

    @javax.annotation.Nullable
    private volatile com.mbridge.msdk.thrid.okhttp.CacheControl cacheControl;

    @javax.annotation.Nullable
    final com.mbridge.msdk.thrid.okhttp.Response cacheResponse;
    final int code;

    @javax.annotation.Nullable
    final com.mbridge.msdk.thrid.okhttp.Handshake handshake;
    final com.mbridge.msdk.thrid.okhttp.Headers headers;
    final java.lang.String message;

    @javax.annotation.Nullable
    final com.mbridge.msdk.thrid.okhttp.Response networkResponse;

    @javax.annotation.Nullable
    final com.mbridge.msdk.thrid.okhttp.Response priorResponse;
    final com.mbridge.msdk.thrid.okhttp.Protocol protocol;
    final long receivedResponseAtMillis;
    final com.mbridge.msdk.thrid.okhttp.Request request;
    final long sentRequestAtMillis;

    public static class Builder {

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.ResponseBody body;

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.Response cacheResponse;
        int code;

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.Handshake handshake;
        com.mbridge.msdk.thrid.okhttp.Headers.Builder headers;
        java.lang.String message;

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.Response networkResponse;

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.Response priorResponse;

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.Protocol protocol;
        long receivedResponseAtMillis;

        @javax.annotation.Nullable
        com.mbridge.msdk.thrid.okhttp.Request request;
        long sentRequestAtMillis;

        public Builder() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.code = r0
                com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Headers$Builder
                r0.<init>()
                r1.headers = r0
                return
        }

        Builder(com.mbridge.msdk.thrid.okhttp.Response r3) {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.code = r0
                com.mbridge.msdk.thrid.okhttp.Request r0 = r3.request
                r2.request = r0
                com.mbridge.msdk.thrid.okhttp.Protocol r0 = r3.protocol
                r2.protocol = r0
                int r0 = r3.code
                r2.code = r0
                java.lang.String r0 = r3.message
                r2.message = r0
                com.mbridge.msdk.thrid.okhttp.Handshake r0 = r3.handshake
                r2.handshake = r0
                com.mbridge.msdk.thrid.okhttp.Headers r0 = r3.headers
                com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = r0.newBuilder()
                r2.headers = r0
                com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r3.body
                r2.body = r0
                com.mbridge.msdk.thrid.okhttp.Response r0 = r3.networkResponse
                r2.networkResponse = r0
                com.mbridge.msdk.thrid.okhttp.Response r0 = r3.cacheResponse
                r2.cacheResponse = r0
                com.mbridge.msdk.thrid.okhttp.Response r0 = r3.priorResponse
                r2.priorResponse = r0
                long r0 = r3.sentRequestAtMillis
                r2.sentRequestAtMillis = r0
                long r0 = r3.receivedResponseAtMillis
                r2.receivedResponseAtMillis = r0
                return
        }

        private void checkPriorResponse(com.mbridge.msdk.thrid.okhttp.Response r2) {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.ResponseBody r2 = r2.body
                if (r2 != 0) goto L5
                return
            L5:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "priorResponse.body != null"
                r2.<init>(r0)
                throw r2
        }

        private void checkSupportResponse(java.lang.String r2, com.mbridge.msdk.thrid.okhttp.Response r3) {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r3.body
                if (r0 != 0) goto L56
                com.mbridge.msdk.thrid.okhttp.Response r0 = r3.networkResponse
                if (r0 != 0) goto L3f
                com.mbridge.msdk.thrid.okhttp.Response r0 = r3.cacheResponse
                if (r0 != 0) goto L28
                com.mbridge.msdk.thrid.okhttp.Response r3 = r3.priorResponse
                if (r3 != 0) goto L11
                return
            L11:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = ".priorResponse != null"
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                r3.<init>(r2)
                throw r3
            L28:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = ".cacheResponse != null"
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                r3.<init>(r2)
                throw r3
            L3f:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = ".networkResponse != null"
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                r3.<init>(r2)
                throw r3
            L56:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = ".body != null"
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                r3.<init>(r2)
                throw r3
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder addHeader(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = r1.headers
                r0.add(r2, r3)
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder body(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.ResponseBody r1) {
                r0 = this;
                r0.body = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response build() {
                r3 = this;
                com.mbridge.msdk.thrid.okhttp.Request r0 = r3.request
                if (r0 == 0) goto L3f
                com.mbridge.msdk.thrid.okhttp.Protocol r0 = r3.protocol
                if (r0 == 0) goto L37
                int r0 = r3.code
                if (r0 < 0) goto L1e
                java.lang.String r0 = r3.message
                if (r0 == 0) goto L16
                com.mbridge.msdk.thrid.okhttp.Response r0 = new com.mbridge.msdk.thrid.okhttp.Response
                r0.<init>(r3)
                return r0
            L16:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "message == null"
                r0.<init>(r1)
                throw r0
            L1e:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "code < 0: "
                r1.append(r2)
                int r2 = r3.code
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
            L37:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "protocol == null"
                r0.<init>(r1)
                throw r0
            L3f:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "request == null"
                r0.<init>(r1)
                throw r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder cacheResponse(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Response r2) {
                r1 = this;
                if (r2 == 0) goto L7
                java.lang.String r0 = "cacheResponse"
                r1.checkSupportResponse(r0, r2)
            L7:
                r1.cacheResponse = r2
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder code(int r1) {
                r0 = this;
                r0.code = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder handshake(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Handshake r1) {
                r0 = this;
                r0.handshake = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder header(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = r1.headers
                r0.set(r2, r3)
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder headers(com.mbridge.msdk.thrid.okhttp.Headers r1) {
                r0 = this;
                com.mbridge.msdk.thrid.okhttp.Headers$Builder r1 = r1.newBuilder()
                r0.headers = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder message(java.lang.String r1) {
                r0 = this;
                r0.message = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder networkResponse(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Response r2) {
                r1 = this;
                if (r2 == 0) goto L7
                java.lang.String r0 = "networkResponse"
                r1.checkSupportResponse(r0, r2)
            L7:
                r1.networkResponse = r2
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder priorResponse(@javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Response r1) {
                r0 = this;
                if (r1 == 0) goto L5
                r0.checkPriorResponse(r1)
            L5:
                r0.priorResponse = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder protocol(com.mbridge.msdk.thrid.okhttp.Protocol r1) {
                r0 = this;
                r0.protocol = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder receivedResponseAtMillis(long r1) {
                r0 = this;
                r0.receivedResponseAtMillis = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder removeHeader(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = r1.headers
                r0.removeAll(r2)
                return r1
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder request(com.mbridge.msdk.thrid.okhttp.Request r1) {
                r0 = this;
                r0.request = r1
                return r0
        }

        public com.mbridge.msdk.thrid.okhttp.Response.Builder sentRequestAtMillis(long r1) {
                r0 = this;
                r0.sentRequestAtMillis = r1
                return r0
        }
    }

    Response(com.mbridge.msdk.thrid.okhttp.Response.Builder r3) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.thrid.okhttp.Request r0 = r3.request
            r2.request = r0
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = r3.protocol
            r2.protocol = r0
            int r0 = r3.code
            r2.code = r0
            java.lang.String r0 = r3.message
            r2.message = r0
            com.mbridge.msdk.thrid.okhttp.Handshake r0 = r3.handshake
            r2.handshake = r0
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = r3.headers
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r0.build()
            r2.headers = r0
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r3.body
            r2.body = r0
            com.mbridge.msdk.thrid.okhttp.Response r0 = r3.networkResponse
            r2.networkResponse = r0
            com.mbridge.msdk.thrid.okhttp.Response r0 = r3.cacheResponse
            r2.cacheResponse = r0
            com.mbridge.msdk.thrid.okhttp.Response r0 = r3.priorResponse
            r2.priorResponse = r0
            long r0 = r3.sentRequestAtMillis
            r2.sentRequestAtMillis = r0
            long r0 = r3.receivedResponseAtMillis
            r2.receivedResponseAtMillis = r0
            return
    }

    @javax.annotation.Nullable
    public com.mbridge.msdk.thrid.okhttp.ResponseBody body() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r1.body
            return r0
    }

    public com.mbridge.msdk.thrid.okhttp.CacheControl cacheControl() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.CacheControl r0 = r1.cacheControl
            if (r0 == 0) goto L5
            goto Ld
        L5:
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r1.headers
            com.mbridge.msdk.thrid.okhttp.CacheControl r0 = com.mbridge.msdk.thrid.okhttp.CacheControl.parse(r0)
            r1.cacheControl = r0
        Ld:
            return r0
    }

    @javax.annotation.Nullable
    public com.mbridge.msdk.thrid.okhttp.Response cacheResponse() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Response r0 = r1.cacheResponse
            return r0
    }

    public java.util.List<com.mbridge.msdk.thrid.okhttp.Challenge> challenges() {
            r2 = this;
            int r0 = r2.code
            r1 = 401(0x191, float:5.62E-43)
            if (r0 != r1) goto L9
            java.lang.String r0 = "WWW-Authenticate"
            goto Lf
        L9:
            r1 = 407(0x197, float:5.7E-43)
            if (r0 != r1) goto L18
            java.lang.String r0 = "Proxy-Authenticate"
        Lf:
            com.mbridge.msdk.thrid.okhttp.Headers r1 = r2.headers()
            java.util.List r0 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.parseChallenges(r1, r0)
            return r0
        L18:
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
    }

    @Override
    public void close() {
            r2 = this;
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r2.body
            if (r0 == 0) goto L8
            r0.close()
            return
        L8:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "response is not eligible for a body and must not be closed"
            r0.<init>(r1)
            throw r0
    }

    public int code() {
            r1 = this;
            int r0 = r1.code
            return r0
    }

    @javax.annotation.Nullable
    public com.mbridge.msdk.thrid.okhttp.Handshake handshake() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Handshake r0 = r1.handshake
            return r0
    }

    @javax.annotation.Nullable
    public java.lang.String header(java.lang.String r2) {
            r1 = this;
            r0 = 0
            java.lang.String r2 = r1.header(r2, r0)
            return r2
    }

    @javax.annotation.Nullable
    public java.lang.String header(java.lang.String r2, @javax.annotation.Nullable java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r1.headers
            java.lang.String r2 = r0.get(r2)
            if (r2 == 0) goto L9
            r3 = r2
        L9:
            return r3
    }

    public com.mbridge.msdk.thrid.okhttp.Headers headers() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r1.headers
            return r0
    }

    public java.util.List<java.lang.String> headers(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r1.headers
            java.util.List r2 = r0.values(r2)
            return r2
    }

    public boolean isRedirect() {
            r2 = this;
            int r0 = r2.code
            r1 = 307(0x133, float:4.3E-43)
            if (r0 == r1) goto Lf
            r1 = 308(0x134, float:4.32E-43)
            if (r0 == r1) goto Lf
            switch(r0) {
                case 300: goto Lf;
                case 301: goto Lf;
                case 302: goto Lf;
                case 303: goto Lf;
                default: goto Ld;
            }
        Ld:
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public boolean isSuccessful() {
            r2 = this;
            int r0 = r2.code
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto Lc
            r1 = 300(0x12c, float:4.2E-43)
            if (r0 >= r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public java.lang.String message() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }

    @javax.annotation.Nullable
    public com.mbridge.msdk.thrid.okhttp.Response networkResponse() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Response r0 = r1.networkResponse
            return r0
    }

    public com.mbridge.msdk.thrid.okhttp.Response.Builder newBuilder() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Response$Builder
            r0.<init>(r1)
            return r0
    }

    public com.mbridge.msdk.thrid.okhttp.ResponseBody peekBody(long r4) throws java.io.IOException {
            r3 = this;
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r3.body
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r0.source()
            r0.request(r4)
            com.mbridge.msdk.thrid.okio.Buffer r0 = r0.buffer()
            com.mbridge.msdk.thrid.okio.Buffer r0 = r0.clone()
            long r1 = r0.size()
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r1 <= 0) goto L25
            com.mbridge.msdk.thrid.okio.Buffer r1 = new com.mbridge.msdk.thrid.okio.Buffer
            r1.<init>()
            r1.write(r0, r4)
            r0.clear()
            r0 = r1
        L25:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r4 = r3.body
            com.mbridge.msdk.thrid.okhttp.MediaType r4 = r4.contentType()
            long r1 = r0.size()
            com.mbridge.msdk.thrid.okhttp.ResponseBody r4 = com.mbridge.msdk.thrid.okhttp.ResponseBody.create(r4, r1, r0)
            return r4
    }

    @javax.annotation.Nullable
    public com.mbridge.msdk.thrid.okhttp.Response priorResponse() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Response r0 = r1.priorResponse
            return r0
    }

    public com.mbridge.msdk.thrid.okhttp.Protocol protocol() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = r1.protocol
            return r0
    }

    public long receivedResponseAtMillis() {
            r2 = this;
            long r0 = r2.receivedResponseAtMillis
            return r0
    }

    public com.mbridge.msdk.thrid.okhttp.Request request() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Request r0 = r1.request
            return r0
    }

    public long sentRequestAtMillis() {
            r2 = this;
            long r0 = r2.sentRequestAtMillis
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Response{protocol="
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = r2.protocol
            r0.append(r1)
            java.lang.String r1 = ", code="
            r0.append(r1)
            int r1 = r2.code
            r0.append(r1)
            java.lang.String r1 = ", message="
            r0.append(r1)
            java.lang.String r1 = r2.message
            r0.append(r1)
            java.lang.String r1 = ", url="
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Request r1 = r2.request
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
