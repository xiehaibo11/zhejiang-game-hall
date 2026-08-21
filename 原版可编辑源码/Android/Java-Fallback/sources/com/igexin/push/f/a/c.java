package com.igexin.push.f.a;

public class c extends com.igexin.b.a.d.e {
    public com.igexin.push.f.a.b a;
    private java.net.HttpURLConnection b;

    public c(com.igexin.push.f.a.b r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            r1.a = r2
            return
    }

    private com.igexin.push.f.a.d a(java.lang.String r3) {
            r2 = this;
            java.net.HttpURLConnection r3 = r2.b(r3)     // Catch: java.lang.Throwable -> L16
            r2.b = r3     // Catch: java.lang.Throwable -> L16
            byte[] r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L16
            if (r3 == 0) goto L16
            java.net.HttpURLConnection r0 = r2.b     // Catch: java.lang.Throwable -> L16
            com.igexin.push.f.a.d r3 = r2.b(r0, r3)     // Catch: java.lang.Throwable -> L16
            r2.i()
            return r3
        L16:
            r2.i()
            com.igexin.push.f.a.d r3 = new com.igexin.push.f.a.d
            r0 = 0
            r1 = 0
            r3.<init>(r2, r0, r1)
            return r3
    }

    private com.igexin.push.f.a.d a(java.lang.String r4, byte[] r5) {
            r3 = this;
            r0 = 0
            r1 = 0
            java.net.HttpURLConnection r4 = r3.b(r4, r5)     // Catch: java.lang.Throwable -> L44
            r3.b = r4     // Catch: java.lang.Throwable -> L44
            byte[] r4 = r3.a(r5, r4)     // Catch: java.lang.Throwable -> L44
            if (r4 != 0) goto L18
            com.igexin.push.f.a.d r4 = new com.igexin.push.f.a.d     // Catch: java.lang.Throwable -> L44
            r5 = 1
            r4.<init>(r3, r5, r1)     // Catch: java.lang.Throwable -> L44
            r3.i()
            return r4
        L18:
            java.net.HttpURLConnection r5 = r3.b     // Catch: java.lang.Throwable -> L44
            r5.connect()     // Catch: java.lang.Throwable -> L44
            java.io.DataOutputStream r5 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L44
            java.net.HttpURLConnection r2 = r3.b     // Catch: java.lang.Throwable -> L44
            java.io.OutputStream r2 = r2.getOutputStream()     // Catch: java.lang.Throwable -> L44
            r5.<init>(r2)     // Catch: java.lang.Throwable -> L44
            int r2 = r4.length     // Catch: java.lang.Throwable -> L45
            r5.write(r4, r0, r2)     // Catch: java.lang.Throwable -> L45
            r5.flush()     // Catch: java.lang.Throwable -> L45
            java.net.HttpURLConnection r4 = r3.b     // Catch: java.lang.Throwable -> L45
            byte[] r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L45
            if (r4 == 0) goto L47
            java.net.HttpURLConnection r2 = r3.b     // Catch: java.lang.Throwable -> L45
            com.igexin.push.f.a.d r4 = r3.b(r2, r4)     // Catch: java.lang.Throwable -> L45
            r5.close()     // Catch: java.lang.Exception -> L40
        L40:
            r3.i()
            return r4
        L44:
            r5 = r1
        L45:
            if (r5 == 0) goto L4a
        L47:
            r5.close()     // Catch: java.lang.Exception -> L4a
        L4a:
            r3.i()
            com.igexin.push.f.a.d r4 = new com.igexin.push.f.a.d
            r4.<init>(r3, r0, r1)
            return r4
    }

    private void a(java.net.HttpURLConnection r3, byte[] r4) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            r0 = 0
            byte[] r0 = new byte[r0]
            if (r4 == 0) goto L9
            goto La
        L9:
            r4 = r0
        La:
            r0 = 1
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "GT_C_T"
            r3.addRequestProperty(r1, r0)
            java.lang.String r0 = new java.lang.String
            byte[] r1 = com.igexin.push.util.EncryptUtils.getRSAKeyId()
            r0.<init>(r1)
            java.lang.String r1 = "GT_C_K"
            r3.addRequestProperty(r1, r0)
            java.lang.String r0 = com.igexin.push.util.EncryptUtils.getHttpGTCV()
            java.lang.String r1 = "GT_C_V"
            r3.addRequestProperty(r1, r0)
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r4 = com.igexin.push.util.EncryptUtils.getHttpSignature(r0, r4)
            java.lang.String r1 = "GT_T"
            r3.addRequestProperty(r1, r0)
            java.lang.String r0 = "GT_C_S"
            r3.addRequestProperty(r0, r4)
            return
    }

    private void a(byte[] r2) {
            r1 = this;
            com.igexin.push.f.a.b r0 = r1.a
            r0.a(r2)
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            com.igexin.push.f.a.b r0 = r1.a
            r2.a(r0)
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            r2.c()
            return
    }

    private byte[] a(java.net.HttpURLConnection r5) {
            r4 = this;
            r0 = 0
            java.io.InputStream r1 = r5.getInputStream()     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            r2.<init>()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            int r5 = r5.getResponseCode()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            r3 = 200(0xc8, float:2.8E-43)
            if (r5 != r3) goto L2c
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
        L16:
            int r0 = r1.read(r5)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            r3 = -1
            if (r0 == r3) goto L22
            r3 = 0
            r2.write(r5, r3, r0)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            goto L16
        L22:
            byte[] r5 = r2.toByteArray()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L35
            if (r1 == 0) goto L2b
            r1.close()     // Catch: java.lang.Exception -> L2b
        L2b:
            return r5
        L2c:
            if (r1 == 0) goto L31
            r1.close()     // Catch: java.lang.Exception -> L31
        L31:
            return r0
        L32:
            r5 = move-exception
            r0 = r1
            goto L3c
        L35:
            r5 = move-exception
            r0 = r1
            goto L3b
        L38:
            r5 = move-exception
            goto L3c
        L3a:
            r5 = move-exception
        L3b:
            throw r5     // Catch: java.lang.Throwable -> L38
        L3c:
            if (r0 == 0) goto L41
            r0.close()     // Catch: java.lang.Exception -> L41
        L41:
            throw r5
    }

    private byte[] a(byte[] r3, java.net.HttpURLConnection r4) {
            r2 = this;
            java.lang.String r0 = "GT_C_S"
            java.util.Map r1 = r4.getRequestProperties()     // Catch: java.lang.Throwable -> L1f
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L3b
            java.lang.String r4 = r4.getRequestProperty(r0)     // Catch: java.lang.Throwable -> L1f
            if (r4 == 0) goto L3b
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L1f
            byte[] r4 = com.igexin.push.util.EncryptUtils.md5(r4)     // Catch: java.lang.Throwable -> L1f
            byte[] r3 = com.igexin.push.util.EncryptUtils.aesEncHttp(r3, r4)     // Catch: java.lang.Throwable -> L1f
            return r3
        L1f:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "_HttpTask|"
            r4.append(r0)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r4 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r3, r4)
        L3b:
            r3 = 0
            return r3
    }

    private com.igexin.push.f.a.d b(java.net.HttpURLConnection r7, byte[] r8) {
            r6 = this;
            r0 = 0
            r1 = 1
            r2 = 0
            java.lang.String r3 = "GT_ERR"
            java.lang.String r3 = r7.getHeaderField(r3)     // Catch: java.lang.Throwable -> L86
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L86
            r4.<init>()     // Catch: java.lang.Throwable -> L86
            java.lang.String r5 = "_HttpTask|GT_ERR = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L86
            r4.append(r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L86
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L86
            com.igexin.b.a.c.b.a(r4, r5)     // Catch: java.lang.Throwable -> L86
            if (r3 == 0) goto L80
            java.lang.String r4 = "0"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L86
            if (r3 != 0) goto L2a
            goto L80
        L2a:
            java.lang.String r3 = "GT_T"
            java.lang.String r3 = r7.getHeaderField(r3)     // Catch: java.lang.Throwable -> L86
            if (r3 != 0) goto L3f
            java.lang.String r7 = "_HttpTask|GT_T = null"
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L86
            com.igexin.b.a.c.b.a(r7, r8)     // Catch: java.lang.Throwable -> L86
            com.igexin.push.f.a.d r7 = new com.igexin.push.f.a.d     // Catch: java.lang.Throwable -> L86
            r7.<init>(r6, r1, r0)     // Catch: java.lang.Throwable -> L86
            return r7
        L3f:
            java.lang.String r4 = "GT_C_S"
            java.lang.String r7 = r7.getHeaderField(r4)     // Catch: java.lang.Throwable -> L86
            if (r7 != 0) goto L54
            java.lang.String r7 = "_HttpTask|GT_C_S = null"
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L86
            com.igexin.b.a.c.b.a(r7, r8)     // Catch: java.lang.Throwable -> L86
            com.igexin.push.f.a.d r7 = new com.igexin.push.f.a.d     // Catch: java.lang.Throwable -> L86
            r7.<init>(r6, r1, r0)     // Catch: java.lang.Throwable -> L86
            return r7
        L54:
            byte[] r4 = r3.getBytes()     // Catch: java.lang.Throwable -> L86
            byte[] r4 = com.igexin.push.util.EncryptUtils.md5(r4)     // Catch: java.lang.Throwable -> L86
            byte[] r8 = com.igexin.push.util.EncryptUtils.aesDecHttp(r8, r4)     // Catch: java.lang.Throwable -> L86
            java.lang.String r3 = com.igexin.push.util.EncryptUtils.getHttpSignature(r3, r8)     // Catch: java.lang.Throwable -> L86
            if (r3 == 0) goto L73
            boolean r7 = r3.equals(r7)     // Catch: java.lang.Throwable -> L86
            if (r7 != 0) goto L6d
            goto L73
        L6d:
            com.igexin.push.f.a.d r7 = new com.igexin.push.f.a.d     // Catch: java.lang.Throwable -> L86
            r7.<init>(r6, r2, r8)     // Catch: java.lang.Throwable -> L86
            return r7
        L73:
            java.lang.String r7 = "_HttpTask|signature = null or error"
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L86
            com.igexin.b.a.c.b.a(r7, r8)     // Catch: java.lang.Throwable -> L86
            com.igexin.push.f.a.d r7 = new com.igexin.push.f.a.d     // Catch: java.lang.Throwable -> L86
            r7.<init>(r6, r1, r0)     // Catch: java.lang.Throwable -> L86
            return r7
        L80:
            com.igexin.push.f.a.d r7 = new com.igexin.push.f.a.d     // Catch: java.lang.Throwable -> L86
            r7.<init>(r6, r1, r0)     // Catch: java.lang.Throwable -> L86
            return r7
        L86:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = "_HttpTask|"
            r8.append(r3)
            java.lang.String r7 = r7.toString()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            java.lang.Object[] r8 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r7, r8)
            com.igexin.push.f.a.d r7 = new com.igexin.push.f.a.d
            r7.<init>(r6, r1, r0)
            return r7
    }

    private java.net.HttpURLConnection b(java.lang.String r2) {
            r1 = this;
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            java.net.URLConnection r2 = r0.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            r1.b = r2
            r0 = 20000(0x4e20, float:2.8026E-41)
            r2.setConnectTimeout(r0)
            java.net.HttpURLConnection r2 = r1.b
            r2.setReadTimeout(r0)
            java.net.HttpURLConnection r2 = r1.b
            java.lang.String r0 = "GET"
            r2.setRequestMethod(r0)
            java.net.HttpURLConnection r2 = r1.b
            r0 = 1
            r2.setDoInput(r0)
            java.net.HttpURLConnection r2 = r1.b
            r0 = 0
            r1.a(r2, r0)
            java.net.HttpURLConnection r2 = r1.b
            return r2
    }

    private java.net.HttpURLConnection b(java.lang.String r3, byte[] r4) {
            r2 = this;
            java.net.URL r0 = new java.net.URL
            r0.<init>(r3)
            java.net.URLConnection r3 = r0.openConnection()
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3
            r2.b = r3
            r0 = 1
            r3.setDoInput(r0)
            java.net.HttpURLConnection r3 = r2.b
            r3.setDoOutput(r0)
            java.net.HttpURLConnection r3 = r2.b
            java.lang.String r1 = "POST"
            r3.setRequestMethod(r1)
            java.net.HttpURLConnection r3 = r2.b
            r1 = 0
            r3.setUseCaches(r1)
            java.net.HttpURLConnection r3 = r2.b
            r3.setInstanceFollowRedirects(r0)
            java.net.HttpURLConnection r3 = r2.b
            java.lang.String r0 = "Content-Type"
            java.lang.String r1 = "application/octet-stream"
            r3.setRequestProperty(r0, r1)
            java.net.HttpURLConnection r3 = r2.b
            r0 = 20000(0x4e20, float:2.8026E-41)
            r3.setConnectTimeout(r0)
            java.net.HttpURLConnection r3 = r2.b
            r3.setReadTimeout(r0)
            java.net.HttpURLConnection r3 = r2.b
            r2.a(r3, r4)
            java.net.HttpURLConnection r3 = r2.b
            return r3
    }

    private void i() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.b
            if (r0 == 0) goto La
            r0.disconnect()     // Catch: java.lang.Exception -> La
            r0 = 0
            r1.b = r0     // Catch: java.lang.Exception -> La
        La:
            return
    }

    @Override
    public final void b() {
            r4 = this;
            super.b()
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            com.igexin.push.f.a.b r0 = r4.a
            r1 = 0
            if (r0 == 0) goto L9b
            java.lang.String r0 = r0.b
            if (r0 == 0) goto L9b
            com.igexin.push.f.a.b r0 = r4.a
            byte[] r0 = r0.c
            if (r0 == 0) goto L24
            com.igexin.push.f.a.b r0 = r4.a
            byte[] r0 = r0.c
            int r0 = r0.length
            int r2 = com.igexin.push.config.j.o
            int r2 = r2 * 1024
            if (r0 <= r2) goto L24
            goto L9b
        L24:
            com.igexin.push.f.a.b r0 = r4.a
            byte[] r0 = r0.c
            if (r0 == 0) goto L3b
            com.igexin.push.f.a.b r0 = r4.a
            byte[] r0 = r0.c
            int r0 = r0.length
            if (r0 <= 0) goto L3b
            com.igexin.push.f.a.b r0 = r4.a
            byte[] r2 = r0.c
            byte[] r2 = com.igexin.b.a.b.f.c(r2)
            r0.c = r2
        L3b:
            r0 = 3
            if (r1 >= r0) goto L9a
            com.igexin.push.f.a.b r0 = r4.a
            byte[] r0 = r0.c
            if (r0 != 0) goto L4d
            com.igexin.push.f.a.b r0 = r4.a
            java.lang.String r0 = r0.b
            com.igexin.push.f.a.d r0 = r4.a(r0)
            goto L59
        L4d:
            com.igexin.push.f.a.b r0 = r4.a
            java.lang.String r0 = r0.b
            com.igexin.push.f.a.b r2 = r4.a
            byte[] r2 = r2.c
            com.igexin.push.f.a.d r0 = r4.a(r0, r2)
        L59:
            boolean r2 = r0.a
            if (r2 != 0) goto L92
            byte[] r2 = r0.b
            if (r2 == 0) goto L67
            byte[] r0 = r0.b
            r4.a(r0)
            goto L9a
        L67:
            r0 = 2
            if (r1 == r0) goto L6d
            int r1 = r1 + 1
            goto L3b
        L6d:
            com.igexin.push.f.a.b r0 = r4.a
            java.lang.Exception r2 = new java.lang.Exception
            java.lang.String r3 = "try up to limit"
            r2.<init>(r3)
            r0.a(r2)
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "http request exception, try times = "
            r2.append(r3)
            int r1 = r1 + 1
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        L92:
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "http server resp decode header error"
            r0.<init>(r1)
            throw r0
        L9a:
            return
        L9b:
            r4.p()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "_HttpTask|run return ###"
            com.igexin.b.a.c.b.a(r1, r0)
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2147483638(0xffffffff8000000a, float:-1.4E-44)
            return r0
    }

    @Override
    public void d() {
            r1 = this;
            r0 = 1
            r1.n = r0
            return
    }

    @Override
    protected void e() {
            r0 = this;
            return
    }

    @Override
    public void f() {
            r0 = this;
            super.f()
            r0.i()
            return
    }
}
