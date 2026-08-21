package com.bianfeng.addpermission.common;

public class DensityUtils {
    private static android.util.DisplayMetrics appDisplayMetrics;
    public static float targetDensity;

    public DensityUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static float getTargetDensity() {
            float r0 = com.bianfeng.addpermission.common.DensityUtils.targetDensity
            return r0
    }

    public static boolean isPortrait(android.app.Activity r4) {
            r0 = 0
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Exception -> L19
            android.content.ComponentName r2 = new android.content.ComponentName     // Catch: java.lang.Exception -> L19
            java.lang.String r3 = "com.bianfeng.addpermission.ui.AddPermissionActivity"
            r2.<init>(r4, r3)     // Catch: java.lang.Exception -> L19
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r4 = r1.getActivityInfo(r2, r4)     // Catch: java.lang.Exception -> L19
            int r4 = r4.screenOrientation     // Catch: java.lang.Exception -> L19
            r1 = 1
            if (r4 != r1) goto L18
            r0 = 1
        L18:
            return r0
        L19:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    private static void setAppOrientation(android.app.Activity r3) {
            android.content.res.Resources r0 = r3.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            com.bianfeng.addpermission.common.DensityUtils.appDisplayMetrics = r0
            int r0 = r0.heightPixels
            android.util.DisplayMetrics r1 = com.bianfeng.addpermission.common.DensityUtils.appDisplayMetrics
            int r1 = r1.widthPixels
            boolean r2 = isPortrait(r3)
            if (r2 != 0) goto L21
            int r0 = java.lang.Math.min(r0, r1)
            float r0 = (float) r0
            r1 = 1135869952(0x43b40000, float:360.0)
            float r0 = r0 / r1
            com.bianfeng.addpermission.common.DensityUtils.targetDensity = r0
            goto L2b
        L21:
            int r0 = java.lang.Math.min(r0, r1)
            float r0 = (float) r0
            r1 = 1142947840(0x44200000, float:640.0)
            float r0 = r0 / r1
            com.bianfeng.addpermission.common.DensityUtils.targetDensity = r0
        L2b:
            float r0 = com.bianfeng.addpermission.common.DensityUtils.targetDensity
            android.util.DisplayMetrics r1 = com.bianfeng.addpermission.common.DensityUtils.appDisplayMetrics
            float r1 = r1.scaledDensity
            android.util.DisplayMetrics r2 = com.bianfeng.addpermission.common.DensityUtils.appDisplayMetrics
            float r2 = r2.density
            float r1 = r1 / r2
            float r0 = r0 * r1
            r1 = 1126170624(0x43200000, float:160.0)
            float r2 = com.bianfeng.addpermission.common.DensityUtils.targetDensity
            float r2 = r2 * r1
            int r1 = (int) r2
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            float r2 = com.bianfeng.addpermission.common.DensityUtils.targetDensity
            r3.density = r2
            r3.scaledDensity = r0
            r3.densityDpi = r1
            return
    }

    public static void setDefault(android.app.Activity r0) {
            setAppOrientation(r0)
            return
    }

    public static void setOrientation(android.app.Activity r0, java.lang.String r1) {
            setAppOrientation(r0)
            return
    }

    public static void setWidth(android.app.Activity r0) {
            return
    }
}
