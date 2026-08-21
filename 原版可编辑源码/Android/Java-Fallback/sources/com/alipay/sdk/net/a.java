package com.alipay.sdk.net;

public final class a {
    private static final java.lang.String a = "msp";
    private static final java.lang.String b = "application/octet-stream;binary/octet-stream";
    private static final java.net.CookieManager c = null;

    public static final class a {
        public final java.lang.String a;
        public final byte[] b;
        public final java.util.Map<java.lang.String, java.lang.String> c;

        public a(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, byte[] r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r3
                r0.c = r2
                return
        }

        public java.lang.String toString() {
                r3 = this;
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = r3.a
                r2 = 0
                r0[r2] = r1
                byte[] r1 = r3.b
                r2 = 1
                r0[r2] = r1
                java.util.Map<java.lang.String, java.lang.String> r1 = r3.c
                r2 = 2
                r0[r2] = r1
                java.lang.String r1 = "<UrlConnectionConfigure url=%s requestBody=%s headers=%s>"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                return r0
        }
    }

    public static final class b {
        public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> a;
        public final java.lang.String b;
        public final byte[] c;

        public b(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1, java.lang.String r2, byte[] r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    static {
            java.net.CookieManager r0 = new java.net.CookieManager
            r0.<init>()
            com.alipay.sdk.net.a.c = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.net.a.b a(android.content.Context r12, com.alipay.sdk.net.a.a r13) {
            java.lang.String r0 = "Keep-Alive"
            java.lang.String r1 = "msp"
            r2 = 0
            if (r12 != 0) goto L8
            return r2
        L8:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19f
            r3.<init>()     // Catch: java.lang.Throwable -> L19f
            java.lang.String r4 = "config : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L19f
            r3.append(r13)     // Catch: java.lang.Throwable -> L19f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L19f
            com.alipay.sdk.util.c.c(r1, r3)     // Catch: java.lang.Throwable -> L19f
            java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> L19f
            java.lang.String r4 = r13.a     // Catch: java.lang.Throwable -> L19f
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L19f
            java.net.Proxy r12 = a(r12)     // Catch: java.lang.Throwable -> L19f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19f
            r4.<init>()     // Catch: java.lang.Throwable -> L19f
            java.lang.String r5 = "proxy: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L19f
            r4.append(r12)     // Catch: java.lang.Throwable -> L19f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L19f
            com.alipay.sdk.util.c.c(r1, r4)     // Catch: java.lang.Throwable -> L19f
            if (r12 == 0) goto L44
            java.net.URLConnection r12 = r3.openConnection(r12)     // Catch: java.lang.Throwable -> L19f
            java.net.HttpURLConnection r12 = (java.net.HttpURLConnection) r12     // Catch: java.lang.Throwable -> L19f
            goto L4a
        L44:
            java.net.URLConnection r12 = r3.openConnection()     // Catch: java.lang.Throwable -> L19f
            java.net.HttpURLConnection r12 = (java.net.HttpURLConnection) r12     // Catch: java.lang.Throwable -> L19f
        L4a:
            java.lang.String r4 = "http.keepAlive"
            java.lang.String r5 = "false"
            java.lang.System.setProperty(r4, r5)     // Catch: java.lang.Throwable -> L19c
            boolean r4 = r12 instanceof javax.net.ssl.HttpsURLConnection     // Catch: java.lang.Throwable -> L19c
            if (r4 == 0) goto L58
            r4 = r12
            javax.net.ssl.HttpsURLConnection r4 = (javax.net.ssl.HttpsURLConnection) r4     // Catch: java.lang.Throwable -> L19c
        L58:
            java.net.CookieManager r4 = com.alipay.sdk.net.a.c     // Catch: java.lang.Throwable -> L19c
            java.net.CookieStore r4 = r4.getCookieStore()     // Catch: java.lang.Throwable -> L19c
            java.util.List r4 = r4.getCookies()     // Catch: java.lang.Throwable -> L19c
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L19c
            if (r4 <= 0) goto L7d
            java.lang.String r4 = "Cookie"
            java.lang.String r5 = ";"
            java.net.CookieManager r6 = com.alipay.sdk.net.a.c     // Catch: java.lang.Throwable -> L19c
            java.net.CookieStore r6 = r6.getCookieStore()     // Catch: java.lang.Throwable -> L19c
            java.util.List r6 = r6.getCookies()     // Catch: java.lang.Throwable -> L19c
            java.lang.String r5 = android.text.TextUtils.join(r5, r6)     // Catch: java.lang.Throwable -> L19c
            r12.setRequestProperty(r4, r5)     // Catch: java.lang.Throwable -> L19c
        L7d:
            r4 = 20000(0x4e20, float:2.8026E-41)
            r12.setConnectTimeout(r4)     // Catch: java.lang.Throwable -> L19c
            r4 = 30000(0x7530, float:4.2039E-41)
            r12.setReadTimeout(r4)     // Catch: java.lang.Throwable -> L19c
            r4 = 1
            r12.setInstanceFollowRedirects(r4)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r5 = "User-Agent"
            r12.setRequestProperty(r5, r1)     // Catch: java.lang.Throwable -> L19c
            byte[] r1 = r13.b     // Catch: java.lang.Throwable -> L19c
            java.lang.String r5 = "POST"
            if (r1 == 0) goto Lb7
            byte[] r1 = r13.b     // Catch: java.lang.Throwable -> L19c
            int r1 = r1.length     // Catch: java.lang.Throwable -> L19c
            if (r1 <= 0) goto Lb7
            r12.setRequestMethod(r5)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r1 = "Content-Type"
            java.lang.String r6 = "application/octet-stream;binary/octet-stream"
            r12.setRequestProperty(r1, r6)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r1 = "Accept-Charset"
            java.lang.String r6 = "UTF-8"
            r12.setRequestProperty(r1, r6)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r1 = "Connection"
            r12.setRequestProperty(r1, r0)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r1 = "timeout=180, max=100"
            r12.setRequestProperty(r0, r1)     // Catch: java.lang.Throwable -> L19c
            goto Lbc
        Lb7:
            java.lang.String r0 = "GET"
            r12.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L19c
        Lbc:
            java.util.Map<java.lang.String, java.lang.String> r0 = r13.c     // Catch: java.lang.Throwable -> L19c
            if (r0 == 0) goto Led
            java.util.Map<java.lang.String, java.lang.String> r0 = r13.c     // Catch: java.lang.Throwable -> L19c
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L19c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L19c
        Lca:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L19c
            if (r1 == 0) goto Led
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L19c
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L19c
            java.lang.Object r6 = r1.getKey()     // Catch: java.lang.Throwable -> L19c
            if (r6 != 0) goto Ldd
            goto Lca
        Ldd:
            java.lang.Object r6 = r1.getKey()     // Catch: java.lang.Throwable -> L19c
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L19c
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L19c
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L19c
            r12.setRequestProperty(r6, r1)     // Catch: java.lang.Throwable -> L19c
            goto Lca
        Led:
            r12.setDoInput(r4)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r0 = r12.getRequestMethod()     // Catch: java.lang.Throwable -> L19c
            boolean r0 = r5.equals(r0)     // Catch: java.lang.Throwable -> L19c
            if (r0 == 0) goto Lfd
            r12.setDoOutput(r4)     // Catch: java.lang.Throwable -> L19c
        Lfd:
            java.lang.String r0 = r12.getRequestMethod()     // Catch: java.lang.Throwable -> L19c
            boolean r0 = r5.equals(r0)     // Catch: java.lang.Throwable -> L19c
            if (r0 == 0) goto L119
            java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L19c
            java.io.OutputStream r1 = r12.getOutputStream()     // Catch: java.lang.Throwable -> L19c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19c
            byte[] r13 = r13.b     // Catch: java.lang.Throwable -> L198
            r0.write(r13)     // Catch: java.lang.Throwable -> L198
            r0.flush()     // Catch: java.lang.Throwable -> L198
            goto L11a
        L119:
            r0 = r2
        L11a:
            java.io.BufferedInputStream r13 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L198
            java.io.InputStream r1 = r12.getInputStream()     // Catch: java.lang.Throwable -> L198
            r13.<init>(r1)     // Catch: java.lang.Throwable -> L198
            byte[] r1 = a(r13)     // Catch: java.lang.Throwable -> L192
            java.util.Map r4 = r12.getHeaderFields()     // Catch: java.lang.Throwable -> L192
            if (r4 == 0) goto L140
            java.lang.Object r5 = r4.get(r2)     // Catch: java.lang.Throwable -> L192
            if (r5 == 0) goto L140
            java.lang.String r5 = ","
            java.lang.Object r6 = r4.get(r2)     // Catch: java.lang.Throwable -> L192
            java.lang.Iterable r6 = (java.lang.Iterable) r6     // Catch: java.lang.Throwable -> L192
            java.lang.String r5 = android.text.TextUtils.join(r5, r6)     // Catch: java.lang.Throwable -> L192
            goto L141
        L140:
            r5 = r2
        L141:
            java.lang.String r6 = "Set-Cookie"
            java.lang.Object r6 = r4.get(r6)     // Catch: java.lang.Throwable -> L192
            java.util.List r6 = (java.util.List) r6     // Catch: java.lang.Throwable -> L192
            if (r6 == 0) goto L17d
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L192
        L14f:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Throwable -> L192
            if (r7 == 0) goto L17d
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Throwable -> L192
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L192
            java.util.List r7 = java.net.HttpCookie.parse(r7)     // Catch: java.lang.Throwable -> L192
            if (r7 == 0) goto L14f
            boolean r8 = r7.isEmpty()     // Catch: java.lang.Throwable -> L192
            if (r8 == 0) goto L168
            goto L14f
        L168:
            java.net.CookieManager r8 = com.alipay.sdk.net.a.c     // Catch: java.lang.Throwable -> L192
            java.net.CookieStore r8 = r8.getCookieStore()     // Catch: java.lang.Throwable -> L192
            java.net.URI r9 = r3.toURI()     // Catch: java.lang.Throwable -> L192
            r10 = 0
            java.lang.Object r7 = r7.get(r10)     // Catch: java.lang.Throwable -> L192
            java.net.HttpCookie r7 = (java.net.HttpCookie) r7     // Catch: java.lang.Throwable -> L192
            r8.add(r9, r7)     // Catch: java.lang.Throwable -> L192
            goto L14f
        L17d:
            com.alipay.sdk.net.a$b r3 = new com.alipay.sdk.net.a$b     // Catch: java.lang.Throwable -> L192
            r3.<init>(r4, r5, r1)     // Catch: java.lang.Throwable -> L192
            if (r12 == 0) goto L187
            r12.disconnect()     // Catch: java.lang.Throwable -> L187
        L187:
            r13.close()     // Catch: java.lang.Throwable -> L18b
            goto L18c
        L18b:
        L18c:
            if (r0 == 0) goto L191
            r0.close()     // Catch: java.lang.Throwable -> L191
        L191:
            return r3
        L192:
            r1 = move-exception
            r11 = r0
            r0 = r13
            r13 = r1
            r1 = r11
            goto L1a4
        L198:
            r13 = move-exception
            r1 = r0
            r0 = r2
            goto L1a4
        L19c:
            r13 = move-exception
            r0 = r2
            goto L1a3
        L19f:
            r12 = move-exception
            r13 = r12
            r12 = r2
            r0 = r12
        L1a3:
            r1 = r0
        L1a4:
            com.alipay.sdk.util.c.a(r13)     // Catch: java.lang.Throwable -> L1bb
            if (r12 == 0) goto L1ae
            r12.disconnect()     // Catch: java.lang.Throwable -> L1ad
            goto L1ae
        L1ad:
        L1ae:
            if (r0 == 0) goto L1b5
            r0.close()     // Catch: java.lang.Throwable -> L1b4
            goto L1b5
        L1b4:
        L1b5:
            if (r1 == 0) goto L1ba
            r1.close()     // Catch: java.lang.Throwable -> L1ba
        L1ba:
            return r2
        L1bb:
            r13 = move-exception
            if (r12 == 0) goto L1c3
            r12.disconnect()     // Catch: java.lang.Throwable -> L1c2
            goto L1c3
        L1c2:
        L1c3:
            if (r0 == 0) goto L1ca
            r0.close()     // Catch: java.lang.Throwable -> L1c9
            goto L1ca
        L1c9:
        L1ca:
            if (r1 == 0) goto L1cf
            r1.close()     // Catch: java.lang.Throwable -> L1cf
        L1cf:
            goto L1d1
        L1d0:
            throw r13
        L1d1:
            goto L1d0
    }

    private static java.net.Proxy a(android.content.Context r5) {
            java.lang.String r5 = c(r5)
            r0 = 0
            if (r5 == 0) goto L10
            java.lang.String r1 = "wap"
            boolean r5 = r5.contains(r1)
            if (r5 != 0) goto L10
            return r0
        L10:
            java.lang.String r5 = "https.proxyHost"
            java.lang.String r5 = java.lang.System.getProperty(r5)     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "https.proxyPort"
            java.lang.String r1 = java.lang.System.getProperty(r1)     // Catch: java.lang.Throwable -> L34
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L34
            if (r2 != 0) goto L34
            java.net.Proxy r2 = new java.net.Proxy     // Catch: java.lang.Throwable -> L34
            java.net.Proxy$Type r3 = java.net.Proxy.Type.HTTP     // Catch: java.lang.Throwable -> L34
            java.net.InetSocketAddress r4 = new java.net.InetSocketAddress     // Catch: java.lang.Throwable -> L34
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L34
            r4.<init>(r5, r1)     // Catch: java.lang.Throwable -> L34
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L34
            r0 = r2
        L34:
            return r0
    }

    private static byte[] a(java.io.InputStream r5) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r1]
        L9:
            int r2 = r1.length
            r3 = 0
            int r2 = r5.read(r1, r3, r2)
            r4 = -1
            if (r2 == r4) goto L16
            r0.write(r1, r3, r2)
            goto L9
        L16:
            r0.flush()
            byte[] r5 = r0.toByteArray()
            return r5
    }

    private static android.net.NetworkInfo b(android.content.Context r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L10
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L10
            android.net.NetworkInfo r0 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L10
        L10:
            return r0
    }

    private static java.lang.String c(android.content.Context r3) {
            java.lang.String r0 = "none"
            android.net.NetworkInfo r3 = b(r3)     // Catch: java.lang.Exception -> L21
            if (r3 == 0) goto L21
            boolean r1 = r3.isAvailable()     // Catch: java.lang.Exception -> L21
            if (r1 == 0) goto L21
            int r1 = r3.getType()     // Catch: java.lang.Exception -> L21
            r2 = 1
            if (r1 != r2) goto L18
            java.lang.String r3 = "wifi"
            return r3
        L18:
            java.lang.String r3 = r3.getExtraInfo()     // Catch: java.lang.Exception -> L21
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Exception -> L21
            return r3
        L21:
            return r0
    }
}
