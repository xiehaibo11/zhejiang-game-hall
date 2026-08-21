package com.bianfeng.ymnsdk.sysfunc;

public class DeviceInfoManager {
    public DeviceInfoManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getUniqueId(android.content.Context r1) {
            android.content.ContentResolver r1 = r1.getContentResolver()
            java.lang.String r0 = "android_id"
            java.lang.String r1 = android.provider.Settings.Secure.getString(r1, r0)
            return r1
    }

    private static java.lang.String toMD5(java.lang.String r7) throws java.security.NoSuchAlgorithmException {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)
            byte[] r7 = r7.getBytes()
            byte[] r7 = r0.digest(r7)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r7.length
            r2 = 0
            r3 = 0
        L16:
            if (r3 >= r1) goto L30
            r4 = r7[r3]
            r4 = r4 & 255(0xff, float:3.57E-43)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            int r5 = r4.length()
            r6 = 2
            if (r5 >= r6) goto L2a
            r0.append(r2)
        L2a:
            r0.append(r4)
            int r3 = r3 + 1
            goto L16
        L30:
            java.lang.String r7 = r0.toString()
            return r7
    }
}
