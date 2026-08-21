package com.xiaomi.push.service;

public class bs {
    private static java.security.interfaces.RSAPublicKey a;
    private static final byte[] a = null;

    static {
            r0 = 162(0xa2, float:2.27E-43)
            byte[] r0 = new byte[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [48, -127, -97, 48, 13, 6, 9, 42, -122, 72, -122, -9, 13, 1, 1, 1, 5, 0, 3, -127, -115, 0, 48, -127, -119, 2, -127, -127, 0, -109, -38, -114, 26, -72, 78, 16, 70, -90, 113, -30, 36, 85, -3, -43, 123, 61, -98, 4, -16, 67, 19, -90, -73, -5, -89, 36, 44, -27, 59, -123, 72, -73, -48, 49, 13, 16, 50, -27, -82, 18, -28, 84, 0, -41, 16, 69, -39, 7, 82, 56, 79, -37, 40, 85, 107, 98, 33, 123, -34, -49, 111, -11, 49, 28, 117, -74, 114, -122, -29, -84, 82, 22, -122, 42, -40, -79, 18, -116, -42, 101, -70, 44, 11, 62, -49, -3, -22, -2, 66, 90, -116, -75, -99, 34, 121, 69, 10, -81, -57, 89, -23, -36, -60, -81, 67, -114, 10, 79, 100, 29, 47, -24, 110, -66, -7, 87, 16, -125, -91, -43, -103, 67, -20, 41, 117, -37, -11, 2, 3, 1, 0, 1} // fill-array
            com.xiaomi.push.service.bs.a = r0
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.lang.Throwable -> L1f
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Throwable -> L1f
            byte[] r2 = com.xiaomi.push.service.bs.a     // Catch: java.lang.Throwable -> L1f
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1f
            java.security.PublicKey r0 = r0.generatePublic(r1)     // Catch: java.lang.Throwable -> L1f
            java.security.interfaces.RSAPublicKey r0 = (java.security.interfaces.RSAPublicKey) r0     // Catch: java.lang.Throwable -> L1f
            com.xiaomi.push.service.bs.a = r0     // Catch: java.lang.Throwable -> L1f
            goto L24
        L1f:
            java.lang.String r0 = "rsa key pair init failure!!!"
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L24:
            return
    }

    public static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Throwable -> L2d
            java.security.interfaces.RSAPublicKey r2 = com.xiaomi.push.service.bs.a     // Catch: java.lang.Throwable -> L2d
            r3 = 1
            r0.init(r3, r2)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "UTF-8"
            byte[] r4 = r4.getBytes(r2)     // Catch: java.lang.Throwable -> L2d
            java.security.interfaces.RSAPublicKey r2 = com.xiaomi.push.service.bs.a     // Catch: java.lang.Throwable -> L2d
            java.math.BigInteger r2 = r2.getModulus()     // Catch: java.lang.Throwable -> L2d
            int r2 = r2.bitLength()     // Catch: java.lang.Throwable -> L2d
            byte[] r4 = a(r0, r3, r4, r2)     // Catch: java.lang.Throwable -> L2d
            r0 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r4, r0)     // Catch: java.lang.Throwable -> L2d
        L2d:
            return r1
    }

    private static byte[] a(javax.crypto.Cipher r4, int r5, byte[] r6, int r7) {
            if (r4 == 0) goto L3c
            if (r6 != 0) goto L5
            goto L3c
        L5:
            r0 = 2
            int r7 = r7 / 8
            if (r5 != r0) goto Lb
            goto Ld
        Lb:
            int r7 = r7 + (-11)
        Ld:
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L35
            r5.<init>()     // Catch: java.lang.Exception -> L35
            r0 = 0
            r1 = r0
            r2 = r1
        L15:
            int r3 = r6.length     // Catch: java.lang.Exception -> L35
            if (r3 <= r1) goto L30
            int r3 = r6.length     // Catch: java.lang.Exception -> L35
            int r3 = r3 - r1
            if (r3 <= r7) goto L21
            byte[] r1 = r4.doFinal(r6, r1, r7)     // Catch: java.lang.Exception -> L35
            goto L27
        L21:
            int r3 = r6.length     // Catch: java.lang.Exception -> L35
            int r3 = r3 - r1
            byte[] r1 = r4.doFinal(r6, r1, r3)     // Catch: java.lang.Exception -> L35
        L27:
            int r3 = r1.length     // Catch: java.lang.Exception -> L35
            r5.write(r1, r0, r3)     // Catch: java.lang.Exception -> L35
            int r2 = r2 + 1
            int r1 = r2 * r7
            goto L15
        L30:
            byte[] r4 = r5.toByteArray()     // Catch: java.lang.Exception -> L35
            return r4
        L35:
            r4 = move-exception
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            r5.<init>(r4)
            throw r5
        L3c:
            r4 = 0
            return r4
    }
}
