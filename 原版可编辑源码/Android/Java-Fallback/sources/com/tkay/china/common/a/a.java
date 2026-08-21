package com.tkay.china.common.a;

public abstract class a {
    public static final java.lang.String e = ".temp";
    public static final java.lang.String f = ".log";
    public static final java.lang.String g = ".apk";
    public static final int h = 0;
    public static final int i = 1;
    public static final int j = 2;
    public static final int k = 3;
    public static final int l = 4;
    private static final java.lang.String u = null;
    protected java.lang.String a;
    protected java.lang.String b;
    protected boolean c;
    protected boolean d;
    public int m;
    protected long n;
    protected long o;
    protected long p;
    protected long q;
    protected long r;
    protected long s;
    protected long t;
    private com.tkay.china.common.a.a.a v;
    private com.tkay.china.common.a.e w;
    private java.lang.String x;

    final class 1 extends com.tkay.core.common.l.b.b {
        final com.tkay.china.common.a.a a;

        1(com.tkay.china.common.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        private void b(java.lang.String r12) {
                r11 = this;
                java.lang.String r0 = "Http connect error!"
                java.lang.String r1 = "10000"
                com.tkay.china.common.a.a r2 = r11.a
                long r3 = java.lang.System.currentTimeMillis()
                r2.o = r3
                com.tkay.china.common.a.a r2 = r11.a
                long r3 = android.os.SystemClock.elapsedRealtime()
                r2.p = r3
                r2 = 0
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L220 java.lang.Exception -> L223 java.lang.Error -> L243 java.lang.StackOverflowError -> L266 java.lang.OutOfMemoryError -> L289 org.apache.http.conn.ConnectTimeoutException -> L2ac java.net.SocketTimeoutException -> L2b8
                java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> L220 java.lang.Exception -> L223 java.lang.Error -> L243 java.lang.StackOverflowError -> L266 java.lang.OutOfMemoryError -> L289 org.apache.http.conn.ConnectTimeoutException -> L2ac java.net.SocketTimeoutException -> L2b8
                r3.<init>(r12)     // Catch: java.lang.Throwable -> L220 java.lang.Exception -> L223 java.lang.Error -> L243 java.lang.StackOverflowError -> L266 java.lang.OutOfMemoryError -> L289 org.apache.http.conn.ConnectTimeoutException -> L2ac java.net.SocketTimeoutException -> L2b8
                java.net.URLConnection r3 = r3.openConnection()     // Catch: java.lang.Throwable -> L220 java.lang.Exception -> L223 java.lang.Error -> L243 java.lang.StackOverflowError -> L266 java.lang.OutOfMemoryError -> L289 org.apache.http.conn.ConnectTimeoutException -> L2ac java.net.SocketTimeoutException -> L2b8
                java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.lang.Throwable -> L220 java.lang.Exception -> L223 java.lang.Error -> L243 java.lang.StackOverflowError -> L266 java.lang.OutOfMemoryError -> L289 org.apache.http.conn.ConnectTimeoutException -> L2ac java.net.SocketTimeoutException -> L2b8
                r2 = 0
                r3.setInstanceFollowRedirects(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                boolean r2 = r2.o     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r2 == 0) goto L40
                java.lang.String r2 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r4 != 0) goto L40
                java.lang.String r4 = "User-Agent"
                r3.addRequestProperty(r4, r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            L40:
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r4 = r2.n     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r6 = 0
                int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r2 <= 0) goto L84
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r4 = "Range: startPos -> "
                r2.<init>(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r4 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r4 = r4.n     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r2.append(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r4 = "  ,  endPos -> "
                r2.append(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r4 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r4 = r4.s     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r2.append(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = "Range"
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r5 = "bytes="
                r4.<init>(r5)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r5 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r8 = r5.n     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r4.append(r8)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r5 = "-"
                r4.append(r5)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r3.setRequestProperty(r2, r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                goto L8d
            L84:
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                int r4 = r3.getContentLength()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r4 = (long) r4     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r2.s = r4     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            L8d:
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r4 = r2.s     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r2 > 0) goto La9
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = "downloadSize <= 0"
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r1, r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.a(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r3 == 0) goto La8
                r3.disconnect()
            La8:
                return
            La9:
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                boolean r2 = r2.c     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r4 = 3
                if (r2 == 0) goto Ld0
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r12 = com.tkay.china.common.a.a.b(r12)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r12 == 0) goto Lc1
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r12 = com.tkay.china.common.a.a.b(r12)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.j()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            Lc1:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.m = r4     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.d()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r3 == 0) goto Lcf
                r3.disconnect()
            Lcf:
                return
            Ld0:
                r2 = 60000(0xea60, float:8.4078E-41)
                r3.setConnectTimeout(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r3.connect()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                int r2 = r3.getResponseCode()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r5 = 200(0xc8, float:2.8E-43)
                if (r2 == r5) goto L10f
                r5 = 206(0xce, float:2.89E-43)
                if (r2 == r5) goto L10f
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r5 = "http respond status code is "
                r4.<init>(r5)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r4.append(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = " ! url="
                r4.append(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r4.append(r12)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = "10001"
                java.lang.String r4 = r3.getResponseMessage()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r2, r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.a(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r3 == 0) goto L10e
                r3.disconnect()
            L10e:
                return
            L10f:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                boolean r12 = r12.c     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r12 == 0) goto L135
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r12 = com.tkay.china.common.a.a.b(r12)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r12 == 0) goto L126
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r12 = com.tkay.china.common.a.a.b(r12)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.j()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            L126:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.m = r4     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.d()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r3 == 0) goto L134
                r3.disconnect()
            L134:
                return
            L135:
                java.io.InputStream r12 = r3.getInputStream()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r2 == 0) goto L14a
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r2.i()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            L14a:
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r5 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r5 = r5.s     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r2.h = r5     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a$a r2 = com.tkay.china.common.a.a.c(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r2 == 0) goto L175
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a$a r5 = com.tkay.china.common.a.a.c(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r6 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r7 = r2.n     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r9 = r2.s     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r5.a(r6, r7, r9)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            L175:
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r5 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r5 = r5.b     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                int r2 = com.tkay.china.common.a.a.a(r2, r5, r12)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r5 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r5.m = r2     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                if (r12 == 0) goto L188
                r12.close()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            L188:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.q = r5     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.r = r5     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.e r12 = com.tkay.china.common.a.a.b(r12)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r5 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r5 = r5.r     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r7 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r7 = r7.p     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                long r5 = r5 - r7
                r12.i = r5     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12 = 1
                if (r2 == r12) goto L1eb
                r12 = 2
                if (r2 == r12) goto L1e5
                if (r2 == r4) goto L1e5
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = "download fail --> "
                r12.<init>(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = r2.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.append(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r4 = "Save fail!("
                r2.<init>(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r4 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r4 = com.tkay.china.common.a.a.d(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r2.append(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r4 = ")"
                r2.append(r4)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r1, r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.b(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                goto L201
            L1e5:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.d()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                goto L201
            L1eb:
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = "download success --> "
                r12.<init>(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r2 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                java.lang.String r2 = r2.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.append(r2)     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
                r12.e()     // Catch: java.lang.Throwable -> L207 java.lang.Exception -> L20b java.lang.Error -> L20e java.lang.StackOverflowError -> L211 java.lang.OutOfMemoryError -> L214 org.apache.http.conn.ConnectTimeoutException -> L218 java.net.SocketTimeoutException -> L21c
            L201:
                if (r3 == 0) goto L2d0
                r3.disconnect()
                return
            L207:
                r12 = move-exception
                r2 = r3
                goto L2d1
            L20b:
                r12 = move-exception
                r2 = r3
                goto L224
            L20e:
                r12 = move-exception
                r2 = r3
                goto L244
            L211:
                r12 = move-exception
                r2 = r3
                goto L267
            L214:
                r12 = move-exception
                r2 = r3
                goto L28a
            L218:
                r12 = move-exception
                r2 = r3
                goto L2ad
            L21c:
                r12 = move-exception
                r2 = r3
                goto L2b9
            L220:
                r12 = move-exception
                goto L2d1
            L223:
                r12 = move-exception
            L224:
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L220
                r12.getMessage()     // Catch: java.lang.Throwable -> L220
                java.lang.String r3 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
                if (r3 == 0) goto L234
                java.lang.String r0 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
            L234:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.b r0 = com.tkay.china.common.a.c.a(r1, r0)     // Catch: java.lang.Throwable -> L220
                r12.a(r0)     // Catch: java.lang.Throwable -> L220
                if (r2 == 0) goto L2d0
                r2.disconnect()
                return
            L243:
                r12 = move-exception
            L244:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L220
                r12.getMessage()     // Catch: java.lang.Throwable -> L220
                java.lang.String r3 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
                if (r3 == 0) goto L257
                java.lang.String r0 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
            L257:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.b r0 = com.tkay.china.common.a.c.a(r1, r0)     // Catch: java.lang.Throwable -> L220
                r12.a(r0)     // Catch: java.lang.Throwable -> L220
                if (r2 == 0) goto L2d0
                r2.disconnect()
                return
            L266:
                r12 = move-exception
            L267:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L220
                r12.getMessage()     // Catch: java.lang.Throwable -> L220
                java.lang.String r3 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
                if (r3 == 0) goto L27a
                java.lang.String r0 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
            L27a:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.b r0 = com.tkay.china.common.a.c.a(r1, r0)     // Catch: java.lang.Throwable -> L220
                r12.a(r0)     // Catch: java.lang.Throwable -> L220
                if (r2 == 0) goto L2d0
                r2.disconnect()
                return
            L289:
                r12 = move-exception
            L28a:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L220
                r12.getMessage()     // Catch: java.lang.Throwable -> L220
                java.lang.String r3 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
                if (r3 == 0) goto L29d
                java.lang.String r0 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
            L29d:
                com.tkay.china.common.a.a r12 = r11.a     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.b r0 = com.tkay.china.common.a.c.a(r1, r0)     // Catch: java.lang.Throwable -> L220
                r12.a(r0)     // Catch: java.lang.Throwable -> L220
                if (r2 == 0) goto L2d0
                r2.disconnect()
                return
            L2ac:
                r12 = move-exception
            L2ad:
                com.tkay.china.common.a.a r0 = r11.a     // Catch: java.lang.Throwable -> L220
                r0.a(r12)     // Catch: java.lang.Throwable -> L220
                if (r2 == 0) goto L2d0
                r2.disconnect()
                return
            L2b8:
                r12 = move-exception
            L2b9:
                com.tkay.china.common.a.a r0 = r11.a     // Catch: java.lang.Throwable -> L220
                java.lang.String r1 = "20001"
                java.lang.String r12 = r12.getMessage()     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.b r12 = com.tkay.china.common.a.c.a(r1, r12)     // Catch: java.lang.Throwable -> L220
                r0.a(r12)     // Catch: java.lang.Throwable -> L220
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L220
                if (r2 == 0) goto L2d0
                r2.disconnect()
            L2d0:
                return
            L2d1:
                if (r2 == 0) goto L2d6
                r2.disconnect()
            L2d6:
                throw r12
        }

        @Override
        public final void a() {
                r12 = this;
                java.lang.String r0 = "Http connect error!"
                java.lang.String r1 = "10000"
                com.tkay.china.common.a.a.f()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = "start download url -> "
                r2.<init>(r3)
                com.tkay.china.common.a.a r3 = r12.a
                java.lang.String r3 = r3.a
                r2.append(r3)
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                com.tkay.china.common.a.a.a(r2)     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                r3.o = r4     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                r3.p = r4     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                r3 = 0
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L23a java.lang.Exception -> L23d java.lang.Error -> L25f java.lang.StackOverflowError -> L284 java.lang.OutOfMemoryError -> L2a9 org.apache.http.conn.ConnectTimeoutException -> L2ce java.net.SocketTimeoutException -> L2da
                java.net.URL r4 = new java.net.URL     // Catch: java.lang.Throwable -> L23a java.lang.Exception -> L23d java.lang.Error -> L25f java.lang.StackOverflowError -> L284 java.lang.OutOfMemoryError -> L2a9 org.apache.http.conn.ConnectTimeoutException -> L2ce java.net.SocketTimeoutException -> L2da
                r4.<init>(r2)     // Catch: java.lang.Throwable -> L23a java.lang.Exception -> L23d java.lang.Error -> L25f java.lang.StackOverflowError -> L284 java.lang.OutOfMemoryError -> L2a9 org.apache.http.conn.ConnectTimeoutException -> L2ce java.net.SocketTimeoutException -> L2da
                java.net.URLConnection r4 = r4.openConnection()     // Catch: java.lang.Throwable -> L23a java.lang.Exception -> L23d java.lang.Error -> L25f java.lang.StackOverflowError -> L284 java.lang.OutOfMemoryError -> L2a9 org.apache.http.conn.ConnectTimeoutException -> L2ce java.net.SocketTimeoutException -> L2da
                java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4     // Catch: java.lang.Throwable -> L23a java.lang.Exception -> L23d java.lang.Error -> L25f java.lang.StackOverflowError -> L284 java.lang.OutOfMemoryError -> L2a9 org.apache.http.conn.ConnectTimeoutException -> L2ce java.net.SocketTimeoutException -> L2da
                r3 = 0
                r4.setInstanceFollowRedirects(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r3 = com.tkay.china.common.a.a.b(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                boolean r3 = r3.o     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r3 == 0) goto L5a
                java.lang.String r3 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r5 != 0) goto L5a
                java.lang.String r5 = "User-Agent"
                r4.addRequestProperty(r5, r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            L5a:
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r5 = r3.n     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r7 = 0
                int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r3 <= 0) goto L9e
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r5 = "Range: startPos -> "
                r3.<init>(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r5 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r5 = r5.n     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r3.append(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r5 = "  ,  endPos -> "
                r3.append(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r5 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r5 = r5.s     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r3.append(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = "Range"
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r6 = "bytes="
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r6 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r9 = r6.n     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r5.append(r9)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r6 = "-"
                r5.append(r6)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r4.setRequestProperty(r3, r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                goto La7
            L9e:
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                int r5 = r4.getContentLength()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r5 = (long) r5     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r3.s = r5     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            La7:
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r5 = r3.s     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r3 > 0) goto Lc3
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = "downloadSize <= 0"
                com.tkay.china.common.a.b r3 = com.tkay.china.common.a.c.a(r1, r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.a(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r4 == 0) goto Lc2
                r4.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
            Lc2:
                return
            Lc3:
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                boolean r3 = r3.c     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r5 = 3
                if (r3 == 0) goto Lea
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r2 == 0) goto Ldb
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.j()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            Ldb:
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.m = r5     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.d()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r4 == 0) goto Le9
                r4.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
            Le9:
                return
            Lea:
                r3 = 60000(0xea60, float:8.4078E-41)
                r4.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r4.connect()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                int r3 = r4.getResponseCode()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r6 = 200(0xc8, float:2.8E-43)
                if (r3 == r6) goto L129
                r6 = 206(0xce, float:2.89E-43)
                if (r3 == r6) goto L129
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r6 = "http respond status code is "
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r5.append(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = " ! url="
                r5.append(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r5.append(r2)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = "10001"
                java.lang.String r5 = r4.getResponseMessage()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.b r3 = com.tkay.china.common.a.c.a(r3, r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.a(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r4 == 0) goto L128
                r4.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
            L128:
                return
            L129:
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                boolean r2 = r2.c     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r2 == 0) goto L14f
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r2 == 0) goto L140
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.j()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            L140:
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.m = r5     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.d()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r4 == 0) goto L14e
                r4.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
            L14e:
                return
            L14f:
                java.io.InputStream r2 = r4.getInputStream()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r3 = com.tkay.china.common.a.a.b(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r3 == 0) goto L164
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r3 = com.tkay.china.common.a.a.b(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r3.i()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            L164:
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r3 = com.tkay.china.common.a.a.b(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r6 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r6 = r6.s     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r3.h = r6     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a$a r3 = com.tkay.china.common.a.a.c(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r3 == 0) goto L18f
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a$a r6 = com.tkay.china.common.a.a.c(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r7 = com.tkay.china.common.a.a.b(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r8 = r3.n     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r10 = r3.s     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r6.a(r7, r8, r10)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            L18f:
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r6 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r6 = r6.b     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                int r3 = com.tkay.china.common.a.a.a(r3, r6, r2)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r6 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r6.m = r3     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                if (r2 == 0) goto L1a2
                r2.close()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            L1a2:
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.q = r6     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r6 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.r = r6     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.e r2 = com.tkay.china.common.a.a.b(r2)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r6 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r6 = r6.r     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r8 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r8 = r8.p     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                long r6 = r6 - r8
                r2.i = r6     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2 = 1
                if (r3 == r2) goto L205
                r2 = 2
                if (r3 == r2) goto L1ff
                if (r3 == r5) goto L1ff
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = "download fail --> "
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = r3.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.append(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r5 = "Save fail!("
                r3.<init>(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r5 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r5 = com.tkay.china.common.a.a.d(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r3.append(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r5 = ")"
                r3.append(r5)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.b r3 = com.tkay.china.common.a.c.a(r1, r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.b(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                goto L21b
            L1ff:
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.d()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                goto L21b
            L205:
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = "download success --> "
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r3 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                java.lang.String r3 = r3.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.append(r3)     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                com.tkay.china.common.a.a r2 = r12.a     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
                r2.e()     // Catch: java.lang.Throwable -> L221 java.lang.Exception -> L225 java.lang.Error -> L228 java.lang.StackOverflowError -> L22b java.lang.OutOfMemoryError -> L22e org.apache.http.conn.ConnectTimeoutException -> L232 java.net.SocketTimeoutException -> L236
            L21b:
                if (r4 == 0) goto L2f2
                r4.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                return
            L221:
                r2 = move-exception
                r3 = r4
                goto L2f3
            L225:
                r2 = move-exception
                r3 = r4
                goto L23e
            L228:
                r2 = move-exception
                r3 = r4
                goto L260
            L22b:
                r2 = move-exception
                r3 = r4
                goto L285
            L22e:
                r2 = move-exception
                r3 = r4
                goto L2aa
            L232:
                r2 = move-exception
                r3 = r4
                goto L2cf
            L236:
                r2 = move-exception
                r3 = r4
                goto L2db
            L23a:
                r2 = move-exception
                goto L2f3
            L23d:
                r2 = move-exception
            L23e:
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L23a
                r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                java.lang.String r4 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                if (r4 == 0) goto L24f
                java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                goto L250
            L24f:
                r2 = r0
            L250:
                com.tkay.china.common.a.a r4 = r12.a     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r1, r2)     // Catch: java.lang.Throwable -> L23a
                r4.a(r2)     // Catch: java.lang.Throwable -> L23a
                if (r3 == 0) goto L2f2
                r3.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                return
            L25f:
                r2 = move-exception
            L260:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L23a
                r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                java.lang.String r4 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                if (r4 == 0) goto L274
                java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                goto L275
            L274:
                r2 = r0
            L275:
                com.tkay.china.common.a.a r4 = r12.a     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r1, r2)     // Catch: java.lang.Throwable -> L23a
                r4.a(r2)     // Catch: java.lang.Throwable -> L23a
                if (r3 == 0) goto L2f2
                r3.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                return
            L284:
                r2 = move-exception
            L285:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L23a
                r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                java.lang.String r4 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                if (r4 == 0) goto L299
                java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                goto L29a
            L299:
                r2 = r0
            L29a:
                com.tkay.china.common.a.a r4 = r12.a     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r1, r2)     // Catch: java.lang.Throwable -> L23a
                r4.a(r2)     // Catch: java.lang.Throwable -> L23a
                if (r3 == 0) goto L2f2
                r3.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                return
            L2a9:
                r2 = move-exception
            L2aa:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L23a
                r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                java.lang.String r4 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                if (r4 == 0) goto L2be
                java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                goto L2bf
            L2be:
                r2 = r0
            L2bf:
                com.tkay.china.common.a.a r4 = r12.a     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r1, r2)     // Catch: java.lang.Throwable -> L23a
                r4.a(r2)     // Catch: java.lang.Throwable -> L23a
                if (r3 == 0) goto L2f2
                r3.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                return
            L2ce:
                r2 = move-exception
            L2cf:
                com.tkay.china.common.a.a r4 = r12.a     // Catch: java.lang.Throwable -> L23a
                r4.a(r2)     // Catch: java.lang.Throwable -> L23a
                if (r3 == 0) goto L2f2
                r3.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
                return
            L2da:
                r2 = move-exception
            L2db:
                com.tkay.china.common.a.a r4 = r12.a     // Catch: java.lang.Throwable -> L23a
                java.lang.String r5 = "20001"
                java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r5, r2)     // Catch: java.lang.Throwable -> L23a
                r4.a(r2)     // Catch: java.lang.Throwable -> L23a
                com.tkay.china.common.a.a.f()     // Catch: java.lang.Throwable -> L23a
                if (r3 == 0) goto L2f2
                r3.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
            L2f2:
                return
            L2f3:
                if (r3 == 0) goto L2f8
                r3.disconnect()     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
            L2f8:
                throw r2     // Catch: java.lang.Exception -> L2f9 java.lang.StackOverflowError -> L314 java.lang.OutOfMemoryError -> L316
            L2f9:
                r2 = move-exception
                com.tkay.china.common.a.a.f()
                r2.getMessage()
                java.lang.String r3 = r2.getMessage()
                if (r3 == 0) goto L30a
                java.lang.String r0 = r2.getMessage()
            L30a:
                com.tkay.china.common.a.a r2 = r12.a
                com.tkay.china.common.a.b r0 = com.tkay.china.common.a.c.a(r1, r0)
                r2.b(r0)
                return
            L314:
                r2 = move-exception
                goto L317
            L316:
                r2 = move-exception
            L317:
                java.lang.System.gc()
                com.tkay.china.common.a.a.f()
                r2.getMessage()
                java.lang.String r3 = r2.getMessage()
                if (r3 == 0) goto L32a
                java.lang.String r0 = r2.getMessage()
            L32a:
                com.tkay.china.common.a.a r2 = r12.a
                com.tkay.china.common.a.b r0 = com.tkay.china.common.a.c.a(r1, r0)
                r2.b(r0)
                return
        }
    }

    public interface a {
        void a(com.tkay.china.common.a.e r1, long r2);

        void a(com.tkay.china.common.a.e r1, long r2, long r4);

        void a(com.tkay.china.common.a.e r1, long r2, long r4, int r6);

        void a(com.tkay.china.common.a.e r1, java.lang.String r2);

        void b(com.tkay.china.common.a.e r1, long r2, long r4);
    }

    static {
            java.lang.Class<com.tkay.china.common.a.a> r0 = com.tkay.china.common.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.china.common.a.a.u = r0
            return
    }

    public a(com.tkay.china.common.a.e r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.m = r0
            r1.w = r2
            java.lang.String r0 = r2.b
            r1.a = r0
            java.lang.String r2 = r2.n
            r1.b = r2
            return
    }

    static int a(com.tkay.china.common.a.a r0, java.lang.String r1, java.io.InputStream r2) {
            int r0 = r0.a(r1, r2)
            return r0
    }

    private int a(java.lang.String r22, java.io.InputStream r23) {
            r21 = this;
            r1 = r21
            java.lang.String r0 = "rws"
            java.lang.String r2 = com.tkay.china.common.c.b.a(r22)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 4
            if (r3 == 0) goto L10
            return r4
        L10:
            java.io.File r3 = new java.io.File
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r6 = ".temp"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r3.<init>(r5)
            java.io.File r5 = new java.io.File
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r2)
            java.lang.String r7 = ".log"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            r6 = 0
            boolean r7 = r3.exists()     // Catch: java.lang.Throwable -> L18d
            if (r7 != 0) goto L50
            boolean r7 = r3.createNewFile()     // Catch: java.lang.Throwable -> L18d
            boolean r8 = r5.createNewFile()     // Catch: java.lang.Throwable -> L18d
            if (r7 == 0) goto L4f
            if (r8 != 0) goto L50
        L4f:
            return r4
        L50:
            java.io.RandomAccessFile r7 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L18d
            r7.<init>(r3, r0)     // Catch: java.lang.Throwable -> L18d
            java.io.RandomAccessFile r8 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L189
            r8.<init>(r5, r0)     // Catch: java.lang.Throwable -> L189
            long r9 = r1.n     // Catch: java.lang.Throwable -> L187
            r11 = 0
            int r0 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            java.lang.String r6 = "("
            if (r0 <= 0) goto L89
            java.lang.String r0 = com.tkay.china.common.a.a.u     // Catch: java.lang.Throwable -> L187
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r9.<init>(r6)     // Catch: java.lang.Throwable -> L187
            com.tkay.china.common.a.e r6 = r1.w     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = r6.c     // Catch: java.lang.Throwable -> L187
            r9.append(r6)     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = ")  seek to -> "
            r9.append(r6)     // Catch: java.lang.Throwable -> L187
            long r13 = r1.n     // Catch: java.lang.Throwable -> L187
            r9.append(r13)     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = r9.toString()     // Catch: java.lang.Throwable -> L187
            android.util.Log.i(r0, r6)     // Catch: java.lang.Throwable -> L187
            long r9 = r1.n     // Catch: java.lang.Throwable -> L187
            r7.seek(r9)     // Catch: java.lang.Throwable -> L187
            goto Lad
        L89:
            java.lang.String r0 = com.tkay.china.common.a.a.u     // Catch: java.lang.Throwable -> L187
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r9.<init>(r6)     // Catch: java.lang.Throwable -> L187
            com.tkay.china.common.a.e r6 = r1.w     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = r6.c     // Catch: java.lang.Throwable -> L187
            r9.append(r6)     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = ")  set temp file size -> "
            r9.append(r6)     // Catch: java.lang.Throwable -> L187
            long r13 = r1.s     // Catch: java.lang.Throwable -> L187
            r9.append(r13)     // Catch: java.lang.Throwable -> L187
            java.lang.String r6 = r9.toString()     // Catch: java.lang.Throwable -> L187
            android.util.Log.i(r0, r6)     // Catch: java.lang.Throwable -> L187
            long r9 = r1.s     // Catch: java.lang.Throwable -> L187
            r7.setLength(r9)     // Catch: java.lang.Throwable -> L187
        Lad:
            r0 = 1048576(0x100000, float:1.469368E-39)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L187
            long r9 = r1.n     // Catch: java.lang.Throwable -> L187
            r1.t = r9     // Catch: java.lang.Throwable -> L187
        Lb5:
            r6 = -1
            r9 = r23
            int r10 = r9.read(r0)     // Catch: java.lang.Throwable -> L187
            if (r6 == r10) goto L146
            boolean r6 = r1.d     // Catch: java.lang.Throwable -> L187
            if (r6 == 0) goto Ldf
            com.tkay.china.common.a.e r0 = r1.w     // Catch: java.lang.Throwable -> L187
            if (r0 == 0) goto Lcb
            com.tkay.china.common.a.e r0 = r1.w     // Catch: java.lang.Throwable -> L187
            r0.k()     // Catch: java.lang.Throwable -> L187
        Lcb:
            r7.close()     // Catch: java.io.IOException -> Lcf
            goto Ld4
        Lcf:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        Ld4:
            r8.close()     // Catch: java.io.IOException -> Ld8
            goto Ldd
        Ld8:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        Ldd:
            r0 = 2
            return r0
        Ldf:
            boolean r6 = r1.c     // Catch: java.lang.Throwable -> L187
            if (r6 == 0) goto L100
            com.tkay.china.common.a.e r0 = r1.w     // Catch: java.lang.Throwable -> L187
            if (r0 == 0) goto Lec
            com.tkay.china.common.a.e r0 = r1.w     // Catch: java.lang.Throwable -> L187
            r0.j()     // Catch: java.lang.Throwable -> L187
        Lec:
            r7.close()     // Catch: java.io.IOException -> Lf0
            goto Lf5
        Lf0:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        Lf5:
            r8.close()     // Catch: java.io.IOException -> Lf9
            goto Lfe
        Lf9:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        Lfe:
            r0 = 3
            return r0
        L100:
            r6 = 0
            r7.write(r0, r6, r10)     // Catch: java.lang.Throwable -> L187
            long r13 = r1.t     // Catch: java.lang.Throwable -> L187
            r22 = r5
            long r4 = (long) r10     // Catch: java.lang.Throwable -> L187
            long r13 = r13 + r4
            r1.t = r13     // Catch: java.lang.Throwable -> L187
            com.tkay.china.common.a.e r4 = r1.w     // Catch: java.lang.Throwable -> L187
            if (r4 == 0) goto L114
            com.tkay.china.common.a.e r4 = r1.w     // Catch: java.lang.Throwable -> L187
            r4.g = r13     // Catch: java.lang.Throwable -> L187
        L114:
            r8.setLength(r11)     // Catch: java.lang.Throwable -> L187
            long r4 = r1.t     // Catch: java.lang.Throwable -> L187
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L187
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L187
            r8.write(r4)     // Catch: java.lang.Throwable -> L187
            com.tkay.china.common.a.a$a r4 = r1.v     // Catch: java.lang.Throwable -> L187
            if (r4 == 0) goto L141
            com.tkay.china.common.a.a$a r4 = r1.v     // Catch: java.lang.Throwable -> L187
            com.tkay.china.common.a.e r5 = r1.w     // Catch: java.lang.Throwable -> L187
            long r13 = r1.t     // Catch: java.lang.Throwable -> L187
            long r11 = r1.s     // Catch: java.lang.Throwable -> L187
            r15 = r4
            r16 = r5
            r17 = r13
            r19 = r11
            r15.b(r16, r17, r19)     // Catch: java.lang.Throwable -> L187
            r5 = r22
            r4 = 4
            r11 = 0
            goto Lb5
        L141:
            r5 = r22
            r4 = 4
            goto Lb5
        L146:
            r22 = r5
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L187
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L187
            r4.<init>()     // Catch: java.lang.Throwable -> L187
            r4.append(r2)     // Catch: java.lang.Throwable -> L187
            java.lang.String r2 = ".apk"
            r4.append(r2)     // Catch: java.lang.Throwable -> L187
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L187
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L187
            r3.renameTo(r0)     // Catch: java.lang.Throwable -> L187
            boolean r0 = r22.exists()     // Catch: java.lang.Throwable -> L187
            if (r0 == 0) goto L16a
            r22.delete()     // Catch: java.lang.Throwable -> L187
        L16a:
            com.tkay.china.common.a.e r0 = r1.w     // Catch: java.lang.Throwable -> L187
            if (r0 == 0) goto L173
            com.tkay.china.common.a.e r0 = r1.w     // Catch: java.lang.Throwable -> L187
            r0.l()     // Catch: java.lang.Throwable -> L187
        L173:
            r7.close()     // Catch: java.io.IOException -> L177
            goto L17c
        L177:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        L17c:
            r8.close()     // Catch: java.io.IOException -> L180
            goto L185
        L180:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        L185:
            r0 = 1
            return r0
        L187:
            r0 = move-exception
            goto L18b
        L189:
            r0 = move-exception
            r8 = r6
        L18b:
            r6 = r7
            goto L18f
        L18d:
            r0 = move-exception
            r8 = r6
        L18f:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1b0
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L1b0
            r1.x = r0     // Catch: java.lang.Throwable -> L1b0
            if (r6 == 0) goto L1a3
            r6.close()     // Catch: java.io.IOException -> L19e
            goto L1a3
        L19e:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        L1a3:
            if (r8 == 0) goto L1ae
            r8.close()     // Catch: java.io.IOException -> L1a9
            goto L1ae
        L1a9:
            r0 = move-exception
            r2 = r0
            r2.printStackTrace()
        L1ae:
            r2 = 4
            return r2
        L1b0:
            r0 = move-exception
            r2 = r0
            if (r6 == 0) goto L1bd
            r6.close()     // Catch: java.io.IOException -> L1b8
            goto L1bd
        L1b8:
            r0 = move-exception
            r3 = r0
            r3.printStackTrace()
        L1bd:
            if (r8 == 0) goto L1c8
            r8.close()     // Catch: java.io.IOException -> L1c3
            goto L1c8
        L1c3:
            r0 = move-exception
            r3 = r0
            r3.printStackTrace()
        L1c8:
            throw r2
    }

    static void a(com.tkay.china.common.a.a r9) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r9.b
            java.lang.String r2 = com.tkay.china.common.c.b.a(r2)
            r1.append(r2)
            java.lang.String r2 = ".log"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r9.b
            java.lang.String r3 = com.tkay.china.common.c.b.a(r3)
            r2.append(r3)
            java.lang.String r3 = ".temp"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto Le9
            boolean r2 = r1.exists()
            if (r2 != 0) goto L46
            goto Le9
        L46:
            r2 = 0
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lb0 java.lang.Exception -> Lb4
            r3.<init>(r0)     // Catch: java.lang.Throwable -> Lb0 java.lang.Exception -> Lb4
            java.io.InputStreamReader r0 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Laa java.lang.Exception -> Lad
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Laa java.lang.Exception -> Lad
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld1
            r4.<init>(r0)     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld1
            java.lang.String r2 = r4.readLine()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            if (r5 != 0) goto L93
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r5 = r2.longValue()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r9.n = r5     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r7 = r1.length()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            int r2 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r2 <= 0) goto L77
            r1 = 0
            r9.n = r1     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            goto L7d
        L77:
            long r1 = r1.length()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r9.s = r1     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
        L7d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            java.lang.String r2 = "readLogFile: startPost -> "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r5 = r9.n     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r1.append(r5)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            java.lang.String r2 = ", downloadSize -> "
            r1.append(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r5 = r9.s     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r1.append(r5)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
        L93:
            r4.close()     // Catch: java.io.IOException -> L9d
            r0.close()     // Catch: java.io.IOException -> L9d
            r3.close()     // Catch: java.io.IOException -> L9d
            return
        L9d:
            r9 = move-exception
            r9.printStackTrace()
            return
        La2:
            r9 = move-exception
            r2 = r4
            goto Ld2
        La5:
            r9 = move-exception
            r2 = r4
            goto Lb7
        La8:
            r9 = move-exception
            goto Lb7
        Laa:
            r9 = move-exception
            r0 = r2
            goto Ld2
        Lad:
            r9 = move-exception
            r0 = r2
            goto Lb7
        Lb0:
            r9 = move-exception
            r0 = r2
            r3 = r0
            goto Ld2
        Lb4:
            r9 = move-exception
            r0 = r2
            r3 = r0
        Lb7:
            r9.printStackTrace()     // Catch: java.lang.Throwable -> Ld1
            if (r2 == 0) goto Lc2
            r2.close()     // Catch: java.io.IOException -> Lc0
            goto Lc2
        Lc0:
            r9 = move-exception
            goto Lcd
        Lc2:
            if (r0 == 0) goto Lc7
            r0.close()     // Catch: java.io.IOException -> Lc0
        Lc7:
            if (r3 == 0) goto Ld0
            r3.close()     // Catch: java.io.IOException -> Lc0
            goto Ld0
        Lcd:
            r9.printStackTrace()
        Ld0:
            return
        Ld1:
            r9 = move-exception
        Ld2:
            if (r2 == 0) goto Lda
            r2.close()     // Catch: java.io.IOException -> Ld8
            goto Lda
        Ld8:
            r0 = move-exception
            goto Le5
        Lda:
            if (r0 == 0) goto Ldf
            r0.close()     // Catch: java.io.IOException -> Ld8
        Ldf:
            if (r3 == 0) goto Le8
            r3.close()     // Catch: java.io.IOException -> Ld8
            goto Le8
        Le5:
            r0.printStackTrace()
        Le8:
            throw r9
        Le9:
            r0.delete()     // Catch: java.lang.Throwable -> Lef
            r1.delete()     // Catch: java.lang.Throwable -> Lef
        Lef:
            return
    }

    static com.tkay.china.common.a.e b(com.tkay.china.common.a.a r0) {
            com.tkay.china.common.a.e r0 = r0.w
            return r0
    }

    static com.tkay.china.common.a.a.a c(com.tkay.china.common.a.a r0) {
            com.tkay.china.common.a.a$a r0 = r0.v
            return r0
    }

    static java.lang.String d(com.tkay.china.common.a.a r0) {
            java.lang.String r0 = r0.x
            return r0
    }

    static java.lang.String f() {
            java.lang.String r0 = com.tkay.china.common.a.a.u
            return r0
    }

    private void g() {
            r2 = this;
            com.tkay.china.common.a.a$1 r0 = new com.tkay.china.common.a.a$1
            r0.<init>(r2)
            com.tkay.china.common.a.a.a r1 = com.tkay.china.common.a.a.a.a()
            r1.a(r0)
            return
    }

    private void h() {
            r9 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r9.b
            java.lang.String r2 = com.tkay.china.common.c.b.a(r2)
            r1.append(r2)
            java.lang.String r2 = ".log"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r9.b
            java.lang.String r3 = com.tkay.china.common.c.b.a(r3)
            r2.append(r3)
            java.lang.String r3 = ".temp"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto Le9
            boolean r2 = r1.exists()
            if (r2 != 0) goto L46
            goto Le9
        L46:
            r2 = 0
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lb0 java.lang.Exception -> Lb4
            r3.<init>(r0)     // Catch: java.lang.Throwable -> Lb0 java.lang.Exception -> Lb4
            java.io.InputStreamReader r0 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Laa java.lang.Exception -> Lad
            r0.<init>(r3)     // Catch: java.lang.Throwable -> Laa java.lang.Exception -> Lad
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld1
            r4.<init>(r0)     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld1
            java.lang.String r2 = r4.readLine()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            if (r5 != 0) goto L93
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r5 = r2.longValue()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r9.n = r5     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r7 = r1.length()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            int r2 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r2 <= 0) goto L77
            r1 = 0
            r9.n = r1     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            goto L7d
        L77:
            long r1 = r1.length()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r9.s = r1     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
        L7d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            java.lang.String r2 = "readLogFile: startPost -> "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r5 = r9.n     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r1.append(r5)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            java.lang.String r2 = ", downloadSize -> "
            r1.append(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            long r5 = r9.s     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
            r1.append(r5)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La5
        L93:
            r4.close()     // Catch: java.io.IOException -> L9d
            r0.close()     // Catch: java.io.IOException -> L9d
            r3.close()     // Catch: java.io.IOException -> L9d
            return
        L9d:
            r0 = move-exception
            r0.printStackTrace()
            return
        La2:
            r1 = move-exception
            r2 = r4
            goto Ld2
        La5:
            r1 = move-exception
            r2 = r4
            goto Lb7
        La8:
            r1 = move-exception
            goto Lb7
        Laa:
            r1 = move-exception
            r0 = r2
            goto Ld2
        Lad:
            r1 = move-exception
            r0 = r2
            goto Lb7
        Lb0:
            r1 = move-exception
            r0 = r2
            r3 = r0
            goto Ld2
        Lb4:
            r1 = move-exception
            r0 = r2
            r3 = r0
        Lb7:
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Ld1
            if (r2 == 0) goto Lc2
            r2.close()     // Catch: java.io.IOException -> Lc0
            goto Lc2
        Lc0:
            r0 = move-exception
            goto Lcd
        Lc2:
            if (r0 == 0) goto Lc7
            r0.close()     // Catch: java.io.IOException -> Lc0
        Lc7:
            if (r3 == 0) goto Ld0
            r3.close()     // Catch: java.io.IOException -> Lc0
            goto Ld0
        Lcd:
            r0.printStackTrace()
        Ld0:
            return
        Ld1:
            r1 = move-exception
        Ld2:
            if (r2 == 0) goto Lda
            r2.close()     // Catch: java.io.IOException -> Ld8
            goto Lda
        Ld8:
            r0 = move-exception
            goto Le5
        Lda:
            if (r0 == 0) goto Ldf
            r0.close()     // Catch: java.io.IOException -> Ld8
        Ldf:
            if (r3 == 0) goto Le8
            r3.close()     // Catch: java.io.IOException -> Ld8
            goto Le8
        Le5:
            r0.printStackTrace()
        Le8:
            throw r1
        Le9:
            r0.delete()     // Catch: java.lang.Throwable -> Lef
            r1.delete()     // Catch: java.lang.Throwable -> Lef
        Lef:
            return
    }

    private static int i() {
            r0 = 60000(0xea60, float:8.4078E-41)
            return r0
    }

    private static int j() {
            r0 = 20000(0x4e20, float:2.8026E-41)
            return r0
    }

    public final void a() {
            r1 = this;
            r0 = 1
            r1.c = r0
            return
    }

    public final void a(com.tkay.china.common.a.a.a r2) {
            r1 = this;
            r1.v = r2
            r2 = 0
            r1.c = r2
            com.tkay.china.common.a.a$1 r2 = new com.tkay.china.common.a.a$1
            r2.<init>(r1)
            com.tkay.china.common.a.a.a r0 = com.tkay.china.common.a.a.a.a()
            r0.a(r2)
            return
    }

    protected final void a(com.tkay.china.common.a.b r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "url: "
            r0.<init>(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            r2.b(r3)
            return
    }

    protected final void a(org.apache.http.conn.ConnectTimeoutException r2) {
            r1 = this;
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "10000"
            com.tkay.china.common.a.b r2 = com.tkay.china.common.a.c.a(r0, r2)
            r1.b(r2)
            return
    }

    public final void b() {
            r1 = this;
            r0 = 1
            r1.d = r0
            return
    }

    protected final void b(com.tkay.china.common.a.b r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "download failed --> "
            r0.<init>(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = "("
            r0.append(r1)
            java.lang.String r1 = r3.a()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            com.tkay.china.common.a.e r0 = r2.w
            r0.n()
            com.tkay.china.common.a.a$a r0 = r2.v
            if (r0 == 0) goto L2f
            com.tkay.china.common.a.e r1 = r2.w
            java.lang.String r3 = r3.b()
            r0.a(r1, r3)
        L2f:
            return
    }

    protected boolean c() {
            r1 = this;
            r0 = 1
            return r0
    }

    protected final void d() {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "url: "
            r0.<init>(r1)
            java.lang.String r1 = r9.a
            r0.append(r1)
            com.tkay.china.common.a.a$a r2 = r9.v
            if (r2 == 0) goto L1b
            com.tkay.china.common.a.e r3 = r9.w
            long r4 = r9.t
            long r6 = r9.s
            int r8 = r9.m
            r2.a(r3, r4, r6, r8)
        L1b:
            return
    }

    protected final void e() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "url: "
            r0.<init>(r1)
            java.lang.String r1 = r4.a
            r0.append(r1)
            com.tkay.china.common.a.a$a r0 = r4.v
            if (r0 == 0) goto L17
            com.tkay.china.common.a.e r1 = r4.w
            long r2 = r1.i
            r0.a(r1, r2)
        L17:
            return
    }
}
