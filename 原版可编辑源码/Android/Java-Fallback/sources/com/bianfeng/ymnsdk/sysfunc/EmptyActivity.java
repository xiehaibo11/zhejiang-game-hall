package com.bianfeng.ymnsdk.sysfunc;

public class EmptyActivity extends android.app.Activity {
    public EmptyActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void startGameActivity() {
            r7 = this;
            java.lang.String r0 = "sysfunc_open_activity"
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            boolean r2 = r1.isEmpty()
            java.lang.String r3 = ""
            if (r2 == 0) goto L15
            java.lang.String r1 = r7.getMetaData(r0)
            if (r1 != 0) goto L15
            r1 = r3
        L15:
            boolean r2 = r1.isEmpty()
            java.lang.String r4 = "org.cocos2dx.cpp.AppActivity"
            if (r2 == 0) goto L1e
            r1 = r4
        L1e:
            if (r1 == 0) goto Ld5
            java.lang.Class r2 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            r5.<init>(r7, r2)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            r2.<init>()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            java.lang.String r6 = "startActivity1 is "
            r2.append(r6)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            r2.append(r1)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            com.bianfeng.ymnsdk.util.Logger.i(r1)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            android.content.Intent r1 = r7.getIntent()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            android.net.Uri r1 = r1.getData()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            if (r1 == 0) goto L52
            android.content.Intent r1 = r7.getIntent()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            android.net.Uri r1 = r1.getData()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            r5.setData(r1)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
        L52:
            android.content.Intent r1 = r7.getIntent()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            android.os.Bundle r1 = r1.getExtras()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            if (r1 == 0) goto L67
            android.content.Intent r1 = r7.getIntent()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            android.os.Bundle r1 = r1.getExtras()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            r5.putExtras(r1)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
        L67:
            r7.startActivity(r5)     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            r7.finish()     // Catch: java.lang.Exception -> L6e java.lang.ClassNotFoundException -> L70
            goto Ld5
        L6e:
            r0 = move-exception
            goto Ld2
        L70:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> L6e
            java.lang.String r0 = r7.getMetaData(r0)     // Catch: java.lang.Exception -> L6e
            if (r0 != 0) goto L7b
            goto L7c
        L7b:
            r3 = r0
        L7c:
            boolean r0 = r3.isEmpty()     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto L83
            goto L84
        L83:
            r4 = r3
        L84:
            java.lang.Class r0 = java.lang.Class.forName(r4)     // Catch: java.lang.Exception -> L6e
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L6e
            r1.<init>(r7, r0)     // Catch: java.lang.Exception -> L6e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6e
            r0.<init>()     // Catch: java.lang.Exception -> L6e
            java.lang.String r2 = "startActivity2 is "
            r0.append(r2)     // Catch: java.lang.Exception -> L6e
            r0.append(r4)     // Catch: java.lang.Exception -> L6e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L6e
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L6e
            android.content.Intent r0 = r7.getIntent()     // Catch: java.lang.Exception -> L6e
            android.net.Uri r0 = r0.getData()     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto Lb6
            android.content.Intent r0 = r7.getIntent()     // Catch: java.lang.Exception -> L6e
            android.net.Uri r0 = r0.getData()     // Catch: java.lang.Exception -> L6e
            r1.setData(r0)     // Catch: java.lang.Exception -> L6e
        Lb6:
            android.content.Intent r0 = r7.getIntent()     // Catch: java.lang.Exception -> L6e
            android.os.Bundle r0 = r0.getExtras()     // Catch: java.lang.Exception -> L6e
            if (r0 == 0) goto Lcb
            android.content.Intent r0 = r7.getIntent()     // Catch: java.lang.Exception -> L6e
            android.os.Bundle r0 = r0.getExtras()     // Catch: java.lang.Exception -> L6e
            r1.putExtras(r0)     // Catch: java.lang.Exception -> L6e
        Lcb:
            r7.startActivity(r1)     // Catch: java.lang.Exception -> L6e
            r7.finish()     // Catch: java.lang.Exception -> L6e
            goto Ld5
        Ld2:
            r0.printStackTrace()
        Ld5:
            r7.finish()
            return
    }

    public java.lang.String getMetaData(java.lang.String r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            java.lang.String r2 = r4.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo(r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            if (r1 == 0) goto L17
            android.os.Bundle r1 = r1.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            goto L18
        L17:
            r1 = r0
        L18:
            if (r1 == 0) goto L25
            java.lang.Object r5 = r1.get(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            if (r5 == 0) goto L25
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            r0 = r5
        L25:
            return r0
    }

    @Override
    public void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            boolean r2 = r1.isTaskRoot()
            if (r2 != 0) goto L33
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r0 = "android.intent.category.LAUNCHER"
            boolean r2 = r2.hasCategory(r0)
            if (r2 == 0) goto L33
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r2 = r2.getAction()
            if (r2 == 0) goto L33
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r2 = r2.getAction()
            java.lang.String r0 = "android.intent.action.MAIN"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L33
            r1.finish()
            return
        L33:
            r1.startGameActivity()
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.init(r1)
            java.lang.String r2 = "EmptyActivity onCreate"
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            return
    }
}
