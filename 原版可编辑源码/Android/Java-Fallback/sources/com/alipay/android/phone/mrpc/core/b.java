package com.alipay.android.phone.mrpc.core;

public final class b implements org.apache.http.client.HttpClient {
    public static long a = 160;
    public static java.lang.String[] b;
    public static final org.apache.http.HttpRequestInterceptor c = null;
    public final org.apache.http.client.HttpClient d;
    public java.lang.RuntimeException e;
    public volatile com.alipay.android.phone.mrpc.core.b.b f;

    public class a implements org.apache.http.HttpRequestInterceptor {
        public final com.alipay.android.phone.mrpc.core.b a;

        public a(com.alipay.android.phone.mrpc.core.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public a(com.alipay.android.phone.mrpc.core.b r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void process(org.apache.http.HttpRequest r2, org.apache.http.protocol.HttpContext r3) {
                r1 = this;
                com.alipay.android.phone.mrpc.core.b r3 = r1.a
                com.alipay.android.phone.mrpc.core.b$b r3 = com.alipay.android.phone.mrpc.core.b.a(r3)
                if (r3 == 0) goto L1b
                boolean r0 = com.alipay.android.phone.mrpc.core.b.b.a(r3)
                if (r0 == 0) goto L1b
                boolean r0 = r2 instanceof org.apache.http.client.methods.HttpUriRequest
                if (r0 == 0) goto L1b
                org.apache.http.client.methods.HttpUriRequest r2 = (org.apache.http.client.methods.HttpUriRequest) r2
                java.lang.String r2 = com.alipay.android.phone.mrpc.core.b.a(r2)
                com.alipay.android.phone.mrpc.core.b.b.a(r3, r2)
            L1b:
                return
        }
    }

    public static class b {
        public final java.lang.String a;
        public final int b;

        public static void a(com.alipay.android.phone.mrpc.core.b.b r1, java.lang.String r2) {
                int r0 = r1.b
                java.lang.String r1 = r1.a
                android.util.Log.println(r0, r1, r2)
                return
        }

        public static boolean a(com.alipay.android.phone.mrpc.core.b.b r1) {
                java.lang.String r0 = r1.a
                int r1 = r1.b
                boolean r1 = android.util.Log.isLoggable(r0, r1)
                return r1
        }
    }

    static {
            java.lang.String r0 = "text/"
            java.lang.String r1 = "application/xml"
            java.lang.String r2 = "application/json"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.alipay.android.phone.mrpc.core.b.b = r0
            com.alipay.android.phone.mrpc.core.c r0 = new com.alipay.android.phone.mrpc.core.c
            r0.<init>()
            com.alipay.android.phone.mrpc.core.b.c = r0
            return
    }

    public b(org.apache.http.conn.ClientConnectionManager r3, org.apache.http.params.HttpParams r4) {
            r2 = this;
            r2.<init>()
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "AndroidHttpClient created and never closed"
            r0.<init>(r1)
            r2.e = r0
            com.alipay.android.phone.mrpc.core.d r0 = new com.alipay.android.phone.mrpc.core.d
            r0.<init>(r2, r3, r4)
            r2.d = r0
            return
    }

    public static com.alipay.android.phone.mrpc.core.b.b a(com.alipay.android.phone.mrpc.core.b r0) {
            com.alipay.android.phone.mrpc.core.b$b r0 = r0.f
            return r0
    }

    public static com.alipay.android.phone.mrpc.core.b a(java.lang.String r6) {
            org.apache.http.params.BasicHttpParams r0 = new org.apache.http.params.BasicHttpParams
            r0.<init>()
            org.apache.http.HttpVersion r1 = org.apache.http.HttpVersion.HTTP_1_1
            org.apache.http.params.HttpProtocolParams.setVersion(r0, r1)
            r1 = 0
            org.apache.http.params.HttpProtocolParams.setUseExpectContinue(r0, r1)
            r2 = 1
            org.apache.http.params.HttpConnectionParams.setStaleCheckingEnabled(r0, r2)
            r3 = 20000(0x4e20, float:2.8026E-41)
            org.apache.http.params.HttpConnectionParams.setConnectionTimeout(r0, r3)
            r3 = 30000(0x7530, float:4.2039E-41)
            org.apache.http.params.HttpConnectionParams.setSoTimeout(r0, r3)
            r4 = 8192(0x2000, float:1.148E-41)
            org.apache.http.params.HttpConnectionParams.setSocketBufferSize(r0, r4)
            org.apache.http.client.params.HttpClientParams.setRedirecting(r0, r2)
            org.apache.http.client.params.HttpClientParams.setAuthenticating(r0, r1)
            org.apache.http.params.HttpProtocolParams.setUserAgent(r0, r6)
            org.apache.http.conn.scheme.SchemeRegistry r6 = new org.apache.http.conn.scheme.SchemeRegistry
            r6.<init>()
            org.apache.http.conn.scheme.Scheme r1 = new org.apache.http.conn.scheme.Scheme
            org.apache.http.conn.scheme.PlainSocketFactory r2 = org.apache.http.conn.scheme.PlainSocketFactory.getSocketFactory()
            java.lang.String r4 = "http"
            r5 = 80
            r1.<init>(r4, r2, r5)
            r6.register(r1)
            org.apache.http.conn.scheme.Scheme r1 = new org.apache.http.conn.scheme.Scheme
            r2 = 0
            org.apache.http.conn.ssl.SSLSocketFactory r2 = android.net.SSLCertificateSocketFactory.getHttpSocketFactory(r3, r2)
            java.lang.String r3 = "https"
            r4 = 443(0x1bb, float:6.21E-43)
            r1.<init>(r3, r2, r4)
            r6.register(r1)
            org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager r1 = new org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager
            r1.<init>(r0, r6)
            r2 = 60000(0xea60, double:2.9644E-319)
            org.apache.http.conn.params.ConnManagerParams.setTimeout(r0, r2)
            org.apache.http.conn.params.ConnPerRouteBean r6 = new org.apache.http.conn.params.ConnPerRouteBean
            r2 = 10
            r6.<init>(r2)
            org.apache.http.conn.params.ConnManagerParams.setMaxConnectionsPerRoute(r0, r6)
            r6 = 50
            org.apache.http.conn.params.ConnManagerParams.setMaxTotalConnections(r0, r6)
            java.lang.String r6 = "networkaddress.cache.ttl"
            java.lang.String r2 = "-1"
            java.security.Security.setProperty(r6, r2)
            org.apache.http.conn.ssl.X509HostnameVerifier r6 = org.apache.http.conn.ssl.SSLSocketFactory.STRICT_HOSTNAME_VERIFIER
            javax.net.ssl.HttpsURLConnection.setDefaultHostnameVerifier(r6)
            com.alipay.android.phone.mrpc.core.b r6 = new com.alipay.android.phone.mrpc.core.b
            r6.<init>(r1, r0)
            return r6
    }

    public static java.io.InputStream a(org.apache.http.HttpEntity r2) {
            java.io.InputStream r0 = r2.getContent()
            if (r0 != 0) goto L7
            return r0
        L7:
            org.apache.http.Header r2 = r2.getContentEncoding()
            if (r2 != 0) goto Le
            return r0
        Le:
            java.lang.String r2 = r2.getValue()
            if (r2 != 0) goto L15
            return r0
        L15:
            java.lang.String r1 = "gzip"
            boolean r2 = r2.contains(r1)
            if (r2 == 0) goto L23
            java.util.zip.GZIPInputStream r2 = new java.util.zip.GZIPInputStream
            r2.<init>(r0)
            r0 = r2
        L23:
            return r0
    }

    public static java.lang.String a(org.apache.http.client.methods.HttpUriRequest r9) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "curl "
            r0.append(r1)
            org.apache.http.Header[] r1 = r9.getAllHeaders()
            int r2 = r1.length
            r3 = 0
            r4 = 0
        L11:
            if (r4 >= r2) goto L45
            r5 = r1[r4]
            java.lang.String r6 = r5.getName()
            java.lang.String r7 = "Authorization"
            boolean r6 = r6.equals(r7)
            if (r6 != 0) goto L42
            java.lang.String r6 = r5.getName()
            java.lang.String r7 = "Cookie"
            boolean r6 = r6.equals(r7)
            if (r6 != 0) goto L42
            java.lang.String r6 = "--header \""
            r0.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r5 = r5.trim()
            r0.append(r5)
            java.lang.String r5 = "\" "
            r0.append(r5)
        L42:
            int r4 = r4 + 1
            goto L11
        L45:
            java.net.URI r1 = r9.getURI()
            boolean r2 = r9 instanceof org.apache.http.impl.client.RequestWrapper
            if (r2 == 0) goto L5e
            r2 = r9
            org.apache.http.impl.client.RequestWrapper r2 = (org.apache.http.impl.client.RequestWrapper) r2
            org.apache.http.HttpRequest r2 = r2.getOriginal()
            boolean r4 = r2 instanceof org.apache.http.client.methods.HttpUriRequest
            if (r4 == 0) goto L5e
            org.apache.http.client.methods.HttpUriRequest r2 = (org.apache.http.client.methods.HttpUriRequest) r2
            java.net.URI r1 = r2.getURI()
        L5e:
            java.lang.String r2 = "\""
            r0.append(r2)
            r0.append(r1)
            r0.append(r2)
            boolean r1 = r9 instanceof org.apache.http.HttpEntityEnclosingRequest
            if (r1 == 0) goto Lcb
            r1 = r9
            org.apache.http.HttpEntityEnclosingRequest r1 = (org.apache.http.HttpEntityEnclosingRequest) r1
            org.apache.http.HttpEntity r1 = r1.getEntity()
            if (r1 == 0) goto Lcb
            boolean r4 = r1.isRepeatable()
            if (r4 == 0) goto Lcb
            long r4 = r1.getContentLength()
            r6 = 1024(0x400, double:5.06E-321)
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 >= 0) goto Lc6
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream
            r4.<init>()
            r1.writeTo(r4)
            boolean r9 = b(r9)
            if (r9 == 0) goto Lb6
            byte[] r9 = r4.toByteArray()
            r1 = 2
            java.lang.String r9 = android.util.Base64.encodeToString(r9, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "echo '"
            r1.<init>(r2)
            r1.append(r9)
            java.lang.String r9 = "' | base64 -d > /tmp/$$.bin; "
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            r0.insert(r3, r9)
            java.lang.String r9 = " --data-binary @/tmp/$$.bin"
            goto Lc8
        Lb6:
            java.lang.String r9 = r4.toString()
            java.lang.String r1 = " --data-ascii \""
            r0.append(r1)
            r0.append(r9)
            r0.append(r2)
            goto Lcb
        Lc6:
            java.lang.String r9 = " [TOO MUCH DATA TO INCLUDE]"
        Lc8:
            r0.append(r9)
        Lcb:
            java.lang.String r9 = r0.toString()
            return r9
    }

    public static org.apache.http.HttpRequestInterceptor a() {
            org.apache.http.HttpRequestInterceptor r0 = com.alipay.android.phone.mrpc.core.b.c
            return r0
    }

    public static org.apache.http.entity.AbstractHttpEntity a(byte[] r5) {
            int r0 = r5.length
            long r0 = (long) r0
            long r2 = com.alipay.android.phone.mrpc.core.b.a
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto Le
            org.apache.http.entity.ByteArrayEntity r0 = new org.apache.http.entity.ByteArrayEntity
            r0.<init>(r5)
            goto L44
        Le:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream
            r1.<init>(r0)
            r1.write(r5)
            r1.close()
            org.apache.http.entity.ByteArrayEntity r1 = new org.apache.http.entity.ByteArrayEntity
            byte[] r0 = r0.toByteArray()
            r1.<init>(r0)
            java.lang.String r0 = "gzip"
            r1.setContentEncoding(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "gzip size:"
            r0.<init>(r2)
            int r5 = r5.length
            r0.append(r5)
            java.lang.String r5 = "->"
            r0.append(r5)
            long r2 = r1.getContentLength()
            r0.append(r2)
            r0 = r1
        L44:
            return r0
    }

    public static void a(org.apache.http.HttpRequest r2) {
            java.lang.String r0 = "Accept-Encoding"
            java.lang.String r1 = "gzip"
            r2.addHeader(r0, r1)
            return
    }

    public static long b(java.lang.String r2) {
            long r0 = com.alipay.android.phone.mrpc.core.k.a(r2)
            return r0
    }

    public static void b(org.apache.http.HttpRequest r2) {
            java.lang.String r0 = "Connection"
            java.lang.String r1 = "Keep-Alive"
            r2.addHeader(r0, r1)
            return
    }

    public static boolean b(org.apache.http.client.methods.HttpUriRequest r10) {
            java.lang.String r0 = "content-encoding"
            org.apache.http.Header[] r0 = r10.getHeaders(r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L20
            int r3 = r0.length
            r4 = 0
        Lc:
            if (r4 >= r3) goto L20
            r5 = r0[r4]
            java.lang.String r5 = r5.getValue()
            java.lang.String r6 = "gzip"
            boolean r5 = r6.equalsIgnoreCase(r5)
            if (r5 == 0) goto L1d
            return r2
        L1d:
            int r4 = r4 + 1
            goto Lc
        L20:
            java.lang.String r0 = "content-type"
            org.apache.http.Header[] r10 = r10.getHeaders(r0)
            if (r10 == 0) goto L47
            int r0 = r10.length
            r3 = 0
        L2a:
            if (r3 >= r0) goto L47
            r4 = r10[r3]
            java.lang.String[] r5 = com.alipay.android.phone.mrpc.core.b.b
            int r6 = r5.length
            r7 = 0
        L32:
            if (r7 >= r6) goto L44
            r8 = r5[r7]
            java.lang.String r9 = r4.getValue()
            boolean r8 = r9.startsWith(r8)
            if (r8 == 0) goto L41
            return r1
        L41:
            int r7 = r7 + 1
            goto L32
        L44:
            int r3 = r3 + 1
            goto L2a
        L47:
            return r2
    }

    public final void a(org.apache.http.client.HttpRequestRetryHandler r2) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            org.apache.http.impl.client.DefaultHttpClient r0 = (org.apache.http.impl.client.DefaultHttpClient) r0
            r0.setHttpRequestRetryHandler(r2)
            return
    }

    @Override
    public final <T> T execute(org.apache.http.HttpHost r2, org.apache.http.HttpRequest r3, org.apache.http.client.ResponseHandler<? extends T> r4) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            java.lang.Object r2 = r0.execute(r2, r3, r4)
            return r2
    }

    @Override
    public final <T> T execute(org.apache.http.HttpHost r2, org.apache.http.HttpRequest r3, org.apache.http.client.ResponseHandler<? extends T> r4, org.apache.http.protocol.HttpContext r5) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            java.lang.Object r2 = r0.execute(r2, r3, r4, r5)
            return r2
    }

    @Override
    public final <T> T execute(org.apache.http.client.methods.HttpUriRequest r2, org.apache.http.client.ResponseHandler<? extends T> r3) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            java.lang.Object r2 = r0.execute(r2, r3)
            return r2
    }

    @Override
    public final <T> T execute(org.apache.http.client.methods.HttpUriRequest r2, org.apache.http.client.ResponseHandler<? extends T> r3, org.apache.http.protocol.HttpContext r4) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            java.lang.Object r2 = r0.execute(r2, r3, r4)
            return r2
    }

    @Override
    public final org.apache.http.HttpResponse execute(org.apache.http.HttpHost r2, org.apache.http.HttpRequest r3) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            org.apache.http.HttpResponse r2 = r0.execute(r2, r3)
            return r2
    }

    @Override
    public final org.apache.http.HttpResponse execute(org.apache.http.HttpHost r2, org.apache.http.HttpRequest r3, org.apache.http.protocol.HttpContext r4) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            org.apache.http.HttpResponse r2 = r0.execute(r2, r3, r4)
            return r2
    }

    @Override
    public final org.apache.http.HttpResponse execute(org.apache.http.client.methods.HttpUriRequest r2) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            org.apache.http.HttpResponse r2 = r0.execute(r2)
            return r2
    }

    @Override
    public final org.apache.http.HttpResponse execute(org.apache.http.client.methods.HttpUriRequest r2, org.apache.http.protocol.HttpContext r3) {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            org.apache.http.HttpResponse r2 = r0.execute(r2, r3)
            return r2
    }

    @Override
    public final org.apache.http.conn.ClientConnectionManager getConnectionManager() {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            org.apache.http.conn.ClientConnectionManager r0 = r0.getConnectionManager()
            return r0
    }

    @Override
    public final org.apache.http.params.HttpParams getParams() {
            r1 = this;
            org.apache.http.client.HttpClient r0 = r1.d
            org.apache.http.params.HttpParams r0 = r0.getParams()
            return r0
    }
}
