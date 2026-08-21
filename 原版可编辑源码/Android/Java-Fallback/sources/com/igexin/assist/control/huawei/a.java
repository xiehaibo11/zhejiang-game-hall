package com.igexin.assist.control.huawei;

class a extends java.lang.Thread {
    final android.content.Context a;
    final com.igexin.assist.control.huawei.HmsPushManager b;

    a(com.igexin.assist.control.huawei.HmsPushManager r1, android.content.Context r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r5 = this;
            com.igexin.assist.control.huawei.HmsPushManager r0 = r5.b     // Catch: java.lang.Throwable -> L8f
            java.lang.Object r0 = com.igexin.assist.control.huawei.HmsPushManager.a(r0)     // Catch: java.lang.Throwable -> L8f
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L8f
            com.igexin.assist.control.huawei.HmsPushManager r1 = r5.b     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = com.igexin.assist.control.huawei.HmsPushManager.b(r1)     // Catch: java.lang.Throwable -> L8c
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8c
            if (r1 == 0) goto L24
            com.igexin.assist.control.huawei.HmsPushManager r1 = r5.b     // Catch: java.lang.Throwable -> L8c
            android.content.Context r2 = r5.a     // Catch: java.lang.Throwable -> L8c
            com.huawei.agconnect.config.AGConnectServicesConfig r2 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r3 = "client/app_id"
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Throwable -> L8c
            com.igexin.assist.control.huawei.HmsPushManager.a(r1, r2)     // Catch: java.lang.Throwable -> L8c
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8c
            com.igexin.assist.control.huawei.HmsPushManager r0 = r5.b     // Catch: java.lang.Throwable -> L8f
            android.content.Context r1 = r5.a     // Catch: java.lang.Throwable -> L8f
            com.huawei.hms.aaid.HmsInstanceId r1 = com.huawei.hms.aaid.HmsInstanceId.getInstance(r1)     // Catch: java.lang.Throwable -> L8f
            com.igexin.assist.control.huawei.HmsPushManager r2 = r5.b     // Catch: java.lang.Throwable -> L8f
            java.lang.String r2 = com.igexin.assist.control.huawei.HmsPushManager.b(r2)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = "HCM"
            java.lang.String r1 = r1.getToken(r2, r3)     // Catch: java.lang.Throwable -> L8f
            com.igexin.assist.control.huawei.HmsPushManager.b(r0, r1)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r0 = "Assist_HW"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8f
            r1.<init>()     // Catch: java.lang.Throwable -> L8f
            java.lang.String r2 = "get hms token:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L8f
            com.igexin.assist.control.huawei.HmsPushManager r2 = r5.b     // Catch: java.lang.Throwable -> L8f
            java.lang.String r2 = com.igexin.assist.control.huawei.HmsPushManager.c(r2)     // Catch: java.lang.Throwable -> L8f
            r1.append(r2)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L8f
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L8f
            com.igexin.assist.control.huawei.HmsPushManager r0 = r5.b     // Catch: java.lang.Throwable -> L8f
            java.lang.String r0 = com.igexin.assist.control.huawei.HmsPushManager.c(r0)     // Catch: java.lang.Throwable -> L8f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L8f
            if (r0 != 0) goto Laa
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L8f
            android.content.Context r1 = r5.a     // Catch: java.lang.Throwable -> L8f
            java.lang.String r2 = "token"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8f
            r3.<init>()     // Catch: java.lang.Throwable -> L8f
            java.lang.String r4 = "HW_"
            r3.append(r4)     // Catch: java.lang.Throwable -> L8f
            com.igexin.assist.control.huawei.HmsPushManager r4 = r5.b     // Catch: java.lang.Throwable -> L8f
            java.lang.String r4 = com.igexin.assist.control.huawei.HmsPushManager.c(r4)     // Catch: java.lang.Throwable -> L8f
            r3.append(r4)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L8f
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> L8f
            com.igexin.assist.action.MessageManger r1 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L8f
            r1.addMessage(r0)     // Catch: java.lang.Throwable -> L8f
            goto Laa
        L8c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8c
            throw r1     // Catch: java.lang.Throwable -> L8f
        L8f:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "get hms token failed:"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "Assist_HW"
            android.util.Log.e(r1, r0)
        Laa:
            return
    }
}
