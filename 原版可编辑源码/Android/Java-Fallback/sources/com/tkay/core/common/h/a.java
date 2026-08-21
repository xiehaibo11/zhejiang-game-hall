package com.tkay.core.common.h;

public abstract class a {
    private static final java.lang.String a = "http.loader";
    protected com.tkay.core.common.h.k m;
    protected boolean n;
    protected java.lang.String o;

    final class 1 extends com.tkay.core.common.l.b.b {
        final int a;
        final com.tkay.core.common.h.a b;

        1(com.tkay.core.common.h.a r1, int r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        private void b(java.lang.String r12) {
                r11 = this;
                java.lang.String r0 = "9999"
                r1 = 0
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L27c java.lang.Exception -> L282 java.lang.Error -> L2c9 java.lang.StackOverflowError -> L313 java.lang.OutOfMemoryError -> L34f org.apache.http.conn.ConnectTimeoutException -> L38b java.net.SocketTimeoutException -> L3b0 java.net.SocketException -> L3e2 javax.net.ssl.SSLException -> L414 java.net.ConnectException -> L446 java.net.UnknownHostException -> L485
                r2.o = r12     // Catch: java.lang.Throwable -> L27c java.lang.Exception -> L282 java.lang.Error -> L2c9 java.lang.StackOverflowError -> L313 java.lang.OutOfMemoryError -> L34f org.apache.http.conn.ConnectTimeoutException -> L38b java.net.SocketTimeoutException -> L3b0 java.net.SocketException -> L3e2 javax.net.ssl.SSLException -> L414 java.net.ConnectException -> L446 java.net.UnknownHostException -> L485
                java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L27c java.lang.Exception -> L282 java.lang.Error -> L2c9 java.lang.StackOverflowError -> L313 java.lang.OutOfMemoryError -> L34f org.apache.http.conn.ConnectTimeoutException -> L38b java.net.SocketTimeoutException -> L3b0 java.net.SocketException -> L3e2 javax.net.ssl.SSLException -> L414 java.net.ConnectException -> L446 java.net.UnknownHostException -> L485
                r2.<init>(r12)     // Catch: java.lang.Throwable -> L27c java.lang.Exception -> L282 java.lang.Error -> L2c9 java.lang.StackOverflowError -> L313 java.lang.OutOfMemoryError -> L34f org.apache.http.conn.ConnectTimeoutException -> L38b java.net.SocketTimeoutException -> L3b0 java.net.SocketException -> L3e2 javax.net.ssl.SSLException -> L414 java.net.ConnectException -> L446 java.net.UnknownHostException -> L485
                java.net.URLConnection r12 = r2.openConnection()     // Catch: java.lang.Throwable -> L27c java.lang.Exception -> L282 java.lang.Error -> L2c9 java.lang.StackOverflowError -> L313 java.lang.OutOfMemoryError -> L34f org.apache.http.conn.ConnectTimeoutException -> L38b java.net.SocketTimeoutException -> L3b0 java.net.SocketException -> L3e2 javax.net.ssl.SSLException -> L414 java.net.ConnectException -> L446 java.net.UnknownHostException -> L485
                java.net.HttpURLConnection r12 = (java.net.HttpURLConnection) r12     // Catch: java.lang.Throwable -> L27c java.lang.Exception -> L282 java.lang.Error -> L2c9 java.lang.StackOverflowError -> L313 java.lang.OutOfMemoryError -> L34f org.apache.http.conn.ConnectTimeoutException -> L38b java.net.SocketTimeoutException -> L3b0 java.net.SocketException -> L3e2 javax.net.ssl.SSLException -> L414 java.net.ConnectException -> L446 java.net.UnknownHostException -> L485
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                int r2 = r2.a()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r3 = 2
                r4 = 1
                if (r2 == r4) goto L1f
                if (r2 == r3) goto L1f
                r2 = r3
            L1f:
                r5 = 0
                if (r2 != r4) goto L30
                r12.setDoInput(r4)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r12.setDoOutput(r4)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r6 = "POST"
                r12.setRequestMethod(r6)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r12.setUseCaches(r5)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
            L30:
                if (r2 != r3) goto L35
                r12.setInstanceFollowRedirects(r5)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
            L35:
                com.tkay.core.common.h.a r3 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.util.Map r3 = r3.c()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r3 == 0) goto L61
                int r5 = r3.size()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r5 <= 0) goto L61
                java.util.Set r5 = r3.keySet()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
            L4b:
                boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r6 == 0) goto L61
                java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.Object r7 = r3.get(r6)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r12.addRequestProperty(r6, r7)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                goto L4b
            L61:
                com.tkay.core.common.h.a r3 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                boolean r3 = r3.n     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r3 == 0) goto L74
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                int r3 = r11.a     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r2.c(r3)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r12 == 0) goto L73
                r12.disconnect()
            L73:
                return
            L74:
                com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r5 = "ua"
                boolean r3 = r3.c(r5)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r3 == 0) goto L89
                java.lang.String r3 = "User-Agent"
                java.lang.String r5 = com.tkay.core.common.l.g.a()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r12.addRequestProperty(r3, r5)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
            L89:
                r3 = 60000(0xea60, float:8.4078E-41)
                r12.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r12.setReadTimeout(r3)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r12.connect()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r2 != r4) goto Lac
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                byte[] r2 = r2.d()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r2 == 0) goto Lac
                java.io.OutputStream r3 = r12.getOutputStream()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r3.write(r2)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r3.flush()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r3.close()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
            Lac:
                int r2 = r12.getResponseCode()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                com.tkay.core.common.h.a r3 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                boolean r3 = r3.a(r2)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r3 != 0) goto L119
                r3 = 200(0xc8, float:2.8E-43)
                if (r2 == r3) goto L119
                r3 = 302(0x12e, float:4.23E-43)
                if (r2 == r3) goto Lee
                r3 = 301(0x12d, float:4.22E-43)
                if (r2 == r3) goto Lee
                r3 = 307(0x133, float:4.3E-43)
                if (r2 != r3) goto Lc9
                goto Lee
            Lc9:
                com.tkay.core.common.h.a r3 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                int r4 = r11.a     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r5 = "Http respond status code is "
                java.lang.String r6 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r5 = r5.concat(r6)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r6 = "9990"
                java.lang.String r7 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r8 = r12.getResponseMessage()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                com.tkay.core.api.AdError r6 = com.tkay.core.api.ErrorCode.getErrorCode(r6, r7, r8)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r3.a(r4, r2, r5, r6)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r12 == 0) goto Led
                r12.disconnect()
            Led:
                return
            Lee:
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                boolean r2 = r2.n     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r2 != 0) goto L10c
                java.lang.String r2 = "Location"
                java.lang.String r2 = r12.getHeaderField(r2)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r2 == 0) goto L113
                java.lang.String r3 = r2.toLowerCase()     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.lang.String r4 = "http"
                boolean r3 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r3 == 0) goto L113
                r11.b(r2)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                goto L113
            L10c:
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                int r3 = r11.a     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r2.c(r3)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
            L113:
                if (r12 == 0) goto L118
                r12.disconnect()
            L118:
                return
            L119:
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                boolean r2 = r2.n     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r2 == 0) goto L12c
                com.tkay.core.common.h.a r2 = r11.b     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                int r3 = r11.a     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                r2.c(r3)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                if (r12 == 0) goto L12b
                r12.disconnect()
            L12b:
                return
            L12c:
                java.io.InputStream r2 = com.tkay.core.common.h.a.a(r12)     // Catch: java.lang.Throwable -> L252 java.lang.Exception -> L255 java.lang.Error -> L258 java.lang.StackOverflowError -> L25c java.lang.OutOfMemoryError -> L260 org.apache.http.conn.ConnectTimeoutException -> L264 java.net.SocketTimeoutException -> L268 java.net.SocketException -> L26c javax.net.ssl.SSLException -> L270 java.net.ConnectException -> L274 java.net.UnknownHostException -> L278
                java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L21d java.lang.Exception -> L221 java.lang.Error -> L226 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L230 org.apache.http.conn.ConnectTimeoutException -> L235 java.net.SocketTimeoutException -> L239 java.net.SocketException -> L23e javax.net.ssl.SSLException -> L243 java.net.ConnectException -> L248 java.net.UnknownHostException -> L24d
                r3.<init>(r2)     // Catch: java.lang.Throwable -> L21d java.lang.Exception -> L221 java.lang.Error -> L226 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L230 org.apache.http.conn.ConnectTimeoutException -> L235 java.net.SocketTimeoutException -> L239 java.net.SocketException -> L23e javax.net.ssl.SSLException -> L243 java.net.ConnectException -> L248 java.net.UnknownHostException -> L24d
                java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L1ff java.lang.Error -> L202 java.lang.StackOverflowError -> L205 java.lang.OutOfMemoryError -> L208 org.apache.http.conn.ConnectTimeoutException -> L20b java.net.SocketTimeoutException -> L20e java.net.SocketException -> L211 javax.net.ssl.SSLException -> L214 java.net.ConnectException -> L217 java.net.UnknownHostException -> L21a java.lang.Throwable -> L4bf
                r4.<init>(r3)     // Catch: java.lang.Exception -> L1ff java.lang.Error -> L202 java.lang.StackOverflowError -> L205 java.lang.OutOfMemoryError -> L208 org.apache.http.conn.ConnectTimeoutException -> L20b java.net.SocketTimeoutException -> L20e java.net.SocketException -> L211 javax.net.ssl.SSLException -> L214 java.net.ConnectException -> L217 java.net.UnknownHostException -> L21a java.lang.Throwable -> L4bf
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r1.<init>()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
            L13f:
                java.lang.String r5 = r4.readLine()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                if (r5 == 0) goto L149
                r1.append(r5)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                goto L13f
            L149:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                boolean r5 = r5.n()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                if (r5 == 0) goto L19c
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r5.<init>(r1)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                java.lang.String r6 = "code"
                int r6 = r5.optInt(r6)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                if (r6 != 0) goto L188
                java.lang.String r1 = com.tkay.core.common.b.f.c.d     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                org.json.JSONObject r1 = r5.optJSONObject(r1)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                if (r1 != 0) goto L173
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r1.<init>()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
            L173:
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r12.getHeaderFields()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                java.lang.Object r1 = r5.a(r1)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                int r6 = r11.a     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r5.a(r6, r1)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                goto L1b0
            L188:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                int r7 = r11.a     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r8 = -10000(0xffffffffffffd8f0, float:NaN)
                java.lang.String r9 = "9991"
                java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                com.tkay.core.api.AdError r6 = com.tkay.core.api.ErrorCode.getErrorCode(r9, r6, r1)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r5.a(r7, r8, r1, r6)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                goto L1b0
            L19c:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r12.getHeaderFields()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                java.lang.Object r1 = r5.a(r1)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                int r6 = r11.a     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
                r5.a(r6, r1)     // Catch: java.lang.Throwable -> L1c1 java.lang.Exception -> L1c5 java.lang.Error -> L1cb java.lang.StackOverflowError -> L1d1 java.lang.OutOfMemoryError -> L1d7 org.apache.http.conn.ConnectTimeoutException -> L1dd java.net.SocketTimeoutException -> L1e1 java.net.SocketException -> L1e7 javax.net.ssl.SSLException -> L1ed java.net.ConnectException -> L1f3 java.net.UnknownHostException -> L1f9
            L1b0:
                r4.close()     // Catch: java.lang.Throwable -> L1b3
            L1b3:
                r3.close()     // Catch: java.lang.Throwable -> L1b6
            L1b6:
                if (r2 == 0) goto L1bb
                r2.close()     // Catch: java.lang.Throwable -> L1bb
            L1bb:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L1c1:
                r0 = move-exception
                r1 = r4
                goto L4c0
            L1c5:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L287
            L1cb:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L2ce
            L1d1:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L318
            L1d7:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L354
            L1dd:
                r0 = move-exception
                r1 = r4
                goto L38f
            L1e1:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L3b5
            L1e7:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L3e7
            L1ed:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L419
            L1f3:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L44b
            L1f9:
                r1 = move-exception
                r10 = r4
                r4 = r1
                r1 = r10
                goto L48a
            L1ff:
                r4 = move-exception
                goto L287
            L202:
                r4 = move-exception
                goto L2ce
            L205:
                r4 = move-exception
                goto L318
            L208:
                r4 = move-exception
                goto L354
            L20b:
                r0 = move-exception
                goto L38f
            L20e:
                r4 = move-exception
                goto L3b5
            L211:
                r4 = move-exception
                goto L3e7
            L214:
                r4 = move-exception
                goto L419
            L217:
                r4 = move-exception
                goto L44b
            L21a:
                r4 = move-exception
                goto L48a
            L21d:
                r0 = move-exception
                r3 = r1
                goto L4c0
            L221:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L287
            L226:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L2ce
            L22b:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L318
            L230:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L354
            L235:
                r0 = move-exception
                r3 = r1
                goto L38f
            L239:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L3b5
            L23e:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L3e7
            L243:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L419
            L248:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L44b
            L24d:
                r3 = move-exception
                r4 = r3
                r3 = r1
                goto L48a
            L252:
                r0 = move-exception
                r2 = r1
                goto L27f
            L255:
                r2 = move-exception
                r3 = r1
                goto L285
            L258:
                r2 = move-exception
                r3 = r1
                goto L2cc
            L25c:
                r2 = move-exception
                r3 = r1
                goto L316
            L260:
                r2 = move-exception
                r3 = r1
                goto L352
            L264:
                r0 = move-exception
                r2 = r1
                goto L38e
            L268:
                r2 = move-exception
                r3 = r1
                goto L3b3
            L26c:
                r2 = move-exception
                r3 = r1
                goto L3e5
            L270:
                r2 = move-exception
                r3 = r1
                goto L417
            L274:
                r2 = move-exception
                r3 = r1
                goto L449
            L278:
                r2 = move-exception
                r3 = r1
                goto L488
            L27c:
                r0 = move-exception
                r12 = r1
                r2 = r12
            L27f:
                r3 = r2
                goto L4c0
            L282:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L285:
                r4 = r2
                r2 = r3
            L287:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = "Exception msg = "
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                r5.append(r6)     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                if (r6 == 0) goto L2a3
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
            L2a3:
                com.tkay.core.common.h.a r6 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r7 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r8 = -9998(0xffffffffffffd8f2, float:NaN)
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r6.a(r7, r8, r5, r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L2b9
                r1.close()     // Catch: java.lang.Throwable -> L2b9
            L2b9:
                if (r3 == 0) goto L2be
                r3.close()     // Catch: java.lang.Throwable -> L2be
            L2be:
                if (r2 == 0) goto L2c3
                r2.close()     // Catch: java.lang.Throwable -> L2c3
            L2c3:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L2c9:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L2cc:
                r4 = r2
                r2 = r3
            L2ce:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = "Error msg = "
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                r5.append(r6)     // Catch: java.lang.Throwable -> L4bf
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                if (r6 == 0) goto L2ed
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
            L2ed:
                com.tkay.core.common.h.a r6 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r7 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r8 = -9999(0xffffffffffffd8f1, float:NaN)
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r6.a(r7, r8, r5, r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L303
                r1.close()     // Catch: java.lang.Throwable -> L303
            L303:
                if (r3 == 0) goto L308
                r3.close()     // Catch: java.lang.Throwable -> L308
            L308:
                if (r2 == 0) goto L30d
                r2.close()     // Catch: java.lang.Throwable -> L30d
            L30d:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L313:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L316:
                r4 = r2
                r2 = r3
            L318:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                if (r6 == 0) goto L329
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
            L329:
                com.tkay.core.common.h.a r6 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r7 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r8 = -1005(0xfffffffffffffc13, float:NaN)
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r6.a(r7, r8, r5, r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L33f
                r1.close()     // Catch: java.lang.Throwable -> L33f
            L33f:
                if (r3 == 0) goto L344
                r3.close()     // Catch: java.lang.Throwable -> L344
            L344:
                if (r2 == 0) goto L349
                r2.close()     // Catch: java.lang.Throwable -> L349
            L349:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L34f:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L352:
                r4 = r2
                r2 = r3
            L354:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                if (r6 == 0) goto L365
                java.lang.String r5 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
            L365:
                com.tkay.core.common.h.a r6 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r7 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r8 = -1004(0xfffffffffffffc14, float:NaN)
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r6.a(r7, r8, r5, r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L37b
                r1.close()     // Catch: java.lang.Throwable -> L37b
            L37b:
                if (r3 == 0) goto L380
                r3.close()     // Catch: java.lang.Throwable -> L380
            L380:
                if (r2 == 0) goto L385
                r2.close()     // Catch: java.lang.Throwable -> L385
            L385:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L38b:
                r0 = move-exception
                r12 = r1
                r2 = r12
            L38e:
                r3 = r2
            L38f:
                com.tkay.core.common.h.a r4 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r5 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r4.a(r5, r0)     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a r0 = r11.b     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a.a(r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L3a0
                r1.close()     // Catch: java.lang.Throwable -> L3a0
            L3a0:
                if (r3 == 0) goto L3a5
                r3.close()     // Catch: java.lang.Throwable -> L3a5
            L3a5:
                if (r2 == 0) goto L3aa
                r2.close()     // Catch: java.lang.Throwable -> L3aa
            L3aa:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L3b0:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L3b3:
                r4 = r2
                r2 = r3
            L3b5:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r6 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r7 = -1002(0xfffffffffffffc16, float:NaN)
                java.lang.String r8 = "Connect timeout."
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r5.a(r6, r7, r8, r0)     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a r0 = r11.b     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a.a(r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L3d2
                r1.close()     // Catch: java.lang.Throwable -> L3d2
            L3d2:
                if (r3 == 0) goto L3d7
                r3.close()     // Catch: java.lang.Throwable -> L3d7
            L3d7:
                if (r2 == 0) goto L3dc
                r2.close()     // Catch: java.lang.Throwable -> L3dc
            L3dc:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L3e2:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L3e5:
                r4 = r2
                r2 = r3
            L3e7:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r6 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r7 = -1007(0xfffffffffffffc11, float:NaN)
                java.lang.String r8 = "connect socket failed."
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r5.a(r6, r7, r8, r0)     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a r0 = r11.b     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a.a(r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L404
                r1.close()     // Catch: java.lang.Throwable -> L404
            L404:
                if (r3 == 0) goto L409
                r3.close()     // Catch: java.lang.Throwable -> L409
            L409:
                if (r2 == 0) goto L40e
                r2.close()     // Catch: java.lang.Throwable -> L40e
            L40e:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L414:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L417:
                r4 = r2
                r2 = r3
            L419:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r6 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r7 = -1006(0xfffffffffffffc12, float:NaN)
                java.lang.String r8 = "connect ssl failed."
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r5.a(r6, r7, r8, r0)     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a r0 = r11.b     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a.a(r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L436
                r1.close()     // Catch: java.lang.Throwable -> L436
            L436:
                if (r3 == 0) goto L43b
                r3.close()     // Catch: java.lang.Throwable -> L43b
            L43b:
                if (r2 == 0) goto L440
                r2.close()     // Catch: java.lang.Throwable -> L440
            L440:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L446:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L449:
                r4 = r2
                r2 = r3
            L44b:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r6 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r6)     // Catch: java.lang.Throwable -> L4bf
                r5.a(r6)     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r6 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r7 = -1001(0xfffffffffffffc17, float:NaN)
                java.lang.String r8 = "Connect error."
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r5.a(r6, r7, r8, r0)     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a r0 = r11.b     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a.a(r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L475
                r1.close()     // Catch: java.lang.Throwable -> L475
            L475:
                if (r3 == 0) goto L47a
                r3.close()     // Catch: java.lang.Throwable -> L47a
            L47a:
                if (r2 == 0) goto L47f
                r2.close()     // Catch: java.lang.Throwable -> L47f
            L47f:
                if (r12 == 0) goto L4be
                r12.disconnect()
                return
            L485:
                r2 = move-exception
                r12 = r1
                r3 = r12
            L488:
                r4 = r2
                r2 = r3
            L48a:
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L4bf
                java.lang.String r6 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r6 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r6)     // Catch: java.lang.Throwable -> L4bf
                r5.a(r6)     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.common.h.a r5 = r11.b     // Catch: java.lang.Throwable -> L4bf
                int r6 = r11.a     // Catch: java.lang.Throwable -> L4bf
                r7 = -1000(0xfffffffffffffc18, float:NaN)
                java.lang.String r8 = "UnknownHostException"
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L4bf
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)     // Catch: java.lang.Throwable -> L4bf
                r5.a(r6, r7, r8, r0)     // Catch: java.lang.Throwable -> L4bf
                if (r1 == 0) goto L4af
                r1.close()     // Catch: java.lang.Throwable -> L4af
            L4af:
                if (r3 == 0) goto L4b4
                r3.close()     // Catch: java.lang.Throwable -> L4b4
            L4b4:
                if (r2 == 0) goto L4b9
                r2.close()     // Catch: java.lang.Throwable -> L4b9
            L4b9:
                if (r12 == 0) goto L4be
                r12.disconnect()
            L4be:
                return
            L4bf:
                r0 = move-exception
            L4c0:
                if (r1 == 0) goto L4c5
                r1.close()     // Catch: java.lang.Throwable -> L4c5
            L4c5:
                if (r3 == 0) goto L4ca
                r3.close()     // Catch: java.lang.Throwable -> L4ca
            L4ca:
                if (r2 == 0) goto L4cf
                r2.close()     // Catch: java.lang.Throwable -> L4cf
            L4cf:
                if (r12 == 0) goto L4d4
                r12.disconnect()
            L4d4:
                throw r0
        }

        @Override
        public final void a() {
                r5 = this;
                java.lang.String r0 = "9999"
                com.tkay.core.common.h.a r1 = r5.b     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                com.tkay.core.common.h.k r1 = r1.m     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                if (r1 == 0) goto L11
                com.tkay.core.common.h.a r1 = r5.b     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                com.tkay.core.common.h.k r1 = r1.m     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                int r2 = r5.a     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                r1.onLoadStart(r2)     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
            L11:
                com.tkay.core.common.h.a r1 = r5.b     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                r5.b(r1)     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                return
            L1b:
                r1 = move-exception
                java.lang.String r2 = r1.getMessage()
                java.lang.String r3 = r1.getMessage()
                if (r3 == 0) goto L2a
                java.lang.String r2 = r1.getMessage()
            L2a:
                com.tkay.core.common.h.a r3 = r5.b
                com.tkay.core.common.h.k r3 = r3.m
                if (r3 == 0) goto L41
                com.tkay.core.common.h.a r3 = r5.b
                com.tkay.core.common.h.k r3 = r3.m
                int r4 = r5.a
                java.lang.String r1 = r1.getMessage()
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r1)
                r3.onLoadError(r4, r2, r0)
            L41:
                return
            L42:
                r1 = move-exception
                goto L45
            L44:
                r1 = move-exception
            L45:
                java.lang.System.gc()
                java.lang.String r2 = r1.getMessage()
                java.lang.String r3 = r1.getMessage()
                if (r3 == 0) goto L56
                java.lang.String r2 = r1.getMessage()
            L56:
                com.tkay.core.common.h.a r3 = r5.b
                com.tkay.core.common.h.k r3 = r3.m
                if (r3 == 0) goto L6d
                com.tkay.core.common.h.a r3 = r5.b
                com.tkay.core.common.h.k r3 = r3.m
                int r4 = r5.a
                java.lang.String r1 = r1.getMessage()
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r1)
                r3.onLoadError(r4, r2, r0)
            L6d:
                return
        }
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.io.InputStream a(java.net.HttpURLConnection r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.io.InputStream r0 = r5.getInputStream()     // Catch: java.lang.Exception -> L8
        L8:
            java.lang.String r1 = "Content-Encoding"
            java.lang.String r5 = r5.getHeaderField(r1)
            java.lang.String r1 = "gzip"
            boolean r5 = r1.equalsIgnoreCase(r5)
            if (r5 == 0) goto L45
            r5 = 2
            byte[] r1 = new byte[r5]     // Catch: java.lang.Exception -> L45
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Exception -> L45
            r2.<init>(r0)     // Catch: java.lang.Exception -> L45
            r2.mark(r5)     // Catch: java.lang.Exception -> L45
            int r5 = r2.read(r1)     // Catch: java.lang.Exception -> L45
            r2.reset()     // Catch: java.lang.Exception -> L45
            r3 = 0
            r3 = r1[r3]     // Catch: java.lang.Exception -> L45
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = 1
            r1 = r1[r4]     // Catch: java.lang.Exception -> L45
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r1 = r1 | r3
            r3 = -1
            if (r5 == r3) goto L44
            r5 = 35615(0x8b1f, float:4.9907E-41)
            if (r1 != r5) goto L44
            java.util.zip.GZIPInputStream r5 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Exception -> L45
            r5.<init>(r2)     // Catch: java.lang.Exception -> L45
            r0 = r5
            goto L45
        L44:
            r0 = r2
        L45:
            return r0
    }

    static void a(com.tkay.core.common.h.a r2) {
            int r0 = r2.m()
            r1 = 8
            r0 = r0 & r1
            if (r0 != r1) goto L12
            com.tkay.core.common.e.a r0 = com.tkay.core.common.e.a.a()
            java.lang.String r2 = r2.o
            r0.b(r2)
        L12:
            return
    }

    protected static byte[] c(java.lang.String r3) {
            if (r3 == 0) goto L29
            int r0 = r3.length()
            if (r0 != 0) goto L9
            goto L29
        L9:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Exception -> L20
            r1.<init>(r0)     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "utf-8"
            byte[] r3 = r3.getBytes(r2)     // Catch: java.lang.Exception -> L20
            r1.write(r3)     // Catch: java.lang.Exception -> L20
            r1.close()     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r3 = move-exception
            r3.printStackTrace()
        L24:
            byte[] r3 = r0.toByteArray()
            return r3
        L29:
            r3 = 0
            return r3
    }

    private void d(int r3) {
            r2 = this;
            com.tkay.core.common.h.a$1 r0 = new com.tkay.core.common.h.a$1
            r0.<init>(r2, r3)
            boolean r3 = r2.o()
            if (r3 == 0) goto L14
            com.tkay.core.common.l.b.a r3 = com.tkay.core.common.l.b.a.a()
            r1 = 1
            r3.a(r0, r1)
            return
        L14:
            com.tkay.core.common.l.b.a r3 = com.tkay.core.common.l.b.a.a()
            r1 = 2
            r3.a(r0, r1)
            return
    }

    private void p() {
            r1 = this;
            r0 = 1
            r1.n = r0
            return
    }

    private void q() {
            r2 = this;
            int r0 = r2.m()
            r1 = 8
            r0 = r0 & r1
            if (r0 != r1) goto L12
            com.tkay.core.common.e.a r0 = com.tkay.core.common.e.a.a()
            java.lang.String r1 = r2.o
            r0.b(r1)
        L12:
            return
    }

    protected abstract int a();

    protected abstract java.lang.Object a(java.lang.String r1);

    protected final void a(int r2, int r3, java.lang.String r4, com.tkay.core.api.AdError r5) {
            r1 = this;
            com.tkay.core.common.h.k r0 = r1.m
            if (r0 == 0) goto L7
            r0.onLoadError(r2, r4, r5)
        L7:
            r1.b(r5)
            r1.b(r3)
            return
    }

    public void a(int r2, com.tkay.core.common.h.k r3) {
            r1 = this;
            r0 = 0
            r1.n = r0
            r1.m = r3
            com.tkay.core.common.h.a$1 r3 = new com.tkay.core.common.h.a$1
            r3.<init>(r1, r2)
            boolean r2 = r1.o()
            if (r2 == 0) goto L19
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            r0 = 1
            r2.a(r3, r0)
            return
        L19:
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            r0 = 2
            r2.a(r3, r0)
            return
    }

    protected void a(int r2, java.lang.Object r3) {
            r1 = this;
            com.tkay.core.common.h.k r0 = r1.m
            if (r0 == 0) goto L7
            r0.onLoadFinish(r2, r3)
        L7:
            return
    }

    protected final void a(int r3, org.apache.http.conn.ConnectTimeoutException r4) {
            r2 = this;
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "9999"
            com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r4)
            com.tkay.core.common.h.k r0 = r2.m
            if (r0 == 0) goto L13
            java.lang.String r1 = "Connect timeout."
            r0.onLoadError(r3, r1, r4)
        L13:
            r2.b(r4)
            r3 = -1001(0xfffffffffffffc17, float:NaN)
            r2.b(r3)
            return
    }

    protected abstract void a(com.tkay.core.api.AdError r1);

    protected abstract boolean a(int r1);

    protected abstract java.lang.String b();

    protected void b(int r1) {
            r0 = this;
            return
    }

    protected abstract void b(com.tkay.core.api.AdError r1);

    protected abstract java.util.Map<java.lang.String, java.lang.String> c();

    protected final void c(int r2) {
            r1 = this;
            com.tkay.core.common.h.k r0 = r1.m
            if (r0 == 0) goto L7
            r0.onLoadCanceled(r2)
        L7:
            return
    }

    protected abstract byte[] d();

    protected org.json.JSONObject e() {
            r1 = this;
            int r0 = r1.m()
            org.json.JSONObject r0 = com.tkay.core.common.h.c.a(r0)
            return r0
    }

    protected org.json.JSONObject f() {
            r1 = this;
            org.json.JSONObject r0 = com.tkay.core.common.h.c.a()
            return r0
    }

    protected java.lang.String g() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.json.JSONObject r1 = r5.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            org.json.JSONObject r2 = r5.f()
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            java.lang.String r3 = "api_ver"
            java.lang.String r4 = "1.0"
            r0.put(r3, r4)
            java.lang.String r3 = "p"
            r0.put(r3, r1)
            java.lang.String r1 = "p2"
            r0.put(r1, r2)
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.size()
            r1.<init>(r2)
            java.util.Set r2 = r0.keySet()
            r1.addAll(r2)
            java.util.Collections.sort(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.util.Iterator r1 = r1.iterator()
        L4a:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L71
            java.lang.Object r3 = r1.next()
            java.lang.String r3 = (java.lang.String) r3
            int r4 = r2.length()
            if (r4 <= 0) goto L61
            java.lang.String r4 = "&"
            r2.append(r4)
        L61:
            r2.append(r3)
            java.lang.String r4 = "="
            r2.append(r4)
            java.lang.Object r3 = r0.get(r3)
            r2.append(r3)
            goto L4a
        L71:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = " sorted value list:"
            r1.<init>(r3)
            java.lang.String r3 = r2.toString()
            r1.append(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r5.j()
            r1.append(r3)
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.f.c(r1)
            java.lang.String r2 = "sign"
            r0.put(r2, r1)
            java.util.Map r1 = r5.l()
            if (r1 == 0) goto Lac
            java.util.Map r1 = r5.l()
            r0.putAll(r1)
        Lac:
            java.util.Set r1 = r0.keySet()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
        Lb9:
            boolean r3 = r1.hasNext()     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
            if (r3 == 0) goto Ld1
            java.lang.Object r3 = r1.next()     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
            java.lang.Object r4 = r0.get(r3)     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
            r2.put(r3, r4)     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
            goto Lb9
        Ld1:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.OutOfMemoryError -> Ld6 java.lang.Exception -> Ld9
            return r0
        Ld6:
            java.lang.System.gc()
        Ld9:
            r0 = 0
            return r0
    }

    protected abstract java.lang.String h();

    protected abstract android.content.Context i();

    protected abstract java.lang.String j();

    protected abstract java.lang.String k();

    protected abstract java.util.Map<java.lang.String, java.lang.Object> l();

    protected int m() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected boolean n() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected boolean o() {
            r1 = this;
            r0 = 0
            return r0
    }
}
