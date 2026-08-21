package com.igexin.b.a.c;

public class a {
    private static byte a(char r1) {
            java.lang.String r0 = "0123456789ABCDEF"
            int r1 = r0.indexOf(r1)
            byte r1 = (byte) r1
            return r1
    }

    public static java.lang.String a(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = ""
            r0.<init>(r1)
            if (r6 == 0) goto L2f
            int r1 = r6.length
            if (r1 > 0) goto Ld
            goto L2f
        Ld:
            r1 = 0
            r2 = r1
        Lf:
            int r3 = r6.length
            if (r2 >= r3) goto L2a
            r3 = r6[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            int r4 = r3.length()
            r5 = 2
            if (r4 >= r5) goto L24
            r0.append(r1)
        L24:
            r0.append(r3)
            int r2 = r2 + 1
            goto Lf
        L2a:
            java.lang.String r6 = r0.toString()
            return r6
        L2f:
            r6 = 0
            return r6
    }

    public static javax.crypto.CipherOutputStream a(java.io.File r7, javax.crypto.spec.SecretKeySpec r8) {
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            java.lang.String r1 = "rw"
            r0.<init>(r7, r1)
            r7 = 16
            byte[] r7 = new byte[r7]
            long r1 = r0.length()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L30
            byte[] r1 = r8.getEncoded()
            java.lang.String r1 = a(r1)
            byte[] r1 = b(r1)
            r0.write(r1)
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r1.nextBytes(r7)
            r0.write(r7)
            goto L53
        L30:
            long r1 = r0.length()
            r5 = 144(0x90, double:7.1E-322)
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 < 0) goto L71
            long r1 = r0.length()
            r5 = 16
            long r1 = r1 % r5
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L48
            a(r0)
        L48:
            long r1 = r0.length()
            long r1 = r1 - r5
            r0.seek(r1)
            r0.read(r7)
        L53:
            java.lang.String r1 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)
            r2 = 1
            javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec
            r3.<init>(r7)
            r1.init(r2, r8, r3)
            javax.crypto.CipherOutputStream r7 = new javax.crypto.CipherOutputStream
            java.io.FileOutputStream r8 = new java.io.FileOutputStream
            java.io.FileDescriptor r0 = r0.getFD()
            r8.<init>(r0)
            r7.<init>(r8, r1)
            return r7
        L71:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Invalid file length (need 2 blocks for iv and data)"
            r7.<init>(r8)
            throw r7
    }

    public static void a() {
            java.lang.String r0 = "AES"
            javax.crypto.KeyGenerator r0 = javax.crypto.KeyGenerator.getInstance(r0)
            r1 = 128(0x80, float:1.8E-43)
            r0.init(r1)
            javax.crypto.SecretKey r0 = r0.generateKey()
            byte[] r0 = r0.getEncoded()
            com.igexin.push.core.d.ao = r0
            android.content.Context r0 = com.igexin.push.core.d.g
            byte[] r1 = com.igexin.push.core.d.ao
            byte[] r1 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r1)
            java.lang.String r1 = a(r1)
            r2 = 0
            java.lang.String[] r2 = new java.lang.String[r2]
            java.lang.String r3 = "logkey2"
            com.igexin.push.util.k.b(r0, r3, r1, r2)
            return
    }

    public static void a(java.io.RandomAccessFile r4) {
            long r0 = r4.length()
            r2 = 16
            long r0 = r0 % r2
            int r0 = (int) r0
            long r0 = (long) r0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L1c
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto L14
            goto L1c
        L14:
            long r2 = r4.length()
            long r2 = r2 - r0
            r4.setLength(r2)
        L1c:
            return
    }

    public static byte[] a(java.lang.String r5) {
            if (r5 == 0) goto L38
            java.lang.String r0 = ""
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto Lb
            goto L38
        Lb:
            java.lang.String r5 = r5.toUpperCase()
            int r0 = r5.length()
            int r0 = r0 / 2
            char[] r5 = r5.toCharArray()
            byte[] r1 = new byte[r0]
            r2 = 0
        L1c:
            if (r2 >= r0) goto L37
            int r3 = r2 * 2
            char r4 = r5[r3]
            byte r4 = a(r4)
            int r4 = r4 << 4
            int r3 = r3 + 1
            char r3 = r5[r3]
            byte r3 = a(r3)
            r3 = r3 | r4
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1c
        L37:
            return r1
        L38:
            r5 = 0
            return r5
    }

    public static byte[] b() {
            byte[] r0 = com.igexin.push.core.d.ao
            if (r0 != 0) goto L27
            android.content.Context r0 = com.igexin.push.core.d.g
            r1 = 0
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.String r2 = "logkey2"
            java.lang.String r3 = ""
            java.lang.Object r0 = com.igexin.push.util.k.c(r0, r2, r3, r1)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1b
            r0 = 0
            return r0
        L1b:
            byte[] r0 = a(r0)
            java.lang.String r1 = com.igexin.push.core.d.E
            byte[] r0 = com.igexin.b.a.a.a.c(r0, r1)
            com.igexin.push.core.d.ao = r0
        L27:
            byte[] r0 = com.igexin.push.core.d.ao
            return r0
    }

    private static byte[] b(java.lang.String r3) {
            java.lang.String r0 = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCzbMQ22qV6umuPXYWXEOGdlpJR\nBWMP68/ArS7XG8+7GmRbWMW1HOMLOOdwuIfPFp9QiwOshG0mYXlm1ecQ/fCXhRMW\nfh+OMCoBdl7vnCpoDYPmjYQBkm9fRW6oej33UhZtlnTZjECAsyC2Eybha7jg3Lft\ngYVnwaPShTmv5+Z9SQIDAQAB"
            java.security.interfaces.RSAPublicKey r0 = c(r0)
            java.lang.String r1 = "RSA/ECB/OAEPWithSHA1AndMGF1Padding"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)
            r2 = 1
            r1.init(r2, r0)
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)
            byte[] r3 = r1.doFinal(r3)
            return r3
    }

    private static java.security.interfaces.RSAPublicKey c(java.lang.String r2) {
            r0 = 0
            byte[] r2 = com.igexin.push.util.d.a(r2, r0)
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec
            r1.<init>(r2)
            java.security.PublicKey r2 = r0.generatePublic(r1)
            java.security.interfaces.RSAPublicKey r2 = (java.security.interfaces.RSAPublicKey) r2
            return r2
    }
}
