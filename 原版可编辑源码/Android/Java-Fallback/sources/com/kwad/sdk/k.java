package com.kwad.sdk;

public final class k implements com.kwad.framework.filedownloader.a.b {
    private final okhttp3.OkHttpClient ahg;
    private final okhttp3.Request.Builder ahh;
    private okhttp3.Request ahi;
    private okhttp3.Response ahj;

    public static class a implements com.kwad.framework.filedownloader.f.c.b {
        private volatile okhttp3.OkHttpClient ahg;
        private okhttp3.OkHttpClient.Builder ahk;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public a(boolean r1) {
                r0 = this;
                r0.<init>()
                if (r1 == 0) goto Lc
                okhttp3.OkHttpClient$Builder r1 = com.kwad.sdk.k.xQ()
            L9:
                r0.ahk = r1
                return
            Lc:
                okhttp3.OkHttpClient$Builder r1 = com.kwad.sdk.k.xR()
                goto L9
        }

        @Override
        public final com.kwad.framework.filedownloader.a.b aZ(java.lang.String r4) {
                r3 = this;
                okhttp3.OkHttpClient r0 = r3.ahg
                if (r0 != 0) goto L25
                java.lang.Class<com.kwad.sdk.k$a> r0 = com.kwad.sdk.k.a.class
                monitor-enter(r0)
                okhttp3.OkHttpClient r1 = r3.ahg     // Catch: java.lang.Throwable -> L22
                if (r1 != 0) goto L20
                okhttp3.OkHttpClient$Builder r1 = r3.ahk     // Catch: java.lang.Throwable -> L22
                if (r1 == 0) goto L16
                okhttp3.OkHttpClient$Builder r1 = r3.ahk     // Catch: java.lang.Throwable -> L22
                okhttp3.OkHttpClient r1 = r1.build()     // Catch: java.lang.Throwable -> L22
                goto L1b
            L16:
                okhttp3.OkHttpClient r1 = new okhttp3.OkHttpClient     // Catch: java.lang.Throwable -> L22
                r1.<init>()     // Catch: java.lang.Throwable -> L22
            L1b:
                r3.ahg = r1     // Catch: java.lang.Throwable -> L22
                r1 = 0
                r3.ahk = r1     // Catch: java.lang.Throwable -> L22
            L20:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
                goto L25
            L22:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
                throw r4
            L25:
                com.kwad.sdk.k r0 = new com.kwad.sdk.k
                okhttp3.OkHttpClient r1 = r3.ahg
                r2 = 0
                r0.<init>(r4, r1, r2)
                return r0
        }
    }

    private k(java.lang.String r2, okhttp3.OkHttpClient r3) {
            r1 = this;
            okhttp3.Request$Builder r0 = new okhttp3.Request$Builder
            r0.<init>()
            okhttp3.Request$Builder r2 = r0.url(r2)
            r1.<init>(r2, r3)
            return
    }

    k(java.lang.String r1, okhttp3.OkHttpClient r2, byte r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private k(okhttp3.Request.Builder r1, okhttp3.OkHttpClient r2) {
            r0 = this;
            r0.<init>()
            r0.ahh = r1
            r0.ahg = r2
            return
    }

    private java.lang.String bT(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "Content-Type"
            java.lang.String r0 = r4.aY(r0)
            java.lang.String r1 = com.kwad.sdk.utils.q.getExtension(r5)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r3 = ".apk"
            if (r2 != 0) goto L4a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L19
            goto L4a
        L19:
            android.webkit.MimeTypeMap r5 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r5 = r5.getExtensionFromMimeType(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L34
            goto L42
        L34:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "."
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r3 = r1.toString()
        L42:
            r0.append(r3)
            java.lang.String r5 = r0.toString()
            return r5
        L4a:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L63
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            long r0 = java.lang.System.currentTimeMillis()
            r5.append(r0)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
        L63:
            return r5
    }

    private static okhttp3.OkHttpClient.Builder xO() {
            okhttp3.OkHttpClient$Builder r0 = new okhttp3.OkHttpClient$Builder
            r0.<init>()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = 10000(0x2710, double:4.9407E-320)
            okhttp3.OkHttpClient$Builder r0 = r0.connectTimeout(r2, r1)
            com.kwad.sdk.j.a r1 = new com.kwad.sdk.j.a
            r1.<init>()
            okhttp3.OkHttpClient$Builder r0 = r0.addInterceptor(r1)
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = 0
            okhttp3.OkHttpClient$Builder r0 = r0.readTimeout(r2, r1)
            okhttp3.ConnectionPool r1 = new okhttp3.ConnectionPool
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r3 = 6
            r4 = 60000(0xea60, double:2.9644E-319)
            r1.<init>(r3, r4, r2)
            okhttp3.OkHttpClient$Builder r0 = r0.connectionPool(r1)
            r1 = 1
            okhttp3.OkHttpClient$Builder r0 = r0.retryOnConnectionFailure(r1)
            return r0
    }

    private static okhttp3.OkHttpClient.Builder xP() {
            okhttp3.OkHttpClient$Builder r0 = new okhttp3.OkHttpClient$Builder
            r0.<init>()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = 10000(0x2710, double:4.9407E-320)
            okhttp3.OkHttpClient$Builder r0 = r0.connectTimeout(r2, r1)
            com.kwad.sdk.j.a r1 = new com.kwad.sdk.j.a
            r1.<init>()
            okhttp3.OkHttpClient$Builder r0 = r0.addInterceptor(r1)
            r1 = 1
            okhttp3.Protocol[] r2 = new okhttp3.Protocol[r1]
            okhttp3.Protocol r3 = okhttp3.Protocol.HTTP_1_1
            r4 = 0
            r2[r4] = r3
            java.util.List r2 = okhttp3.internal.Util.immutableList(r2)
            okhttp3.OkHttpClient$Builder r0 = r0.protocols(r2)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r3 = 0
            okhttp3.OkHttpClient$Builder r0 = r0.readTimeout(r3, r2)
            okhttp3.ConnectionPool r2 = new okhttp3.ConnectionPool
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4 = 6
            r5 = 60000(0xea60, double:2.9644E-319)
            r2.<init>(r4, r5, r3)
            okhttp3.OkHttpClient$Builder r0 = r0.connectionPool(r2)
            okhttp3.OkHttpClient$Builder r0 = r0.retryOnConnectionFailure(r1)
            return r0
    }

    static okhttp3.OkHttpClient.Builder xQ() {
            okhttp3.OkHttpClient$Builder r0 = xP()
            return r0
    }

    static okhttp3.OkHttpClient.Builder xR() {
            okhttp3.OkHttpClient$Builder r0 = xO()
            return r0
    }

    @Override
    public final java.lang.String aY(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "Content-Disposition"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L54
            okhttp3.Response r0 = r2.ahj     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = r0.header(r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.bq(r0)     // Catch: java.lang.Exception -> L3a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L33
            okhttp3.Response r3 = r2.ahj     // Catch: java.lang.Exception -> L3a
            okhttp3.Request r3 = r3.request()     // Catch: java.lang.Exception -> L3a
            okhttp3.HttpUrl r3 = r3.url()     // Catch: java.lang.Exception -> L3a
            java.util.List r3 = r3.pathSegments()     // Catch: java.lang.Exception -> L3a
            int r0 = r3.size()     // Catch: java.lang.Exception -> L3a
            int r0 = r0 + (-1)
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L3a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L3a
            goto L3c
        L33:
            okhttp3.Response r0 = r2.ahj     // Catch: java.lang.Exception -> L3a
            java.lang.String r3 = r0.header(r3)     // Catch: java.lang.Exception -> L3a
            return r3
        L3a:
            java.lang.String r3 = ""
        L3c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "attachment; filename=\""
            r0.<init>(r1)
            java.lang.String r3 = r2.bT(r3)
            r0.append(r3)
            java.lang.String r3 = "\""
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L54:
            okhttp3.Response r0 = r2.ahj
            if (r0 != 0) goto L5a
            r3 = 0
            return r3
        L5a:
            java.lang.String r3 = r0.header(r3)
            return r3
    }

    @Override
    public final void addHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            okhttp3.Request$Builder r0 = r1.ahh
            r0.addHeader(r2, r3)
            return
    }

    @Override
    public final void execute() {
            r2 = this;
            okhttp3.Request r0 = r2.ahi
            if (r0 != 0) goto Lc
            okhttp3.Request$Builder r0 = r2.ahh
            okhttp3.Request r0 = r0.build()
            r2.ahi = r0
        Lc:
            okhttp3.OkHttpClient r0 = r2.ahg
            okhttp3.Request r1 = r2.ahi
            okhttp3.Call r0 = r0.newCall(r1)
            okhttp3.Response r0 = r0.execute()
            r2.ahj = r0
            return
    }

    @Override
    public final java.io.InputStream getInputStream() {
            r2 = this;
            okhttp3.Response r0 = r2.ahj
            if (r0 == 0) goto L19
            okhttp3.ResponseBody r0 = r0.body()
            java.io.InputStream r0 = r0.byteStream()
            java.lang.Class<com.kwad.sdk.service.a.h> r1 = com.kwad.sdk.service.a.h.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.h r1 = (com.kwad.sdk.service.a.h) r1
            java.io.InputStream r0 = r1.wrapInputStream(r0)
            return r0
        L19:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Please invoke #execute first!"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final int getResponseCode() {
            r2 = this;
            okhttp3.Response r0 = r2.ahj
            if (r0 == 0) goto L9
            int r0 = r0.code()
            return r0
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Please invoke #execute first!"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> ue() {
            r1 = this;
            okhttp3.Request r0 = r1.ahi
            if (r0 != 0) goto Lc
            okhttp3.Request$Builder r0 = r1.ahh
            okhttp3.Request r0 = r0.build()
            r1.ahi = r0
        Lc:
            okhttp3.Request r0 = r1.ahi
            okhttp3.Headers r0 = r0.headers()
            java.util.Map r0 = r0.toMultimap()
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> uf() {
            r1 = this;
            okhttp3.Response r0 = r1.ahj
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            okhttp3.Headers r0 = r0.headers()
            java.util.Map r0 = r0.toMultimap()
            return r0
    }

    @Override
    public final void ug() {
            r2 = this;
            r0 = 0
            r2.ahi = r0
            okhttp3.Response r1 = r2.ahj
            if (r1 == 0) goto L16
            okhttp3.ResponseBody r1 = r1.body()
            if (r1 == 0) goto L16
            okhttp3.Response r1 = r2.ahj
            okhttp3.ResponseBody r1 = r1.body()
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
        L16:
            r2.ahj = r0
            return
    }
}
