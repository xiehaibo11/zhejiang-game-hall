package com.tramini.plugin.a.d;

public abstract class a {
    public static final java.lang.String a = "platform";
    public static final java.lang.String b = "os_vn";
    public static final java.lang.String c = "os_vc";
    public static final java.lang.String d = "package_name";
    public static final java.lang.String e = "app_vn";
    public static final java.lang.String f = "app_vc";
    public static final java.lang.String g = "sdk_ver";
    public static final java.lang.String h = "android_id";
    public static final java.lang.String i = "is_proxy";
    public static final java.lang.String j = "ds_pl";
    public static final java.lang.String k = "area_type";
    public static final int l = 1;
    public static final int m = 2;
    private static final java.lang.String o = null;
    protected com.tramini.plugin.a.d.b n;

    final class 1 extends com.tramini.plugin.a.g.b.b {
        final int a;
        final com.tramini.plugin.a.d.a b;

        1(com.tramini.plugin.a.d.a r1, int r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        private void a(java.lang.String r7) {
                r6 = this;
                r0 = 0
                java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Led java.lang.Error -> Lf8 java.lang.StackOverflowError -> L106 java.lang.OutOfMemoryError -> L114 org.apache.http.conn.ConnectTimeoutException -> L122 java.net.SocketTimeoutException -> L12d java.net.ConnectException -> L138 java.net.UnknownHostException -> L143
                r1.<init>(r7)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Led java.lang.Error -> Lf8 java.lang.StackOverflowError -> L106 java.lang.OutOfMemoryError -> L114 org.apache.http.conn.ConnectTimeoutException -> L122 java.net.SocketTimeoutException -> L12d java.net.ConnectException -> L138 java.net.UnknownHostException -> L143
                java.net.URLConnection r7 = r1.openConnection()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Led java.lang.Error -> Lf8 java.lang.StackOverflowError -> L106 java.lang.OutOfMemoryError -> L114 org.apache.http.conn.ConnectTimeoutException -> L122 java.net.SocketTimeoutException -> L12d java.net.ConnectException -> L138 java.net.UnknownHostException -> L143
                java.net.HttpURLConnection r7 = (java.net.HttpURLConnection) r7     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Led java.lang.Error -> Lf8 java.lang.StackOverflowError -> L106 java.lang.OutOfMemoryError -> L114 org.apache.http.conn.ConnectTimeoutException -> L122 java.net.SocketTimeoutException -> L12d java.net.ConnectException -> L138 java.net.UnknownHostException -> L143
                r0 = 1
                r7.setDoInput(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r7.setDoOutput(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.lang.String r0 = "POST"
                r7.setRequestMethod(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r0 = 0
                r7.setUseCaches(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                com.tramini.plugin.a.d.a r0 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.util.Map r0 = r0.c()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                int r1 = r0.size()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                if (r1 <= 0) goto L46
                java.util.Set r1 = r0.keySet()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
            L30:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                if (r2 == 0) goto L46
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r7.addRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                goto L30
            L46:
                r0 = 20000(0x4e20, float:2.8026E-41)
                r7.setConnectTimeout(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r0 = 60000(0xea60, float:8.4078E-41)
                r7.setReadTimeout(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r7.connect()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                com.tramini.plugin.a.d.a r0 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                byte[] r0 = r0.d()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                if (r0 == 0) goto L69
                java.io.OutputStream r1 = r7.getOutputStream()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1.write(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1.flush()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1.close()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
            L69:
                int r0 = r7.getResponseCode()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1 = 200(0xc8, float:2.8E-43)
                if (r0 == r1) goto L7c
                com.tramini.plugin.a.d.a r0 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r0.i()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                if (r7 == 0) goto L7b
                r7.disconnect()
            L7b:
                return
            L7c:
                java.io.InputStream r0 = com.tramini.plugin.a.d.a.a(r7)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1.<init>(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r2.<init>(r1)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r3.<init>()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
            L8f:
                java.lang.String r4 = r2.readLine()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                if (r4 == 0) goto L99
                r3.append(r4)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                goto L8f
            L99:
                r2.close()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1.close()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                if (r0 == 0) goto La4
                r0.close()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
            La4:
                com.tramini.plugin.a.d.a r0 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                boolean r0 = r0.g()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                if (r0 == 0) goto Lbf
                java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                com.tramini.plugin.a.d.a r1 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r7.getHeaderFields()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.lang.Object r0 = r1.a(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                com.tramini.plugin.a.d.a r1 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1.a(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                goto Lcf
            Lbf:
                com.tramini.plugin.a.d.a r0 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r7.getHeaderFields()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                java.lang.String r1 = ""
                java.lang.Object r0 = r0.a(r1)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                com.tramini.plugin.a.d.a r1 = r6.b     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
                r1.a(r0)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Ld8 java.lang.Error -> Lda java.lang.StackOverflowError -> Ldc java.lang.OutOfMemoryError -> Lde org.apache.http.conn.ConnectTimeoutException -> Le0 java.net.SocketTimeoutException -> Le2 java.net.ConnectException -> Le4 java.net.UnknownHostException -> Le6
            Lcf:
                if (r7 == 0) goto L14d
                r7.disconnect()
                return
            Ld5:
                r0 = move-exception
                goto L14e
            Ld8:
                r0 = r7
                goto Led
            Lda:
                r0 = r7
                goto Lf8
            Ldc:
                r0 = r7
                goto L106
            Lde:
                r0 = r7
                goto L114
            Le0:
                r0 = r7
                goto L122
            Le2:
                r0 = r7
                goto L12d
            Le4:
                r0 = r7
                goto L138
            Le6:
                r0 = r7
                goto L143
            Le8:
                r7 = move-exception
                r5 = r0
                r0 = r7
                r7 = r5
                goto L14e
            Led:
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.i()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
                return
            Lf8:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> Le8
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.i()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
                return
            L106:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> Le8
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.i()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
                return
            L114:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> Le8
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.i()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
                return
            L122:
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.h()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
                return
            L12d:
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.i()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
                return
            L138:
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.i()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
                return
            L143:
                com.tramini.plugin.a.d.a r7 = r6.b     // Catch: java.lang.Throwable -> Le8
                r7.i()     // Catch: java.lang.Throwable -> Le8
                if (r0 == 0) goto L14d
                r0.disconnect()
            L14d:
                return
            L14e:
                if (r7 == 0) goto L153
                r7.disconnect()
            L153:
                throw r0
        }

        @Override
        public final void a() {
                r7 = this;
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175
                com.tramini.plugin.a.d.b r0 = r0.n     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175
                if (r0 == 0) goto Ld
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175
                com.tramini.plugin.a.d.b r0 = r0.n     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175
                r0.a()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175
            Ld:
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175
                java.lang.String r0 = r0.b()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175
                r1 = 0
                java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> Lfb java.lang.Exception -> L100 java.lang.Error -> L10b java.lang.StackOverflowError -> L119 java.lang.OutOfMemoryError -> L127 org.apache.http.conn.ConnectTimeoutException -> L135 java.net.SocketTimeoutException -> L140 java.net.ConnectException -> L14b java.net.UnknownHostException -> L156
                r2.<init>(r0)     // Catch: java.lang.Throwable -> Lfb java.lang.Exception -> L100 java.lang.Error -> L10b java.lang.StackOverflowError -> L119 java.lang.OutOfMemoryError -> L127 org.apache.http.conn.ConnectTimeoutException -> L135 java.net.SocketTimeoutException -> L140 java.net.ConnectException -> L14b java.net.UnknownHostException -> L156
                java.net.URLConnection r0 = r2.openConnection()     // Catch: java.lang.Throwable -> Lfb java.lang.Exception -> L100 java.lang.Error -> L10b java.lang.StackOverflowError -> L119 java.lang.OutOfMemoryError -> L127 org.apache.http.conn.ConnectTimeoutException -> L135 java.net.SocketTimeoutException -> L140 java.net.ConnectException -> L14b java.net.UnknownHostException -> L156
                java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Throwable -> Lfb java.lang.Exception -> L100 java.lang.Error -> L10b java.lang.StackOverflowError -> L119 java.lang.OutOfMemoryError -> L127 org.apache.http.conn.ConnectTimeoutException -> L135 java.net.SocketTimeoutException -> L140 java.net.ConnectException -> L14b java.net.UnknownHostException -> L156
                r1 = 1
                r0.setDoInput(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r0.setDoOutput(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.lang.String r1 = "POST"
                r0.setRequestMethod(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r1 = 0
                r0.setUseCaches(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                com.tramini.plugin.a.d.a r1 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.util.Map r1 = r1.c()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                int r2 = r1.size()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                if (r2 <= 0) goto L59
                java.util.Set r2 = r1.keySet()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
            L43:
                boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                if (r3 == 0) goto L59
                java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r0.addRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                goto L43
            L59:
                r1 = 20000(0x4e20, float:2.8026E-41)
                r0.setConnectTimeout(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r1 = 60000(0xea60, float:8.4078E-41)
                r0.setReadTimeout(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r0.connect()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                com.tramini.plugin.a.d.a r1 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                byte[] r1 = r1.d()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                if (r1 == 0) goto L7c
                java.io.OutputStream r2 = r0.getOutputStream()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2.write(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2.flush()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2.close()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
            L7c:
                int r1 = r0.getResponseCode()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2 = 200(0xc8, float:2.8E-43)
                if (r1 == r2) goto L8f
                com.tramini.plugin.a.d.a r1 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r1.i()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                if (r0 == 0) goto L8e
                r0.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
            L8e:
                return
            L8f:
                java.io.InputStream r1 = com.tramini.plugin.a.d.a.a(r0)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2.<init>(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r3.<init>(r2)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r4.<init>()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
            La2:
                java.lang.String r5 = r3.readLine()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                if (r5 == 0) goto Lac
                r4.append(r5)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                goto La2
            Lac:
                r3.close()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2.close()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                if (r1 == 0) goto Lb7
                r1.close()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
            Lb7:
                com.tramini.plugin.a.d.a r1 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                boolean r1 = r1.g()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                if (r1 == 0) goto Ld2
                java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                com.tramini.plugin.a.d.a r2 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r0.getHeaderFields()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.lang.Object r1 = r2.a(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                com.tramini.plugin.a.d.a r2 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2.a(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                goto Le2
            Ld2:
                com.tramini.plugin.a.d.a r1 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r0.getHeaderFields()     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                java.lang.String r2 = ""
                java.lang.Object r1 = r1.a(r2)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                com.tramini.plugin.a.d.a r2 = r7.b     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
                r2.a(r1)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Leb java.lang.Error -> Led java.lang.StackOverflowError -> Lef java.lang.OutOfMemoryError -> Lf1 org.apache.http.conn.ConnectTimeoutException -> Lf3 java.net.SocketTimeoutException -> Lf5 java.net.ConnectException -> Lf7 java.net.UnknownHostException -> Lf9
            Le2:
                if (r0 == 0) goto L160
                r0.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            Le8:
                r1 = move-exception
                goto L161
            Leb:
                r1 = r0
                goto L100
            Led:
                r1 = r0
                goto L10b
            Lef:
                r1 = r0
                goto L119
            Lf1:
                r1 = r0
                goto L127
            Lf3:
                r1 = r0
                goto L135
            Lf5:
                r1 = r0
                goto L140
            Lf7:
                r1 = r0
                goto L14b
            Lf9:
                r1 = r0
                goto L156
            Lfb:
                r0 = move-exception
                r6 = r1
                r1 = r0
                r0 = r6
                goto L161
            L100:
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.i()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            L10b:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> Lfb
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.i()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            L119:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> Lfb
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.i()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            L127:
                java.lang.System.gc()     // Catch: java.lang.Throwable -> Lfb
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.i()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            L135:
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.h()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            L140:
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.i()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            L14b:
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.i()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
                return
            L156:
                com.tramini.plugin.a.d.a r0 = r7.b     // Catch: java.lang.Throwable -> Lfb
                r0.i()     // Catch: java.lang.Throwable -> Lfb
                if (r1 == 0) goto L160
                r1.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
            L160:
                return
            L161:
                if (r0 == 0) goto L166
                r0.disconnect()     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
            L166:
                throw r1     // Catch: java.lang.Exception -> L167 java.lang.Throwable -> L175 java.lang.Throwable -> L175
            L167:
                com.tramini.plugin.a.d.a r0 = r7.b
                com.tramini.plugin.a.d.b r0 = r0.n
                if (r0 == 0) goto L174
                com.tramini.plugin.a.d.a r0 = r7.b
                com.tramini.plugin.a.d.b r0 = r0.n
                r0.b()
            L174:
                return
            L175:
                java.lang.System.gc()
                com.tramini.plugin.a.d.a r0 = r7.b
                com.tramini.plugin.a.d.b r0 = r0.n
                if (r0 == 0) goto L185
                com.tramini.plugin.a.d.a r0 = r7.b
                com.tramini.plugin.a.d.b r0 = r0.n
                r0.b()
            L185:
                return
        }
    }

    static {
            java.lang.Class<com.tramini.plugin.a.d.a> r0 = com.tramini.plugin.a.d.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.a.d.a.o = r0
            return
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

    private void a(int r2) {
            r1 = this;
            com.tramini.plugin.a.d.a$1 r0 = new com.tramini.plugin.a.d.a$1
            r0.<init>(r1, r2)
            com.tramini.plugin.a.g.b.a r2 = com.tramini.plugin.a.g.b.a.a()
            r2.a(r0)
            return
    }

    protected static byte[] b(java.lang.String r3) {
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

    protected abstract int a();

    protected abstract java.lang.Object a(java.lang.String r1);

    public final void a(int r1, com.tramini.plugin.a.d.b r2) {
            r0 = this;
            r0.n = r2
            com.tramini.plugin.a.d.a$1 r2 = new com.tramini.plugin.a.d.a$1
            r2.<init>(r0, r1)
            com.tramini.plugin.a.g.b.a r1 = com.tramini.plugin.a.g.b.a.a()
            r1.a(r2)
            return
    }

    protected final void a(java.lang.Object r2) {
            r1 = this;
            com.tramini.plugin.a.d.b r0 = r1.n
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    protected abstract java.lang.String b();

    protected abstract java.util.Map<java.lang.String, java.lang.String> c();

    protected abstract byte[] d();

    protected org.json.JSONObject e() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tramini.plugin.a.a.c r1 = com.tramini.plugin.a.a.c.a()
            android.content.Context r1 = r1.b()
            java.lang.String r2 = "platform"
            r3 = 1
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "os_vn"
            java.lang.String r3 = com.tramini.plugin.a.g.e.b()     // Catch: java.lang.Exception -> L55
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "os_vc"
            java.lang.String r3 = com.tramini.plugin.a.g.e.a()     // Catch: java.lang.Exception -> L55
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "package_name"
            java.lang.String r3 = com.tramini.plugin.a.g.e.c(r1)     // Catch: java.lang.Exception -> L55
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "app_vn"
            java.lang.String r3 = com.tramini.plugin.a.g.e.b(r1)     // Catch: java.lang.Exception -> L55
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "app_vc"
            java.lang.String r1 = com.tramini.plugin.a.g.e.a(r1)     // Catch: java.lang.Exception -> L55
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = "sdk_ver"
            java.lang.String r2 = "1.0.4"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = "ds_pl"
            java.lang.String r2 = "3"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = "area_type"
            int r2 = com.tramini.plugin.a.a.a.b.a     // Catch: java.lang.Exception -> L55
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L55
        L55:
            return r0
    }

    protected java.lang.String f() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.json.JSONObject r1 = r5.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tramini.plugin.a.g.c.b(r1)
            java.lang.String r2 = "d_version"
            java.lang.String r3 = "1.0"
            r0.put(r2, r3)
            java.lang.String r2 = "d1"
            r0.put(r2, r1)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "d_version=1.0&d1="
            java.lang.String r1 = r2.concat(r1)
            java.lang.String r1 = com.tramini.plugin.a.g.f.a(r1)
            java.lang.String r2 = "d_sign"
            r0.put(r2, r1)
            java.lang.String r1 = "pl_c"
            java.lang.String r2 = "4"
            r0.put(r1, r2)
            java.util.Set r1 = r0.keySet()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
        L44:
            boolean r3 = r1.hasNext()     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
            if (r3 == 0) goto L5c
            java.lang.Object r3 = r1.next()     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
            java.lang.Object r4 = r0.get(r3)     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
            r2.put(r3, r4)     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
            goto L44
        L5c:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.OutOfMemoryError -> L61 java.lang.Exception -> L64
            return r0
        L61:
            java.lang.System.gc()
        L64:
            r0 = 0
            return r0
    }

    public abstract boolean g();

    protected final void h() {
            r1 = this;
            com.tramini.plugin.a.d.b r0 = r1.n
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    protected final void i() {
            r1 = this;
            com.tramini.plugin.a.d.b r0 = r1.n
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }
}
