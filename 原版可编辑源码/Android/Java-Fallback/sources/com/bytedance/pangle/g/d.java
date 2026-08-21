package com.bytedance.pangle.g;

public final class d {
    public static com.bytedance.pangle.g.o a(java.lang.String r12) {
            java.lang.String r0 = "Failed to collect certificates from "
            r1 = 0
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L110 java.lang.Exception -> L112
            java.lang.String r3 = "r"
            r2.<init>(r12, r3)     // Catch: java.lang.Throwable -> L110 java.lang.Exception -> L112
            r3 = 2
            r4 = 4
            int[] r3 = new int[r3]     // Catch: java.lang.Throwable -> Lf5 java.lang.Exception -> Lf8
            r5 = -262969152(0xfffffffff05368c0, float:-2.6171189E29)
            r6 = 0
            r3[r6] = r5     // Catch: java.lang.Throwable -> Lf5 java.lang.Exception -> Lf8
            r7 = 1896449818(0x7109871a, float:6.810044E29)
            r8 = 1
            r3[r8] = r7     // Catch: java.lang.Throwable -> Lf5 java.lang.Exception -> Lf8
            com.bytedance.pangle.g.f.a(r12, r2, r3)     // Catch: java.lang.Throwable -> Lf5 java.lang.Exception -> Lf8
            java.util.HashMap<java.lang.String, android.util.SparseArray<com.bytedance.pangle.g.m>> r3 = com.bytedance.pangle.g.f.a     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.lang.Object r3 = r3.get(r12)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            android.util.SparseArray r3 = (android.util.SparseArray) r3     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.lang.Object r3 = r3.get(r5)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            com.bytedance.pangle.g.m r3 = (com.bytedance.pangle.g.m) r3     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            if (r3 == 0) goto L8a
            com.bytedance.pangle.g.c$c r3 = com.bytedance.pangle.g.c.a(r2, r3)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.security.cert.Certificate[][] r5 = new java.security.cert.Certificate[r8][]     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.security.cert.X509Certificate[] r8 = r3.a     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            r5[r6] = r8     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            android.content.pm.Signature[] r5 = a(r5)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            com.bytedance.pangle.g.c$b r8 = r3.b     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            if (r8 == 0) goto L7f
            com.bytedance.pangle.g.c$b r1 = r3.b     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.util.List<java.security.cert.X509Certificate> r1 = r1.a     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            int r1 = r1.size()     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            android.content.pm.Signature[] r8 = new android.content.pm.Signature[r1]     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            com.bytedance.pangle.g.c$b r9 = r3.b     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.util.List<java.lang.Integer> r9 = r9.b     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            int r9 = r9.size()     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            int[] r9 = new int[r9]     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
        L53:
            if (r6 >= r1) goto L7d
            android.content.pm.Signature r10 = new android.content.pm.Signature     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            com.bytedance.pangle.g.c$b r11 = r3.b     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.util.List<java.security.cert.X509Certificate> r11 = r11.a     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.lang.Object r11 = r11.get(r6)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.security.cert.X509Certificate r11 = (java.security.cert.X509Certificate) r11     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            byte[] r11 = r11.getEncoded()     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            r10.<init>(r11)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            r8[r6] = r10     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            com.bytedance.pangle.g.c$b r10 = r3.b     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.util.List<java.lang.Integer> r10 = r10.b     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.lang.Object r10 = r10.get(r6)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.lang.Integer r10 = (java.lang.Integer) r10     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            int r10 = r10.intValue()     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            r9[r6] = r10     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            int r6 = r6 + 1
            goto L53
        L7d:
            r1 = r8
            goto L80
        L7f:
            r9 = r1
        L80:
            com.bytedance.pangle.g.o r3 = new com.bytedance.pangle.g.o     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            r6 = 3
            r3.<init>(r5, r6, r1, r9)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            r2.close()     // Catch: java.lang.Exception -> L89
        L89:
            return r3
        L8a:
            com.bytedance.pangle.g.n r1 = new com.bytedance.pangle.g.n     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            java.lang.String r3 = "findVerifiedSigner, No APK Signature Scheme v3 signature in package"
            r1.<init>(r3)     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
            throw r1     // Catch: java.lang.Exception -> L92 com.bytedance.pangle.g.n -> Laa java.lang.Throwable -> Lf5
        L92:
            r1 = move-exception
            com.bytedance.pangle.g.q r3 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lf5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf5
            r5.<init>(r0)     // Catch: java.lang.Throwable -> Lf5
            r5.append(r12)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r12 = " using APK Signature Scheme v3"
            r5.append(r12)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r12 = r5.toString()     // Catch: java.lang.Throwable -> Lf5
            r3.<init>(r4, r12, r1)     // Catch: java.lang.Throwable -> Lf5
            throw r3     // Catch: java.lang.Throwable -> Lf5
        Laa:
            java.util.HashMap<java.lang.String, android.util.SparseArray<com.bytedance.pangle.g.m>> r1 = com.bytedance.pangle.g.f.a     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            java.lang.Object r1 = r1.get(r12)     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            android.util.SparseArray r1 = (android.util.SparseArray) r1     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            java.lang.Object r1 = r1.get(r7)     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            com.bytedance.pangle.g.m r1 = (com.bytedance.pangle.g.m) r1     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            if (r1 == 0) goto Lcd
            com.bytedance.pangle.g.b$a r1 = com.bytedance.pangle.g.b.a(r2, r1)     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            java.security.cert.X509Certificate[][] r1 = r1.a     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            android.content.pm.Signature[] r1 = a(r1)     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            com.bytedance.pangle.g.o r3 = new com.bytedance.pangle.g.o     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            r3.<init>(r1)     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            r2.close()     // Catch: java.lang.Exception -> Lcc
        Lcc:
            return r3
        Lcd:
            com.bytedance.pangle.g.n r1 = new com.bytedance.pangle.g.n     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            java.lang.String r3 = "findVerifiedSigner, No APK Signature Scheme v2 signature in package"
            r1.<init>(r3)     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
            throw r1     // Catch: java.lang.Exception -> Ld5 com.bytedance.pangle.g.n -> Led java.lang.Throwable -> Lf5
        Ld5:
            r1 = move-exception
            com.bytedance.pangle.g.q r3 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lf5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf5
            r5.<init>(r0)     // Catch: java.lang.Throwable -> Lf5
            r5.append(r12)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r12 = " using APK Signature Scheme v2"
            r5.append(r12)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r12 = r5.toString()     // Catch: java.lang.Throwable -> Lf5
            r3.<init>(r4, r12, r1)     // Catch: java.lang.Throwable -> Lf5
            throw r3     // Catch: java.lang.Throwable -> Lf5
        Led:
            com.bytedance.pangle.g.o r12 = com.bytedance.pangle.g.a.a(r12)     // Catch: java.lang.Throwable -> Lf5
            r2.close()     // Catch: java.lang.Exception -> Lf4
        Lf4:
            return r12
        Lf5:
            r12 = move-exception
            r1 = r2
            goto L123
        Lf8:
            r1 = move-exception
            com.bytedance.pangle.g.q r3 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> Lf5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf5
            r5.<init>(r0)     // Catch: java.lang.Throwable -> Lf5
            r5.append(r12)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r12 = " when findSignatureInfo at once"
            r5.append(r12)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r12 = r5.toString()     // Catch: java.lang.Throwable -> Lf5
            r3.<init>(r4, r12, r1)     // Catch: java.lang.Throwable -> Lf5
            throw r3     // Catch: java.lang.Throwable -> Lf5
        L110:
            r12 = move-exception
            goto L123
        L112:
            com.bytedance.pangle.g.q r0 = new com.bytedance.pangle.g.q     // Catch: java.lang.Throwable -> L110
            r2 = 6
            java.lang.String r3 = "failed to read apk file, minSignatureSchemeVersion : 1, apkPath : "
            java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L110
            java.lang.String r12 = r3.concat(r12)     // Catch: java.lang.Throwable -> L110
            r0.<init>(r2, r12)     // Catch: java.lang.Throwable -> L110
            throw r0     // Catch: java.lang.Throwable -> L110
        L123:
            if (r1 == 0) goto L128
            r1.close()     // Catch: java.lang.Exception -> L128
        L128:
            throw r12
    }

    public static android.content.pm.Signature[] a(java.security.cert.Certificate[][] r7) {
            int r0 = r7.length
            android.content.pm.Signature[] r0 = new android.content.pm.Signature[r0]
            r1 = 0
            r2 = r1
        L5:
            int r3 = r7.length
            if (r2 >= r3) goto L63
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 21
            r5 = 1
            if (r3 < r4) goto L17
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 28
            if (r3 > r4) goto L17
            r3 = r5
            goto L18
        L17:
            r3 = r1
        L18:
            if (r3 == 0) goto L51
            java.lang.Class<android.content.pm.Signature> r3 = android.content.pm.Signature.class
            java.lang.Class[] r4 = new java.lang.Class[r5]
            java.lang.Class<java.security.cert.Certificate[]> r6 = java.security.cert.Certificate[].class
            r4[r1] = r6
            java.lang.reflect.Constructor r3 = com.bytedance.pangle.b.b.a.a(r3, r4)
            if (r3 == 0) goto L2b
            r3.setAccessible(r5)
        L2b:
            if (r3 == 0) goto L60
            boolean r4 = r3.isAccessible()
            if (r4 == 0) goto L60
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L47 java.lang.InstantiationException -> L4c
            r5 = r7[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L47 java.lang.InstantiationException -> L4c
            r4[r1] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L47 java.lang.InstantiationException -> L4c
            java.lang.Object r3 = r3.newInstance(r4)     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L47 java.lang.InstantiationException -> L4c
            android.content.pm.Signature r3 = (android.content.pm.Signature) r3     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L47 java.lang.InstantiationException -> L4c
            r0[r2] = r3     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L47 java.lang.InstantiationException -> L4c
            goto L60
        L42:
            r3 = move-exception
            r3.printStackTrace()
            goto L60
        L47:
            r3 = move-exception
            r3.printStackTrace()
            goto L60
        L4c:
            r3 = move-exception
            r3.printStackTrace()
            goto L60
        L51:
            android.content.pm.Signature r3 = new android.content.pm.Signature
            r4 = r7[r2]
            r4 = r4[r1]
            byte[] r4 = r4.getEncoded()
            r3.<init>(r4)
            r0[r2] = r3
        L60:
            int r2 = r2 + 1
            goto L5
        L63:
            return r0
    }
}
