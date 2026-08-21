package com.mbridge.msdk.foundation.same.net.e;

public class a implements com.mbridge.msdk.foundation.same.net.g {
    private static final java.lang.String a = null;
    private com.mbridge.msdk.foundation.same.net.stack.a b;
    private com.mbridge.msdk.foundation.same.net.c c;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.e.a> r0 = com.mbridge.msdk.foundation.same.net.e.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.e.a.a = r0
            return
    }

    public a(com.mbridge.msdk.foundation.same.net.stack.a r1, com.mbridge.msdk.foundation.same.net.c r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            return
    }

    private void a(long r13, com.mbridge.msdk.foundation.same.net.i<?> r15, byte[] r16, int r17) {
            r12 = this;
            r0 = r16
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L96
            r1 = 3000(0xbb8, double:1.482E-320)
            int r1 = (r13 > r1 ? 1 : (r13 == r1 ? 0 : -1))
            r2 = 5
            r3 = 4
            java.lang.String r4 = "null"
            r5 = 3
            r6 = 2
            r7 = 1
            r8 = 0
            r9 = 6
            if (r1 <= 0) goto L56
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.e.a.a     // Catch: java.lang.Exception -> L96
            java.lang.String r10 = "Slow HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> L96
            java.lang.String r11 = r15.b()     // Catch: java.lang.Exception -> L96
            r9[r8] = r11     // Catch: java.lang.Exception -> L96
            int r8 = r15.a()     // Catch: java.lang.Exception -> L96
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L96
            r9[r7] = r8     // Catch: java.lang.Exception -> L96
            java.lang.Long r7 = java.lang.Long.valueOf(r13)     // Catch: java.lang.Exception -> L96
            r9[r6] = r7     // Catch: java.lang.Exception -> L96
            if (r0 == 0) goto L38
            int r0 = r0.length     // Catch: java.lang.Exception -> L96
            java.lang.Integer r4 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L96
        L38:
            r9[r5] = r4     // Catch: java.lang.Exception -> L96
            java.lang.Integer r0 = java.lang.Integer.valueOf(r17)     // Catch: java.lang.Exception -> L96
            r9[r3] = r0     // Catch: java.lang.Exception -> L96
            com.mbridge.msdk.foundation.same.net.l r0 = r15.m()     // Catch: java.lang.Exception -> L96
            int r0 = r0.c()     // Catch: java.lang.Exception -> L96
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L96
            r9[r2] = r0     // Catch: java.lang.Exception -> L96
            java.lang.String r0 = java.lang.String.format(r10, r9)     // Catch: java.lang.Exception -> L96
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Exception -> L96
            goto L96
        L56:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.e.a.a     // Catch: java.lang.Exception -> L96
            java.lang.String r10 = "Normal HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> L96
            java.lang.String r11 = r15.b()     // Catch: java.lang.Exception -> L96
            r9[r8] = r11     // Catch: java.lang.Exception -> L96
            int r8 = r15.a()     // Catch: java.lang.Exception -> L96
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L96
            r9[r7] = r8     // Catch: java.lang.Exception -> L96
            java.lang.Long r7 = java.lang.Long.valueOf(r13)     // Catch: java.lang.Exception -> L96
            r9[r6] = r7     // Catch: java.lang.Exception -> L96
            if (r0 == 0) goto L79
            int r0 = r0.length     // Catch: java.lang.Exception -> L96
            java.lang.Integer r4 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L96
        L79:
            r9[r5] = r4     // Catch: java.lang.Exception -> L96
            java.lang.Integer r0 = java.lang.Integer.valueOf(r17)     // Catch: java.lang.Exception -> L96
            r9[r3] = r0     // Catch: java.lang.Exception -> L96
            com.mbridge.msdk.foundation.same.net.l r0 = r15.m()     // Catch: java.lang.Exception -> L96
            int r0 = r0.c()     // Catch: java.lang.Exception -> L96
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L96
            r9[r2] = r0     // Catch: java.lang.Exception -> L96
            java.lang.String r0 = java.lang.String.format(r10, r9)     // Catch: java.lang.Exception -> L96
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Exception -> L96
        L96:
            return
    }

    private void a(java.lang.String r6, long r7, com.mbridge.msdk.foundation.same.net.i<?> r9) {
            r5 = this;
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L37
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.e.a.a     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = "HTTP exception for request=<%s> [lifetime=%d], [size=%s], [retryCount=%s]"
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L37
            r3 = 0
            java.lang.String r4 = r9.b()     // Catch: java.lang.Exception -> L37
            r2[r3] = r4     // Catch: java.lang.Exception -> L37
            r3 = 1
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Exception -> L37
            r2[r3] = r7     // Catch: java.lang.Exception -> L37
            r7 = 2
            if (r6 == 0) goto L1d
            goto L1f
        L1d:
            java.lang.String r6 = "null"
        L1f:
            r2[r7] = r6     // Catch: java.lang.Exception -> L37
            r6 = 3
            com.mbridge.msdk.foundation.same.net.l r7 = r9.m()     // Catch: java.lang.Exception -> L37
            int r7 = r7.c()     // Catch: java.lang.Exception -> L37
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L37
            r2[r6] = r7     // Catch: java.lang.Exception -> L37
            java.lang.String r6 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L37
            com.mbridge.msdk.foundation.tools.z.b(r0, r6)     // Catch: java.lang.Exception -> L37
        L37:
            return
    }

    @Override
    public final com.mbridge.msdk.foundation.same.net.e.c a(com.mbridge.msdk.foundation.same.net.i<?> r28) throws com.mbridge.msdk.foundation.same.net.a.a {
            r27 = this;
            r7 = r27
            r8 = r28
            long r9 = android.os.SystemClock.elapsedRealtime()
            if (r8 == 0) goto Lf
            com.mbridge.msdk.foundation.same.net.l r0 = r28.m()
            goto L10
        Lf:
            r0 = 0
        L10:
            r1 = 0
            if (r0 == 0) goto L17
            int r1 = r0.a()
        L17:
            r5 = 14
            java.lang.String r4 = "IOException ex= "
            r2 = 9
            java.lang.String r3 = "UnknownHostException ex= "
            java.lang.String r11 = "MalformedURLException ex= "
            java.lang.String r12 = "SSLProtocolException ex= "
            java.lang.String r14 = "ConnectException ex= "
            java.lang.String r13 = "ConnectTimeoutException ex= "
            java.lang.String r15 = "SocketTimeoutException ex= "
            java.lang.String r6 = "perform-discard-cancelled"
            if (r1 > 0) goto L207
            boolean r0 = r28.c()
            if (r0 != 0) goto L1f7
            r28.f()     // Catch: java.io.IOException -> La5 java.net.UnknownHostException -> L10e java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158 java.net.ConnectException -> L17d org.apache.http.conn.ConnectTimeoutException -> L1a6 java.net.SocketTimeoutException -> L1ce
            com.mbridge.msdk.foundation.same.net.stack.a r0 = r7.b     // Catch: java.io.IOException -> La5 java.net.UnknownHostException -> L10e java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158 java.net.ConnectException -> L17d org.apache.http.conn.ConnectTimeoutException -> L1a6 java.net.SocketTimeoutException -> L1ce
            com.mbridge.msdk.foundation.same.net.e.b r6 = r0.performRequest(r8)     // Catch: java.io.IOException -> La5 java.net.UnknownHostException -> L10e java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158 java.net.ConnectException -> L17d org.apache.http.conn.ConnectTimeoutException -> L1a6 java.net.SocketTimeoutException -> L1ce
            int r0 = r6.a()     // Catch: java.io.IOException -> L9d java.net.UnknownHostException -> L10e java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158 java.net.ConnectException -> L17d org.apache.http.conn.ConnectTimeoutException -> L1a6 java.net.SocketTimeoutException -> L1ce
            com.mbridge.msdk.foundation.same.net.c r1 = r7.c     // Catch: java.io.IOException -> L9d java.net.UnknownHostException -> L10e java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158 java.net.ConnectException -> L17d org.apache.http.conn.ConnectTimeoutException -> L1a6 java.net.SocketTimeoutException -> L1ce
            byte[] r1 = r8.a(r6, r1)     // Catch: java.io.IOException -> L9d java.net.UnknownHostException -> L10e java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158 java.net.ConnectException -> L17d org.apache.http.conn.ConnectTimeoutException -> L1a6 java.net.SocketTimeoutException -> L1ce
            long r17 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L95 java.net.UnknownHostException -> L10e java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158 java.net.ConnectException -> L17d org.apache.http.conn.ConnectTimeoutException -> L1a6 java.net.SocketTimeoutException -> L1ce
            long r17 = r17 - r9
            r19 = r1
            r1 = r27
            r20 = r15
            r15 = r3
            r2 = r17
            r18 = r13
            r13 = r4
            r4 = r28
            r21 = r14
            r14 = r5
            r5 = r19
            r16 = r6
            r14 = 15
            r6 = r0
            r1.a(r2, r4, r5, r6)     // Catch: java.io.IOException -> L85 java.net.UnknownHostException -> L89 java.net.ConnectException -> L8c org.apache.http.conn.ConnectTimeoutException -> L8f java.net.SocketTimeoutException -> L92 java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto L7b
            r1 = 399(0x18f, float:5.59E-43)
            if (r0 > r1) goto L7b
            com.mbridge.msdk.foundation.same.net.e.c r1 = new com.mbridge.msdk.foundation.same.net.e.c     // Catch: java.io.IOException -> L85 java.net.UnknownHostException -> L89 java.net.ConnectException -> L8c org.apache.http.conn.ConnectTimeoutException -> L8f java.net.SocketTimeoutException -> L92 java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158
            java.util.List r2 = r16.b()     // Catch: java.io.IOException -> L85 java.net.UnknownHostException -> L89 java.net.ConnectException -> L8c org.apache.http.conn.ConnectTimeoutException -> L8f java.net.SocketTimeoutException -> L92 java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158
            r3 = r19
            r1.<init>(r0, r3, r2)     // Catch: java.io.IOException -> L83 java.net.UnknownHostException -> L89 java.net.ConnectException -> L8c org.apache.http.conn.ConnectTimeoutException -> L8f java.net.SocketTimeoutException -> L92 java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158
            return r1
        L7b:
            r3 = r19
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L83 java.net.UnknownHostException -> L89 java.net.ConnectException -> L8c org.apache.http.conn.ConnectTimeoutException -> L8f java.net.SocketTimeoutException -> L92 java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158
            r0.<init>()     // Catch: java.io.IOException -> L83 java.net.UnknownHostException -> L89 java.net.ConnectException -> L8c org.apache.http.conn.ConnectTimeoutException -> L8f java.net.SocketTimeoutException -> L92 java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158
            throw r0     // Catch: java.io.IOException -> L83 java.net.UnknownHostException -> L89 java.net.ConnectException -> L8c org.apache.http.conn.ConnectTimeoutException -> L8f java.net.SocketTimeoutException -> L92 java.net.MalformedURLException -> L134 javax.net.ssl.SSLProtocolException -> L158
        L83:
            r0 = move-exception
            goto Lac
        L85:
            r0 = move-exception
            r3 = r19
            goto Lac
        L89:
            r0 = move-exception
            goto L110
        L8c:
            r0 = move-exception
            goto L180
        L8f:
            r0 = move-exception
            goto L1a9
        L92:
            r0 = move-exception
            goto L1d1
        L95:
            r0 = move-exception
            r3 = r1
            r13 = r4
            r16 = r6
            r14 = 15
            goto Lac
        L9d:
            r0 = move-exception
            r13 = r4
            r16 = r6
            r14 = 15
            r3 = 0
            goto Lac
        La5:
            r0 = move-exception
            r13 = r4
            r14 = 15
            r3 = 0
            r16 = 0
        Lac:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r13)
            java.lang.String r0 = r0.getMessage()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r7.a(r0, r1, r8)
            if (r16 == 0) goto L105
            int r0 = r16.a()
            if (r3 == 0) goto Lfe
            com.mbridge.msdk.foundation.same.net.e.c r1 = new com.mbridge.msdk.foundation.same.net.e.c
            java.util.List r2 = r16.b()
            r1.<init>(r0, r3, r2)
            r2 = 400(0x190, float:5.6E-43)
            if (r0 < r2) goto Le8
            r2 = 499(0x1f3, float:6.99E-43)
            if (r0 <= r2) goto Le1
            goto Le8
        Le1:
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 6
            r0.<init>(r2, r1)
            throw r0
        Le8:
            r2 = 500(0x1f4, float:7.0E-43)
            if (r0 < r2) goto Lf7
            r2 = 599(0x257, float:8.4E-43)
            if (r0 > r2) goto Lf7
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 7
            r0.<init>(r2, r1)
            throw r0
        Lf7:
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 2
            r0.<init>(r2, r1)
            throw r0
        Lfe:
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 0
            r0.<init>(r14, r1)
            throw r0
        L105:
            r1 = 0
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 14
            r0.<init>(r2, r1)
            throw r0
        L10e:
            r0 = move-exception
            r15 = r3
        L110:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r15)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 9
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L134:
            r0 = move-exception
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r11)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 4
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L158:
            r0 = move-exception
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r12)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 11
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L17d:
            r0 = move-exception
            r21 = r14
        L180:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r5 = r21
            r3.append(r5)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 12
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L1a6:
            r0 = move-exception
            r18 = r13
        L1a9:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = r18
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 3
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L1ce:
            r0 = move-exception
            r20 = r15
        L1d1:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = r20
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 10
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L1f7:
            r2 = 0
            r8.a(r6)
            com.mbridge.msdk.foundation.same.net.c r0 = r7.c
            r0.b(r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r3 = -2
            r0.<init>(r3, r2)
            throw r0
        L207:
            r5 = r14
            r2 = r15
            r14 = 15
            r15 = r3
            r3 = -2
            r26 = r13
            r13 = r4
            r4 = r26
        L212:
            boolean r0 = r28.c()
            if (r0 != 0) goto L406
            r28.f()     // Catch: java.io.IOException -> L28f java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367 java.net.ConnectException -> L38c org.apache.http.conn.ConnectTimeoutException -> L3b5 java.net.SocketTimeoutException -> L3dd
            com.mbridge.msdk.foundation.same.net.stack.a r0 = r7.b     // Catch: java.io.IOException -> L28f java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367 java.net.ConnectException -> L38c org.apache.http.conn.ConnectTimeoutException -> L3b5 java.net.SocketTimeoutException -> L3dd
            com.mbridge.msdk.foundation.same.net.e.b r1 = r0.performRequest(r8)     // Catch: java.io.IOException -> L28f java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367 java.net.ConnectException -> L38c org.apache.http.conn.ConnectTimeoutException -> L3b5 java.net.SocketTimeoutException -> L3dd
            int r0 = r1.a()     // Catch: java.io.IOException -> L282 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367 java.net.ConnectException -> L38c org.apache.http.conn.ConnectTimeoutException -> L3b5 java.net.SocketTimeoutException -> L3dd
            com.mbridge.msdk.foundation.same.net.c r3 = r7.c     // Catch: java.io.IOException -> L282 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367 java.net.ConnectException -> L38c org.apache.http.conn.ConnectTimeoutException -> L3b5 java.net.SocketTimeoutException -> L3dd
            byte[] r3 = r8.a(r1, r3)     // Catch: java.io.IOException -> L282 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367 java.net.ConnectException -> L38c org.apache.http.conn.ConnectTimeoutException -> L3b5 java.net.SocketTimeoutException -> L3dd
            long r18 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L276 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367 java.net.ConnectException -> L38c org.apache.http.conn.ConnectTimeoutException -> L3b5 java.net.SocketTimeoutException -> L3dd
            long r18 = r18 - r9
            r20 = r1
            r1 = r27
            r22 = r2
            r21 = r3
            r16 = -2
            r2 = r18
            r23 = r4
            r4 = r28
            r24 = r5
            r5 = r21
            r25 = r6
            r6 = r0
            r1.a(r2, r4, r5, r6)     // Catch: java.io.IOException -> L269 java.net.ConnectException -> L26d org.apache.http.conn.ConnectTimeoutException -> L270 java.net.SocketTimeoutException -> L273 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto L25f
            r1 = 399(0x18f, float:5.59E-43)
            if (r0 > r1) goto L25f
            com.mbridge.msdk.foundation.same.net.e.c r1 = new com.mbridge.msdk.foundation.same.net.e.c     // Catch: java.io.IOException -> L269 java.net.ConnectException -> L26d org.apache.http.conn.ConnectTimeoutException -> L270 java.net.SocketTimeoutException -> L273 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367
            java.util.List r2 = r20.b()     // Catch: java.io.IOException -> L269 java.net.ConnectException -> L26d org.apache.http.conn.ConnectTimeoutException -> L270 java.net.SocketTimeoutException -> L273 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367
            r3 = r21
            r1.<init>(r0, r3, r2)     // Catch: java.io.IOException -> L267 java.net.ConnectException -> L26d org.apache.http.conn.ConnectTimeoutException -> L270 java.net.SocketTimeoutException -> L273 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367
            return r1
        L25f:
            r3 = r21
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L267 java.net.ConnectException -> L26d org.apache.http.conn.ConnectTimeoutException -> L270 java.net.SocketTimeoutException -> L273 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367
            r0.<init>()     // Catch: java.io.IOException -> L267 java.net.ConnectException -> L26d org.apache.http.conn.ConnectTimeoutException -> L270 java.net.SocketTimeoutException -> L273 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367
            throw r0     // Catch: java.io.IOException -> L267 java.net.ConnectException -> L26d org.apache.http.conn.ConnectTimeoutException -> L270 java.net.SocketTimeoutException -> L273 java.net.UnknownHostException -> L31e java.net.MalformedURLException -> L343 javax.net.ssl.SSLProtocolException -> L367
        L267:
            r0 = move-exception
            goto L29b
        L269:
            r0 = move-exception
            r3 = r21
            goto L29b
        L26d:
            r0 = move-exception
            goto L38f
        L270:
            r0 = move-exception
            goto L3b8
        L273:
            r0 = move-exception
            goto L3e0
        L276:
            r0 = move-exception
            r20 = r1
            r22 = r2
            r23 = r4
            r24 = r5
            r25 = r6
            goto L29b
        L282:
            r0 = move-exception
            r20 = r1
            r22 = r2
            r23 = r4
            r24 = r5
            r25 = r6
            r3 = 0
            goto L29b
        L28f:
            r0 = move-exception
            r22 = r2
            r23 = r4
            r24 = r5
            r25 = r6
            r3 = 0
            r20 = 0
        L29b:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r13)
            java.lang.String r0 = r0.getMessage()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r7.a(r0, r1, r8)
            if (r20 == 0) goto L315
            int r0 = r20.a()
            if (r3 == 0) goto L2ed
            com.mbridge.msdk.foundation.same.net.e.c r1 = new com.mbridge.msdk.foundation.same.net.e.c
            java.util.List r2 = r20.b()
            r1.<init>(r0, r3, r2)
            r2 = 400(0x190, float:5.6E-43)
            if (r0 < r2) goto L2d7
            r3 = 499(0x1f3, float:6.99E-43)
            if (r0 <= r3) goto L2d0
            goto L2d7
        L2d0:
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 6
            r0.<init>(r2, r1)
            throw r0
        L2d7:
            r4 = 500(0x1f4, float:7.0E-43)
            if (r0 < r4) goto L2e6
            r2 = 599(0x257, float:8.4E-43)
            if (r0 > r2) goto L2e6
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 7
            r0.<init>(r2, r1)
            throw r0
        L2e6:
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r5 = 2
            r0.<init>(r5, r1)
            throw r0
        L2ed:
            r2 = 400(0x190, float:5.6E-43)
            r3 = 499(0x1f3, float:6.99E-43)
            r4 = 500(0x1f4, float:7.0E-43)
            r5 = 2
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 0
            r0.<init>(r14, r1)
            com.mbridge.msdk.foundation.same.net.l r6 = r28.m()
            boolean r6 = r6.a(r0)
            if (r6 == 0) goto L314
            com.mbridge.msdk.foundation.same.net.c r0 = r7.c
            r0.e(r8)
            r2 = r22
            r4 = r23
            r5 = r24
            r6 = r25
            r3 = -2
            goto L212
        L314:
            throw r0
        L315:
            r1 = 0
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r2 = 14
            r0.<init>(r2, r1)
            throw r0
        L31e:
            r0 = move-exception
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r15)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 9
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L343:
            r0 = move-exception
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r11)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 4
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L367:
            r0 = move-exception
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r12)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 11
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L38c:
            r0 = move-exception
            r24 = r5
        L38f:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = r24
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 12
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L3b5:
            r0 = move-exception
            r23 = r4
        L3b8:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = r23
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 3
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L3dd:
            r0 = move-exception
            r22 = r2
        L3e0:
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = r22
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r7.a(r0, r1, r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = 10
            r2 = 0
            r0.<init>(r1, r2)
            throw r0
        L406:
            r1 = r6
            r2 = 0
            r8.a(r1)
            com.mbridge.msdk.foundation.same.net.c r0 = r7.c
            r0.b(r8)
            com.mbridge.msdk.foundation.same.net.a.a r0 = new com.mbridge.msdk.foundation.same.net.a.a
            r1 = -2
            r0.<init>(r1, r2)
            throw r0
    }
}
