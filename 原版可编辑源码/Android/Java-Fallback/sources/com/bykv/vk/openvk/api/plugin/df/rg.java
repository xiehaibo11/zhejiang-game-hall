package com.bykv.vk.openvk.api.plugin.df;

public class rg {
    public static java.lang.String rg(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            byte[] r5 = r5.getBytes()
            java.lang.String r1 = "AES"
            r0.<init>(r5, r1)
            java.lang.String r5 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5)     // Catch: java.lang.Throwable -> L2e
            r1 = 1
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L2e
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L2e
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L2e
            r5.init(r1, r0, r2)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = "utf-8"
            byte[] r3 = r3.getBytes(r4)     // Catch: java.lang.Throwable -> L2e
            byte[] r3 = r5.doFinal(r3)     // Catch: java.lang.Throwable -> L2e
            r4 = 0
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: java.lang.Throwable -> L2e
            return r3
        L2e:
            r3 = 0
            return r3
    }
}
