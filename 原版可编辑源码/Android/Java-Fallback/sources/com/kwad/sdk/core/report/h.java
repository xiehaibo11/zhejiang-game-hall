package com.kwad.sdk.core.report;

public final class h extends com.kwad.sdk.core.network.d {
    protected java.lang.String aqT;

    public h(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.aqT = r0
            r1.aqT = r2
            return
    }

    public h(java.util.List<com.kwad.sdk.core.report.r> r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.aqT = r0
            if (r3 == 0) goto L31
            int r0 = r3.size()
            if (r0 <= 0) goto L31
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L18:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r3.next()
            com.kwad.sdk.core.report.r r1 = (com.kwad.sdk.core.report.r) r1
            org.json.JSONObject r1 = r1.buildReportData()
            com.kwad.sdk.utils.t.putValue(r0, r1)
            goto L18
        L2c:
            java.lang.String r3 = "actionList"
            r2.putBody(r3, r0)
        L31:
            return
    }

    @Override
    public final java.lang.String getBodyParamsString() {
            r4 = this;
            java.lang.String r0 = super.getBodyParamsString()
            java.lang.String r1 = r4.aqT     // Catch: java.lang.Exception -> L22
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto Ld
            return r0
        Ld:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L22
            r1.<init>(r0)     // Catch: java.lang.Exception -> L22
            int r2 = r1.length()     // Catch: java.lang.Exception -> L22
            int r2 = r2 + (-1)
            java.lang.String r3 = r4.aqT     // Catch: java.lang.Exception -> L22
            r1.insert(r2, r3)     // Catch: java.lang.Exception -> L22
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L22
            return r0
        L22:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            return r0
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xe()
            return r0
    }
}
