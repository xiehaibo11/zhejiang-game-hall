package com.huawei.hms.utils;

public class Util {
    private static final java.lang.String AVAILABLE_LOADED = "availableLoaded";
    private static final java.lang.Object LOCK_OBJECT = null;
    private static final java.lang.String META_HMSVERSION_NAME = "com.huawei.hms.version";
    private static final java.lang.String SERVICE_ACTION = "com.huawei.hms.core.aidl.action";
    private static final java.lang.String TAG = "Util";
    private static boolean availableInit;
    private static boolean isAvailableAvailable;
    private static java.lang.String serviceAction;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.utils.Util.LOCK_OBJECT = r0
            return
    }

    public Util() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int compareHmsVersion(java.lang.String r6, java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            r2 = 1
            if (r0 == 0) goto L10
            return r2
        L10:
            boolean r0 = com.huawei.hms.utils.StringUtil.checkVersion(r6)
            r3 = 0
            if (r0 == 0) goto L88
            boolean r0 = com.huawei.hms.utils.StringUtil.checkVersion(r7)
            if (r0 == 0) goto L88
            java.lang.String r0 = "\\."
            java.lang.String[] r6 = r6.split(r0)
            java.lang.String[] r7 = r7.split(r0)
            int r0 = r6.length
            r4 = 2
            if (r4 >= r0) goto L88
            int r0 = r7.length
            if (r4 >= r0) goto L88
            r0 = r6[r3]
            int r0 = java.lang.Integer.parseInt(r0)
            r5 = r7[r3]
            int r5 = java.lang.Integer.parseInt(r5)
            if (r0 <= r5) goto L3d
            return r2
        L3d:
            r0 = r6[r3]
            int r0 = java.lang.Integer.parseInt(r0)
            r5 = r7[r3]
            int r5 = java.lang.Integer.parseInt(r5)
            if (r0 >= r5) goto L4c
            return r1
        L4c:
            r0 = r6[r2]
            int r0 = java.lang.Integer.parseInt(r0)
            r5 = r7[r2]
            int r5 = java.lang.Integer.parseInt(r5)
            if (r0 <= r5) goto L5b
            return r2
        L5b:
            r0 = r6[r2]
            int r0 = java.lang.Integer.parseInt(r0)
            r5 = r7[r2]
            int r5 = java.lang.Integer.parseInt(r5)
            if (r0 >= r5) goto L6a
            return r1
        L6a:
            r0 = r6[r4]
            int r0 = java.lang.Integer.parseInt(r0)
            r5 = r7[r4]
            int r5 = java.lang.Integer.parseInt(r5)
            if (r0 <= r5) goto L79
            return r2
        L79:
            r6 = r6[r4]
            int r6 = java.lang.Integer.parseInt(r6)
            r7 = r7[r4]
            int r7 = java.lang.Integer.parseInt(r7)
            if (r6 >= r7) goto L88
            return r1
        L88:
            return r3
    }

    public static android.app.Activity getActiveActivity(android.app.Activity r0, android.content.Context r1) {
            android.app.Activity r0 = com.huawei.hms.utils.UIUtil.getActiveActivity(r0, r1)
            return r0
    }

    public static java.lang.String getAppId(android.content.Context r0) {
            java.lang.String r0 = com.huawei.hms.common.util.AGCUtils.getAppId(r0)
            return r0
    }

    public static java.lang.String getAppName(android.content.Context r4, java.lang.String r5) {
            java.lang.String r0 = "Util"
            java.lang.String r1 = ""
            if (r4 != 0) goto Lc
            java.lang.String r4 = "In getAppName, context is null."
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            return r1
        Lc:
            android.content.pm.PackageManager r2 = r4.getPackageManager()
            if (r2 != 0) goto L18
            java.lang.String r4 = "In getAppName, Failed to get 'PackageManager' instance."
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            return r1
        L18:
            boolean r3 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L22
            java.lang.String r5 = r4.getPackageName()     // Catch: java.lang.Throwable -> L33
        L22:
            r4 = 0
            android.content.pm.ApplicationInfo r4 = r2.getApplicationInfo(r5, r4)     // Catch: java.lang.Throwable -> L33
            java.lang.CharSequence r4 = r2.getApplicationLabel(r4)     // Catch: java.lang.Throwable -> L33
            if (r4 != 0) goto L2e
            goto L32
        L2e:
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L33
        L32:
            return r1
        L33:
            java.lang.String r4 = "In getAppName, Failed to get app name."
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            return r1
    }

    public static java.lang.String getCpId(android.content.Context r0) {
            java.lang.String r0 = com.huawei.hms.common.util.AGCUtils.getCpId(r0)
            return r0
    }

    public static int getHmsVersion(android.content.Context r5) {
            java.lang.String r0 = "In getHmsVersion, Failed to read meta data for the HMS VERSION."
            android.content.pm.PackageManager r1 = r5.getPackageManager()
            r2 = 0
            java.lang.String r3 = "Util"
            if (r1 != 0) goto L11
            java.lang.String r5 = "In getHmsVersion, Failed to get 'PackageManager' instance."
            com.huawei.hms.support.log.HMSLog.e(r3, r5)
            return r2
        L11:
            java.lang.String r5 = r5.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r5 = r1.getPackageInfo(r5, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            android.content.pm.ApplicationInfo r5 = r5.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            if (r5 == 0) goto L3c
            android.os.Bundle r1 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            if (r1 == 0) goto L3c
            android.os.Bundle r5 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            java.lang.String r1 = "com.huawei.hms.version"
            java.lang.Object r5 = r5.get(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            if (r5 == 0) goto L3c
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            if (r1 != 0) goto L3c
            int r5 = com.huawei.hms.utils.StringUtil.convertVersion2Integer(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            return r5
        L3c:
            com.huawei.hms.support.log.HMSLog.i(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L40
            return r2
        L40:
            com.huawei.hms.support.log.HMSLog.e(r3, r0)
            return r2
    }

    public static java.lang.String getNetType(android.content.Context r0) {
            java.lang.String r0 = com.huawei.hms.android.SystemUtils.getNetType(r0)
            return r0
    }

    public static java.lang.String getProcessName(android.content.Context r0, int r1) {
            java.lang.String r0 = com.huawei.hms.utils.UIUtil.getProcessName(r0, r1)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String getProductCountry() {
            java.lang.String r0 = ""
            java.lang.String r1 = "ro.product.locale.region"
            java.lang.String r1 = getSystemProperties(r1, r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lf
            return r1
        Lf:
            java.lang.String r1 = "ro.product.locale"
            java.lang.String r1 = getSystemProperties(r1, r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L2b
            java.lang.String r2 = "-"
            int r2 = r1.lastIndexOf(r2)
            r3 = -1
            if (r2 == r3) goto L2b
            int r2 = r2 + 1
            java.lang.String r0 = r1.substring(r2)
            return r0
        L2b:
            java.lang.String r1 = com.huawei.hms.android.SystemUtils.getLocalCountry()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L36
            r0 = r1
        L36:
            return r0
    }

    public static java.lang.String getServiceActionMetadata(android.content.Context r4) {
            java.lang.String r0 = "In getServiceActionMetadata, Failed to read meta data for the SERVICE ACTION."
            java.lang.String r1 = com.huawei.hms.utils.Util.serviceAction
            if (r1 == 0) goto L7
            return r1
        L7:
            android.content.pm.PackageManager r1 = r4.getPackageManager()
            java.lang.String r2 = "Util"
            if (r1 != 0) goto L16
            java.lang.String r4 = "In getHmsVersion, Failed to get 'PackageManager' instance."
            com.huawei.hms.support.log.HMSLog.e(r2, r4)
            r4 = 0
            return r4
        L16:
            java.lang.String r4 = r4.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            android.content.pm.ApplicationInfo r4 = r4.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            if (r4 == 0) goto L3f
            android.os.Bundle r1 = r4.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            if (r1 == 0) goto L3f
            android.os.Bundle r4 = r4.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            java.lang.String r1 = "com.huawei.hms.core.aidl.action"
            java.lang.Object r4 = r4.get(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            if (r4 == 0) goto L3f
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            if (r1 != 0) goto L3f
            com.huawei.hms.utils.Util.serviceAction = r4     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            return r4
        L3f:
            com.huawei.hms.support.log.HMSLog.i(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L43
            goto L46
        L43:
            com.huawei.hms.support.log.HMSLog.w(r2, r0)
        L46:
            java.lang.String r4 = ""
            com.huawei.hms.utils.Util.serviceAction = r4
            return r4
    }

    public static java.lang.String getSystemProperties(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = com.huawei.hms.android.SystemUtils.getSystemProperties(r0, r1)
            return r0
    }

    public static android.app.Activity getValidActivity(android.app.Activity r1, android.app.Activity r2) {
            if (r1 == 0) goto L8
            boolean r0 = r1.isFinishing()
            if (r0 == 0) goto L14
        L8:
            if (r2 == 0) goto L13
            boolean r1 = r2.isFinishing()
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = r2
            goto L14
        L13:
            r1 = 0
        L14:
            return r1
    }

    public static boolean isAvailableLibExist(android.content.Context r5) {
            java.lang.Object r0 = com.huawei.hms.utils.Util.LOCK_OBJECT
            monitor-enter(r0)
            boolean r1 = com.huawei.hms.utils.Util.availableInit     // Catch: java.lang.Throwable -> L7c
            if (r1 != 0) goto L60
            r1 = 0
            android.content.pm.PackageManager r2 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L7c
            r3 = 1
            if (r2 != 0) goto L24
            java.lang.String r5 = "Util"
            java.lang.String r2 = "In isAvailableLibExist, Failed to get 'PackageManager' instance."
            com.huawei.hms.support.log.HMSLog.e(r5, r2)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r5 = "com.huawei.hms.adapter.AvailableAdapter"
            java.lang.Class.forName(r5)     // Catch: java.lang.ClassNotFoundException -> L1c java.lang.Throwable -> L7c
            goto L53
        L1c:
            java.lang.String r5 = "Util"
            java.lang.String r2 = "In isAvailableLibExist, Failed to find class AvailableAdapter."
            com.huawei.hms.support.log.HMSLog.e(r5, r2)     // Catch: java.lang.Throwable -> L7c
            goto L5c
        L24:
            java.lang.String r5 = r5.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r5 = r2.getPackageInfo(r5, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            android.content.pm.ApplicationInfo r5 = r5.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            if (r5 == 0) goto L5c
            android.os.Bundle r2 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            if (r2 == 0) goto L5c
            android.os.Bundle r5 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            java.lang.String r2 = "availableLoaded"
            java.lang.Object r5 = r5.get(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            if (r5 == 0) goto L5c
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            java.lang.String r2 = "yes"
            boolean r5 = r5.equalsIgnoreCase(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
            if (r5 == 0) goto L5c
            java.lang.String r5 = "Util"
            java.lang.String r2 = "available exist: true"
            com.huawei.hms.support.log.HMSLog.i(r5, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L55 java.lang.Throwable -> L7c
        L53:
            r1 = r3
            goto L5c
        L55:
            java.lang.String r5 = "Util"
            java.lang.String r2 = "In isAvailableLibExist, Failed to read meta data for the availableLoaded."
            com.huawei.hms.support.log.HMSLog.e(r5, r2)     // Catch: java.lang.Throwable -> L7c
        L5c:
            com.huawei.hms.utils.Util.isAvailableAvailable = r1     // Catch: java.lang.Throwable -> L7c
            com.huawei.hms.utils.Util.availableInit = r3     // Catch: java.lang.Throwable -> L7c
        L60:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "available exist: "
            r5.append(r0)
            boolean r0 = com.huawei.hms.utils.Util.isAvailableAvailable
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "Util"
            com.huawei.hms.support.log.HMSLog.i(r0, r5)
            boolean r5 = com.huawei.hms.utils.Util.isAvailableAvailable
            return r5
        L7c:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7c
            throw r5
    }

    public static boolean isChinaROM() {
            boolean r0 = com.huawei.hms.android.SystemUtils.isChinaROM()
            return r0
    }

    public static boolean isEMUI() {
            boolean r0 = com.huawei.hms.android.SystemUtils.isEMUI()
            return r0
    }

    public static void unBindServiceCatchException(android.content.Context r3, android.content.ServiceConnection r4) {
            java.lang.String r0 = "Util"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1a
            r1.<init>()     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = "Trying to unbind service from "
            r1.append(r2)     // Catch: java.lang.Exception -> L1a
            r1.append(r4)     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L1a
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> L1a
            r3.unbindService(r4)     // Catch: java.lang.Exception -> L1a
            goto L33
        L1a:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "On unBindServiceException:"
            r4.append(r1)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
        L33:
            return
    }
}
