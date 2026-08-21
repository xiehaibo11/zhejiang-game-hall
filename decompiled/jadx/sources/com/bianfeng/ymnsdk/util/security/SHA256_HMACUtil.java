package com.bianfeng.ymnsdk.util.security;

import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: classes.dex */
public class SHA256_HMACUtil {
    public byte[] sha256_HMAC(String message, String secret) {
        try {
            Mac sha256_HMAC = Mac.getInstance("HmacSHA256");
            SecretKeySpec secret_key = new SecretKeySpec(secret.getBytes(), "HmacSHA256");
            sha256_HMAC.init(secret_key);
            return sha256_HMAC.doFinal(message.getBytes());
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("Error HmacSHA256 ===========" + e.getMessage());
            return null;
        }
    }
}
