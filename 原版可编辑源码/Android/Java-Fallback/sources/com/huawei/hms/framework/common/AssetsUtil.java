package com.huawei.hms.framework.common;

public class AssetsUtil {
    private static final java.lang.String TAG = "AssetsUtil";

    public AssetsUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String[] list(android.content.Context r2, java.lang.String r3) throws java.io.IOException {
            java.lang.String r0 = "AssetsUtil"
            if (r2 != 0) goto Ld
            java.lang.String r2 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            r2 = 0
            java.lang.String[] r2 = new java.lang.String[r2]
            return r2
        Ld:
            android.content.res.AssetManager r2 = r2.getAssets()
            r1 = 0
            java.lang.String[] r1 = r2.list(r3)     // Catch: java.lang.RuntimeException -> L17
            goto L1d
        L17:
            r2 = move-exception
            java.lang.String r3 = "AssetManager has been destroyed"
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
        L1d:
            return r1
    }

    public static java.io.InputStream open(android.content.Context r2, java.lang.String r3) throws java.io.IOException {
            java.lang.String r0 = "AssetsUtil"
            r1 = 0
            if (r2 != 0) goto Lb
            java.lang.String r2 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            return r1
        Lb:
            android.content.res.AssetManager r2 = r2.getAssets()
            java.io.InputStream r1 = r2.open(r3)     // Catch: java.lang.RuntimeException -> L14
            goto L1a
        L14:
            r2 = move-exception
            java.lang.String r3 = "AssetManager has been destroyed"
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
        L1a:
            return r1
    }
}
