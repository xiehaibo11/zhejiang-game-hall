package com.alipay.sdk.m.o;

public final class a {
    public static final java.lang.String a = "msp";
    public static final java.lang.String b = "application/octet-stream;binary/octet-stream";
    public static final java.net.CookieManager c = null;

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
                r0 = 2
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = r3.a
                r2 = 0
                r0[r2] = r1
                java.util.Map<java.lang.String, java.lang.String> r1 = r3.c
                r2 = 1
                r0[r2] = r1
                java.lang.String r1 = "<UrlConnectionConfigure url=%s headers=%s>"
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
            com.alipay.sdk.m.o.a.c = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.o.a.b a(android.content.Context r11, com.alipay.sdk.m.o.a.a r12) {
            java.lang.String r0 = "Keep-Alive"
            java.lang.String r1 = "mspl"
            r2 = 0
            if (r11 != 0) goto L8
            return r2
        L8:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19c
            r3.<init>()     // Catch: java.lang.Throwable -> L19c
            java.lang.String r4 = "conn config: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L19c
            r3.append(r12)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L19c
            com.alipay.sdk.m.u.e.d(r1, r3)     // Catch: java.lang.Throwable -> L19c
            java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> L19c
            java.lang.String r4 = r12.a     // Catch: java.lang.Throwable -> L19c
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L19c
            java.net.Proxy r11 = b(r11)     // Catch: java.lang.Throwable -> L19c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19c
            r4.<init>()     // Catch: java.lang.Throwable -> L19c
            java.lang.String r5 = "conn proxy: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L19c
            r4.append(r11)     // Catch: java.lang.Throwable -> L19c
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L19c
            com.alipay.sdk.m.u.e.d(r1, r4)     // Catch: java.lang.Throwable -> L19c
            if (r11 == 0) goto L44
            java.net.URLConnection r11 = r3.openConnection(r11)     // Catch: java.lang.Throwable -> L19c
            java.net.HttpURLConnection r11 = (java.net.HttpURLConnection) r11     // Catch: java.lang.Throwable -> L19c
            goto L4a
        L44:
            java.net.URLConnection r11 = r3.openConnection()     // Catch: java.lang.Throwable -> L19c
            java.net.HttpURLConnection r11 = (java.net.HttpURLConnection) r11     // Catch: java.lang.Throwable -> L19c
        L4a:
            java.lang.String r1 = "http.keepAlive"
            java.lang.String r4 = "false"
            java.lang.System.setProperty(r1, r4)     // Catch: java.lang.Throwable -> L19a
            boolean r1 = r11 instanceof javax.net.ssl.HttpsURLConnection     // Catch: java.lang.Throwable -> L19a
            if (r1 == 0) goto L58
            r1 = r11
            javax.net.ssl.HttpsURLConnection r1 = (javax.net.ssl.HttpsURLConnection) r1     // Catch: java.lang.Throwable -> L19a
        L58:
            java.net.CookieManager r1 = com.alipay.sdk.m.o.a.c     // Catch: java.lang.Throwable -> L19a
            java.net.CookieStore r1 = r1.getCookieStore()     // Catch: java.lang.Throwable -> L19a
            java.util.List r1 = r1.getCookies()     // Catch: java.lang.Throwable -> L19a
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L19a
            if (r1 <= 0) goto L7d
            java.lang.String r1 = "Cookie"
            java.lang.String r4 = ";"
            java.net.CookieManager r5 = com.alipay.sdk.m.o.a.c     // Catch: java.lang.Throwable -> L19a
            java.net.CookieStore r5 = r5.getCookieStore()     // Catch: java.lang.Throwable -> L19a
            java.util.List r5 = r5.getCookies()     // Catch: java.lang.Throwable -> L19a
            java.lang.String r4 = android.text.TextUtils.join(r4, r5)     // Catch: java.lang.Throwable -> L19a
            r11.setRequestProperty(r1, r4)     // Catch: java.lang.Throwable -> L19a
        L7d:
            r1 = 20000(0x4e20, float:2.8026E-41)
            r11.setConnectTimeout(r1)     // Catch: java.lang.Throwable -> L19a
            r1 = 30000(0x7530, float:4.2039E-41)
            r11.setReadTimeout(r1)     // Catch: java.lang.Throwable -> L19a
            r1 = 1
            r11.setInstanceFollowRedirects(r1)     // Catch: java.lang.Throwable -> L19a
            java.lang.String r4 = "User-Agent"
            java.lang.String r5 = "msp"
            r11.setRequestProperty(r4, r5)     // Catch: java.lang.Throwable -> L19a
            byte[] r4 = r12.b     // Catch: java.lang.Throwable -> L19a
            java.lang.String r5 = "POST"
            if (r4 == 0) goto Lb9
            byte[] r4 = r12.b     // Catch: java.lang.Throwable -> L19a
            int r4 = r4.length     // Catch: java.lang.Throwable -> L19a
            if (r4 <= 0) goto Lb9
            r11.setRequestMethod(r5)     // Catch: java.lang.Throwable -> L19a
            java.lang.String r4 = "Content-Type"
            java.lang.String r6 = "application/octet-stream;binary/octet-stream"
            r11.setRequestProperty(r4, r6)     // Catch: java.lang.Throwable -> L19a
            java.lang.String r4 = "Accept-Charset"
            java.lang.String r6 = "UTF-8"
            r11.setRequestProperty(r4, r6)     // Catch: java.lang.Throwable -> L19a
            java.lang.String r4 = "Connection"
            r11.setRequestProperty(r4, r0)     // Catch: java.lang.Throwable -> L19a
            java.lang.String r4 = "timeout=180, max=100"
            r11.setRequestProperty(r0, r4)     // Catch: java.lang.Throwable -> L19a
            goto Lbe
        Lb9:
            java.lang.String r0 = "GET"
            r11.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L19a
        Lbe:
            java.util.Map<java.lang.String, java.lang.String> r0 = r12.c     // Catch: java.lang.Throwable -> L19a
            if (r0 == 0) goto Lef
            java.util.Map<java.lang.String, java.lang.String> r0 = r12.c     // Catch: java.lang.Throwable -> L19a
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L19a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L19a
        Lcc:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> L19a
            if (r4 == 0) goto Lef
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> L19a
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L19a
            java.lang.Object r6 = r4.getKey()     // Catch: java.lang.Throwable -> L19a
            if (r6 != 0) goto Ldf
            goto Lcc
        Ldf:
            java.lang.Object r6 = r4.getKey()     // Catch: java.lang.Throwable -> L19a
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L19a
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L19a
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L19a
            r11.setRequestProperty(r6, r4)     // Catch: java.lang.Throwable -> L19a
            goto Lcc
        Lef:
            r11.setDoInput(r1)     // Catch: java.lang.Throwable -> L19a
            java.lang.String r0 = r11.getRequestMethod()     // Catch: java.lang.Throwable -> L19a
            boolean r0 = r5.equals(r0)     // Catch: java.lang.Throwable -> L19a
            if (r0 == 0) goto Lff
            r11.setDoOutput(r1)     // Catch: java.lang.Throwable -> L19a
        Lff:
            java.lang.String r0 = r11.getRequestMethod()     // Catch: java.lang.Throwable -> L19a
            boolean r0 = r5.equals(r0)     // Catch: java.lang.Throwable -> L19a
            if (r0 == 0) goto L11b
            java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L19a
            java.io.OutputStream r1 = r11.getOutputStream()     // Catch: java.lang.Throwable -> L19a
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19a
            byte[] r12 = r12.b     // Catch: java.lang.Throwable -> L196
            r0.write(r12)     // Catch: java.lang.Throwable -> L196
            r0.flush()     // Catch: java.lang.Throwable -> L196
            goto L11c
        L11b:
            r0 = r2
        L11c:
            java.io.BufferedInputStream r12 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L196
            java.io.InputStream r1 = r11.getInputStream()     // Catch: java.lang.Throwable -> L196
            r12.<init>(r1)     // Catch: java.lang.Throwable -> L196
            byte[] r1 = a(r12)     // Catch: java.lang.Throwable -> L194
            java.util.Map r4 = r11.getHeaderFields()     // Catch: java.lang.Throwable -> L194
            if (r4 == 0) goto L142
            java.lang.Object r5 = r4.get(r2)     // Catch: java.lang.Throwable -> L194
            if (r5 == 0) goto L142
            java.lang.String r5 = ","
            java.lang.Object r6 = r4.get(r2)     // Catch: java.lang.Throwable -> L194
            java.lang.Iterable r6 = (java.lang.Iterable) r6     // Catch: java.lang.Throwable -> L194
            java.lang.String r5 = android.text.TextUtils.join(r5, r6)     // Catch: java.lang.Throwable -> L194
            goto L143
        L142:
            r5 = r2
        L143:
            java.lang.String r6 = "Set-Cookie"
            java.lang.Object r6 = r4.get(r6)     // Catch: java.lang.Throwable -> L194
            java.util.List r6 = (java.util.List) r6     // Catch: java.lang.Throwable -> L194
            if (r6 == 0) goto L17f
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L194
        L151:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Throwable -> L194
            if (r7 == 0) goto L17f
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Throwable -> L194
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L194
            java.util.List r7 = java.net.HttpCookie.parse(r7)     // Catch: java.lang.Throwable -> L194
            if (r7 == 0) goto L151
            boolean r8 = r7.isEmpty()     // Catch: java.lang.Throwable -> L194
            if (r8 == 0) goto L16a
            goto L151
        L16a:
            java.net.CookieManager r8 = com.alipay.sdk.m.o.a.c     // Catch: java.lang.Throwable -> L194
            java.net.CookieStore r8 = r8.getCookieStore()     // Catch: java.lang.Throwable -> L194
            java.net.URI r9 = r3.toURI()     // Catch: java.lang.Throwable -> L194
            r10 = 0
            java.lang.Object r7 = r7.get(r10)     // Catch: java.lang.Throwable -> L194
            java.net.HttpCookie r7 = (java.net.HttpCookie) r7     // Catch: java.lang.Throwable -> L194
            r8.add(r9, r7)     // Catch: java.lang.Throwable -> L194
            goto L151
        L17f:
            com.alipay.sdk.m.o.a$b r3 = new com.alipay.sdk.m.o.a$b     // Catch: java.lang.Throwable -> L194
            r3.<init>(r4, r5, r1)     // Catch: java.lang.Throwable -> L194
            if (r11 == 0) goto L189
            r11.disconnect()     // Catch: java.lang.Throwable -> L189
        L189:
            r12.close()     // Catch: java.lang.Throwable -> L18d
            goto L18e
        L18d:
        L18e:
            if (r0 == 0) goto L193
            r0.close()     // Catch: java.lang.Throwable -> L193
        L193:
            return r3
        L194:
            r1 = move-exception
            goto L1a2
        L196:
            r12 = move-exception
            r1 = r12
            r12 = r2
            goto L1a2
        L19a:
            r12 = move-exception
            goto L19f
        L19c:
            r11 = move-exception
            r12 = r11
            r11 = r2
        L19f:
            r1 = r12
            r12 = r2
            r0 = r12
        L1a2:
            com.alipay.sdk.m.u.e.a(r1)     // Catch: java.lang.Throwable -> L1b9
            if (r11 == 0) goto L1ac
            r11.disconnect()     // Catch: java.lang.Throwable -> L1ab
            goto L1ac
        L1ab:
        L1ac:
            if (r12 == 0) goto L1b3
            r12.close()     // Catch: java.lang.Throwable -> L1b2
            goto L1b3
        L1b2:
        L1b3:
            if (r0 == 0) goto L1b8
            r0.close()     // Catch: java.lang.Throwable -> L1b8
        L1b8:
            return r2
        L1b9:
            r1 = move-exception
            if (r11 == 0) goto L1c1
            r11.disconnect()     // Catch: java.lang.Throwable -> L1c0
            goto L1c1
        L1c0:
        L1c1:
            if (r12 == 0) goto L1c8
            r12.close()     // Catch: java.lang.Throwable -> L1c7
            goto L1c8
        L1c7:
        L1c8:
            if (r0 == 0) goto L1cd
            r0.close()     // Catch: java.lang.Throwable -> L1cd
        L1cd:
            goto L1cf
        L1ce:
            throw r1
        L1cf:
            goto L1ce
    }

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = "none"
            r1 = 0
            android.net.NetworkInfo r3 = com.alipay.sdk.m.w.b.a(r1, r3)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L22
            boolean r1 = r3.isAvailable()     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L22
            int r1 = r3.getType()     // Catch: java.lang.Exception -> L22
            r2 = 1
            if (r1 != r2) goto L19
            java.lang.String r3 = "wifi"
            return r3
        L19:
            java.lang.String r3 = r3.getExtraInfo()     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Exception -> L22
            return r3
        L22:
            return r0
    }

    public static byte[] a(java.io.InputStream r6) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r1]
        L9:
            r3 = 0
            int r4 = r6.read(r2, r3, r1)
            r5 = -1
            if (r4 == r5) goto L15
            r0.write(r2, r3, r4)
            goto L9
        L15:
            r0.flush()
            byte[] r6 = r0.toByteArray()
            return r6
    }

    public static java.net.Proxy b(android.content.Context r5) {
            java.lang.String r5 = a(r5)
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
}
