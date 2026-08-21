package com.bianfeng.utilslib;

public class ConfigurationUtils {
    private static com.bianfeng.utilslib.ConfigurationUtils utils;
    private int mHeight;
    private int mWidth;
    private int orientation;

    private ConfigurationUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.ConfigurationUtils getInstance() {
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.ConfigurationUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.ConfigurationUtils r0 = new com.bianfeng.utilslib.ConfigurationUtils
            r0.<init>()
            com.bianfeng.utilslib.ConfigurationUtils.utils = r0
        Lb:
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.ConfigurationUtils.utils
            return r0
    }

    public int getHeight() {
            r1 = this;
            int r0 = r1.mHeight
            return r0
    }

    public int getWidth() {
            r1 = this;
            int r0 = r1.mWidth
            return r0
    }

    public boolean isLand() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.orientation
            r0.append(r1)
            java.lang.String r1 = "---屏幕"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymnsdk"
            android.util.Log.e(r1, r0)
            int r0 = r2.orientation
            if (r0 == 0) goto L22
            r1 = 6
            if (r0 != r1) goto L20
            goto L22
        L20:
            r0 = 0
            goto L23
        L22:
            r0 = 1
        L23:
            return r0
    }

    public boolean isLand(android.app.Activity r3) {
            r2 = this;
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            int r3 = r0.getActivityOrientation(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = "---屏幕"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymnsdk"
            android.util.Log.e(r1, r0)
            if (r3 == 0) goto L26
            r0 = 6
            if (r3 != r0) goto L24
            goto L26
        L24:
            r3 = 0
            goto L27
        L26:
            r3 = 1
        L27:
            return r3
    }

    public void onInit(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            int r2 = r0.getActivityOrientation(r2)
            r1.orientation = r2
            return
    }

    public void onWindowFocusChanged(boolean r4, android.app.Activity r5) {
            r3 = this;
            com.bianfeng.utilslib.AppConfigUtils r4 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            int r4 = r4.getActivityOrientation(r5)
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            java.lang.String r1 = "window"
            java.lang.Object r5 = r5.getSystemService(r1)
            android.view.WindowManager r5 = (android.view.WindowManager) r5
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r1 < r2) goto L23
            android.view.Display r5 = r5.getDefaultDisplay()
            r5.getRealMetrics(r0)
            goto L2a
        L23:
            android.view.Display r5 = r5.getDefaultDisplay()
            r5.getMetrics(r0)
        L2a:
            int r5 = r0.widthPixels
            int r0 = r0.heightPixels
            r1 = 6
            if (r4 == r1) goto L42
            if (r4 != 0) goto L34
            goto L42
        L34:
            if (r5 >= r0) goto L38
            r4 = r5
            goto L39
        L38:
            r4 = r0
        L39:
            r3.mWidth = r4
            if (r5 <= r0) goto L3e
            goto L3f
        L3e:
            r5 = r0
        L3f:
            r3.mHeight = r5
            goto L4f
        L42:
            if (r5 <= r0) goto L46
            r4 = r5
            goto L47
        L46:
            r4 = r0
        L47:
            r3.mWidth = r4
            if (r5 >= r0) goto L4c
            goto L4d
        L4c:
            r5 = r0
        L4d:
            r3.mHeight = r5
        L4f:
            return
    }
}
