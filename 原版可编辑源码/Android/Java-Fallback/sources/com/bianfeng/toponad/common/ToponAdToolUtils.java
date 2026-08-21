package com.bianfeng.toponad.common;

public class ToponAdToolUtils {
    public ToponAdToolUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getMetaDataInt(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L17
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: java.lang.Exception -> L17
            android.os.Bundle r2 = r2.metaData     // Catch: java.lang.Exception -> L17
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L17
            goto L31
        L17:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "头条后台配置测试没有带x"
            r3.append(r0)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            r2 = 0
        L31:
            java.lang.String r2 = getSplit(r2)
            return r2
    }

    public static java.lang.String getMetaDataStr(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L17
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: java.lang.Exception -> L17
            android.os.Bundle r2 = r2.metaData     // Catch: java.lang.Exception -> L17
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L17
            goto L31
        L17:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "头条后台配置测试没有带x"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            r2 = 0
        L31:
            java.lang.String r0 = "BF_ACTIVITY_MAIN"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L3a
            return r2
        L3a:
            java.lang.String r0 = "TOPONAD_MAIN_ACTIVITY"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L42
        L42:
            return r2
    }

    private static java.lang.String getSplit(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto Le
            java.lang.String r3 = "getSplit接到的字符串为空"
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            return r1
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r3.length()
            int r2 = r2 + (-1)
            char r2 = r3.charAt(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "x"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L3a
            r0 = 0
            int r1 = r3.length()
            int r1 = r1 + (-1)
            java.lang.String r3 = r3.substring(r0, r1)
        L3a:
            return r3
    }

    public static void hide_BottomUIMenu(android.app.Activity r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 11
            if (r0 <= r2) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L1a
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r0 = 8
            r3.setSystemUiVisibility(r0)
            goto L2b
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L2b
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r0 = 4102(0x1006, float:5.748E-42)
            r3.setSystemUiVisibility(r0)
        L2b:
            return
    }

    public static void sysfunc_hide_BottomUIMenu(android.app.Activity r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 11
            if (r0 <= r2) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L1a
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r0 = 8
            r3.setSystemUiVisibility(r0)
            goto L2b
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L2b
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r0 = 4102(0x1006, float:5.748E-42)
            r3.setSystemUiVisibility(r0)
        L2b:
            return
    }
}
