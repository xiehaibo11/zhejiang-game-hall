package com.bianfeng.utilslib.screen;

public class XiaoMiUtils {
    public static final int FLAG_NOTCH_HORIZONTAL = 1024;
    public static final int FLAG_NOTCH_PORTRAIT = 512;
    public static final int FLAG_NOTCH_SUPPORT = 256;

    public XiaoMiUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getBarSize(android.app.Activity r1) {
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            boolean r0 = r0.isLand(r1)
            if (r0 == 0) goto Lf
            int r1 = getNotWidth(r1)
            return r1
        Lf:
            int r1 = getNotHeight(r1)
            return r1
    }

    private static int getNotHeight(android.content.Context r4) {
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "notch_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r0 = r0.getIdentifier(r1, r2, r3)
            if (r0 <= 0) goto L19
            android.content.res.Resources r4 = r4.getResources()
            int r4 = r4.getDimensionPixelSize(r0)
            goto L1a
        L19:
            r4 = 0
        L1a:
            return r4
    }

    private static int getNotWidth(android.content.Context r4) {
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "notch_width"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r0 = r0.getIdentifier(r1, r2, r3)
            if (r0 <= 0) goto L19
            android.content.res.Resources r4 = r4.getResources()
            int r4 = r4.getDimensionPixelSize(r0)
            goto L1a
        L19:
            r4 = 0
        L1a:
            return r4
    }

    public static boolean hasNotch(android.content.Context r6) {
            r0 = 0
            java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r6 = r6.loadClass(r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.String r1 = "getInt"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r0] = r4     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            r5 = 1
            r3[r5] = r4     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.reflect.Method r1 = r6.getMethod(r1, r3)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.String r3 = "ro.miui.notch"
            r2[r0] = r3     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            r2[r5] = r3     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Object r6 = r1.invoke(r6, r2)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L3b
            if (r6 != r5) goto L36
            r0 = 1
        L36:
            return r0
        L37:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L3b
        L3b:
            return r0
    }

    public static void setFullScreenWindowLayoutInDisplayCutout(android.view.Window r6) {
            java.lang.Class<android.view.Window> r0 = android.view.Window.class
            java.lang.String r1 = "addExtraFlags"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L1e
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L1e
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L1e
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L1e
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L1e
            r2 = 768(0x300, float:1.076E-42)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L1e
            r1[r5] = r2     // Catch: java.lang.Exception -> L1e
            r0.invoke(r6, r1)     // Catch: java.lang.Exception -> L1e
            goto L27
        L1e:
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = "addExtraFlags not found."
            r6.e(r0)
        L27:
            return
    }
}
