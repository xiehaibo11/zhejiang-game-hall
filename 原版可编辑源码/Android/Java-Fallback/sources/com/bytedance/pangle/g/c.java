package com.bytedance.pangle.g;

public final class c {

    static class a extends java.lang.Exception {
    }

    public static class b {
        public final java.util.List<java.security.cert.X509Certificate> a;
        public final java.util.List<java.lang.Integer> b;

        public b(java.util.List<java.security.cert.X509Certificate> r1, java.util.List<java.lang.Integer> r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    public static class c {
        public final java.security.cert.X509Certificate[] a;
        public final com.bytedance.pangle.g.c.b b;
        public byte[] c;

        public c(java.security.cert.X509Certificate[] r1, com.bytedance.pangle.g.c.b r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    private static com.bytedance.pangle.g.c.b a(java.nio.ByteBuffer r14, java.security.cert.CertificateFactory r15) {
            java.lang.String r0 = " when verifying Proof-of-rotation record"
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
            r14.getInt()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.util.HashSet r4 = new java.util.HashSet     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r4.<init>()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r5 = -1
            r6 = 0
        L17:
            boolean r7 = r14.hasRemaining()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            if (r7 == 0) goto Le6
            int r3 = r3 + 1
            java.nio.ByteBuffer r7 = com.bytedance.pangle.g.f.a(r14)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.nio.ByteBuffer r8 = com.bytedance.pangle.g.f.a(r7)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            int r9 = r7.getInt()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            int r10 = r7.getInt()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            byte[] r7 = com.bytedance.pangle.g.f.b(r7)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            if (r6 == 0) goto L80
            android.util.Pair r11 = com.bytedance.pangle.g.f.d(r5)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.security.PublicKey r12 = r6.getPublicKey()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.Object r13 = r11.first     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.security.Signature r13 = java.security.Signature.getInstance(r13)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r13.initVerify(r12)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.Object r12 = r11.second     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            if (r12 == 0) goto L53
            java.lang.Object r12 = r11.second     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.security.spec.AlgorithmParameterSpec r12 = (java.security.spec.AlgorithmParameterSpec) r12     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r13.setParameter(r12)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
        L53:
            r13.update(r8)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            boolean r7 = r13.verify(r7)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            if (r7 == 0) goto L5d
            goto L80
        L5d:
            java.lang.SecurityException r14 = new java.lang.SecurityException     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r1 = "Unable to verify signature of certificate #"
            r15.<init>(r1)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r15.append(r3)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r1 = " using "
            r15.append(r1)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.Object r1 = r11.first     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r15.append(r1)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r15.append(r0)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r15 = r15.toString()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r14.<init>(r15)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            throw r14     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
        L80:
            r8.rewind()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            byte[] r7 = com.bytedance.pangle.g.f.b(r8)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            int r8 = r8.getInt()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            if (r6 == 0) goto La7
            if (r5 != r8) goto L90
            goto La7
        L90:
            java.lang.SecurityException r14 = new java.lang.SecurityException     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r1 = "Signing algorithm ID mismatch for certificate #"
            r15.<init>(r1)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r15.append(r3)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r15.append(r0)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r15 = r15.toString()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r14.<init>(r15)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            throw r14     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
        La7:
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r5.<init>(r7)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.security.cert.Certificate r5 = r15.generateCertificate(r5)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            com.bytedance.pangle.g.p r6 = new com.bytedance.pangle.g.p     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r6.<init>(r5, r7)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            boolean r5 = r4.contains(r6)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            if (r5 != 0) goto Lcd
            r4.add(r6)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r1.add(r6)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.Integer r5 = java.lang.Integer.valueOf(r9)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r2.add(r5)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r5 = r10
            goto L17
        Lcd:
            java.lang.SecurityException r14 = new java.lang.SecurityException     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r1 = "Encountered duplicate entries in Proof-of-rotation record at certificate #"
            r15.<init>(r1)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r15.append(r3)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r1 = ".  All signing certificates should be unique"
            r15.append(r1)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            java.lang.String r15 = r15.toString()     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            r14.<init>(r15)     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
            throw r14     // Catch: java.security.cert.CertificateException -> Lec java.security.SignatureException -> L104 java.security.InvalidAlgorithmParameterException -> L106 java.security.InvalidKeyException -> L108 java.security.NoSuchAlgorithmException -> L10a java.nio.BufferUnderflowException -> L122 java.io.IOException -> L124
        Le6:
            com.bytedance.pangle.g.c$b r14 = new com.bytedance.pangle.g.c$b
            r14.<init>(r1, r2)
            return r14
        Lec:
            r14 = move-exception
            java.lang.SecurityException r15 = new java.lang.SecurityException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Failed to decode certificate #"
            r1.<init>(r2)
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r15.<init>(r0, r14)
            throw r15
        L104:
            r14 = move-exception
            goto L10b
        L106:
            r14 = move-exception
            goto L10b
        L108:
            r14 = move-exception
            goto L10b
        L10a:
            r14 = move-exception
        L10b:
            java.lang.SecurityException r15 = new java.lang.SecurityException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Failed to verify signature over signed data for certificate #"
            r1.<init>(r2)
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r15.<init>(r0, r14)
            throw r15
        L122:
            r14 = move-exception
            goto L125
        L124:
            r14 = move-exception
        L125:
            java.io.IOException r15 = new java.io.IOException
            java.lang.String r0 = "Failed to parse Proof-of-rotation record"
            r15.<init>(r0, r14)
            throw r15
    }

    static com.bytedance.pangle.g.c.c a(java.io.RandomAccessFile r6, com.bytedance.pangle.g.m r7) {
            android.util.ArrayMap r0 = new android.util.ArrayMap
            r0.<init>()
            java.lang.String r1 = "X.509"
            java.security.cert.CertificateFactory r1 = java.security.cert.CertificateFactory.getInstance(r1)     // Catch: java.security.cert.CertificateException -> L93
            java.nio.ByteBuffer r2 = r7.a     // Catch: java.io.IOException -> L8a
            java.nio.ByteBuffer r2 = com.bytedance.pangle.g.f.a(r2)     // Catch: java.io.IOException -> L8a
            r3 = 0
            r4 = 0
        L13:
            boolean r5 = r2.hasRemaining()
            if (r5 == 0) goto L42
            java.nio.ByteBuffer r5 = com.bytedance.pangle.g.f.a(r2)     // Catch: com.bytedance.pangle.g.c.a -> L13 java.lang.SecurityException -> L24 java.nio.BufferUnderflowException -> L26 java.io.IOException -> L28
            com.bytedance.pangle.g.c$c r4 = a(r5, r0, r1)     // Catch: com.bytedance.pangle.g.c.a -> L13 java.lang.SecurityException -> L24 java.nio.BufferUnderflowException -> L26 java.io.IOException -> L28
            int r3 = r3 + 1
            goto L13
        L24:
            r6 = move-exception
            goto L29
        L26:
            r6 = move-exception
            goto L29
        L28:
            r6 = move-exception
        L29:
            java.lang.SecurityException r7 = new java.lang.SecurityException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Failed to parse/verify signer #"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = " block"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0, r6)
            throw r7
        L42:
            if (r3 <= 0) goto L82
            if (r4 == 0) goto L82
            r1 = 1
            if (r3 != r1) goto L7a
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L72
            com.bytedance.pangle.g.f.a(r0, r6, r7)
            r1 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            boolean r2 = r0.containsKey(r2)
            if (r2 == 0) goto L71
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = r0.get(r1)
            byte[] r0 = (byte[]) r0
            long r1 = r6.length()
            byte[] r6 = com.bytedance.pangle.g.f.a(r0, r1, r7)
            r4.c = r6
        L71:
            return r4
        L72:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "No content digests found"
            r6.<init>(r7)
            throw r6
        L7a:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "APK Signature Scheme V3 only supports one signer: multiple signers found."
            r6.<init>(r7)
            throw r6
        L82:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "No signers found"
            r6.<init>(r7)
            throw r6
        L8a:
            r6 = move-exception
            java.lang.SecurityException r7 = new java.lang.SecurityException
            java.lang.String r0 = "Failed to read list of signers"
            r7.<init>(r0, r6)
            throw r7
        L93:
            r6 = move-exception
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            java.lang.String r0 = "Failed to obtain X.509 CertificateFactory"
            r7.<init>(r0, r6)
            throw r7
    }

    private static com.bytedance.pangle.g.c.c a(java.nio.ByteBuffer r4, java.util.List<java.security.cert.X509Certificate> r5, java.security.cert.CertificateFactory r6) {
            int r0 = r5.size()
            java.security.cert.X509Certificate[] r0 = new java.security.cert.X509Certificate[r0]
            java.lang.Object[] r5 = r5.toArray(r0)
            java.security.cert.X509Certificate[] r5 = (java.security.cert.X509Certificate[]) r5
            r0 = 0
        Ld:
            boolean r1 = r4.hasRemaining()
            if (r1 == 0) goto L89
            java.nio.ByteBuffer r1 = com.bytedance.pangle.g.f.a(r4)
            int r2 = r1.remaining()
            r3 = 4
            if (r2 < r3) goto L71
            int r2 = r1.getInt()
            r3 = 1000370060(0x3ba06f8c, float:0.00489611)
            if (r2 == r3) goto L28
            goto Ld
        L28:
            if (r0 != 0) goto L69
            com.bytedance.pangle.g.c$b r0 = a(r1, r6)
            java.util.List<java.security.cert.X509Certificate> r1 = r0.a     // Catch: java.security.cert.CertificateEncodingException -> L60
            int r1 = r1.size()     // Catch: java.security.cert.CertificateEncodingException -> L60
            if (r1 <= 0) goto Ld
            java.util.List<java.security.cert.X509Certificate> r1 = r0.a     // Catch: java.security.cert.CertificateEncodingException -> L60
            java.util.List<java.security.cert.X509Certificate> r2 = r0.a     // Catch: java.security.cert.CertificateEncodingException -> L60
            int r2 = r2.size()     // Catch: java.security.cert.CertificateEncodingException -> L60
            int r2 = r2 + (-1)
            java.lang.Object r1 = r1.get(r2)     // Catch: java.security.cert.CertificateEncodingException -> L60
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1     // Catch: java.security.cert.CertificateEncodingException -> L60
            byte[] r1 = r1.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L60
            r2 = 0
            r2 = r5[r2]     // Catch: java.security.cert.CertificateEncodingException -> L60
            byte[] r2 = r2.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L60
            boolean r1 = java.util.Arrays.equals(r1, r2)     // Catch: java.security.cert.CertificateEncodingException -> L60
            if (r1 == 0) goto L58
            goto Ld
        L58:
            java.lang.SecurityException r4 = new java.lang.SecurityException     // Catch: java.security.cert.CertificateEncodingException -> L60
            java.lang.String r5 = "Terminal certificate in Proof-of-rotation record does not match APK signing certificate"
            r4.<init>(r5)     // Catch: java.security.cert.CertificateEncodingException -> L60
            throw r4     // Catch: java.security.cert.CertificateEncodingException -> L60
        L60:
            r4 = move-exception
            java.lang.SecurityException r5 = new java.lang.SecurityException
            java.lang.String r6 = "Failed to encode certificate when comparing Proof-of-rotation record and signing certificate"
            r5.<init>(r6, r4)
            throw r5
        L69:
            java.lang.SecurityException r4 = new java.lang.SecurityException
            java.lang.String r5 = "Encountered multiple Proof-of-rotation records when verifying APK Signature Scheme v3 signature"
            r4.<init>(r5)
            throw r4
        L71:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "Remaining buffer too short to contain additional attribute ID. Remaining: "
            r5.<init>(r6)
            int r6 = r1.remaining()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L89:
            com.bytedance.pangle.g.c$c r4 = new com.bytedance.pangle.g.c$c
            r4.<init>(r5, r0)
            return r4
    }

    private static com.bytedance.pangle.g.c.c a(java.nio.ByteBuffer r16, java.util.Map<java.lang.Integer, byte[]> r17, java.security.cert.CertificateFactory r18) {
            r0 = r18
            java.nio.ByteBuffer r1 = com.bytedance.pangle.g.f.a(r16)
            int r2 = r16.getInt()
            int r3 = r16.getInt()
            java.nio.ByteBuffer r4 = com.bytedance.pangle.g.f.a(r16)
            byte[] r5 = com.bytedance.pangle.g.f.b(r16)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r8 = -1
            r9 = 0
            r10 = r8
            r11 = r9
            r12 = 0
        L20:
            boolean r13 = r4.hasRemaining()
            r14 = 8
            r15 = 1
            if (r13 == 0) goto L89
            int r11 = r11 + 1
            java.nio.ByteBuffer r13 = com.bytedance.pangle.g.f.a(r4)     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            int r7 = r13.remaining()     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            if (r7 < r14) goto L6e
            int r7 = r13.getInt()     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            java.lang.Integer r14 = java.lang.Integer.valueOf(r7)     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            r6.add(r14)     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            r14 = 513(0x201, float:7.19E-43)
            if (r7 == r14) goto L5c
            r14 = 514(0x202, float:7.2E-43)
            if (r7 == r14) goto L5c
            r14 = 769(0x301, float:1.078E-42)
            if (r7 == r14) goto L5c
            r14 = 1057(0x421, float:1.481E-42)
            if (r7 == r14) goto L5c
            r14 = 1059(0x423, float:1.484E-42)
            if (r7 == r14) goto L5c
            r14 = 1061(0x425, float:1.487E-42)
            if (r7 == r14) goto L5c
            switch(r7) {
                case 257: goto L5c;
                case 258: goto L5c;
                case 259: goto L5c;
                case 260: goto L5c;
                default: goto L5b;
            }     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
        L5b:
            r15 = r9
        L5c:
            if (r15 != 0) goto L5f
            goto L20
        L5f:
            if (r10 == r8) goto L67
            int r14 = com.bytedance.pangle.g.f.a(r7, r10)     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            if (r14 <= 0) goto L20
        L67:
            byte[] r10 = com.bytedance.pangle.g.f.b(r13)     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            r12 = r10
            r10 = r7
            goto L20
        L6e:
            java.lang.SecurityException r0 = new java.lang.SecurityException     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            java.lang.String r1 = "Signature record too short"
            r0.<init>(r1)     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
            throw r0     // Catch: java.nio.BufferUnderflowException -> L76 java.io.IOException -> L78
        L76:
            r0 = move-exception
            goto L79
        L78:
            r0 = move-exception
        L79:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = java.lang.String.valueOf(r11)
            java.lang.String r3 = "Failed to parse signature record #"
            java.lang.String r2 = r3.concat(r2)
            r1.<init>(r2, r0)
            throw r1
        L89:
            if (r10 != r8) goto L9d
            if (r11 != 0) goto L95
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.String r1 = "No signatures found"
            r0.<init>(r1)
            throw r0
        L95:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.String r1 = "No supported signatures found"
            r0.<init>(r1)
            throw r0
        L9d:
            java.lang.String r4 = com.bytedance.pangle.g.f.c(r10)
            android.util.Pair r7 = com.bytedance.pangle.g.f.d(r10)
            java.lang.Object r8 = r7.first
            java.lang.String r8 = (java.lang.String) r8
            java.lang.Object r7 = r7.second
            java.security.spec.AlgorithmParameterSpec r7 = (java.security.spec.AlgorithmParameterSpec) r7
            java.security.KeyFactory r4 = java.security.KeyFactory.getInstance(r4)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            java.security.spec.X509EncodedKeySpec r11 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            r11.<init>(r5)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            java.security.PublicKey r4 = r4.generatePublic(r11)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            java.security.Signature r11 = java.security.Signature.getInstance(r8)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            r11.initVerify(r4)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            if (r7 == 0) goto Lc6
            r11.setParameter(r7)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
        Lc6:
            r11.update(r1)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            boolean r4 = r11.verify(r12)     // Catch: java.security.SignatureException -> L1ff java.security.InvalidAlgorithmParameterException -> L201 java.security.InvalidKeyException -> L203 java.security.spec.InvalidKeySpecException -> L205 java.security.NoSuchAlgorithmException -> L207
            if (r4 == 0) goto L1e8
            r1.clear()
            java.nio.ByteBuffer r4 = com.bytedance.pangle.g.f.a(r1)
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            r11 = r9
            r8 = 0
        Ldd:
            boolean r12 = r4.hasRemaining()
            if (r12 == 0) goto L11d
            int r11 = r11 + r15
            java.nio.ByteBuffer r12 = com.bytedance.pangle.g.f.a(r4)     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
            int r13 = r12.remaining()     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
            if (r13 < r14) goto L102
            int r13 = r12.getInt()     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
            java.lang.Integer r14 = java.lang.Integer.valueOf(r13)     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
            r7.add(r14)     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
            if (r13 != r10) goto Lff
            byte[] r8 = com.bytedance.pangle.g.f.b(r12)     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
        Lff:
            r14 = 8
            goto Ldd
        L102:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
            java.lang.String r1 = "Record too short"
            r0.<init>(r1)     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
            throw r0     // Catch: java.nio.BufferUnderflowException -> L10a java.io.IOException -> L10c
        L10a:
            r0 = move-exception
            goto L10d
        L10c:
            r0 = move-exception
        L10d:
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = java.lang.String.valueOf(r11)
            java.lang.String r3 = "Failed to parse digest record #"
            java.lang.String r2 = r3.concat(r2)
            r1.<init>(r2, r0)
            throw r1
        L11d:
            boolean r4 = r6.equals(r7)
            if (r4 == 0) goto L1e0
            int r4 = com.bytedance.pangle.g.f.a(r10)
            java.lang.Integer r6 = java.lang.Integer.valueOf(r4)
            r7 = r17
            java.lang.Object r6 = r7.put(r6, r8)
            byte[] r6 = (byte[]) r6
            if (r6 == 0) goto L157
            boolean r6 = java.security.MessageDigest.isEqual(r6, r8)
            if (r6 == 0) goto L13c
            goto L157
        L13c:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bytedance.pangle.g.f.b(r4)
            r1.append(r2)
            java.lang.String r2 = " contents digest does not match the digest specified by a preceding signer"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L157:
            java.nio.ByteBuffer r4 = com.bytedance.pangle.g.f.a(r1)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r7 = r9
        L161:
            boolean r8 = r4.hasRemaining()
            if (r8 == 0) goto L191
            int r7 = r7 + r15
            byte[] r8 = com.bytedance.pangle.g.f.b(r4)
            java.io.ByteArrayInputStream r10 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L180
            r10.<init>(r8)     // Catch: java.security.cert.CertificateException -> L180
            java.security.cert.Certificate r10 = r0.generateCertificate(r10)     // Catch: java.security.cert.CertificateException -> L180
            java.security.cert.X509Certificate r10 = (java.security.cert.X509Certificate) r10     // Catch: java.security.cert.CertificateException -> L180
            com.bytedance.pangle.g.p r11 = new com.bytedance.pangle.g.p
            r11.<init>(r10, r8)
            r6.add(r11)
            goto L161
        L180:
            r0 = move-exception
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = java.lang.String.valueOf(r7)
            java.lang.String r3 = "Failed to decode certificate #"
            java.lang.String r2 = r3.concat(r2)
            r1.<init>(r2, r0)
            throw r1
        L191:
            boolean r4 = r6.isEmpty()
            if (r4 != 0) goto L1d8
            java.lang.Object r4 = r6.get(r9)
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4
            java.security.PublicKey r4 = r4.getPublicKey()
            byte[] r4 = r4.getEncoded()
            boolean r4 = java.util.Arrays.equals(r5, r4)
            if (r4 == 0) goto L1d0
            int r4 = r1.getInt()
            if (r4 != r2) goto L1c8
            int r2 = r1.getInt()
            if (r2 != r3) goto L1c0
            java.nio.ByteBuffer r1 = com.bytedance.pangle.g.f.a(r1)
            com.bytedance.pangle.g.c$c r0 = a(r1, r6, r0)
            return r0
        L1c0:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.String r1 = "maxSdkVersion mismatch between signed and unsigned in v3 signer block."
            r0.<init>(r1)
            throw r0
        L1c8:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.String r1 = "minSdkVersion mismatch between signed and unsigned in v3 signer block."
            r0.<init>(r1)
            throw r0
        L1d0:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.String r1 = "Public key mismatch between certificate and signature record"
            r0.<init>(r1)
            throw r0
        L1d8:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.String r1 = "No certificates listed"
            r0.<init>(r1)
            throw r0
        L1e0:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.String r1 = "Signature algorithms don't match between digests and signatures records"
            r0.<init>(r1)
            throw r0
        L1e8:
            java.lang.SecurityException r0 = new java.lang.SecurityException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            java.lang.String r2 = " signature did not verify"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L1ff:
            r0 = move-exception
            goto L208
        L201:
            r0 = move-exception
            goto L208
        L203:
            r0 = move-exception
            goto L208
        L205:
            r0 = move-exception
            goto L208
        L207:
            r0 = move-exception
        L208:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Failed to verify "
            r2.<init>(r3)
            r2.append(r8)
            java.lang.String r3 = " signature"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
    }
}
