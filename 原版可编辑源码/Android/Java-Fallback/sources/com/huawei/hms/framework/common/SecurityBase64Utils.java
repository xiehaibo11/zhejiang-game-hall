package com.huawei.hms.framework.common;

public class SecurityBase64Utils {
    private static boolean IS_AEGIS_BASE64_LIBRARY_LOADED = false;
    private static final java.lang.String SAFE_BASE64_PATH = "com.huawei.secure.android.common.util.SafeBase64";

    static {
            return
    }

    public SecurityBase64Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean checkCompatible(java.lang.String r2) {
            java.lang.Class<com.huawei.hms.framework.common.SecurityBase64Utils> r0 = com.huawei.hms.framework.common.SecurityBase64Utils.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            r0.loadClass(r2)     // Catch: java.lang.ClassNotFoundException -> L18
            java.lang.Class<com.huawei.hms.framework.common.StringUtils> r2 = com.huawei.hms.framework.common.StringUtils.class
            monitor-enter(r2)     // Catch: java.lang.ClassNotFoundException -> L18
            r0 = 1
            com.huawei.hms.framework.common.SecurityBase64Utils.IS_AEGIS_BASE64_LIBRARY_LOADED = r0     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L15
            throw r0     // Catch: java.lang.ClassNotFoundException -> L18
        L18:
            return r1
    }

    public static byte[] decode(java.lang.String r1, int r2) {
            boolean r0 = com.huawei.hms.framework.common.SecurityBase64Utils.IS_AEGIS_BASE64_LIBRARY_LOADED
            if (r0 != 0) goto L16
            java.lang.String r0 = "com.huawei.secure.android.common.util.SafeBase64"
            boolean r0 = checkCompatible(r0)
            if (r0 == 0) goto Ld
            goto L16
        Ld:
            byte[] r1 = android.util.Base64.decode(r1, r2)     // Catch: java.lang.Exception -> L12
            return r1
        L12:
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
        L16:
            byte[] r1 = com.huawei.secure.android.common.util.SafeBase64.decode(r1, r2)
            return r1
    }

    public static java.lang.String encodeToString(byte[] r1, int r2) {
            boolean r0 = com.huawei.hms.framework.common.SecurityBase64Utils.IS_AEGIS_BASE64_LIBRARY_LOADED
            if (r0 != 0) goto L14
            java.lang.String r0 = "com.huawei.secure.android.common.util.SafeBase64"
            boolean r0 = checkCompatible(r0)
            if (r0 == 0) goto Ld
            goto L14
        Ld:
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Exception -> L12
            return r1
        L12:
            r1 = 0
            return r1
        L14:
            java.lang.String r1 = com.huawei.secure.android.common.util.SafeBase64.encodeToString(r1, r2)
            return r1
    }
}
