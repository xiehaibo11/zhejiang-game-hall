package com.bianfeng.ymnsdk.util.security;

import java.security.KeyFactory;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.Signature;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.X509EncodedKeySpec;

public class RSASignature {
    public static final String PUBLICKEY = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDyesxvCKEiWA2ie4QpGN9xCtI8q6HqmspYl+4aN8YRTS1adT4pxrvw3ZXMleBA+AFL9ZZzt40Vkgq893wO4jT23UdoSkLfRajHMfCyKZP7cxmrok7YSGFiyBdsucJ+IbbE//H+egha6ixbv14TO6ObCBjn6EVjLqccrGOUVoikbwIDAQAB";
    public static final String SIGN_ALGORITHMS = "SHA1WithRSA";

    public RSASignature() {
    }

    public boolean doCheck(String r3, String r4) {
        return verify(r3, r4, PUBLICKEY, "UTF-8");
    }

    public String sign(String r2, String r3) {
        return sign(r2, r3, "UTF-8");
    }

    public boolean verify(String r3, String r4, String r5, String r6) {
        PublicKey r52 = KeyFactory.getInstance("RSA").generatePublic(new X509EncodedKeySpec(Base64.decode(r5)));     // Catch: Exception -> L4
        Signature r0 = Signature.getInstance(SIGN_ALGORITHMS);     // Catch: Exception -> L4
        r0.initVerify(r52);     // Catch: Exception -> L4
        r0.update(r3.getBytes(r6));     // Catch: Exception -> L4
        return r0.verify(Base64.decode(r4));
    L4:
        e = move-exception;
        e.printStackTrace();
        return false;
    }

    public boolean doCheck(String r2, String r3, String r4) {
        return verify(r2, r3, r4, "UTF-8");
    }

    public String sign(String r2, String r3, String r4) {
        PKCS8EncodedKeySpec r0 = new PKCS8EncodedKeySpec(Base64.decode(r3));     // Catch: Exception -> L4
        PrivateKey r32 = KeyFactory.getInstance("RSA").generatePrivate(r0);     // Catch: Exception -> L4
        Signature r02 = Signature.getInstance(SIGN_ALGORITHMS);     // Catch: Exception -> L4
        r02.initSign(r32);     // Catch: Exception -> L4
        r02.update(r2.getBytes(r4));     // Catch: Exception -> L4
        return Base64.encode(r02.sign());
    L4:
        e = move-exception;
        e.printStackTrace();
        return null;
    }
}
