package com.kwad.sdk.core.config.item;

public final class c extends com.kwad.sdk.core.config.item.b<java.lang.Integer> {
    public c() {
            r2 = this;
            r0 = 2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "batchReportCacheType"
            r2.<init>(r1, r0)
            return
    }

    public static int aR(android.content.Context r4) {
            java.lang.String r0 = "batchReportCacheType"
            java.lang.String r1 = "loadBatchReportCacheType"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r1 = 2
            if (r4 == 0) goto L18
            r2 = 0
            java.lang.String r3 = "ksadsdk_rep"
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r3, r2)
            if (r4 == 0) goto L18
            int r4 = r4.getInt(r0, r1)
            return r4
        L18:
            return r1
    }

    private static void h(android.content.Context r3, int r4) {
            java.lang.String r0 = "batchReportCacheType"
            java.lang.String r1 = "saveBatchReportCacheType"
            com.kwad.sdk.core.e.c.d(r0, r1)
            if (r3 == 0) goto L1c
            r1 = 0
            java.lang.String r2 = "ksadsdk_rep"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r2, r1)
            if (r3 == 0) goto L1c
            android.content.SharedPreferences$Editor r3 = r3.edit()
            r3.putInt(r0, r4)
            r3.apply()
        L1c:
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r1) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.HD()
            int r1 = aR(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.setValue(r1)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r2) {
            r1 = this;
            android.content.Context r2 = com.kwad.sdk.service.ServiceProvider.HD()
            java.lang.Object r0 = r1.getValue()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            h(r2, r0)
            return
    }

    @Override
    public final void g(org.json.JSONObject r3) {
            r2 = this;
            if (r3 == 0) goto L1c
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            int r3 = r3.optInt(r0, r1)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
        L18:
            r2.setValue(r3)
            return
        L1c:
            java.lang.Object r3 = r2.zZ()
            goto L18
    }
}
