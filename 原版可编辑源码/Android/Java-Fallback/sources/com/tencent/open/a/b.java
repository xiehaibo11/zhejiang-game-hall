package com.tencent.open.a;

class b implements com.tencent.open.a.a {
    private int a;
    private int b;
    private final java.lang.String c;

    public b(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 15000(0x3a98, float:2.102E-41)
            r1.a = r0
            r0 = 30000(0x7530, float:4.2039E-41)
            r1.b = r0
            r1.c = r2
            return
    }

    private com.tencent.open.a.g a(java.lang.String r11, int r12) throws java.io.IOException {
            r10 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> La2
            r1.<init>(r11)     // Catch: java.lang.Throwable -> La2
            java.net.URLConnection r11 = r1.openConnection()     // Catch: java.lang.Throwable -> La2
            java.net.HttpURLConnection r11 = (java.net.HttpURLConnection) r11     // Catch: java.lang.Throwable -> La2
            java.lang.String r1 = "GET"
            r11.setRequestMethod(r1)     // Catch: java.lang.Throwable -> L9f
            r10.a(r11)     // Catch: java.lang.Throwable -> L9f
            r1 = 1
            r11.setDoInput(r1)     // Catch: java.lang.Throwable -> L9f
            r1 = 0
            r11.setDoOutput(r1)     // Catch: java.lang.Throwable -> L9f
            r11.setUseCaches(r1)     // Catch: java.lang.Throwable -> L9f
            r11.connect()     // Catch: java.lang.Throwable -> L9f
            int r2 = r11.getResponseCode()     // Catch: java.lang.Throwable -> L9f
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L67
            java.io.InputStream r8 = r11.getInputStream()     // Catch: java.lang.Throwable -> L9f
            java.io.ByteArrayOutputStream r9 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L65
            r9.<init>()     // Catch: java.lang.Throwable -> L65
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L62
        L37:
            int r2 = r8.read(r0)     // Catch: java.lang.Throwable -> L62
            r3 = -1
            if (r2 == r3) goto L42
            r9.write(r0, r1, r2)     // Catch: java.lang.Throwable -> L62
            goto L37
        L42:
            java.lang.String r3 = r9.toString()     // Catch: java.lang.Throwable -> L62
            com.tencent.open.a.c r0 = new com.tencent.open.a.c     // Catch: java.lang.Throwable -> L62
            int r4 = r11.getContentLength()     // Catch: java.lang.Throwable -> L62
            int r6 = r11.getResponseCode()     // Catch: java.lang.Throwable -> L62
            java.lang.String r7 = ""
            r1 = r0
            r2 = r11
            r5 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L62
            a(r9)
            a(r8)
            b(r11)
            return r0
        L62:
            r12 = move-exception
            r0 = r9
            goto La5
        L65:
            r12 = move-exception
            goto La5
        L67:
            java.lang.String r1 = r11.getResponseMessage()     // Catch: java.lang.Throwable -> L9f
            if (r1 != 0) goto L82
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9f
            r1.<init>()     // Catch: java.lang.Throwable -> L9f
            java.lang.String r2 = "请求失败 code:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L9f
            int r2 = r11.getResponseCode()     // Catch: java.lang.Throwable -> L9f
            r1.append(r2)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L9f
        L82:
            r7 = r1
            com.tencent.open.a.c r8 = new com.tencent.open.a.c     // Catch: java.lang.Throwable -> L9f
            java.lang.String r3 = ""
            int r4 = r11.getContentLength()     // Catch: java.lang.Throwable -> L9f
            int r6 = r11.getResponseCode()     // Catch: java.lang.Throwable -> L9f
            r1 = r8
            r2 = r11
            r5 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L9f
            a(r0)
            a(r0)
            b(r11)
            return r8
        L9f:
            r12 = move-exception
            r8 = r0
            goto La5
        La2:
            r12 = move-exception
            r11 = r0
            r8 = r11
        La5:
            a(r0)
            a(r8)
            b(r11)
            throw r12
    }

    private com.tencent.open.a.g a(java.lang.String r10, int r11, java.lang.String r12) throws java.io.IOException {
            r9 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> Lb7
            r1.<init>(r10)     // Catch: java.lang.Throwable -> Lb7
            java.net.URLConnection r10 = r1.openConnection()     // Catch: java.lang.Throwable -> Lb7
            java.net.HttpURLConnection r10 = (java.net.HttpURLConnection) r10     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = "POST"
            r10.setRequestMethod(r1)     // Catch: java.lang.Throwable -> Lb4
            r9.a(r10)     // Catch: java.lang.Throwable -> Lb4
            r1 = 1
            r10.setDoInput(r1)     // Catch: java.lang.Throwable -> Lb4
            r10.setDoOutput(r1)     // Catch: java.lang.Throwable -> Lb4
            r1 = 0
            r10.setUseCaches(r1)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = "Content-Type"
            java.lang.String r3 = "application/x-www-form-urlencoded"
            r10.setRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> Lb4
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> Lb4
            java.io.OutputStream r3 = r10.getOutputStream()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r4 = "UTF-8"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> Lb4
            r2.write(r12)     // Catch: java.lang.Throwable -> Lb4
            r2.flush()     // Catch: java.lang.Throwable -> Lb4
            r10.connect()     // Catch: java.lang.Throwable -> Lb4
            int r4 = r10.getContentLength()     // Catch: java.lang.Throwable -> Lb4
            int r12 = r10.getResponseCode()     // Catch: java.lang.Throwable -> Lb4
            r2 = 200(0xc8, float:2.8E-43)
            if (r12 != r2) goto L7f
            java.io.InputStream r12 = r10.getInputStream()     // Catch: java.lang.Throwable -> Lb4
            java.io.ByteArrayOutputStream r8 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L7d
            r8.<init>()     // Catch: java.lang.Throwable -> L7d
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L7a
        L53:
            int r2 = r12.read(r0)     // Catch: java.lang.Throwable -> L7a
            r3 = -1
            if (r2 == r3) goto L5e
            r8.write(r0, r1, r2)     // Catch: java.lang.Throwable -> L7a
            goto L53
        L5e:
            java.lang.String r3 = r8.toString()     // Catch: java.lang.Throwable -> L7a
            com.tencent.open.a.c r0 = new com.tencent.open.a.c     // Catch: java.lang.Throwable -> L7a
            int r6 = r10.getResponseCode()     // Catch: java.lang.Throwable -> L7a
            java.lang.String r7 = ""
            r1 = r0
            r2 = r10
            r5 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L7a
            a(r8)
            a(r12)
            b(r10)
            return r0
        L7a:
            r11 = move-exception
            r0 = r8
            goto Lba
        L7d:
            r11 = move-exception
            goto Lba
        L7f:
            java.lang.String r12 = r10.getResponseMessage()     // Catch: java.lang.Throwable -> Lb4
            if (r12 != 0) goto L9a
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb4
            r12.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r1 = "Unknown fail: "
            r12.append(r1)     // Catch: java.lang.Throwable -> Lb4
            int r1 = r10.getResponseCode()     // Catch: java.lang.Throwable -> Lb4
            r12.append(r1)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> Lb4
        L9a:
            r7 = r12
            com.tencent.open.a.c r12 = new com.tencent.open.a.c     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r3 = ""
            r4 = 0
            int r6 = r10.getResponseCode()     // Catch: java.lang.Throwable -> Lb4
            r1 = r12
            r2 = r10
            r5 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Lb4
            a(r0)
            a(r0)
            b(r10)
            return r12
        Lb4:
            r11 = move-exception
            r12 = r0
            goto Lba
        Lb7:
            r11 = move-exception
            r10 = r0
            r12 = r10
        Lba:
            a(r0)
            a(r12)
            b(r10)
            throw r11
    }

    private static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    private void a(java.net.HttpURLConnection r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r2.c
            java.lang.String r1 = "User-Agent"
            r3.setRequestProperty(r1, r0)
            int r0 = r2.a
            r3.setConnectTimeout(r0)
            int r0 = r2.b
            r3.setReadTimeout(r0)
            java.lang.String r0 = "Accept-Language"
            java.lang.String r1 = "zh-CN"
            r3.setRequestProperty(r0, r1)
            java.lang.String r0 = "Connection"
            java.lang.String r1 = "Keep-Alive"
            r3.setRequestProperty(r0, r1)
            java.lang.String r0 = "Charset"
            java.lang.String r1 = "UTF-8"
            r3.setRequestProperty(r0, r1)
            return
    }

    private static void b(java.net.HttpURLConnection r0) {
            if (r0 != 0) goto L3
            return
        L3:
            r0.disconnect()     // Catch: java.lang.Exception -> L6
        L6:
            return
    }

    @Override
    public com.tencent.open.a.g a(java.lang.String r4, java.lang.String r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "DefaultHttpServiceImpl"
            java.lang.String r1 = "get. "
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L4e
            java.lang.String r0 = "?"
            int r1 = r5.indexOf(r0)
            r2 = -1
            if (r1 != r2) goto L26
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            goto L3f
        L26:
            int r0 = r4.length()
            int r0 = r0 + (-1)
            if (r1 == r0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "&"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L3f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = r0.toString()
        L4e:
            int r5 = r5.length()
            com.tencent.open.a.g r4 = r3.a(r4, r5)
            return r4
    }

    @Override
    public com.tencent.open.a.g a(java.lang.String r6, java.util.Map<java.lang.String, java.lang.String> r7) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "DefaultHttpServiceImpl"
            java.lang.String r1 = "post. "
            com.tencent.open.log.SLog.i(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
            r1 = 1
        L15:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L4c
            java.lang.Object r2 = r7.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            if (r1 == 0) goto L25
            r1 = 0
            goto L2a
        L25:
            r3 = 38
            r0.append(r3)
        L2a:
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = "UTF-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r4)
            r0.append(r3)
            r3 = 61
            r0.append(r3)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r4)
            r0.append(r2)
            goto L15
        L4c:
            java.lang.String r7 = r0.toString()
            int r0 = r7.length()
            com.tencent.open.a.g r6 = r5.a(r6, r0, r7)
            return r6
    }

    public com.tencent.open.a.g a(java.lang.String r21, java.util.Map<java.lang.String, java.lang.String> r22, java.lang.String r23, byte[] r24) throws java.io.IOException {
            r20 = this;
            r0 = r22
            r1 = r23
            r2 = r24
            java.lang.String r3 = "UTF-8"
            java.lang.String r4 = ""
            java.lang.String r5 = "DefaultHttpServiceImpl"
            java.lang.String r6 = "文件上传"
            com.tencent.open.log.SLog.i(r5, r6)
            java.util.UUID r6 = java.util.UUID.randomUUID()
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "multipart/form-data"
            java.net.URL r9 = new java.net.URL     // Catch: java.lang.Throwable -> L20c
            r10 = r21
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L20c
            java.net.URLConnection r9 = r9.openConnection()     // Catch: java.lang.Throwable -> L20c
            java.net.HttpURLConnection r9 = (java.net.HttpURLConnection) r9     // Catch: java.lang.Throwable -> L20c
            r10 = 1
            r9.setDoInput(r10)     // Catch: java.lang.Throwable -> L206
            r9.setDoOutput(r10)     // Catch: java.lang.Throwable -> L206
            java.lang.String r10 = "POST"
            r9.setRequestMethod(r10)     // Catch: java.lang.Throwable -> L206
            r10 = 0
            r9.setUseCaches(r10)     // Catch: java.lang.Throwable -> L206
            r9.setInstanceFollowRedirects(r10)     // Catch: java.lang.Throwable -> L206
            java.lang.String r11 = "Content-Type"
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L206
            r12.<init>()     // Catch: java.lang.Throwable -> L206
            r12.append(r7)     // Catch: java.lang.Throwable -> L206
            java.lang.String r7 = ";boundary="
            r12.append(r7)     // Catch: java.lang.Throwable -> L206
            r12.append(r6)     // Catch: java.lang.Throwable -> L206
            java.lang.String r7 = r12.toString()     // Catch: java.lang.Throwable -> L206
            r9.setRequestProperty(r11, r7)     // Catch: java.lang.Throwable -> L206
            r7 = r20
            r7.a(r9)     // Catch: java.lang.Throwable -> L204
            r9.connect()     // Catch: java.lang.Throwable -> L204
            java.io.DataOutputStream r15 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L204
            java.io.OutputStream r11 = r9.getOutputStream()     // Catch: java.lang.Throwable -> L204
            r15.<init>(r11)     // Catch: java.lang.Throwable -> L204
            java.lang.String r11 = "\""
            java.lang.String r12 = "Content-Disposition: form-data; name=\""
            java.lang.String r13 = "--"
            java.lang.String r14 = "\r\n"
            if (r0 == 0) goto Lee
            int r16 = r22.size()     // Catch: java.lang.Throwable -> Le9
            if (r16 <= 0) goto Lee
            java.util.Set r16 = r22.keySet()     // Catch: java.lang.Throwable -> Le9
            java.util.Iterator r16 = r16.iterator()     // Catch: java.lang.Throwable -> Le9
        L7d:
            boolean r17 = r16.hasNext()     // Catch: java.lang.Throwable -> Le9
            if (r17 == 0) goto Lee
            java.lang.StringBuffer r8 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Le9
            r8.<init>()     // Catch: java.lang.Throwable -> Le9
            java.lang.Object r18 = r16.next()     // Catch: java.lang.Throwable -> Le9
            r10 = r18
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Throwable -> Le9
            java.lang.String r10 = java.net.URLEncoder.encode(r10, r3)     // Catch: java.lang.Throwable -> Le9
            java.lang.Object r18 = r0.get(r10)     // Catch: java.lang.Throwable -> Le9
            r0 = r18
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Le9
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r3)     // Catch: java.lang.Throwable -> Le9
            r8.append(r13)     // Catch: java.lang.Throwable -> Le9
            r8.append(r6)     // Catch: java.lang.Throwable -> Le9
            r8.append(r14)     // Catch: java.lang.Throwable -> Le9
            r8.append(r12)     // Catch: java.lang.Throwable -> Le9
            r8.append(r10)     // Catch: java.lang.Throwable -> Le9
            r8.append(r11)     // Catch: java.lang.Throwable -> Le9
            r8.append(r14)     // Catch: java.lang.Throwable -> Le9
            r8.append(r14)     // Catch: java.lang.Throwable -> Le9
            r8.append(r0)     // Catch: java.lang.Throwable -> Le9
            r8.append(r14)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r0 = r8.toString()     // Catch: java.lang.Throwable -> Le9
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r8.<init>()     // Catch: java.lang.Throwable -> Le9
            r8.append(r10)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r10 = "="
            r8.append(r10)     // Catch: java.lang.Throwable -> Le9
            r8.append(r0)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r10 = "##"
            r8.append(r10)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Le9
            com.tencent.open.log.SLog.i(r5, r8)     // Catch: java.lang.Throwable -> Le9
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> Le9
            r15.write(r0)     // Catch: java.lang.Throwable -> Le9
            r0 = r22
            r10 = 0
            goto L7d
        Le9:
            r0 = move-exception
            r8 = r15
        Leb:
            r2 = 0
            goto L212
        Lee:
            if (r2 == 0) goto L173
            int r0 = r2.length     // Catch: java.lang.Throwable -> Le9
            if (r0 <= 0) goto L173
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Le9
            r0.<init>()     // Catch: java.lang.Throwable -> Le9
            r0.append(r13)     // Catch: java.lang.Throwable -> Le9
            r0.append(r6)     // Catch: java.lang.Throwable -> Le9
            r0.append(r14)     // Catch: java.lang.Throwable -> Le9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r3.<init>()     // Catch: java.lang.Throwable -> Le9
            r3.append(r12)     // Catch: java.lang.Throwable -> Le9
            r3.append(r1)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r8 = "\"; filename=\""
            r3.append(r8)     // Catch: java.lang.Throwable -> Le9
            r3.append(r1)     // Catch: java.lang.Throwable -> Le9
            r3.append(r11)     // Catch: java.lang.Throwable -> Le9
            r3.append(r14)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Le9
            r0.append(r1)     // Catch: java.lang.Throwable -> Le9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r1.<init>()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r3 = "Content-Type: application/octet-stream; charset=UTF-8"
            r1.append(r3)     // Catch: java.lang.Throwable -> Le9
            r1.append(r14)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Le9
            r0.append(r1)     // Catch: java.lang.Throwable -> Le9
            r0.append(r14)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Le9
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> Le9
            r15.write(r0)     // Catch: java.lang.Throwable -> Le9
            int r0 = r2.length     // Catch: java.lang.Throwable -> Le9
            r1 = 0
            r15.write(r2, r1, r0)     // Catch: java.lang.Throwable -> Le9
            byte[] r0 = r14.getBytes()     // Catch: java.lang.Throwable -> Le9
            r15.write(r0)     // Catch: java.lang.Throwable -> Le9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r0.<init>()     // Catch: java.lang.Throwable -> Le9
            r0.append(r13)     // Catch: java.lang.Throwable -> Le9
            r0.append(r6)     // Catch: java.lang.Throwable -> Le9
            r0.append(r13)     // Catch: java.lang.Throwable -> Le9
            r0.append(r14)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Le9
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> Le9
            r15.write(r0)     // Catch: java.lang.Throwable -> Le9
            int r0 = r0.length     // Catch: java.lang.Throwable -> Le9
            r1 = 0
            int r0 = r0 + r1
            r15.flush()     // Catch: java.lang.Throwable -> Le9
            r14 = r0
            goto L174
        L173:
            r14 = 0
        L174:
            int r0 = r9.getResponseCode()     // Catch: java.lang.Throwable -> L1ff
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ff
            r1.<init>()     // Catch: java.lang.Throwable -> L1ff
            r1.append(r0)     // Catch: java.lang.Throwable -> L1ff
            r1.append(r4)     // Catch: java.lang.Throwable -> L1ff
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1ff
            com.tencent.open.log.SLog.i(r5, r1)     // Catch: java.lang.Throwable -> L1ff
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 != r1) goto L1bc
            java.io.InputStream r1 = r9.getInputStream()     // Catch: java.lang.Throwable -> Le9
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L1b6
            r2.<init>()     // Catch: java.lang.Throwable -> L1b6
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L1b0
        L19b:
            int r3 = r1.read(r0)     // Catch: java.lang.Throwable -> L1b0
            r4 = -1
            if (r3 == r4) goto L1a7
            r4 = 0
            r2.write(r0, r4, r3)     // Catch: java.lang.Throwable -> L1b0
            goto L19b
        L1a7:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L1b0
            r12 = r0
            r8 = r1
            r17 = r2
            goto L1d3
        L1b0:
            r0 = move-exception
            r17 = r1
            r8 = r15
            goto L214
        L1b6:
            r0 = move-exception
            r17 = r1
            r8 = r15
            r2 = 0
            goto L214
        L1bc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ff
            r0.<init>()     // Catch: java.lang.Throwable -> L1ff
            int r1 = r9.getResponseCode()     // Catch: java.lang.Throwable -> L1ff
            r0.append(r1)     // Catch: java.lang.Throwable -> L1ff
            r0.append(r4)     // Catch: java.lang.Throwable -> L1ff
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1ff
            r12 = r0
            r8 = 0
            r17 = 0
        L1d3:
            com.tencent.open.a.c r0 = new com.tencent.open.a.c     // Catch: java.lang.Throwable -> L1f5
            int r13 = r9.getContentLength()     // Catch: java.lang.Throwable -> L1f5
            int r1 = r9.getResponseCode()     // Catch: java.lang.Throwable -> L1f5
            java.lang.String r16 = ""
            r10 = r0
            r11 = r9
            r2 = r15
            r15 = r1
            r10.<init>(r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Throwable -> L1f3
            a(r2)
            a(r8)
            a(r17)
            b(r9)
            return r0
        L1f3:
            r0 = move-exception
            goto L1f7
        L1f5:
            r0 = move-exception
            r2 = r15
        L1f7:
            r19 = r8
            r8 = r2
            r2 = r17
            r17 = r19
            goto L214
        L1ff:
            r0 = move-exception
            r2 = r15
            r8 = r2
            goto Leb
        L204:
            r0 = move-exception
            goto L209
        L206:
            r0 = move-exception
            r7 = r20
        L209:
            r2 = 0
            r8 = 0
            goto L212
        L20c:
            r0 = move-exception
            r7 = r20
            r2 = 0
            r8 = 0
            r9 = 0
        L212:
            r17 = 0
        L214:
            a(r8)
            a(r17)
            a(r2)
            b(r9)
            throw r0
    }

    @Override
    public com.tencent.open.a.g a(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, java.util.Map<java.lang.String, byte[]> r4) throws java.io.IOException {
            r1 = this;
            if (r4 == 0) goto L30
            int r0 = r4.size()
            if (r0 > 0) goto L9
            goto L30
        L9:
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L2e
            java.lang.Object r4 = r4.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r0 = r4.getKey()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r4 = r4.getValue()
            byte[] r4 = (byte[]) r4
            com.tencent.open.a.g r2 = r1.a(r2, r3, r0, r4)
            return r2
        L2e:
            r2 = 0
            return r2
        L30:
            com.tencent.open.a.g r2 = r1.a(r2, r3)
            return r2
    }

    @Override
    public void a(long r4, long r6) {
            r3 = this;
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L11
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 > 0) goto Lb
            goto L11
        Lb:
            int r5 = (int) r4
            r3.a = r5
            int r4 = (int) r6
            r3.b = r4
        L11:
            return
    }
}
