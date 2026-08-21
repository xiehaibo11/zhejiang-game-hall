package com.bianfeng.utilslib;

public class DensityUtils {
    private static com.bianfeng.utilslib.DensityUtils utils;
    private android.util.DisplayMetrics appDisplayMetrics;
    private float targetDensity;

    private DensityUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean checkDeviceHasNavigationBar(android.app.Activity r7) {
            r6 = this;
            android.view.Window r0 = r7.getWindow()
            android.view.View r0 = r0.getDecorView()
            int r0 = r0.getSystemUiVisibility()
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.Logger.getInstance()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "----"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.i(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r4 = 17
            if (r0 < r4) goto L73
            java.lang.String r0 = "window"
            java.lang.Object r7 = r7.getSystemService(r0)
            android.view.WindowManager r7 = (android.view.WindowManager) r7
            android.view.Display r7 = r7.getDefaultDisplay()
            android.graphics.Point r0 = new android.graphics.Point
            r0.<init>()
            android.graphics.Point r4 = new android.graphics.Point
            r4.<init>()
            r7.getSize(r0)
            r7.getRealSize(r4)
            com.bianfeng.utilslib.Logger r7 = com.bianfeng.utilslib.Logger.getInstance()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            int r3 = r4.y
            r5.append(r3)
            java.lang.String r3 = "--"
            r5.append(r3)
            int r3 = r0.y
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r7.i(r3)
            int r7 = r4.y
            int r0 = r0.y
            if (r7 == r0) goto L71
            goto L72
        L71:
            r1 = 0
        L72:
            return r1
        L73:
            android.view.ViewConfiguration r7 = android.view.ViewConfiguration.get(r7)
            boolean r7 = r7.hasPermanentMenuKey()
            r0 = 4
            boolean r0 = android.view.KeyCharacterMap.deviceHasKey(r0)
            if (r7 != 0) goto L86
            if (r0 == 0) goto L85
            goto L86
        L85:
            return r1
        L86:
            return r2
    }

    public static com.bianfeng.utilslib.DensityUtils getInstance() {
            com.bianfeng.utilslib.DensityUtils r0 = com.bianfeng.utilslib.DensityUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.DensityUtils r0 = new com.bianfeng.utilslib.DensityUtils
            r0.<init>()
            com.bianfeng.utilslib.DensityUtils.utils = r0
        Lb:
            com.bianfeng.utilslib.DensityUtils r0 = com.bianfeng.utilslib.DensityUtils.utils
            return r0
    }

    public static int px2dp(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 / r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    private void setAppOrientation(android.app.Activity r3, java.lang.String r4) {
            r2 = this;
            android.content.res.Resources r0 = r3.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            r2.appDisplayMetrics = r0
            java.lang.String r0 = "cessssss"
            java.lang.String r1 = "setAppOrientation: "
            android.util.Log.e(r0, r1)
            java.lang.String r0 = "height"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L24
            android.util.DisplayMetrics r4 = r2.appDisplayMetrics
            int r4 = r4.heightPixels
            float r4 = (float) r4
            r0 = 1135869952(0x43b40000, float:360.0)
            float r4 = r4 / r0
            r2.targetDensity = r4
            goto L2e
        L24:
            android.util.DisplayMetrics r4 = r2.appDisplayMetrics
            int r4 = r4.widthPixels
            float r4 = (float) r4
            r0 = 1142947840(0x44200000, float:640.0)
            float r4 = r4 / r0
            r2.targetDensity = r4
        L2e:
            float r4 = r2.targetDensity
            android.util.DisplayMetrics r0 = r2.appDisplayMetrics
            float r0 = r0.scaledDensity
            android.util.DisplayMetrics r1 = r2.appDisplayMetrics
            float r1 = r1.density
            float r0 = r0 / r1
            float r4 = r4 * r0
            r0 = 1126170624(0x43200000, float:160.0)
            float r1 = r2.targetDensity
            float r1 = r1 * r0
            int r0 = (int) r1
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            float r1 = r2.targetDensity
            r3.density = r1
            r3.scaledDensity = r4
            r3.densityDpi = r0
            return
    }

    public int getNavigationBarHeight(android.app.Activity r4) {
            r3 = this;
            boolean r0 = r3.checkDeviceHasNavigationBar(r4)
            if (r0 == 0) goto L19
            android.content.res.Resources r4 = r4.getResources()
            java.lang.String r0 = "navigation_bar_height"
            java.lang.String r1 = "dimen"
            java.lang.String r2 = "android"
            int r0 = r4.getIdentifier(r0, r1, r2)
            int r4 = r4.getDimensionPixelSize(r0)
            return r4
        L19:
            r4 = 0
            return r4
    }

    public float getTargetDensity() {
            r1 = this;
            float r0 = r1.targetDensity
            return r0
    }

    public void setDefault(android.app.Activity r2) {
            r1 = this;
            java.lang.String r0 = "height"
            r1.setAppOrientation(r2, r0)
            return
    }

    public void setOrientation(android.app.Activity r1, java.lang.String r2) {
            r0 = this;
            r0.setAppOrientation(r1, r2)
            return
    }
}
