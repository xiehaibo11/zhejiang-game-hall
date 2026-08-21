package com.huawei.updatesdk.b.d;

public class e {
    public static void a(int r3, int r4) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "INSTALL_STATE"
            r1.putInt(r2, r3)
            java.lang.String r3 = "INSTALL_TYPE"
            r1.putInt(r3, r4)
            r0.putExtras(r1)
            com.huawei.updatesdk.a.b.b.b r3 = com.huawei.updatesdk.a.b.b.b.a(r0)
            com.huawei.updatesdk.b.f.c r4 = com.huawei.updatesdk.b.f.c.b()
            r4.c(r3)
            return
    }

    public static void a(android.content.Context r6, java.lang.String r7, java.lang.String r8) {
            r0 = 3
            r1 = 1
            a(r0, r1)
            java.io.File r0 = new java.io.File
            r0.<init>(r7)
            boolean r1 = r0.exists()
            r2 = 4
            java.lang.String r3 = "InstallProcess"
            if (r1 == 0) goto L4e
            boolean r1 = r0.isFile()
            if (r1 == 0) goto L4e
            long r0 = r0.length()
            r4 = 0
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 > 0) goto L24
            goto L4e
        L24:
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.huawei.updatesdk.support.pm.PackageInstallerActivity> r1 = com.huawei.updatesdk.support.pm.PackageInstallerActivity.class
            r0.<init>(r6, r1)
            java.lang.String r1 = "install_path"
            r0.putExtra(r1, r7)
            java.lang.String r7 = "install_packagename"
            r0.putExtra(r7, r8)
            boolean r7 = r6 instanceof android.app.Activity
            if (r7 != 0) goto L3e
            r7 = 402653184(0x18000000, float:1.6543612E-24)
            r0.setFlags(r7)
        L3e:
            r6.startActivity(r0)     // Catch: android.content.ActivityNotFoundException -> L42
            goto L4d
        L42:
            r6 = move-exception
            r7 = -10002(0xffffffffffffd8ee, float:NaN)
            a(r2, r7)
            java.lang.String r7 = " can not start install !"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r3, r7, r6)
        L4d:
            return
        L4e:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = "system install failed,file not existed filePath:"
            r6.append(r8)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.b(r3, r6)
            r6 = -10003(0xffffffffffffd8ed, float:NaN)
            a(r2, r6)
            return
    }
}
