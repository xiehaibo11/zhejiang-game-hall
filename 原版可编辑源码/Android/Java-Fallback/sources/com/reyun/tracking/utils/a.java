package com.reyun.tracking.utils;

public class a {
    private static com.reyun.tracking.utils.a m;
    private final java.lang.String a;
    private final int b;
    private final int c;
    private char[] d;
    private byte[] e;
    private javax.crypto.spec.PBEKeySpec f;
    private final java.lang.String g;
    private javax.crypto.SecretKeyFactory h;
    private javax.crypto.SecretKey i;
    private javax.crypto.spec.SecretKeySpec j;
    private byte[] k;
    private javax.crypto.spec.IvParameterSpec l;

    static {
            org.bouncycastle.jce.provider.BouncyCastleProvider r0 = new org.bouncycastle.jce.provider.BouncyCastleProvider     // Catch: java.lang.Exception -> L8
            r0.<init>()     // Catch: java.lang.Exception -> L8
            java.security.Security.addProvider(r0)     // Catch: java.lang.Exception -> L8
        L8:
            return
    }

    private a() {
            r7 = this;
            r7.<init>()
            java.lang.String r0 = "PBKDF2WithHmacSHA1"
            r7.a = r0
            r1 = 10000(0x2710, float:1.4013E-41)
            r7.b = r1
            r2 = 128(0x80, float:1.8E-43)
            r7.c = r2
            r3 = 19
            char[] r3 = new char[r3]
            r3 = {x0072: FILL_ARRAY_DATA , data: [119, 111, 109, 101, 110, 100, 111, 117, 115, 104, 105, 104, 97, 111, 104, 97, 105, 122, 105} // fill-array
            r7.d = r3
            r3 = 16
            byte[] r4 = new byte[r3]
            r4 = {x008a: FILL_ARRAY_DATA , data: [1, 5, 8, 6, 7, 9, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15} // fill-array
            r7.e = r4
            javax.crypto.spec.PBEKeySpec r4 = new javax.crypto.spec.PBEKeySpec
            char[] r5 = r7.d
            byte[] r6 = r7.e
            r4.<init>(r5, r6, r1, r2)
            r7.f = r4
            java.lang.String r1 = "AES/CBC/PKCS7Padding"
            r7.g = r1
            r1 = 0
            r7.h = r1
            r7.i = r1
            r7.j = r1
            byte[] r1 = new byte[r3]
            r1 = {x0096: FILL_ARRAY_DATA , data: [10, 1, 11, 5, 4, 15, 7, 9, 23, 3, 1, 6, 8, 12, 13, 91} // fill-array
            r7.k = r1
            javax.crypto.SecretKeyFactory r0 = javax.crypto.SecretKeyFactory.getInstance(r0)     // Catch: java.security.spec.InvalidKeySpecException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r7.h = r0     // Catch: java.security.spec.InvalidKeySpecException -> L4d java.security.NoSuchAlgorithmException -> L4f
            javax.crypto.spec.PBEKeySpec r1 = r7.f     // Catch: java.security.spec.InvalidKeySpecException -> L4d java.security.NoSuchAlgorithmException -> L4f
            javax.crypto.SecretKey r0 = r0.generateSecret(r1)     // Catch: java.security.spec.InvalidKeySpecException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r7.i = r0     // Catch: java.security.spec.InvalidKeySpecException -> L4d java.security.NoSuchAlgorithmException -> L4f
            goto L58
        L4d:
            r0 = move-exception
            goto L51
        L4f:
            r0 = move-exception
            goto L55
        L51:
            r0.printStackTrace()
            goto L58
        L55:
            r0.printStackTrace()
        L58:
            javax.crypto.SecretKey r0 = r7.i
            byte[] r0 = r0.getEncoded()
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r2 = "AES"
            r1.<init>(r0, r2)
            r7.j = r1
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec
            byte[] r1 = r7.k
            r0.<init>(r1)
            r7.l = r0
            return
    }

    public static com.reyun.tracking.utils.a a() {
            com.reyun.tracking.utils.a r0 = com.reyun.tracking.utils.a.m
            if (r0 != 0) goto Lb
            com.reyun.tracking.utils.a r0 = new com.reyun.tracking.utils.a
            r0.<init>()
            com.reyun.tracking.utils.a.m = r0
        Lb:
            com.reyun.tracking.utils.a r0 = com.reyun.tracking.utils.a.m
            return r0
    }

    private static byte[] a(byte[] r2) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream
            r1.<init>(r0)
            r1.write(r2)
            r1.close()
            byte[] r2 = r0.toByteArray()
            return r2
    }

    public byte[] a(java.lang.String r4) {
            r3 = this;
            javax.crypto.spec.SecretKeySpec r0 = r3.j
            javax.crypto.spec.IvParameterSpec r1 = r3.l
            java.lang.String r2 = "AES/CBC/PKCS7Padding"
            byte[] r4 = r3.a(r2, r0, r1, r4)
            return r4
    }

    public byte[] a(java.lang.String r2, javax.crypto.SecretKey r3, javax.crypto.spec.IvParameterSpec r4, java.lang.String r5) {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            byte[] r5 = r5.getBytes(r0)
            byte[] r5 = a(r5)
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)
            r0 = 1
            r2.init(r0, r3, r4)
            byte[] r2 = r2.doFinal(r5)
            byte[] r2 = org.bouncycastle.util.encoders.Base64.encode(r2)
            return r2
    }
}
