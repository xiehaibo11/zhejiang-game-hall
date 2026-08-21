package com.kwad.components.ad.reward.monitor;

public final class a {
    public static void I(boolean r2) {
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r0 = new com.kwad.components.ad.reward.monitor.RewardWebViewInfo
            r0.<init>()
            java.lang.String r1 = "ad_show"
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r0 = r0.setEvent(r1)
            if (r2 == 0) goto L10
            java.lang.String r2 = "ad_reward"
            goto L12
        L10:
            java.lang.String r2 = "ad_fullscreen"
        L12:
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r0.setSceneId(r2)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r2)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r4, int r5, int r6, boolean r7) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r2 = r4.posId
            r1.<init>(r2)
            long r2 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r4 = r1.setCreativeId(r2)
            r7 = r7 ^ 1
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r4 = r4.setRewardType(r7)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r4 = r4.setTaskType(r5)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r4 = r4.setTaskStep(r6)
            java.lang.String r5 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r4 = r4.setVideoUrl(r5)
            int r5 = com.kwad.sdk.core.response.b.a.G(r0)
            int r5 = r5 * 1000
            long r5 = (long) r5
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r4 = r4.setVideoDuration(r5)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.k(r4)
            return
    }

    public static void a(boolean r1, int r2, java.lang.String r3, long r4) {
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r0 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            r0.<init>(r4)
            r4 = 4
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r4 = r0.setLoadStatus(r4)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r2 = r4.setErrorCode(r2)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r2 = r2.setErrorMsg(r3)
            org.json.JSONObject r2 = r2.toJson()
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNc
            com.kwad.sdk.core.report.KSLoggerReporter.a(r1, r2, r3)
            return
    }

    public static void a(boolean r1, long r2) {
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r0 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            r0.<init>(r2)
            r2 = 1
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r2 = r0.setLoadStatus(r2)
            org.json.JSONObject r2 = r2.toJson()
            com.kwai.adclient.kscommerciallogger.model.d r3 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            com.kwad.sdk.core.report.KSLoggerReporter.a(r1, r2, r3)
            return
    }

    public static void a(boolean r4, com.kwad.sdk.core.response.model.AdTemplate r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r2 = r5.posId
            r1.<init>(r2)
            r2 = 3
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = r1.setPageStatus(r2)
            boolean r2 = r5.isLoadFromCache()
            if (r2 == 0) goto L18
            r2 = 2
            goto L19
        L18:
            r2 = 1
        L19:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = r1.setLoadType(r2)
            int r2 = r5.getDownloadType()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = r1.setDownloadType(r2)
            long r2 = r5.getDownloadSize()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r1.setDownloadSize(r2)
            long r1 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setCreativeId(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setVideoUrl(r1)
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            int r0 = r0 * 1000
            long r0 = (long) r0
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setVideoDuration(r0)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.b(r4, r5)
            return
    }

    public static void a(boolean r7, com.kwad.sdk.core.response.model.AdTemplate r8, int r9, long r10) {
            r0 = 0
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            r3 = -1
            if (r2 <= 0) goto L17
            long r5 = r8.getLoadDataTime()
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            goto L17
        L11:
            long r0 = r8.getLoadDataTime()
            long r0 = r0 - r10
            goto L18
        L17:
            r0 = r3
        L18:
            r10 = 1
            long[] r11 = new long[r10]
            r2 = 0
            r11[r2] = r0
            boolean r11 = a(r11)
            if (r11 == 0) goto L25
            goto L26
        L25:
            r3 = r0
        L26:
            com.kwad.sdk.core.response.model.AdInfo r11 = com.kwad.sdk.core.response.b.d.cg(r8)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r0 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r1 = r8.posId
            r0.<init>(r1)
            r1 = 2
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r0 = r0.setLoadStatus(r1)
            boolean r8 = r8.isLoadFromCache()
            if (r8 == 0) goto L3d
            r10 = r1
        L3d:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r0.setLoadType(r10)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r8.setAdCount(r9)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r8.setLoadDataDuration(r3)
            long r9 = com.kwad.sdk.core.response.b.a.E(r11)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r8.setCreativeId(r9)
            java.lang.String r9 = com.kwad.sdk.core.response.b.a.F(r11)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r8.setVideoUrl(r9)
            int r9 = com.kwad.sdk.core.response.b.a.G(r11)
            int r9 = r9 * 1000
            long r9 = (long) r9
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r8.setVideoDuration(r9)
            org.json.JSONObject r8 = r8.toJson()
            com.kwai.adclient.kscommerciallogger.model.d r9 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            com.kwad.sdk.core.report.KSLoggerReporter.a(r7, r8, r9)
            return
    }

    public static void a(boolean r6, com.kwad.sdk.core.response.model.AdTemplate r7, long r8) {
            long r0 = r7.getLoadDataTime()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L73
            long r0 = r7.getDownloadFinishTime()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L13
            goto L73
        L13:
            long r0 = r7.getLoadDataTime()
            long r0 = r8 - r0
            long r2 = r7.getDownloadFinishTime()
            long r8 = r8 - r2
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r7)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r3 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r4 = r7.posId
            r3.<init>(r4)
            r4 = 1
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r3 = r3.setPageStatus(r4)
            boolean r5 = r7.isLoadFromCache()
            if (r5 == 0) goto L35
            r4 = 2
        L35:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r3 = r3.setLoadType(r4)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r0 = r3.setDataLoadInterval(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r0.setDataDownloadInterval(r8)
            int r9 = r7.getDownloadType()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r8 = r8.setDownloadType(r9)
            long r0 = r7.getDownloadSize()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r8.setDownloadSize(r0)
            long r8 = com.kwad.sdk.core.response.b.a.E(r2)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r7.setCreativeId(r8)
            java.lang.String r8 = com.kwad.sdk.core.response.b.a.F(r2)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r7.setVideoUrl(r8)
            int r8 = com.kwad.sdk.core.response.b.a.G(r2)
            int r8 = r8 * 1000
            long r8 = (long) r8
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r7.setVideoDuration(r8)
            org.json.JSONObject r7 = r7.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.b(r6, r7)
        L73:
            return
    }

    public static void a(boolean r4, com.kwad.sdk.core.response.model.AdTemplate r5, long r6, int r8, long r9) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r2 = r5.posId
            r1.<init>(r2)
            boolean r2 = r5.isLoadFromCache()
            if (r2 == 0) goto L13
            r2 = 2
            goto L14
        L13:
            r2 = 1
        L14:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = r1.setLoadType(r2)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r6 = r1.setCurrentDuration(r6)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r6 = r6.setErrorCode(r8)
            java.lang.String r7 = java.lang.String.valueOf(r9)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r6 = r6.setErrorMsg(r7)
            int r7 = r5.getDownloadType()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r6 = r6.setDownloadType(r7)
            long r7 = r5.getDownloadSize()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r6.setDownloadSize(r7)
            long r6 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setCreativeId(r6)
            java.lang.String r6 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setVideoUrl(r6)
            int r6 = com.kwad.sdk.core.response.b.a.G(r0)
            int r6 = r6 * 1000
            long r6 = (long) r6
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setVideoDuration(r6)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.c(r4, r5)
            return
    }

    public static void a(boolean r4, com.kwad.sdk.core.response.model.AdTemplate r5, java.lang.String r6) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r2 = r5.posId
            r1.<init>(r2)
            boolean r2 = r5.isLoadFromCache()
            if (r2 == 0) goto L13
            r2 = 2
            goto L14
        L13:
            r2 = 1
        L14:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = r1.setLoadType(r2)
            int r2 = r5.getDownloadType()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = r1.setDownloadType(r2)
            long r2 = r5.getDownloadSize()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r1.setDownloadSize(r2)
            long r1 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setCreativeId(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setVideoUrl(r1)
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            int r0 = r0 * 1000
            long r0 = (long) r0
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setVideoDuration(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r5 = r5.setErrorMsg(r6)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.a(r4, r5)
            return
    }

    public static void a(boolean r1, java.lang.String r2) {
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r0 = new com.kwad.components.ad.reward.monitor.RewardWebViewInfo
            r0.<init>()
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r0.setPageType(r2)
            java.lang.String r0 = "webview_init"
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r2.setEvent(r0)
            if (r1 == 0) goto L14
            java.lang.String r1 = "ad_reward"
            goto L16
        L14:
            java.lang.String r1 = "ad_fullscreen"
        L16:
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r2.setSceneId(r1)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r1)
            return
    }

    public static void a(boolean r1, java.lang.String r2, java.lang.String r3) {
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r0 = new com.kwad.components.ad.reward.monitor.RewardWebViewInfo
            r0.<init>()
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r0.setPageType(r2)
            java.lang.String r0 = "webview_load_url"
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r2.setEvent(r0)
            if (r1 == 0) goto L14
            java.lang.String r1 = "ad_reward"
            goto L16
        L14:
            java.lang.String r1 = "ad_fullscreen"
        L16:
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r2.setSceneId(r1)
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r1.setUrl(r3)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r1)
            return
    }

    public static void a(boolean r1, java.lang.String r2, java.lang.String r3, long r4) {
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r0 = new com.kwad.components.ad.reward.monitor.RewardWebViewInfo
            r0.<init>()
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r0.setPageType(r2)
            java.lang.String r0 = "webview_load_finish"
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r2.setEvent(r0)
            if (r1 == 0) goto L14
            java.lang.String r1 = "ad_reward"
            goto L16
        L14:
            java.lang.String r1 = "ad_fullscreen"
        L16:
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r2.setSceneId(r1)
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r1.setDurationMs(r4)
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r1.setUrl(r3)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r1)
            return
    }

    public static void a(boolean r1, java.lang.String r2, java.lang.String r3, long r4, int r6) {
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r0 = new com.kwad.components.ad.reward.monitor.RewardWebViewInfo
            r0.<init>()
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r0.setPageType(r2)
            java.lang.String r0 = "webview_timeout"
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r2 = r2.setEvent(r0)
            if (r1 == 0) goto L14
            java.lang.String r1 = "ad_reward"
            goto L16
        L14:
            java.lang.String r1 = "ad_fullscreen"
        L16:
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r2.setSceneId(r1)
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r1.setDurationMs(r4)
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r1.setTimeType(r6)
            com.kwad.components.ad.reward.monitor.RewardWebViewInfo r1 = r1.setUrl(r3)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r1)
            return
    }

    private static boolean a(long... r7) {
            int r0 = r7.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto L13
            r3 = r7[r2]
            r5 = 60000(0xea60, double:2.9644E-319)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 < 0) goto L10
            r7 = 1
            return r7
        L10:
            int r2 = r2 + 1
            goto L3
        L13:
            return r1
    }

    public static void b(boolean r11, com.kwad.sdk.core.response.model.AdTemplate r12, int r13, long r14) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            r12.setDownloadFinishTime(r0)
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r12)
            long r1 = r12.getLoadDataTime()
            long r1 = r1 - r14
            long r3 = r12.getDownloadFinishTime()
            long r5 = r12.getLoadDataTime()
            long r3 = r3 - r5
            long r5 = r12.getDownloadFinishTime()
            long r5 = r5 - r14
            r14 = 3
            long[] r15 = new long[r14]
            r7 = 0
            r15[r7] = r1
            r7 = 1
            r15[r7] = r3
            r8 = 2
            r15[r8] = r5
            boolean r15 = a(r15)
            r9 = -1
            if (r15 == 0) goto L35
            r1 = r9
            r3 = r1
            r5 = r3
        L35:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r15 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r9 = r12.posId
            r15.<init>(r9)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r14 = r15.setLoadStatus(r14)
            boolean r15 = r12.isLoadFromCache()
            if (r15 == 0) goto L47
            r7 = r8
        L47:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r14 = r14.setLoadType(r7)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r13 = r14.setAdCount(r13)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r13 = r13.setLoadDataDuration(r1)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r13 = r13.setDownloadDuration(r3)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r13 = r13.setTotalDuration(r5)
            int r14 = r12.getDownloadType()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r13 = r13.setDownloadType(r14)
            long r14 = r12.getDownloadSize()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r12 = r13.setDownloadSize(r14)
            long r13 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r12 = r12.setCreativeId(r13)
            java.lang.String r13 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r12 = r12.setVideoUrl(r13)
            int r13 = com.kwad.sdk.core.response.b.a.G(r0)
            int r13 = r13 * 1000
            long r13 = (long) r13
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r12 = r12.setVideoDuration(r13)
            org.json.JSONObject r12 = r12.toJson()
            com.kwai.adclient.kscommerciallogger.model.d r13 = com.kwai.adclient.kscommerciallogger.model.a.aNg
            com.kwad.sdk.core.report.KSLoggerReporter.a(r11, r12, r13)
            return
    }

    public static void b(boolean r6, com.kwad.sdk.core.response.model.AdTemplate r7, long r8) {
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r2 == 0) goto L84
            long r2 = r7.getLoadDataTime()
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto L84
            long r2 = r7.getDownloadFinishTime()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L17
            goto L84
        L17:
            boolean r0 = j(r8)
            r1 = -1
            r3 = 1
            if (r0 == 0) goto L21
            goto L33
        L21:
            long r4 = android.os.SystemClock.elapsedRealtime()
            long r4 = r4 - r8
            long[] r8 = new long[r3]
            r9 = 0
            r8[r9] = r4
            boolean r8 = a(r8)
            if (r8 == 0) goto L32
            goto L33
        L32:
            r1 = r4
        L33:
            com.kwad.sdk.core.response.model.AdInfo r8 = com.kwad.sdk.core.response.b.d.cg(r7)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r9 = new com.kwad.components.ad.reward.monitor.RewardMonitorInfo
            long r4 = r7.posId
            r9.<init>(r4)
            r0 = 2
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r9 = r9.setPageStatus(r0)
            boolean r4 = r7.isLoadFromCache()
            if (r4 == 0) goto L4a
            r3 = r0
        L4a:
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r9 = r9.setLoadType(r3)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r9 = r9.setRenderDuration(r1)
            int r0 = r7.getDownloadType()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r9 = r9.setDownloadType(r0)
            long r0 = r7.getDownloadSize()
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r9.setDownloadSize(r0)
            long r0 = com.kwad.sdk.core.response.b.a.E(r8)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r7.setCreativeId(r0)
            java.lang.String r9 = com.kwad.sdk.core.response.b.a.F(r8)
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r7.setVideoUrl(r9)
            int r8 = com.kwad.sdk.core.response.b.a.G(r8)
            int r8 = r8 * 1000
            long r8 = (long) r8
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r7 = r7.setVideoDuration(r8)
            org.json.JSONObject r7 = r7.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.b(r6, r7)
        L84:
            return
    }

    private static boolean j(long r2) {
            r0 = -1
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 != 0) goto L8
            r2 = 1
            return r2
        L8:
            r2 = 0
            return r2
    }
}
