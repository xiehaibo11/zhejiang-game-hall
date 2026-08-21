package com.bytedance.pangle.g;

public final class b {

    public static class a {
        public final java.security.cert.X509Certificate[][] a;
        public final byte[] b;

        public a(java.security.cert.X509Certificate[][] r1, byte[] r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    static com.bytedance.pangle.g.b.a a(java.io.RandomAccessFile r6, com.bytedance.pangle.g.m r7) {
            android.util.ArrayMap r0 = new android.util.ArrayMap
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.lang.String r2 = "X.509"
            java.security.cert.CertificateFactory r2 = java.security.cert.CertificateFactory.getInstance(r2)     // Catch: java.security.cert.CertificateException -> L9d
            java.nio.ByteBuffer r3 = r7.a     // Catch: java.io.IOException -> L94
            java.nio.ByteBuffer r3 = com.bytedance.pangle.g.f.a(r3)     // Catch: java.io.IOException -> L94
            r4 = 0
        L17:
            boolean r5 = r3.hasRemaining()
            if (r5 == 0) goto L49
            int r4 = r4 + 1
            java.nio.ByteBuffer r5 = com.bytedance.pangle.g.f.a(r3)     // Catch: java.lang.SecurityException -> L2b java.nio.BufferUnderflowException -> L2d java.io.IOException -> L2f
            java.security.cert.X509Certificate[] r5 = a(r5, r0, r2)     // Catch: java.lang.SecurityException -> L2b java.nio.BufferUnderflowException -> L2d java.io.IOException -> L2f
            r1.add(r5)     // Catch: java.lang.SecurityException -> L2b java.nio.BufferUnderflowException -> L2d java.io.IOException -> L2f
            goto L17
        L2b:
            r6 = move-exception
            goto L30
        L2d:
            r6 = move-exception
            goto L30
        L2f:
            r6 = move-exception
        L30:
            java.lang.SecurityException r7 = new java.lang.SecurityException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Failed to parse/verify signer #"
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = " block"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0, r6)
            throw r7
        L49:
            if (r4 <= 0) goto L8c
            boolean r2 = r0.isEmpty()
            if (r2 != 0) goto L84
            com.bytedance.pangle.g.f.a(r0, r6, r7)
            r2 = 0
            r3 = 3
            java.lang.Integer r4 = java.lang.Integer.valueOf(r3)
            boolean r4 = r0.containsKey(r4)
            if (r4 == 0) goto L72
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)
            java.lang.Object r0 = r0.get(r2)
            byte[] r0 = (byte[]) r0
            long r2 = r6.length()
            byte[] r2 = com.bytedance.pangle.g.f.a(r0, r2, r7)
        L72:
            com.bytedance.pangle.g.b$a r6 = new com.bytedance.pangle.g.b$a
            int r7 = r1.size()
            java.security.cert.X509Certificate[][] r7 = new java.security.cert.X509Certificate[r7][]
            java.lang.Object[] r7 = r1.toArray(r7)
            java.security.cert.X509Certificate[][] r7 = (java.security.cert.X509Certificate[][]) r7
            r6.<init>(r7, r2)
            return r6
        L84:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "No content digests found"
            r6.<init>(r7)
            throw r6
        L8c:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "No signers found"
            r6.<init>(r7)
            throw r6
        L94:
            r6 = move-exception
            java.lang.SecurityException r7 = new java.lang.SecurityException
            java.lang.String r0 = "Failed to read list of signers"
            r7.<init>(r0, r6)
            throw r7
        L9d:
            r6 = move-exception
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            java.lang.String r0 = "Failed to obtain X.509 CertificateFactory"
            r7.<init>(r0, r6)
            throw r7
    }

    private static void a(java.nio.ByteBuffer r4) {
        L0:
            boolean r0 = r4.hasRemaining()
            if (r0 == 0) goto L61
            java.nio.ByteBuffer r0 = com.bytedance.pangle.g.f.a(r4)
            int r1 = r0.remaining()
            r2 = 4
            if (r1 < r2) goto L49
            int r1 = r0.getInt()
            r3 = -1091571699(0xffffffffbeeff00d, float:-0.46862832)
            if (r1 == r3) goto L1b
            goto L0
        L1b:
            int r1 = r0.remaining()
            if (r1 < r2) goto L31
            int r0 = r0.getInt()
            r1 = 3
            if (r0 == r1) goto L29
            goto L0
        L29:
            java.lang.SecurityException r4 = new java.lang.SecurityException
            java.lang.String r0 = "V2 signature indicates APK is signed using APK Signature Scheme v3, but none was found. Signature stripped?"
            r4.<init>(r0)
            throw r4
        L31:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "V2 Signature Scheme Stripping Protection Attribute  value too small. Expected 4 bytes, but found "
            r1.<init>(r2)
            int r0 = r0.remaining()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
        L49:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Remaining buffer too short to contain additional attribute ID. Remaining: "
            r1.<init>(r2)
            int r0 = r0.remaining()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
        L61:
            return
    }

    private static java.security.cert.X509Certificate[] a(java.nio.ByteBuffer r13, java.util.Map<java.lang.Integer, byte[]> r14, java.security.cert.CertificateFactory r15) {
            java.nio.ByteBuffer r0 = com.bytedance.pangle.g.f.a(r13)
            java.nio.ByteBuffer r1 = com.bytedance.pangle.g.f.a(r13)
            byte[] r13 = com.bytedance.pangle.g.f.b(r13)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
            r4 = -1
            r5 = 0
            r8 = r3
            r6 = r4
            r7 = r5
        L17:
            boolean r9 = r1.hasRemaining()
            r10 = 8
            r11 = 1
            if (r9 == 0) goto L80
            int r7 = r7 + 1
            java.nio.ByteBuffer r9 = com.bytedance.pangle.g.f.a(r1)     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            int r12 = r9.remaining()     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            if (r12 < r10) goto L65
            int r10 = r9.getInt()     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            java.lang.Integer r12 = java.lang.Integer.valueOf(r10)     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            r2.add(r12)     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            r12 = 513(0x201, float:7.19E-43)
            if (r10 == r12) goto L53
            r12 = 514(0x202, float:7.2E-43)
            if (r10 == r12) goto L53
            r12 = 769(0x301, float:1.078E-42)
            if (r10 == r12) goto L53
            r12 = 1057(0x421, float:1.481E-42)
            if (r10 == r12) goto L53
            r12 = 1059(0x423, float:1.484E-42)
            if (r10 == r12) goto L53
            r12 = 1061(0x425, float:1.487E-42)
            if (r10 == r12) goto L53
            switch(r10) {
                case 257: goto L53;
                case 258: goto L53;
                case 259: goto L53;
                case 260: goto L53;
                default: goto L52;
            }     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
        L52:
            r11 = r5
        L53:
            if (r11 != 0) goto L56
            goto L17
        L56:
            if (r6 == r4) goto L5e
            int r11 = com.bytedance.pangle.g.f.a(r10, r6)     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            if (r11 <= 0) goto L17
        L5e:
            byte[] r6 = com.bytedance.pangle.g.f.b(r9)     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            r8 = r6
            r6 = r10
            goto L17
        L65:
            java.lang.SecurityException r13 = new java.lang.SecurityException     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            java.lang.String r14 = "Signature record too short"
            r13.<init>(r14)     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
            throw r13     // Catch: java.nio.BufferUnderflowException -> L6d java.io.IOException -> L6f
        L6d:
            r13 = move-exception
            goto L70
        L6f:
            r13 = move-exception
        L70:
            java.lang.SecurityException r14 = new java.lang.SecurityException
            java.lang.String r15 = java.lang.String.valueOf(r7)
            java.lang.String r0 = "Failed to parse signature record #"
            java.lang.String r15 = r0.concat(r15)
            r14.<init>(r15, r13)
            throw r14
        L80:
            if (r6 != r4) goto L94
            if (r7 != 0) goto L8c
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.String r14 = "No signatures found"
            r13.<init>(r14)
            throw r13
        L8c:
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.String r14 = "No supported signatures found"
            r13.<init>(r14)
            throw r13
        L94:
            java.lang.String r1 = com.bytedance.pangle.g.f.c(r6)
            android.util.Pair r4 = com.bytedance.pangle.g.f.d(r6)
            java.lang.Object r7 = r4.first
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r4 = r4.second
            java.security.spec.AlgorithmParameterSpec r4 = (java.security.spec.AlgorithmParameterSpec) r4
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            java.security.spec.X509EncodedKeySpec r9 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            r9.<init>(r13)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            java.security.PublicKey r1 = r1.generatePublic(r9)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            java.security.Signature r9 = java.security.Signature.getInstance(r7)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            r9.initVerify(r1)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            if (r4 == 0) goto Lbd
            r9.setParameter(r4)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
        Lbd:
            r9.update(r0)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            boolean r1 = r9.verify(r8)     // Catch: java.security.SignatureException -> L1e0 java.security.InvalidAlgorithmParameterException -> L1e2 java.security.InvalidKeyException -> L1e4 java.security.spec.InvalidKeySpecException -> L1e6 java.security.NoSuchAlgorithmException -> L1e8
            if (r1 == 0) goto L1c9
            r0.clear()
            java.nio.ByteBuffer r1 = com.bytedance.pangle.g.f.a(r0)
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r7 = r5
        Ld3:
            boolean r8 = r1.hasRemaining()
            if (r8 == 0) goto L111
            int r7 = r7 + r11
            java.nio.ByteBuffer r8 = com.bytedance.pangle.g.f.a(r1)     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            int r9 = r8.remaining()     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            if (r9 < r10) goto Lf6
            int r9 = r8.getInt()     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            java.lang.Integer r12 = java.lang.Integer.valueOf(r9)     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            r4.add(r12)     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            if (r9 != r6) goto Ld3
            byte[] r3 = com.bytedance.pangle.g.f.b(r8)     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            goto Ld3
        Lf6:
            java.io.IOException r13 = new java.io.IOException     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            java.lang.String r14 = "Record too short"
            r13.<init>(r14)     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
            throw r13     // Catch: java.nio.BufferUnderflowException -> Lfe java.io.IOException -> L100
        Lfe:
            r13 = move-exception
            goto L101
        L100:
            r13 = move-exception
        L101:
            java.io.IOException r14 = new java.io.IOException
            java.lang.String r15 = java.lang.String.valueOf(r7)
            java.lang.String r0 = "Failed to parse digest record #"
            java.lang.String r15 = r0.concat(r15)
            r14.<init>(r15, r13)
            throw r14
        L111:
            boolean r1 = r2.equals(r4)
            if (r1 == 0) goto L1c1
            int r1 = com.bytedance.pangle.g.f.a(r6)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.Object r14 = r14.put(r2, r3)
            byte[] r14 = (byte[]) r14
            if (r14 == 0) goto L149
            boolean r14 = java.security.MessageDigest.isEqual(r14, r3)
            if (r14 == 0) goto L12e
            goto L149
        L12e:
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = com.bytedance.pangle.g.f.b(r1)
            r14.append(r15)
            java.lang.String r15 = " contents digest does not match the digest specified by a preceding signer"
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            r13.<init>(r14)
            throw r13
        L149:
            java.nio.ByteBuffer r14 = com.bytedance.pangle.g.f.a(r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = r5
        L153:
            boolean r3 = r14.hasRemaining()
            if (r3 == 0) goto L183
            int r2 = r2 + r11
            byte[] r3 = com.bytedance.pangle.g.f.b(r14)
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L172
            r4.<init>(r3)     // Catch: java.security.cert.CertificateException -> L172
            java.security.cert.Certificate r4 = r15.generateCertificate(r4)     // Catch: java.security.cert.CertificateException -> L172
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4     // Catch: java.security.cert.CertificateException -> L172
            com.bytedance.pangle.g.p r6 = new com.bytedance.pangle.g.p
            r6.<init>(r4, r3)
            r1.add(r6)
            goto L153
        L172:
            r13 = move-exception
            java.lang.SecurityException r14 = new java.lang.SecurityException
            java.lang.String r15 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "Failed to decode certificate #"
            java.lang.String r15 = r0.concat(r15)
            r14.<init>(r15, r13)
            throw r14
        L183:
            boolean r14 = r1.isEmpty()
            if (r14 != 0) goto L1b9
            java.lang.Object r14 = r1.get(r5)
            java.security.cert.X509Certificate r14 = (java.security.cert.X509Certificate) r14
            java.security.PublicKey r14 = r14.getPublicKey()
            byte[] r14 = r14.getEncoded()
            boolean r13 = java.util.Arrays.equals(r13, r14)
            if (r13 == 0) goto L1b1
            java.nio.ByteBuffer r13 = com.bytedance.pangle.g.f.a(r0)
            a(r13)
            int r13 = r1.size()
            java.security.cert.X509Certificate[] r13 = new java.security.cert.X509Certificate[r13]
            java.lang.Object[] r13 = r1.toArray(r13)
            java.security.cert.X509Certificate[] r13 = (java.security.cert.X509Certificate[]) r13
            return r13
        L1b1:
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.String r14 = "Public key mismatch between certificate and signature record"
            r13.<init>(r14)
            throw r13
        L1b9:
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.String r14 = "No certificates listed"
            r13.<init>(r14)
            throw r13
        L1c1:
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.String r14 = "Signature algorithms don't match between digests and signatures records"
            r13.<init>(r14)
            throw r13
        L1c9:
            java.lang.SecurityException r13 = new java.lang.SecurityException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            r14.append(r7)
            java.lang.String r15 = " signature did not verify"
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            r13.<init>(r14)
            throw r13
        L1e0:
            r13 = move-exception
            goto L1e9
        L1e2:
            r13 = move-exception
            goto L1e9
        L1e4:
            r13 = move-exception
            goto L1e9
        L1e6:
            r13 = move-exception
            goto L1e9
        L1e8:
            r13 = move-exception
        L1e9:
            java.lang.SecurityException r14 = new java.lang.SecurityException
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            java.lang.String r0 = "Failed to verify "
            r15.<init>(r0)
            r15.append(r7)
            java.lang.String r0 = " signature"
            r15.append(r0)
            java.lang.String r15 = r15.toString()
            r14.<init>(r15, r13)
            throw r14
    }
}
