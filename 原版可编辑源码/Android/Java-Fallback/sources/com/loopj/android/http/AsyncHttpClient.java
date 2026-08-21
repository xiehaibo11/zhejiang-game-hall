package com.loopj.android.http;

public class AsyncHttpClient {
    public static final int DEFAULT_MAX_CONNECTIONS = 10;
    public static final int DEFAULT_MAX_RETRIES = 5;
    public static final int DEFAULT_RETRY_SLEEP_TIME_MILLIS = 1500;
    public static final int DEFAULT_SOCKET_BUFFER_SIZE = 8192;
    public static final int DEFAULT_SOCKET_TIMEOUT = 10000;
    public static final java.lang.String ENCODING_GZIP = "gzip";
    public static final java.lang.String HEADER_ACCEPT_ENCODING = "Accept-Encoding";
    public static final java.lang.String HEADER_CONTENT_DISPOSITION = "Content-Disposition";
    public static final java.lang.String HEADER_CONTENT_ENCODING = "Content-Encoding";
    public static final java.lang.String HEADER_CONTENT_RANGE = "Content-Range";
    public static final java.lang.String HEADER_CONTENT_TYPE = "Content-Type";
    public static final java.lang.String LOG_TAG = "AsyncHttpClient";
    public static com.loopj.android.http.LogInterface log;
    private final java.util.Map<java.lang.String, java.lang.String> clientHeaderMap;
    private int connectTimeout;
    private final cz.msebera.android.httpclient.impl.client.DefaultHttpClient httpClient;
    private final cz.msebera.android.httpclient.protocol.HttpContext httpContext;
    private boolean isUrlEncodingEnabled;
    private int maxConnections;
    private final java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> requestMap;
    private int responseTimeout;
    private java.util.concurrent.ExecutorService threadPool;





    private static class InflatingEntity extends cz.msebera.android.httpclient.entity.HttpEntityWrapper {
        java.util.zip.GZIPInputStream gzippedStream;
        java.io.PushbackInputStream pushbackStream;
        java.io.InputStream wrappedStream;

        public InflatingEntity(cz.msebera.android.httpclient.HttpEntity r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void consumeContent() throws java.io.IOException {
                r1 = this;
                java.io.InputStream r0 = r1.wrappedStream
                com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)
                java.io.PushbackInputStream r0 = r1.pushbackStream
                com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)
                java.util.zip.GZIPInputStream r0 = r1.gzippedStream
                com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)
                super.consumeContent()
                return
        }

        @Override
        public java.io.InputStream getContent() throws java.io.IOException {
                r3 = this;
                cz.msebera.android.httpclient.HttpEntity r0 = r3.wrappedEntity
                java.io.InputStream r0 = r0.getContent()
                r3.wrappedStream = r0
                java.io.PushbackInputStream r0 = new java.io.PushbackInputStream
                java.io.InputStream r1 = r3.wrappedStream
                r2 = 2
                r0.<init>(r1, r2)
                r3.pushbackStream = r0
                java.io.PushbackInputStream r0 = r3.pushbackStream
                boolean r0 = com.loopj.android.http.AsyncHttpClient.isInputStreamGZIPCompressed(r0)
                if (r0 == 0) goto L26
                java.util.zip.GZIPInputStream r0 = new java.util.zip.GZIPInputStream
                java.io.PushbackInputStream r1 = r3.pushbackStream
                r0.<init>(r1)
                r3.gzippedStream = r0
                java.util.zip.GZIPInputStream r0 = r3.gzippedStream
                return r0
            L26:
                java.io.PushbackInputStream r0 = r3.pushbackStream
                return r0
        }

        @Override
        public long getContentLength() {
                r2 = this;
                cz.msebera.android.httpclient.HttpEntity r0 = r2.wrappedEntity
                if (r0 != 0) goto L7
                r0 = 0
                goto Ld
            L7:
                cz.msebera.android.httpclient.HttpEntity r0 = r2.wrappedEntity
                long r0 = r0.getContentLength()
            Ld:
                return r0
        }
    }

    static {
            com.loopj.android.http.LogHandler r0 = new com.loopj.android.http.LogHandler
            r0.<init>()
            com.loopj.android.http.AsyncHttpClient.log = r0
            return
    }

    public AsyncHttpClient() {
            r3 = this;
            r0 = 0
            r1 = 80
            r2 = 443(0x1bb, float:6.21E-43)
            r3.<init>(r0, r1, r2)
            return
    }

    public AsyncHttpClient(int r3) {
            r2 = this;
            r0 = 0
            r1 = 443(0x1bb, float:6.21E-43)
            r2.<init>(r0, r3, r1)
            return
    }

    public AsyncHttpClient(int r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2, r3)
            return
    }

    public AsyncHttpClient(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r6) {
            r5 = this;
            r5.<init>()
            r0 = 10
            r5.maxConnections = r0
            r1 = 10000(0x2710, float:1.4013E-41)
            r5.connectTimeout = r1
            r5.responseTimeout = r1
            r1 = 1
            r5.isUrlEncodingEnabled = r1
            cz.msebera.android.httpclient.params.BasicHttpParams r2 = new cz.msebera.android.httpclient.params.BasicHttpParams
            r2.<init>()
            int r3 = r5.connectTimeout
            long r3 = (long) r3
            cz.msebera.android.httpclient.conn.params.ConnManagerParams.setTimeout(r2, r3)
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r3 = new cz.msebera.android.httpclient.conn.params.ConnPerRouteBean
            int r4 = r5.maxConnections
            r3.<init>(r4)
            cz.msebera.android.httpclient.conn.params.ConnManagerParams.setMaxConnectionsPerRoute(r2, r3)
            cz.msebera.android.httpclient.conn.params.ConnManagerParams.setMaxTotalConnections(r2, r0)
            int r0 = r5.responseTimeout
            cz.msebera.android.httpclient.params.HttpConnectionParams.setSoTimeout(r2, r0)
            int r0 = r5.connectTimeout
            cz.msebera.android.httpclient.params.HttpConnectionParams.setConnectionTimeout(r2, r0)
            cz.msebera.android.httpclient.params.HttpConnectionParams.setTcpNoDelay(r2, r1)
            r0 = 8192(0x2000, float:1.148E-41)
            cz.msebera.android.httpclient.params.HttpConnectionParams.setSocketBufferSize(r2, r0)
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            cz.msebera.android.httpclient.params.HttpProtocolParams.setVersion(r2, r0)
            cz.msebera.android.httpclient.conn.ClientConnectionManager r6 = r5.createConnectionManager(r6, r2)
            r0 = 0
            if (r6 == 0) goto L47
            goto L48
        L47:
            r1 = 0
        L48:
            java.lang.String r3 = "Custom implementation of #createConnectionManager(SchemeRegistry, BasicHttpParams) returned null"
            com.loopj.android.http.Utils.asserts(r1, r3)
            java.util.concurrent.ExecutorService r1 = r5.getDefaultThreadPool()
            r5.threadPool = r1
            java.util.WeakHashMap r1 = new java.util.WeakHashMap
            r1.<init>()
            java.util.Map r1 = java.util.Collections.synchronizedMap(r1)
            r5.requestMap = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r5.clientHeaderMap = r1
            cz.msebera.android.httpclient.protocol.SyncBasicHttpContext r1 = new cz.msebera.android.httpclient.protocol.SyncBasicHttpContext
            cz.msebera.android.httpclient.protocol.BasicHttpContext r3 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r3.<init>()
            r1.<init>(r3)
            r5.httpContext = r1
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = new cz.msebera.android.httpclient.impl.client.DefaultHttpClient
            r1.<init>(r6, r2)
            r5.httpClient = r1
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r6 = r5.httpClient
            com.loopj.android.http.AsyncHttpClient$1 r1 = new com.loopj.android.http.AsyncHttpClient$1
            r1.<init>(r5)
            r6.addRequestInterceptor(r1)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r6 = r5.httpClient
            com.loopj.android.http.AsyncHttpClient$2 r1 = new com.loopj.android.http.AsyncHttpClient$2
            r1.<init>(r5)
            r6.addResponseInterceptor(r1)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r6 = r5.httpClient
            com.loopj.android.http.AsyncHttpClient$3 r1 = new com.loopj.android.http.AsyncHttpClient$3
            r1.<init>(r5)
            r6.addRequestInterceptor(r1, r0)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r6 = r5.httpClient
            com.loopj.android.http.RetryHandler r0 = new com.loopj.android.http.RetryHandler
            r1 = 5
            r2 = 1500(0x5dc, float:2.102E-42)
            r0.<init>(r1, r2)
            r6.setHttpRequestRetryHandler(r0)
            return
    }

    public AsyncHttpClient(boolean r1, int r2, int r3) {
            r0 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r1 = getDefaultSchemeRegistry(r1, r2, r3)
            r0.<init>(r1)
            return
    }

    static java.util.Map access$000(com.loopj.android.http.AsyncHttpClient r0) {
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.clientHeaderMap
            return r0
    }

    static void access$100(com.loopj.android.http.AsyncHttpClient r0, java.util.List r1, boolean r2) {
            r0.cancelRequests(r1, r2)
            return
    }

    private cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase addEntityToRequestBase(cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r1, cz.msebera.android.httpclient.HttpEntity r2) {
            r0 = this;
            if (r2 == 0) goto L5
            r1.setEntity(r2)
        L5:
            return r1
    }

    public static void allowRetryExceptionClass(java.lang.Class<?> r0) {
            if (r0 == 0) goto L5
            com.loopj.android.http.RetryHandler.addClassToWhitelist(r0)
        L5:
            return
    }

    public static void blockRetryExceptionClass(java.lang.Class<?> r0) {
            if (r0 == 0) goto L5
            com.loopj.android.http.RetryHandler.addClassToBlacklist(r0)
        L5:
            return
    }

    private void cancelRequests(java.util.List<com.loopj.android.http.RequestHandle> r2, boolean r3) {
            r1 = this;
            if (r2 == 0) goto L16
            java.util.Iterator r2 = r2.iterator()
        L6:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()
            com.loopj.android.http.RequestHandle r0 = (com.loopj.android.http.RequestHandle) r0
            r0.cancel(r3)
            goto L6
        L16:
            return
    }

    public static void endEntityViaReflection(cz.msebera.android.httpclient.HttpEntity r7) {
            boolean r0 = r7 instanceof cz.msebera.android.httpclient.entity.HttpEntityWrapper
            if (r0 == 0) goto L3e
            r0 = 0
            java.lang.Class<cz.msebera.android.httpclient.entity.HttpEntityWrapper> r1 = cz.msebera.android.httpclient.entity.HttpEntityWrapper.class
            java.lang.reflect.Field[] r1 = r1.getDeclaredFields()     // Catch: java.lang.Throwable -> L34
            int r2 = r1.length     // Catch: java.lang.Throwable -> L34
            r3 = 0
        Ld:
            if (r3 >= r2) goto L22
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L34
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = "wrappedEntity"
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L34
            if (r5 == 0) goto L1f
            r0 = r4
            goto L22
        L1f:
            int r3 = r3 + 1
            goto Ld
        L22:
            if (r0 == 0) goto L3e
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L34
            java.lang.Object r7 = r0.get(r7)     // Catch: java.lang.Throwable -> L34
            cz.msebera.android.httpclient.HttpEntity r7 = (cz.msebera.android.httpclient.HttpEntity) r7     // Catch: java.lang.Throwable -> L34
            if (r7 == 0) goto L3e
            r7.consumeContent()     // Catch: java.lang.Throwable -> L34
            goto L3e
        L34:
            r7 = move-exception
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpClient"
            java.lang.String r2 = "wrappedEntity consume"
            r0.e(r1, r2, r7)
        L3e:
            return
    }

    private static cz.msebera.android.httpclient.conn.scheme.SchemeRegistry getDefaultSchemeRegistry(boolean r4, int r5, int r6) {
            java.lang.String r0 = "AsyncHttpClient"
            if (r4 == 0) goto Lb
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "Beware! Using the fix is insecure, as it doesn't verify SSL certificates."
            r1.d(r0, r2)
        Lb:
            r1 = 1
            if (r5 >= r1) goto L17
            r5 = 80
            com.loopj.android.http.LogInterface r2 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r3 = "Invalid HTTP port number specified, defaulting to 80"
            r2.d(r0, r3)
        L17:
            if (r6 >= r1) goto L22
            r6 = 443(0x1bb, float:6.21E-43)
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "Invalid HTTPS port number specified, defaulting to 443"
            r1.d(r0, r2)
        L22:
            if (r4 == 0) goto L29
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r4 = com.loopj.android.http.MySSLSocketFactory.getFixedSocketFactory()
            goto L2d
        L29:
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r4 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.getSocketFactory()
        L2d:
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = new cz.msebera.android.httpclient.conn.scheme.SchemeRegistry
            r0.<init>()
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme
            cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory r2 = cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory.getSocketFactory()
            java.lang.String r3 = "http"
            r1.<init>(r3, r2, r5)
            r0.register(r1)
            cz.msebera.android.httpclient.conn.scheme.Scheme r5 = new cz.msebera.android.httpclient.conn.scheme.Scheme
            java.lang.String r1 = "https"
            r5.<init>(r1, r4, r6)
            r0.register(r5)
            return r0
    }

    public static java.lang.String getUrlWithQueryString(boolean r9, java.lang.String r10, com.loopj.android.http.RequestParams r11) {
            if (r10 != 0) goto L4
            r9 = 0
            return r9
        L4:
            if (r9 == 0) goto L42
            java.lang.String r9 = "UTF-8"
            java.lang.String r9 = java.net.URLDecoder.decode(r10, r9)     // Catch: java.lang.Exception -> L38
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L38
            r0.<init>(r9)     // Catch: java.lang.Exception -> L38
            java.net.URI r9 = new java.net.URI     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = r0.getProtocol()     // Catch: java.lang.Exception -> L38
            java.lang.String r3 = r0.getUserInfo()     // Catch: java.lang.Exception -> L38
            java.lang.String r4 = r0.getHost()     // Catch: java.lang.Exception -> L38
            int r5 = r0.getPort()     // Catch: java.lang.Exception -> L38
            java.lang.String r6 = r0.getPath()     // Catch: java.lang.Exception -> L38
            java.lang.String r7 = r0.getQuery()     // Catch: java.lang.Exception -> L38
            java.lang.String r8 = r0.getRef()     // Catch: java.lang.Exception -> L38
            r1 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L38
            java.lang.String r10 = r9.toASCIIString()     // Catch: java.lang.Exception -> L38
            goto L42
        L38:
            r9 = move-exception
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpClient"
            java.lang.String r2 = "getUrlWithQueryString encoding URL"
            r0.e(r1, r2, r9)
        L42:
            if (r11 == 0) goto L82
            java.lang.String r9 = r11.getParamString()
            java.lang.String r9 = r9.trim()
            java.lang.String r11 = ""
            boolean r11 = r9.equals(r11)
            if (r11 != 0) goto L82
            java.lang.String r11 = "?"
            boolean r0 = r9.equals(r11)
            if (r0 != 0) goto L82
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r10)
            boolean r10 = r10.contains(r11)
            if (r10 == 0) goto L6c
            java.lang.String r11 = "&"
        L6c:
            r0.append(r11)
            java.lang.String r10 = r0.toString()
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r10)
            r11.append(r9)
            java.lang.String r10 = r11.toString()
        L82:
            return r10
    }

    public static boolean isInputStreamGZIPCompressed(java.io.PushbackInputStream r5) throws java.io.IOException {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 2
            byte[] r2 = new byte[r1]
            r3 = 0
        L8:
            if (r3 >= r1) goto L1d
            int r4 = 2 - r3
            int r4 = r5.read(r2, r3, r4)     // Catch: java.lang.Throwable -> L18
            if (r4 >= 0) goto L16
            r5.unread(r2, r0, r3)
            return r0
        L16:
            int r3 = r3 + r4
            goto L8
        L18:
            r1 = move-exception
            r5.unread(r2, r0, r3)
            throw r1
        L1d:
            r5.unread(r2, r0, r3)
            r5 = r2[r0]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = 1
            r2 = r2[r1]
            int r2 = r2 << 8
            r3 = 65280(0xff00, float:9.1477E-41)
            r2 = r2 & r3
            r5 = r5 | r2
            r2 = 35615(0x8b1f, float:4.9907E-41)
            if (r2 != r5) goto L34
            r0 = 1
        L34:
            return r0
    }

    private cz.msebera.android.httpclient.HttpEntity paramsToEntity(com.loopj.android.http.RequestParams r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L13
            cz.msebera.android.httpclient.HttpEntity r0 = r3.getEntity(r4)     // Catch: java.io.IOException -> L8
            goto L13
        L8:
            r3 = move-exception
            if (r4 == 0) goto L10
            r1 = 0
            r4.sendFailureMessage(r1, r0, r0, r3)
            goto L13
        L10:
            r3.printStackTrace()
        L13:
            return r0
    }

    public static void silentCloseInputStream(java.io.InputStream r3) {
            if (r3 == 0) goto L10
            r3.close()     // Catch: java.io.IOException -> L6
            goto L10
        L6:
            r3 = move-exception
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpClient"
            java.lang.String r2 = "Cannot close input stream"
            r0.w(r1, r2, r3)
        L10:
            return
    }

    public static void silentCloseOutputStream(java.io.OutputStream r3) {
            if (r3 == 0) goto L10
            r3.close()     // Catch: java.io.IOException -> L6
            goto L10
        L6:
            r3 = move-exception
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpClient"
            java.lang.String r2 = "Cannot close output stream"
            r0.w(r1, r2, r3)
        L10:
            return
    }

    public void addHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.clientHeaderMap
            r0.put(r2, r3)
            return
    }

    public void cancelAllRequests(boolean r4) {
            r3 = this;
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r0 = r3.requestMap
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()
            java.util.List r1 = (java.util.List) r1
            if (r1 == 0) goto La
            java.util.Iterator r1 = r1.iterator()
        L1c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto La
            java.lang.Object r2 = r1.next()
            com.loopj.android.http.RequestHandle r2 = (com.loopj.android.http.RequestHandle) r2
            r2.cancel(r4)
            goto L1c
        L2c:
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r4 = r3.requestMap
            r4.clear()
            return
    }

    public void cancelRequests(android.content.Context r3, boolean r4) {
            r2 = this;
            if (r3 != 0) goto Lc
            com.loopj.android.http.LogInterface r3 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r4 = "AsyncHttpClient"
            java.lang.String r0 = "Passed null Context to cancelRequests"
            r3.e(r4, r0)
            return
        Lc:
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r0 = r2.requestMap
            java.lang.Object r0 = r0.get(r3)
            java.util.List r0 = (java.util.List) r0
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r1 = r2.requestMap
            r1.remove(r3)
            android.os.Looper r3 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r3 != r1) goto L2e
            com.loopj.android.http.AsyncHttpClient$4 r3 = new com.loopj.android.http.AsyncHttpClient$4
            r3.<init>(r2, r0, r4)
            java.util.concurrent.ExecutorService r4 = r2.threadPool
            r4.submit(r3)
            goto L31
        L2e:
            r2.cancelRequests(r0, r4)
        L31:
            return
    }

    public void cancelRequestsByTAG(java.lang.Object r5, boolean r6) {
            r4 = this;
            if (r5 != 0) goto Lc
            com.loopj.android.http.LogInterface r5 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r6 = "AsyncHttpClient"
            java.lang.String r0 = "cancelRequestsByTAG, passed TAG is null, cannot proceed"
            r5.d(r6, r0)
            return
        Lc:
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r0 = r4.requestMap
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L42
            java.lang.Object r1 = r0.next()
            java.util.List r1 = (java.util.List) r1
            if (r1 == 0) goto L16
            java.util.Iterator r1 = r1.iterator()
        L28:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L16
            java.lang.Object r2 = r1.next()
            com.loopj.android.http.RequestHandle r2 = (com.loopj.android.http.RequestHandle) r2
            java.lang.Object r3 = r2.getTag()
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L28
            r2.cancel(r6)
            goto L28
        L42:
            return
    }

    public void clearCredentialsProvider() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r1.httpClient
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r0.getCredentialsProvider()
            r0.clear()
            return
    }

    protected cz.msebera.android.httpclient.conn.ClientConnectionManager createConnectionManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2, cz.msebera.android.httpclient.params.BasicHttpParams r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager r0 = new cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager
            r0.<init>(r3, r2)
            return r0
    }

    public com.loopj.android.http.RequestHandle delete(android.content.Context r8, java.lang.String r9, com.loopj.android.http.ResponseHandlerInterface r10) {
            r7 = this;
            com.loopj.android.http.HttpDelete r3 = new com.loopj.android.http.HttpDelete
            java.net.URI r9 = r7.getURI(r9)
            r3.<init>(r9)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            r4 = 0
            r0 = r7
            r5 = r10
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle delete(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.HttpEntity r10, java.lang.String r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            com.loopj.android.http.HttpDelete r0 = new com.loopj.android.http.HttpDelete
            java.net.URI r9 = java.net.URI.create(r9)
            java.net.URI r9 = r9.normalize()
            r0.<init>(r9)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r3 = r7.addEntityToRequestBase(r0, r10)
            r0 = r7
            r4 = r11
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle delete(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.Header[] r10, com.loopj.android.http.RequestParams r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            com.loopj.android.http.HttpDelete r3 = new com.loopj.android.http.HttpDelete
            boolean r0 = r7.isUrlEncodingEnabled
            java.lang.String r9 = getUrlWithQueryString(r0, r9, r11)
            r3.<init>(r9)
            if (r10 == 0) goto L10
            r3.setHeaders(r10)
        L10:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            r4 = 0
            r0 = r7
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle delete(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.Header[] r10, com.loopj.android.http.ResponseHandlerInterface r11) {
            r7 = this;
            com.loopj.android.http.HttpDelete r3 = new com.loopj.android.http.HttpDelete
            java.net.URI r9 = r7.getURI(r9)
            r3.<init>(r9)
            if (r10 == 0) goto Le
            r3.setHeaders(r10)
        Le:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            r4 = 0
            r0 = r7
            r5 = r11
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle delete(java.lang.String r2, com.loopj.android.http.ResponseHandlerInterface r3) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.delete(r0, r2, r3)
            return r2
    }

    public void delete(java.lang.String r8, com.loopj.android.http.RequestParams r9, com.loopj.android.http.AsyncHttpResponseHandler r10) {
            r7 = this;
            com.loopj.android.http.HttpDelete r3 = new com.loopj.android.http.HttpDelete
            boolean r0 = r7.isUrlEncodingEnabled
            java.lang.String r8 = getUrlWithQueryString(r0, r8, r9)
            r3.<init>(r8)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            r4 = 0
            r6 = 0
            r0 = r7
            r5 = r10
            r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return
    }

    public com.loopj.android.http.RequestHandle get(android.content.Context r8, java.lang.String r9, com.loopj.android.http.RequestParams r10, com.loopj.android.http.ResponseHandlerInterface r11) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            com.loopj.android.http.HttpGet r3 = new com.loopj.android.http.HttpGet
            boolean r0 = r7.isUrlEncodingEnabled
            java.lang.String r9 = getUrlWithQueryString(r0, r9, r10)
            r3.<init>(r9)
            r4 = 0
            r0 = r7
            r5 = r11
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle get(android.content.Context r2, java.lang.String r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.get(r2, r3, r0, r4)
            return r2
    }

    public com.loopj.android.http.RequestHandle get(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.HttpEntity r10, java.lang.String r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            com.loopj.android.http.HttpGet r0 = new com.loopj.android.http.HttpGet
            java.net.URI r9 = java.net.URI.create(r9)
            java.net.URI r9 = r9.normalize()
            r0.<init>(r9)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r3 = r7.addEntityToRequestBase(r0, r10)
            r0 = r7
            r4 = r11
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle get(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.Header[] r10, com.loopj.android.http.RequestParams r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            com.loopj.android.http.HttpGet r3 = new com.loopj.android.http.HttpGet
            boolean r0 = r7.isUrlEncodingEnabled
            java.lang.String r9 = getUrlWithQueryString(r0, r9, r11)
            r3.<init>(r9)
            if (r10 == 0) goto L10
            r3.setHeaders(r10)
        L10:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            r4 = 0
            r0 = r7
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle get(java.lang.String r2, com.loopj.android.http.RequestParams r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.get(r0, r2, r3, r4)
            return r2
    }

    public com.loopj.android.http.RequestHandle get(java.lang.String r2, com.loopj.android.http.ResponseHandlerInterface r3) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.get(r0, r2, r0, r3)
            return r2
    }

    public int getConnectTimeout() {
            r1 = this;
            int r0 = r1.connectTimeout
            return r0
    }

    protected java.util.concurrent.ExecutorService getDefaultThreadPool() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newCachedThreadPool()
            return r0
    }

    public cz.msebera.android.httpclient.client.HttpClient getHttpClient() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r1.httpClient
            return r0
    }

    public cz.msebera.android.httpclient.protocol.HttpContext getHttpContext() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.httpContext
            return r0
    }

    public com.loopj.android.http.LogInterface getLogInterface() {
            r1 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            return r0
    }

    public int getLoggingLevel() {
            r1 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            int r0 = r0.getLoggingLevel()
            return r0
    }

    public int getMaxConnections() {
            r1 = this;
            int r0 = r1.maxConnections
            return r0
    }

    public int getResponseTimeout() {
            r1 = this;
            int r0 = r1.responseTimeout
            return r0
    }

    public java.util.concurrent.ExecutorService getThreadPool() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.threadPool
            return r0
    }

    protected java.net.URI getURI(java.lang.String r1) {
            r0 = this;
            java.net.URI r1 = java.net.URI.create(r1)
            java.net.URI r1 = r1.normalize()
            return r1
    }

    public com.loopj.android.http.RequestHandle head(android.content.Context r8, java.lang.String r9, com.loopj.android.http.RequestParams r10, com.loopj.android.http.ResponseHandlerInterface r11) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            cz.msebera.android.httpclient.client.methods.HttpHead r3 = new cz.msebera.android.httpclient.client.methods.HttpHead
            boolean r0 = r7.isUrlEncodingEnabled
            java.lang.String r9 = getUrlWithQueryString(r0, r9, r10)
            r3.<init>(r9)
            r4 = 0
            r0 = r7
            r5 = r11
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle head(android.content.Context r2, java.lang.String r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.head(r2, r3, r0, r4)
            return r2
    }

    public com.loopj.android.http.RequestHandle head(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.Header[] r10, com.loopj.android.http.RequestParams r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            cz.msebera.android.httpclient.client.methods.HttpHead r3 = new cz.msebera.android.httpclient.client.methods.HttpHead
            boolean r0 = r7.isUrlEncodingEnabled
            java.lang.String r9 = getUrlWithQueryString(r0, r9, r11)
            r3.<init>(r9)
            if (r10 == 0) goto L10
            r3.setHeaders(r10)
        L10:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            r4 = 0
            r0 = r7
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle head(java.lang.String r2, com.loopj.android.http.RequestParams r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.head(r0, r2, r3, r4)
            return r2
    }

    public com.loopj.android.http.RequestHandle head(java.lang.String r2, com.loopj.android.http.ResponseHandlerInterface r3) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.head(r0, r2, r0, r3)
            return r2
    }

    public boolean isLoggingEnabled() {
            r1 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            boolean r0 = r0.isLoggingEnabled()
            return r0
    }

    public boolean isUrlEncodingEnabled() {
            r1 = this;
            boolean r0 = r1.isUrlEncodingEnabled
            return r0
    }

    protected com.loopj.android.http.AsyncHttpRequest newAsyncHttpRequest(cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1, cz.msebera.android.httpclient.protocol.HttpContext r2, cz.msebera.android.httpclient.client.methods.HttpUriRequest r3, java.lang.String r4, com.loopj.android.http.ResponseHandlerInterface r5, android.content.Context r6) {
            r0 = this;
            com.loopj.android.http.AsyncHttpRequest r4 = new com.loopj.android.http.AsyncHttpRequest
            r4.<init>(r1, r2, r3, r5)
            return r4
    }

    public com.loopj.android.http.RequestHandle patch(android.content.Context r7, java.lang.String r8, com.loopj.android.http.RequestParams r9, com.loopj.android.http.ResponseHandlerInterface r10) {
            r6 = this;
            cz.msebera.android.httpclient.HttpEntity r3 = r6.paramsToEntity(r9, r10)
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r10
            com.loopj.android.http.RequestHandle r7 = r0.patch(r1, r2, r3, r4, r5)
            return r7
    }

    public com.loopj.android.http.RequestHandle patch(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.HttpEntity r10, java.lang.String r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            cz.msebera.android.httpclient.client.methods.HttpPatch r0 = new cz.msebera.android.httpclient.client.methods.HttpPatch
            java.net.URI r9 = r7.getURI(r9)
            r0.<init>(r9)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r3 = r7.addEntityToRequestBase(r0, r10)
            r0 = r7
            r4 = r11
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle patch(android.content.Context r9, java.lang.String r10, cz.msebera.android.httpclient.Header[] r11, cz.msebera.android.httpclient.HttpEntity r12, java.lang.String r13, com.loopj.android.http.ResponseHandlerInterface r14) {
            r8 = this;
            cz.msebera.android.httpclient.client.methods.HttpPatch r0 = new cz.msebera.android.httpclient.client.methods.HttpPatch
            java.net.URI r10 = r8.getURI(r10)
            r0.<init>(r10)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r4 = r8.addEntityToRequestBase(r0, r12)
            if (r11 == 0) goto L12
            r4.setHeaders(r11)
        L12:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r2 = r8.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r3 = r8.httpContext
            r1 = r8
            r5 = r13
            r6 = r14
            r7 = r9
            com.loopj.android.http.RequestHandle r9 = r1.sendRequest(r2, r3, r4, r5, r6, r7)
            return r9
    }

    public com.loopj.android.http.RequestHandle patch(java.lang.String r2, com.loopj.android.http.RequestParams r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.patch(r0, r2, r3, r4)
            return r2
    }

    public com.loopj.android.http.RequestHandle patch(java.lang.String r2, com.loopj.android.http.ResponseHandlerInterface r3) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.patch(r0, r2, r0, r3)
            return r2
    }

    public com.loopj.android.http.RequestHandle post(android.content.Context r7, java.lang.String r8, com.loopj.android.http.RequestParams r9, com.loopj.android.http.ResponseHandlerInterface r10) {
            r6 = this;
            cz.msebera.android.httpclient.HttpEntity r3 = r6.paramsToEntity(r9, r10)
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r10
            com.loopj.android.http.RequestHandle r7 = r0.post(r1, r2, r3, r4, r5)
            return r7
    }

    public com.loopj.android.http.RequestHandle post(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.HttpEntity r10, java.lang.String r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            cz.msebera.android.httpclient.client.methods.HttpPost r0 = new cz.msebera.android.httpclient.client.methods.HttpPost
            java.net.URI r9 = r7.getURI(r9)
            r0.<init>(r9)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r3 = r7.addEntityToRequestBase(r0, r10)
            r0 = r7
            r4 = r11
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle post(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.Header[] r10, com.loopj.android.http.RequestParams r11, java.lang.String r12, com.loopj.android.http.ResponseHandlerInterface r13) {
            r7 = this;
            cz.msebera.android.httpclient.client.methods.HttpPost r3 = new cz.msebera.android.httpclient.client.methods.HttpPost
            java.net.URI r9 = r7.getURI(r9)
            r3.<init>(r9)
            if (r11 == 0) goto L12
            cz.msebera.android.httpclient.HttpEntity r9 = r7.paramsToEntity(r11, r13)
            r3.setEntity(r9)
        L12:
            if (r10 == 0) goto L17
            r3.setHeaders(r10)
        L17:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            r0 = r7
            r4 = r12
            r5 = r13
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle post(android.content.Context r9, java.lang.String r10, cz.msebera.android.httpclient.Header[] r11, cz.msebera.android.httpclient.HttpEntity r12, java.lang.String r13, com.loopj.android.http.ResponseHandlerInterface r14) {
            r8 = this;
            cz.msebera.android.httpclient.client.methods.HttpPost r0 = new cz.msebera.android.httpclient.client.methods.HttpPost
            java.net.URI r10 = r8.getURI(r10)
            r0.<init>(r10)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r4 = r8.addEntityToRequestBase(r0, r12)
            if (r11 == 0) goto L12
            r4.setHeaders(r11)
        L12:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r2 = r8.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r3 = r8.httpContext
            r1 = r8
            r5 = r13
            r6 = r14
            r7 = r9
            com.loopj.android.http.RequestHandle r9 = r1.sendRequest(r2, r3, r4, r5, r6, r7)
            return r9
    }

    public com.loopj.android.http.RequestHandle post(java.lang.String r2, com.loopj.android.http.RequestParams r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.post(r0, r2, r3, r4)
            return r2
    }

    public com.loopj.android.http.RequestHandle post(java.lang.String r2, com.loopj.android.http.ResponseHandlerInterface r3) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.post(r0, r2, r0, r3)
            return r2
    }

    public com.loopj.android.http.RequestHandle put(android.content.Context r7, java.lang.String r8, com.loopj.android.http.RequestParams r9, com.loopj.android.http.ResponseHandlerInterface r10) {
            r6 = this;
            cz.msebera.android.httpclient.HttpEntity r3 = r6.paramsToEntity(r9, r10)
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r10
            com.loopj.android.http.RequestHandle r7 = r0.put(r1, r2, r3, r4, r5)
            return r7
    }

    public com.loopj.android.http.RequestHandle put(android.content.Context r8, java.lang.String r9, cz.msebera.android.httpclient.HttpEntity r10, java.lang.String r11, com.loopj.android.http.ResponseHandlerInterface r12) {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r1 = r7.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r7.httpContext
            cz.msebera.android.httpclient.client.methods.HttpPut r0 = new cz.msebera.android.httpclient.client.methods.HttpPut
            java.net.URI r9 = r7.getURI(r9)
            r0.<init>(r9)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r3 = r7.addEntityToRequestBase(r0, r10)
            r0 = r7
            r4 = r11
            r5 = r12
            r6 = r8
            com.loopj.android.http.RequestHandle r8 = r0.sendRequest(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public com.loopj.android.http.RequestHandle put(android.content.Context r9, java.lang.String r10, cz.msebera.android.httpclient.Header[] r11, cz.msebera.android.httpclient.HttpEntity r12, java.lang.String r13, com.loopj.android.http.ResponseHandlerInterface r14) {
            r8 = this;
            cz.msebera.android.httpclient.client.methods.HttpPut r0 = new cz.msebera.android.httpclient.client.methods.HttpPut
            java.net.URI r10 = r8.getURI(r10)
            r0.<init>(r10)
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r4 = r8.addEntityToRequestBase(r0, r12)
            if (r11 == 0) goto L12
            r4.setHeaders(r11)
        L12:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r2 = r8.httpClient
            cz.msebera.android.httpclient.protocol.HttpContext r3 = r8.httpContext
            r1 = r8
            r5 = r13
            r6 = r14
            r7 = r9
            com.loopj.android.http.RequestHandle r9 = r1.sendRequest(r2, r3, r4, r5, r6, r7)
            return r9
    }

    public com.loopj.android.http.RequestHandle put(java.lang.String r2, com.loopj.android.http.RequestParams r3, com.loopj.android.http.ResponseHandlerInterface r4) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.put(r0, r2, r3, r4)
            return r2
    }

    public com.loopj.android.http.RequestHandle put(java.lang.String r2, com.loopj.android.http.ResponseHandlerInterface r3) {
            r1 = this;
            r0 = 0
            com.loopj.android.http.RequestHandle r2 = r1.put(r0, r2, r0, r3)
            return r2
    }

    public void removeAllHeaders() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.clientHeaderMap
            r0.clear()
            return
    }

    public void removeHeader(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.clientHeaderMap
            r0.remove(r2)
            return
    }

    protected com.loopj.android.http.RequestHandle sendRequest(cz.msebera.android.httpclient.impl.client.DefaultHttpClient r4, cz.msebera.android.httpclient.protocol.HttpContext r5, cz.msebera.android.httpclient.client.methods.HttpUriRequest r6, java.lang.String r7, com.loopj.android.http.ResponseHandlerInterface r8, android.content.Context r9) {
            r3 = this;
            if (r6 == 0) goto La2
            if (r8 == 0) goto L9a
            boolean r0 = r8.getUseSynchronousMode()
            if (r0 == 0) goto L19
            boolean r0 = r8.getUsePoolThread()
            if (r0 == 0) goto L11
            goto L19
        L11:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "Synchronous ResponseHandler used in AsyncHttpClient. You should create your response handler in a looper thread or use SyncHttpClient instead."
            r4.<init>(r5)
            throw r4
        L19:
            if (r7 == 0) goto L3f
            boolean r0 = r6 instanceof cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase
            if (r0 == 0) goto L3a
            r0 = r6
            cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase r0 = (cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase) r0
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            if (r0 == 0) goto L3a
            java.lang.String r0 = "Content-Type"
            boolean r0 = r6.containsHeader(r0)
            if (r0 == 0) goto L3a
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpClient"
            java.lang.String r2 = "Passed contentType will be ignored because HttpEntity sets content type"
            r0.w(r1, r2)
            goto L3f
        L3a:
            java.lang.String r0 = "Content-Type"
            r6.setHeader(r0, r7)
        L3f:
            cz.msebera.android.httpclient.Header[] r0 = r6.getAllHeaders()
            r8.setRequestHeaders(r0)
            java.net.URI r0 = r6.getURI()
            r8.setRequestURI(r0)
            com.loopj.android.http.AsyncHttpRequest r4 = r3.newAsyncHttpRequest(r4, r5, r6, r7, r8, r9)
            java.util.concurrent.ExecutorService r5 = r3.threadPool
            r5.submit(r4)
            com.loopj.android.http.RequestHandle r5 = new com.loopj.android.http.RequestHandle
            r5.<init>(r4)
            if (r9 == 0) goto L99
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r4 = r3.requestMap
            monitor-enter(r4)
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r6 = r3.requestMap     // Catch: java.lang.Throwable -> L96
            java.lang.Object r6 = r6.get(r9)     // Catch: java.lang.Throwable -> L96
            java.util.List r6 = (java.util.List) r6     // Catch: java.lang.Throwable -> L96
            if (r6 != 0) goto L78
            java.util.LinkedList r6 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L96
            r6.<init>()     // Catch: java.lang.Throwable -> L96
            java.util.List r6 = java.util.Collections.synchronizedList(r6)     // Catch: java.lang.Throwable -> L96
            java.util.Map<android.content.Context, java.util.List<com.loopj.android.http.RequestHandle>> r7 = r3.requestMap     // Catch: java.lang.Throwable -> L96
            r7.put(r9, r6)     // Catch: java.lang.Throwable -> L96
        L78:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L96
            r6.add(r5)
            java.util.Iterator r4 = r6.iterator()
        L80:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L99
            java.lang.Object r6 = r4.next()
            com.loopj.android.http.RequestHandle r6 = (com.loopj.android.http.RequestHandle) r6
            boolean r6 = r6.shouldBeGarbageCollected()
            if (r6 == 0) goto L80
            r4.remove()
            goto L80
        L96:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L96
            throw r5
        L99:
            return r5
        L9a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "ResponseHandler must not be null"
            r4.<init>(r5)
            throw r4
        La2:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "HttpUriRequest must not be null"
            r4.<init>(r5)
            throw r4
    }

    public void setAuthenticationPreemptive(boolean r3) {
            r2 = this;
            if (r3 == 0) goto Le
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r3 = r2.httpClient
            com.loopj.android.http.PreemptiveAuthorizationHttpRequestInterceptor r0 = new com.loopj.android.http.PreemptiveAuthorizationHttpRequestInterceptor
            r0.<init>()
            r1 = 0
            r3.addRequestInterceptor(r0, r1)
            goto L15
        Le:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r3 = r2.httpClient
            java.lang.Class<com.loopj.android.http.PreemptiveAuthorizationHttpRequestInterceptor> r0 = com.loopj.android.http.PreemptiveAuthorizationHttpRequestInterceptor.class
            r3.removeRequestInterceptorByClass(r0)
        L15:
            return
    }

    public void setBasicAuth(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.setBasicAuth(r2, r3, r0)
            return
    }

    public void setBasicAuth(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.auth.AuthScope r4) {
            r1 = this;
            r0 = 0
            r1.setBasicAuth(r2, r3, r4, r0)
            return
    }

    public void setBasicAuth(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.auth.AuthScope r4, boolean r5) {
            r1 = this;
            cz.msebera.android.httpclient.auth.UsernamePasswordCredentials r0 = new cz.msebera.android.httpclient.auth.UsernamePasswordCredentials
            r0.<init>(r2, r3)
            r1.setCredentials(r4, r0)
            r1.setAuthenticationPreemptive(r5)
            return
    }

    public void setBasicAuth(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            r0 = 0
            r1.setBasicAuth(r2, r3, r0, r4)
            return
    }

    public void setConnectTimeout(int r3) {
            r2 = this;
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r3 >= r0) goto L6
            r3 = 10000(0x2710, float:1.4013E-41)
        L6:
            r2.connectTimeout = r3
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r3 = r2.httpClient
            cz.msebera.android.httpclient.params.HttpParams r3 = r3.getParams()
            int r0 = r2.connectTimeout
            long r0 = (long) r0
            cz.msebera.android.httpclient.conn.params.ConnManagerParams.setTimeout(r3, r0)
            int r0 = r2.connectTimeout
            cz.msebera.android.httpclient.params.HttpConnectionParams.setConnectionTimeout(r3, r0)
            return
    }

    public void setCookieStore(cz.msebera.android.httpclient.client.CookieStore r3) {
            r2 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r2.httpContext
            java.lang.String r1 = "http.cookie-store"
            r0.setAttribute(r1, r3)
            return
    }

    public void setCredentials(cz.msebera.android.httpclient.auth.AuthScope r2, cz.msebera.android.httpclient.auth.Credentials r3) {
            r1 = this;
            if (r3 != 0) goto Lc
            com.loopj.android.http.LogInterface r2 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r3 = "AsyncHttpClient"
            java.lang.String r0 = "Provided credentials are null, not setting"
            r2.d(r3, r0)
            return
        Lc:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r1.httpClient
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r0.getCredentialsProvider()
            if (r2 != 0) goto L16
            cz.msebera.android.httpclient.auth.AuthScope r2 = cz.msebera.android.httpclient.auth.AuthScope.ANY
        L16:
            r0.setCredentials(r2, r3)
            return
    }

    public void setEnableRedirects(boolean r1) {
            r0 = this;
            r0.setEnableRedirects(r1, r1, r1)
            return
    }

    public void setEnableRedirects(boolean r2, boolean r3) {
            r1 = this;
            r0 = 1
            r1.setEnableRedirects(r2, r3, r0)
            return
    }

    public void setEnableRedirects(boolean r3, boolean r4, boolean r5) {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r2.httpClient
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.getParams()
            r4 = r4 ^ 1
            java.lang.String r1 = "http.protocol.reject-relative-redirect"
            r0.setBooleanParameter(r1, r4)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r4 = r2.httpClient
            cz.msebera.android.httpclient.params.HttpParams r4 = r4.getParams()
            java.lang.String r0 = "http.protocol.allow-circular-redirects"
            r4.setBooleanParameter(r0, r5)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r4 = r2.httpClient
            com.loopj.android.http.MyRedirectHandler r5 = new com.loopj.android.http.MyRedirectHandler
            r5.<init>(r3)
            r4.setRedirectHandler(r5)
            return
    }

    public void setLogInterface(com.loopj.android.http.LogInterface r1) {
            r0 = this;
            if (r1 == 0) goto L4
            com.loopj.android.http.AsyncHttpClient.log = r1
        L4:
            return
    }

    public void setLoggingEnabled(boolean r2) {
            r1 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            r0.setLoggingEnabled(r2)
            return
    }

    public void setLoggingLevel(int r2) {
            r1 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            r0.setLoggingLevel(r2)
            return
    }

    public void setMaxConnections(int r3) {
            r2 = this;
            r0 = 1
            if (r3 >= r0) goto L5
            r3 = 10
        L5:
            r2.maxConnections = r3
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r3 = r2.httpClient
            cz.msebera.android.httpclient.params.HttpParams r3 = r3.getParams()
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r0 = new cz.msebera.android.httpclient.conn.params.ConnPerRouteBean
            int r1 = r2.maxConnections
            r0.<init>(r1)
            cz.msebera.android.httpclient.conn.params.ConnManagerParams.setMaxConnectionsPerRoute(r3, r0)
            return
    }

    public void setMaxRetriesAndTimeout(int r3, int r4) {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r2.httpClient
            com.loopj.android.http.RetryHandler r1 = new com.loopj.android.http.RetryHandler
            r1.<init>(r3, r4)
            r0.setHttpRequestRetryHandler(r1)
            return
    }

    public void setProxy(java.lang.String r2, int r3) {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = new cz.msebera.android.httpclient.HttpHost
            r0.<init>(r2, r3)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r2 = r1.httpClient
            cz.msebera.android.httpclient.params.HttpParams r2 = r2.getParams()
            java.lang.String r3 = "http.route.default-proxy"
            r2.setParameter(r3, r0)
            return
    }

    public void setProxy(java.lang.String r4, int r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r3.httpClient
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r0.getCredentialsProvider()
            cz.msebera.android.httpclient.auth.AuthScope r1 = new cz.msebera.android.httpclient.auth.AuthScope
            r1.<init>(r4, r5)
            cz.msebera.android.httpclient.auth.UsernamePasswordCredentials r2 = new cz.msebera.android.httpclient.auth.UsernamePasswordCredentials
            r2.<init>(r6, r7)
            r0.setCredentials(r1, r2)
            cz.msebera.android.httpclient.HttpHost r6 = new cz.msebera.android.httpclient.HttpHost
            r6.<init>(r4, r5)
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r4 = r3.httpClient
            cz.msebera.android.httpclient.params.HttpParams r4 = r4.getParams()
            java.lang.String r5 = "http.route.default-proxy"
            r4.setParameter(r5, r6)
            return
    }

    public void setRedirectHandler(cz.msebera.android.httpclient.client.RedirectHandler r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r1.httpClient
            r0.setRedirectHandler(r2)
            return
    }

    public void setResponseTimeout(int r2) {
            r1 = this;
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r2 >= r0) goto L6
            r2 = 10000(0x2710, float:1.4013E-41)
        L6:
            r1.responseTimeout = r2
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r2 = r1.httpClient
            cz.msebera.android.httpclient.params.HttpParams r2 = r2.getParams()
            int r0 = r1.responseTimeout
            cz.msebera.android.httpclient.params.HttpConnectionParams.setSoTimeout(r2, r0)
            return
    }

    public void setSSLSocketFactory(cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r5) {
            r4 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r4.httpClient
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r0.getConnectionManager()
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r0.getSchemeRegistry()
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme
            java.lang.String r2 = "https"
            r3 = 443(0x1bb, float:6.21E-43)
            r1.<init>(r2, r5, r3)
            r0.register(r1)
            return
    }

    public void setThreadPool(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.threadPool = r1
            return
    }

    public void setTimeout(int r2) {
            r1 = this;
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r2 >= r0) goto L6
            r2 = 10000(0x2710, float:1.4013E-41)
        L6:
            r1.setConnectTimeout(r2)
            r1.setResponseTimeout(r2)
            return
    }

    public void setURLEncodingEnabled(boolean r1) {
            r0 = this;
            r0.isUrlEncodingEnabled = r1
            return
    }

    public void setUserAgent(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r0 = r1.httpClient
            cz.msebera.android.httpclient.params.HttpParams r0 = r0.getParams()
            cz.msebera.android.httpclient.params.HttpProtocolParams.setUserAgent(r0, r2)
            return
    }
}
