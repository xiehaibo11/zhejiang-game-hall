package com.heytap.mcssdk.utils;

public abstract class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "DES"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)
            java.security.Key r3 = a(r3)
            r1 = 2
            r0.init(r1, r3)
            r3 = 0
            byte[] r2 = android.util.Base64.decode(r2, r3)
            byte[] r2 = r0.doFinal(r2)
            java.lang.String r3 = new java.lang.String
            java.nio.charset.Charset r0 = java.nio.charset.Charset.defaultCharset()
            r3.<init>(r2, r0)
            java.lang.String r2 = r3.trim()
            return r2
    }

    private static java.security.Key a(java.lang.String r2) {
            javax.crypto.spec.DESKeySpec r0 = new javax.crypto.spec.DESKeySpec
            r1 = 0
            byte[] r2 = android.util.Base64.decode(r2, r1)
            r0.<init>(r2)
            java.lang.String r2 = "DES"
            javax.crypto.SecretKeyFactory r2 = javax.crypto.SecretKeyFactory.getInstance(r2)
            javax.crypto.SecretKey r2 = r2.generateSecret(r0)
            return r2
    }
}
