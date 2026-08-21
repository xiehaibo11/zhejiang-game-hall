package com.bianfeng.ymnsdk.util.security;

public class RSASignature {
    public static final java.lang.String PUBLICKEY = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDyesxvCKEiWA2ie4QpGN9xCtI8q6HqmspYl+4aN8YRTS1adT4pxrvw3ZXMleBA+AFL9ZZzt40Vkgq893wO4jT23UdoSkLfRajHMfCyKZP7cxmrok7YSGFiyBdsucJ+IbbE//H+egha6ixbv14TO6ObCBjn6EVjLqccrGOUVoikbwIDAQAB";
    public static final java.lang.String SIGN_ALGORITHMS = "SHA1WithRSA";

    public RSASignature() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean doCheck(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDyesxvCKEiWA2ie4QpGN9xCtI8q6HqmspYl+4aN8YRTS1adT4pxrvw3ZXMleBA+AFL9ZZzt40Vkgq893wO4jT23UdoSkLfRajHMfCyKZP7cxmrok7YSGFiyBdsucJ+IbbE//H+egha6ixbv14TO6ObCBjn6EVjLqccrGOUVoikbwIDAQAB"
            java.lang.String r1 = "UTF-8"
            boolean r3 = r2.verify(r3, r4, r0, r1)
            return r3
    }

    public boolean doCheck(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            boolean r2 = r1.verify(r2, r3, r4, r0)
            return r2
    }

    public java.lang.String sign(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r2 = r1.sign(r2, r3, r0)
            return r2
    }

    public java.lang.String sign(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.security.spec.PKCS8EncodedKeySpec r0 = new java.security.spec.PKCS8EncodedKeySpec     // Catch: java.lang.Exception -> L2c
            byte[] r3 = com.bianfeng.ymnsdk.util.security.Base64.decode(r3)     // Catch: java.lang.Exception -> L2c
            r0.<init>(r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "RSA"
            java.security.KeyFactory r3 = java.security.KeyFactory.getInstance(r3)     // Catch: java.lang.Exception -> L2c
            java.security.PrivateKey r3 = r3.generatePrivate(r0)     // Catch: java.lang.Exception -> L2c
            java.lang.String r0 = "SHA1WithRSA"
            java.security.Signature r0 = java.security.Signature.getInstance(r0)     // Catch: java.lang.Exception -> L2c
            r0.initSign(r3)     // Catch: java.lang.Exception -> L2c
            byte[] r2 = r2.getBytes(r4)     // Catch: java.lang.Exception -> L2c
            r0.update(r2)     // Catch: java.lang.Exception -> L2c
            byte[] r2 = r0.sign()     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = com.bianfeng.ymnsdk.util.security.Base64.encode(r2)     // Catch: java.lang.Exception -> L2c
            return r2
        L2c:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public boolean verify(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.lang.Exception -> L2c
            byte[] r5 = com.bianfeng.ymnsdk.util.security.Base64.decode(r5)     // Catch: java.lang.Exception -> L2c
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Exception -> L2c
            r1.<init>(r5)     // Catch: java.lang.Exception -> L2c
            java.security.PublicKey r5 = r0.generatePublic(r1)     // Catch: java.lang.Exception -> L2c
            java.lang.String r0 = "SHA1WithRSA"
            java.security.Signature r0 = java.security.Signature.getInstance(r0)     // Catch: java.lang.Exception -> L2c
            r0.initVerify(r5)     // Catch: java.lang.Exception -> L2c
            byte[] r3 = r3.getBytes(r6)     // Catch: java.lang.Exception -> L2c
            r0.update(r3)     // Catch: java.lang.Exception -> L2c
            byte[] r3 = com.bianfeng.ymnsdk.util.security.Base64.decode(r4)     // Catch: java.lang.Exception -> L2c
            boolean r3 = r0.verify(r3)     // Catch: java.lang.Exception -> L2c
            return r3
        L2c:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }
}
