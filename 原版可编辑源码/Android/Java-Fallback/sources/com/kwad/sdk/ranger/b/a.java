package com.kwad.sdk.ranger.b;

public class a {
    public static final java.lang.String TAG = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Ranger_"
            r0.<init>(r1)
            java.lang.Class<com.kwad.sdk.ranger.b.a> r1 = com.kwad.sdk.ranger.b.a.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.ranger.b.a.TAG = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(com.kwad.sdk.ranger.b.a.d r3) {
            org.json.JSONObject r3 = r3.toJson()
            if (r3 != 0) goto L7
            return
        L7:
            java.lang.String r0 = com.kwad.sdk.ranger.b.a.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "report Stats:"
            r1.<init>(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.report.p$a r0 = new com.kwad.sdk.core.report.p$a
            r0.<init>()
            java.lang.String r1 = "ad_client_apm_log"
            com.kwad.sdk.core.report.p$a r0 = r0.dz(r1)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwad.sdk.core.report.p$a r0 = r0.b(r1)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwad.sdk.core.report.p$a r0 = r0.a(r1)
            com.kwai.adclient.kscommerciallogger.model.d r1 = com.kwai.adclient.kscommerciallogger.model.d.aNG
            com.kwad.sdk.core.report.p$a r0 = r0.a(r1)
            java.lang.String r1 = "ad_sdk_detect_info"
            com.kwad.sdk.core.report.p$a r0 = r0.dA(r1)
            com.kwad.sdk.core.report.p$a r3 = r0.A(r3)
            com.kwad.sdk.core.report.p r3 = r3.Cd()
            com.kwad.sdk.core.report.KSLoggerReporter.a(r3)
            return
    }
}
