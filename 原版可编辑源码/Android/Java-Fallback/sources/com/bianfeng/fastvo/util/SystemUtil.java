package com.bianfeng.fastvo.util;

public class SystemUtil {
    public SystemUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String bytesToHexString(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r6 == 0) goto L2d
            int r1 = r6.length
            if (r1 > 0) goto Lb
            goto L2d
        Lb:
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r6.length
            if (r2 >= r3) goto L28
            r3 = r6[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            int r4 = r3.length()
            r5 = 2
            if (r4 >= r5) goto L22
            r0.append(r1)
        L22:
            r0.append(r3)
            int r2 = r2 + 1
            goto Ld
        L28:
            java.lang.String r6 = r0.toString()
            return r6
        L2d:
            r6 = 0
            return r6
    }

    public static java.lang.String md5(java.lang.String r2) {
            java.lang.String r0 = "MD5.algorithm"
            java.lang.String r1 = "MD5"
            java.lang.String r0 = java.lang.System.getProperty(r0, r1)     // Catch: java.lang.Exception -> L1b
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "utf-8"
            byte[] r2 = r2.getBytes(r1)     // Catch: java.lang.Exception -> L1b
            byte[] r2 = r0.digest(r2)     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = bytesToHexString(r2)     // Catch: java.lang.Exception -> L1b
            return r2
        L1b:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }
}
