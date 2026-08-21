package com.bianfeng.addpermission.common;

public class AddPermissionToolUtils {
    public AddPermissionToolUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getAppName(android.content.Context r3) {
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1c
            java.lang.String r1 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1c
            r2 = 0
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1c
            android.content.pm.ApplicationInfo r0 = r0.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1c
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1c
            java.lang.CharSequence r3 = r0.loadLabel(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1c
            java.lang.String r3 = r3.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1c
            return r3
        L1c:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r3 = "边锋"
            return r3
    }

    public static java.lang.String getMetaData(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L22
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: java.lang.Exception -> L22
            android.os.Bundle r0 = r2.metaData     // Catch: java.lang.Exception -> L22
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L1f
            android.os.Bundle r2 = r2.metaData     // Catch: java.lang.Exception -> L22
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L22
            goto L27
        L1f:
            java.lang.String r2 = ""
            return r2
        L22:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
        L27:
            return r2
    }

    public static java.lang.String getParamsInfo(android.content.Context r1, java.lang.String r2) {
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.lang.Exception -> L1e
            java.lang.String r0 = "usdk.cfg"
            java.io.InputStream r1 = r1.open(r0)     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = getString(r1)     // Catch: java.lang.Exception -> L1e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1e
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = "addpermission"
            org.json.JSONObject r1 = r0.getJSONObject(r1)     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Exception -> L1e
            goto L24
        L1e:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
        L24:
            return r1
    }

    public static java.lang.String getString(java.io.InputStream r2) {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader     // Catch: java.io.UnsupportedEncodingException -> L8
            java.lang.String r1 = "UTF-8"
            r0.<init>(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> L8
            goto Ld
        L8:
            r2 = move-exception
            r2.printStackTrace()
            r0 = 0
        Ld:
            java.io.BufferedReader r2 = new java.io.BufferedReader
            r2.<init>(r0)
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r1 = ""
            r0.<init>(r1)
        L19:
            java.lang.String r1 = r2.readLine()     // Catch: java.io.IOException -> L28
            if (r1 == 0) goto L2c
            r0.append(r1)     // Catch: java.io.IOException -> L28
            java.lang.String r1 = "\n"
            r0.append(r1)     // Catch: java.io.IOException -> L28
            goto L19
        L28:
            r2 = move-exception
            r2.printStackTrace()
        L2c:
            java.lang.String r2 = r0.toString()
            return r2
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
