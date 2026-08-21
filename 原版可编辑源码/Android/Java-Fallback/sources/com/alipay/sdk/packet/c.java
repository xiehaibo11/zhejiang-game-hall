package com.alipay.sdk.packet;

public final class c {
    private boolean a;
    private java.lang.String b;

    public c(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r1 = 24
            java.lang.String r1 = com.alipay.sdk.util.n.a(r1)
            r0.b = r1
            return
    }

    private static int a(java.lang.String r0) {
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
    }

    private static java.lang.String a(int r3) {
            java.util.Locale r0 = java.util.Locale.getDefault()
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2 = 0
            r1[r2] = r3
            java.lang.String r3 = "%05d"
            java.lang.String r3 = java.lang.String.format(r0, r3, r1)
            return r3
    }

    private static byte[] a(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = com.alipay.sdk.encrypt.d.a(r0, r1)
            return r0
    }

    private static byte[] a(java.lang.String r0, byte[] r1) {
            byte[] r0 = com.alipay.sdk.encrypt.e.a(r0, r1)
            return r0
    }

    private static byte[] a(byte[]... r7) {
            r0 = 0
            if (r7 == 0) goto L63
            int r1 = r7.length
            if (r1 != 0) goto L8
            goto L63
        L8:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L44
            r1.<init>()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L44
            java.io.DataOutputStream r2 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3d
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3d
            int r3 = r7.length     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            r4 = 0
        L14:
            if (r4 >= r3) goto L2a
            r5 = r7[r4]     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            int r6 = r5.length     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            java.lang.String r6 = a(r6)     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            r2.write(r6)     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            r2.write(r5)     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            int r4 = r4 + 1
            goto L14
        L2a:
            r2.flush()     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            byte[] r0 = r1.toByteArray()     // Catch: java.lang.Exception -> L38 java.lang.Throwable -> L55
            r1.close()     // Catch: java.lang.Exception -> L34
        L34:
            r2.close()     // Catch: java.lang.Exception -> L54
            goto L54
        L38:
            r7 = move-exception
            goto L47
        L3a:
            r7 = move-exception
            r2 = r0
            goto L56
        L3d:
            r7 = move-exception
            r2 = r0
            goto L47
        L40:
            r7 = move-exception
            r1 = r0
            r2 = r1
            goto L56
        L44:
            r7 = move-exception
            r1 = r0
            r2 = r1
        L47:
            com.alipay.sdk.util.c.a(r7)     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L51
            r1.close()     // Catch: java.lang.Exception -> L50
            goto L51
        L50:
        L51:
            if (r2 == 0) goto L54
            goto L34
        L54:
            return r0
        L55:
            r7 = move-exception
        L56:
            if (r1 == 0) goto L5d
            r1.close()     // Catch: java.lang.Exception -> L5c
            goto L5d
        L5c:
        L5d:
            if (r2 == 0) goto L62
            r2.close()     // Catch: java.lang.Exception -> L62
        L62:
            throw r7
        L63:
            return r0
    }

    private static byte[] b(java.lang.String r0, byte[] r1) {
            byte[] r0 = com.alipay.sdk.encrypt.e.b(r0, r1)
            return r0
    }

    public com.alipay.sdk.packet.b a(com.alipay.sdk.packet.d r6) {
            r5 = this;
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            byte[] r2 = r6.b()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            r2 = 5
            byte[] r3 = new byte[r2]     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r1.read(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r4.<init>(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            int r3 = a(r4)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            byte[] r3 = new byte[r3]     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r1.read(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            r4.<init>(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L78
            byte[] r2 = new byte[r2]     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r1.read(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r3.<init>(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            int r2 = a(r3)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            if (r2 <= 0) goto L52
            byte[] r2 = new byte[r2]     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r1.read(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            boolean r3 = r5.a     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            if (r3 == 0) goto L42
            java.lang.String r3 = r5.b     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            byte[] r2 = b(r3, r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
        L42:
            boolean r6 = r6.a()     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            if (r6 == 0) goto L4c
            byte[] r2 = com.alipay.sdk.encrypt.c.b(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
        L4c:
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            r6.<init>(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L78
            goto L53
        L52:
            r6 = r0
        L53:
            r1.close()     // Catch: java.lang.Exception -> L57
            goto L6d
        L57:
            goto L6d
        L59:
            r6 = move-exception
            goto L64
        L5b:
            r6 = move-exception
            r4 = r0
            goto L64
        L5e:
            r6 = move-exception
            r1 = r0
            goto L79
        L61:
            r6 = move-exception
            r1 = r0
            r4 = r1
        L64:
            com.alipay.sdk.util.c.a(r6)     // Catch: java.lang.Throwable -> L78
            if (r1 == 0) goto L6c
            r1.close()     // Catch: java.lang.Exception -> L6c
        L6c:
            r6 = r0
        L6d:
            if (r4 != 0) goto L72
            if (r6 != 0) goto L72
            return r0
        L72:
            com.alipay.sdk.packet.b r0 = new com.alipay.sdk.packet.b
            r0.<init>(r4, r6)
            return r0
        L78:
            r6 = move-exception
        L79:
            if (r1 == 0) goto L7e
            r1.close()     // Catch: java.lang.Exception -> L7e
        L7e:
            throw r6
    }

    public com.alipay.sdk.packet.d a(com.alipay.sdk.packet.b r7, boolean r8) {
            r6 = this;
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            java.lang.String r0 = r7.a()
            byte[] r0 = r0.getBytes()
            java.lang.String r7 = r7.b()
            byte[] r7 = r7.getBytes()
            r1 = 0
            if (r8 == 0) goto L1d
            byte[] r7 = com.alipay.sdk.encrypt.c.a(r7)     // Catch: java.lang.Exception -> L1c
            goto L1d
        L1c:
            r8 = 0
        L1d:
            boolean r2 = r6.a
            r3 = 1
            r4 = 2
            if (r2 == 0) goto L3f
            java.lang.String r2 = r6.b
            java.lang.String r5 = com.alipay.sdk.cons.a.c
            byte[] r2 = a(r2, r5)
            java.lang.String r5 = r6.b
            byte[] r7 = a(r5, r7)
            r5 = 3
            byte[][] r5 = new byte[r5][]
            r5[r1] = r0
            r5[r3] = r2
            r5[r4] = r7
            byte[] r7 = a(r5)
            goto L49
        L3f:
            byte[][] r2 = new byte[r4][]
            r2[r1] = r0
            r2[r3] = r7
            byte[] r7 = a(r2)
        L49:
            com.alipay.sdk.packet.d r0 = new com.alipay.sdk.packet.d
            r0.<init>(r8, r7)
            return r0
    }
}
