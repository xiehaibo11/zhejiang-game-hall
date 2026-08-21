package com.bianfeng.netlibsdk;

public class BasicNetwork implements com.bianfeng.netlibsdk.Network {
    private static final int DEFAULT_POOL_SIZE = 4096;
    private final com.bianfeng.netlibsdk.HttpStack mBaseHttpStack;
    protected final com.bianfeng.netlibsdk.HttpStack mHttpStack;
    protected final com.bianfeng.netlibsdk.ByteArrayPool mPool;

    public BasicNetwork(com.bianfeng.netlibsdk.HttpStack r3) {
            r2 = this;
            com.bianfeng.netlibsdk.ByteArrayPool r0 = new com.bianfeng.netlibsdk.ByteArrayPool
            r1 = 4096(0x1000, float:5.74E-42)
            r0.<init>(r1)
            r2.<init>(r3, r0)
            return
    }

    public BasicNetwork(com.bianfeng.netlibsdk.HttpStack r1, com.bianfeng.netlibsdk.ByteArrayPool r2) {
            r0 = this;
            r0.<init>()
            r0.mHttpStack = r1
            r0.mBaseHttpStack = r1
            r0.mPool = r2
            return
    }

    private static void attemptRetryOnException(java.lang.String r5, com.bianfeng.netlibsdk.Request<?> r6, com.bianfeng.netlibsdk.utils.NetException r7) throws com.bianfeng.netlibsdk.utils.NetException {
            com.bianfeng.netlibsdk.RetryPolicy r0 = r6.getRetryPolicy()
            int r1 = r6.getTimeoutMs()
            r2 = 1
            r3 = 0
            r4 = 2
            r0.retry(r7)     // Catch: com.bianfeng.netlibsdk.utils.NetException -> L22
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

    private byte[] inputStreamToBytes(java.io.InputStream r5, int r6) throws com.bianfeng.netlibsdk.utils.NetException {
            r4 = this;
            com.bianfeng.netlibsdk.PoolingByteArrayOutputStream r0 = new com.bianfeng.netlibsdk.PoolingByteArrayOutputStream
            com.bianfeng.netlibsdk.ByteArrayPool r1 = r4.mPool
            r0.<init>(r1, r6)
            java.lang.String r6 = "Error occurred when closing InputStream"
            r1 = 0
            if (r5 == 0) goto L3f
            com.bianfeng.netlibsdk.ByteArrayPool r2 = r4.mPool     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            r3 = 1024(0x400, float:1.435E-42)
            byte[] r1 = r2.getBuf(r3)     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
        L14:
            int r2 = r5.read(r1)     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            r3 = -1
            if (r2 == r3) goto L20
            r3 = 0
            r0.write(r1, r3, r2)     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            goto L14
        L20:
            byte[] r2 = r0.toByteArray()     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            if (r5 == 0) goto L2d
            r5.close()     // Catch: java.lang.Exception -> L2a
            goto L2d
        L2a:
            com.bianfeng.netlibsdk.utils.NetLogger.i(r6)
        L2d:
            com.bianfeng.netlibsdk.ByteArrayPool r5 = r4.mPool
            r5.returnBuf(r1)
            r0.close()     // Catch: java.lang.Exception -> L36
            goto L3a
        L36:
            r5 = move-exception
            r5.printStackTrace()
        L3a:
            return r2
        L3b:
            r2 = move-exception
            goto L4d
        L3d:
            r2 = move-exception
            goto L47
        L3f:
            com.bianfeng.netlibsdk.utils.NetException r2 = new com.bianfeng.netlibsdk.utils.NetException     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            java.lang.String r3 = " InputStream is null"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            throw r2     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
        L47:
            com.bianfeng.netlibsdk.utils.NetException r3 = new com.bianfeng.netlibsdk.utils.NetException     // Catch: java.lang.Throwable -> L3b
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L3b
            throw r3     // Catch: java.lang.Throwable -> L3b
        L4d:
            if (r5 == 0) goto L56
            r5.close()     // Catch: java.lang.Exception -> L53
            goto L56
        L53:
            com.bianfeng.netlibsdk.utils.NetLogger.i(r6)
        L56:
            com.bianfeng.netlibsdk.ByteArrayPool r5 = r4.mPool
            r5.returnBuf(r1)
            r0.close()     // Catch: java.lang.Exception -> L5f
            goto L63
        L5f:
            r5 = move-exception
            r5.printStackTrace()
        L63:
            throw r2
    }

    private void logSlowRequests(long r3, com.bianfeng.netlibsdk.Request<?> r5, byte[] r6, int r7) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HTTP response for request=<%s> [lifetime=%d], [size=%s],[rc=%d], [retryCount=%s]"
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            r0.append(r3)
            if (r6 == 0) goto L1c
            int r3 = r6.length
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            goto L1e
        L1c:
            java.lang.String r3 = "null"
        L1e:
            r0.append(r3)
            r0.append(r7)
            com.bianfeng.netlibsdk.RetryPolicy r3 = r5.getRetryPolicy()
            int r3 = r3.getCurrentRetryCount()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.netlibsdk.utils.NetLogger.i(r3)
            return
    }

    @Override
    public com.bianfeng.netlibsdk.NetworkResponse performRequest(com.bianfeng.netlibsdk.Request<?> r14) throws com.bianfeng.netlibsdk.utils.NetException {
            r13 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
        L4:
            java.util.List r2 = java.util.Collections.emptyList()
            r3 = 0
            com.bianfeng.netlibsdk.HttpStack r4 = r13.mBaseHttpStack     // Catch: java.io.IOException -> L5a java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            com.bianfeng.netlibsdk.HttpResponse r4 = r4.executeRequest(r14)     // Catch: java.io.IOException -> L5a java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            int r11 = r4.getStatusCode()     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            java.util.List r2 = r4.getHeaders()     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            java.io.InputStream r5 = r4.getContent()     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            if (r5 == 0) goto L26
            int r6 = r4.getContentLength()     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            byte[] r3 = r13.inputStreamToBytes(r5, r6)     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            goto L29
        L26:
            r5 = 0
            byte[] r3 = new byte[r5]     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
        L29:
            long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            long r6 = r5 - r0
            r5 = r13
            r8 = r14
            r9 = r3
            r10 = r11
            r5.logSlowRequests(r6, r8, r9, r10)     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            r5 = 200(0xc8, float:2.8E-43)
            if (r11 < r5) goto L4f
            r5 = 299(0x12b, float:4.19E-43)
            if (r11 > r5) goto L4f
            com.bianfeng.netlibsdk.NetworkResponse r12 = new com.bianfeng.netlibsdk.NetworkResponse     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            r8 = 0
            long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            long r9 = r5 - r0
            r5 = r12
            r6 = r11
            r7 = r3
            r11 = r2
            r5.<init>(r6, r7, r8, r9, r11)     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            return r12
        L4f:
            java.io.IOException r5 = new java.io.IOException     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            r5.<init>()     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
            throw r5     // Catch: java.io.IOException -> L55 java.net.MalformedURLException -> Lfe java.net.SocketTimeoutException -> L11a
        L55:
            r5 = move-exception
            r12 = r2
            r8 = r3
            r3 = r4
            goto L5d
        L5a:
            r5 = move-exception
            r12 = r2
            r8 = r3
        L5d:
            if (r3 == 0) goto Le6
            int r2 = r3.getStatusCode()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Unexpected response code %d for %s"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = r14.getUrl()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.bianfeng.netlibsdk.utils.NetLogger.i(r3)
            if (r8 == 0) goto Ld8
            com.bianfeng.netlibsdk.NetworkResponse r3 = new com.bianfeng.netlibsdk.NetworkResponse
            r9 = 0
            long r4 = android.os.SystemClock.elapsedRealtime()
            long r10 = r4 - r0
            r6 = r3
            r7 = r2
            r6.<init>(r7, r8, r9, r10, r12)
            r4 = 401(0x191, float:5.62E-43)
            if (r2 == r4) goto Lcc
            r4 = 403(0x193, float:5.65E-43)
            if (r2 != r4) goto L97
            goto Lcc
        L97:
            r4 = 400(0x190, float:5.6E-43)
            if (r2 < r4) goto La6
            r4 = 499(0x1f3, float:6.99E-43)
            if (r2 <= r4) goto La0
            goto La6
        La0:
            com.bianfeng.netlibsdk.utils.NetException r14 = new com.bianfeng.netlibsdk.utils.NetException
            r14.<init>(r3)
            throw r14
        La6:
            r4 = 500(0x1f4, float:7.0E-43)
            if (r2 < r4) goto Lc6
            r4 = 599(0x257, float:8.4E-43)
            if (r2 > r4) goto Lc6
            boolean r2 = r14.shouldRetryServerErrors()
            if (r2 == 0) goto Lc0
            com.bianfeng.netlibsdk.utils.NetException r2 = new com.bianfeng.netlibsdk.utils.NetException
            r2.<init>(r3)
            java.lang.String r3 = "server"
            attemptRetryOnException(r3, r14, r2)
            goto L4
        Lc0:
            com.bianfeng.netlibsdk.utils.NetException r14 = new com.bianfeng.netlibsdk.utils.NetException
            r14.<init>(r3)
            throw r14
        Lc6:
            com.bianfeng.netlibsdk.utils.NetException r14 = new com.bianfeng.netlibsdk.utils.NetException
            r14.<init>(r3)
            throw r14
        Lcc:
            com.bianfeng.netlibsdk.utils.NetException r2 = new com.bianfeng.netlibsdk.utils.NetException
            r2.<init>(r3)
            java.lang.String r3 = "auth"
            attemptRetryOnException(r3, r14, r2)
            goto L4
        Ld8:
            com.bianfeng.netlibsdk.utils.NetException r2 = new com.bianfeng.netlibsdk.utils.NetException
            java.lang.String r3 = "responseContents is null"
            r2.<init>(r3)
            java.lang.String r3 = "network"
            attemptRetryOnException(r3, r14, r2)
            goto L4
        Le6:
            boolean r2 = r14.shouldRetryConnectionErrors()
            if (r2 == 0) goto Lf8
            com.bianfeng.netlibsdk.utils.NetException r2 = new com.bianfeng.netlibsdk.utils.NetException
            r2.<init>(r5)
            java.lang.String r3 = "connection"
            attemptRetryOnException(r3, r14, r2)
            goto L4
        Lf8:
            com.bianfeng.netlibsdk.utils.NetException r14 = new com.bianfeng.netlibsdk.utils.NetException
            r14.<init>(r5)
            throw r14
        Lfe:
            r0 = move-exception
            com.bianfeng.netlibsdk.utils.NetException r1 = new com.bianfeng.netlibsdk.utils.NetException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Bad URL "
            r2.append(r3)
            java.lang.String r14 = r14.getUrl()
            r2.append(r14)
            java.lang.String r14 = r2.toString()
            r1.<init>(r14, r0)
            throw r1
        L11a:
            r2 = move-exception
            com.bianfeng.netlibsdk.utils.NetException r3 = new com.bianfeng.netlibsdk.utils.NetException
            r3.<init>(r2)
            java.lang.String r2 = "socket"
            attemptRetryOnException(r2, r14, r3)
            goto L4
    }
}
