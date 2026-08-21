package com.cmic.gen.sdk.c.a;

public class a implements com.cmic.gen.sdk.c.a.b {
    private static com.cmic.gen.sdk.c.c a;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String[] r1 = com.cmic.gen.sdk.b.a
            r2 = 0
            r1 = r1[r2]
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String[] r2 = com.cmic.gen.sdk.b.a
            r3 = 2
            r2 = r2[r3]
            r0.append(r2)
            r0.append(r1)
            java.lang.String[] r2 = com.cmic.gen.sdk.b.a
            r3 = 4
            r2 = r2[r3]
            r0.append(r2)
            r0.append(r1)
            java.lang.String[] r1 = com.cmic.gen.sdk.b.a
            r2 = 6
            r1 = r1[r2]
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private void a(java.io.Closeable r1) {
            r0 = this;
            if (r1 == 0) goto La
            r1.close()     // Catch: java.io.IOException -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public synchronized javax.net.ssl.SSLSocketFactory a(com.cmic.gen.sdk.c.b.g r2, com.cmic.gen.sdk.a r3) {
            r1 = this;
            monitor-enter(r1)
            boolean r2 = r2 instanceof com.cmic.gen.sdk.c.b.e     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L16
            com.cmic.gen.sdk.c.c r2 = new com.cmic.gen.sdk.c.c     // Catch: java.lang.Throwable -> L29
            javax.net.ssl.SSLSocketFactory r0 = javax.net.ssl.HttpsURLConnection.getDefaultSSLSocketFactory()     // Catch: java.lang.Throwable -> L29
            r2.<init>(r0, r3)     // Catch: java.lang.Throwable -> L29
            com.cmic.gen.sdk.c.c r3 = com.cmic.gen.sdk.c.a.a.a     // Catch: java.lang.Throwable -> L29
            if (r3 != 0) goto L14
            com.cmic.gen.sdk.c.a.a.a = r2     // Catch: java.lang.Throwable -> L29
        L14:
            monitor-exit(r1)
            return r2
        L16:
            com.cmic.gen.sdk.c.c r2 = com.cmic.gen.sdk.c.a.a.a     // Catch: java.lang.Throwable -> L29
            if (r2 != 0) goto L25
            com.cmic.gen.sdk.c.c r2 = new com.cmic.gen.sdk.c.c     // Catch: java.lang.Throwable -> L29
            javax.net.ssl.SSLSocketFactory r0 = javax.net.ssl.HttpsURLConnection.getDefaultSSLSocketFactory()     // Catch: java.lang.Throwable -> L29
            r2.<init>(r0, r3)     // Catch: java.lang.Throwable -> L29
            com.cmic.gen.sdk.c.a.a.a = r2     // Catch: java.lang.Throwable -> L29
        L25:
            com.cmic.gen.sdk.c.c r2 = com.cmic.gen.sdk.c.a.a.a     // Catch: java.lang.Throwable -> L29
            monitor-exit(r1)
            return r2
        L29:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public void a(com.cmic.gen.sdk.c.c.c r21, com.cmic.gen.sdk.c.d.c r22, com.cmic.gen.sdk.a r23) {
            r20 = this;
            r1 = r20
            r2 = r21
            r3 = r22
            r4 = r23
            java.lang.String r5 = "remote_ip"
            java.lang.String r6 = ""
            java.lang.String r7 = "responseResult: "
            java.lang.String r8 = "responseCode: "
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r9 = "请求地址: "
            r0.append(r9)
            java.lang.String r9 = r21.a()
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            java.lang.String r9 = "ConnectionInterceptor"
            com.cmic.gen.sdk.e.c.b(r9, r0)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = r21.a()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.net.URL r15 = new java.net.URL     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            r15.<init>(r0)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.lang.String r14 = r15.getHost()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            com.cmic.gen.sdk.c.b.g r11 = r21.k()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            boolean r12 = r11 instanceof com.cmic.gen.sdk.c.b.h     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            if (r12 != 0) goto L48
            boolean r12 = r11 instanceof com.cmic.gen.sdk.c.b.e     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            if (r12 == 0) goto L5d
        L48:
            java.lang.String r12 = r4.b(r5)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            boolean r16 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            if (r16 != 0) goto L5d
            java.net.URL r15 = new java.net.URL     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.lang.String r0 = r0.replaceFirst(r14, r12)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            r15.<init>(r0)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            r0 = 1
            goto L5e
        L5d:
            r0 = 0
        L5e:
            android.net.Network r12 = r21.h()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            if (r12 == 0) goto L83
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            r12.<init>()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.lang.String r13 = "开始wifi下取号"
            r12.append(r13)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            r12.append(r15)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            com.cmic.gen.sdk.e.c.b(r9, r12)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            android.net.Network r12 = r21.h()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.net.URLConnection r12 = r12.openConnection(r15)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.net.HttpURLConnection r12 = (java.net.HttpURLConnection) r12     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            goto L9d
        L83:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            r12.<init>()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.lang.String r13 = "使用当前网络环境发送请求"
            r12.append(r13)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            r12.append(r15)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            com.cmic.gen.sdk.e.c.b(r9, r12)     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.net.URLConnection r12 = r15.openConnection()     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
            java.net.HttpURLConnection r12 = (java.net.HttpURLConnection) r12     // Catch: java.lang.Throwable -> L203 java.lang.Exception -> L20c
        L9d:
            java.util.Map r13 = r21.c()     // Catch: java.lang.Throwable -> L1f9 java.lang.Exception -> L1fe
            if (r13 == 0) goto Lcd
            java.util.Set r15 = r13.keySet()     // Catch: java.lang.Throwable -> L1f9 java.lang.Exception -> L1fe
            java.util.Iterator r15 = r15.iterator()     // Catch: java.lang.Throwable -> L1f9 java.lang.Exception -> L1fe
        Lab:
            boolean r17 = r15.hasNext()     // Catch: java.lang.Throwable -> L1f9 java.lang.Exception -> L1fe
            if (r17 == 0) goto Lcd
            java.lang.Object r17 = r15.next()     // Catch: java.lang.Throwable -> L1f9 java.lang.Exception -> L1fe
            r18 = r6
            r6 = r17
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.Object r17 = r13.get(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r19 = r13
            r13 = r17
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r12.addRequestProperty(r6, r13)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r6 = r18
            r13 = r19
            goto Lab
        Lcd:
            r18 = r6
            boolean r6 = r12 instanceof javax.net.ssl.HttpsURLConnection     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            if (r6 == 0) goto L123
            boolean r6 = r11 instanceof com.cmic.gen.sdk.c.b.h     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            if (r6 != 0) goto Ldb
            boolean r6 = r11 instanceof com.cmic.gen.sdk.c.b.e     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            if (r6 == 0) goto L123
        Ldb:
            if (r0 == 0) goto L119
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0.<init>()     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.String r6 = "host = "
            r0.append(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0.append(r14)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            com.cmic.gen.sdk.e.c.b(r9, r0)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.String r0 = "Host"
            r12.setRequestProperty(r0, r14)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.String r0 = "need sni handle"
            com.cmic.gen.sdk.e.c.b(r9, r0)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0 = r12
            javax.net.ssl.HttpsURLConnection r0 = (javax.net.ssl.HttpsURLConnection) r0     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            com.cmic.gen.sdk.c.d r6 = new com.cmic.gen.sdk.c.d     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r11 = r12
            javax.net.ssl.HttpsURLConnection r11 = (javax.net.ssl.HttpsURLConnection) r11     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            android.net.Network r13 = r21.h()     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r6.<init>(r11, r13, r4)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0.setSSLSocketFactory(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0 = r12
            javax.net.ssl.HttpsURLConnection r0 = (javax.net.ssl.HttpsURLConnection) r0     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            com.cmic.gen.sdk.c.a.a$1 r6 = new com.cmic.gen.sdk.c.a.a$1     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r6.<init>(r1, r14)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0.setHostnameVerifier(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            goto L123
        L119:
            r0 = r12
            javax.net.ssl.HttpsURLConnection r0 = (javax.net.ssl.HttpsURLConnection) r0     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            javax.net.ssl.SSLSocketFactory r6 = r1.a(r11, r4)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0.setSSLSocketFactory(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
        L123:
            r0 = 1
            r12.setDoInput(r0)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r0 = 0
            r12.setInstanceFollowRedirects(r0)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r6 = 5000(0x1388, float:7.006E-42)
            r12.setConnectTimeout(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r12.setReadTimeout(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r12.setDefaultUseCaches(r0)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.String r0 = r21.e()     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r12.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r6 = 1
            r12.setDoOutput(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            boolean r6 = r2 instanceof com.cmic.gen.sdk.c.c.b     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            if (r6 == 0) goto L14e
            r12.connect()     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r6 = r2
            com.cmic.gen.sdk.c.c.b r6 = (com.cmic.gen.sdk.c.c.b) r6     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            r6.a(r4)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
        L14e:
            java.lang.String r6 = "POST"
            boolean r0 = r0.endsWith(r6)     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.String r6 = "utf-8"
            if (r0 == 0) goto L16b
            java.io.OutputStream r11 = r12.getOutputStream()     // Catch: java.lang.Throwable -> L1f5 java.lang.Exception -> L1f7
            java.lang.String r0 = r21.d()     // Catch: java.lang.Throwable -> L1f1 java.lang.Exception -> L1f3
            byte[] r0 = r0.getBytes(r6)     // Catch: java.lang.Throwable -> L1f1 java.lang.Exception -> L1f3
            r11.write(r0)     // Catch: java.lang.Throwable -> L1f1 java.lang.Exception -> L1f3
            r11.flush()     // Catch: java.lang.Throwable -> L1f1 java.lang.Exception -> L1f3
            goto L16c
        L16b:
            r11 = 0
        L16c:
            int r15 = r12.getResponseCode()     // Catch: java.lang.Throwable -> L1f1 java.lang.Exception -> L1f3
            java.io.InputStream r13 = r12.getInputStream()     // Catch: java.lang.Throwable -> L1ea java.lang.Exception -> L1ee
            r0 = 2048(0x800, float:2.87E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
        L178:
            int r14 = r13.read(r0)     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            if (r14 <= 0) goto L18c
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            r4 = 0
            r2.<init>(r0, r4, r14, r6)     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            r10.append(r2)     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            r2 = r21
            r4 = r23
            goto L178
        L18c:
            com.cmic.gen.sdk.c.d.b r0 = new com.cmic.gen.sdk.c.d.b     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            java.util.Map r2 = r12.getHeaderFields()     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            java.lang.String r4 = r10.toString()     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            r0.<init>(r15, r2, r4)     // Catch: java.lang.Exception -> L1e8 java.lang.Throwable -> L2ba
            r1.a(r11)
            r1.a(r13)
            if (r12 == 0) goto L1a4
            r12.disconnect()
        L1a4:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            r2.append(r15)
            java.lang.String r2 = r2.toString()
            com.cmic.gen.sdk.e.c.b(r9, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            boolean r4 = android.text.TextUtils.isEmpty(r10)
            if (r4 == 0) goto L1c7
            r6 = r18
            goto L1cb
        L1c7:
            java.lang.String r6 = r10.toString()
        L1cb:
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            com.cmic.gen.sdk.e.c.b(r9, r2)
            r2 = 200(0xc8, float:2.8E-43)
            if (r15 == r2) goto L1e3
            r2 = 301(0x12d, float:4.22E-43)
            if (r15 == r2) goto L1e3
            r2 = 302(0x12e, float:4.23E-43)
            if (r15 == r2) goto L1e3
            goto L2ad
        L1e3:
            r3.a(r0)
            goto L2b9
        L1e8:
            r0 = move-exception
            goto L213
        L1ea:
            r0 = move-exception
            r13 = 0
            goto L2bb
        L1ee:
            r0 = move-exception
            r13 = 0
            goto L213
        L1f1:
            r0 = move-exception
            goto L208
        L1f3:
            r0 = move-exception
            goto L211
        L1f5:
            r0 = move-exception
            goto L1fc
        L1f7:
            r0 = move-exception
            goto L201
        L1f9:
            r0 = move-exception
            r18 = r6
        L1fc:
            r11 = 0
            goto L208
        L1fe:
            r0 = move-exception
            r18 = r6
        L201:
            r11 = 0
            goto L211
        L203:
            r0 = move-exception
            r18 = r6
            r11 = 0
            r12 = 0
        L208:
            r13 = 0
            r15 = -1
            goto L2bb
        L20c:
            r0 = move-exception
            r18 = r6
            r11 = 0
            r12 = 0
        L211:
            r13 = 0
            r15 = -1
        L213:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L2ba
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ba
            r2.<init>()     // Catch: java.lang.Throwable -> L2ba
            java.lang.String r4 = "请求失败: "
            r2.append(r4)     // Catch: java.lang.Throwable -> L2ba
            java.lang.String r4 = r21.a()     // Catch: java.lang.Throwable -> L2ba
            r2.append(r4)     // Catch: java.lang.Throwable -> L2ba
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2ba
            com.cmic.gen.sdk.e.c.a(r9, r2)     // Catch: java.lang.Throwable -> L2ba
            com.cmic.gen.sdk.d.b r2 = r23.a()     // Catch: java.lang.Throwable -> L2ba
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Throwable> r2 = r2.a     // Catch: java.lang.Throwable -> L2ba
            r2.add(r0)     // Catch: java.lang.Throwable -> L2ba
            boolean r2 = r0 instanceof java.io.EOFException     // Catch: java.lang.Throwable -> L2ba
            if (r2 == 0) goto L242
            r2 = 200050(0x30d72, float:2.8033E-40)
            r15 = 200050(0x30d72, float:2.8033E-40)
            goto L248
        L242:
            r2 = 102102(0x18ed6, float:1.43075E-40)
            r15 = 102102(0x18ed6, float:1.43075E-40)
        L248:
            boolean r0 = r0 instanceof java.net.UnknownHostException     // Catch: java.lang.Throwable -> L2ba
            if (r0 == 0) goto L265
            com.cmic.gen.sdk.c.b.g r0 = r21.k()     // Catch: java.lang.Throwable -> L2ba
            boolean r0 = r0 instanceof com.cmic.gen.sdk.c.b.h     // Catch: java.lang.Throwable -> L2ba
            if (r0 != 0) goto L25c
            com.cmic.gen.sdk.c.b.g r0 = r21.k()     // Catch: java.lang.Throwable -> L2ba
            boolean r0 = r0 instanceof com.cmic.gen.sdk.c.b.e     // Catch: java.lang.Throwable -> L2ba
            if (r0 == 0) goto L265
        L25c:
            java.lang.String r0 = r20.a()     // Catch: java.lang.Throwable -> L2ba
            r2 = r23
            r2.a(r5, r0)     // Catch: java.lang.Throwable -> L2ba
        L265:
            r1.a(r11)
            r1.a(r13)
            if (r12 == 0) goto L270
            r12.disconnect()
        L270:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            r0.append(r15)
            java.lang.String r0 = r0.toString()
            com.cmic.gen.sdk.e.c.b(r9, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            boolean r2 = android.text.TextUtils.isEmpty(r10)
            if (r2 == 0) goto L293
            r6 = r18
            goto L297
        L293:
            java.lang.String r6 = r10.toString()
        L297:
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.cmic.gen.sdk.e.c.b(r9, r0)
            r2 = 200(0xc8, float:2.8E-43)
            if (r15 == r2) goto L2b5
            r2 = 301(0x12d, float:4.22E-43)
            if (r15 == r2) goto L2b5
            r2 = 302(0x12e, float:4.23E-43)
            if (r15 == r2) goto L2b5
        L2ad:
            com.cmic.gen.sdk.c.d.a r0 = com.cmic.gen.sdk.c.d.a.a(r15)
            r3.a(r0)
            goto L2b9
        L2b5:
            r2 = 0
            r3.a(r2)
        L2b9:
            return
        L2ba:
            r0 = move-exception
        L2bb:
            r1.a(r11)
            r1.a(r13)
            if (r12 == 0) goto L2c6
            r12.disconnect()
        L2c6:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            r2.append(r15)
            java.lang.String r2 = r2.toString()
            com.cmic.gen.sdk.e.c.b(r9, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            boolean r4 = android.text.TextUtils.isEmpty(r10)
            if (r4 == 0) goto L2e9
            r6 = r18
            goto L2ed
        L2e9:
            java.lang.String r6 = r10.toString()
        L2ed:
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            com.cmic.gen.sdk.e.c.b(r9, r2)
            r2 = 200(0xc8, float:2.8E-43)
            if (r15 == r2) goto L30b
            r2 = 301(0x12d, float:4.22E-43)
            if (r15 == r2) goto L30b
            r2 = 302(0x12e, float:4.23E-43)
            if (r15 == r2) goto L30b
            com.cmic.gen.sdk.c.d.a r2 = com.cmic.gen.sdk.c.d.a.a(r15)
            r3.a(r2)
            goto L30f
        L30b:
            r2 = 0
            r3.a(r2)
        L30f:
            goto L311
        L310:
            throw r0
        L311:
            goto L310
    }
}
