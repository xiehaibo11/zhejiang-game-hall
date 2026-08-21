package com.reyun.tracking.utils;

class q implements java.lang.Runnable {
    final java.lang.String a;
    final java.lang.String b;
    final com.reyun.tracking.utils.n c;
    final byte d;
    final com.reyun.tracking.utils.p e;

    q(com.reyun.tracking.utils.p r1, java.lang.String r2, java.lang.String r3, com.reyun.tracking.utils.n r4, byte r5) {
            r0 = this;
            r0.e = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.d = r5
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "=======> Begin send data to api: "
            r0.append(r1)
            java.lang.String r1 = r7.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Tracking"
            com.reyun.tracking.a.a.d(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "=======> "
            r0.append(r2)
            java.lang.String r2 = r7.b
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.reyun.tracking.a.a.d(r1, r0)
            com.reyun.tracking.utils.p r0 = r7.e
            boolean r0 = com.reyun.tracking.utils.p.a(r0)
            if (r0 != 0) goto L45
            com.reyun.tracking.utils.p r0 = r7.e
            boolean r0 = com.reyun.tracking.utils.p.b(r0)
            if (r0 == 0) goto L45
            com.reyun.tracking.utils.p r0 = r7.e
            com.reyun.tracking.utils.n r1 = r7.c
            com.reyun.tracking.utils.p.a(r0, r1)
        L45:
            com.reyun.tracking.utils.p r0 = r7.e
            boolean r0 = com.reyun.tracking.utils.p.a(r0)
            if (r0 == 0) goto L12e
            r0 = 0
            com.reyun.tracking.utils.p r1 = r7.e     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.net.Socket r1 = com.reyun.tracking.utils.p.c(r1)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.io.OutputStream r1 = r1.getOutputStream()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r2 = 0
            java.lang.String r3 = r7.b     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            if (r3 == 0) goto L74
            boolean r2 = com.reyun.tracking.a.i.d     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            if (r2 == 0) goto L6c
            com.reyun.tracking.utils.a r2 = com.reyun.tracking.utils.a.a()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.lang.String r3 = r7.b     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            byte[] r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            goto L74
        L6c:
            java.lang.String r2 = r7.b     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.lang.String r3 = "UTF-8"
            byte[] r2 = r2.getBytes(r3)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
        L74:
            if (r2 != 0) goto L78
            r3 = 0
            goto L79
        L78:
            int r3 = r2.length     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
        L79:
            int r4 = r3 + 14
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.<init>()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            byte[] r4 = com.reyun.tracking.utils.p.a(r4)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.write(r4)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.write(r0)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r4 = 2
            r5.write(r4)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            byte r6 = r7.d     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.write(r6)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            byte[] r6 = new byte[r4]     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.write(r6)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.write(r0)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r6 = 4
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.write(r6)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            byte[] r3 = com.reyun.tracking.utils.p.a(r3)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r5.write(r3)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            if (r2 == 0) goto Lad
            r5.write(r2)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
        Lad:
            byte[] r2 = r5.toByteArray()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r1.write(r2)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r1.flush()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            com.reyun.tracking.utils.p r1 = r7.e     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.net.Socket r1 = com.reyun.tracking.utils.p.c(r1)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            com.reyun.tracking.utils.p r2 = r7.e     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            short r2 = com.reyun.tracking.utils.p.a(r2, r1)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            com.reyun.tracking.utils.p r3 = r7.e     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            byte[] r1 = com.reyun.tracking.utils.p.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            int r2 = r1.length     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            if (r2 < r4) goto Lef
            int r2 = r1.length     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            int r2 = r2 + (-1)
            r2 = r1[r2]     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r3 = 10
            if (r2 != r3) goto Le7
            int r2 = r1.length     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            int r2 = r2 - r4
            r2 = r1[r2]     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r3 = 13
            if (r2 != r3) goto Le7
            com.reyun.tracking.utils.n r2 = r7.c     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r2.a(r0, r1)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            goto L13a
        Le7:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.lang.String r2 = "数据格式结尾错误"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            throw r1     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
        Lef:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r3.<init>()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.lang.String r4 = "返回数据长度错误 bytes.length:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            int r1 = r1.length     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r3.append(r1)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
            throw r2     // Catch: java.lang.Throwable -> L107 java.lang.Exception -> L109
        L107:
            r0 = move-exception
            goto L12d
        L109:
            r1 = move-exception
            com.reyun.tracking.utils.p r2 = r7.e     // Catch: java.lang.Throwable -> L107
            com.reyun.tracking.utils.p.d(r2)     // Catch: java.lang.Throwable -> L107
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L107
            com.reyun.tracking.utils.p r2 = r7.e     // Catch: java.lang.Throwable -> L107
            com.reyun.tracking.utils.p.e(r2)     // Catch: java.lang.Throwable -> L107
            com.reyun.tracking.utils.n r2 = r7.c     // Catch: java.lang.Throwable -> L107
            java.lang.String r3 = r1.getMessage()     // Catch: java.lang.Throwable -> L107
            r2.a(r1, r3)     // Catch: java.lang.Throwable -> L107
            com.reyun.tracking.utils.p r1 = r7.e     // Catch: java.lang.Throwable -> L107
            int r1 = com.reyun.tracking.utils.p.f(r1)     // Catch: java.lang.Throwable -> L107
            r2 = 5
            if (r1 < r2) goto L13a
            com.reyun.tracking.sdk.Tracking.setUseTcp(r0)     // Catch: java.lang.Throwable -> L107
            goto L13a
        L12d:
            throw r0
        L12e:
            com.reyun.tracking.utils.n r0 = r7.c
            java.lang.Exception r1 = new java.lang.Exception
            java.lang.String r2 = "连接已释放"
            r1.<init>(r2)
            r0.a(r1, r2)
        L13a:
            return
    }
}
