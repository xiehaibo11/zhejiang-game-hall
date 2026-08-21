package com.tkay.expressad.foundation.g.f.f;

public class a implements com.tkay.expressad.foundation.g.f.g {
    private static final java.lang.String a = null;
    private static final int b = 3000;
    private com.tkay.expressad.foundation.g.f.e.a c;
    private com.tkay.expressad.foundation.g.f.c d;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.f.a> r0 = com.tkay.expressad.foundation.g.f.f.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.f.a.a = r0
            return
    }

    public a(com.tkay.expressad.foundation.g.f.e.a r1, com.tkay.expressad.foundation.g.f.c r2) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.d = r2
            return
    }

    private static void a(long r10, com.tkay.expressad.foundation.g.f.i<?> r12, byte[] r13, int r14) {
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L88
            r0 = 3000(0xbb8, double:1.482E-320)
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            r1 = 5
            r2 = 4
            java.lang.String r3 = "null"
            r4 = 3
            r5 = 2
            r6 = 1
            r7 = 0
            r8 = 6
            if (r0 <= 0) goto L4e
            java.lang.String r0 = "Slow HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L4d
            java.lang.String r9 = r12.d()     // Catch: java.lang.Exception -> L4d
            r8[r7] = r9     // Catch: java.lang.Exception -> L4d
            int r7 = r12.a()     // Catch: java.lang.Exception -> L4d
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L4d
            r8[r6] = r7     // Catch: java.lang.Exception -> L4d
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Exception -> L4d
            r8[r5] = r10     // Catch: java.lang.Exception -> L4d
            if (r13 == 0) goto L34
            int r10 = r13.length     // Catch: java.lang.Exception -> L4d
            java.lang.Integer r3 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> L4d
        L34:
            r8[r4] = r3     // Catch: java.lang.Exception -> L4d
            java.lang.Integer r10 = java.lang.Integer.valueOf(r14)     // Catch: java.lang.Exception -> L4d
            r8[r2] = r10     // Catch: java.lang.Exception -> L4d
            com.tkay.expressad.foundation.g.f.l r10 = r12.l()     // Catch: java.lang.Exception -> L4d
            int r10 = r10.c()     // Catch: java.lang.Exception -> L4d
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> L4d
            r8[r1] = r10     // Catch: java.lang.Exception -> L4d
            java.lang.String.format(r0, r8)     // Catch: java.lang.Exception -> L4d
        L4d:
            return
        L4e:
            java.lang.String r0 = "Normal HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]"
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L88
            java.lang.String r9 = r12.d()     // Catch: java.lang.Exception -> L88
            r8[r7] = r9     // Catch: java.lang.Exception -> L88
            int r7 = r12.a()     // Catch: java.lang.Exception -> L88
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L88
            r8[r6] = r7     // Catch: java.lang.Exception -> L88
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Exception -> L88
            r8[r5] = r10     // Catch: java.lang.Exception -> L88
            if (r13 == 0) goto L6f
            int r10 = r13.length     // Catch: java.lang.Exception -> L88
            java.lang.Integer r3 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> L88
        L6f:
            r8[r4] = r3     // Catch: java.lang.Exception -> L88
            java.lang.Integer r10 = java.lang.Integer.valueOf(r14)     // Catch: java.lang.Exception -> L88
            r8[r2] = r10     // Catch: java.lang.Exception -> L88
            com.tkay.expressad.foundation.g.f.l r10 = r12.l()     // Catch: java.lang.Exception -> L88
            int r10 = r10.c()     // Catch: java.lang.Exception -> L88
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> L88
            r8[r1] = r10     // Catch: java.lang.Exception -> L88
            java.lang.String.format(r0, r8)     // Catch: java.lang.Exception -> L88
        L88:
            return
    }

    private void a(com.tkay.expressad.foundation.g.f.i<?> r2, com.tkay.expressad.foundation.g.f.a.a r3) {
            r1 = this;
            com.tkay.expressad.foundation.g.f.l r0 = r2.l()
            boolean r0 = r0.d()
            if (r0 == 0) goto L10
            com.tkay.expressad.foundation.g.f.c r3 = r1.d
            r3.e(r2)
            return
        L10:
            throw r3
    }

    private static void a(java.lang.String r4, long r5, com.tkay.expressad.foundation.g.f.i<?> r7) {
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L31
            java.lang.String r0 = "HTTP exception for request=<%s> [lifetime=%d], [size=%s], [retryCount=%s]"
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L31
            r2 = 0
            java.lang.String r3 = r7.d()     // Catch: java.lang.Exception -> L31
            r1[r2] = r3     // Catch: java.lang.Exception -> L31
            r2 = 1
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Exception -> L31
            r1[r2] = r5     // Catch: java.lang.Exception -> L31
            r5 = 2
            if (r4 == 0) goto L1b
            goto L1d
        L1b:
            java.lang.String r4 = "null"
        L1d:
            r1[r5] = r4     // Catch: java.lang.Exception -> L31
            r4 = 3
            com.tkay.expressad.foundation.g.f.l r5 = r7.l()     // Catch: java.lang.Exception -> L31
            int r5 = r5.c()     // Catch: java.lang.Exception -> L31
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L31
            r1[r4] = r5     // Catch: java.lang.Exception -> L31
            java.lang.String.format(r0, r1)     // Catch: java.lang.Exception -> L31
        L31:
            return
    }

    @Override
    public final com.tkay.expressad.foundation.g.f.f.c a(com.tkay.expressad.foundation.g.f.i<?> r22) {
            r21 = this;
            r1 = r21
            r2 = r22
            long r3 = android.os.SystemClock.elapsedRealtime()
            if (r2 == 0) goto Lf
            com.tkay.expressad.foundation.g.f.l r0 = r22.l()
            goto L10
        Lf:
            r0 = 0
        L10:
            r6 = 0
            if (r0 == 0) goto L17
            int r6 = r0.a()
        L17:
            r9 = 499(0x1f3, float:6.99E-43)
            java.lang.String r14 = "IOException ex= "
            java.lang.String r15 = "UnknownHostException ex= "
            java.lang.String r13 = "MalformedURLException ex= "
            java.lang.String r5 = "SSLProtocolException ex= "
            java.lang.String r12 = "ConnectException ex= "
            java.lang.String r8 = "ConnectTimeoutException ex= "
            java.lang.String r7 = "SocketTimeoutException ex= "
            r10 = -2
            if (r6 > 0) goto L1ac
            boolean r0 = r22.f()
            if (r0 != 0) goto L19d
            r22.i()     // Catch: java.io.IOException -> L6d java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 java.net.ConnectException -> L134 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            com.tkay.expressad.foundation.g.f.e.a r0 = r1.c     // Catch: java.io.IOException -> L6d java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 java.net.ConnectException -> L134 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            com.tkay.expressad.foundation.g.f.f.b r6 = r0.a(r2)     // Catch: java.io.IOException -> L6d java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 java.net.ConnectException -> L134 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            int r0 = r6.a()     // Catch: java.io.IOException -> L6b java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 java.net.ConnectException -> L134 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            com.tkay.expressad.foundation.g.f.c r10 = r1.d     // Catch: java.io.IOException -> L6b java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 java.net.ConnectException -> L134 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            byte[] r10 = r2.a(r6, r10)     // Catch: java.io.IOException -> L6b java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 java.net.ConnectException -> L134 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            long r17 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 java.net.ConnectException -> L134 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            r19 = r12
            long r11 = r17 - r3
            a(r11, r2, r10, r0)     // Catch: java.net.ConnectException -> L66 java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            r11 = 200(0xc8, float:2.8E-43)
            if (r0 < r11) goto L60
            r11 = 399(0x18f, float:5.59E-43)
            if (r0 > r11) goto L60
            com.tkay.expressad.foundation.g.f.f.c r11 = new com.tkay.expressad.foundation.g.f.f.c     // Catch: java.net.ConnectException -> L66 java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            java.util.List r12 = r6.b()     // Catch: java.net.ConnectException -> L66 java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            r11.<init>(r0, r10, r12)     // Catch: java.net.ConnectException -> L66 java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            return r11
        L60:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.net.ConnectException -> L66 java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            r0.<init>()     // Catch: java.net.ConnectException -> L66 java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
            throw r0     // Catch: java.net.ConnectException -> L66 java.io.IOException -> L69 java.net.UnknownHostException -> Lcf java.net.MalformedURLException -> Lf1 javax.net.ssl.SSLProtocolException -> L112 org.apache.http.conn.ConnectTimeoutException -> L15a java.net.SocketTimeoutException -> L17b
        L66:
            r0 = move-exception
            goto L137
        L69:
            r0 = move-exception
            goto L70
        L6b:
            r0 = move-exception
            goto L6f
        L6d:
            r0 = move-exception
            r6 = 0
        L6f:
            r10 = 0
        L70:
            long r7 = android.os.SystemClock.elapsedRealtime()
            long r7 = r7 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r14)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r7, r2)
            if (r6 == 0) goto Lc6
            int r0 = r6.a()
            if (r10 == 0) goto Lbd
            com.tkay.expressad.foundation.g.f.f.c r2 = new com.tkay.expressad.foundation.g.f.f.c
            java.util.List r3 = r6.b()
            r2.<init>(r0, r10, r3)
            r3 = 400(0x190, float:5.6E-43)
            if (r0 < r3) goto La7
            if (r0 <= r9) goto La0
            goto La7
        La0:
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r3 = 6
            r0.<init>(r3, r2)
            throw r0
        La7:
            r3 = 500(0x1f4, float:7.0E-43)
            if (r0 < r3) goto Lb6
            r3 = 599(0x257, float:8.4E-43)
            if (r0 > r3) goto Lb6
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r3 = 7
            r0.<init>(r3, r2)
            throw r0
        Lb6:
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r3 = 2
            r0.<init>(r3, r2)
            throw r0
        Lbd:
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 15
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        Lc6:
            r3 = 0
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 14
            r0.<init>(r2, r3)
            throw r0
        Lcf:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r15)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 9
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        Lf1:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r13)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 4
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L112:
            r0 = move-exception
            long r6 = android.os.SystemClock.elapsedRealtime()
            long r6 = r6 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r5)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r6, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 11
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L134:
            r0 = move-exception
            r19 = r12
        L137:
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r11 = r19
            r3.<init>(r11)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 12
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L15a:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r8)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 3
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L17b:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r7)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 10
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L19d:
            r3 = 0
            r22.c()
            com.tkay.expressad.foundation.g.f.c r0 = r1.d
            r0.b(r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r0.<init>(r10, r3)
            throw r0
        L1ac:
            r11 = r12
        L1ad:
            boolean r0 = r22.f()
            if (r0 != 0) goto L349
            r22.i()     // Catch: java.io.IOException -> L1f6 java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be java.net.ConnectException -> L2e0 org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            com.tkay.expressad.foundation.g.f.e.a r0 = r1.c     // Catch: java.io.IOException -> L1f6 java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be java.net.ConnectException -> L2e0 org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            com.tkay.expressad.foundation.g.f.f.b r6 = r0.a(r2)     // Catch: java.io.IOException -> L1f6 java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be java.net.ConnectException -> L2e0 org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            int r0 = r6.a()     // Catch: java.io.IOException -> L1f2 java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be java.net.ConnectException -> L2e0 org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            com.tkay.expressad.foundation.g.f.c r12 = r1.d     // Catch: java.io.IOException -> L1f2 java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be java.net.ConnectException -> L2e0 org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            byte[] r12 = r2.a(r6, r12)     // Catch: java.io.IOException -> L1f2 java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be java.net.ConnectException -> L2e0 org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            long r17 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L1ee java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be java.net.ConnectException -> L2e0 org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            r20 = r11
            long r10 = r17 - r3
            a(r10, r2, r12, r0)     // Catch: java.io.IOException -> L1e9 java.net.ConnectException -> L1eb java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            r10 = 200(0xc8, float:2.8E-43)
            if (r0 < r10) goto L1e3
            r10 = 399(0x18f, float:5.59E-43)
            if (r0 > r10) goto L1e3
            com.tkay.expressad.foundation.g.f.f.c r10 = new com.tkay.expressad.foundation.g.f.f.c     // Catch: java.io.IOException -> L1e9 java.net.ConnectException -> L1eb java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            java.util.List r11 = r6.b()     // Catch: java.io.IOException -> L1e9 java.net.ConnectException -> L1eb java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            r10.<init>(r0, r12, r11)     // Catch: java.io.IOException -> L1e9 java.net.ConnectException -> L1eb java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            return r10
        L1e3:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L1e9 java.net.ConnectException -> L1eb java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            r0.<init>()     // Catch: java.io.IOException -> L1e9 java.net.ConnectException -> L1eb java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
            throw r0     // Catch: java.io.IOException -> L1e9 java.net.ConnectException -> L1eb java.net.UnknownHostException -> L27b java.net.MalformedURLException -> L29d javax.net.ssl.SSLProtocolException -> L2be org.apache.http.conn.ConnectTimeoutException -> L306 java.net.SocketTimeoutException -> L327
        L1e9:
            r0 = move-exception
            goto L1fb
        L1eb:
            r0 = move-exception
            goto L2e3
        L1ee:
            r0 = move-exception
            r20 = r11
            goto L1fb
        L1f2:
            r0 = move-exception
            r20 = r11
            goto L1fa
        L1f6:
            r0 = move-exception
            r20 = r11
            r6 = 0
        L1fa:
            r12 = 0
        L1fb:
            long r10 = android.os.SystemClock.elapsedRealtime()
            long r10 = r10 - r3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>(r14)
            java.lang.String r0 = r0.getMessage()
            r9.append(r0)
            java.lang.String r0 = r9.toString()
            a(r0, r10, r2)
            if (r6 == 0) goto L272
            int r0 = r6.a()
            if (r12 == 0) goto L24a
            com.tkay.expressad.foundation.g.f.f.c r2 = new com.tkay.expressad.foundation.g.f.f.c
            java.util.List r3 = r6.b()
            r2.<init>(r0, r12, r3)
            r6 = 400(0x190, float:5.6E-43)
            if (r0 < r6) goto L234
            r9 = 499(0x1f3, float:6.99E-43)
            if (r0 <= r9) goto L22d
            goto L234
        L22d:
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r3 = 6
            r0.<init>(r3, r2)
            throw r0
        L234:
            r10 = 500(0x1f4, float:7.0E-43)
            if (r0 < r10) goto L243
            r11 = 599(0x257, float:8.4E-43)
            if (r0 > r11) goto L243
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r3 = 7
            r0.<init>(r3, r2)
            throw r0
        L243:
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r12 = 2
            r0.<init>(r12, r2)
            throw r0
        L24a:
            r6 = 400(0x190, float:5.6E-43)
            r9 = 499(0x1f3, float:6.99E-43)
            r10 = 500(0x1f4, float:7.0E-43)
            r11 = 599(0x257, float:8.4E-43)
            r12 = 2
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r6 = 15
            r9 = 0
            r0.<init>(r6, r9)
            com.tkay.expressad.foundation.g.f.l r16 = r22.l()
            boolean r16 = r16.d()
            if (r16 == 0) goto L271
            com.tkay.expressad.foundation.g.f.c r0 = r1.d
            r0.e(r2)
            r11 = r20
            r9 = 499(0x1f3, float:6.99E-43)
            r10 = -2
            goto L1ad
        L271:
            throw r0
        L272:
            r9 = 0
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 14
            r0.<init>(r2, r9)
            throw r0
        L27b:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r15)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 9
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L29d:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r13)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 4
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L2be:
            r0 = move-exception
            long r6 = android.os.SystemClock.elapsedRealtime()
            long r6 = r6 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r5)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r6, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 11
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L2e0:
            r0 = move-exception
            r20 = r11
        L2e3:
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r4 = r20
            r3.<init>(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 12
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L306:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r8)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 3
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L327:
            r0 = move-exception
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r5 = r5 - r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r7)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            a(r0, r5, r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = 10
            r3 = 0
            r0.<init>(r2, r3)
            throw r0
        L349:
            r3 = 0
            r22.c()
            com.tkay.expressad.foundation.g.f.c r0 = r1.d
            r0.b(r2)
            com.tkay.expressad.foundation.g.f.a.a r0 = new com.tkay.expressad.foundation.g.f.a.a
            r2 = -2
            r0.<init>(r2, r3)
            throw r0
    }
}
