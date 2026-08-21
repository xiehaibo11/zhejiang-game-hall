package com.huawei.hms.opendevice;

public class f implements java.lang.Runnable {
    public android.content.Context a;

    public f(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public void run() {
            r9 = this;
            java.lang.String r0 = "push kit sdk not exists"
            java.lang.String r1 = "Push init failed"
            java.lang.String r2 = "AutoInit"
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS     // Catch: java.lang.Exception -> L92
            int r3 = r3.getInternalCode()     // Catch: java.lang.Exception -> L92
            r4 = 0
            android.content.Context r5 = r9.a     // Catch: com.huawei.hms.common.ApiException -> L29 java.lang.Exception -> L92
            com.huawei.hms.aaid.HmsInstanceId r5 = com.huawei.hms.aaid.HmsInstanceId.getInstance(r5)     // Catch: com.huawei.hms.common.ApiException -> L29 java.lang.Exception -> L92
            android.content.Context r6 = r9.a     // Catch: com.huawei.hms.common.ApiException -> L29 java.lang.Exception -> L92
            java.lang.String r6 = com.huawei.hms.utils.Util.getAppId(r6)     // Catch: com.huawei.hms.common.ApiException -> L29 java.lang.Exception -> L92
            java.lang.String r4 = r5.getToken(r6, r4)     // Catch: com.huawei.hms.common.ApiException -> L29 java.lang.Exception -> L92
            java.lang.String r5 = "Push init succeed"
            com.huawei.hms.support.log.HMSLog.i(r2, r5)     // Catch: com.huawei.hms.common.ApiException -> L29 java.lang.Exception -> L92
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: com.huawei.hms.common.ApiException -> L29 java.lang.Exception -> L92
            if (r5 == 0) goto L31
            return
        L29:
            r3 = move-exception
            int r3 = r3.getStatusCode()     // Catch: java.lang.Exception -> L92
            com.huawei.hms.support.log.HMSLog.e(r2, r1)     // Catch: java.lang.Exception -> L92
        L31:
            android.content.Context r5 = r9.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            android.content.Context r6 = r9.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            java.lang.String r6 = r6.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            r7 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo(r6, r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            android.os.Bundle r6 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            if (r6 == 0) goto L8a
            android.os.Bundle r5 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            java.lang.String r6 = "com.huawei.hms.client.service.name:push"
            java.lang.String r5 = r5.getString(r6)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            if (r5 == 0) goto L8a
            android.content.Intent r5 = new android.content.Intent     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            java.lang.String r6 = "com.huawei.push.action.MESSAGING_EVENT"
            r5.<init>(r6)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            android.content.Context r6 = r9.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            java.lang.String r6 = r6.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            r5.setPackage(r6)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            android.os.Bundle r6 = new android.os.Bundle     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            r6.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            java.lang.String r7 = "message_type"
            java.lang.String r8 = "new_token"
            r6.putString(r7, r8)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            java.lang.String r7 = "device_token"
            r6.putString(r7, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            java.lang.String r4 = "error"
            r6.putInt(r4, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            com.huawei.hms.opendevice.h r3 = new com.huawei.hms.opendevice.h     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            r3.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            android.content.Context r4 = r9.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            boolean r3 = r3.a(r4, r6, r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            if (r3 != 0) goto L96
            java.lang.String r3 = "start service failed"
            com.huawei.hms.support.log.HMSLog.e(r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            goto L96
        L8a:
            com.huawei.hms.support.log.HMSLog.i(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L8e java.lang.Exception -> L92
            goto L96
        L8e:
            com.huawei.hms.support.log.HMSLog.i(r2, r0)     // Catch: java.lang.Exception -> L92
            goto L96
        L92:
            r0 = move-exception
            com.huawei.hms.support.log.HMSLog.e(r2, r1, r0)
        L96:
            return
    }
}
