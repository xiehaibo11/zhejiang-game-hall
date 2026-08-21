package com.kwad.sdk.core.report;

public abstract class y extends com.kwad.sdk.core.network.a<com.kwad.sdk.core.report.z> {
    private com.kwad.sdk.core.response.model.ReportResultData asF;

    public y() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.kwad.sdk.core.response.model.ReportResultData a(com.kwad.sdk.core.network.c r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.ReportResultData r0 = r2.asF
            if (r0 != 0) goto Lb
            com.kwad.sdk.core.report.ReportNetwork$1 r0 = new com.kwad.sdk.core.report.ReportNetwork$1
            r0.<init>(r2)
            r2.asF = r0
        Lb:
            if (r3 == 0) goto L1e
            com.kwad.sdk.core.response.model.ReportResultData r0 = r2.asF     // Catch: org.json.JSONException -> L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            java.lang.String r3 = r3.aoM     // Catch: org.json.JSONException -> L1a
            r1.<init>(r3)     // Catch: org.json.JSONException -> L1a
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L1a
            goto L1e
        L1a:
            r3 = move-exception
            r3.printStackTrace()
        L1e:
            com.kwad.sdk.core.response.model.ReportResultData r3 = r2.asF
            return r3
    }

    private void a(com.kwad.sdk.core.report.z r6) {
            r5 = this;
            java.util.List r0 = r6.Cp()     // Catch: java.lang.Exception -> L4f
            java.util.Iterator r1 = r0.iterator()     // Catch: java.lang.Exception -> L4f
        L8:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L4f
            if (r2 == 0) goto L47
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L4f
            com.kwad.sdk.export.proxy.AdHttpProxy r3 = com.kwad.sdk.g.wX()     // Catch: java.lang.Exception -> L4f
            r4 = 0
            com.kwad.sdk.core.network.c r3 = r3.doGetWithoutResponse(r2, r4)     // Catch: java.lang.Exception -> L4f
            boolean r4 = isValidUrl(r2)     // Catch: java.lang.Exception -> L4f
            if (r4 == 0) goto L29
            int r3 = r3.code     // Catch: java.lang.Exception -> L4f
            r4 = 200(0xc8, float:2.8E-43)
            if (r3 == r4) goto L8
        L29:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.RESPONE_MONITOR     // Catch: java.lang.Exception -> L4f
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildNormalApmReporter()     // Catch: java.lang.Exception -> L4f
            java.lang.String r4 = "response_biz_error_track"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.dx(r4)     // Catch: java.lang.Exception -> L4f
            java.lang.String r4 = "trackUrlError"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r3.W(r4, r2)     // Catch: java.lang.Exception -> L4f
            com.kwad.sdk.core.response.model.AdTemplate r3 = r6.getAdTemplate()     // Catch: java.lang.Exception -> L4f
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.aK(r3)     // Catch: java.lang.Exception -> L4f
            r2.report()     // Catch: java.lang.Exception -> L4f
            goto L8
        L47:
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.getAdTemplate()     // Catch: java.lang.Exception -> L4f
            a(r6, r0)     // Catch: java.lang.Exception -> L4f
            return
        L4f:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdTemplate r3, java.util.List<java.lang.String> r4) {
            boolean r0 = r3.mTrackUrlReported
            if (r0 != 0) goto L20
            if (r4 == 0) goto L20
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto Ld
            goto L20
        Ld:
            r0 = 1
            r3.mTrackUrlReported = r0
            com.kwad.sdk.core.report.r r0 = new com.kwad.sdk.core.report.r
            r1 = 10217(0x27e9, double:5.048E-320)
            r0.<init>(r1, r3)
            org.json.JSONArray r3 = com.kwad.sdk.utils.t.toJsonArray(r4)
            r0.ash = r3
            com.kwad.sdk.core.report.i.a(r0)
        L20:
            return
    }

    private static void a(java.lang.String r2, int r3, com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.sdk.core.network.c r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 1
            if (r0 != 0) goto L20
            java.lang.String r0 = " "
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L20
            java.lang.String r0 = "http"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L20
            int r5 = r5.code
            r0 = 200(0xc8, float:2.8E-43)
            if (r5 == r0) goto L1e
            goto L20
        L1e:
            r5 = 0
            goto L21
        L20:
            r5 = r1
        L21:
            if (r5 == 0) goto L47
            if (r3 != r1) goto L28
            java.lang.String r3 = "showUrlError"
            goto L30
        L28:
            r5 = 2
            if (r3 != r5) goto L2e
            java.lang.String r3 = "clickUrlError"
            goto L30
        L2e:
            java.lang.String r3 = "convertUrlError"
        L30:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r5 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.RESPONE_MONITOR
            com.kwad.sdk.core.report.KSLoggerReporter$b r5 = r5.buildNormalApmReporter()
            java.lang.String r0 = "response_biz_error_track"
            com.kwad.sdk.core.report.KSLoggerReporter$b r5 = r5.dx(r0)
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r5.W(r3, r2)
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.aK(r4)
            r2.report()
        L47:
            return
    }

    private static boolean isValidUrl(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.net.URI r0 = new java.net.URI     // Catch: java.net.URISyntaxException -> L30
            r0.<init>(r3)     // Catch: java.net.URISyntaxException -> L30
            java.lang.String r3 = r0.getHost()
            if (r3 != 0) goto L14
            return r1
        L14:
            java.lang.String r3 = r0.getScheme()
            java.lang.String r2 = "http"
            boolean r3 = r3.equalsIgnoreCase(r2)
            if (r3 != 0) goto L2e
            java.lang.String r3 = r0.getScheme()
            java.lang.String r0 = "https"
            boolean r3 = r3.equalsIgnoreCase(r0)
            if (r3 == 0) goto L2d
            goto L2e
        L2d:
            return r1
        L2e:
            r3 = 1
            return r3
        L30:
            return r1
    }

    @Override
    public void fetch() {
            r0 = this;
            super.fetch()
            return
    }

    @Override
    public void fetchImpl() {
            r6 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            java.lang.String r1 = "ReportNetwork"
            if (r0 != 0) goto L1a
            java.lang.String r0 = "no network while report log"
            com.kwad.sdk.core.e.c.w(r1, r0)
            return
        L1a:
            com.kwad.sdk.core.network.g r0 = r6.createRequest()
            com.kwad.sdk.core.report.z r0 = (com.kwad.sdk.core.report.z) r0
            r2 = 0
            java.lang.String r3 = r0.getUrl()     // Catch: java.lang.Exception -> L52
            com.kwad.sdk.export.proxy.AdHttpProxy r4 = com.kwad.sdk.g.wX()     // Catch: java.lang.Exception -> L50
            org.json.JSONObject r5 = r0.getBody()     // Catch: java.lang.Exception -> L50
            com.kwad.sdk.core.network.c r2 = r4.doPost(r3, r2, r5)     // Catch: java.lang.Exception -> L50
            if (r2 == 0) goto L4d
            int r4 = r2.code     // Catch: java.lang.Exception -> L50
            r5 = 200(0xc8, float:2.8E-43)
            if (r4 != r5) goto L4d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = "report success actionType:"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L50
            int r5 = r0.asG     // Catch: java.lang.Exception -> L50
            r4.append(r5)     // Catch: java.lang.Exception -> L50
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L50
        L49:
            com.kwad.sdk.core.e.c.d(r1, r4)     // Catch: java.lang.Exception -> L50
            goto L57
        L4d:
            java.lang.String r4 = "report fail result is null"
            goto L49
        L50:
            r1 = move-exception
            goto L54
        L52:
            r1 = move-exception
            r3 = r2
        L54:
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L57:
            com.kwad.sdk.core.response.model.ReportResultData r1 = r6.a(r2)
            boolean r4 = r1.isCheatingFlow()
            if (r4 == 0) goto L6c
            com.kwad.sdk.core.response.model.AdTemplate r4 = r0.getAdTemplate()
            boolean r5 = r1.isCheatingFlow()
            r4.setCheatingFlow(r5)
        L6c:
            com.kwad.sdk.core.response.model.AdTemplate r4 = r0.getAdTemplate()
            boolean r4 = r4.mCheatingFlow
            if (r4 != 0) goto L77
            r6.a(r0)
        L77:
            int r4 = r0.getActionType()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            a(r3, r4, r0, r2)
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Lb9
            boolean r0 = r1.isResultOk()
            if (r0 == 0) goto L91
            goto Lb9
        L91:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r4 = "请求返回失败 code:"
            r2.<init>(r4)
            int r4 = r1.result
            r2.append(r4)
            java.lang.String r4 = ", errorMsg:"
            r2.append(r4)
            java.lang.String r1 = r1.errorMsg
            r2.append(r1)
            java.lang.String r1 = "\n url="
            r2.append(r1)
            r2.append(r3)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        Lb9:
            return
    }

    @Override
    public void onResponse(com.kwad.sdk.core.network.g r1, com.kwad.sdk.core.network.c r2) {
            r0 = this;
            return
    }
}
