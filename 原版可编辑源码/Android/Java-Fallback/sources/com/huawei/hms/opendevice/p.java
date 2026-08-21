package com.huawei.hms.opendevice;

public class p {
    public static java.lang.String a(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r2 = r2.createDeviceProtectedStorageContext()
            java.io.File r2 = r2.getDataDir()
            r0.append(r2)
            java.lang.String r2 = ""
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            goto L28
        L20:
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r2 = r2.getParent()
        L28:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L35
            java.lang.String r0 = "CommFun"
            java.lang.String r1 = "get storage root path of the current user failed."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
        L35:
            return r2
    }

    public static boolean a() {
            int r0 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Emui Api Level:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "CommFun"
            com.huawei.hms.support.log.HMSLog.d(r2, r1)
            if (r0 <= 0) goto L1c
            r0 = 1
            goto L1d
        L1c:
            r0 = 0
        L1d:
            return r0
    }

    public static long b(android.content.Context r2) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r0 = "com.huawei.android.pushagent"
            r1 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r1)     // Catch: java.lang.Exception -> L10
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> L10
            long r0 = (long) r2
            goto L19
        L10:
            java.lang.String r2 = "CommFun"
            java.lang.String r0 = "get nc versionCode error"
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
            r0 = -1
        L19:
            return r0
    }

    public static boolean c(android.content.Context r4) {
            boolean r0 = a()
            if (r0 == 0) goto L19
            int r0 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r1 = 21
            if (r0 >= r1) goto L19
            long r0 = b(r4)
            r2 = 110001400(0x68e7cf8, double:5.43479127E-316)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L19
            r4 = 1
            return r4
        L19:
            r4 = 0
            return r4
    }
}
