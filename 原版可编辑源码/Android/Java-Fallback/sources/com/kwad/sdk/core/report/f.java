package com.kwad.sdk.core.report;

public final class f {
    public double aqQ;
    public double aqR;
    public java.lang.String aqS;

    public f() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "3.3.42"
            r1.aqS = r0
            return
    }

    private static double xI() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            if (r0 == 0) goto Lf
            double r0 = r0.xI()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public final void a(java.lang.String r3, org.json.JSONObject r4, java.lang.String r5) {
            r2 = this;
            java.lang.String r0 = "minSDKVersion"
            boolean r1 = r4.has(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = r4.optString(r0)
            r2.aqS = r0
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ratio"
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ad_client_error_log"
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L3d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r1 = "ratioRE"
            r3.<init>(r1)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            boolean r1 = r4.has(r3)
            if (r1 == 0) goto L3d
            double r0 = r4.optDouble(r3)
            goto L41
        L3d:
            double r0 = r4.optDouble(r0)
        L41:
            r2.aqQ = r0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "ratioApmRL"
            r3.<init>(r0)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            boolean r5 = r4.has(r3)
            if (r5 == 0) goto L5e
            double r3 = r4.optDouble(r3)
        L5b:
            r2.aqR = r3
            return
        L5e:
            double r3 = xI()
            goto L5b
    }
}
