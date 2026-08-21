package com.heytap.mcssdk.utils;

public class Utils {
    public Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getString(int[] r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r4.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L12
            r3 = r4[r2]
            char r3 = (char) r3
            r0.append(r3)
            int r2 = r2 + 1
            goto L7
        L12:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static int getVersionCode(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L10
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r0)     // Catch: java.lang.Exception -> L10
            int r0 = r3.versionCode     // Catch: java.lang.Exception -> L10
            goto L29
        L10:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getVersionCode--Exception:"
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.heytap.mcssdk.utils.d.b(r3)
        L29:
            return r0
    }

    public static int getVersionCode(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Lc
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r0)     // Catch: java.lang.Exception -> Lc
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> Lc
            return r2
        Lc:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "getVersionCode--Exception:"
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.heytap.mcssdk.utils.d.b(r2)
            return r0
    }

    public static java.lang.String getVersionName(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L10
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L10
            goto L2b
        L10:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getVersionName--Exception:"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.heytap.mcssdk.utils.d.b(r2)
            java.lang.String r2 = "0"
        L2b:
            return r2
    }

    public static java.lang.String getVersionName(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Lc
            r0 = 0
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Lc
            java.lang.String r1 = r1.versionName     // Catch: java.lang.Exception -> Lc
            return r1
        Lc:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "getVersionName--Exception:"
            r2.append(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.heytap.mcssdk.utils.d.b(r1)
            r1 = 0
            return r1
    }

    public static boolean isExistPackage(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L9
            r0 = 1
            r1.getPackageInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L9
            return r0
        L9:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "isExistPackage NameNotFoundException:"
            r2.append(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.heytap.mcssdk.utils.d.e(r1)
            r1 = 0
            return r1
    }

    public static boolean isSupportPush(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lb
            r0 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lb
            goto L25
        Lb:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "isSupportPush NameNotFoundException:"
            r2.append(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.heytap.mcssdk.utils.d.e(r1)
            r1 = 0
        L25:
            r2 = 0
            if (r1 == 0) goto L31
            android.os.Bundle r1 = r1.metaData
            boolean r1 = r1.getBoolean(r3, r2)
            if (r1 == 0) goto L31
            r2 = 1
        L31:
            return r2
    }

    public static boolean isSupportPushByClient(android.content.Context r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            boolean r1 = r0.isSupportPushByClient(r1)
            return r1
    }

    public static int parseInt(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L24
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> Lb
            goto L25
        Lb:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parseInt--NumberFormatException"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.heytap.mcssdk.utils.d.e(r2)
        L24:
            r2 = -1
        L25:
            return r2
    }
}
