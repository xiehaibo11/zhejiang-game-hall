package com.huawei.hms.framework.network.grs.c;

public class h {
    static java.util.LinkedHashMap a(com.huawei.hms.framework.network.grs.c.f r0) {
            java.util.LinkedHashMap r0 = b(r0)
            return r0
    }

    public static void a(java.util.ArrayList<com.huawei.hms.framework.network.grs.c.f> r8, long r9, org.json.JSONArray r11, android.content.Context r12) {
            if (r12 == 0) goto L29
            if (r8 == 0) goto L29
            int r0 = r8.size()
            if (r0 <= 0) goto L29
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper r0 = com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.getInstance()
            boolean r0 = r0.isEnableReportNoSeed(r12)
            if (r0 == 0) goto L29
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper r0 = com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.getInstance()
            java.util.concurrent.ExecutorService r0 = r0.getReportExecutor()
            com.huawei.hms.framework.network.grs.c.g r7 = new com.huawei.hms.framework.network.grs.c.g
            r1 = r7
            r2 = r9
            r4 = r12
            r5 = r8
            r6 = r11
            r1.<init>(r2, r4, r5, r6)
            r0.submit(r7)
        L29:
            return
    }

    private static java.util.LinkedHashMap<java.lang.String, java.lang.String> b(com.huawei.hms.framework.network.grs.c.f r6) {
            com.huawei.hms.framework.common.hianalytics.LinkedHashMapPack r0 = new com.huawei.hms.framework.common.hianalytics.LinkedHashMapPack
            r0.<init>()
            java.lang.Exception r1 = r6.d()
            java.lang.String r2 = "exception_name"
            java.lang.String r3 = "error_code"
            if (r1 == 0) goto L30
            int r4 = com.huawei.hms.framework.common.ExceptionCode.getErrorCodeFromException(r1)
            long r4 = (long) r4
            r0.put(r3, r4)
            java.lang.Class r3 = r1.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r0.put(r2, r3)
            java.lang.String r1 = r1.getMessage()
            java.lang.String r1 = com.huawei.hms.framework.common.StringUtils.anonymizeMessage(r1)
            java.lang.String r2 = "message"
            r0.put(r2, r1)
            goto L40
        L30:
            int r1 = r6.b()
            long r4 = (long) r1
            r0.put(r3, r4)
            int r1 = r6.c()
            long r3 = (long) r1
            r0.put(r2, r3)
        L40:
            java.lang.String r1 = "domain"
            java.net.URL r2 = new java.net.URL     // Catch: java.net.MalformedURLException -> L53
            java.lang.String r3 = r6.k()     // Catch: java.net.MalformedURLException -> L53
            r2.<init>(r3)     // Catch: java.net.MalformedURLException -> L53
            java.lang.String r2 = r2.getHost()     // Catch: java.net.MalformedURLException -> L53
            r0.put(r1, r2)     // Catch: java.net.MalformedURLException -> L53
            goto L5b
        L53:
            r1 = move-exception
            java.lang.String r2 = "HaReportHelper"
            java.lang.String r3 = "report host MalformedURLException"
            com.huawei.hms.framework.common.Logger.w(r2, r3, r1)
        L5b:
            long r1 = r6.g()
            java.lang.String r3 = "req_start_time"
            r0.put(r3, r1)
            long r1 = r6.f()
            java.lang.String r3 = "req_end_time"
            r0.put(r3, r1)
            long r1 = r6.h()
            java.lang.String r6 = "req_total_time"
            r0.put(r6, r1)
            java.util.LinkedHashMap r6 = r0.getAll()
            return r6
    }
}
