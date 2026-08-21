package com.huawei.hms.framework.common;

public class PowerUtils {
    private static final java.lang.String TAG = "PowerUtils";

    public static final class PowerMode {
        static int POWER_MODE_DEFAULT_RETURN_VALUE = 0;
        static int POWER_SAVER_MODE = 4;
        static java.lang.String SMART_MODE_STATUS = "SmartModeStatus";

        static {
                return
        }

        public PowerMode() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public PowerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isDozeIdleMode(android.content.Context r4) {
            r0 = 0
            java.lang.String r1 = "PowerUtils"
            if (r4 == 0) goto L33
            java.lang.String r2 = "power"
            java.lang.Object r4 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r4, r2)
            boolean r2 = r4 instanceof android.os.PowerManager
            if (r2 == 0) goto L12
            android.os.PowerManager r4 = (android.os.PowerManager) r4
            goto L13
        L12:
            r4 = 0
        L13:
            if (r4 == 0) goto L2d
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 23
            if (r2 < r3) goto L27
            boolean r0 = r4.isDeviceIdleMode()     // Catch: java.lang.RuntimeException -> L20
            goto L38
        L20:
            r4 = move-exception
            java.lang.String r2 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r1, r2, r4)
            goto L38
        L27:
            java.lang.String r4 = "isDozeIdleMode is version control state!"
            com.huawei.hms.framework.common.Logger.i(r1, r4)
            return r0
        L2d:
            java.lang.String r4 = "isDozeIdleMode powerManager is null!"
            com.huawei.hms.framework.common.Logger.i(r1, r4)
            return r0
        L33:
            java.lang.String r4 = "isDozeIdleMode Context is null!"
            com.huawei.hms.framework.common.Logger.i(r1, r4)
        L38:
            return r0
    }

    public static boolean isInteractive(android.content.Context r2) {
            if (r2 == 0) goto L3f
            java.lang.String r0 = "power"
            java.lang.Object r2 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r2, r0)
            boolean r0 = r2 instanceof android.os.PowerManager
            if (r0 == 0) goto L3f
            android.os.PowerManager r2 = (android.os.PowerManager) r2
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto L3f
            boolean r2 = r2.isInteractive()     // Catch: java.lang.RuntimeException -> L19
            goto L40
        L19:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getActiveNetworkInfo failed, exception:"
            r0.append(r1)
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "PowerUtils"
            com.huawei.hms.framework.common.Logger.i(r0, r2)
        L3f:
            r2 = 0
        L40:
            return r2
    }

    public static boolean isWhilteList(android.content.Context r3) {
            if (r3 == 0) goto L29
            java.lang.String r0 = "power"
            java.lang.Object r0 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r3, r0)
            boolean r1 = r0 instanceof android.os.PowerManager
            if (r1 == 0) goto Lf
            android.os.PowerManager r0 = (android.os.PowerManager) r0
            goto L10
        Lf:
            r0 = 0
        L10:
            java.lang.String r3 = r3.getPackageName()
            if (r0 == 0) goto L29
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r1 < r2) goto L29
            boolean r3 = r0.isIgnoringBatteryOptimizations(r3)     // Catch: java.lang.RuntimeException -> L21
            goto L2a
        L21:
            r3 = move-exception
            java.lang.String r0 = "PowerUtils"
            java.lang.String r1 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r0, r1, r3)
        L29:
            r3 = 0
        L2a:
            return r3
    }

    public static int readPowerSaverMode(android.content.Context r4) {
            java.lang.String r0 = "PowerUtils"
            if (r4 == 0) goto L44
            android.content.ContentResolver r1 = r4.getContentResolver()
            java.lang.String r2 = com.huawei.hms.framework.common.PowerUtils.PowerMode.SMART_MODE_STATUS
            int r3 = com.huawei.hms.framework.common.PowerUtils.PowerMode.POWER_MODE_DEFAULT_RETURN_VALUE
            int r1 = com.huawei.hms.framework.common.SettingUtil.getSystemInt(r1, r2, r3)
            int r2 = com.huawei.hms.framework.common.PowerUtils.PowerMode.POWER_MODE_DEFAULT_RETURN_VALUE
            if (r1 != r2) goto L4a
            r2 = 0
            java.lang.String r3 = "power"
            java.lang.Object r4 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r4, r3)
            boolean r3 = r4 instanceof android.os.PowerManager
            if (r3 == 0) goto L22
            r2 = r4
            android.os.PowerManager r2 = (android.os.PowerManager) r2
        L22:
            if (r2 == 0) goto L4a
            int r4 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r4 < r3) goto L3e
            boolean r4 = r2.isPowerSaveMode()     // Catch: java.lang.RuntimeException -> L37
            if (r4 == 0) goto L33
            int r4 = com.huawei.hms.framework.common.PowerUtils.PowerMode.POWER_SAVER_MODE     // Catch: java.lang.RuntimeException -> L37
            goto L35
        L33:
            int r4 = com.huawei.hms.framework.common.PowerUtils.PowerMode.POWER_MODE_DEFAULT_RETURN_VALUE     // Catch: java.lang.RuntimeException -> L37
        L35:
            r1 = r4
            goto L4a
        L37:
            r4 = move-exception
            java.lang.String r2 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r0, r2, r4)
            goto L4a
        L3e:
            java.lang.String r4 = "readPowerSaverMode is control by version!"
            com.huawei.hms.framework.common.Logger.i(r0, r4)
            goto L4a
        L44:
            java.lang.String r4 = "readPowerSaverMode Context is null!"
            com.huawei.hms.framework.common.Logger.i(r0, r4)
            r1 = 0
        L4a:
            return r1
    }
}
