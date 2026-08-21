package com.huawei.hms.support.hianalytics;

public class HiAnalyticsClient extends com.huawei.hms.support.hianalytics.a {
    public HiAnalyticsClient() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static java.lang.String reportEntry(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = com.huawei.hms.utils.Util.getAppId(r2)
            r1 = 0
            java.lang.String r2 = reportEntry(r2, r3, r0, r1)
            return r2
    }

    public static java.lang.String reportEntry(android.content.Context r1, java.lang.String r2, int r3) {
            java.lang.String r0 = com.huawei.hms.utils.Util.getAppId(r1)
            java.lang.String r1 = reportEntry(r1, r2, r0, r3)
            return r1
    }

    public static java.lang.String reportEntry(android.content.Context r2, java.lang.String r3, java.lang.String r4, int r5) {
            java.lang.String r0 = com.huawei.hms.common.internal.TransactionIdCreater.getId(r4, r3)
            java.util.Map r3 = com.huawei.hms.support.hianalytics.a.getMapForBi(r2, r3)
            java.lang.String r1 = "appid"
            r3.put(r1, r4)
            java.lang.String r4 = "transId"
            r3.put(r4, r0)
            java.lang.String r4 = "direction"
            java.lang.String r1 = "req"
            r3.put(r4, r1)
            java.lang.String r4 = java.lang.String.valueOf(r5)
            java.lang.String r4 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r4)
            java.lang.String r5 = "version"
            r3.put(r5, r4)
            java.lang.String r4 = "ro.logsystem.usertype"
            java.lang.String r5 = ""
            java.lang.String r4 = com.huawei.hms.utils.Util.getSystemProperties(r4, r5)
            java.lang.String r5 = "phoneType"
            r3.put(r5, r4)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r4 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r5 = "HMS_SDK_KIT_API_CALLED"
            r4.onNewEvent(r2, r5, r3)
            return r0
    }

    public static void reportExit(android.content.Context r7, java.lang.String r8, java.lang.String r9, int r10, int r11) {
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r7)
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r5 = r11
            reportExit(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void reportExit(android.content.Context r7, java.lang.String r8, java.lang.String r9, int r10, int r11, int r12) {
            java.lang.String r3 = com.huawei.hms.utils.Util.getAppId(r7)
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            reportExit(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void reportExit(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, int r5, int r6, int r7) {
            java.util.Map r2 = com.huawei.hms.support.hianalytics.a.getMapForBi(r1, r2)
            java.lang.String r0 = "appid"
            r2.put(r0, r4)
            java.lang.String r4 = "transId"
            r2.put(r4, r3)
            java.lang.String r3 = "direction"
            java.lang.String r4 = "rsp"
            r2.put(r3, r4)
            java.lang.String r3 = java.lang.String.valueOf(r5)
            java.lang.String r4 = "statusCode"
            r2.put(r4, r3)
            java.lang.String r3 = java.lang.String.valueOf(r6)
            java.lang.String r4 = "result"
            r2.put(r4, r3)
            java.lang.String r3 = java.lang.String.valueOf(r7)
            java.lang.String r3 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.versionCodeToName(r3)
            java.lang.String r4 = "version"
            r2.put(r4, r3)
            java.lang.String r3 = "ro.logsystem.usertype"
            java.lang.String r4 = ""
            java.lang.String r3 = com.huawei.hms.utils.Util.getSystemProperties(r3, r4)
            java.lang.String r4 = "phoneType"
            r2.put(r4, r3)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r3 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            java.lang.String r4 = "HMS_SDK_KIT_API_CALLED"
            r3.onNewEvent(r1, r4, r2)
            return
    }
}
