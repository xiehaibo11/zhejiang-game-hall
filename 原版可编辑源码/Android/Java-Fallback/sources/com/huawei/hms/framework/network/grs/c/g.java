package com.huawei.hms.framework.network.grs.c;

class g implements java.lang.Runnable {
    final long a;
    final android.content.Context b;
    final java.util.ArrayList c;
    final org.json.JSONArray d;

    g(long r1, android.content.Context r3, java.util.ArrayList r4, org.json.JSONArray r5) {
            r0 = this;
            r0.a = r1
            r0.b = r3
            r0.c = r4
            r0.d = r5
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r6 = this;
            com.huawei.hms.framework.network.grs.c.b.a r0 = new com.huawei.hms.framework.network.grs.c.b.a
            r0.<init>()
            long r1 = r6.a
            java.lang.String r3 = "total_time"
            r0.put(r3, r1)
            android.content.Context r1 = r6.b
            int r1 = com.huawei.hms.framework.common.NetworkUtil.getNetworkType(r1)
            long r1 = (long) r1
            java.lang.String r3 = "network_type"
            r0.put(r3, r1)
            java.util.ArrayList r1 = r6.c
            java.util.Iterator r1 = r1.iterator()
        L1e:
            boolean r2 = r1.hasNext()
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L3e
            java.lang.Object r2 = r1.next()
            com.huawei.hms.framework.network.grs.c.f r2 = (com.huawei.hms.framework.network.grs.c.f) r2
            boolean r5 = r2.m()
            if (r5 == 0) goto L1e
            java.util.LinkedHashMap r2 = com.huawei.hms.framework.network.grs.c.h.a(r2)
            r0.put(r2)
            r1.remove()
            r1 = r4
            goto L3f
        L3e:
            r1 = r3
        L3f:
            if (r1 != 0) goto L62
            java.util.ArrayList r1 = r6.c
            int r1 = r1.size()
            if (r1 <= 0) goto L62
            java.util.ArrayList r1 = r6.c
            int r2 = r1.size()
            int r2 = r2 - r4
            java.lang.Object r1 = r1.get(r2)
            com.huawei.hms.framework.network.grs.c.f r1 = (com.huawei.hms.framework.network.grs.c.f) r1
            java.util.LinkedHashMap r2 = com.huawei.hms.framework.network.grs.c.h.a(r1)
            r0.put(r2)
            java.util.ArrayList r2 = r6.c
            r2.remove(r1)
        L62:
            java.util.ArrayList r1 = r6.c
            int r1 = r1.size()
            if (r1 <= 0) goto L8b
            java.util.ArrayList r1 = r6.c
            java.util.Iterator r1 = r1.iterator()
        L70:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L8b
            java.lang.Object r2 = r1.next()
            com.huawei.hms.framework.network.grs.c.f r2 = (com.huawei.hms.framework.network.grs.c.f) r2
            org.json.JSONObject r5 = new org.json.JSONObject
            java.util.LinkedHashMap r2 = com.huawei.hms.framework.network.grs.c.h.a(r2)
            r5.<init>(r2)
            org.json.JSONArray r2 = r6.d
            r2.put(r5)
            goto L70
        L8b:
            org.json.JSONArray r1 = r6.d
            int r1 = r1.length()
            if (r1 <= 0) goto L9e
            org.json.JSONArray r1 = r6.d
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "failed_info"
            r0.put(r2, r1)
        L9e:
            java.lang.Object[] r1 = new java.lang.Object[r4]
            org.json.JSONObject r2 = new org.json.JSONObject
            java.util.LinkedHashMap r4 = r0.get()
            r2.<init>(r4)
            r1[r3] = r2
            java.lang.String r2 = "HaReportHelper"
            java.lang.String r3 = "grssdk report data to aiops is: %s"
            com.huawei.hms.framework.common.Logger.d(r2, r3, r1)
            com.huawei.hms.framework.common.hianalytics.HianalyticsHelper r1 = com.huawei.hms.framework.common.hianalytics.HianalyticsHelper.getInstance()
            java.util.LinkedHashMap r0 = r0.get()
            java.lang.String r2 = "networkkit_grs"
            r1.onEvent(r0, r2)
            return
    }
}
