package com.huawei.hms.support.hianalytics;

public class b extends com.huawei.hms.support.hianalytics.a {
    public static void a(android.content.Context r2, com.huawei.hms.common.internal.ResponseHeader r3, java.lang.String r4) {
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.util.Map r3 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getMapFromRequestHeader(r3)
            java.lang.String r0 = "direction"
            java.lang.String r1 = "rsp"
            r3.put(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1d
            java.lang.String r4 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r4)
            java.lang.String r0 = "version"
            r3.put(r0, r4)
        L1d:
            java.lang.String r4 = "ro.logsystem.usertype"
            java.lang.String r0 = ""
            java.lang.String r4 = com.huawei.hms.utils.Util.getSystemProperties(r4, r0)
            java.lang.String r0 = "phoneType"
            r3.put(r0, r4)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r4 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r0 = "HMS_SDK_BASE_API_CALLED"
            r4.onNewEvent(r2, r0, r3)
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.util.Map r0 = com.huawei.hms.support.hianalytics.a.getMapForBi(r2, r3)
            java.lang.String r1 = "appid"
            r0.put(r1, r4)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L13
            java.lang.String r5 = com.huawei.hms.common.internal.TransactionIdCreater.getId(r4, r3)
        L13:
            java.lang.String r3 = "transId"
            r0.put(r3, r5)
            java.lang.String r3 = "direction"
            java.lang.String r4 = "req"
            r0.put(r3, r4)
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 != 0) goto L2e
            java.lang.String r3 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r6)
            java.lang.String r4 = "version"
            r0.put(r4, r3)
        L2e:
            java.lang.String r3 = "ro.logsystem.usertype"
            java.lang.String r4 = ""
            java.lang.String r3 = com.huawei.hms.utils.Util.getSystemProperties(r3, r4)
            java.lang.String r4 = "phoneType"
            r0.put(r4, r3)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r3 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r4 = "HMS_SDK_BASE_API_CALLED"
            r3.onNewEvent(r2, r4, r0)
            return
    }
}
