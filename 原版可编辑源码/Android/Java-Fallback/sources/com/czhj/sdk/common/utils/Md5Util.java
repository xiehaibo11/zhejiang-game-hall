package com.czhj.sdk.common.utils;

public final class Md5Util {
    private static final java.lang.String a = null;
    private static final int b = 1024;

    static {
            java.lang.Class<com.czhj.sdk.common.utils.Md5Util> r0 = com.czhj.sdk.common.utils.Md5Util.class
            java.lang.String r0 = r0.getSimpleName()
            com.czhj.sdk.common.utils.Md5Util.a = r0
            return
    }

    public Md5Util() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(byte[] r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = ""
            r0.<init>(r1)
            if (r7 == 0) goto L2f
            int r1 = r7.length
            if (r1 > 0) goto Ld
            goto L2f
        Ld:
            int r1 = r7.length
            r2 = 0
            r3 = r2
        L10:
            if (r3 >= r1) goto L2a
            r4 = r7[r3]
            r4 = r4 & 255(0xff, float:3.57E-43)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            int r5 = r4.length()
            r6 = 2
            if (r5 >= r6) goto L24
            r0.append(r2)
        L24:
            r0.append(r4)
            int r3 = r3 + 1
            goto L10
        L2a:
            java.lang.String r7 = r0.toString()
            return r7
        L2f:
            r7 = 0
            return r7
    }

    public static java.lang.String fileMd5(java.io.File r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            boolean r1 = r6.isFile()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            r1 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r1]
            java.lang.String r2 = "md5"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Throwable -> L50
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4d
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L4d
        L1a:
            r6 = 1024(0x400, float:1.435E-42)
            r4 = 0
            int r6 = r3.read(r1, r4, r6)     // Catch: java.lang.Throwable -> L4b
            r5 = -1
            if (r6 == r5) goto L28
            r2.update(r1, r4, r6)     // Catch: java.lang.Throwable -> L4b
            goto L1a
        L28:
            if (r2 == 0) goto L36
            r2.clone()     // Catch: java.lang.Throwable -> L2e
            goto L36
        L2e:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
        L36:
            r3.close()     // Catch: java.lang.Throwable -> L3a
            goto L42
        L3a:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
        L42:
            byte[] r6 = r2.digest()
            java.lang.String r6 = a(r6)
            return r6
        L4b:
            r6 = move-exception
            goto L53
        L4d:
            r6 = move-exception
            r3 = r0
            goto L53
        L50:
            r6 = move-exception
            r2 = r0
            r3 = r2
        L53:
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L77
            com.czhj.sdk.logger.SigmobLog.e(r6)     // Catch: java.lang.Throwable -> L77
            if (r2 == 0) goto L68
            r2.clone()     // Catch: java.lang.Throwable -> L60
            goto L68
        L60:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
        L68:
            if (r3 == 0) goto L76
            r3.close()     // Catch: java.lang.Throwable -> L6e
            goto L76
        L6e:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
        L76:
            return r0
        L77:
            r6 = move-exception
            if (r2 == 0) goto L86
            r2.clone()     // Catch: java.lang.Throwable -> L7e
            goto L86
        L7e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L86:
            if (r3 == 0) goto L94
            r3.close()     // Catch: java.lang.Throwable -> L8c
            goto L94
        L8c:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L94:
            throw r6
    }

    public static java.lang.String fileMd5(java.lang.String r4) {
            r0 = 0
            if (r4 == 0) goto L9a
            java.io.File r1 = new java.io.File
            r1.<init>(r4)
            boolean r1 = r1.exists()
            if (r1 != 0) goto L10
            goto L9a
        L10:
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L55
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = "md5"
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)     // Catch: java.lang.Throwable -> L52
            java.security.DigestInputStream r2 = new java.security.DigestInputStream     // Catch: java.lang.Throwable -> L52
            r2.<init>(r1, r4)     // Catch: java.lang.Throwable -> L52
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L50
        L24:
            int r3 = r2.read(r4)     // Catch: java.lang.Throwable -> L50
            if (r3 <= 0) goto L2b
            goto L24
        L2b:
            java.security.MessageDigest r4 = r2.getMessageDigest()     // Catch: java.lang.Throwable -> L50
            byte[] r4 = r4.digest()     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = a(r4)     // Catch: java.lang.Throwable -> L50
            r1.close()     // Catch: java.lang.Throwable -> L3b
            goto L43
        L3b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L43:
            r2.close()     // Catch: java.lang.Throwable -> L47
            goto L4f
        L47:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L4f:
            return r4
        L50:
            r4 = move-exception
            goto L58
        L52:
            r4 = move-exception
            r2 = r0
            goto L58
        L55:
            r4 = move-exception
            r1 = r0
            r2 = r1
        L58:
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L7c
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L6d
            r1.close()     // Catch: java.lang.Throwable -> L65
            goto L6d
        L65:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L6d:
            if (r2 == 0) goto L7b
            r2.close()     // Catch: java.lang.Throwable -> L73
            goto L7b
        L73:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L7b:
            return r0
        L7c:
            r4 = move-exception
            if (r1 == 0) goto L8b
            r1.close()     // Catch: java.lang.Throwable -> L83
            goto L8b
        L83:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L8b:
            if (r2 == 0) goto L99
            r2.close()     // Catch: java.lang.Throwable -> L91
            goto L99
        L91:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L99:
            throw r4
        L9a:
            return r0
    }

    public static java.lang.String md5(java.lang.String r9) {
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            r1 = 16
            char[] r1 = new char[r1]
            r1 = {x004e: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            java.lang.String r2 = "UTF-8"
            byte[] r9 = r9.getBytes(r2)     // Catch: java.lang.Throwable -> L45
            java.lang.String r2 = "md5"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Throwable -> L45
            r2.update(r9)     // Catch: java.lang.Throwable -> L45
            byte[] r9 = r2.digest()     // Catch: java.lang.Throwable -> L45
            int r2 = r9.length     // Catch: java.lang.Throwable -> L45
            int r2 = r2 * 2
            char[] r2 = new char[r2]     // Catch: java.lang.Throwable -> L45
            int r3 = r9.length     // Catch: java.lang.Throwable -> L45
            r4 = 0
            r5 = r4
        L26:
            if (r4 >= r3) goto L3f
            r6 = r9[r4]     // Catch: java.lang.Throwable -> L45
            int r7 = r5 + 1
            int r8 = r6 >>> 4
            r8 = r8 & 15
            char r8 = r1[r8]     // Catch: java.lang.Throwable -> L45
            r2[r5] = r8     // Catch: java.lang.Throwable -> L45
            int r5 = r7 + 1
            r6 = r6 & 15
            char r6 = r1[r6]     // Catch: java.lang.Throwable -> L45
            r2[r7] = r6     // Catch: java.lang.Throwable -> L45
            int r4 = r4 + 1
            goto L26
        L3f:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Throwable -> L45
            r9.<init>(r2)     // Catch: java.lang.Throwable -> L45
            return r9
        L45:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r9)
            return r0
    }
}
