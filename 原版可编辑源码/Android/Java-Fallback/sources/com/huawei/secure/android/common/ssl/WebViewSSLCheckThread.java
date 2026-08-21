package com.huawei.secure.android.common.ssl;

public class WebViewSSLCheckThread extends java.lang.Thread {
    private static final java.lang.String i = null;
    private javax.net.ssl.SSLSocketFactory a;
    private javax.net.ssl.HostnameVerifier b;
    private org.apache.http.conn.ssl.SSLSocketFactory c;
    private org.apache.http.conn.ssl.X509HostnameVerifier d;
    private android.webkit.SslErrorHandler e;
    private java.lang.String f;
    private com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback g;
    private android.content.Context h;

    public interface Callback {
        void onCancel(android.content.Context r1, java.lang.String r2);

        void onProceed(android.content.Context r1, java.lang.String r2);
    }

    static class a implements okhttp3.Callback {
        final com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback a;
        final android.content.Context b;
        final java.lang.String c;
        final android.webkit.SslErrorHandler d;

        a(com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback r1, android.content.Context r2, java.lang.String r3, android.webkit.SslErrorHandler r4) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.<init>()
                return
        }

        @Override
        public void onFailure(okhttp3.Call r3, java.io.IOException r4) {
                r2 = this;
                java.lang.String r3 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.a()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onFailure , IO Exception : "
                r0.append(r1)
                java.lang.String r4 = r4.getMessage()
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                com.huawei.secure.android.common.ssl.util.g.b(r3, r4)
                com.huawei.secure.android.common.ssl.WebViewSSLCheckThread$Callback r3 = r2.a
                if (r3 == 0) goto L28
                android.content.Context r4 = r2.b
                java.lang.String r0 = r2.c
                r3.onCancel(r4, r0)
                goto L2d
            L28:
                android.webkit.SslErrorHandler r3 = r2.d
                r3.cancel()
            L2d:
                return
        }

        @Override
        public void onResponse(okhttp3.Call r2, okhttp3.Response r3) throws java.io.IOException {
                r1 = this;
                java.lang.String r2 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.a()
                java.lang.String r3 = "onResponse . proceed"
                com.huawei.secure.android.common.ssl.util.g.b(r2, r3)
                com.huawei.secure.android.common.ssl.WebViewSSLCheckThread$Callback r2 = r1.a
                if (r2 == 0) goto L15
                android.content.Context r3 = r1.b
                java.lang.String r0 = r1.c
                r2.onProceed(r3, r0)
                goto L1a
            L15:
                android.webkit.SslErrorHandler r2 = r1.d
                r2.proceed()
            L1a:
                return
        }
    }

    static {
            java.lang.Class<com.huawei.secure.android.common.ssl.WebViewSSLCheckThread> r0 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.class
            java.lang.String r0 = r0.getSimpleName()
            com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i = r0
            return
    }

    public WebViewSSLCheckThread() {
            r0 = this;
            r0.<init>()
            return
    }

    public WebViewSSLCheckThread(android.webkit.SslErrorHandler r2, java.lang.String r3, android.content.Context r4) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.io.IOException, java.security.KeyManagementException, java.security.KeyStoreException, java.lang.IllegalAccessException {
            r1 = this;
            r1.<init>()
            r1.setSslErrorHandler(r2)
            r1.setUrl(r3)
            r1.setContext(r4)
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r2 = new com.huawei.secure.android.common.ssl.SecureSSLSocketFactory
            com.huawei.secure.android.common.ssl.c r3 = new com.huawei.secure.android.common.ssl.c
            r3.<init>(r4)
            r2.<init>(r3)
            r1.setSslSocketFactory(r2)
            org.apache.http.conn.ssl.X509HostnameVerifier r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.STRICT_HOSTNAME_VERIFIER
            r1.setHostnameVerifier(r2)
            com.huawei.secure.android.common.ssl.SecureApacheSSLSocketFactory r2 = new com.huawei.secure.android.common.ssl.SecureApacheSSLSocketFactory     // Catch: java.security.UnrecoverableKeyException -> L2d
            r3 = 0
            com.huawei.secure.android.common.ssl.c r0 = new com.huawei.secure.android.common.ssl.c     // Catch: java.security.UnrecoverableKeyException -> L2d
            r0.<init>(r4)     // Catch: java.security.UnrecoverableKeyException -> L2d
            r2.<init>(r3, r0)     // Catch: java.security.UnrecoverableKeyException -> L2d
            r1.setApacheSSLSocketFactory(r2)     // Catch: java.security.UnrecoverableKeyException -> L2d
            goto L48
        L2d:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "WebViewSSLCheckThread: UnrecoverableKeyException : "
            r4.append(r0)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r3, r2)
        L48:
            org.apache.http.conn.ssl.X509HostnameVerifier r2 = com.huawei.secure.android.common.ssl.SecureApacheSSLSocketFactory.STRICT_HOSTNAME_VERIFIER
            r1.setApacheHostnameVerifier(r2)
            return
    }

    @java.lang.Deprecated
    public WebViewSSLCheckThread(android.webkit.SslErrorHandler r1, java.lang.String r2, javax.net.ssl.SSLSocketFactory r3, javax.net.ssl.HostnameVerifier r4) {
            r0 = this;
            r0.<init>()
            r0.setSslErrorHandler(r1)
            r0.setUrl(r2)
            r0.setSslSocketFactory(r3)
            r0.setHostnameVerifier(r4)
            return
    }

    @java.lang.Deprecated
    public WebViewSSLCheckThread(android.webkit.SslErrorHandler r1, java.lang.String r2, org.apache.http.conn.ssl.SSLSocketFactory r3, org.apache.http.conn.ssl.X509HostnameVerifier r4) {
            r0 = this;
            r0.<init>()
            r0.setSslErrorHandler(r1)
            r0.setUrl(r2)
            r0.setApacheSSLSocketFactory(r3)
            r0.setApacheHostnameVerifier(r4)
            return
    }

    @java.lang.Deprecated
    public WebViewSSLCheckThread(android.webkit.SslErrorHandler r1, java.lang.String r2, org.apache.http.conn.ssl.SSLSocketFactory r3, org.apache.http.conn.ssl.X509HostnameVerifier r4, com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback r5, android.content.Context r6) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            r0.f = r2
            r0.c = r3
            r0.d = r4
            r0.g = r5
            r0.h = r6
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            return r0
    }

    private void b() {
            r3 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            java.lang.String r1 = "callbackCancel: "
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            com.huawei.secure.android.common.ssl.WebViewSSLCheckThread$Callback r0 = r3.g
            if (r0 == 0) goto L13
            android.content.Context r1 = r3.h
            java.lang.String r2 = r3.f
            r0.onCancel(r1, r2)
            return
        L13:
            android.webkit.SslErrorHandler r0 = r3.e
            if (r0 == 0) goto L23
            java.lang.String r0 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            java.lang.String r1 = "callbackCancel 2: "
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            android.webkit.SslErrorHandler r0 = r3.e
            r0.cancel()
        L23:
            return
    }

    private void c() {
            r3 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            java.lang.String r1 = "callbackProceed: "
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            com.huawei.secure.android.common.ssl.WebViewSSLCheckThread$Callback r0 = r3.g
            if (r0 == 0) goto L13
            android.content.Context r1 = r3.h
            java.lang.String r2 = r3.f
            r0.onProceed(r1, r2)
            return
        L13:
            android.webkit.SslErrorHandler r0 = r3.e
            if (r0 == 0) goto L1a
            r0.proceed()
        L1a:
            return
    }

    public static void checkServerCertificateWithOK(android.webkit.SslErrorHandler r1, java.lang.String r2, android.content.Context r3) {
            r0 = 0
            checkServerCertificateWithOK(r1, r2, r3, r0)
            return
    }

    public static void checkServerCertificateWithOK(android.webkit.SslErrorHandler r3, java.lang.String r4, android.content.Context r5, com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback r6) {
            if (r3 == 0) goto L67
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L67
            if (r5 != 0) goto Lb
            goto L67
        Lb:
            okhttp3.OkHttpClient$Builder r0 = new okhttp3.OkHttpClient$Builder
            r0.<init>()
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r1 = new com.huawei.secure.android.common.ssl.SecureSSLSocketFactory     // Catch: java.lang.Exception -> L48
            com.huawei.secure.android.common.ssl.c r2 = new com.huawei.secure.android.common.ssl.c     // Catch: java.lang.Exception -> L48
            r2.<init>(r5)     // Catch: java.lang.Exception -> L48
            r1.<init>(r2)     // Catch: java.lang.Exception -> L48
            r1.setContext(r5)     // Catch: java.lang.Exception -> L48
            com.huawei.secure.android.common.ssl.c r2 = new com.huawei.secure.android.common.ssl.c     // Catch: java.lang.Exception -> L48
            r2.<init>(r5)     // Catch: java.lang.Exception -> L48
            r0.sslSocketFactory(r1, r2)     // Catch: java.lang.Exception -> L48
            org.apache.http.conn.ssl.X509HostnameVerifier r1 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.STRICT_HOSTNAME_VERIFIER     // Catch: java.lang.Exception -> L48
            r0.hostnameVerifier(r1)     // Catch: java.lang.Exception -> L48
            okhttp3.Request$Builder r1 = new okhttp3.Request$Builder     // Catch: java.lang.Exception -> L48
            r1.<init>()     // Catch: java.lang.Exception -> L48
            okhttp3.Request$Builder r1 = r1.url(r4)     // Catch: java.lang.Exception -> L48
            okhttp3.Request r1 = r1.build()     // Catch: java.lang.Exception -> L48
            okhttp3.OkHttpClient r0 = r0.build()     // Catch: java.lang.Exception -> L48
            okhttp3.Call r0 = r0.newCall(r1)     // Catch: java.lang.Exception -> L48
            com.huawei.secure.android.common.ssl.WebViewSSLCheckThread$a r1 = new com.huawei.secure.android.common.ssl.WebViewSSLCheckThread$a     // Catch: java.lang.Exception -> L48
            r1.<init>(r6, r5, r4, r3)     // Catch: java.lang.Exception -> L48
            r0.enqueue(r1)     // Catch: java.lang.Exception -> L48
            goto L66
        L48:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "checkServerCertificateWithOK: exception : "
            r6.append(r0)
            java.lang.String r4 = r4.getMessage()
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r5, r4)
            r3.cancel()
        L66:
            return
        L67:
            java.lang.String r3 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            java.lang.String r4 = "checkServerCertificateWithOK: handler or url or context is null"
            com.huawei.secure.android.common.ssl.util.g.b(r3, r4)
            return
    }

    public org.apache.http.conn.ssl.X509HostnameVerifier getApacheHostnameVerifier() {
            r1 = this;
            org.apache.http.conn.ssl.X509HostnameVerifier r0 = r1.d
            return r0
    }

    public org.apache.http.conn.ssl.SSLSocketFactory getApacheSSLSocketFactory() {
            r1 = this;
            org.apache.http.conn.ssl.SSLSocketFactory r0 = r1.c
            return r0
    }

    public com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback getCallback() {
            r1 = this;
            com.huawei.secure.android.common.ssl.WebViewSSLCheckThread$Callback r0 = r1.g
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.h
            return r0
    }

    public javax.net.ssl.HostnameVerifier getHostnameVerifier() {
            r1 = this;
            javax.net.ssl.HostnameVerifier r0 = r1.b
            return r0
    }

    public android.webkit.SslErrorHandler getSslErrorHandler() {
            r1 = this;
            android.webkit.SslErrorHandler r0 = r1.e
            return r0
    }

    public javax.net.ssl.SSLSocketFactory getSslSocketFactory() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            return r0
    }

    public java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    @Override
    public void run() {
            r8 = this;
            super.run()
            org.apache.http.conn.ssl.SSLSocketFactory r0 = r8.c
            r1 = 0
            if (r0 == 0) goto Ld5
            org.apache.http.conn.ssl.X509HostnameVerifier r0 = r8.d
            if (r0 == 0) goto Ld5
            android.webkit.SslErrorHandler r0 = r8.e
            if (r0 == 0) goto Lca
            java.lang.String r0 = r8.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1a
            goto Lca
        L1a:
            org.apache.http.conn.ssl.SSLSocketFactory r0 = r8.c     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.conn.ssl.X509HostnameVerifier r2 = r8.d     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r0.setHostnameVerifier(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.conn.ssl.SSLSocketFactory r0 = r8.c     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            boolean r0 = r0 instanceof com.huawei.secure.android.common.ssl.SecureApacheSSLSocketFactory     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            if (r0 == 0) goto L30
            org.apache.http.conn.ssl.SSLSocketFactory r0 = r8.c     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            com.huawei.secure.android.common.ssl.SecureApacheSSLSocketFactory r0 = (com.huawei.secure.android.common.ssl.SecureApacheSSLSocketFactory) r0     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            android.content.Context r2 = r8.h     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r0.setContext(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
        L30:
            org.apache.http.params.BasicHttpParams r0 = new org.apache.http.params.BasicHttpParams     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r0.<init>()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r2 = 30000(0x7530, float:4.2039E-41)
            org.apache.http.params.HttpConnectionParams.setConnectionTimeout(r0, r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.params.HttpConnectionParams.setSoTimeout(r0, r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.conn.scheme.SchemeRegistry r2 = new org.apache.http.conn.scheme.SchemeRegistry     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r2.<init>()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.conn.scheme.Scheme r3 = new org.apache.http.conn.scheme.Scheme     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.lang.String r4 = "https"
            org.apache.http.conn.ssl.SSLSocketFactory r5 = r8.c     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r6 = 443(0x1bb, float:6.21E-43)
            r3.<init>(r4, r5, r6)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r2.register(r3)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.conn.scheme.Scheme r3 = new org.apache.http.conn.scheme.Scheme     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.lang.String r4 = "http"
            org.apache.http.conn.scheme.PlainSocketFactory r5 = org.apache.http.conn.scheme.PlainSocketFactory.getSocketFactory()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r6 = 80
            r3.<init>(r4, r5, r6)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r2.register(r3)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager r3 = new org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r3.<init>(r0, r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.impl.client.DefaultHttpClient r2 = new org.apache.http.impl.client.DefaultHttpClient     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.client.methods.HttpGet r0 = new org.apache.http.client.methods.HttpGet     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r0.<init>()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.net.URI r3 = new java.net.URI     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.lang.String r4 = r8.f     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r3.<init>(r4)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r0.setURI(r3)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.HttpResponse r0 = r2.execute(r0)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.lang.String r2 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r3.<init>()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.lang.String r4 = "status code is : "
            r3.append(r4)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            org.apache.http.StatusLine r0 = r0.getStatusLine()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            int r0 = r0.getStatusCode()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            r3.append(r0)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            com.huawei.secure.android.common.ssl.util.g.c(r2, r0)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La4
            com.huawei.secure.android.common.ssl.util.f.a(r1)
            r8.c()
            return
        La2:
            r0 = move-exception
            goto Lc6
        La4:
            r0 = move-exception
            java.lang.String r2 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i     // Catch: java.lang.Throwable -> La2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2
            r3.<init>()     // Catch: java.lang.Throwable -> La2
            java.lang.String r4 = "run: exception : "
            r3.append(r4)     // Catch: java.lang.Throwable -> La2
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> La2
            r3.append(r0)     // Catch: java.lang.Throwable -> La2
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> La2
            com.huawei.secure.android.common.ssl.util.g.b(r2, r0)     // Catch: java.lang.Throwable -> La2
            r8.b()     // Catch: java.lang.Throwable -> La2
            com.huawei.secure.android.common.ssl.util.f.a(r1)
            return
        Lc6:
            com.huawei.secure.android.common.ssl.util.f.a(r1)
            throw r0
        Lca:
            java.lang.String r0 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i
            java.lang.String r1 = "sslErrorHandler or url is null"
            com.huawei.secure.android.common.ssl.util.g.b(r0, r1)
            r8.b()
            return
        Ld5:
            javax.net.ssl.SSLSocketFactory r0 = r8.a
            if (r0 == 0) goto L14a
            javax.net.ssl.HostnameVerifier r0 = r8.b
            if (r0 == 0) goto L14a
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Throwable -> L117 java.lang.Exception -> L11c
            java.lang.String r2 = r8.f     // Catch: java.lang.Throwable -> L117 java.lang.Exception -> L11c
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L117 java.lang.Exception -> L11c
            java.net.URLConnection r0 = r0.openConnection()     // Catch: java.lang.Throwable -> L117 java.lang.Exception -> L11c
            boolean r2 = r0 instanceof javax.net.ssl.HttpsURLConnection     // Catch: java.lang.Throwable -> L117 java.lang.Exception -> L11c
            if (r2 == 0) goto L10e
            javax.net.ssl.HttpsURLConnection r0 = (javax.net.ssl.HttpsURLConnection) r0     // Catch: java.lang.Throwable -> L117 java.lang.Exception -> L11c
            javax.net.ssl.SSLSocketFactory r1 = r8.a     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            r0.setSSLSocketFactory(r1)     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            javax.net.ssl.HostnameVerifier r1 = r8.b     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            r0.setHostnameVerifier(r1)     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            java.lang.String r1 = "GET"
            r0.setRequestMethod(r1)     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            r1 = 10000(0x2710, float:1.4013E-41)
            r0.setConnectTimeout(r1)     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            r1 = 20000(0x4e20, float:2.8026E-41)
            r0.setReadTimeout(r1)     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            r0.connect()     // Catch: java.lang.Exception -> L10c java.lang.Throwable -> L143
            r1 = r0
            goto L10e
        L10c:
            r1 = move-exception
            goto L120
        L10e:
            if (r1 == 0) goto L113
            r1.disconnect()
        L113:
            r8.c()
            return
        L117:
            r0 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
            goto L144
        L11c:
            r0 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
        L120:
            java.lang.String r2 = com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.i     // Catch: java.lang.Throwable -> L143
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L143
            r3.<init>()     // Catch: java.lang.Throwable -> L143
            java.lang.String r4 = "exception : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L143
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L143
            r3.append(r1)     // Catch: java.lang.Throwable -> L143
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L143
            com.huawei.secure.android.common.ssl.util.g.b(r2, r1)     // Catch: java.lang.Throwable -> L143
            r8.b()     // Catch: java.lang.Throwable -> L143
            if (r0 == 0) goto L142
            r0.disconnect()
        L142:
            return
        L143:
            r1 = move-exception
        L144:
            if (r0 == 0) goto L149
            r0.disconnect()
        L149:
            throw r1
        L14a:
            r8.b()
            return
    }

    public void setApacheHostnameVerifier(org.apache.http.conn.ssl.X509HostnameVerifier r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setApacheSSLSocketFactory(org.apache.http.conn.ssl.SSLSocketFactory r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setCallback(com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setContext(android.content.Context r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setHostnameVerifier(javax.net.ssl.HostnameVerifier r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setSslErrorHandler(android.webkit.SslErrorHandler r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setSslSocketFactory(javax.net.ssl.SSLSocketFactory r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setUrl(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }
}
