package com.bianfeng.ymnsdk.utilslib.security;

public class SHA256Utils {
    public SHA256Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getSHA256(java.lang.String r2) {
            java.lang.String r0 = "utf-8"
            byte[] r0 = r2.getBytes(r0)     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.security.SecurityUtils.getSHA256(r0)     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String getSHA256(byte[] r1) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.security.SecurityUtils.getSHA256(r1)
            return r0
    }

    public static java.lang.String sha256_HMAC(byte[] r1, java.lang.String r2) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.security.SecurityUtils.sha256_HMAC(r1, r2)
            return r0
    }
}
