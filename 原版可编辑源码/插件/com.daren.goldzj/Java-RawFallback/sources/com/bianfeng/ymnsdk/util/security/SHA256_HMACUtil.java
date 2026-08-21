package com.bianfeng.ymnsdk.util.security;

public class SHA256_HMACUtil {
    public SHA256_HMACUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public byte[] sha256_HMAC(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "HmacSHA256"
            javax.crypto.Mac r1 = javax.crypto.Mac.getInstance(r0)     // Catch: java.lang.Exception -> L1b
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L1b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L1b
            r2.<init>(r5, r0)     // Catch: java.lang.Exception -> L1b
            r1.init(r2)     // Catch: java.lang.Exception -> L1b
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L1b
            byte[] r4 = r1.doFinal(r4)     // Catch: java.lang.Exception -> L1b
            return r4
        L1b:
            r4 = move-exception
            r4.printStackTrace()
            java.io.PrintStream r5 = java.lang.System.out
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Error HmacSHA256 ==========="
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.println(r4)
            r4 = 0
            return r4
    }
}
