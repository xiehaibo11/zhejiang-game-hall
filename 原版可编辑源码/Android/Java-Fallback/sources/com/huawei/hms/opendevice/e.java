package com.huawei.hms.opendevice;

public abstract class e {
    public static java.lang.String a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = new com.huawei.hms.framework.network.grs.GrsBaseInfo
            r0.<init>()
            r0.setSerCountry(r5)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L11
            r0.setAppName(r4)
        L11:
            com.huawei.hms.framework.network.grs.GrsClient r4 = new com.huawei.hms.framework.network.grs.GrsClient
            r4.<init>(r1, r0)
            java.lang.String r1 = r4.synGetGrsUrl(r2, r3)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r3 = "QueryGrs"
            if (r2 == 0) goto L2a
            java.lang.String r1 = "Query Grs base url is empty."
            com.huawei.hms.support.log.HMSLog.i(r3, r1)
            java.lang.String r1 = ""
            return r1
        L2a:
            java.lang.String r2 = "Query Grs base url success."
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            return r1
    }
}
