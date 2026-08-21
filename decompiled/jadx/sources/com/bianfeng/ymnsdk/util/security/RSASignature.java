package com.bianfeng.ymnsdk.util.security;

import com.alipay.sdk.m.n.d;
import java.security.KeyFactory;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.Signature;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.X509EncodedKeySpec;

/* JADX INFO: loaded from: classes.dex */
public class RSASignature {
    public static final String PUBLICKEY = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDyesxvCKEiWA2ie4QpGN9xCtI8q6HqmspYl+4aN8YRTS1adT4pxrvw3ZXMleBA+AFL9ZZzt40Vkgq893wO4jT23UdoSkLfRajHMfCyKZP7cxmrok7YSGFiyBdsucJ+IbbE//H+egha6ixbv14TO6ObCBjn6EVjLqccrGOUVoikbwIDAQAB";
    public static final String SIGN_ALGORITHMS = "SHA1WithRSA";

    public String sign(String content, String privateKey) {
        return sign(content, privateKey, "UTF-8");
    }

    public String sign(String content, String privateKey, String encode) {
        try {
            PKCS8EncodedKeySpec priPKCS8 = new PKCS8EncodedKeySpec(Base64.decode(privateKey));
            KeyFactory keyf = KeyFactory.getInstance(d.f1221a);
            PrivateKey priKey = keyf.generatePrivate(priPKCS8);
            Signature signature = Signature.getInstance(SIGN_ALGORITHMS);
            signature.initSign(priKey);
            signature.update(content.getBytes(encode));
            return Base64.encode(signature.sign());
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public boolean doCheck(String content, String sign) {
        return verify(content, sign, PUBLICKEY, "UTF-8");
    }

    public boolean doCheck(String content, String sign, String publicKey) {
        return verify(content, sign, publicKey, "UTF-8");
    }

    public boolean verify(String content, String sign, String ali_public_key, String input_charset) {
        try {
            KeyFactory keyFactory = KeyFactory.getInstance(d.f1221a);
            byte[] encodedKey = Base64.decode(ali_public_key);
            PublicKey pubKey = keyFactory.generatePublic(new X509EncodedKeySpec(encodedKey));
            Signature signature = Signature.getInstance(SIGN_ALGORITHMS);
            signature.initVerify(pubKey);
            signature.update(content.getBytes(input_charset));
            boolean bverify = signature.verify(Base64.decode(sign));
            return bverify;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
