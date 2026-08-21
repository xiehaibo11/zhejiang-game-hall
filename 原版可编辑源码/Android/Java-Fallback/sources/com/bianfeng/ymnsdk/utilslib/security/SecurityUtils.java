package com.bianfeng.ymnsdk.utilslib.security;

public class SecurityUtils {
    public SecurityUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String bytesToHexString(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r6 == 0) goto L2d
            int r1 = r6.length
            if (r1 > 0) goto Lb
            goto L2d
        Lb:
            r1 = 0
        Lc:
            int r2 = r6.length
            if (r1 >= r2) goto L28
            r2 = r6[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r2)
            int r4 = r3.length()
            r5 = 2
            if (r4 >= r5) goto L22
            r4 = 0
            r0.append(r4)
        L22:
            r0.append(r3)
            int r1 = r1 + 1
            goto Lc
        L28:
            java.lang.String r1 = r0.toString()
            return r1
        L2d:
            r1 = 0
            return r1
    }

    static java.lang.String getSHA256(byte[] r2) {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L12
            r0.update(r2)     // Catch: java.lang.Exception -> L12
            byte[] r1 = r0.digest()     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = bytesToHexString(r1)     // Catch: java.lang.Exception -> L12
            return r1
        L12:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    static java.lang.String md5(java.lang.String r4) {
            java.lang.String r0 = "MD5.algorithm"
            java.lang.String r1 = "MD5"
            java.lang.String r0 = java.lang.System.getProperty(r0, r1)     // Catch: java.lang.Exception -> L1b
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = "utf-8"
            byte[] r2 = r4.getBytes(r2)     // Catch: java.lang.Exception -> L1b
            byte[] r2 = r1.digest(r2)     // Catch: java.lang.Exception -> L1b
            java.lang.String r3 = bytesToHexString(r2)     // Catch: java.lang.Exception -> L1b
            return r3
        L1b:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    static java.lang.String sha256_HMAC(byte[] r4, java.lang.String r5) {
            java.lang.String r0 = "HmacSHA256"
            javax.crypto.Mac r1 = javax.crypto.Mac.getInstance(r0)     // Catch: java.lang.Exception -> L1c
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L1c
            byte[] r3 = r5.getBytes()     // Catch: java.lang.Exception -> L1c
            r2.<init>(r3, r0)     // Catch: java.lang.Exception -> L1c
            r0 = r2
            r1.init(r0)     // Catch: java.lang.Exception -> L1c
            byte[] r2 = r1.doFinal(r4)     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = bytesToHexString(r2)     // Catch: java.lang.Exception -> L1c
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
            r1 = 0
            return r1
    }
}
