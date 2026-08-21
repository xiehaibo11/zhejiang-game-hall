package com.alipay.sdk.m.p;

public final class c {
    public boolean a;
    public java.lang.String b;

    public c(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r1 = 24
            java.lang.String r1 = com.alipay.sdk.m.u.n.a(r1)
            r0.b = r1
            return
    }

    public static int a(java.lang.String r0) {
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
    }

    public static java.lang.String a(int r3) {
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

    public static byte[] a(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = com.alipay.sdk.m.n.d.a(r0, r1)
            return r0
    }

    public static byte[] a(java.lang.String r0, byte[] r1, java.lang.String r2) {
            byte[] r0 = com.alipay.sdk.m.n.e.a(r0, r1, r2)
            return r0
    }

    public static byte[] a(byte[]... r7) {
            r0 = 0
            if (r7 == 0) goto L64
            int r1 = r7.length
            if (r1 != 0) goto L8
            goto L64
        L8:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            r1.<init>()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            java.io.DataOutputStream r2 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3c
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3c
            int r3 = r7.length     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            r4 = 0
        L14:
            if (r4 >= r3) goto L2a
            r5 = r7[r4]     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            int r6 = r5.length     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            java.lang.String r6 = a(r6)     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            r2.write(r6)     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            r2.write(r5)     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            int r4 = r4 + 1
            goto L14
        L2a:
            r2.flush()     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            byte[] r7 = r1.toByteArray()     // Catch: java.lang.Exception -> L36 java.lang.Throwable -> L55
            r1.close()     // Catch: java.lang.Exception -> L34
        L34:
            r0 = r7
            goto L51
        L36:
            r7 = move-exception
            goto L45
        L38:
            r7 = move-exception
            r2 = r0
        L3a:
            r0 = r1
            goto L57
        L3c:
            r7 = move-exception
            r2 = r0
            goto L45
        L3f:
            r7 = move-exception
            r2 = r0
            goto L57
        L42:
            r7 = move-exception
            r1 = r0
            r2 = r1
        L45:
            com.alipay.sdk.m.u.e.a(r7)     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L4f
            r1.close()     // Catch: java.lang.Exception -> L4e
            goto L4f
        L4e:
        L4f:
            if (r2 == 0) goto L54
        L51:
            r2.close()     // Catch: java.lang.Exception -> L54
        L54:
            return r0
        L55:
            r7 = move-exception
            goto L3a
        L57:
            if (r0 == 0) goto L5e
            r0.close()     // Catch: java.lang.Exception -> L5d
            goto L5e
        L5d:
        L5e:
            if (r2 == 0) goto L63
            r2.close()     // Catch: java.lang.Exception -> L63
        L63:
            throw r7
        L64:
            return r0
    }

    public static byte[] b(java.lang.String r0, byte[] r1, java.lang.String r2) {
            byte[] r0 = com.alipay.sdk.m.n.e.b(r0, r1, r2)
            return r0
    }

    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.p.d r6, java.lang.String r7) {
            r5 = this;
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L60
            byte[] r2 = r6.a()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L60
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L60
            r2 = 5
            byte[] r3 = new byte[r2]     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            r1.read(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            r4.<init>(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            int r3 = a(r4)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            byte[] r3 = new byte[r3]     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            r1.read(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            r4.<init>(r3)     // Catch: java.lang.Exception -> L5b java.lang.Throwable -> L77
            byte[] r2 = new byte[r2]     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            r1.read(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            r3.<init>(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            int r2 = a(r3)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            if (r2 <= 0) goto L52
            byte[] r2 = new byte[r2]     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            r1.read(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            boolean r3 = r5.a     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            if (r3 == 0) goto L42
            java.lang.String r3 = r5.b     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            byte[] r2 = a(r3, r2, r7)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
        L42:
            boolean r6 = r6.b()     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            if (r6 == 0) goto L4c
            byte[] r2 = com.alipay.sdk.m.n.b.b(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
        L4c:
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            r6.<init>(r2)     // Catch: java.lang.Exception -> L59 java.lang.Throwable -> L77
            goto L53
        L52:
            r6 = r0
        L53:
            r1.close()     // Catch: java.lang.Exception -> L57
            goto L6c
        L57:
            goto L6c
        L59:
            r6 = move-exception
            goto L63
        L5b:
            r6 = move-exception
            r4 = r0
            goto L63
        L5e:
            r6 = move-exception
            goto L79
        L60:
            r6 = move-exception
            r1 = r0
            r4 = r1
        L63:
            com.alipay.sdk.m.u.e.a(r6)     // Catch: java.lang.Throwable -> L77
            if (r1 == 0) goto L6b
            r1.close()     // Catch: java.lang.Exception -> L6b
        L6b:
            r6 = r0
        L6c:
            if (r4 != 0) goto L71
            if (r6 != 0) goto L71
            return r0
        L71:
            com.alipay.sdk.m.p.b r7 = new com.alipay.sdk.m.p.b
            r7.<init>(r4, r6)
            return r7
        L77:
            r6 = move-exception
            r0 = r1
        L79:
            if (r0 == 0) goto L7e
            r0.close()     // Catch: java.lang.Exception -> L7e
        L7e:
            throw r6
    }

    public com.alipay.sdk.m.p.d a(com.alipay.sdk.m.p.b r7, boolean r8, java.lang.String r9) {
            r6 = this;
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            java.lang.String r0 = r7.b()
            byte[] r0 = r0.getBytes()
            java.lang.String r7 = r7.a()
            byte[] r7 = r7.getBytes()
            r1 = 0
            if (r8 == 0) goto L1d
            byte[] r7 = com.alipay.sdk.m.n.b.a(r7)     // Catch: java.lang.Exception -> L1c
            goto L1d
        L1c:
            r8 = 0
        L1d:
            boolean r2 = r6.a
            r3 = 1
            r4 = 2
            if (r2 == 0) goto L3f
            java.lang.String r2 = r6.b
            java.lang.String r5 = com.alipay.sdk.m.l.a.f
            byte[] r2 = a(r2, r5)
            java.lang.String r5 = r6.b
            byte[] r7 = b(r5, r7, r9)
            r9 = 3
            byte[][] r9 = new byte[r9][]
            r9[r1] = r0
            r9[r3] = r2
            r9[r4] = r7
            byte[] r7 = a(r9)
            goto L49
        L3f:
            byte[][] r9 = new byte[r4][]
            r9[r1] = r0
            r9[r3] = r7
            byte[] r7 = a(r9)
        L49:
            com.alipay.sdk.m.p.d r9 = new com.alipay.sdk.m.p.d
            r9.<init>(r8, r7)
            return r9
    }
}
