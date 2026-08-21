package com.huawei.updatesdk.support.pm;

public class PackageInstallerActivity extends android.app.Activity {
    public PackageInstallerActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private android.content.Intent a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "../"
            boolean r0 = r5.contains(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = ".."
            boolean r0 = r5.contains(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "%00"
            boolean r0 = r5.contains(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = ".\\.\\"
            boolean r0 = r5.contains(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "./"
            boolean r0 = r5.contains(r0)
            if (r0 != 0) goto L7b
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "android.intent.action.INSTALL_PACKAGE"
            r0.setAction(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r1 < r2) goto L65
            r1 = 1
            r0.addFlags(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = r4.getApplicationContext()
            java.lang.String r2 = r2.getPackageName()
            r1.append(r2)
            java.lang.String r2 = ".updateSdk.fileProvider"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r5)
            android.net.Uri r5 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.getUriForFile(r4, r1, r2)
            goto L6e
        L65:
            java.io.File r1 = new java.io.File
            r1.<init>(r5)
            android.net.Uri r5 = android.net.Uri.fromFile(r1)
        L6e:
            r0.setData(r5)
            boolean r4 = r4 instanceof android.app.Activity
            if (r4 != 0) goto L7a
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)
        L7a:
            return r0
        L7b:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "getNomalInstallIntent: Not a standard path"
            r4.<init>(r5)
            throw r4
    }

    @Override
    protected void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            super.onActivityResult(r2, r3, r4)
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r0 != r2) goto L26
            if (r3 != 0) goto Lf
            r2 = 7
            r3 = 0
            com.huawei.updatesdk.b.d.e.a(r2, r3)
            goto L26
        Lf:
            r2 = -10004(0xffffffffffffd8ec, float:NaN)
            if (r4 == 0) goto L1d
            com.huawei.updatesdk.a.b.b.b r3 = com.huawei.updatesdk.a.b.b.b.a(r4)
            java.lang.String r4 = "android.intent.extra.INSTALL_RESULT"
            int r2 = r3.a(r4, r2)
        L1d:
            if (r2 == 0) goto L26
            r3 = 1
            if (r2 == r3) goto L26
            r3 = 4
            com.huawei.updatesdk.b.d.e.a(r3, r2)
        L26:
            r1.finish()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            r0 = 1
            r6.requestWindowFeature(r0)
            com.huawei.updatesdk.a.a.d.h.c r1 = com.huawei.updatesdk.a.a.d.h.c.d()
            android.view.Window r2 = r6.getWindow()
            r1.a(r2)
            super.onCreate(r7)
            android.content.Intent r7 = r6.getIntent()
            java.lang.String r1 = "PackageInstallerActivity"
            if (r7 != 0) goto L23
            r6.finish()
            java.lang.String r7 = "PackageInstallerActivity error intent"
        L1f:
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r7)
            return
        L23:
            com.huawei.updatesdk.a.b.b.b r7 = com.huawei.updatesdk.a.b.b.b.a(r7)
            java.lang.String r2 = "install_path"
            java.lang.String r2 = r7.a(r2)
            java.lang.String r3 = "install_packagename"
            java.lang.String r7 = r7.a(r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 4
            if (r3 == 0) goto L44
            r7 = -3
            com.huawei.updatesdk.b.d.e.a(r4, r7)
            r6.finish()
            java.lang.String r7 = "PackageInstallerActivity can not find filePath."
            goto L1f
        L44:
            android.content.Intent r3 = r6.a(r6, r2)     // Catch: java.lang.Exception -> L80
            java.lang.String r5 = "android.intent.extra.NOT_UNKNOWN_SOURCE"
            r3.putExtra(r5, r0)     // Catch: java.lang.Exception -> L80
            java.lang.String r5 = "android.intent.extra.RETURN_RESULT"
            r3.putExtra(r5, r0)     // Catch: java.lang.Exception -> L80
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L80
            r0.<init>()     // Catch: java.lang.Exception -> L80
            java.lang.String r5 = " onCreate filePath:"
            r0.append(r5)     // Catch: java.lang.Exception -> L80
            r0.append(r2)     // Catch: java.lang.Exception -> L80
            java.lang.String r2 = ",packageName:"
            r0.append(r2)     // Catch: java.lang.Exception -> L80
            r0.append(r7)     // Catch: java.lang.Exception -> L80
            java.lang.String r7 = ",taskId:"
            r0.append(r7)     // Catch: java.lang.Exception -> L80
            int r7 = r6.getTaskId()     // Catch: java.lang.Exception -> L80
            r0.append(r7)     // Catch: java.lang.Exception -> L80
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L80
            com.huawei.updatesdk.a.a.c.a.a.a.c(r1, r7)     // Catch: java.lang.Exception -> L80
            r7 = 1000(0x3e8, float:1.401E-42)
            r6.startActivityForResult(r3, r7)     // Catch: java.lang.Exception -> L80
            goto L8c
        L80:
            java.lang.String r7 = "can not start install action"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r7)
            r7 = -2
            com.huawei.updatesdk.b.d.e.a(r4, r7)
            r6.finish()
        L8c:
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            r0 = 1000(0x3e8, float:1.401E-42)
            r1.finishActivity(r0)
            super.onDestroy()
            return
    }
}
