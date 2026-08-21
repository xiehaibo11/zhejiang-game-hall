package com.huawei.hms.framework.common;

public class PackageUtils {
    private static final java.lang.String TAG = "PackageUtils";

    public PackageUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getVersionName(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            android.content.pm.PackageManager r1 = r3.getPackageManager()
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            java.lang.String r3 = r3.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            return r3
        L16:
            r3 = move-exception
            java.lang.String r1 = "PackageUtils"
            com.huawei.hms.framework.common.Logger.w(r1, r0, r3)
            return r0
    }
}
