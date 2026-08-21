package com.tkay.core.common.res.image;

public abstract class b {
    private final java.lang.String a;
    protected java.lang.String c;
    protected boolean d;
    protected long e;
    protected long f;
    protected long g;
    protected long h;
    protected long i;

    final class 1 extends com.tkay.core.common.l.b.b {
        final com.tkay.core.common.res.image.b a;

        1(com.tkay.core.common.res.image.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        private void b(java.lang.String r8) {
                r7 = this;
                java.lang.String r0 = "-10000"
                com.tkay.core.common.res.image.b r1 = r7.a
                long r2 = java.lang.System.currentTimeMillis()
                r1.e = r2
                com.tkay.core.common.res.image.b r1 = r7.a
                long r2 = android.os.SystemClock.elapsedRealtime()
                r1.f = r2
                r1 = 0
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L195 java.lang.Error -> L1ad java.lang.StackOverflowError -> L1c8 java.lang.OutOfMemoryError -> L1e3 org.apache.http.conn.ConnectTimeoutException -> L1fe java.net.SocketTimeoutException -> L20e
                com.tkay.core.common.res.image.b.a(r2)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L195 java.lang.Error -> L1ad java.lang.StackOverflowError -> L1c8 java.lang.OutOfMemoryError -> L1e3 org.apache.http.conn.ConnectTimeoutException -> L1fe java.net.SocketTimeoutException -> L20e
                java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L195 java.lang.Error -> L1ad java.lang.StackOverflowError -> L1c8 java.lang.OutOfMemoryError -> L1e3 org.apache.http.conn.ConnectTimeoutException -> L1fe java.net.SocketTimeoutException -> L20e
                r2.<init>(r8)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L195 java.lang.Error -> L1ad java.lang.StackOverflowError -> L1c8 java.lang.OutOfMemoryError -> L1e3 org.apache.http.conn.ConnectTimeoutException -> L1fe java.net.SocketTimeoutException -> L20e
                java.net.URLConnection r2 = r2.openConnection()     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L195 java.lang.Error -> L1ad java.lang.StackOverflowError -> L1c8 java.lang.OutOfMemoryError -> L1e3 org.apache.http.conn.ConnectTimeoutException -> L1fe java.net.SocketTimeoutException -> L20e
                java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L195 java.lang.Error -> L1ad java.lang.StackOverflowError -> L1c8 java.lang.OutOfMemoryError -> L1e3 org.apache.http.conn.ConnectTimeoutException -> L1fe java.net.SocketTimeoutException -> L20e
                r1 = 0
                r2.setInstanceFollowRedirects(r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r1 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.util.Map r1 = r1.a()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r1 == 0) goto L70
                int r3 = r1.size()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r3 <= 0) goto L70
                java.util.Set r3 = r1.keySet()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
            L3d:
                boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r4 == 0) goto L70
                java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.Object r5 = r1.get(r4)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r2.addRequestProperty(r4, r5)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r5 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b.a(r5)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r6 = "REQUEST ADDED HEADER: \n"
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r5.append(r4)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r6 = "  :  "
                r5.append(r6)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.Object r4 = r1.get(r4)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r5.append(r4)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                goto L3d
            L70:
                com.tkay.core.common.res.image.b r1 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                boolean r1 = r1.d     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r3 = "Task had been canceled."
                java.lang.String r4 = "-10001"
                if (r1 == 0) goto L85
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.a(r4, r3)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r2 == 0) goto L84
                r2.disconnect()
            L84:
                return
            L85:
                r1 = 60000(0xea60, float:8.4078E-41)
                r2.setConnectTimeout(r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r2.connect()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                int r1 = r2.getResponseCode()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r5 = 200(0xc8, float:2.8E-43)
                if (r1 == r5) goto L107
                com.tkay.core.common.res.image.b r5 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b.a(r5)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r6 = "http respond status code is "
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r5.append(r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r6 = " ! url="
                r5.append(r6)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r5.append(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8 = 302(0x12e, float:4.23E-43)
                if (r1 == r8) goto Lc9
                r8 = 301(0x12d, float:4.22E-43)
                if (r1 == r8) goto Lc9
                r8 = 307(0x133, float:4.3E-43)
                if (r1 != r8) goto Lba
                goto Lc9
            Lba:
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r1 = r2.getResponseMessage()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.a(r0, r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r2 == 0) goto Lc8
                r2.disconnect()
            Lc8:
                return
            Lc9:
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                boolean r8 = r8.d     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r8 != 0) goto Lfc
                java.lang.String r8 = "Location"
                java.lang.String r8 = r2.getHeaderField(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r8 == 0) goto L101
                java.lang.String r1 = r8.toLowerCase()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r3 = "http"
                boolean r1 = r1.startsWith(r3)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r1 != 0) goto Lf8
                com.tkay.core.common.res.image.b r1 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r3 = "Final url is wrong:"
                java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r8 = r3.concat(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r1.a(r0, r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r2 == 0) goto Lf7
                r2.disconnect()
            Lf7:
                return
            Lf8:
                r7.b(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                goto L101
            Lfc:
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.a(r4, r3)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
            L101:
                if (r2 == 0) goto L106
                r2.disconnect()
            L106:
                return
            L107:
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                boolean r8 = r8.d     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r8 == 0) goto L118
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.a(r4, r3)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r2 == 0) goto L117
                r2.disconnect()
            L117:
                return
            L118:
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                int r1 = r2.getContentLength()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                long r3 = (long) r1     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.i = r3     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.io.InputStream r8 = r2.getInputStream()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r1 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                boolean r1 = r1.a(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r8 == 0) goto L130
                r8.close()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
            L130:
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.g = r3     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.h = r3     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                if (r1 == 0) goto L15b
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b.a(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r1 = "download success --> "
                r8.<init>(r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r1 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r1 = r1.c     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.append(r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.c()     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                goto L175
            L15b:
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b.a(r8)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r1 = "download fail --> "
                r8.<init>(r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r1 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r1 = r1.c     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                r8.append(r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
                java.lang.String r1 = "Save fail!"
                r8.a(r0, r1)     // Catch: java.lang.Throwable -> L17b java.lang.Exception -> L17f java.lang.Error -> L182 java.lang.StackOverflowError -> L185 java.lang.OutOfMemoryError -> L188 org.apache.http.conn.ConnectTimeoutException -> L18b java.net.SocketTimeoutException -> L18e
            L175:
                if (r2 == 0) goto L222
                r2.disconnect()
                return
            L17b:
                r8 = move-exception
                r1 = r2
                goto L223
            L17f:
                r8 = move-exception
                r1 = r2
                goto L196
            L182:
                r8 = move-exception
                r1 = r2
                goto L1ae
            L185:
                r8 = move-exception
                r1 = r2
                goto L1c9
            L188:
                r8 = move-exception
                r1 = r2
                goto L1e4
            L18b:
                r8 = move-exception
                r1 = r2
                goto L1ff
            L18e:
                r8 = move-exception
                r1 = r2
                goto L20f
            L192:
                r8 = move-exception
                goto L223
            L195:
                r8 = move-exception
            L196:
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b.a(r2)     // Catch: java.lang.Throwable -> L192
                r8.getMessage()     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L192
                r2.a(r0, r8)     // Catch: java.lang.Throwable -> L192
                if (r1 == 0) goto L222
                r1.disconnect()
                return
            L1ad:
                r8 = move-exception
            L1ae:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b.a(r2)     // Catch: java.lang.Throwable -> L192
                r8.getMessage()     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L192
                r2.a(r0, r8)     // Catch: java.lang.Throwable -> L192
                if (r1 == 0) goto L222
                r1.disconnect()
                return
            L1c8:
                r8 = move-exception
            L1c9:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b.a(r2)     // Catch: java.lang.Throwable -> L192
                r8.getMessage()     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L192
                r2.a(r0, r8)     // Catch: java.lang.Throwable -> L192
                if (r1 == 0) goto L222
                r1.disconnect()
                return
            L1e3:
                r8 = move-exception
            L1e4:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b.a(r2)     // Catch: java.lang.Throwable -> L192
                r8.getMessage()     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L192
                r2.a(r0, r8)     // Catch: java.lang.Throwable -> L192
                if (r1 == 0) goto L222
                r1.disconnect()
                return
            L1fe:
                r8 = move-exception
            L1ff:
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L192
                r2.a(r0, r8)     // Catch: java.lang.Throwable -> L192
                if (r1 == 0) goto L222
                r1.disconnect()
                return
            L20e:
                r8 = move-exception
            L20f:
                com.tkay.core.common.res.image.b r2 = r7.a     // Catch: java.lang.Throwable -> L192
                java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L192
                r2.a(r0, r8)     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b r8 = r7.a     // Catch: java.lang.Throwable -> L192
                com.tkay.core.common.res.image.b.a(r8)     // Catch: java.lang.Throwable -> L192
                if (r1 == 0) goto L222
                r1.disconnect()
            L222:
                return
            L223:
                if (r1 == 0) goto L228
                r1.disconnect()
            L228:
                throw r8
        }

        @Override
        public final void a() {
                r3 = this;
                java.lang.String r0 = "-10000"
                com.tkay.core.common.res.image.b r1 = r3.a     // Catch: java.lang.Exception -> La java.lang.StackOverflowError -> L1d java.lang.OutOfMemoryError -> L1f
                java.lang.String r1 = r1.c     // Catch: java.lang.Exception -> La java.lang.StackOverflowError -> L1d java.lang.OutOfMemoryError -> L1f
                r3.b(r1)     // Catch: java.lang.Exception -> La java.lang.StackOverflowError -> L1d java.lang.OutOfMemoryError -> L1f
                return
            La:
                r1 = move-exception
                com.tkay.core.common.res.image.b r2 = r3.a
                com.tkay.core.common.res.image.b.a(r2)
                r1.getMessage()
                com.tkay.core.common.res.image.b r2 = r3.a
                java.lang.String r1 = r1.getMessage()
                r2.a(r0, r1)
                return
            L1d:
                r1 = move-exception
                goto L20
            L1f:
                r1 = move-exception
            L20:
                java.lang.System.gc()
                com.tkay.core.common.res.image.b r2 = r3.a
                java.lang.String r1 = r1.getMessage()
                r2.a(r0, r1)
                return
        }
    }

    public b(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            r1.c = r2
            return
    }

    static java.lang.String a(com.tkay.core.common.res.image.b r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    private void e() {
            r1 = this;
            r0 = 1
            r1.d = r0
            return
    }

    private void f() {
            r1 = this;
            com.tkay.core.common.res.image.b$1 r0 = new com.tkay.core.common.res.image.b$1
            r0.<init>(r1)
            r1.a(r0)
            return
    }

    private static int g() {
            r0 = 60000(0xea60, float:8.4078E-41)
            return r0
    }

    private static int h() {
            r0 = 20000(0x4e20, float:2.8026E-41)
            return r0
    }

    protected abstract java.util.Map<java.lang.String, java.lang.String> a();

    protected abstract void a(com.tkay.core.common.l.b.b r1);

    protected abstract void a(java.lang.String r1, java.lang.String r2);

    protected abstract boolean a(java.io.InputStream r1);

    protected abstract void b();

    protected abstract void c();

    public final void d() {
            r1 = this;
            r0 = 0
            r1.d = r0
            com.tkay.core.common.res.image.b$1 r0 = new com.tkay.core.common.res.image.b$1
            r0.<init>(r1)
            r1.a(r0)
            return
    }
}
