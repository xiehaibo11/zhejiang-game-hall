package com.kuaishou.weapon.p0;

public class l {
    static javax.net.ssl.TrustManager[] a = null;
    static javax.net.ssl.SSLSocketFactory b = null;
    private static final java.lang.String c = "gzip";
    private static final int d = 1024;
    private static volatile com.kuaishou.weapon.p0.l f;
    private static android.content.Context g;
    private boolean e;


    static {
            r0 = 1
            javax.net.ssl.TrustManager[] r0 = new javax.net.ssl.TrustManager[r0]
            com.kuaishou.weapon.p0.l$1 r1 = new com.kuaishou.weapon.p0.l$1
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            com.kuaishou.weapon.p0.l.a = r0
            return
    }

    private l(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            com.kuaishou.weapon.p0.l.g = r2
            return
    }

    public static com.kuaishou.weapon.p0.l a(android.content.Context r2) {
            com.kuaishou.weapon.p0.l r0 = com.kuaishou.weapon.p0.l.f
            if (r0 != 0) goto L17
            java.lang.Class<com.kuaishou.weapon.p0.l> r0 = com.kuaishou.weapon.p0.l.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.l r1 = com.kuaishou.weapon.p0.l.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kuaishou.weapon.p0.l r1 = new com.kuaishou.weapon.p0.l     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.kuaishou.weapon.p0.l.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.kuaishou.weapon.p0.l r2 = com.kuaishou.weapon.p0.l.f
            return r2
    }

    private java.io.InputStream a(java.net.HttpURLConnection r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            if (r4 == 0) goto L1e
            java.lang.String r1 = "gzip"
            java.lang.String r2 = r4.getContentEncoding()     // Catch: java.io.IOException -> L1e
            boolean r1 = r1.equalsIgnoreCase(r2)     // Catch: java.io.IOException -> L1e
            if (r1 == 0) goto L16
            r1 = 1
            r3.e = r1     // Catch: java.io.IOException -> L1e
            goto L19
        L16:
            r1 = 0
            r3.e = r1     // Catch: java.io.IOException -> L1e
        L19:
            java.io.InputStream r4 = r4.getInputStream()     // Catch: java.io.IOException -> L1e
            return r4
        L1e:
            return r0
    }

    private static void a(java.lang.String r3) {
            com.kuaishou.weapon.p0.h r0 = new com.kuaishou.weapon.p0.h     // Catch: java.lang.Exception -> Ld
            android.content.Context r1 = com.kuaishou.weapon.p0.l.g     // Catch: java.lang.Exception -> Ld
            r0.<init>(r1)     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = "plc001_scc_e"
            r2 = 1
            r0.c(r1, r3, r2)     // Catch: java.lang.Exception -> Ld
        Ld:
            return
    }

    private synchronized void a(javax.net.ssl.HttpsURLConnection r5) {
            r4 = this;
            monitor-enter(r4)
            if (r5 == 0) goto L2a
            javax.net.ssl.SSLSocketFactory r0 = com.kuaishou.weapon.p0.l.b     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L1e
            java.lang.String r0 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.lang.Throwable -> L28
            r1 = 0
            javax.net.ssl.TrustManager[] r2 = com.kuaishou.weapon.p0.l.a     // Catch: java.lang.Throwable -> L28
            java.security.SecureRandom r3 = new java.security.SecureRandom     // Catch: java.lang.Throwable -> L28
            r3.<init>()     // Catch: java.lang.Throwable -> L28
            r0.init(r1, r2, r3)     // Catch: java.lang.Throwable -> L28
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()     // Catch: java.lang.Throwable -> L28
            com.kuaishou.weapon.p0.l.b = r0     // Catch: java.lang.Throwable -> L28
        L1e:
            javax.net.ssl.SSLSocketFactory r0 = com.kuaishou.weapon.p0.l.b     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L2a
            javax.net.ssl.SSLSocketFactory r0 = com.kuaishou.weapon.p0.l.b     // Catch: java.lang.Throwable -> L28
            r5.setSSLSocketFactory(r0)     // Catch: java.lang.Throwable -> L28
            goto L2a
        L28:
            monitor-exit(r4)
            return
        L2a:
            monitor-exit(r4)
            return
    }

    static void a(java.security.cert.X509Certificate[] r0) {
            b(r0)
            return
    }

    private boolean a(java.io.InputStream r5, java.io.File r6) {
            r4 = this;
            boolean r0 = r4.e
            if (r0 == 0) goto La
            java.util.zip.GZIPInputStream r0 = new java.util.zip.GZIPInputStream     // Catch: java.io.IOException -> La
            r0.<init>(r5)     // Catch: java.io.IOException -> La
            r5 = r0
        La:
            r0 = 0
            if (r5 != 0) goto Le
            return r0
        Le:
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L2f
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L2f
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L2f
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2f
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L30
        L1c:
            int r2 = r5.read(r6)     // Catch: java.lang.Throwable -> L30
            r3 = -1
            if (r2 == r3) goto L2a
            r1.write(r6, r0, r2)     // Catch: java.lang.Throwable -> L30
            r1.flush()     // Catch: java.lang.Throwable -> L30
            goto L1c
        L2a:
            r1.close()     // Catch: java.io.IOException -> L2d
        L2d:
            r5 = 1
            return r5
        L2f:
            r1 = 0
        L30:
            if (r1 == 0) goto L35
            r1.close()     // Catch: java.io.IOException -> L35
        L35:
            return r0
    }

    private static void b(java.security.cert.X509Certificate[] r2) {
            if (r2 == 0) goto L26
            int r0 = r2.length     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L6
            goto L26
        L6:
            r0 = 0
            r2 = r2[r0]     // Catch: java.lang.Throwable -> L26
            javax.security.auth.x500.X500Principal r2 = r2.getIssuerX500Principal()     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L26
            java.lang.String r0 = ".*(GeoTrust|VeriSign|Symantec|GlobalSign|Entrust|Thawte|DigiCert).*"
            r1 = 2
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r1)     // Catch: java.lang.Throwable -> L26
            java.util.regex.Matcher r0 = r0.matcher(r2)     // Catch: java.lang.Throwable -> L26
            boolean r0 = r0.matches()     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L23
            return
        L23:
            a(r2)     // Catch: java.lang.Throwable -> L26
        L26:
            return
    }

    public java.lang.String a(com.kuaishou.weapon.p0.m r11) {
            r10 = this;
            r0 = 0
            r1 = 0
            java.lang.String r2 = "POST"
            java.lang.String r3 = r11.a     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            java.net.HttpURLConnection r2 = r10.a(r3, r2)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            java.lang.String r3 = r11.b()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            if (r4 != 0) goto L1b
            if (r2 == 0) goto L1b
            java.lang.String r4 = "Cookie"
            r2.setRequestProperty(r4, r3)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
        L1b:
            java.lang.String r3 = r11.c()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            if (r4 != 0) goto L2c
            if (r2 == 0) goto L2c
            java.lang.String r4 = "env"
            r2.setRequestProperty(r4, r3)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
        L2c:
            org.json.JSONObject r3 = r11.a()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            if (r3 == 0) goto L3f
            org.json.JSONObject r11 = r11.a()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            byte[] r11 = r11.getBytes()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            goto L40
        L3f:
            r11 = r1
        L40:
            if (r11 == 0) goto L5c
            int r3 = r11.length     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            if (r3 <= 0) goto L5c
            java.lang.String r3 = "Content-Length"
            int r4 = r11.length     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            r2.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            java.io.OutputStream r3 = r2.getOutputStream()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            r3.write(r11)     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            r3.flush()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            r3.close()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
        L5c:
            int r11 = r2.getResponseCode()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            r3 = 200(0xc8, float:2.8E-43)
            if (r11 != r3) goto Lc7
            java.io.InputStream r11 = r2.getInputStream()     // Catch: java.lang.Throwable -> Ld5 java.lang.Exception -> Le2
            com.kuaishou.weapon.p0.h r3 = new com.kuaishou.weapon.p0.h     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            android.content.Context r4 = com.kuaishou.weapon.p0.l.g     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            java.lang.String r4 = "plc001_t_d"
            long r5 = r2.getDate()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            long r5 = r5 - r7
            r3.b(r4, r5)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            java.lang.String r4 = "WeaponHttpTask --   date "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            long r4 = r2.getDate()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            r3.append(r4)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            java.lang.String r2 = " "
            r3.append(r2)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            r3.append(r4)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            com.kuaishou.weapon.p0.e.c(r2)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La4
            goto La4
        L9f:
            r0 = move-exception
        La0:
            r9 = r0
            r0 = r11
            r11 = r9
            goto Ld7
        La4:
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> Lc5
            r2.<init>()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> Lc5
            r3 = 1024(0x400, float:1.435E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> Lc2 java.lang.Exception -> Le4
        Lad:
            int r4 = r11.read(r3)     // Catch: java.lang.Throwable -> Lc2 java.lang.Exception -> Le4
            r5 = -1
            if (r4 == r5) goto Lb8
            r2.write(r3, r0, r4)     // Catch: java.lang.Throwable -> Lc2 java.lang.Exception -> Le4
            goto Lad
        Lb8:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> Lc2 java.lang.Exception -> Le4
            r3 = 1
            r9 = r2
            r2 = r0
            r0 = r3
            r3 = r9
            goto Lca
        Lc2:
            r0 = move-exception
            r1 = r2
            goto La0
        Lc5:
            r2 = r1
            goto Le4
        Lc7:
            r11 = r1
            r2 = r11
            r3 = r2
        Lca:
            if (r3 == 0) goto Lcf
            r3.close()     // Catch: java.lang.Exception -> Lef
        Lcf:
            if (r11 == 0) goto Lef
            r11.close()     // Catch: java.lang.Exception -> Lef
            goto Lef
        Ld5:
            r11 = move-exception
            r0 = r1
        Ld7:
            if (r1 == 0) goto Ldc
            r1.close()     // Catch: java.lang.Exception -> Le1
        Ldc:
            if (r0 == 0) goto Le1
            r0.close()     // Catch: java.lang.Exception -> Le1
        Le1:
            throw r11
        Le2:
            r11 = r1
            r2 = r11
        Le4:
            if (r2 == 0) goto Le9
            r2.close()     // Catch: java.lang.Exception -> Lee
        Le9:
            if (r11 == 0) goto Lee
            r11.close()     // Catch: java.lang.Exception -> Lee
        Lee:
            r2 = r1
        Lef:
            if (r0 == 0) goto Lf2
            return r2
        Lf2:
            return r1
    }

    public java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
            java.lang.String r0 = ""
        La:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "&"
            r2.append(r0)
            java.lang.Object r0 = r1.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r2.append(r0)
            java.lang.String r0 = "="
            r2.append(r0)
            java.lang.Object r0 = r1.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto La
        L3f:
            r4 = 1
            java.lang.String r4 = r0.substring(r4)
            return r4
    }

    public java.net.HttpURLConnection a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L59
            r0.<init>(r5)     // Catch: java.lang.Exception -> L59
            java.lang.String r5 = "https"
            java.lang.String r1 = r0.getProtocol()     // Catch: java.lang.Exception -> L59
            boolean r5 = r5.equals(r1)     // Catch: java.lang.Exception -> L59
            if (r5 == 0) goto L1b
            java.net.URLConnection r5 = r0.openConnection()     // Catch: java.lang.Exception -> L59
            javax.net.ssl.HttpsURLConnection r5 = (javax.net.ssl.HttpsURLConnection) r5     // Catch: java.lang.Exception -> L59
            r4.a(r5)     // Catch: java.lang.Exception -> L59
            goto L21
        L1b:
            java.net.URLConnection r5 = r0.openConnection()     // Catch: java.lang.Exception -> L59
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5     // Catch: java.lang.Exception -> L59
        L21:
            r5.setRequestMethod(r6)     // Catch: java.lang.Exception -> L5a
            r0 = 1
            r5.setAllowUserInteraction(r0)     // Catch: java.lang.Exception -> L5a
            r5.setInstanceFollowRedirects(r0)     // Catch: java.lang.Exception -> L5a
            r1 = 0
            r5.setChunkedStreamingMode(r1)     // Catch: java.lang.Exception -> L5a
            r2 = 10000(0x2710, float:1.4013E-41)
            r5.setConnectTimeout(r2)     // Catch: java.lang.Exception -> L5a
            r2 = 5000(0x1388, float:7.006E-42)
            r5.setReadTimeout(r2)     // Catch: java.lang.Exception -> L5a
            java.lang.String r2 = "Charset"
            java.lang.String r3 = "UTF-8"
            r5.setRequestProperty(r2, r3)     // Catch: java.lang.Exception -> L5a
            java.lang.String r2 = "Content-Type"
            java.lang.String r3 = "application/json; charset=UTF-8"
            r5.setRequestProperty(r2, r3)     // Catch: java.lang.Exception -> L5a
            java.lang.String r2 = "post"
            boolean r6 = r6.equalsIgnoreCase(r2)     // Catch: java.lang.Exception -> L5a
            if (r6 == 0) goto L5a
            r5.setDoInput(r0)     // Catch: java.lang.Exception -> L5a
            r5.setDoOutput(r0)     // Catch: java.lang.Exception -> L5a
            r5.setUseCaches(r1)     // Catch: java.lang.Exception -> L5a
            goto L5a
        L59:
            r5 = 0
        L5a:
            return r5
    }

    public void a(com.kuaishou.weapon.p0.m r2, com.kuaishou.weapon.p0.j r3) {
            r1 = this;
            java.lang.String r0 = "GET"
            r1.a(r2, r3, r0)
            return
    }

    public void a(com.kuaishou.weapon.p0.m r10, com.kuaishou.weapon.p0.j r11, java.lang.String r12) {
            r9 = this;
            r0 = 0
            java.lang.String r1 = r10.a     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            java.net.HttpURLConnection r1 = r9.a(r1, r12)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            java.lang.String r2 = r10.b()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            if (r3 != 0) goto L18
            if (r1 == 0) goto L18
            java.lang.String r3 = "Cookie"
            r1.setRequestProperty(r3, r2)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
        L18:
            java.lang.String r2 = r10.c()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            if (r3 != 0) goto L29
            if (r1 == 0) goto L29
            java.lang.String r3 = "env"
            r1.setRequestProperty(r3, r2)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
        L29:
            java.lang.String r2 = "post"
            boolean r12 = r12.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            if (r12 == 0) goto L61
            org.json.JSONObject r12 = r10.a()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            if (r12 == 0) goto L44
            org.json.JSONObject r10 = r10.a()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            byte[] r10 = r10.getBytes()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            goto L45
        L44:
            r10 = r0
        L45:
            if (r10 == 0) goto L61
            int r12 = r10.length     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            if (r12 <= 0) goto L61
            java.lang.String r12 = "Content-Length"
            int r2 = r10.length     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            r1.setRequestProperty(r12, r2)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            java.io.OutputStream r12 = r1.getOutputStream()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            r12.write(r10)     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            r12.flush()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            r12.close()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
        L61:
            int r10 = r1.getResponseCode()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            r12 = 200(0xc8, float:2.8E-43)
            r2 = 0
            if (r10 != r12) goto Ld0
            java.io.InputStream r10 = r1.getInputStream()     // Catch: java.lang.Throwable -> Leb java.lang.Exception -> Lfe
            com.kuaishou.weapon.p0.h r12 = new com.kuaishou.weapon.p0.h     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            android.content.Context r3 = com.kuaishou.weapon.p0.l.g     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            r12.<init>(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            java.lang.String r3 = "plc001_t_d"
            long r4 = r1.getDate()     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            long r4 = r4 - r6
            r12.b(r3, r4)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            java.lang.String r3 = "WeaponHttpTask --   date "
            r12.<init>(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            long r3 = r1.getDate()     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            r12.append(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            java.lang.String r1 = " "
            r12.append(r1)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            r12.append(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            com.kuaishou.weapon.p0.e.c(r12)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lab
            goto Lab
        La5:
            r12 = move-exception
            r1 = r0
            r8 = r12
            r12 = r10
            r10 = r8
            goto Lee
        Lab:
            java.io.ByteArrayOutputStream r12 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lce
            r12.<init>()     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> Lce
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> L100
        Lb4:
            int r3 = r10.read(r1)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> L100
            r4 = -1
            if (r3 == r4) goto Lbf
            r12.write(r1, r2, r3)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> L100
            goto Lb4
        Lbf:
            java.lang.String r0 = r12.toString()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> L100
            r2 = 1
            r8 = r0
            r0 = r12
            r12 = r8
            goto Ld2
        Lc8:
            r1 = move-exception
            r8 = r12
            r12 = r10
            r10 = r1
            r1 = r8
            goto Lee
        Lce:
            r12 = r0
            goto L100
        Ld0:
            r10 = r0
            r12 = r10
        Ld2:
            if (r0 == 0) goto Ld7
            r0.close()     // Catch: java.lang.Exception -> Lea
        Ld7:
            if (r10 == 0) goto Ldc
            r10.close()     // Catch: java.lang.Exception -> Lea
        Ldc:
            if (r2 == 0) goto Le4
            if (r11 == 0) goto Lea
            r11.a(r12)     // Catch: java.lang.Exception -> Lea
            return
        Le4:
            if (r11 == 0) goto Lea
            r11.b(r12)     // Catch: java.lang.Exception -> Lea
        Lea:
            return
        Leb:
            r10 = move-exception
            r12 = r0
            r1 = r12
        Lee:
            if (r1 == 0) goto Lf3
            r1.close()     // Catch: java.lang.Exception -> Lfd
        Lf3:
            if (r12 == 0) goto Lf8
            r12.close()     // Catch: java.lang.Exception -> Lfd
        Lf8:
            if (r11 == 0) goto Lfd
            r11.b(r0)     // Catch: java.lang.Exception -> Lfd
        Lfd:
            throw r10
        Lfe:
            r10 = r0
            r12 = r10
        L100:
            if (r12 == 0) goto L105
            r12.close()     // Catch: java.lang.Exception -> L110
        L105:
            if (r10 == 0) goto L10a
            r10.close()     // Catch: java.lang.Exception -> L110
        L10a:
            if (r11 == 0) goto L110
            r11.b(r0)     // Catch: java.lang.Exception -> L110
        L110:
            return
    }

    public boolean a(java.lang.String r4, java.io.File r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            java.lang.String r2 = "GET"
            java.net.HttpURLConnection r4 = r3.a(r4, r2)     // Catch: java.lang.Throwable -> L24
            java.io.InputStream r0 = r3.a(r4)     // Catch: java.lang.Throwable -> L25
            boolean r5 = r3.a(r0, r5)     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L1c
            r0.close()     // Catch: java.lang.Throwable -> L22
        L1c:
            if (r4 == 0) goto L23
            r4.disconnect()     // Catch: java.lang.Throwable -> L22
            goto L23
        L22:
            return r1
        L23:
            return r5
        L24:
            r4 = r0
        L25:
            if (r0 == 0) goto L2a
            r0.close()     // Catch: java.lang.Throwable -> L30
        L2a:
            if (r4 == 0) goto L30
            r4.disconnect()     // Catch: java.lang.Throwable -> L30
        L30:
            return r1
    }

    public void b(com.kuaishou.weapon.p0.m r2, com.kuaishou.weapon.p0.j r3) {
            r1 = this;
            java.lang.String r0 = "POST"
            r1.a(r2, r3, r0)
            return
    }
}
