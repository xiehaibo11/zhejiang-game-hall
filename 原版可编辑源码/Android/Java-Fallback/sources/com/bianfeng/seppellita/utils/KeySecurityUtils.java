package com.bianfeng.seppellita.utils;

public class KeySecurityUtils {
    public KeySecurityUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String bytesToHexString(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r6 == 0) goto L2c
            int r1 = r6.length
            if (r1 <= 0) goto L2c
            r1 = 0
            r2 = r1
        Lc:
            int r3 = r6.length
            if (r2 >= r3) goto L27
            r3 = r6[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            int r4 = r3.length()
            r5 = 2
            if (r4 >= r5) goto L21
            r0.append(r1)
        L21:
            r0.append(r3)
            int r2 = r2 + 1
            goto Lc
        L27:
            java.lang.String r6 = r0.toString()
            return r6
        L2c:
            r6 = 0
            return r6
    }

    public static java.lang.String getApihubSecret(java.lang.String r8) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.security.SHA256Utils.getSHA256(r8)
            java.lang.String r8 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r8)
            java.lang.String r8 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r8)
            byte[] r8 = r8.getBytes()
            byte[] r0 = r0.getBytes()
            int r1 = r0.length
            byte[] r2 = new byte[r1]
            byte[] r3 = new byte[r1]
            int r4 = r8.length
            r5 = 0
            r6 = r5
        L1c:
            if (r6 >= r1) goto L27
            int r7 = r6 % r4
            r7 = r8[r7]
            r2[r6] = r7
            int r6 = r6 + 1
            goto L1c
        L27:
            if (r5 >= r1) goto L36
            r8 = r0[r5]
            r4 = r2[r5]
            int r8 = r8 + r4
            int r8 = r8 % 256
            byte r8 = (byte) r8
            r3[r5] = r8
            int r5 = r5 + 1
            goto L27
        L36:
            java.lang.String r8 = bytesToHexString(r3)
            java.lang.String r8 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r8)
            return r8
    }

    public static java.lang.String getEncryptKey(java.lang.String r5) {
            java.lang.String r5 = com.bianfeng.ymnsdk.utilslib.security.SHA256Utils.getSHA256(r5)
            java.lang.String r5 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r5)
            byte[] r5 = r5.getBytes()
            int r0 = r5.length
            int r1 = r0 / 2
            byte[] r2 = new byte[r1]
            r3 = 0
        L12:
            if (r3 >= r1) goto L1f
            int r4 = r3 * 2
            if (r4 >= r0) goto L1c
            r4 = r5[r4]
            r2[r3] = r4
        L1c:
            int r3 = r3 + 1
            goto L12
        L1f:
            java.lang.String r5 = new java.lang.String
            r5.<init>(r2)
            return r5
    }
}
