package com.cmic.gen.sdk.e;

public class a {
    public static java.lang.String a(byte[] r3, java.lang.String r4, byte[] r5) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = "AES"
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L26
            r1 = 1
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L26
            r2.<init>(r5)     // Catch: java.lang.Exception -> L26
            r3.init(r1, r0, r2)     // Catch: java.lang.Exception -> L26
            java.lang.String r5 = "utf-8"
            byte[] r4 = r4.getBytes(r5)     // Catch: java.lang.Exception -> L26
            byte[] r3 = r3.doFinal(r4)     // Catch: java.lang.Exception -> L26
            r4 = 0
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: java.lang.Exception -> L26
            return r3
        L26:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }

    public static byte[] a() {
            r0 = 16
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r1.nextBytes(r0)
            return r0
    }

    public static java.lang.String b(byte[] r3, java.lang.String r4, byte[] r5) {
            r0 = 0
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Exception -> L27
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "AES"
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L27
            r1 = 2
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L27
            r2.<init>(r5)     // Catch: java.lang.Exception -> L27
            r3.init(r1, r0, r2)     // Catch: java.lang.Exception -> L27
            byte[] r3 = r3.doFinal(r4)     // Catch: java.lang.Exception -> L27
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L27
            java.lang.String r5 = "utf-8"
            r4.<init>(r3, r5)     // Catch: java.lang.Exception -> L27
            return r4
        L27:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }
}
