package com.kwad.components.ad.f;

public final class c {






    public static void loadNativeAd(com.kwad.sdk.api.KsScene r3, com.kwad.sdk.api.KsLoadManager.NativeAdListener r4) {
            com.kwad.sdk.internal.api.SceneImpl r3 = com.kwad.sdk.internal.api.SceneImpl.covert(r3)
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.qo()
            java.lang.String r1 = "loadNativeAd"
            boolean r0 = r0.a(r3, r1)
            r1 = 10000(0x2710, float:1.4013E-41)
            r3.setAdStyle(r1)
            com.kwad.components.ad.KsAdLoadManager.M()
            com.kwad.components.core.p.a.a$a r1 = new com.kwad.components.core.p.a.a$a
            r1.<init>()
            com.kwad.components.core.p.a.b r2 = new com.kwad.components.core.p.a.b
            r2.<init>(r3)
            com.kwad.components.core.p.a.a$a r1 = r1.e(r2)
            com.kwad.components.core.p.a.a$a r0 = r1.aF(r0)
            com.kwad.components.ad.f.c$1 r1 = new com.kwad.components.ad.f.c$1
            r1.<init>(r4, r3)
            com.kwad.components.core.p.a.a$a r3 = r0.a(r1)
            com.kwad.components.core.p.a.a r3 = r3.pI()
            com.kwad.components.ad.KsAdLoadManager.a(r3)
            return
    }

    public static void loadNativeAd(java.lang.String r4, com.kwad.sdk.api.KsLoadManager.NativeAdListener r5) {
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.qo()
            r1 = 0
            java.lang.String r2 = "loadNativeAdByJson"
            boolean r0 = r0.a(r1, r2)
            r1 = 1
            if (r0 == 0) goto L19
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.qo()
            int r0 = r0.qp()
            if (r0 != r1) goto L19
            return
        L19:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L27
            com.kwad.components.ad.f.c$2 r0 = new com.kwad.components.ad.f.c$2
            r0.<init>(r5)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
        L27:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_NATIVE
            java.lang.String r3 = "requestFinish"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildMethodCheck(r2, r3)
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.be(r1)
            r0.report()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L9f
            r0.<init>(r4)     // Catch: org.json.JSONException -> L9f
            com.kwad.components.core.response.model.AdResultData r4 = new com.kwad.components.core.response.model.AdResultData     // Catch: org.json.JSONException -> L9f
            r4.<init>()     // Catch: org.json.JSONException -> L9f
            r4.parseJson(r0)     // Catch: org.json.JSONException -> L9f
            int r0 = r4.result     // Catch: org.json.JSONException -> L9f
            if (r0 == r1) goto L52
            com.kwad.components.ad.f.c$3 r0 = new com.kwad.components.ad.f.c$3     // Catch: org.json.JSONException -> L9f
            r0.<init>(r4, r5)     // Catch: org.json.JSONException -> L9f
            com.kwad.sdk.utils.bj.runOnUiThread(r0)     // Catch: org.json.JSONException -> L9f
            return
        L52:
            boolean r0 = r4.isAdResultDataEmpty()     // Catch: org.json.JSONException -> L9f
            if (r0 == 0) goto L61
            com.kwad.components.ad.f.c$4 r0 = new com.kwad.components.ad.f.c$4     // Catch: org.json.JSONException -> L9f
            r0.<init>(r5, r4)     // Catch: org.json.JSONException -> L9f
            com.kwad.sdk.utils.bj.runOnUiThread(r0)     // Catch: org.json.JSONException -> L9f
            goto Lae
        L61:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: org.json.JSONException -> L9f
            r0.<init>()     // Catch: org.json.JSONException -> L9f
            java.util.List r4 = r4.getAdTemplateList()     // Catch: org.json.JSONException -> L9f
            java.util.Iterator r4 = r4.iterator()     // Catch: org.json.JSONException -> L9f
        L6e:
            boolean r2 = r4.hasNext()     // Catch: org.json.JSONException -> L9f
            if (r2 == 0) goto L85
            java.lang.Object r2 = r4.next()     // Catch: org.json.JSONException -> L9f
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2     // Catch: org.json.JSONException -> L9f
            if (r2 == 0) goto L6e
            com.kwad.components.ad.f.d r3 = new com.kwad.components.ad.f.d     // Catch: org.json.JSONException -> L9f
            r3.<init>(r2)     // Catch: org.json.JSONException -> L9f
            r0.add(r3)     // Catch: org.json.JSONException -> L9f
            goto L6e
        L85:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r4 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT     // Catch: org.json.JSONException -> L9f
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_NATIVE     // Catch: org.json.JSONException -> L9f
            java.lang.String r3 = "dataReady"
            com.kwad.sdk.core.report.KSLoggerReporter$b r4 = r4.buildMethodCheck(r2, r3)     // Catch: org.json.JSONException -> L9f
            com.kwad.sdk.core.report.KSLoggerReporter$b r4 = r4.be(r1)     // Catch: org.json.JSONException -> L9f
            r4.report()     // Catch: org.json.JSONException -> L9f
            com.kwad.components.ad.f.c$5 r4 = new com.kwad.components.ad.f.c$5     // Catch: org.json.JSONException -> L9f
            r4.<init>(r5, r0)     // Catch: org.json.JSONException -> L9f
            com.kwad.sdk.utils.bj.runOnUiThread(r4)     // Catch: org.json.JSONException -> L9f
            return
        L9f:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
            com.kwad.sdk.core.network.f r4 = com.kwad.sdk.core.network.f.aoT
            int r4 = r4.errorCode
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoT
            java.lang.String r0 = r0.msg
            r5.onError(r4, r0)
        Lae:
            return
    }
}
