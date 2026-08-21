package com.czhj.volley.toolbox;

public class BasicNetwork implements com.czhj.volley.Network {
    protected static final boolean DEBUG = false;
    private static final int a = 3000;
    private static final int b = 4096;
    private final com.czhj.volley.toolbox.BaseHttpStack c;
    protected final com.czhj.volley.toolbox.ByteArrayPool mPool;

    static {
            boolean r0 = com.czhj.volley.VolleyLog.DEBUG
            com.czhj.volley.toolbox.BasicNetwork.DEBUG = r0
            return
    }

    public BasicNetwork(com.czhj.volley.toolbox.BaseHttpStack r3) {
            r2 = this;
            com.czhj.volley.toolbox.ByteArrayPool r0 = new com.czhj.volley.toolbox.ByteArrayPool
            r1 = 4096(0x1000, float:5.74E-42)
            r0.<init>(r1)
            r2.<init>(r3, r0)
            return
    }

    public BasicNetwork(com.czhj.volley.toolbox.BaseHttpStack r1, com.czhj.volley.toolbox.ByteArrayPool r2) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.mPool = r2
            return
    }

    private static java.util.List<com.czhj.volley.Header> a(java.util.List<com.czhj.volley.Header> r4, com.czhj.volley.Cache.Entry r5) {
            java.util.TreeSet r0 = new java.util.TreeSet
            java.util.Comparator r1 = java.lang.String.CASE_INSENSITIVE_ORDER
            r0.<init>(r1)
            boolean r1 = r4.isEmpty()
            if (r1 != 0) goto L25
            java.util.Iterator r1 = r4.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()
            com.czhj.volley.Header r2 = (com.czhj.volley.Header) r2
            java.lang.String r2 = r2.getName()
            r0.add(r2)
            goto L11
        L25:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r4)
            java.util.List<com.czhj.volley.Header> r4 = r5.allResponseHeaders
            if (r4 == 0) goto L56
            java.util.List<com.czhj.volley.Header> r4 = r5.allResponseHeaders
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L93
            java.util.List<com.czhj.volley.Header> r4 = r5.allResponseHeaders
            java.util.Iterator r4 = r4.iterator()
        L3c:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L93
            java.lang.Object r5 = r4.next()
            com.czhj.volley.Header r5 = (com.czhj.volley.Header) r5
            java.lang.String r2 = r5.getName()
            boolean r2 = r0.contains(r2)
            if (r2 != 0) goto L3c
            r1.add(r5)
            goto L3c
        L56:
            java.util.Map<java.lang.String, java.lang.String> r4 = r5.responseHeaders
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L93
            java.util.Map<java.lang.String, java.lang.String> r4 = r5.responseHeaders
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L68:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L93
            java.lang.Object r5 = r4.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.Object r2 = r5.getKey()
            boolean r2 = r0.contains(r2)
            if (r2 != 0) goto L68
            com.czhj.volley.Header r2 = new com.czhj.volley.Header
            java.lang.Object r3 = r5.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r5 = r5.getValue()
            java.lang.String r5 = (java.lang.String) r5
            r2.<init>(r3, r5)
            r1.add(r2)
            goto L68
        L93:
            return r1
    }

    private java.util.Map<java.lang.String, java.lang.String> a(com.czhj.volley.Cache.Entry r6) {
            r5 = this;
            if (r6 != 0) goto L7
            java.util.Map r6 = java.util.Collections.emptyMap()
            return r6
        L7:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r6.etag
            if (r1 == 0) goto L17
            java.lang.String r1 = r6.etag
            java.lang.String r2 = "If-None-Match"
            r0.put(r2, r1)
        L17:
            long r1 = r6.lastModified
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L2a
            long r1 = r6.lastModified
            java.lang.String r6 = com.czhj.volley.toolbox.HttpHeaderParser.a(r1)
            java.lang.String r1 = "If-Modified-Since"
            r0.put(r1, r6)
        L2a:
            return r0
    }

    private void a(long r3, com.czhj.volley.Request<?> r5, byte[] r6, int r7) {
            r2 = this;
            boolean r0 = com.czhj.volley.toolbox.BasicNetwork.DEBUG
            if (r0 != 0) goto La
            r0 = 3000(0xbb8, double:1.482E-320)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L3f
        La:
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r5
            r1 = 1
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0[r1] = r3
            r3 = 2
            if (r6 == 0) goto L20
            int r4 = r6.length
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            goto L22
        L20:
            java.lang.String r4 = "null"
        L22:
            r0[r3] = r4
            r3 = 3
            java.lang.Integer r4 = java.lang.Integer.valueOf(r7)
            r0[r3] = r4
            r3 = 4
            com.czhj.volley.RetryPolicy r4 = r5.getRetryPolicy()
            int r4 = r4.getCurrentRetryCount()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r0[r3] = r4
            java.lang.String r3 = "HTTP response for request=<%s> [lifetime=%d], [size=%s], [rc=%d], [retryCount=%s]"
            com.czhj.volley.VolleyLog.d(r3, r0)
        L3f:
            return
    }

    private static void a(java.lang.String r3, com.czhj.volley.Request<?> r4) {
            int r0 = r4.getTimeoutMs()
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
            r0 = 1
            r1[r0] = r3
            java.lang.String r3 = "%s-Redirect [timeout=%s]"
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r4.addMarker(r3)
            return
    }

    private static void a(java.lang.String r5, com.czhj.volley.Request<?> r6, com.czhj.volley.VolleyError r7) throws com.czhj.volley.VolleyError {
            com.czhj.volley.RetryPolicy r0 = r6.getRetryPolicy()
            int r1 = r6.getTimeoutMs()
            r2 = 1
            r3 = 0
            r4 = 2
            r0.retry(r7)     // Catch: com.czhj.volley.VolleyError -> L22
            java.lang.Object[] r7 = new java.lang.Object[r4]
            r7[r3] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)
            r7[r2] = r5
            java.lang.String r5 = "%s-retry [timeout=%s]"
            java.lang.String r5 = java.lang.String.format(r5, r7)
            r6.addMarker(r5)
            return
        L22:
            r7 = move-exception
            java.lang.Object[] r0 = new java.lang.Object[r4]
            r0[r3] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)
            r0[r2] = r5
            java.lang.String r5 = "%s-timeout-giveup [timeout=%s]"
            java.lang.String r5 = java.lang.String.format(r5, r0)
            r6.addMarker(r5)
            throw r7
    }

    private byte[] a(java.io.InputStream r12, int r13) throws java.io.IOException {
            r11 = this;
            java.lang.String r0 = "Error occurred when closing InputStream"
            com.czhj.volley.toolbox.PoolingByteArrayOutputStream r1 = new com.czhj.volley.toolbox.PoolingByteArrayOutputStream
            com.czhj.volley.toolbox.ByteArrayPool r2 = r11.mPool
            r1.<init>(r2, r13)
            r2 = 1024(0x400, float:1.435E-42)
            if (r13 <= 0) goto L10
            if (r13 >= r2) goto L10
            r2 = r13
        L10:
            r3 = 1
            r4 = 0
            r5 = 0
            com.czhj.volley.toolbox.ByteArrayPool r6 = r11.mPool     // Catch: java.lang.Throwable -> L47
            byte[] r5 = r6.getBuf(r2)     // Catch: java.lang.Throwable -> L47
            r6 = 0
        L1b:
            int r8 = r12.read(r5, r4, r2)     // Catch: java.lang.Throwable -> L47
            r9 = -1
            if (r8 == r9) goto L2f
            if (r13 < r3) goto L29
            long r9 = (long) r13     // Catch: java.lang.Throwable -> L47
            int r9 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r9 >= 0) goto L2f
        L29:
            r1.write(r5, r4, r8)     // Catch: java.lang.Throwable -> L47
            long r8 = (long) r8     // Catch: java.lang.Throwable -> L47
            long r6 = r6 + r8
            goto L1b
        L2f:
            byte[] r13 = r1.toByteArray()     // Catch: java.lang.Throwable -> L47
            if (r12 == 0) goto L3e
            r12.close()     // Catch: java.io.IOException -> L39
            goto L3e
        L39:
            java.lang.Object[] r12 = new java.lang.Object[r4]
            com.czhj.volley.VolleyLog.v(r0, r12)
        L3e:
            com.czhj.volley.toolbox.ByteArrayPool r12 = r11.mPool
            r12.returnBuf(r5)
        L43:
            r1.close()
            return r13
        L47:
            r13 = move-exception
            java.lang.String r2 = "readError"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L6a
            java.lang.String r13 = r13.getMessage()     // Catch: java.lang.Throwable -> L6a
            r3[r4] = r13     // Catch: java.lang.Throwable -> L6a
            com.czhj.volley.VolleyLog.e(r2, r3)     // Catch: java.lang.Throwable -> L6a
            byte[] r13 = r1.toByteArray()     // Catch: java.lang.Throwable -> L6a
            if (r12 == 0) goto L64
            r12.close()     // Catch: java.io.IOException -> L5f
            goto L64
        L5f:
            java.lang.Object[] r12 = new java.lang.Object[r4]
            com.czhj.volley.VolleyLog.v(r0, r12)
        L64:
            com.czhj.volley.toolbox.ByteArrayPool r12 = r11.mPool
            r12.returnBuf(r5)
            goto L43
        L6a:
            r13 = move-exception
            if (r12 == 0) goto L76
            r12.close()     // Catch: java.io.IOException -> L71
            goto L76
        L71:
            java.lang.Object[] r12 = new java.lang.Object[r4]
            com.czhj.volley.VolleyLog.v(r0, r12)
        L76:
            com.czhj.volley.toolbox.ByteArrayPool r12 = r11.mPool
            r12.returnBuf(r5)
            r1.close()
            throw r13
    }

    protected static java.util.Map<java.lang.String, java.lang.String> convertHeaders(java.util.List<com.czhj.volley.Header> r4) {
            java.util.TreeMap r0 = new java.util.TreeMap
            java.util.Comparator r1 = java.lang.String.CASE_INSENSITIVE_ORDER
            r0.<init>(r1)
            r1 = 0
        L8:
            int r2 = r4.size()
            if (r1 >= r2) goto L22
            java.lang.Object r2 = r4.get(r1)
            com.czhj.volley.Header r2 = (com.czhj.volley.Header) r2
            java.lang.String r3 = r2.getName()
            java.lang.String r2 = r2.getValue()
            r0.put(r3, r2)
            int r1 = r1 + 1
            goto L8
        L22:
            return r0
    }

    protected void logError(java.lang.String r5, java.lang.String r6, long r7) {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            long r0 = r0 - r7
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            r7 = 1
            r2[r7] = r5
            r5 = 2
            r2[r5] = r6
            java.lang.String r5 = "HTTP ERROR(%s) %d ms to fetch %s"
            com.czhj.volley.VolleyLog.v(r5, r2)
            return
    }

    @Override
    public com.czhj.volley.NetworkResponse performRequest(com.czhj.volley.Request<?> r25) throws com.czhj.volley.VolleyError {
            r24 = this;
            r7 = r24
            r8 = r25
            long r9 = android.os.SystemClock.elapsedRealtime()
        L8:
            java.util.List r1 = java.util.Collections.emptyList()
            r11 = 302(0x12e, float:4.23E-43)
            r12 = 301(0x12d, float:4.22E-43)
            r2 = 0
            r13 = 0
            com.czhj.volley.Cache$Entry r0 = r25.getCacheEntry()     // Catch: java.lang.Throwable -> L154 java.io.IOException -> L158 java.net.MalformedURLException -> L227 java.net.SocketTimeoutException -> L243
            java.util.Map r0 = r7.a(r0)     // Catch: java.lang.Throwable -> L154 java.io.IOException -> L158 java.net.MalformedURLException -> L227 java.net.SocketTimeoutException -> L243
            com.czhj.volley.toolbox.BaseHttpStack r3 = r7.c     // Catch: java.lang.Throwable -> L154 java.io.IOException -> L158 java.net.MalformedURLException -> L227 java.net.SocketTimeoutException -> L243
            com.czhj.volley.toolbox.HttpResponse r14 = r3.executeRequest(r8, r0)     // Catch: java.lang.Throwable -> L154 java.io.IOException -> L158 java.net.MalformedURLException -> L227 java.net.SocketTimeoutException -> L243
            int r0 = r14.getStatusCode()     // Catch: java.lang.Throwable -> L141 java.io.IOException -> L146 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            java.util.List r6 = r14.getHeaders()     // Catch: java.lang.Throwable -> L141 java.io.IOException -> L146 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r1 = 304(0x130, float:4.26E-43)
            if (r0 != r1) goto L9b
            com.czhj.volley.Cache$Entry r0 = r25.getCacheEntry()     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            if (r0 != 0) goto L61
            com.czhj.volley.NetworkResponse r1 = new com.czhj.volley.NetworkResponse     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r16 = 304(0x130, float:4.26E-43)
            r17 = 0
            r18 = 1
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            long r19 = r3 - r9
            r15 = r1
            r21 = r6
            r15.<init>(r16, r17, r18, r19, r21)     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            if (r14 == 0) goto L60
            java.io.InputStream r0 = r14.getContent()
            if (r0 == 0) goto L60
            java.io.InputStream r0 = r14.getContent()     // Catch: java.io.IOException -> L56
            r0.close()     // Catch: java.io.IOException -> L56
            goto L60
        L56:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r2 = new java.lang.Object[r13]
            com.czhj.volley.VolleyLog.e(r0, r2)
        L60:
            return r1
        L61:
            java.util.List r21 = a(r6, r0)     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            com.czhj.volley.NetworkResponse r1 = new com.czhj.volley.NetworkResponse     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r16 = 304(0x130, float:4.26E-43)
            byte[] r0 = r0.data     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r18 = 1
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            long r19 = r3 - r9
            r15 = r1
            r17 = r0
            r15.<init>(r16, r17, r18, r19, r21)     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            if (r14 == 0) goto L93
            java.io.InputStream r0 = r14.getContent()
            if (r0 == 0) goto L93
            java.io.InputStream r0 = r14.getContent()     // Catch: java.io.IOException -> L89
            r0.close()     // Catch: java.io.IOException -> L89
            goto L93
        L89:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r2 = new java.lang.Object[r13]
            com.czhj.volley.VolleyLog.e(r0, r2)
        L93:
            return r1
        L94:
            r0 = move-exception
            r17 = r2
            r21 = r6
            goto L14b
        L9b:
            if (r0 == r12) goto L9f
            if (r0 != r11) goto Lc2
        L9f:
            java.util.Map r1 = convertHeaders(r6)     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            java.lang.String r3 = "Location"
            java.lang.Object r1 = r1.get(r3)     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r8.setRedirectURL(r1)     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r3.<init>()     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            java.lang.String r4 = "redirectURL: "
            r3.append(r4)     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r3.append(r1)     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            java.lang.String r1 = r3.toString()     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r8.addMarker(r1)     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
        Lc2:
            java.io.InputStream r1 = r14.getContent()     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            if (r1 == 0) goto Ldc
            int r3 = r14.getContentLength()     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            int r4 = r25.getMaxLength()     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            if (r4 >= 0) goto Ld3
            goto Ld7
        Ld3:
            int r3 = r25.getMaxLength()     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
        Ld7:
            byte[] r1 = r7.a(r1, r3)     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            goto Lde
        Ldc:
            byte[] r1 = new byte[r13]     // Catch: java.io.IOException -> L138 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
        Lde:
            r22 = r1
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            long r2 = r1 - r9
            r1 = r24
            r4 = r25
            r5 = r22
            r23 = r6
            r6 = r0
            r1.a(r2, r4, r5, r6)     // Catch: java.io.IOException -> L12f java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto L129
            r1 = 299(0x12b, float:4.19E-43)
            if (r0 > r1) goto L129
            com.czhj.volley.NetworkResponse r1 = new com.czhj.volley.NetworkResponse     // Catch: java.io.IOException -> L12f java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r18 = 0
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L12f java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            long r19 = r2 - r9
            r15 = r1
            r16 = r0
            r17 = r22
            r21 = r23
            r15.<init>(r16, r17, r18, r19, r21)     // Catch: java.io.IOException -> L12f java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            if (r14 == 0) goto L128
            java.io.InputStream r0 = r14.getContent()
            if (r0 == 0) goto L128
            java.io.InputStream r0 = r14.getContent()     // Catch: java.io.IOException -> L11e
            r0.close()     // Catch: java.io.IOException -> L11e
            goto L128
        L11e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r2 = new java.lang.Object[r13]
            com.czhj.volley.VolleyLog.e(r0, r2)
        L128:
            return r1
        L129:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L12f java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            r0.<init>()     // Catch: java.io.IOException -> L12f java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
            throw r0     // Catch: java.io.IOException -> L12f java.lang.Throwable -> L141 java.net.MalformedURLException -> L14d java.net.SocketTimeoutException -> L151
        L12f:
            r0 = move-exception
            goto L134
        L131:
            r0 = move-exception
            r23 = r6
        L134:
            r2 = r14
            r17 = r22
            goto L13e
        L138:
            r0 = move-exception
            r23 = r6
            r17 = r2
            r2 = r14
        L13e:
            r21 = r23
            goto L15d
        L141:
            r0 = move-exception
            r1 = r0
            r2 = r14
            goto L26a
        L146:
            r0 = move-exception
            r21 = r1
            r17 = r2
        L14b:
            r2 = r14
            goto L15d
        L14d:
            r0 = move-exception
            r2 = r14
            goto L228
        L151:
            r2 = r14
            goto L243
        L154:
            r0 = move-exception
            r1 = r0
            goto L26a
        L158:
            r0 = move-exception
            r21 = r1
            r17 = r2
        L15d:
            if (r2 == 0) goto L221
            int r1 = r2.getStatusCode()     // Catch: java.lang.Throwable -> L154
            java.lang.String r3 = "Unexpected response code %d for %s"
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L154
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L154
            r4[r13] = r5     // Catch: java.lang.Throwable -> L154
            r5 = 1
            java.lang.String r6 = r25.getUrl()     // Catch: java.lang.Throwable -> L154
            r4[r5] = r6     // Catch: java.lang.Throwable -> L154
            com.czhj.volley.VolleyLog.e(r3, r4)     // Catch: java.lang.Throwable -> L154
            if (r17 == 0) goto L1fc
            com.czhj.volley.NetworkResponse r0 = new com.czhj.volley.NetworkResponse     // Catch: java.lang.Throwable -> L154
            r18 = 0
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L154
            long r19 = r3 - r9
            r15 = r0
            r16 = r1
            r15.<init>(r16, r17, r18, r19, r21)     // Catch: java.lang.Throwable -> L154
            if (r1 == r12) goto L1f6
            if (r1 != r11) goto L18f
            goto L1f6
        L18f:
            r3 = 401(0x191, float:5.62E-43)
            if (r1 == r3) goto L1eb
            r3 = 403(0x193, float:5.65E-43)
            if (r1 != r3) goto L198
            goto L1eb
        L198:
            r3 = 400(0x190, float:5.6E-43)
            java.lang.String r4 = "server"
            if (r1 < r3) goto L1b7
            r3 = 499(0x1f3, float:6.99E-43)
            if (r1 > r3) goto L1b7
            boolean r1 = r25.shouldRetryServerErrors()     // Catch: java.lang.Throwable -> L154
            if (r1 == 0) goto L1b1
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
        L1ad:
            a(r4, r8, r1)     // Catch: java.lang.Throwable -> L154
            goto L204
        L1b1:
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
            throw r1     // Catch: java.lang.Throwable -> L154
        L1b7:
            r3 = 500(0x1f4, float:7.0E-43)
            r5 = 599(0x257, float:8.4E-43)
            if (r1 < r3) goto L1d1
            if (r1 > r5) goto L1d1
            boolean r1 = r25.shouldRetryServerErrors()     // Catch: java.lang.Throwable -> L154
            if (r1 == 0) goto L1cb
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
            goto L1ad
        L1cb:
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
            throw r1     // Catch: java.lang.Throwable -> L154
        L1d1:
            if (r1 <= r5) goto L1e5
            boolean r1 = r25.shouldRetryServerErrors()     // Catch: java.lang.Throwable -> L154
            if (r1 == 0) goto L1df
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
            goto L1ad
        L1df:
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
            throw r1     // Catch: java.lang.Throwable -> L154
        L1e5:
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
            throw r1     // Catch: java.lang.Throwable -> L154
        L1eb:
            java.lang.String r1 = "auth"
            com.czhj.volley.AuthFailureError r3 = new com.czhj.volley.AuthFailureError     // Catch: java.lang.Throwable -> L154
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L154
        L1f2:
            a(r1, r8, r3)     // Catch: java.lang.Throwable -> L154
            goto L204
        L1f6:
            java.lang.String r0 = "redirect"
            a(r0, r8)     // Catch: java.lang.Throwable -> L154
            goto L204
        L1fc:
            java.lang.String r1 = "network"
            com.czhj.volley.NetworkError r3 = new com.czhj.volley.NetworkError     // Catch: java.lang.Throwable -> L154
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L154
            goto L1f2
        L204:
            if (r2 == 0) goto L8
            java.io.InputStream r0 = r2.getContent()
            if (r0 == 0) goto L8
            java.io.InputStream r0 = r2.getContent()     // Catch: java.io.IOException -> L215
            r0.close()     // Catch: java.io.IOException -> L215
            goto L8
        L215:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r1 = new java.lang.Object[r13]
            com.czhj.volley.VolleyLog.e(r0, r1)
            goto L8
        L221:
            com.czhj.volley.NoConnectionError r1 = new com.czhj.volley.NoConnectionError     // Catch: java.lang.Throwable -> L154
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L154
            throw r1     // Catch: java.lang.Throwable -> L154
        L227:
            r0 = move-exception
        L228:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L154
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L154
            r3.<init>()     // Catch: java.lang.Throwable -> L154
            java.lang.String r4 = "Bad URL "
            r3.append(r4)     // Catch: java.lang.Throwable -> L154
            java.lang.String r4 = r25.getUrl()     // Catch: java.lang.Throwable -> L154
            r3.append(r4)     // Catch: java.lang.Throwable -> L154
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L154
            r1.<init>(r3, r0)     // Catch: java.lang.Throwable -> L154
            throw r1     // Catch: java.lang.Throwable -> L154
        L243:
            java.lang.String r0 = "socket"
            com.czhj.volley.TimeoutError r1 = new com.czhj.volley.TimeoutError     // Catch: java.lang.Throwable -> L154
            r1.<init>()     // Catch: java.lang.Throwable -> L154
            a(r0, r8, r1)     // Catch: java.lang.Throwable -> L154
            if (r2 == 0) goto L8
            java.io.InputStream r0 = r2.getContent()
            if (r0 == 0) goto L8
            java.io.InputStream r0 = r2.getContent()     // Catch: java.io.IOException -> L25e
            r0.close()     // Catch: java.io.IOException -> L25e
            goto L8
        L25e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r1 = new java.lang.Object[r13]
            com.czhj.volley.VolleyLog.e(r0, r1)
            goto L8
        L26a:
            if (r2 == 0) goto L284
            java.io.InputStream r0 = r2.getContent()
            if (r0 == 0) goto L284
            java.io.InputStream r0 = r2.getContent()     // Catch: java.io.IOException -> L27a
            r0.close()     // Catch: java.io.IOException -> L27a
            goto L284
        L27a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.Object[] r2 = new java.lang.Object[r13]
            com.czhj.volley.VolleyLog.e(r0, r2)
        L284:
            throw r1
    }
}
