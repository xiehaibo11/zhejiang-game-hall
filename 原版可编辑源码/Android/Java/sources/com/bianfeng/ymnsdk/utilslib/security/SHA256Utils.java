package com.bianfeng.ymnsdk.utilslib.security;

public class SHA256Utils {
    public static String getSHA256(byte[] str) {
        return SecurityUtils.getSHA256(str);
    }

    public static String getSHA256(String str) {
        try {
            return SecurityUtils.getSHA256(str.getBytes("utf-8"));
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static String sha256_HMAC(byte[] bytes, String secret) {
        return SecurityUtils.sha256_HMAC(bytes, secret);
    }
}
