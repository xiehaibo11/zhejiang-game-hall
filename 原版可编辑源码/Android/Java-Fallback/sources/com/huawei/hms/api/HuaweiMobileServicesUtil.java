package com.huawei.hms.api;

public abstract class HuaweiMobileServicesUtil {
    public static final java.lang.String HMS_ERROR_DIALOG = "HuaweiMobileServicesErrorDialog";

    public HuaweiMobileServicesUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.app.Dialog getErrorDialog(int r2, android.app.Activity r3, int r4) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            r1 = 0
            android.app.Dialog r2 = r0.getErrorDialog(r3, r2, r4, r1)
            return r2
    }

    public static android.app.Dialog getErrorDialog(int r1, android.app.Activity r2, int r3, android.content.DialogInterface.OnCancelListener r4) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            android.app.Dialog r1 = r0.getErrorDialog(r2, r1, r3, r4)
            return r1
    }

    public static java.lang.String getErrorString(int r1) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            java.lang.String r1 = r0.getErrorString(r1)
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String getOpenSourceSoftwareLicenseInfo(android.content.Context r0) {
            java.lang.String r0 = ""
            return r0
    }

    public static android.content.Context getRemoteContext(android.content.Context r2) {
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            java.lang.String r0 = r0.getHMSPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            r1 = 2
            android.content.Context r2 = r2.createPackageContext(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            return r2
        Le:
            r2 = 0
            return r2
    }

    public static android.content.res.Resources getRemoteResource(android.content.Context r1) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11
            java.lang.String r1 = r1.getHMSPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11
            android.content.res.Resources r1 = r0.getResourcesForApplication(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11
            return r1
        L11:
            r1 = 0
            return r1
    }

    public static int isHuaweiMobileServicesAvailable(android.content.Context r1) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            int r1 = r0.isHuaweiMobileServicesAvailable(r1)
            return r1
    }

    public static int isHuaweiMobileServicesAvailable(android.content.Context r11, int r12) {
            java.lang.String r0 = "context must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r11, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 >= r1) goto Le
            r11 = 21
            return r11
        Le:
            com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
            r0.<init>(r11)
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r11)
            java.lang.String r1 = r1.getHMSPackageName()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "hmsPackageName is "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "HuaweiMobileServicesUtil"
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.getInstance(r11)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = r2.getHMSPackageStates()
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r4 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L48
            java.lang.String r11 = "HMS is not installed"
            com.huawei.hms.support.log.HMSLog.i(r3, r11)
            r11 = 1
            return r11
        L48:
            java.lang.String r4 = com.huawei.hms.utils.ReadApkFileUtil.getHmsPath(r11)
            int r5 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r6 = 5
            r7 = 2
            java.lang.String r8 = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05"
            r9 = 9
            java.lang.String r10 = "3517262215D8D3008CBF888750B6418EDC4D562AC33ED6874E0D73ABA667BC3C"
            if (r5 >= r6) goto L7f
            int r5 = r0.getPackageVersionCode(r1)
            r6 = 20500000(0x138ce20, float:3.394335E-38)
            if (r5 >= r6) goto L7f
            boolean r4 = com.huawei.hms.utils.ReadApkFileUtil.isCertFound(r4)
            if (r4 == 0) goto L7f
            java.lang.String r11 = r0.getPackageSignature(r1)
            boolean r12 = r8.equalsIgnoreCase(r11)
            if (r12 != 0) goto L7e
            boolean r12 = r10.equalsIgnoreCase(r11)
            if (r12 != 0) goto L7e
            boolean r11 = r10.equalsIgnoreCase(r11)
            if (r11 != 0) goto L7e
            return r9
        L7e:
            return r7
        L7f:
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r4 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.SPOOF
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L8d
            java.lang.String r11 = "HMS is spoofed"
            com.huawei.hms.support.log.HMSLog.i(r3, r11)
            return r9
        L8d:
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r4 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.DISABLED
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto L9c
            java.lang.String r11 = "HMS is disabled"
            com.huawei.hms.support.log.HMSLog.i(r3, r11)
            r11 = 3
            return r11
        L9c:
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r4 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto Lbb
            java.lang.String r0 = r0.getPackageSignature(r1)
            boolean r1 = r8.equalsIgnoreCase(r0)
            if (r1 != 0) goto Lbb
            boolean r1 = r10.equalsIgnoreCase(r0)
            if (r1 != 0) goto Lbb
            boolean r0 = r10.equalsIgnoreCase(r0)
            if (r0 != 0) goto Lbb
            return r9
        Lbb:
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r11)
            int r0 = r0.getHmsVersionCode()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "connect versionCode:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r3, r0)
            com.huawei.hms.utils.HMSPackageManager r11 = com.huawei.hms.utils.HMSPackageManager.getInstance(r11)
            boolean r11 = r11.isApkUpdateNecessary(r12)
            if (r11 == 0) goto Le7
            java.lang.String r11 = "The current version does not meet the minimum version requirements"
            com.huawei.hms.support.log.HMSLog.i(r3, r11)
            return r7
        Le7:
            r11 = 0
            return r11
    }

    public static boolean isUserRecoverableError(int r1) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            boolean r1 = r0.isUserResolvableError(r1)
            return r1
    }

    public static boolean popupErrDlgFragment(int r1, android.app.Activity r2, int r3, android.content.DialogInterface.OnCancelListener r4) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            boolean r1 = r0.showErrorDialogFragment(r2, r1, r3, r4)
            return r1
    }

    public static boolean popupErrDlgFragment(int r6, android.app.Activity r7, android.app.Fragment r8, int r9, android.content.DialogInterface.OnCancelListener r10) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            r1 = r7
            r2 = r6
            r3 = r8
            r4 = r9
            r5 = r10
            boolean r6 = r0.showErrorDialogFragment(r1, r2, r3, r4, r5)
            return r6
    }

    public static void setApplication(android.app.Application r1) {
            com.huawei.hms.support.common.ActivityMgr r0 = com.huawei.hms.support.common.ActivityMgr.INST
            r0.init(r1)
            return
    }

    public static boolean showErrorDialogFragment(int r2, android.app.Activity r3, int r4) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            r1 = 0
            boolean r2 = r0.showErrorDialogFragment(r3, r2, r4, r1)
            return r2
    }

    public static void showErrorNotification(int r1, android.content.Context r2) {
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            r0.showErrorNotification(r2, r1)
            return
    }
}
