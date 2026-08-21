package com.igexin.push.f.a;

public class a extends com.igexin.b.a.d.e {
    public static final java.lang.String a = null;
    public com.igexin.push.f.a.b b;
    private java.net.HttpURLConnection c;

    static {
            java.lang.Class<com.igexin.push.f.a.a> r0 = com.igexin.push.f.a.a.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.f.a.a.a = r0
            return
    }

    public a(com.igexin.push.f.a.b r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            r1.b = r2
            return
    }

    private byte[] a(java.lang.String r7) {
            r6 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.net.URLConnection r7 = r1.openConnection()     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.net.HttpURLConnection r7 = (java.net.HttpURLConnection) r7     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            r6.c = r7     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            r1 = 20000(0x4e20, float:2.8026E-41)
            r7.setConnectTimeout(r1)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.net.HttpURLConnection r7 = r6.c     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            r7.setReadTimeout(r1)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.net.HttpURLConnection r7 = r6.c     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.lang.String r1 = "GET"
            r7.setRequestMethod(r1)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.net.HttpURLConnection r7 = r6.c     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            r1 = 1
            r7.setDoInput(r1)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.net.HttpURLConnection r7 = r6.c     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.io.InputStream r7 = r7.getInputStream()     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L7b
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L67
            r1.<init>()     // Catch: java.lang.Throwable -> L62 java.lang.Exception -> L67
            java.net.HttpURLConnection r2 = r6.c     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L7d
            int r2 = r2.getResponseCode()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L7d
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L5a
            r2 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L7d
        L3e:
            int r3 = r7.read(r2)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L7d
            r4 = -1
            if (r3 == r4) goto L4a
            r4 = 0
            r1.write(r2, r4, r3)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L7d
            goto L3e
        L4a:
            byte[] r0 = r1.toByteArray()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L7d
            if (r7 == 0) goto L53
            r7.close()     // Catch: java.lang.Exception -> L53
        L53:
            r1.close()     // Catch: java.lang.Exception -> L56
        L56:
            r6.i()
            return r0
        L5a:
            if (r7 == 0) goto L84
            r7.close()     // Catch: java.lang.Exception -> L84
            goto L84
        L60:
            r0 = move-exception
            goto L6d
        L62:
            r1 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
            goto L6d
        L67:
            r1 = r0
            goto L7d
        L69:
            r7 = move-exception
            r1 = r0
            r0 = r7
            r7 = r1
        L6d:
            if (r7 == 0) goto L72
            r7.close()     // Catch: java.lang.Exception -> L72
        L72:
            if (r1 == 0) goto L77
            r1.close()     // Catch: java.lang.Exception -> L77
        L77:
            r6.i()
            throw r0
        L7b:
            r7 = r0
            r1 = r7
        L7d:
            if (r7 == 0) goto L82
            r7.close()     // Catch: java.lang.Exception -> L82
        L82:
            if (r1 == 0) goto L87
        L84:
            r1.close()     // Catch: java.lang.Exception -> L87
        L87:
            r6.i()
            return r0
    }

    private byte[] a(java.lang.String r8, byte[] r9) {
            r7 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r1.<init>(r8)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.URLConnection r8 = r1.openConnection()     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = (java.net.HttpURLConnection) r8     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r7.c = r8     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r1 = 1
            r8.setDoInput(r1)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r8.setDoOutput(r1)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.lang.String r2 = "POST"
            r8.setRequestMethod(r2)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r2 = 0
            r8.setUseCaches(r2)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r8.setInstanceFollowRedirects(r1)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.lang.String r1 = "Content-Type"
            java.lang.String r3 = "application/octet-stream"
            r8.setRequestProperty(r1, r3)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r1 = 20000(0x4e20, float:2.8026E-41)
            r8.setConnectTimeout(r1)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r8.setReadTimeout(r1)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r8 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r8.connect()     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.io.DataOutputStream r8 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.net.HttpURLConnection r1 = r7.c     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            java.io.OutputStream r1 = r1.getOutputStream()     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            r8.<init>(r1)     // Catch: java.lang.Throwable -> La0 java.lang.Exception -> Lb8
            int r1 = r9.length     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9e
            r8.write(r9, r2, r1)     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9e
            r8.flush()     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9e
            java.net.HttpURLConnection r9 = r7.c     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9e
            int r9 = r9.getResponseCode()     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9e
            r1 = 200(0xc8, float:2.8E-43)
            if (r9 != r1) goto L95
            java.net.HttpURLConnection r9 = r7.c     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9e
            java.io.InputStream r9 = r9.getInputStream()     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9e
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r1.<init>()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L93
            r3 = 1024(0x400, float:1.435E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L8c java.lang.Exception -> Lbb
        L6e:
            int r4 = r9.read(r3)     // Catch: java.lang.Throwable -> L8c java.lang.Exception -> Lbb
            r5 = -1
            if (r4 == r5) goto L79
            r1.write(r3, r2, r4)     // Catch: java.lang.Throwable -> L8c java.lang.Exception -> Lbb
            goto L6e
        L79:
            byte[] r0 = r1.toByteArray()     // Catch: java.lang.Throwable -> L8c java.lang.Exception -> Lbb
            r8.close()     // Catch: java.lang.Exception -> L80
        L80:
            if (r9 == 0) goto L85
            r9.close()     // Catch: java.lang.Exception -> L85
        L85:
            r1.close()     // Catch: java.lang.Exception -> L88
        L88:
            r7.i()
            return r0
        L8c:
            r0 = move-exception
            goto La5
        L8e:
            r1 = move-exception
            r6 = r1
            r1 = r0
            r0 = r6
            goto La5
        L93:
            r1 = r0
            goto Lbb
        L95:
            r8.close()     // Catch: java.lang.Exception -> Lca
            goto Lca
        L99:
            r9 = move-exception
            r1 = r0
            r0 = r9
            r9 = r1
            goto La5
        L9e:
            r9 = r0
            goto Lba
        La0:
            r8 = move-exception
            r9 = r0
            r1 = r9
            r0 = r8
            r8 = r1
        La5:
            if (r8 == 0) goto Laa
            r8.close()     // Catch: java.lang.Exception -> Laa
        Laa:
            if (r9 == 0) goto Laf
            r9.close()     // Catch: java.lang.Exception -> Laf
        Laf:
            if (r1 == 0) goto Lb4
            r1.close()     // Catch: java.lang.Exception -> Lb4
        Lb4:
            r7.i()
            throw r0
        Lb8:
            r8 = r0
            r9 = r8
        Lba:
            r1 = r9
        Lbb:
            if (r8 == 0) goto Lc0
            r8.close()     // Catch: java.lang.Exception -> Lc0
        Lc0:
            if (r9 == 0) goto Lc5
            r9.close()     // Catch: java.lang.Exception -> Lc5
        Lc5:
            if (r1 == 0) goto Lca
            r1.close()     // Catch: java.lang.Exception -> Lca
        Lca:
            r7.i()
            return r0
    }

    private void i() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.c
            if (r0 == 0) goto La
            r0.disconnect()     // Catch: java.lang.Exception -> La
            r0 = 0
            r1.c = r0     // Catch: java.lang.Exception -> La
        La:
            return
    }

    @Override
    public final void b() {
            r2 = this;
            super.b()
            r0 = 10
            android.os.Process.setThreadPriority(r0)
            com.igexin.push.f.a.b r0 = r2.b
            if (r0 == 0) goto L70
            java.lang.String r0 = r0.b
            if (r0 == 0) goto L70
            com.igexin.push.f.a.b r0 = r2.b
            byte[] r0 = r0.c
            if (r0 == 0) goto L22
            com.igexin.push.f.a.b r0 = r2.b
            byte[] r0 = r0.c
            int r0 = r0.length
            int r1 = com.igexin.push.config.j.o
            int r1 = r1 * 1024
            if (r0 <= r1) goto L22
            goto L70
        L22:
            com.igexin.push.f.a.b r0 = r2.b     // Catch: java.lang.Exception -> L69
            byte[] r0 = r0.c     // Catch: java.lang.Exception -> L69
            if (r0 != 0) goto L31
            com.igexin.push.f.a.b r0 = r2.b     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = r0.b     // Catch: java.lang.Exception -> L69
            byte[] r0 = r2.a(r0)     // Catch: java.lang.Exception -> L69
            goto L3d
        L31:
            com.igexin.push.f.a.b r0 = r2.b     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = r0.b     // Catch: java.lang.Exception -> L69
            com.igexin.push.f.a.b r1 = r2.b     // Catch: java.lang.Exception -> L69
            byte[] r1 = r1.c     // Catch: java.lang.Exception -> L69
            byte[] r0 = r2.a(r0, r1)     // Catch: java.lang.Exception -> L69
        L3d:
            if (r0 == 0) goto L5c
            com.igexin.push.f.a.b r1 = r2.b     // Catch: java.lang.Exception -> L55
            r1.a(r0)     // Catch: java.lang.Exception -> L55
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Exception -> L55
            com.igexin.push.f.a.b r1 = r2.b     // Catch: java.lang.Exception -> L55
            r0.a(r1)     // Catch: java.lang.Exception -> L55
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Exception -> L55
            r0.c()     // Catch: java.lang.Exception -> L55
            return
        L55:
            r0 = move-exception
            com.igexin.push.f.a.b r1 = r2.b
            r1.a(r0)
            throw r0
        L5c:
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "Http response ＝＝ null"
            r0.<init>(r1)
            com.igexin.push.f.a.b r1 = r2.b
            r1.a(r0)
            throw r0
        L69:
            r0 = move-exception
            com.igexin.push.f.a.b r1 = r2.b
            r1.a(r0)
            throw r0
        L70:
            r2.p()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.f.a.a.a
            r0.append(r1)
            java.lang.String r1 = "|run return ###"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2147483639(0xffffffff80000009, float:-1.3E-44)
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
