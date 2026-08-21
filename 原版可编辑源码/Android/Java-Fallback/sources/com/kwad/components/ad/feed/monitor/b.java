package com.kwad.components.ad.feed.monitor;

public final class b {
    public static void a(int r2, long r3) {
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r0.<init>()
            r1 = 6
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = r0.setStatus(r1)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r2 = r0.setAdNum(r2)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r2 = r2.setLoadDataDuration(r3)
            org.json.JSONObject r2 = r2.toJson()
            c(r2)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r3, int r4) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r1.<init>()
            r2 = 7
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = r1.setStatus(r2)
            int r3 = r3.type
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r1.setType(r3)
            int r0 = com.kwad.sdk.core.response.b.a.aW(r0)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setMaterialType(r0)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setRenderType(r4)
            r4 = 2
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setExpectedRenderType(r4)
            org.json.JSONObject r3 = r3.toJson()
            c(r3)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r3, int r4, int r5, java.lang.String r6, java.lang.String r7, long r8) {
            r0 = 1
            if (r5 != r0) goto L8
            boolean r1 = r3.mHasReportVideoLoad
            if (r1 == 0) goto L8
            return
        L8:
            if (r5 != r0) goto Lc
            r3.mHasReportVideoLoad = r0
        Lc:
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r1.<init>()
            r2 = 3
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = r1.setStatus(r2)
            int r3 = r3.type
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r1.setType(r3)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setLoadStatus(r4)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setResourceLoadDuration(r8)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setMaterialType(r5)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setMaterialUrl(r6)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setErrorMsg(r7)
            org.json.JSONObject r3 = r3.toJson()
            r5 = 2
            if (r4 != r5) goto L38
            goto L39
        L38:
            r0 = 0
        L39:
            a(r3, r0)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r3, int r4, long r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r1.<init>()
            r2 = 8
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = r1.setStatus(r2)
            int r3 = r3.type
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r1.setType(r3)
            int r0 = com.kwad.sdk.core.response.b.a.aW(r0)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setMaterialType(r0)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setRenderType(r4)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setConvertDuration(r5)
            org.json.JSONObject r3 = r3.toJson()
            c(r3)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r3, int r4, long r5, java.lang.String r7) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r1.<init>()
            r2 = 5
            com.kwad.components.ad.feed.monitor.FeedPageInfo r1 = r1.setStatus(r2)
            int r3 = r3.type
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r1.setType(r3)
            int r1 = com.kwad.sdk.core.response.b.a.aW(r0)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setMaterialType(r1)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setRenderType(r4)
            r1 = 2
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setExpectedRenderType(r1)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setErrorMsg(r7)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setRenderDuration(r5)
            com.kwad.sdk.core.response.model.AdStyleInfo r5 = r0.adStyleInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r5 = r5.feedAdInfo
            java.lang.String r5 = r5.toString()
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r3.setExtMsg(r5)
            org.json.JSONObject r3 = r3.toJson()
            if (r4 == r1) goto L41
            r4 = 1
            goto L42
        L41:
            r4 = 0
        L42:
            a(r3, r4)
            return
    }

    public static void a(java.lang.String r2, long r3, int r5) {
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = new com.kwad.components.ad.feed.monitor.FeedWebViewInfo
            r0.<init>()
            java.lang.String r1 = "webview_timeout"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_feed"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setSceneId(r1)
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r5 = r0.setTimeType(r5)
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r3 = r5.setDurationMs(r3)
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r2 = r3.setUrl(r2)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r2)
            return
    }

    private static void a(org.json.JSONObject r1, boolean r2) {
            com.kwad.sdk.core.report.p$a r0 = new com.kwad.sdk.core.report.p$a
            r0.<init>()
            if (r2 == 0) goto La
            java.lang.String r2 = "ad_client_error_log"
            goto Lc
        La:
            java.lang.String r2 = "ad_client_apm_log"
        Lc:
            com.kwad.sdk.core.report.p$a r2 = r0.dz(r2)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FEED
            com.kwad.sdk.core.report.p$a r2 = r2.b(r0)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            com.kwad.sdk.core.report.p$a r2 = r2.a(r0)
            com.kwai.adclient.kscommerciallogger.model.d r0 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            com.kwad.sdk.core.report.p$a r2 = r2.a(r0)
            java.lang.String r0 = "ad_sdk_feed_load"
            com.kwad.sdk.core.report.p$a r2 = r2.dA(r0)
            com.kwad.sdk.core.report.p$a r1 = r2.A(r1)
            com.kwad.sdk.core.report.p r1 = r1.Cd()
            com.kwad.sdk.core.report.KSLoggerReporter.a(r1)
            return
    }

    public static void aW() {
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = new com.kwad.components.ad.feed.monitor.FeedWebViewInfo
            r0.<init>()
            java.lang.String r1 = "ad_show"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_feed"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setSceneId(r1)
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r0)
            return
    }

    public static void aX() {
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = new com.kwad.components.ad.feed.monitor.FeedWebViewInfo
            r0.<init>()
            java.lang.String r1 = "webview_init"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_feed"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setSceneId(r1)
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r0)
            return
    }

    public static void c(java.lang.String r2, long r3) {
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = new com.kwad.components.ad.feed.monitor.FeedWebViewInfo
            r0.<init>()
            java.lang.String r1 = "webview_load_finish"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_feed"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setSceneId(r1)
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r3 = r0.setDurationMs(r3)
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r2 = r3.setUrl(r2)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r2)
            return
    }

    private static void c(org.json.JSONObject r1) {
            r0 = 0
            a(r1, r0)
            return
    }

    public static void d(int r2, java.lang.String r3) {
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r0.<init>()
            r1 = 9
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = r0.setStatus(r1)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r2 = r0.setErrorCode(r2)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r2 = r2.setErrorMsg(r3)
            org.json.JSONObject r2 = r2.toJson()
            r3 = 1
            a(r2, r3)
            return
    }

    public static void e(int r2, java.lang.String r3) {
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r0.<init>()
            r1 = 10
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = r0.setStatus(r1)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = r0.setLoadStatus(r2)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r3 = r0.setErrorMsg(r3)
            org.json.JSONObject r3 = r3.toJson()
            r0 = 2
            if (r2 != r0) goto L1c
            r2 = 1
            goto L1d
        L1c:
            r2 = 0
        L1d:
            a(r3, r2)
            return
    }

    public static void o(java.lang.String r2) {
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = new com.kwad.components.ad.feed.monitor.FeedWebViewInfo
            r0.<init>()
            java.lang.String r1 = "webview_load_url"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_feed"
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r0 = r0.setSceneId(r1)
            com.kwad.components.ad.feed.monitor.FeedWebViewInfo r2 = r0.setUrl(r2)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r2)
            return
    }

    public static void s(int r2) {
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r0.<init>()
            r1 = 1
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = r0.setStatus(r1)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r2 = r0.setAdNum(r2)
            org.json.JSONObject r2 = r2.toJson()
            c(r2)
            return
    }

    public static void t(int r2) {
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = new com.kwad.components.ad.feed.monitor.FeedPageInfo
            r0.<init>()
            r1 = 2
            com.kwad.components.ad.feed.monitor.FeedPageInfo r0 = r0.setStatus(r1)
            com.kwad.components.ad.feed.monitor.FeedPageInfo r2 = r0.setAdNum(r2)
            org.json.JSONObject r2 = r2.toJson()
            c(r2)
            return
    }
}
