package com.bianfeng.ymnsdk.util.security;

import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

public class SHA256_HMACUtil {
    public SHA256_HMACUtil() {
    }

    public byte[] sha256_HMAC(String r4, String r5) {
        Mac r1 = Mac.getInstance("HmacSHA256");     // Catch: Exception -> L5
        r1.init(new SecretKeySpec(r5.getBytes(), "HmacSHA256"));     // Catch: Exception -> L5
        return r1.doFinal(r4.getBytes());
    L5:
        e = move-exception;
        e.printStackTrace();
        System.out.println("Error HmacSHA256 ===========" + e.getMessage());
        return null;
    }
}
