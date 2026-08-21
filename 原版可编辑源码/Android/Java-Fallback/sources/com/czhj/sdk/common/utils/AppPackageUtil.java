package com.czhj.sdk.common.utils;

public class AppPackageUtil {
    public AppPackageUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getAppPackageName(android.content.Context r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            java.lang.String r0 = r0.getPackageName()
            return r0
    }

    public static java.lang.String getAppVersionFromContext(android.content.Context r2) {
            java.lang.String r0 = getAppPackageName(r2)     // Catch: java.lang.Throwable -> L16
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L1b
            android.content.pm.PackageManager r2 = getPackageManager(r2)     // Catch: java.lang.Throwable -> L16
            r1 = 0
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r1)     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Throwable -> L16
            return r2
        L16:
            java.lang.String r2 = "Failed to retrieve PackageInfo#versionName."
            com.czhj.sdk.logger.SigmobLog.d(r2)
        L1b:
            r2 = 0
            return r2
    }

    public static android.content.pm.PackageManager getPackageManager(android.content.Context r0) {
            if (r0 == 0) goto L7
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            return r0
        L7:
            r0 = 0
            return r0
    }
}
