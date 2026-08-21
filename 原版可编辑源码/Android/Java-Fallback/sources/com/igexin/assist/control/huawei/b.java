package com.igexin.assist.control.huawei;

class b extends java.lang.Thread {
    final android.content.Context a;
    final com.igexin.assist.control.huawei.HmsPushManager b;

    b(com.igexin.assist.control.huawei.HmsPushManager r1, android.content.Context r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            java.lang.String r0 = "Assist_HW"
            android.content.Context r1 = r4.a     // Catch: com.huawei.hms.common.ApiException -> L1f
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r1)     // Catch: com.huawei.hms.common.ApiException -> L1f
            java.lang.String r2 = "client/app_id"
            java.lang.String r1 = r1.getString(r2)     // Catch: com.huawei.hms.common.ApiException -> L1f
            android.content.Context r2 = r4.a     // Catch: com.huawei.hms.common.ApiException -> L1f
            com.huawei.hms.aaid.HmsInstanceId r2 = com.huawei.hms.aaid.HmsInstanceId.getInstance(r2)     // Catch: com.huawei.hms.common.ApiException -> L1f
            java.lang.String r3 = "HCM"
            r2.deleteToken(r1, r3)     // Catch: com.huawei.hms.common.ApiException -> L1f
            java.lang.String r1 = "deleteToken success."
            android.util.Log.i(r0, r1)     // Catch: com.huawei.hms.common.ApiException -> L1f
            goto L34
        L1f:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "deleteToken failed."
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            android.util.Log.e(r0, r1)
        L34:
            return
    }
}
