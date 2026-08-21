package com.bianfeng.seppellita.utils;

public class AESUtils {
    private static final java.lang.String MODE = "AES/ECB/NoPadding";

    public AESUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String encrypt(java.lang.String r4, java.lang.String r5) throws java.lang.Exception {
            r0 = 0
            if (r5 != 0) goto L9
            java.lang.String r4 = "Key为空null"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r4)
            return r0
        L9:
            int r1 = r5.length()
            r2 = 16
            if (r1 == r2) goto L17
            java.lang.String r4 = "Key长度不是16位"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r4)
            return r0
        L17:
            byte[] r4 = r4.getBytes()
            java.lang.String r0 = "AES/ECB/NoPadding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)
            int r1 = r0.getBlockSize()
            int r2 = r4.length
            int r3 = r2 % r1
            if (r3 == 0) goto L2c
            int r1 = r1 - r3
            int r2 = r2 + r1
        L2c:
            byte[] r1 = new byte[r2]
            int r2 = r4.length
            r3 = 0
            java.lang.System.arraycopy(r4, r3, r1, r3, r2)
            r4 = 1
            javax.crypto.spec.SecretKeySpec r5 = getSecretKeySpec(r5)
            r0.init(r4, r5)
            byte[] r4 = r0.doFinal(r1)
            java.lang.String r4 = com.bianfeng.ymnsdk.utilslib.security.Base64.encode(r4)
            return r4
    }

    private static javax.crypto.spec.SecretKeySpec getSecretKeySpec(java.lang.String r3) {
            byte[] r3 = r3.getBytes()
            int r0 = r3.length
            int r1 = r0 % 16
            if (r1 == 0) goto Lc
            int r1 = 16 - r1
            int r0 = r0 + r1
        Lc:
            byte[] r0 = new byte[r0]
            int r1 = r3.length
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r0, r2, r1)
            javax.crypto.spec.SecretKeySpec r3 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r1 = "AES"
            r3.<init>(r0, r1)
            return r3
    }
}
