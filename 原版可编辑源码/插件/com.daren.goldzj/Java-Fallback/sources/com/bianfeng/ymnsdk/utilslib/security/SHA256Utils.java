package com.bianfeng.ymnsdk.utilslib.security;

public class SHA256Utils {
    public SHA256Utils() {
    }

    public static String getSHA256(byte[] r0) {
        return SecurityUtils.getSHA256(r0);
    }

    public static String getSHA256(String r1) {
        return SecurityUtils.getSHA256(r1.getBytes("utf-8"));
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    public static String sha256_HMAC(byte[] r0, String r1) {
        return SecurityUtils.sha256_HMAC(r0, r1);
    }
}
