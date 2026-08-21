package com.huawei.hms.push.utils;

public final class PushBiUtil {
    public PushBiUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String reportEntry(android.content.Context r1, java.lang.String r2) {
            r0 = 50300100(0x2ff84c4, float:3.7545086E-37)
            java.lang.String r1 = com.huawei.hms.support.hianalytics.HiAnalyticsClient.reportEntry(r1, r2, r0)
            return r1
    }

    public static void reportExit(android.content.Context r6, java.lang.String r7, com.huawei.hms.common.internal.ResponseErrorCode r8) {
            java.lang.String r2 = r8.getTransactionId()
            int r3 = r8.getStatusCode()
            int r4 = r8.getErrorCode()
            r5 = 50300100(0x2ff84c4, float:3.7545086E-37)
            r0 = r6
            r1 = r7
            com.huawei.hms.support.hianalytics.HiAnalyticsClient.reportExit(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void reportExit(android.content.Context r7, java.lang.String r8, java.lang.String r9, int r10) {
            com.huawei.hms.support.api.client.Status r0 = com.huawei.hms.support.api.client.Status.SUCCESS
            int r4 = r0.getStatusCode()
            r6 = 50300100(0x2ff84c4, float:3.7545086E-37)
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            com.huawei.hms.support.hianalytics.HiAnalyticsClient.reportExit(r1, r2, r3, r4, r5, r6)
            return
    }

    public static void reportExit(android.content.Context r7, java.lang.String r8, java.lang.String r9, com.huawei.hms.aaid.constant.ErrorEnum r10) {
            com.huawei.hms.support.api.client.Status r0 = com.huawei.hms.support.api.client.Status.SUCCESS
            int r4 = r0.getStatusCode()
            int r5 = r10.getExternalCode()
            r6 = 50300100(0x2ff84c4, float:3.7545086E-37)
            r1 = r7
            r2 = r8
            r3 = r9
            com.huawei.hms.support.hianalytics.HiAnalyticsClient.reportExit(r1, r2, r3, r4, r5, r6)
            return
    }
}
