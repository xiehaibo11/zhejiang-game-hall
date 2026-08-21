package com.xiaomi.push;

public class i {
    private static final byte[] a = null;

    static {
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [100, 23, 84, 114, 72, 0, 4, 97, 73, 97, 2, 52, 84, 102, 18, 32} // fill-array
            com.xiaomi.push.i.a = r0
            return
    }

    private static javax.crypto.Cipher a(byte[] r2, int r3) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r1 = "AES"
            r0.<init>(r2, r1)
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec
            byte[] r1 = com.xiaomi.push.i.a
            r2.<init>(r1)
            java.lang.String r1 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)
            r1.init(r3, r0, r2)
            return r1
    }

    public static byte[] a(byte[] r1, byte[] r2) {
            r0 = 2
            javax.crypto.Cipher r1 = a(r1, r0)
            byte[] r1 = r1.doFinal(r2)
            return r1
    }

    public static byte[] b(byte[] r1, byte[] r2) {
            r0 = 1
            javax.crypto.Cipher r1 = a(r1, r0)
            byte[] r1 = r1.doFinal(r2)
            return r1
    }
}
