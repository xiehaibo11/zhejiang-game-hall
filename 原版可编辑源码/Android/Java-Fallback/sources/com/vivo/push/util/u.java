package com.vivo.push.util;

public final class u {
    private static java.lang.String a = "RSA";

    static {
            return
    }

    public static java.lang.String a(java.security.Key r1) {
            byte[] r1 = r1.getEncoded()
            r0 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
    }

    public static java.security.PublicKey a(java.lang.String r2) {
            r0 = 2
            byte[] r2 = android.util.Base64.decode(r2, r0)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            java.lang.String r0 = com.vivo.push.util.u.a     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            r1.<init>(r2)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            java.security.PublicKey r2 = r0.generatePublic(r1)     // Catch: java.lang.NullPointerException -> L15 java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L25
            return r2
        L15:
            java.lang.Exception r2 = new java.lang.Exception
            java.lang.String r0 = "公钥数据为空"
            r2.<init>(r0)
            throw r2
        L1d:
            java.lang.Exception r2 = new java.lang.Exception
            java.lang.String r0 = "公钥非法"
            r2.<init>(r0)
            throw r2
        L25:
            java.lang.Exception r2 = new java.lang.Exception
            java.lang.String r0 = "无此算法"
            r2.<init>(r0)
            throw r2
    }

    public static boolean a(byte[] r1, java.security.PublicKey r2, byte[] r3) {
            java.lang.String r0 = "MD5withRSA"
            java.security.Signature r0 = java.security.Signature.getInstance(r0)
            r0.initVerify(r2)
            r0.update(r1)
            boolean r1 = r0.verify(r3)
            return r1
    }
}
