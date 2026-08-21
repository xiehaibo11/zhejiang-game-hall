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

    public boolean doCheck(String str, String str2) {
        return verify(str, str2, PUBLICKEY, "UTF-8");
    }

    public String sign(String str, String str2) {
        return sign(str, str2, "UTF-8");
    }

    public boolean verify(String str, String str2, String str3, String str4) {
        try {
            PublicKey publicKeyGeneratePublic = KeyFactory.getInstance("RSA").generatePublic(new X509EncodedKeySpec(Base64.decode(str3)));
            Signature signature = Signature.getInstance(SIGN_ALGORITHMS);
            signature.initVerify(publicKeyGeneratePublic);
            signature.update(str.getBytes(str4));
            return signature.verify(Base64.decode(str2));
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public boolean doCheck(String str, String str2, String str3) {
        return verify(str, str2, str3, "UTF-8");
    }

    public String sign(String str, String str2, String str3) {
        try {
            PrivateKey privateKeyGeneratePrivate = KeyFactory.getInstance("RSA").generatePrivate(new PKCS8EncodedKeySpec(Base64.decode(str2)));
            Signature signature = Signature.getInstance(SIGN_ALGORITHMS);
            signature.initSign(privateKeyGeneratePrivate);
            signature.update(str.getBytes(str3));
            return Base64.encode(signature.sign());
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
