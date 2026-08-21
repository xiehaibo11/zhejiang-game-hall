package com.bianfeng.ymnsdk.util.security;

public class SHA256_HMACUtil {
    public SHA256_HMACUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public byte[] sha256_HMAC(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "HmacSHA256"
            javax.crypto.Mac r1 = javax.crypto.Mac.getInstance(r0)     // Catch: java.lang.Exception -> L1c
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L1c
            byte[] r3 = r6.getBytes()     // Catch: java.lang.Exception -> L1c
            r2.<init>(r3, r0)     // Catch: java.lang.Exception -> L1c
            r0 = r2
            r1.init(r0)     // Catch: java.lang.Exception -> L1c
            byte[] r2 = r5.getBytes()     // Catch: java.lang.Exception -> L1c
            byte[] r2 = r1.doFinal(r2)     // Catch: java.lang.Exception -> L1c
            return r2
        L1c:
            r0 = move-exception
            r0.printStackTrace()
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Error HmacSHA256 ==========="
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.println(r2)
            r0 = 0
            return r0
    }
}
