package com.huawei.hms.push;

public class e {
    public static final java.lang.String a = "e";

    public static android.os.Bundle a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1 = 50300100(0x2ff84c4, float:3.7545086E-37)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "sdkVer"
            r0.putString(r2, r1)
            java.lang.String r1 = r3.getPackageName()
            java.lang.String r2 = "pkgName"
            r0.putString(r2, r1)
            com.huawei.hms.aaid.HmsInstanceId r3 = com.huawei.hms.aaid.HmsInstanceId.getInstance(r3)
            java.lang.String r3 = r3.getId()
            java.lang.String r1 = "aaid"
            r0.putString(r1, r3)
            com.huawei.hms.aaid.plugin.PushProxy r3 = com.huawei.hms.aaid.plugin.ProxyCenter.getProxy()
            if (r3 == 0) goto L36
            java.lang.String r3 = r3.getProxyType()
            java.lang.String r1 = "proxyType"
            r0.putString(r1, r3)
        L36:
            java.lang.String r3 = "msgId"
            r0.putString(r3, r4)
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            if (r3 != 0) goto L46
            java.lang.String r3 = "analyticInfo"
            r0.putString(r3, r5)
        L46:
            return r0
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            com.huawei.hms.push.utils.ha.PushAnalyticsCenter r0 = com.huawei.hms.push.utils.ha.PushAnalyticsCenter.getInstance()
            com.huawei.hms.push.utils.ha.PushBaseAnalytics r0 = r0.getPushAnalytics()
            if (r0 != 0) goto Lb
            return
        Lb:
            android.os.Bundle r4 = a(r3, r4, r5)
            java.lang.String r5 = com.huawei.hms.push.e.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "eventId:"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r2 = ",UserProfiles:"
            r1.append(r2)
            java.lang.String r2 = r4.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r5, r1)
            r0.report(r3, r6, r4)
            return
    }
}
