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
            boolean r0 = r2.verify(r3, r4, r0, r1)
            return r0
    }

    public boolean doCheck(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            boolean r0 = r1.verify(r2, r3, r4, r0)
            return r0
    }

    public java.lang.String sign(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r0 = r1.sign(r2, r3, r0)
            return r0
    }

    public java.lang.String sign(java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            r5 = this;
            java.security.spec.PKCS8EncodedKeySpec r0 = new java.security.spec.PKCS8EncodedKeySpec     // Catch: java.lang.Exception -> L2c
            byte[] r1 = com.bianfeng.ymnsdk.util.security.Base64.decode(r7)     // Catch: java.lang.Exception -> L2c
            r0.<init>(r1)     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = "RSA"
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)     // Catch: java.lang.Exception -> L2c
            java.security.PrivateKey r2 = r1.generatePrivate(r0)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "SHA1WithRSA"
            java.security.Signature r3 = java.security.Signature.getInstance(r3)     // Catch: java.lang.Exception -> L2c
            r3.initSign(r2)     // Catch: java.lang.Exception -> L2c
            byte[] r4 = r6.getBytes(r8)     // Catch: java.lang.Exception -> L2c
            r3.update(r4)     // Catch: java.lang.Exception -> L2c
            byte[] r4 = r3.sign()     // Catch: java.lang.Exception -> L2c
            java.lang.String r4 = com.bianfeng.ymnsdk.util.security.Base64.encode(r4)     // Catch: java.lang.Exception -> L2c
            return r4
        L2c:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public boolean verify(java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r5 = this;
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.lang.Exception -> L2c
            byte[] r1 = com.bianfeng.ymnsdk.util.security.Base64.decode(r8)     // Catch: java.lang.Exception -> L2c
            java.security.spec.X509EncodedKeySpec r2 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Exception -> L2c
            r2.<init>(r1)     // Catch: java.lang.Exception -> L2c
            java.security.PublicKey r2 = r0.generatePublic(r2)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "SHA1WithRSA"
            java.security.Signature r3 = java.security.Signature.getInstance(r3)     // Catch: java.lang.Exception -> L2c
            r3.initVerify(r2)     // Catch: java.lang.Exception -> L2c
            byte[] r4 = r6.getBytes(r9)     // Catch: java.lang.Exception -> L2c
            r3.update(r4)     // Catch: java.lang.Exception -> L2c
            byte[] r4 = com.bianfeng.ymnsdk.util.security.Base64.decode(r7)     // Catch: java.lang.Exception -> L2c
            boolean r4 = r3.verify(r4)     // Catch: java.lang.Exception -> L2c
            return r4
        L2c:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }
}
