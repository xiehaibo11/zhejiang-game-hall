package com.huawei.hms.android;

public class SystemUtils {
    public SystemUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = "ro.product.locale"
            java.lang.String r1 = ""
            java.lang.String r0 = getSystemProperties(r0, r1)
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = "ro.product.locale.region"
            java.lang.String r1 = ""
            java.lang.String r0 = getSystemProperties(r0, r1)
            return r0
    }

    public static java.lang.String getLocalCountry() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.getCountry()
            goto Ld
        Lb:
            java.lang.String r0 = ""
        Ld:
            return r0
    }

    public static java.lang.String getNetType(android.content.Context r1) {
            if (r1 == 0) goto L1d
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            if (r1 == 0) goto L1d
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()
            if (r1 == 0) goto L1d
            boolean r0 = r1.isAvailable()
            if (r0 == 0) goto L1d
            java.lang.String r1 = r1.getTypeName()
            goto L1f
        L1d:
            java.lang.String r1 = ""
        L1f:
            return r1
    }

    public static java.lang.String getSystemProperties(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            r2[r5] = r7     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            r2[r6] = r8     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            java.lang.Object r0 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26 java.lang.Throwable -> L26
            return r0
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "An exception occurred while reading: getSystemProperties:"
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            java.lang.String r0 = "SystemUtils"
            com.huawei.hms.support.log.HMSLog.e(r0, r7)
            return r8
    }

    public static boolean isChinaROM() {
            java.lang.String r0 = b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "cn"
            if (r1 != 0) goto L11
            boolean r0 = r2.equalsIgnoreCase(r0)
            return r0
        L11:
            java.lang.String r0 = a()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L26
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r0 = r0.toLowerCase(r1)
            boolean r0 = r0.contains(r2)
            return r0
        L26:
            java.lang.String r0 = getLocalCountry()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L35
            boolean r0 = r2.equalsIgnoreCase(r0)
            return r0
        L35:
            r0 = 0
            return r0
    }

    public static boolean isEMUI() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "is Emui :"
            r0.append(r1)
            int r1 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SystemUtils"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            int r0 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            if (r0 <= 0) goto L1e
            r0 = 1
            goto L1f
        L1e:
            r0 = 0
        L1f:
            return r0
    }

    public static boolean isSystemApp(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lb
            r0 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lb
            goto L23
        Lb:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "isSystemApp Exception: "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "SystemUtils"
            com.huawei.hms.support.log.HMSLog.e(r2, r1)
            r1 = 0
        L23:
            r2 = 1
            if (r1 == 0) goto L2e
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo
            int r1 = r1.flags
            r1 = r1 & r2
            if (r1 <= 0) goto L2e
            goto L2f
        L2e:
            r2 = 0
        L2f:
            return r2
    }

    public static boolean isTVDevice() {
            java.lang.String r0 = "ro.build.characteristics"
            java.lang.String r1 = "default"
            java.lang.String r0 = getSystemProperties(r0, r1)
            java.lang.String r1 = "tv"
            boolean r0 = r0.equalsIgnoreCase(r1)
            return r0
    }
}
