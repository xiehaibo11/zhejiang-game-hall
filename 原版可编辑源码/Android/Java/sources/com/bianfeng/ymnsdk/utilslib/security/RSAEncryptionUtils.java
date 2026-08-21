package com.bianfeng.ymnsdk.utilslib.security;

import com.alipay.sdk.m.n.d;
import java.security.KeyFactory;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.X509EncodedKeySpec;
import javax.crypto.Cipher;

public class RSAEncryptionUtils {
    private static PublicKey loadPublicKey(String publicKeyStr) throws Exception {
        byte[] publicKeyBytes = Base64.decode(publicKeyStr);
        X509EncodedKeySpec spec = new X509EncodedKeySpec(publicKeyBytes);
        KeyFactory keyFactory = KeyFactory.getInstance(d.a);
        return keyFactory.generatePublic(spec);
    }

    private static PrivateKey loadPrivateKey(String privateKeyStr) throws Exception {
        byte[] privateKeyBytes = Base64.decode(privateKeyStr);
        PKCS8EncodedKeySpec spec = new PKCS8EncodedKeySpec(privateKeyBytes);
        KeyFactory keyFactory = KeyFactory.getInstance(d.a);
        return keyFactory.generatePrivate(spec);
    }

    private static byte[] encrypt(byte[] data, PublicKey publicKey) throws Exception {
        Cipher cipher = Cipher.getInstance("RSA/ECB/PKCS1Padding");
        cipher.init(1, publicKey);
        return cipher.doFinal(data);
    }

    private static byte[] decrypt(byte[] encryptedData, PrivateKey privateKey) throws Exception {
        Cipher cipher = Cipher.getInstance("RSA/ECB/PKCS1Padding");
        cipher.init(2, privateKey);
        return cipher.doFinal(encryptedData);
    }

    public static String getEncryptStringAndBase64(String pubicKey, String contentString) {
        if (pubicKey == null || pubicKey.isEmpty()) {
            pubicKey = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCW4Yx58hmtadmu6d1HzEyRqO0Hik7JGyXc7ibxBokIUSeUTJcbksGaartCzfzXZzHF5zhuXosf3HFzPekJqf7HxIdXUAC4QWlgNT+WZ91cW4H5r0tObhuBges3n2xk+eEi1aowTR8WTOvfKPeYuLw1zG8WrMnugQHbp2UMZf7h4wIDAQAB";
        }
        try {
            PublicKey publicKey = loadPublicKey(pubicKey);
            byte[] data = contentString.getBytes("UTF-8");
            byte[] encryptedData = encrypt(data, publicKey);
            String encryptedString = Base64.encode(encryptedData);
            return encryptedString;
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }
}
