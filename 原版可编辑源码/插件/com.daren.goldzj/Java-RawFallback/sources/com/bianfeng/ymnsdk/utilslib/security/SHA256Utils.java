package com.bianfeng.ymnsdk.utilslib.security;

public class SHA256Utils {
    public SHA256Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getSHA256(java.lang.String r1) {
            java.lang.String r0 = "utf-8"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.SecurityUtils.getSHA256(r1)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String getSHA256(byte[] r0) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.security.SecurityUtils.getSHA256(r0)
            return r0
    }

    public static java.lang.String sha256_HMAC(byte[] r0, java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.security.SecurityUtils.sha256_HMAC(r0, r1)
            return r0
    }
}
