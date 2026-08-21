package com.bianfeng.utilslib.screen;

public class HuaWeiUtils {
    public static final int FLAG_NOTCH_HORIZONTAL = 1024;
    public static final int FLAG_NOTCH_PORTRAIT = 512;
    public static final int FLAG_NOTCH_SUPPORT = 256;

    public HuaWeiUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getBarSize(android.app.Activity r0) {
            r0 = 0
            return r0
    }

    public static boolean hasNotch(android.content.Context r4) {
            r0 = 0
            java.lang.ClassLoader r4 = r4.getClassLoader()     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            java.lang.String r1 = "com.huawei.android.util.HwNotchSizeUtil"
            java.lang.Class r4 = r4.loadClass(r1)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            java.lang.String r1 = "hasNotchInScreen"
            java.lang.Class[] r2 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            java.lang.reflect.Method r1 = r4.getMethod(r1, r2)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            java.lang.Object r4 = r1.invoke(r4, r2)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            boolean r4 = r4.booleanValue()     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3d
            return r4
        L20:
            r4 = move-exception
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Throwable -> L3d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            r2.<init>()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r3 = "HuaWeiUtils  hasNotch "
            r2.append(r3)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L3d
            r2.append(r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L3d
            r1.e(r4)     // Catch: java.lang.Throwable -> L3d
        L3d:
            return r0
    }

    public static void setFullScreenWindowLayoutInDisplayCutout(android.view.Window r6) {
            if (r6 != 0) goto L3
            return
        L3:
            android.view.WindowManager$LayoutParams r6 = r6.getAttributes()
            java.lang.String r0 = "com.huawei.android.view.LayoutParamsEx"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L3b
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.view.WindowManager$LayoutParams> r3 = android.view.WindowManager.LayoutParams.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r3[r4] = r6     // Catch: java.lang.Exception -> L3b
            java.lang.Object r6 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "addHwFlags"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L3b
            r3[r4] = r5     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r2 = 256(0x100, float:3.59E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3b
            r1[r4] = r2     // Catch: java.lang.Exception -> L3b
            r0.invoke(r6, r1)     // Catch: java.lang.Exception -> L3b
            goto L58
        L3b:
            r6 = move-exception
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "HuaWeiUtils  setFullScreenWindowLayoutInDisplayCutout "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.e(r6)
        L58:
            return
    }
}
