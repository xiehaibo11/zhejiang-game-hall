package com.kwad.sdk.i;

public class b {
    static final boolean $assertionsDisabled = false;



    public static class a extends com.kwad.sdk.core.response.a.a {
        public int aCX;
        public java.lang.String aCY;
        public java.lang.String sdkVersion;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int aCZ;
        public java.lang.String aDa;
        public java.lang.String aDb;
        public java.lang.String aDc;
        public java.lang.String aDd;
        public java.lang.String aDe;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    static void Gf() {
            Gh()
            return
    }

    public static void Gg() {
            com.kwad.sdk.i.b$1 r0 = new com.kwad.sdk.i.b$1
            r0.<init>()
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    private static void Gh() {
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.zw()
            com.kwad.sdk.i.b$2 r1 = new com.kwad.sdk.i.b$2
            r1.<init>()
            r2 = 0
            java.lang.Object r0 = r0.getAppConfigData(r2, r1)
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            if (r0 != 0) goto L13
            return
        L13:
            com.kwad.sdk.i.b$b r1 = new com.kwad.sdk.i.b$b
            r1.<init>()
            r1.parseJson(r0)     // Catch: java.lang.Throwable -> L5b
            int r0 = r1.aCZ
            r2 = 1
            if (r0 == r2) goto L21
            return
        L21:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            com.kwad.sdk.i.b$a r0 = a(r0, r1)
            if (r0 == 0) goto L5b
            com.kwad.sdk.core.report.p$a r1 = new com.kwad.sdk.core.report.p$a
            r1.<init>()
            java.lang.String r2 = "ad_client_apm_log"
            com.kwad.sdk.core.report.p$a r1 = r1.dz(r2)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            com.kwad.sdk.core.report.p$a r1 = r1.b(r2)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r2 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwad.sdk.core.report.p$a r1 = r1.a(r2)
            java.lang.String r2 = "ad_sdk_tt_sdk_info"
            com.kwad.sdk.core.report.p$a r1 = r1.dA(r2)
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.core.report.p$a r0 = r1.A(r0)
            com.kwad.sdk.core.report.p r0 = r0.Cd()
            com.kwad.sdk.core.report.KSLoggerReporter.a(r0)
        L5b:
            return
    }

    private static com.kwad.sdk.i.b.a a(java.lang.ClassLoader r4, com.kwad.sdk.i.b.b r5) {
            java.lang.String r0 = r5.aDa
            java.lang.Class r4 = com.kwad.sdk.utils.s.a(r0, r4)
            if (r4 != 0) goto La
            r4 = 0
            return r4
        La:
            com.kwad.sdk.i.b$a r0 = new com.kwad.sdk.i.b$a
            r0.<init>()
            java.lang.String r1 = r5.aDb
            boolean r1 = com.kwad.sdk.utils.s.fu(r1)
            r0.aCX = r1
            java.lang.String r1 = r5.aDc
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.Object r4 = com.kwad.sdk.utils.s.b(r4, r1, r3)
            java.lang.String r1 = r5.aDd
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r4, r1, r3)
            java.lang.String r1 = (java.lang.String) r1
            r0.sdkVersion = r1
            java.lang.String r5 = r5.aDe
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.Object r4 = com.kwad.sdk.utils.s.f(r4, r5, r1)
            java.lang.String r4 = (java.lang.String) r4
            r0.aCY = r4
            return r0
    }
}
