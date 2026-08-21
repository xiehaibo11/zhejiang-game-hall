package com.meizu.cloud.pushsdk.util;

public class MzSystemUtils {
    private static final java.lang.String PUSH_SERVICE_PROCESS_NAME = "mzservice_v1";
    private static final java.lang.String TAG = "MzSystemUtils";
    private static int flymeVersion = -1;
    private static java.lang.String sCharacteristics;

    static {
            return
    }

    public MzSystemUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean compareVersion(java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "\\."
            java.lang.String[] r5 = r5.split(r0)
            java.lang.String[] r6 = r6.split(r0)
            int r0 = r5.length
            int r1 = r6.length
            int r0 = java.lang.Math.min(r0, r1)
            r1 = 0
            r2 = r1
            r3 = r2
        L13:
            if (r2 >= r0) goto L31
            r3 = r5[r2]
            int r3 = r3.length()
            r4 = r6[r2]
            int r4 = r4.length()
            int r3 = r3 - r4
            if (r3 != 0) goto L31
            r3 = r5[r2]
            r4 = r6[r2]
            int r3 = r3.compareTo(r4)
            if (r3 != 0) goto L31
            int r2 = r2 + 1
            goto L13
        L31:
            if (r3 == 0) goto L34
            goto L38
        L34:
            int r5 = r5.length
            int r6 = r6.length
            int r3 = r5 - r6
        L38:
            if (r3 < 0) goto L3b
            r1 = 1
        L3b:
            return r1
    }

    public static java.lang.String findReceiver(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L36
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Le
            goto L36
        Le:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L32
            r0.<init>(r3)     // Catch: java.lang.Exception -> L32
            r0.setPackage(r4)     // Catch: java.lang.Exception -> L32
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L32
            r3 = 0
            java.util.List r2 = r2.queryBroadcastReceivers(r0, r3)     // Catch: java.lang.Exception -> L32
            if (r2 == 0) goto L36
            int r4 = r2.size()     // Catch: java.lang.Exception -> L32
            if (r4 <= 0) goto L36
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L32
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2     // Catch: java.lang.Exception -> L32
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Exception -> L32
            java.lang.String r2 = r2.name     // Catch: java.lang.Exception -> L32
            return r2
        L32:
            r2 = move-exception
            r2.printStackTrace()
        L36:
            return r1
    }

    public static int getAppVersionCode(android.content.Context r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r2.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L10
            android.content.pm.PackageInfo r2 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> L10
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> L10
            return r2
        L10:
            return r0
    }

    public static java.lang.String getAppVersionName(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L10
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L10
            return r2
        L10:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String getAppVersionName(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = ""
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L18
            r1 = 0
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r1)     // Catch: java.lang.Exception -> L18
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L18
            if (r2 == 0) goto L17
            int r3 = r2.length()     // Catch: java.lang.Exception -> L18
            if (r3 > 0) goto L16
            goto L17
        L16:
            return r2
        L17:
            return r0
        L18:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "Exception message "
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "MzSystemUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
            return r0
    }

    public static java.lang.String getCurrentLanguage() {
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.getLanguage()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getCurrentLanguage error "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "MzSystemUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r0 = 0
            return r0
    }

    public static java.lang.String getDocumentsPath(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            java.lang.String r0 = android.os.Environment.DIRECTORY_DOCUMENTS
            goto Lb
        L9:
            java.lang.String r0 = "Documents"
        Lb:
            java.io.File r0 = r2.getExternalFilesDir(r0)
            if (r0 == 0) goto L16
            java.lang.String r2 = r0.getPath()
            return r2
        L16:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "/storage/emulated/0/Android/data/"
            r0.append(r1)
            java.lang.String r2 = r2.getPackageName()
            r0.append(r2)
            java.lang.String r2 = "/files/Documents"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static int getFlymeVersion() {
            java.lang.String r0 = ""
            int r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.flymeVersion
            if (r1 <= 0) goto L7
            return r1
        L7:
            java.lang.String r1 = "ro.build.flyme.version"
            java.lang.String r1 = com.meizu.cloud.pushsdk.b.i.a(r1)     // Catch: java.lang.Exception -> L43
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L14
            com.meizu.cloud.pushsdk.util.MzSystemUtils.flymeVersion = r1     // Catch: java.lang.Exception -> L14
            return r1
        L14:
            java.lang.String r1 = "ro.flyme.version.id"
            java.lang.String r1 = com.meizu.cloud.pushsdk.b.i.a(r1)     // Catch: java.lang.Exception -> L43
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L43
            if (r2 == 0) goto L26
            java.lang.String r1 = "ro.build.display.id"
            java.lang.String r1 = com.meizu.cloud.pushsdk.b.i.a(r1)     // Catch: java.lang.Exception -> L43
        L26:
            java.lang.String r2 = "Flyme"
            java.lang.String r1 = r1.replace(r2, r0)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = " "
            java.lang.String r0 = r1.replace(r2, r0)     // Catch: java.lang.Exception -> L43
            r1 = 0
            r2 = 1
            java.lang.String r0 = r0.substring(r1, r2)     // Catch: java.lang.Exception -> L43
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L43
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L43
            com.meizu.cloud.pushsdk.util.MzSystemUtils.flymeVersion = r0     // Catch: java.lang.Exception -> L43
            return r0
        L43:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getFlymeVersion error "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "MzSystemUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            r0 = -1
            return r0
    }

    public static java.lang.String getMzPushServicePackageName(android.content.Context r3) {
            java.lang.String r0 = r3.getPackageName()
            boolean r1 = isWatch()     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto Ld
            java.lang.String r1 = "com.meizu.wearable.cloud"
            goto Lf
        Ld:
            java.lang.String r1 = "com.meizu.cloud"
        Lf:
            java.lang.String r3 = getServicesByPackageName(r3, r1)     // Catch: java.lang.Exception -> L22
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L22
            if (r2 != 0) goto L26
            java.lang.String r2 = "mzservice_v1"
            boolean r3 = r3.contains(r2)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L26
            return r1
        L22:
            r3 = move-exception
            r3.printStackTrace()
        L26:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "start service package name "
            r3.append(r1)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = "MzSystemUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r3)
            return r0
    }

    public static java.lang.String getNetWorkType(android.content.Context r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L4e
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3     // Catch: java.lang.Exception -> L4e
            if (r3 == 0) goto L11
            android.net.NetworkInfo r3 = r3.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L4e
            goto L12
        L11:
            r3 = 0
        L12:
            if (r3 == 0) goto L69
            int r1 = r3.getType()     // Catch: java.lang.Exception -> L4e
            if (r1 == 0) goto L30
            r3 = 1
            if (r1 == r3) goto L2d
            r3 = 7
            if (r1 == r3) goto L2a
            r3 = 9
            if (r1 == r3) goto L27
            java.lang.String r0 = "OTHER"
            goto L69
        L27:
            java.lang.String r0 = "ETHERNET"
            goto L69
        L2a:
            java.lang.String r0 = "BLUETOOTH"
            goto L69
        L2d:
            java.lang.String r0 = "WIFI"
            goto L69
        L30:
            int r3 = r3.getSubtype()     // Catch: java.lang.Exception -> L4e
            r1 = 18
            if (r3 == r1) goto L4b
            r1 = 20
            if (r3 == r1) goto L48
            switch(r3) {
                case 1: goto L45;
                case 2: goto L45;
                case 3: goto L42;
                case 4: goto L45;
                case 5: goto L42;
                case 6: goto L42;
                case 7: goto L45;
                case 8: goto L42;
                case 9: goto L42;
                case 10: goto L42;
                case 11: goto L45;
                case 12: goto L42;
                case 13: goto L4b;
                case 14: goto L42;
                case 15: goto L42;
                default: goto L3f;
            }     // Catch: java.lang.Exception -> L4e
        L3f:
            java.lang.String r0 = "MOBILE_XG"
            goto L69
        L42:
            java.lang.String r0 = "MOBILE_3G"
            goto L69
        L45:
            java.lang.String r0 = "MOBILE_2G"
            goto L69
        L48:
            java.lang.String r3 = "MOBILE_5G"
            return r3
        L4b:
            java.lang.String r0 = "MOBILE_4G"
            goto L69
        L4e:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Security exception checking connection: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "MzSystemUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r3)
        L69:
            return r0
    }

    public static java.lang.String getProcessName(android.content.Context r7) {
            java.lang.String r0 = "MzSystemUtils"
            r1 = 0
            int r2 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L49
            java.lang.String r3 = ""
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L49
            java.lang.String r4 = "activity"
            java.lang.Object r7 = r7.getSystemService(r4)     // Catch: java.lang.Exception -> L49
            android.app.ActivityManager r7 = (android.app.ActivityManager) r7     // Catch: java.lang.Exception -> L49
            if (r7 != 0) goto L18
            return r1
        L18:
            java.util.List r7 = r7.getRunningAppProcesses()     // Catch: java.lang.Exception -> L49
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Exception -> L49
        L20:
            boolean r4 = r7.hasNext()     // Catch: java.lang.Exception -> L49
            if (r4 == 0) goto L48
            java.lang.Object r4 = r7.next()     // Catch: java.lang.Exception -> L49
            android.app.ActivityManager$RunningAppProcessInfo r4 = (android.app.ActivityManager.RunningAppProcessInfo) r4     // Catch: java.lang.Exception -> L49
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L49
            r5.<init>()     // Catch: java.lang.Exception -> L49
            java.lang.String r6 = "processName "
            r5.append(r6)     // Catch: java.lang.Exception -> L49
            java.lang.String r6 = r4.processName     // Catch: java.lang.Exception -> L49
            r5.append(r6)     // Catch: java.lang.Exception -> L49
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L49
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r5)     // Catch: java.lang.Exception -> L49
            int r5 = r4.pid     // Catch: java.lang.Exception -> L49
            if (r5 != r2) goto L20
            java.lang.String r3 = r4.processName     // Catch: java.lang.Exception -> L49
        L48:
            return r3
        L49:
            r7 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getProcessName error "
            r2.append(r3)
            java.lang.String r7 = r7.getMessage()
            r2.append(r7)
            java.lang.String r7 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r7)
            return r1
    }

    private static java.lang.String getServicesByPackageName(android.content.Context r5, java.lang.String r6) {
            android.content.pm.PackageManager r5 = r5.getPackageManager()
            r0 = 4
            r1 = 0
            android.content.pm.PackageInfo r5 = r5.getPackageInfo(r6, r0)     // Catch: java.lang.Exception -> Ld
            android.content.pm.ServiceInfo[] r5 = r5.services     // Catch: java.lang.Exception -> Ld
            goto Le
        Ld:
            r5 = r1
        Le:
            if (r5 != 0) goto L11
            return r1
        L11:
            int r6 = r5.length
            r0 = 0
        L13:
            if (r0 >= r6) goto L27
            r2 = r5[r0]
            java.lang.String r3 = r2.name
            java.lang.String r4 = "com.meizu.cloud.pushsdk.pushservice.MzPushService"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L24
            java.lang.String r5 = r2.processName
            return r5
        L24:
            int r0 = r0 + 1
            goto L13
        L27:
            return r1
    }

    public static boolean isBrandMeizu(android.content.Context r2) {
            java.lang.String r0 = "ro.meizu.product.model"
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.i.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L39
            java.lang.String r0 = "ro.vendor.meizu.product.model"
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.i.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L39
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "meizu"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L39
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "魅蓝"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L39
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "22c4185e"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L37
            goto L39
        L37:
            r0 = 0
            goto L3a
        L39:
            r0 = 1
        L3a:
            if (r0 != 0) goto L43
            android.content.Context r2 = r2.getApplicationContext()
            com.meizu.cloud.pushsdk.a.a.b(r2)
        L43:
            return r0
    }

    public static boolean isExistReceiver(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L37
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Le
            goto L37
        Le:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r4)
            r0.setPackage(r3)
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            java.util.List r2 = r2.queryBroadcastReceivers(r0, r1)
            if (r2 == 0) goto L37
            int r3 = r2.size()
            if (r3 <= 0) goto L37
            java.lang.Object r2 = r2.get(r1)
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2
            android.content.pm.ActivityInfo r2 = r2.activityInfo
            java.lang.String r2 = r2.name
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L37
            r1 = 1
        L37:
            return r1
    }

    public static boolean isHuaWei() {
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.i.a(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "huawei eui "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "MzSystemUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }

    public static boolean isIndiaLocal() {
            java.lang.String r0 = "ro.meizu.locale.region"
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.i.a(r0)
            java.lang.String r1 = "india"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public static boolean isInteractive(android.content.Context r3) {
            java.lang.String r0 = "power"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.os.PowerManager r3 = (android.os.PowerManager) r3
            r0 = 1
            if (r3 != 0) goto Lc
            return r0
        Lc:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L1c
            r2 = 20
            if (r1 < r2) goto L17
            boolean r3 = r3.isInteractive()     // Catch: java.lang.Exception -> L1c
            goto L1b
        L17:
            boolean r3 = r3.isScreenOn()     // Catch: java.lang.Exception -> L1c
        L1b:
            return r3
        L1c:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isScreenOn error "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "MzSystemUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r3)
            return r0
    }

    public static boolean isInternational() {
            com.meizu.cloud.pushsdk.b.b.d r0 = com.meizu.cloud.pushsdk.b.a.a()
            boolean r0 = r0.a
            if (r0 == 0) goto L15
            com.meizu.cloud.pushsdk.b.b.d r0 = com.meizu.cloud.pushsdk.b.a.a()
            T r0 = r0.b
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            goto L16
        L15:
            r0 = 0
        L16:
            return r0
    }

    public static boolean isMeizu(android.content.Context r0) {
            boolean r0 = isBrandMeizu(r0)
            return r0
    }

    public static boolean isMeizuAndFlyme() {
            com.meizu.cloud.pushsdk.b.b.d r0 = com.meizu.cloud.pushsdk.b.a.b()
            boolean r1 = r0.a
            if (r1 == 0) goto L13
            T r0 = r0.b
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            r0 = r0 ^ 1
            return r0
        L13:
            r0 = 0
            return r0
    }

    public static boolean isOverseas() {
            boolean r0 = isInternational()
            if (r0 != 0) goto Lf
            boolean r0 = isIndiaLocal()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public static boolean isPackageInstalled(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> La
            r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> La
            r1 = 1
            return r1
        La:
            return r0
    }

    public static boolean isRunningProcess(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "MzSystemUtils"
            java.lang.String r1 = "activity"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L42
            android.app.ActivityManager r3 = (android.app.ActivityManager) r3     // Catch: java.lang.Exception -> L42
            r1 = 0
            if (r3 != 0) goto Le
            return r1
        Le:
            java.util.List r3 = r3.getRunningAppProcesses()     // Catch: java.lang.Exception -> L42
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L42
        L16:
            boolean r2 = r3.hasNext()     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L2a
            java.lang.Object r1 = r3.next()     // Catch: java.lang.Exception -> L42
            android.app.ActivityManager$RunningAppProcessInfo r1 = (android.app.ActivityManager.RunningAppProcessInfo) r1     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = r1.processName     // Catch: java.lang.Exception -> L42
            boolean r1 = r1.contains(r4)     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L16
        L2a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L42
            r3.<init>()     // Catch: java.lang.Exception -> L42
            r3.append(r4)     // Catch: java.lang.Exception -> L42
            java.lang.String r4 = " is running "
            r3.append(r4)     // Catch: java.lang.Exception -> L42
            r3.append(r1)     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L42
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r3)     // Catch: java.lang.Exception -> L42
            goto L48
        L42:
            java.lang.String r3 = "can not get running process info so set running true"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r3)
            r1 = 1
        L48:
            return r1
    }

    public static boolean isWatch() {
            java.lang.String r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.sCharacteristics
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            java.lang.String r0 = "ro.build.characteristics"
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.i.a(r0)
            com.meizu.cloud.pushsdk.util.MzSystemUtils.sCharacteristics = r0
        L10:
            java.lang.String r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.sCharacteristics
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1e
            java.lang.String r0 = "phone"
            com.meizu.cloud.pushsdk.util.MzSystemUtils.sCharacteristics = r0
            r0 = 0
            return r0
        L1e:
            java.lang.String r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.sCharacteristics
            java.lang.String r1 = "watch"
            boolean r0 = r0.contains(r1)
            return r0
    }

    public static boolean isXiaoMi() {
            java.lang.String r0 = android.os.Build.MODEL
            java.lang.String r1 = "Xiaomi"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L15
            java.lang.String r0 = android.os.Build.MANUFACTURER
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L13
            goto L15
        L13:
            r0 = 0
            goto L16
        L15:
            r0 = 1
        L16:
            return r0
    }

    public static void sendMessageFromBroadcast(android.content.Context r1, android.content.Intent r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L9
            r2.setAction(r3)
        L9:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L12
            r2.setPackage(r4)
        L12:
            java.lang.String r3 = findReceiver(r1, r3, r4)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1f
            r2.setClassName(r4, r3)
        L1f:
            r1.sendBroadcast(r2)
            return
    }
}
