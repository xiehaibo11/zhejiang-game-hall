package com.bianfeng.ymnsdk.util.security;

import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

public class SHA256_HMACUtil {
    public byte[] sha256_HMAC(String str, String str2) {
        try {
            Mac mac = Mac.getInstance("HmacSHA256");
            mac.init(new SecretKeySpec(str2.getBytes(), "HmacSHA256"));
            return mac.doFinal(str.getBytes());
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("Error HmacSHA256 ===========" + e.getMessage());
            return null;
        }
    }
}
