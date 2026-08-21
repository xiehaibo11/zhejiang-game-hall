package com.bianfeng.ymnsdk.utilslib.security;

public class RSAEncryptionUtils {
    public RSAEncryptionUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static byte[] decrypt(byte[] r2, java.security.PrivateKey r3) throws java.lang.Exception {
            java.lang.String r0 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)
            r1 = 2
            r0.init(r1, r3)
            byte[] r1 = r0.doFinal(r2)
            return r1
    }

    private static byte[] encrypt(byte[] r2, java.security.PublicKey r3) throws java.lang.Exception {
            java.lang.String r0 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)
            r1 = 1
            r0.init(r1, r3)
            byte[] r1 = r0.doFinal(r2)
            return r1
    }

    public static java.lang.String getEncryptStringAndBase64(java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCW4Yx58hmtadmu6d1HzEyRqO0Hik7JGyXc7ibxBokIUSeUTJcbksGaartCzfzXZzHF5zhuXosf3HFzPekJqf7HxIdXUAC4QWlgNT+WZ91cW4H5r0tObhuBges3n2xk+eEi1aowTR8WTOvfKPeYuLw1zG8WrMnugQHbp2UMZf7h4wIDAQAB"
            if (r5 == 0) goto La
            boolean r1 = r5.isEmpty()
            if (r1 == 0) goto Lb
        La:
            r5 = r0
        Lb:
            java.security.PublicKey r1 = loadPublicKey(r5)     // Catch: java.lang.Exception -> L1e
            java.lang.String r2 = "UTF-8"
            byte[] r2 = r6.getBytes(r2)     // Catch: java.lang.Exception -> L1e
            byte[] r3 = encrypt(r2, r1)     // Catch: java.lang.Exception -> L1e
            java.lang.String r4 = com.bianfeng.ymnsdk.utilslib.security.Base64.encode(r3)     // Catch: java.lang.Exception -> L1e
            return r4
        L1e:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    private static java.security.PrivateKey loadPrivateKey(java.lang.String r4) throws java.lang.Exception {
            byte[] r0 = com.bianfeng.ymnsdk.utilslib.security.Base64.decode(r4)
            java.security.spec.PKCS8EncodedKeySpec r1 = new java.security.spec.PKCS8EncodedKeySpec
            r1.<init>(r0)
            java.lang.String r2 = "RSA"
            java.security.KeyFactory r2 = java.security.KeyFactory.getInstance(r2)
            java.security.PrivateKey r3 = r2.generatePrivate(r1)
            return r3
    }

    private static java.security.PublicKey loadPublicKey(java.lang.String r4) throws java.lang.Exception {
            byte[] r0 = com.bianfeng.ymnsdk.utilslib.security.Base64.decode(r4)
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec
            r1.<init>(r0)
            java.lang.String r2 = "RSA"
            java.security.KeyFactory r2 = java.security.KeyFactory.getInstance(r2)
            java.security.PublicKey r3 = r2.generatePublic(r1)
            return r3
    }
}
