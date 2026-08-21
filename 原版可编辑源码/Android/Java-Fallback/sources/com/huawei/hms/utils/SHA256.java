package com.huawei.hms.utils;

public abstract class SHA256 {
    public SHA256() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] digest(java.io.File r6) {
            r0 = 0
            r1 = 0
            java.lang.String r2 = "SHA-256"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Throwable -> L35 java.lang.Throwable -> L42
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L35 java.lang.Throwable -> L42
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L35 java.lang.Throwable -> L42
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L35 java.lang.Throwable -> L42
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L35 java.lang.Throwable -> L42
            r6 = 4096(0x1000, float:5.74E-42)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L34
            r1 = r0
        L17:
            int r4 = r3.read(r6)     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L34
            r5 = -1
            if (r4 == r5) goto L23
            int r1 = r1 + r4
            r2.update(r6, r0, r4)     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L34
            goto L17
        L23:
            if (r1 <= 0) goto L2d
            byte[] r6 = r2.digest()     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L34
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            return r6
        L2d:
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            goto L3f
        L31:
            r6 = move-exception
            r1 = r3
            goto L43
        L34:
            r1 = r3
        L35:
            java.lang.String r6 = "SHA256"
            java.lang.String r2 = "An exception occurred while computing file 'SHA-256'."
            com.huawei.hms.support.log.HMSLog.e(r6, r2)     // Catch: java.lang.Throwable -> L42
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
        L3f:
            byte[] r6 = new byte[r0]
            return r6
        L42:
            r6 = move-exception
        L43:
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
            throw r6
    }

    public static byte[] digest(byte[] r2) {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            byte[] r2 = r0.digest(r2)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            return r2
        Lb:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NoSuchAlgorithmException"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "SHA256"
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }
}
