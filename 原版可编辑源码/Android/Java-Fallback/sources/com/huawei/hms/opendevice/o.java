package com.huawei.hms.opendevice;

public class o {
    public static com.huawei.hms.aaid.entity.DeleteTokenReq a(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            com.huawei.hms.aaid.entity.DeleteTokenReq r1 = a(r1, r0, r0, r2, r0)
            return r1
    }

    public static com.huawei.hms.aaid.entity.DeleteTokenReq a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0 = 0
            com.huawei.hms.aaid.entity.DeleteTokenReq r1 = a(r1, r2, r0, r0, r3)
            return r1
    }

    public static com.huawei.hms.aaid.entity.DeleteTokenReq a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            com.huawei.hms.aaid.entity.DeleteTokenReq r0 = new com.huawei.hms.aaid.entity.DeleteTokenReq
            r0.<init>()
            r0.setAppId(r3)
            r0.setScope(r6)
            r0.setProjectId(r4)
            java.lang.String r1 = r2.getPackageName()
            r0.setPkgName(r1)
            r0.setSubjectId(r5)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L25
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r2)
            r0.setAppId(r3)
        L25:
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 == 0) goto L30
            java.lang.String r3 = "HCM"
            r0.setScope(r3)
        L30:
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 == 0) goto L3d
            java.lang.String r2 = d(r2)
            r0.setProjectId(r2)
        L3d:
            return r0
    }

    public static java.lang.String a(android.content.Context r2) {
            com.huawei.hms.aaid.utils.PushPreferences r0 = new com.huawei.hms.aaid.utils.PushPreferences
            java.lang.String r1 = "aaid"
            r0.<init>(r2, r1)
            boolean r2 = r0.containsKey(r1)
            if (r2 == 0) goto L12
            java.lang.String r2 = r0.getString(r1)
            return r2
        L12:
            r2 = 0
            return r2
    }

    public static com.huawei.hms.aaid.entity.DeleteTokenReq b(android.content.Context r1) {
            r0 = 0
            com.huawei.hms.aaid.entity.DeleteTokenReq r1 = a(r1, r0, r0, r0, r0)
            return r1
    }

    public static com.huawei.hms.aaid.entity.TokenReq b(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            com.huawei.hms.aaid.entity.TokenReq r1 = b(r1, r0, r0, r2, r0)
            return r1
    }

    public static com.huawei.hms.aaid.entity.TokenReq b(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0 = 0
            com.huawei.hms.aaid.entity.TokenReq r1 = b(r1, r2, r0, r0, r3)
            return r1
    }

    public static com.huawei.hms.aaid.entity.TokenReq b(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            com.huawei.hms.aaid.entity.TokenReq r0 = new com.huawei.hms.aaid.entity.TokenReq
            r0.<init>()
            java.lang.String r1 = r2.getPackageName()
            r0.setPackageName(r1)
            r0.setAppId(r3)
            r0.setScope(r6)
            r0.setProjectId(r4)
            r0.setSubjectId(r5)
            r5 = 0
            r0.setMultiSender(r5)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L29
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r2)
            r0.setAppId(r3)
        L29:
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 == 0) goto L36
            java.lang.String r3 = d(r2)
            r0.setProjectId(r3)
        L36:
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 == 0) goto L41
            java.lang.String r3 = "HCM"
            r0.setScope(r3)
        L41:
            com.huawei.hms.opendevice.i r2 = com.huawei.hms.opendevice.i.a(r2)
            java.lang.String r3 = "hasRequestAgreement"
            boolean r4 = r2.getBoolean(r3)
            if (r4 != 0) goto L55
            r4 = 1
            r0.setFirstTime(r4)
            r2.saveBoolean(r3, r4)
            goto L58
        L55:
            r0.setFirstTime(r5)
        L58:
            return r0
    }

    public static synchronized java.lang.String c(android.content.Context r4) {
            java.lang.Class<com.huawei.hms.opendevice.o> r0 = com.huawei.hms.opendevice.o.class
            monitor-enter(r0)
            com.huawei.hms.aaid.utils.PushPreferences r1 = new com.huawei.hms.aaid.utils.PushPreferences     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "aaid"
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "aaid"
            boolean r4 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L35
            if (r4 == 0) goto L19
            java.lang.String r4 = "aaid"
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L35
            goto L33
        L19:
            java.util.UUID r4 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "aaid"
            r1.saveString(r2, r4)     // Catch: java.lang.Throwable -> L35
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L35
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L35
            java.lang.String r3 = "creationTime"
            r1.saveLong(r3, r2)     // Catch: java.lang.Throwable -> L35
        L33:
            monitor-exit(r0)
            return r4
        L35:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static java.lang.String d(android.content.Context r1) {
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r1)
            java.lang.String r0 = "client/project_id"
            java.lang.String r1 = r1.getString(r0)
            return r1
    }

    public static boolean e(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            java.lang.String r2 = r2.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            r0 = 0
            if (r2 == 0) goto L24
            android.os.Bundle r1 = r2.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            if (r1 != 0) goto L16
            goto L24
        L16:
            android.os.Bundle r2 = r2.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            java.lang.String r1 = "com.huawei.hms.client.service.name:base"
            java.lang.String r2 = r2.getString(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L25
            if (r2 == 0) goto L2c
        L24:
            return r0
        L25:
            java.lang.String r2 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.String r0 = "isIntegratedBaseSdk failed."
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
        L2c:
            r2 = 1
            return r2
    }
}
