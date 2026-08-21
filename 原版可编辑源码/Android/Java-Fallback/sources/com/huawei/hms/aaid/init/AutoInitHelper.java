package com.huawei.hms.aaid.init;

public class AutoInitHelper {
    public AutoInitHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void doAutoInit(android.content.Context r3) {
            java.lang.String r0 = "AutoInit"
            boolean r1 = isAutoInitEnabled(r3)     // Catch: java.lang.Exception -> L1b
            if (r1 == 0) goto L21
            java.lang.String r1 = "Push init start"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> L1b
            java.lang.Thread r1 = new java.lang.Thread     // Catch: java.lang.Exception -> L1b
            com.huawei.hms.opendevice.f r2 = new com.huawei.hms.opendevice.f     // Catch: java.lang.Exception -> L1b
            r2.<init>(r3)     // Catch: java.lang.Exception -> L1b
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1b
            r1.start()     // Catch: java.lang.Exception -> L1b
            goto L21
        L1b:
            r3 = move-exception
            java.lang.String r1 = "Push init failed"
            com.huawei.hms.support.log.HMSLog.e(r0, r1, r3)
        L21:
            return
    }

    public static boolean isAutoInitEnabled(android.content.Context r3) {
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r3)
            java.lang.String r1 = "push_kit_auto_init_enabled"
            boolean r2 = r0.containsKey(r1)
            if (r2 == 0) goto L11
            boolean r3 = r0.getBoolean(r1)
            return r3
        L11:
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r0.getApplicationInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            android.os.Bundle r3 = r3.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            boolean r3 = r3.getBoolean(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            return r3
        L26:
            r3 = 0
            return r3
    }

    public static void setAutoInitEnabled(android.content.Context r3, boolean r4) {
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r3)
            java.lang.String r1 = "push_kit_auto_init_enabled"
            boolean r2 = r0.getBoolean(r1)
            r0.saveBoolean(r1, r4)
            if (r4 == 0) goto L14
            if (r2 != 0) goto L14
            doAutoInit(r3)
        L14:
            return
    }
}
