package com.huawei.hms.framework.common;

public class PackageManagerCompat {
    private static final java.lang.String TAG = "PackageUtils";
    private static final java.lang.String VERSION = "4.0.20.301";

    public PackageManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.os.Bundle getMetaDataFromApp(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r3 = r2.getPackageManager()
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.RuntimeException -> L13 android.content.pm.PackageManager.NameNotFoundException -> L15
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r3.getApplicationInfo(r2, r1)     // Catch: java.lang.RuntimeException -> L13 android.content.pm.PackageManager.NameNotFoundException -> L15
            goto L1e
        L13:
            r2 = move-exception
            goto L16
        L15:
            r2 = move-exception
        L16:
            java.lang.String r3 = "PackageUtils"
            java.lang.String r1 = "NameNotFoundException:"
            com.huawei.hms.framework.common.Logger.w(r3, r1, r2)
            r2 = r0
        L1e:
            if (r2 != 0) goto L21
            return r0
        L21:
            android.os.Bundle r2 = r2.metaData
            return r2
    }

    public static java.lang.String getVersionName(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            android.content.pm.PackageManager r1 = r3.getPackageManager()
            if (r1 != 0) goto Lc
            return r0
        Lc:
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.RuntimeException -> L19 android.content.pm.PackageManager.NameNotFoundException -> L1b
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: java.lang.RuntimeException -> L19 android.content.pm.PackageManager.NameNotFoundException -> L1b
            java.lang.String r3 = r3.versionName     // Catch: java.lang.RuntimeException -> L19 android.content.pm.PackageManager.NameNotFoundException -> L1b
            return r3
        L19:
            r3 = move-exception
            goto L1c
        L1b:
            r3 = move-exception
        L1c:
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            java.lang.String r1 = "PackageUtils"
            com.huawei.hms.framework.common.Logger.w(r1, r3)
            return r0
    }

    public java.lang.String getPackageName(android.content.Context r4) {
            r3 = this;
            android.content.pm.PackageManager r0 = r4.getPackageManager()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L16
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r4 = r0.getPackageInfo(r4, r2)     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = r4.packageName     // Catch: java.lang.Throwable -> L16
            goto L1d
        L16:
            java.lang.String r4 = "PackageUtils"
            java.lang.String r0 = "Failed to get Package managers Package Info"
            com.huawei.hms.framework.common.Logger.w(r4, r0)
        L1d:
            return r1
    }

    public java.lang.String getVersion(android.content.Context r4) {
            r3 = this;
            android.content.pm.PackageManager r0 = r4.getPackageManager()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L1a
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r4 = r0.getPackageInfo(r4, r2)     // Catch: java.lang.Throwable -> L1a
            int r4 = r4.versionCode     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L1a
            goto L21
        L1a:
            java.lang.String r4 = "PackageUtils"
            java.lang.String r0 = "Failed to get Package managers Package Info"
            com.huawei.hms.framework.common.Logger.w(r4, r0)
        L21:
            return r1
    }
}
