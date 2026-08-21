package com.huawei.hms.stats;

public class b {
    public static com.huawei.hianalytics.process.HiAnalyticsInstance a;

    public static com.huawei.hianalytics.process.HiAnalyticsInstance a(android.content.Context r0) {
            com.huawei.hms.utils.HMSBIInitializer r0 = com.huawei.hms.utils.HMSBIInitializer.getInstance(r0)
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = r0.getAnalyticsInstance()
            com.huawei.hms.stats.b.a = r0
            return r0
    }

    public static void a(android.content.Context r0, int r1) {
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = a(r0)
            if (r0 == 0) goto Lb
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = com.huawei.hms.stats.b.a
            r0.onReport(r1)
        Lb:
            return
    }

    public static void a(android.content.Context r0, int r1, java.lang.String r2, java.util.LinkedHashMap<java.lang.String, java.lang.String> r3) {
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = a(r0)
            if (r0 == 0) goto Lb
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = com.huawei.hms.stats.b.a
            r0.onEvent(r1, r2, r3)
        Lb:
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = a(r1)
            if (r0 == 0) goto Lb
            com.huawei.hianalytics.process.HiAnalyticsInstance r0 = com.huawei.hms.stats.b.a
            r0.onEvent(r1, r2, r3)
        Lb:
            return
    }
}
