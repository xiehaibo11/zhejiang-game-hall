package com.bianfeng.ymnsdk.ymnlink;

public class YmnLinkActivity extends android.app.Activity {
    static final java.lang.String KEY_GAME_ACTIVITY = "GAME_ACTIVITY";

    public YmnLinkActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String getGameActivityName() {
            r2 = this;
            java.lang.String r0 = r2.getGameActivityNameByManifest()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = r2.getGameActivityNameByDefault()
        Le:
            return r0
    }

    private java.lang.String getGameActivityNameByDefault() {
            r1 = this;
            java.lang.String r0 = "org.cocos2dx.cpp.AppActivity"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L6
            return r0
        L6:
            r0 = 0
            return r0
    }

    private java.lang.String getGameActivityNameByManifest() {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            java.lang.String r1 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            android.os.Bundle r0 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            java.lang.String r1 = "GAME_ACTIVITY"
            java.lang.String r0 = r0.getString(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            return r0
        L17:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.content.Intent r4 = r3.getIntent()     // Catch: java.lang.Exception -> L4b
            android.net.Uri r4 = r4.getData()     // Catch: java.lang.Exception -> L4b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b
            r0.<init>()     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = "ymnlink received data "
            r0.append(r1)     // Catch: java.lang.Exception -> L4b
            r0.append(r4)     // Catch: java.lang.Exception -> L4b
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L4b
            com.bianfeng.ymnsdk.util.Logger.d(r0)     // Catch: java.lang.Exception -> L4b
            com.bianfeng.ymnsdk.ymnlink.YmnLinkCache.setLaunchData(r4)     // Catch: java.lang.Exception -> L4b
            java.lang.String r0 = r3.getGameActivityName()     // Catch: java.lang.Exception -> L4b
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L4b
            r1.<init>()     // Catch: java.lang.Exception -> L4b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L4b
            if (r2 != 0) goto L35
            r1.setClassName(r3, r0)     // Catch: java.lang.Exception -> L4b
            goto L41
        L35:
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = r3.getPackageName()     // Catch: java.lang.Exception -> L4b
            android.content.Intent r1 = r0.getLaunchIntentForPackage(r1)     // Catch: java.lang.Exception -> L4b
        L41:
            r1.setData(r4)     // Catch: java.lang.Exception -> L4b
            r3.startActivity(r1)     // Catch: java.lang.Exception -> L4b
            r3.finish()     // Catch: java.lang.Exception -> L4b
            goto L4f
        L4b:
            r4 = move-exception
            r4.printStackTrace()
        L4f:
            return
    }
}
