package com.igexin.push.extension.distribution.basic.f;

public class a extends com.igexin.b.a.d.e {
    public com.igexin.push.extension.distribution.basic.f.d a;
    public java.net.HttpURLConnection b;
    public boolean c;
    private boolean d;

    public a(com.igexin.push.extension.distribution.basic.f.d r4) {
            r3 = this;
            r0 = 0
            r3.<init>(r0)
            r3.a = r4
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "AsyncHttpTask|httpPlugin = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r4, r0)
            return
    }

    private com.igexin.push.extension.distribution.basic.f.b a(java.lang.String r3) {
            r2 = this;
            java.net.HttpURLConnection r3 = r2.b(r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1b
            r2.b = r3     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1b
            byte[] r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1b
            if (r3 == 0) goto L1b
            java.net.HttpURLConnection r0 = r2.b     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1b
            com.igexin.push.extension.distribution.basic.f.b r3 = r2.b(r0, r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1b
            r2.i()
            return r3
        L16:
            r3 = move-exception
            r2.i()
            throw r3
        L1b:
            r2.i()
            com.igexin.push.extension.distribution.basic.f.b r3 = new com.igexin.push.extension.distribution.basic.f.b
            r0 = 0
            r1 = 0
            r3.<init>(r2, r0, r1)
            return r3
    }

    private com.igexin.push.extension.distribution.basic.f.b a(java.lang.String r5, byte[] r6) {
            r4 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "AsyncHttpTask|call httpPost start ###"
            com.igexin.b.a.c.b.a(r2, r1)
            r1 = 0
            boolean r2 = r4.b(r6)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            if (r2 == 0) goto L18
            com.igexin.push.extension.distribution.basic.f.b r5 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r5.<init>(r4, r0, r1)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r4.i()
            return r5
        L18:
            java.net.HttpURLConnection r5 = r4.b(r5, r6)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r4.b = r5     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r5.<init>()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.lang.String r2 = "AsyncHttpTask|httpPost() src body len = "
            r5.append(r2)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            int r2 = r6.length     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r5.append(r2)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            com.igexin.b.a.c.b.a(r5, r2)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.net.HttpURLConnection r5 = r4.b     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            byte[] r5 = r4.a(r6, r5)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            if (r5 != 0) goto L4e
            java.lang.String r5 = "AsyncHttpTask|httpPost() getEncHttpData body = null"
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            com.igexin.b.a.c.b.a(r5, r6)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            com.igexin.push.extension.distribution.basic.f.b r5 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r6 = 1
            r5.<init>(r4, r6, r1)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r4.i()
            return r5
        L4e:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r6.<init>()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.lang.String r2 = "AsyncHttpTask|httpPost() getEncHttpData len = "
            r6.append(r2)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            int r2 = r5.length     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r6.append(r2)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            com.igexin.b.a.c.b.a(r6, r2)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.net.HttpURLConnection r6 = r4.b     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r6.connect()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.io.DataOutputStream r6 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.net.HttpURLConnection r2 = r4.b     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            java.io.OutputStream r2 = r2.getOutputStream()     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r6.<init>(r2)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            int r2 = r5.length     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            r6.write(r5, r0, r2)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            r6.flush()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            java.lang.String r5 = "AsyncHttpTask|httpPost() write and flush"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            com.igexin.b.a.c.b.a(r5, r2)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            java.net.HttpURLConnection r5 = r4.b     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            byte[] r5 = r4.a(r5)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            if (r5 == 0) goto Laf
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            r2.<init>()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            java.lang.String r3 = "AsyncHttpTask|httpPost() server resp len ="
            r2.append(r3)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            int r3 = r5.length     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            r2.append(r3)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            java.net.HttpURLConnection r2 = r4.b     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            com.igexin.push.extension.distribution.basic.f.b r5 = r4.b(r2, r5)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            r6.close()     // Catch: java.lang.Exception -> Lab
        Lab:
            r4.i()
            return r5
        Laf:
            java.lang.String r5 = "AsyncHttpTask|httpPost() server resp is null"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            com.igexin.b.a.c.b.a(r5, r2)     // Catch: java.lang.Exception -> Lb7 java.lang.Throwable -> Le5
            goto Ld9
        Lb7:
            r5 = move-exception
            goto Lbd
        Lb9:
            r5 = move-exception
            goto Le7
        Lbb:
            r5 = move-exception
            r6 = r1
        Lbd:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le5
            r2.<init>()     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = "AsyncHttpTask httpPost|error|"
            r2.append(r3)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> Le5
            r2.append(r5)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> Le5
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Le5
            com.igexin.b.a.c.b.a(r5, r2)     // Catch: java.lang.Throwable -> Le5
            if (r6 == 0) goto Ldc
        Ld9:
            r6.close()     // Catch: java.lang.Exception -> Ldc
        Ldc:
            r4.i()
            com.igexin.push.extension.distribution.basic.f.b r5 = new com.igexin.push.extension.distribution.basic.f.b
            r5.<init>(r4, r0, r1)
            return r5
        Le5:
            r5 = move-exception
            r1 = r6
        Le7:
            if (r1 == 0) goto Lec
            r1.close()     // Catch: java.lang.Exception -> Lec
        Lec:
            r4.i()
            throw r5
    }

    private java.lang.reflect.Method a(java.lang.String r2, java.lang.Class<?>... r3) {
            r1 = this;
            java.lang.String r0 = "com.igexin.push.util.EncryptUtils"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> Lb
            java.lang.reflect.Method r2 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> Lb
            return r2
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r1.l
            r2.append(r3)
            java.lang.String r3 = "invokeMethod error"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r3)
            r2 = 0
            return r2
    }

    private void a(java.net.HttpURLConnection r8, byte[] r9) {
            r7 = this;
            if (r8 != 0) goto L3
            return
        L3:
            r0 = 0
            byte[] r1 = new byte[r0]
            if (r9 == 0) goto L9
            goto La
        L9:
            r9 = r1
        La:
            r1 = 1
            java.lang.String r2 = java.lang.String.valueOf(r1)
            java.lang.String r3 = "GT_C_T"
            r8.addRequestProperty(r3, r2)
            java.lang.String r2 = new java.lang.String
            java.lang.Class[] r3 = new java.lang.Class[r0]
            java.lang.String r4 = "getRSAKeyId"
            java.lang.reflect.Method r3 = r7.a(r4, r3)
            java.lang.Object[] r4 = new java.lang.Object[r0]
            r5 = 0
            java.lang.Object r3 = r3.invoke(r5, r4)
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            r2.<init>(r3)
            java.lang.String r3 = "GT_C_K"
            r8.addRequestProperty(r3, r2)
            java.lang.Class[] r2 = new java.lang.Class[r0]
            java.lang.String r3 = "getHttpGTCV"
            java.lang.reflect.Method r2 = r7.a(r3, r2)
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.Object r2 = r2.invoke(r5, r3)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "GT_C_V"
            r8.addRequestProperty(r3, r2)
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r4[r0] = r6
            java.lang.Class<byte[]> r6 = byte[].class
            r4[r1] = r6
            java.lang.String r6 = "getHttpSignature"
            java.lang.reflect.Method r4 = r7.a(r6, r4)
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r0] = r2
            r3[r1] = r9
            java.lang.Object r9 = r4.invoke(r5, r3)
            java.lang.String r9 = (java.lang.String) r9
            java.lang.String r0 = "GT_T"
            r8.addRequestProperty(r0, r2)
            java.lang.String r0 = "GT_C_S"
            r8.addRequestProperty(r0, r9)
            return
    }

    private void a(byte[] r2) {
            r1 = this;
            com.igexin.push.extension.distribution.basic.f.d r0 = r1.a
            r0.a(r2)
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            com.igexin.push.extension.distribution.basic.f.d r0 = r1.a
            r2.a(r0)
            com.igexin.b.a.b.c r2 = com.igexin.b.a.b.c.b()
            r2.c()
            return
    }

    private byte[] a(java.net.HttpURLConnection r5) {
            r4 = this;
            r0 = 0
            java.io.InputStream r1 = r5.getInputStream()     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L40
            r2.<init>()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L40
            int r5 = r5.getResponseCode()     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            r3 = 200(0xc8, float:2.8E-43)
            if (r5 != r3) goto L2f
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
        L16:
            int r0 = r1.read(r5)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            r3 = -1
            if (r0 == r3) goto L22
            r3 = 0
            r2.write(r5, r3, r0)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            goto L16
        L22:
            byte[] r5 = r2.toByteArray()     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            if (r1 == 0) goto L2b
            r1.close()     // Catch: java.lang.Exception -> L2b
        L2b:
            r2.close()     // Catch: java.lang.Exception -> L2e
        L2e:
            return r5
        L2f:
            if (r1 == 0) goto L34
            r1.close()     // Catch: java.lang.Exception -> L34
        L34:
            r2.close()     // Catch: java.lang.Exception -> L37
        L37:
            return r0
        L38:
            r5 = move-exception
            goto L3e
        L3a:
            r5 = move-exception
            goto L42
        L3c:
            r5 = move-exception
            r2 = r0
        L3e:
            r0 = r1
            goto L4b
        L40:
            r5 = move-exception
            r2 = r0
        L42:
            r0 = r1
            goto L49
        L44:
            r5 = move-exception
            r2 = r0
            goto L4b
        L47:
            r5 = move-exception
            r2 = r0
        L49:
            throw r5     // Catch: java.lang.Throwable -> L4a
        L4a:
            r5 = move-exception
        L4b:
            if (r0 == 0) goto L50
            r0.close()     // Catch: java.lang.Exception -> L50
        L50:
            if (r2 == 0) goto L55
            r2.close()     // Catch: java.lang.Exception -> L55
        L55:
            throw r5
    }

    private byte[] a(byte[] r8, java.net.HttpURLConnection r9) {
            r7 = this;
            java.lang.Class<byte[]> r0 = byte[].class
            r1 = 0
            r2 = 0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L60
            r3.<init>()     // Catch: java.lang.Throwable -> L60
            java.lang.String r4 = "AsyncHttpTask|getEncHttpData|isUseAES = |"
            r3.append(r4)     // Catch: java.lang.Throwable -> L60
            boolean r4 = r7.c     // Catch: java.lang.Throwable -> L60
            r3.append(r4)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L60
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L60
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Throwable -> L60
            boolean r3 = r7.c     // Catch: java.lang.Throwable -> L60
            if (r3 == 0) goto L5b
            java.lang.String r3 = "GT_C_S"
            java.lang.String r9 = r9.getRequestProperty(r3)     // Catch: java.lang.Throwable -> L60
            if (r9 == 0) goto L7b
            java.lang.String r3 = "aesEncHttp"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L60
            r5[r2] = r0     // Catch: java.lang.Throwable -> L60
            r6 = 1
            r5[r6] = r0     // Catch: java.lang.Throwable -> L60
            java.lang.reflect.Method r3 = r7.a(r3, r5)     // Catch: java.lang.Throwable -> L60
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L60
            r4[r2] = r8     // Catch: java.lang.Throwable -> L60
            java.lang.String r8 = "md5"
            java.lang.Class[] r5 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L60
            r5[r2] = r0     // Catch: java.lang.Throwable -> L60
            java.lang.reflect.Method r8 = r7.a(r8, r5)     // Catch: java.lang.Throwable -> L60
            java.lang.Object[] r0 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L60
            byte[] r9 = r9.getBytes()     // Catch: java.lang.Throwable -> L60
            r0[r2] = r9     // Catch: java.lang.Throwable -> L60
            java.lang.Object r8 = r8.invoke(r1, r0)     // Catch: java.lang.Throwable -> L60
            r4[r6] = r8     // Catch: java.lang.Throwable -> L60
            java.lang.Object r8 = r3.invoke(r1, r4)     // Catch: java.lang.Throwable -> L60
            byte[] r8 = (byte[]) r8     // Catch: java.lang.Throwable -> L60
            byte[] r8 = (byte[]) r8     // Catch: java.lang.Throwable -> L60
            return r8
        L5b:
            byte[] r8 = com.igexin.push.extension.distribution.basic.g.h.a(r8)     // Catch: java.lang.Throwable -> L60
            return r8
        L60:
            r8 = move-exception
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "AsyncHttpTask|getEncHttpData|error|"
            r9.append(r0)
            java.lang.String r8 = r8.getMessage()
            r9.append(r8)
            java.lang.String r8 = r9.toString()
            java.lang.Object[] r9 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r8, r9)
        L7b:
            return r1
    }

    private com.igexin.push.extension.distribution.basic.f.b b(java.net.HttpURLConnection r11, byte[] r12) {
            r10 = this;
            java.lang.Class<byte[]> r0 = byte[].class
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = "AsyncHttpTask|authAndDecResp start ~~~"
            com.igexin.b.a.c.b.a(r3, r2)
            r2 = 0
            r3 = 1
            boolean r4 = r10.c     // Catch: java.lang.Throwable -> L125
            if (r4 == 0) goto L107
            java.lang.String r4 = "GT_ERR"
            java.lang.String r4 = r11.getHeaderField(r4)     // Catch: java.lang.Throwable -> L125
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L125
            r5.<init>()     // Catch: java.lang.Throwable -> L125
            java.lang.String r6 = r10.l     // Catch: java.lang.Throwable -> L125
            r5.append(r6)     // Catch: java.lang.Throwable -> L125
            java.lang.String r6 = "|GT_ERR = "
            r5.append(r6)     // Catch: java.lang.Throwable -> L125
            r5.append(r4)     // Catch: java.lang.Throwable -> L125
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L125
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L125
            com.igexin.b.a.c.b.a(r5, r6)     // Catch: java.lang.Throwable -> L125
            if (r4 == 0) goto L101
            java.lang.String r5 = "0"
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L125
            if (r4 != 0) goto L3d
            goto L101
        L3d:
            java.lang.String r4 = "GT_T"
            java.lang.String r4 = r11.getHeaderField(r4)     // Catch: java.lang.Throwable -> L125
            if (r4 != 0) goto L63
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L125
            r11.<init>()     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = r10.l     // Catch: java.lang.Throwable -> L125
            r11.append(r12)     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = "|GT_T = null"
            r11.append(r12)     // Catch: java.lang.Throwable -> L125
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L125
            java.lang.Object[] r12 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L125
            com.igexin.b.a.c.b.a(r11, r12)     // Catch: java.lang.Throwable -> L125
            com.igexin.push.extension.distribution.basic.f.b r11 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> L125
            r11.<init>(r10, r3, r2)     // Catch: java.lang.Throwable -> L125
            return r11
        L63:
            java.lang.String r5 = "GT_C_S"
            java.lang.String r11 = r11.getHeaderField(r5)     // Catch: java.lang.Throwable -> L125
            if (r11 != 0) goto L89
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L125
            r11.<init>()     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = r10.l     // Catch: java.lang.Throwable -> L125
            r11.append(r12)     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = "|GT_C_S = null"
            r11.append(r12)     // Catch: java.lang.Throwable -> L125
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L125
            java.lang.Object[] r12 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L125
            com.igexin.b.a.c.b.a(r11, r12)     // Catch: java.lang.Throwable -> L125
            com.igexin.push.extension.distribution.basic.f.b r11 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> L125
            r11.<init>(r10, r3, r2)     // Catch: java.lang.Throwable -> L125
            return r11
        L89:
            java.lang.String r5 = "aesDecHttp"
            r6 = 2
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L125
            r7[r1] = r0     // Catch: java.lang.Throwable -> L125
            r7[r3] = r0     // Catch: java.lang.Throwable -> L125
            java.lang.reflect.Method r5 = r10.a(r5, r7)     // Catch: java.lang.Throwable -> L125
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L125
            r7[r1] = r12     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = "md5"
            java.lang.Class[] r8 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L125
            r8[r1] = r0     // Catch: java.lang.Throwable -> L125
            java.lang.reflect.Method r12 = r10.a(r12, r8)     // Catch: java.lang.Throwable -> L125
            java.lang.Object[] r8 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L125
            byte[] r9 = r4.getBytes()     // Catch: java.lang.Throwable -> L125
            r8[r1] = r9     // Catch: java.lang.Throwable -> L125
            java.lang.Object r12 = r12.invoke(r2, r8)     // Catch: java.lang.Throwable -> L125
            r7[r3] = r12     // Catch: java.lang.Throwable -> L125
            java.lang.Object r12 = r5.invoke(r2, r7)     // Catch: java.lang.Throwable -> L125
            byte[] r12 = (byte[]) r12     // Catch: java.lang.Throwable -> L125
            byte[] r12 = (byte[]) r12     // Catch: java.lang.Throwable -> L125
            java.lang.String r5 = "getHttpSignature"
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L125
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r7[r1] = r8     // Catch: java.lang.Throwable -> L125
            r7[r3] = r0     // Catch: java.lang.Throwable -> L125
            java.lang.reflect.Method r0 = r10.a(r5, r7)     // Catch: java.lang.Throwable -> L125
            java.lang.Object[] r5 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L125
            r5[r1] = r4     // Catch: java.lang.Throwable -> L125
            r5[r3] = r12     // Catch: java.lang.Throwable -> L125
            java.lang.Object r0 = r0.invoke(r2, r5)     // Catch: java.lang.Throwable -> L125
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L125
            if (r0 == 0) goto Le3
            boolean r11 = r0.equals(r11)     // Catch: java.lang.Throwable -> L125
            if (r11 != 0) goto Ldd
            goto Le3
        Ldd:
            com.igexin.push.extension.distribution.basic.f.b r11 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> L125
            r11.<init>(r10, r1, r12)     // Catch: java.lang.Throwable -> L125
            return r11
        Le3:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L125
            r11.<init>()     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = r10.l     // Catch: java.lang.Throwable -> L125
            r11.append(r12)     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = "|signature = null or error"
            r11.append(r12)     // Catch: java.lang.Throwable -> L125
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L125
            java.lang.Object[] r12 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L125
            com.igexin.b.a.c.b.a(r11, r12)     // Catch: java.lang.Throwable -> L125
            com.igexin.push.extension.distribution.basic.f.b r11 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> L125
            r11.<init>(r10, r3, r2)     // Catch: java.lang.Throwable -> L125
            return r11
        L101:
            com.igexin.push.extension.distribution.basic.f.b r11 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> L125
            r11.<init>(r10, r3, r2)     // Catch: java.lang.Throwable -> L125
            return r11
        L107:
            com.igexin.push.extension.distribution.basic.f.d r11 = r10.a     // Catch: java.lang.Throwable -> L125
            boolean r11 = r11.e()     // Catch: java.lang.Throwable -> L125
            if (r11 == 0) goto L113
            byte[] r12 = android.util.Base64.decode(r12, r1)     // Catch: java.lang.Throwable -> L125
        L113:
            com.igexin.push.extension.distribution.basic.f.d r11 = r10.a     // Catch: java.lang.Throwable -> L125
            boolean r11 = r11.d()     // Catch: java.lang.Throwable -> L125
            if (r11 == 0) goto L11f
            byte[] r12 = com.igexin.push.extension.distribution.basic.g.h.b(r12)     // Catch: java.lang.Throwable -> L125
        L11f:
            com.igexin.push.extension.distribution.basic.f.b r11 = new com.igexin.push.extension.distribution.basic.f.b     // Catch: java.lang.Throwable -> L125
            r11.<init>(r10, r1, r12)     // Catch: java.lang.Throwable -> L125
            return r11
        L125:
            r11 = move-exception
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "AsyncHttpTask|authAndDecResp|error|"
            r12.append(r0)
            java.lang.String r11 = r11.getMessage()
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            java.lang.Object[] r12 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r11, r12)
            com.igexin.push.extension.distribution.basic.f.b r11 = new com.igexin.push.extension.distribution.basic.f.b
            r11.<init>(r10, r3, r2)
            return r11
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
            boolean r2 = r1.c
            if (r2 == 0) goto L2e
            java.net.HttpURLConnection r2 = r1.b
            r0 = 0
            r1.a(r2, r0)
        L2e:
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
            boolean r3 = r2.c
            if (r3 == 0) goto L46
            java.net.HttpURLConnection r3 = r2.b
            r2.a(r3, r4)
        L46:
            java.net.HttpURLConnection r3 = r2.b
            return r3
    }

    private boolean b(byte[] r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r3 = r3.length
            int r3 = r3 / 1024
            int r1 = com.igexin.push.extension.distribution.basic.c.e.j
            if (r3 <= r1) goto L2a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = r2.l
            r3.append(r1)
            java.lang.String r1 = "|http body size exceed "
            r3.append(r1)
            int r1 = com.igexin.push.extension.distribution.basic.c.e.j
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
            r3 = 1
            return r3
        L2a:
            return r0
    }

    private void i() {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "AsyncHttpTask call closeHttpURLConnection"
            com.igexin.b.a.c.b.a(r1, r0)
            java.net.HttpURLConnection r0 = r2.b
            if (r0 == 0) goto L12
            r0.disconnect()     // Catch: java.lang.Exception -> L12
            r0 = 0
            r2.b = r0     // Catch: java.lang.Exception -> L12
        L12:
            return
    }

    private boolean j() {
            r1 = this;
            com.igexin.push.extension.distribution.basic.f.d r0 = r1.a
            boolean r0 = r0.e
            if (r0 == 0) goto Le
            boolean r0 = com.igexin.push.extension.distribution.basic.g.b.a()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    @Override
    public final void b() {
            r5 = this;
            super.b()
            r0 = 0
            boolean r1 = r5.d     // Catch: java.lang.Exception -> Lde
            if (r1 == 0) goto Lc
            r5.p()     // Catch: java.lang.Exception -> Lde
            return
        Lc:
            r1 = 1
            r5.d = r1     // Catch: java.lang.Exception -> Lde
            r1 = 10
            android.os.Process.setThreadPriority(r1)     // Catch: java.lang.Exception -> Lde
            com.igexin.push.extension.distribution.basic.f.d r1 = r5.a     // Catch: java.lang.Exception -> Lde
            if (r1 != 0) goto L19
            return
        L19:
            com.igexin.push.extension.distribution.basic.f.d r1 = r5.a     // Catch: java.lang.Exception -> Lde
            java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> Lde
            if (r1 != 0) goto L22
            return
        L22:
            boolean r2 = r5.j()     // Catch: java.lang.Exception -> Lde
            r5.c = r2     // Catch: java.lang.Exception -> Lde
            if (r2 == 0) goto L5a
            java.lang.String r2 = "isLoadSuccess"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> Lde
            java.lang.reflect.Method r2 = r5.a(r2, r3)     // Catch: java.lang.Exception -> Lde
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> Lde
            java.lang.Object r2 = r2.invoke(r3, r4)     // Catch: java.lang.Exception -> Lde
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Exception -> Lde
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> Lde
            if (r2 != 0) goto L5a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lde
            r1.<init>()     // Catch: java.lang.Exception -> Lde
            java.lang.String r2 = r5.l     // Catch: java.lang.Exception -> Lde
            r1.append(r2)     // Catch: java.lang.Exception -> Lde
            java.lang.String r2 = "|so load failed! AsyncHttpTask return!"
            r1.append(r2)     // Catch: java.lang.Exception -> Lde
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lde
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> Lde
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Exception -> Lde
            return
        L5a:
            boolean r2 = r5.c     // Catch: java.lang.Exception -> Lde
            if (r2 == 0) goto L7e
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lde
            byte[] r2 = r2.c()     // Catch: java.lang.Exception -> Lde
            if (r2 == 0) goto L7e
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lde
            byte[] r2 = r2.c()     // Catch: java.lang.Exception -> Lde
            int r2 = r2.length     // Catch: java.lang.Exception -> Lde
            if (r2 <= 0) goto L7e
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lde
            com.igexin.push.extension.distribution.basic.f.d r3 = r5.a     // Catch: java.lang.Exception -> Lde
            byte[] r3 = r3.c()     // Catch: java.lang.Exception -> Lde
            byte[] r3 = com.igexin.b.a.b.f.a(r3)     // Catch: java.lang.Exception -> Lde
            r2.b(r3)     // Catch: java.lang.Exception -> Lde
        L7e:
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lbd
            byte[] r2 = r2.c()     // Catch: java.lang.Exception -> Lbd
            if (r2 != 0) goto L8b
            com.igexin.push.extension.distribution.basic.f.b r1 = r5.a(r1)     // Catch: java.lang.Exception -> Lbd
            goto L95
        L8b:
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lbd
            byte[] r2 = r2.c()     // Catch: java.lang.Exception -> Lbd
            com.igexin.push.extension.distribution.basic.f.b r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> Lbd
        L95:
            boolean r2 = r1.a     // Catch: java.lang.Exception -> Lde
            if (r2 != 0) goto Lb0
            byte[] r2 = r1.b     // Catch: java.lang.Exception -> Lde
            if (r2 == 0) goto La3
            byte[] r1 = r1.b     // Catch: java.lang.Exception -> Lde
            r5.a(r1)     // Catch: java.lang.Exception -> Lde
            return
        La3:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Exception -> Lde
            java.lang.String r2 = "Http response exception"
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lde
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lde
            r2.a(r1)     // Catch: java.lang.Exception -> Lde
            throw r1     // Catch: java.lang.Exception -> Lde
        Lb0:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Exception -> Lde
            java.lang.String r2 = "http server resp decode header error"
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lde
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lde
            r2.a(r1)     // Catch: java.lang.Exception -> Lde
            throw r1     // Catch: java.lang.Exception -> Lde
        Lbd:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lde
            r2.<init>()     // Catch: java.lang.Exception -> Lde
            java.lang.String r3 = "AsyncHttpTask|run() post or get error = "
            r2.append(r3)     // Catch: java.lang.Exception -> Lde
            java.lang.String r3 = r1.getMessage()     // Catch: java.lang.Exception -> Lde
            r2.append(r3)     // Catch: java.lang.Exception -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lde
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> Lde
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Exception -> Lde
            com.igexin.push.extension.distribution.basic.f.d r2 = r5.a     // Catch: java.lang.Exception -> Lde
            r2.a(r1)     // Catch: java.lang.Exception -> Lde
            throw r1     // Catch: java.lang.Exception -> Lde
        Lde:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "AsyncHttpTask|run() error = "
            r2.append(r3)
            java.lang.String r3 = r1.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r2, r0)
            throw r1
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2147483639(0xffffffff80000009, float:-1.3E-44)
            return r0
    }

    @Override
    public void d() {
            r2 = this;
            r0 = 1
            r2.n = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AsyncHttpTask initTask()|isBloker = "
            r0.append(r1)
            boolean r1 = r2.n
            r0.append(r1)
            java.lang.String r1 = "|isCycle = "
            r0.append(r1)
            boolean r1 = r2.o
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return
    }

    @Override
    protected void e() {
            r0 = this;
            return
    }

    @Override
    public void f() {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "AsyncHttpTask|dispose()|closeHttpURLConnection"
            com.igexin.b.a.c.b.a(r1, r0)
            super.f()
            r2.i()
            return
    }
}
