package com.tkay.core.common;

public class q {
    private static volatile com.tkay.core.common.q c;
    private final java.lang.String a;
    private final java.lang.String b;

    private q() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "1"
            r1.a = r0
            java.lang.String r0 = "2"
            r1.b = r0
            return
    }

    public static com.tkay.core.common.q a() {
            com.tkay.core.common.q r0 = com.tkay.core.common.q.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.q> r0 = com.tkay.core.common.q.class
            monitor-enter(r0)
            com.tkay.core.common.q r1 = com.tkay.core.common.q.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.q r1 = new com.tkay.core.common.q     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.q.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.q r0 = com.tkay.core.common.q.c
            return r0
    }

    public static void a(com.tkay.core.common.f.d r9) {
            if (r9 != 0) goto L3
            return
        L3:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lba
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lba
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r1 = r9.W()     // Catch: java.lang.Throwable -> Lba
            com.tkay.core.c.d r0 = r0.a(r1)     // Catch: java.lang.Throwable -> Lba
            if (r0 == 0) goto Lba
            java.lang.String r0 = r0.C()     // Catch: java.lang.Throwable -> Lba
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lba
            if (r1 == 0) goto L24
            return
        L24:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lba
            r1.<init>(r0)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r0 = "1"
            org.json.JSONObject r0 = r1.optJSONObject(r0)     // Catch: java.lang.Throwable -> Lba
            r2 = 4652007308841189376(0x408f400000000000, double:1000.0)
            if (r0 == 0) goto L5d
            java.lang.String r4 = "token"
            java.lang.String r0 = r0.optString(r4)     // Catch: java.lang.Throwable -> Lba
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lba
            if (r4 != 0) goto L5d
            java.lang.String r4 = r9.p()     // Catch: java.lang.Throwable -> Lba
            double r5 = r9.w()     // Catch: java.lang.Throwable -> Lba
            double r5 = r5 / r2
            java.lang.String r7 = r9.l()     // Catch: java.lang.Throwable -> Lba
            com.adjust.sdk.AdjustEvent r8 = new com.adjust.sdk.AdjustEvent     // Catch: java.lang.Throwable -> L5d
            r8.<init>(r0)     // Catch: java.lang.Throwable -> L5d
            r8.setRevenue(r5, r4)     // Catch: java.lang.Throwable -> L5d
            r8.setOrderId(r7)     // Catch: java.lang.Throwable -> L5d
            com.adjust.sdk.Adjust.trackEvent(r8)     // Catch: java.lang.Throwable -> L5d
        L5d:
            java.lang.String r0 = "2"
            org.json.JSONObject r0 = r1.optJSONObject(r0)     // Catch: java.lang.Throwable -> Lba
            if (r0 == 0) goto Lba
            java.lang.String r1 = "rtye"
            int r0 = r0.optInt(r1)     // Catch: java.lang.Throwable -> Lba
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lba
            r1.<init>()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r4 = "af_order_id"
            java.lang.String r5 = r9.l()     // Catch: java.lang.Throwable -> Lba
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r4 = "af_content_id"
            java.lang.String r5 = r9.W()     // Catch: java.lang.Throwable -> Lba
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r4 = "af_content_type"
            java.lang.String r5 = r9.Y()     // Catch: java.lang.Throwable -> Lba
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r4 = "af_revenue"
            r5 = 2
            if (r0 != r5) goto L95
            double r2 = r9.w()     // Catch: java.lang.Throwable -> Lba
            goto L9b
        L95:
            double r5 = r9.w()     // Catch: java.lang.Throwable -> Lba
            double r2 = r5 / r2
        L9b:
            java.lang.Double r9 = java.lang.Double.valueOf(r2)     // Catch: java.lang.Throwable -> Lba
            r1.put(r4, r9)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r9 = "af_currency"
            java.lang.String r0 = "USD"
            r1.put(r9, r0)     // Catch: java.lang.Throwable -> Lba
            com.appsflyer.AppsFlyerLib r9 = com.appsflyer.AppsFlyerLib.getInstance()     // Catch: java.lang.Throwable -> Lba
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lba
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r2 = "af_ad_view"
            r9.trackEvent(r0, r2, r1)     // Catch: java.lang.Throwable -> Lba
        Lba:
            return
    }

    private static void a(java.lang.String r1, double r2, java.lang.String r4, java.lang.String r5) {
            com.adjust.sdk.AdjustEvent r0 = new com.adjust.sdk.AdjustEvent     // Catch: java.lang.Throwable -> Le
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le
            r0.setRevenue(r2, r4)     // Catch: java.lang.Throwable -> Le
            r0.setOrderId(r5)     // Catch: java.lang.Throwable -> Le
            com.adjust.sdk.Adjust.trackEvent(r0)     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }
}
