package com.huawei.hms.opendevice;

public final class r {
    public static java.lang.String a(java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "SHACoder"
            java.lang.String r1 = "UTF-8"
            r2 = 0
            byte[] r3 = r3.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> L22 java.security.NoSuchAlgorithmException -> L28
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.io.UnsupportedEncodingException -> L22 java.security.NoSuchAlgorithmException -> L28
            if (r1 == 0) goto L11
            java.lang.String r4 = "SHA-256"
        L11:
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)     // Catch: java.io.UnsupportedEncodingException -> L22 java.security.NoSuchAlgorithmException -> L28
            r4.update(r3)     // Catch: java.io.UnsupportedEncodingException -> L22 java.security.NoSuchAlgorithmException -> L28
            byte[] r3 = r4.digest()     // Catch: java.io.UnsupportedEncodingException -> L22 java.security.NoSuchAlgorithmException -> L28
            r4 = 0
            java.lang.String r3 = com.huawei.hms.utils.HEX.encodeHexString(r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L22 java.security.NoSuchAlgorithmException -> L28
            return r3
        L22:
            java.lang.String r3 = "trans failed ."
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            return r2
        L28:
            java.lang.String r3 = "encrypt failed ."
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            return r2
    }
}
