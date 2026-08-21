package com.czhj.volley.toolbox;

public class FileDownloadNetwork implements com.czhj.volley.Network {
    protected static final boolean DEBUG = false;
    private static final int a = 3000;
    private static final int b = 4096;
    private final com.czhj.volley.toolbox.BaseHttpStack c;
    protected final com.czhj.volley.toolbox.ByteArrayPool mPool;

    static {
            boolean r0 = com.czhj.volley.VolleyLog.DEBUG
            com.czhj.volley.toolbox.FileDownloadNetwork.DEBUG = r0
            return
    }

    public FileDownloadNetwork(com.czhj.volley.toolbox.BaseHttpStack r3) {
            r2 = this;
            com.czhj.volley.toolbox.ByteArrayPool r0 = new com.czhj.volley.toolbox.ByteArrayPool
            r1 = 4096(0x1000, float:5.74E-42)
            r0.<init>(r1)
            r2.<init>(r3, r0)
            return
    }

    public FileDownloadNetwork(com.czhj.volley.toolbox.BaseHttpStack r1, com.czhj.volley.toolbox.ByteArrayPool r2) {
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
            boolean r0 = com.czhj.volley.toolbox.FileDownloadNetwork.DEBUG
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

    private byte[] a(java.io.InputStream r6, int r7) throws java.io.IOException, com.czhj.volley.ServerError {
            r5 = this;
            com.czhj.volley.toolbox.PoolingByteArrayOutputStream r0 = new com.czhj.volley.toolbox.PoolingByteArrayOutputStream
            com.czhj.volley.toolbox.ByteArrayPool r1 = r5.mPool
            r0.<init>(r1, r7)
            java.lang.String r7 = "Error occurred when closing InputStream"
            r1 = 0
            r2 = 0
            if (r6 == 0) goto L3a
            com.czhj.volley.toolbox.ByteArrayPool r3 = r5.mPool     // Catch: java.lang.Throwable -> L38
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r2 = r3.getBuf(r4)     // Catch: java.lang.Throwable -> L38
        L15:
            int r3 = r6.read(r2)     // Catch: java.lang.Throwable -> L38
            r4 = -1
            if (r3 == r4) goto L20
            r0.write(r2, r1, r3)     // Catch: java.lang.Throwable -> L38
            goto L15
        L20:
            byte[] r3 = r0.toByteArray()     // Catch: java.lang.Throwable -> L38
            if (r6 == 0) goto L2f
            r6.close()     // Catch: java.io.IOException -> L2a
            goto L2f
        L2a:
            java.lang.Object[] r6 = new java.lang.Object[r1]
            com.czhj.volley.VolleyLog.v(r7, r6)
        L2f:
            com.czhj.volley.toolbox.ByteArrayPool r6 = r5.mPool
            r6.returnBuf(r2)
            r0.close()
            return r3
        L38:
            r3 = move-exception
            goto L40
        L3a:
            com.czhj.volley.ServerError r3 = new com.czhj.volley.ServerError     // Catch: java.lang.Throwable -> L38
            r3.<init>()     // Catch: java.lang.Throwable -> L38
            throw r3     // Catch: java.lang.Throwable -> L38
        L40:
            if (r6 == 0) goto L4b
            r6.close()     // Catch: java.io.IOException -> L46
            goto L4b
        L46:
            java.lang.Object[] r6 = new java.lang.Object[r1]
            com.czhj.volley.VolleyLog.v(r7, r6)
        L4b:
            com.czhj.volley.toolbox.ByteArrayPool r6 = r5.mPool
            r6.returnBuf(r2)
            r0.close()
            throw r3
    }

    public static void attemptRetryOnException(java.lang.String r6, com.czhj.volley.Request<?> r7, com.czhj.volley.VolleyError r8) throws com.czhj.volley.VolleyError {
            com.czhj.volley.RetryPolicy r0 = r7.getRetryPolicy()
            int r1 = r7.getTimeoutMs()
            r2 = 2
            r3 = 1
            r4 = 0
            r5 = 3
            r0.retry(r8)     // Catch: com.czhj.volley.VolleyError -> L2d
            java.lang.Object[] r8 = new java.lang.Object[r5]
            r8[r4] = r6
            int r6 = r0.getCurrentRetryCount()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r8[r3] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r1)
            r8[r2] = r6
            java.lang.String r6 = "%s-retry [RetryCount %s]  [timeout=%s]"
            java.lang.String r6 = java.lang.String.format(r6, r8)
            r7.addMarker(r6)
            return
        L2d:
            r8 = move-exception
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r5[r4] = r6
            int r6 = r0.getCurrentRetryCount()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r5[r3] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r1)
            r5[r2] = r6
            java.lang.String r6 = "%s-timeout-giveup [RetryCount %s] [timeout=%s]"
            java.lang.String r6 = java.lang.String.format(r6, r5)
            r7.addMarker(r6)
            throw r8
    }

    public static java.util.Map<java.lang.String, java.lang.String> convertHeaders(java.util.List<com.czhj.volley.Header> r4) {
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
    public com.czhj.volley.NetworkResponse performRequest(com.czhj.volley.Request<?> r29) throws com.czhj.volley.VolleyError {
            r28 = this;
            r7 = r28
            r8 = r29
            long r9 = android.os.SystemClock.elapsedRealtime()
        L8:
            r11 = 1
            java.lang.Object[] r0 = new java.lang.Object[r11]
            java.lang.String r1 = r29.getUrl()
            r12 = 0
            r0[r12] = r1
            java.lang.String r1 = "download start %s"
            com.czhj.volley.VolleyLog.d(r1, r0)
            java.util.List r1 = java.util.Collections.emptyList()
            r13 = 2
            r2 = 0
            com.czhj.volley.Cache$Entry r0 = r29.getCacheEntry()     // Catch: java.io.IOException -> Lea java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            java.util.Map r0 = r7.a(r0)     // Catch: java.io.IOException -> Lea java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            com.czhj.volley.toolbox.BaseHttpStack r3 = r7.c     // Catch: java.io.IOException -> Lea java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            com.czhj.volley.toolbox.HttpResponse r14 = r3.executeRequest(r8, r0)     // Catch: java.io.IOException -> Lea java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            int r0 = r14.getStatusCode()     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            java.lang.String r3 = "download getStatus %s StatusCode: %s"
            java.lang.Object[] r4 = new java.lang.Object[r13]     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            java.lang.String r5 = r29.getUrl()     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r4[r12] = r5     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            java.lang.Integer r5 = java.lang.Integer.valueOf(r0)     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r4[r11] = r5     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            com.czhj.volley.VolleyLog.d(r3, r4)     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            java.util.List r6 = r14.getHeaders()     // Catch: java.io.IOException -> Le3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r1 = 304(0x130, float:4.26E-43)
            if (r0 != r1) goto L86
            com.czhj.volley.Cache$Entry r0 = r29.getCacheEntry()     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            if (r0 != 0) goto L65
            com.czhj.volley.NetworkResponse r0 = new com.czhj.volley.NetworkResponse     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r16 = 304(0x130, float:4.26E-43)
            r17 = 0
            r18 = 1
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            long r19 = r3 - r9
            r15 = r0
            r21 = r6
            r15.<init>(r16, r17, r18, r19, r21)     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            return r0
        L65:
            java.util.List r27 = a(r6, r0)     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            com.czhj.volley.NetworkResponse r1 = new com.czhj.volley.NetworkResponse     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r22 = 304(0x130, float:4.26E-43)
            byte[] r0 = r0.data     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r24 = 1
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            long r25 = r3 - r9
            r21 = r1
            r23 = r0
            r21.<init>(r22, r23, r24, r25, r27)     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            return r1
        L7f:
            r0 = move-exception
            r17 = r2
            r21 = r6
            goto Le8
        L86:
            java.io.InputStream r1 = r14.getContent()     // Catch: java.io.IOException -> Lda java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            if (r1 == 0) goto L98
            boolean r1 = r8 instanceof com.czhj.volley.toolbox.FileDownloadRequest     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            if (r1 == 0) goto L9a
            r1 = r8
            com.czhj.volley.toolbox.FileDownloadRequest r1 = (com.czhj.volley.toolbox.FileDownloadRequest) r1     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            byte[] r2 = r1.handleRawResponse(r14)     // Catch: java.io.IOException -> L7f java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            goto L9a
        L98:
            byte[] r2 = new byte[r12]     // Catch: java.io.IOException -> Lda java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
        L9a:
            r22 = r2
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> Ld3 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            long r2 = r1 - r9
            r1 = r28
            r4 = r29
            r5 = r22
            r23 = r6
            r6 = r0
            r1.a(r2, r4, r5, r6)     // Catch: java.io.IOException -> Ld1 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto Lcb
            r1 = 299(0x12b, float:4.19E-43)
            if (r0 > r1) goto Lcb
            com.czhj.volley.NetworkResponse r1 = new com.czhj.volley.NetworkResponse     // Catch: java.io.IOException -> Ld1 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r18 = 0
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> Ld1 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            long r19 = r2 - r9
            r15 = r1
            r16 = r0
            r17 = r22
            r21 = r23
            r15.<init>(r16, r17, r18, r19, r21)     // Catch: java.io.IOException -> Ld1 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            return r1
        Lcb:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> Ld1 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            r0.<init>()     // Catch: java.io.IOException -> Ld1 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
            throw r0     // Catch: java.io.IOException -> Ld1 java.net.MalformedURLException -> L188 java.net.SocketTimeoutException -> L1a4
        Ld1:
            r0 = move-exception
            goto Ld6
        Ld3:
            r0 = move-exception
            r23 = r6
        Ld6:
            r2 = r14
            r17 = r22
            goto Le0
        Lda:
            r0 = move-exception
            r23 = r6
            r17 = r2
            r2 = r14
        Le0:
            r21 = r23
            goto Lef
        Le3:
            r0 = move-exception
            r21 = r1
            r17 = r2
        Le8:
            r2 = r14
            goto Lef
        Lea:
            r0 = move-exception
            r21 = r1
            r17 = r2
        Lef:
            if (r2 == 0) goto L182
            int r1 = r2.getStatusCode()
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r3 = r0.getMessage()
            r2[r12] = r3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)
            r2[r11] = r3
            java.lang.String r3 = r29.getUrl()
            r2[r13] = r3
            java.lang.String r3 = "%s Unexpected response code %d for %s"
            com.czhj.volley.VolleyLog.e(r3, r2)
            if (r17 == 0) goto L176
            com.czhj.volley.NetworkResponse r0 = new com.czhj.volley.NetworkResponse
            r18 = 0
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r19 = r2 - r9
            r15 = r0
            r16 = r1
            r15.<init>(r16, r17, r18, r19, r21)
            r2 = 401(0x191, float:5.62E-43)
            java.lang.String r3 = "auth"
            if (r1 == r2) goto L16c
            r2 = 403(0x193, float:5.65E-43)
            if (r1 != r2) goto L12c
            goto L16c
        L12c:
            r2 = 301(0x12d, float:4.22E-43)
            if (r1 == r2) goto L166
            r2 = 302(0x12e, float:4.23E-43)
            if (r1 != r2) goto L135
            goto L166
        L135:
            r2 = 400(0x190, float:5.6E-43)
            if (r1 < r2) goto L144
            r2 = 499(0x1f3, float:6.99E-43)
            if (r1 <= r2) goto L13e
            goto L144
        L13e:
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError
            r1.<init>(r0)
            throw r1
        L144:
            r2 = 500(0x1f4, float:7.0E-43)
            if (r1 < r2) goto L160
            r2 = 599(0x257, float:8.4E-43)
            if (r1 > r2) goto L160
            boolean r1 = r29.shouldRetryServerErrors()
            if (r1 == 0) goto L15a
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError
            r1.<init>(r0)
            java.lang.String r0 = "server"
            goto L17d
        L15a:
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError
            r1.<init>(r0)
            throw r1
        L160:
            com.czhj.volley.ServerError r1 = new com.czhj.volley.ServerError
            r1.<init>(r0)
            throw r1
        L166:
            com.czhj.volley.AuthFailureError r1 = new com.czhj.volley.AuthFailureError
            r1.<init>(r0)
            goto L171
        L16c:
            com.czhj.volley.AuthFailureError r1 = new com.czhj.volley.AuthFailureError
            r1.<init>(r0)
        L171:
            attemptRetryOnException(r3, r8, r1)
            goto L8
        L176:
            com.czhj.volley.NetworkError r1 = new com.czhj.volley.NetworkError
            r1.<init>(r0)
            java.lang.String r0 = "network"
        L17d:
            attemptRetryOnException(r0, r8, r1)
            goto L8
        L182:
            com.czhj.volley.NoConnectionError r1 = new com.czhj.volley.NoConnectionError
            r1.<init>(r0)
            throw r1
        L188:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Bad URL "
            r2.append(r3)
            java.lang.String r3 = r29.getUrl()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
        L1a4:
            com.czhj.volley.TimeoutError r0 = new com.czhj.volley.TimeoutError
            r0.<init>()
            java.lang.String r1 = "socket"
            attemptRetryOnException(r1, r8, r0)
            goto L8
    }
}
