package com.huawei.hms.common.util;

public final class Base64Utils {
    private static final int FLAG_DEFAULT = 0;
    private static final int FLAG_URL = 10;
    private static final int FLAG_URL_NOPADDING = 11;
    private static final java.lang.String TAG = "Base64Utils";

    public Base64Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] decode(java.lang.String r3) {
            r0 = 0
            byte[] r1 = new byte[r0]
            if (r3 == 0) goto L25
            byte[] r3 = android.util.Base64.decode(r3, r0)     // Catch: java.lang.IllegalArgumentException -> La
            return r3
        La:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "decode failed : "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "Base64Utils"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
        L25:
            return r1
    }

    public static byte[] decodeUrlSafe(java.lang.String r3) {
            r0 = 0
            byte[] r0 = new byte[r0]
            if (r3 == 0) goto L27
            r1 = 10
            byte[] r3 = android.util.Base64.decode(r3, r1)     // Catch: java.lang.IllegalArgumentException -> Lc
            return r3
        Lc:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "decodeUrlSafe failed : "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "Base64Utils"
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
        L27:
            return r0
    }

    public static byte[] decodeUrlSafeNoPadding(java.lang.String r3) {
            r0 = 0
            byte[] r0 = new byte[r0]
            if (r3 == 0) goto L27
            r1 = 11
            byte[] r3 = android.util.Base64.decode(r3, r1)     // Catch: java.lang.IllegalArgumentException -> Lc
            return r3
        Lc:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "decodeUrlSafeNoPadding failed : "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "Base64Utils"
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
        L27:
            return r0
    }

    public static java.lang.String encode(byte[] r1) {
            if (r1 == 0) goto L8
            r0 = 0
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
        L8:
            r1 = 0
            return r1
    }

    public static java.lang.String encodeUrlSafe(byte[] r1) {
            if (r1 == 0) goto L9
            r0 = 10
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static java.lang.String encodeUrlSafeNoPadding(byte[] r1) {
            if (r1 == 0) goto L9
            r0 = 11
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
        L9:
            r1 = 0
            return r1
    }
}
