package com.vivo.push.util;

public final class f {
    public static java.lang.String a(byte[] r4) {
            int r0 = r4.length
            char[] r1 = new char[r0]
            r2 = 0
        L4:
            if (r2 >= r0) goto L10
            r3 = r4[r2]
            r3 = r3 ^ 16
            char r3 = (char) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L4
        L10:
            java.lang.String r4 = new java.lang.String
            r4.<init>(r1)
            return r4
    }

    public static byte[] a(java.lang.String r3, java.lang.String r4, byte[] r5) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r1 = "utf-8"
            byte[] r4 = r4.getBytes(r1)
            java.lang.String r2 = "AES"
            r0.<init>(r4, r2)
            java.lang.String r4 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec
            byte[] r3 = r3.getBytes(r1)
            r2.<init>(r3)
            r3 = 2
            r4.init(r3, r0, r2)
            byte[] r3 = r4.doFinal(r5)
            return r3
    }
}
