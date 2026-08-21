package com.huawei.hms.framework.network.grs.d;

public class c {
    private static final java.lang.String a = "c";

    public static java.lang.String a(java.lang.String r6, android.content.Context r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            r0 = 0
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            r3 = 0
            android.content.res.AssetManager r7 = r7.getAssets()     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            java.io.InputStream r0 = r7.open(r6)     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            r7 = 8192(0x2000, float:1.148E-41)
            byte[] r7 = new byte[r7]     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
        L1c:
            int r4 = r0.read(r7)     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            r5 = -1
            if (r4 == r5) goto L27
            r2.write(r7, r3, r4)     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            goto L1c
        L27:
            r2.flush()     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            java.lang.String r7 = new java.lang.String     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            byte[] r4 = r2.toByteArray()     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            java.lang.String r5 = "UTF-8"
            r7.<init>(r4, r5)     // Catch: java.io.IOException -> L3c java.lang.Throwable -> L4f
            com.huawei.hms.framework.common.IoUtils.closeSecure(r2)
            com.huawei.hms.framework.common.IoUtils.closeSecure(r0)
            return r7
        L3c:
            java.lang.String r7 = com.huawei.hms.framework.network.grs.d.c.a     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = "local config file is not exist.filename is {%s}"
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L4f
            r5[r3] = r6     // Catch: java.lang.Throwable -> L4f
            com.huawei.hms.framework.common.Logger.w(r7, r4, r5)     // Catch: java.lang.Throwable -> L4f
            com.huawei.hms.framework.common.IoUtils.closeSecure(r2)
            com.huawei.hms.framework.common.IoUtils.closeSecure(r0)
            return r1
        L4f:
            r6 = move-exception
            com.huawei.hms.framework.common.IoUtils.closeSecure(r2)
            com.huawei.hms.framework.common.IoUtils.closeSecure(r0)
            throw r6
    }
}
