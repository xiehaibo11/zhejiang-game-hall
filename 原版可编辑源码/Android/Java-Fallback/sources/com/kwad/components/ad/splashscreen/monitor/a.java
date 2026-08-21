package com.kwad.components.ad.splashscreen.monitor;

public class a {
    private static volatile com.kwad.components.ad.splashscreen.monitor.a CA;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void E(com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r0 = com.kwad.sdk.core.response.b.a.aV(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r2 = r4.posId
            r1.<init>(r2)
            r4 = 1
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setStatus(r4)
            if (r0 == 0) goto L17
            r4 = 2
        L17:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r1.setType(r4)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r4)
            return
    }

    public static void F(com.kwad.sdk.core.response.model.AdTemplate r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r1 = com.kwad.sdk.core.response.b.a.aV(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r3 = r5.posId
            r2.<init>(r3)
            r5 = 4
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r2.setStatus(r5)
            long r2 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCreativeId(r2)
            if (r1 == 0) goto L20
            r0 = 2
            goto L21
        L20:
            r0 = 1
        L21:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setType(r0)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r5)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdInfo r3, int r4, java.lang.String r5, long r6) {
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r3)
            if (r0 == 0) goto Lb
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r3)
            goto L11
        Lb:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aM(r3)
            java.lang.String r0 = r0.materialUrl
        L11:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r1.<init>(r6)
            r6 = 2
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r1.setStatus(r6)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aS(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r7.setPreloadId(r1)
            long r1 = com.kwad.sdk.core.response.b.a.E(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r7.setCreativeId(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r7.setUrl(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r7.setErrorCode(r4)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r4.setErrorMsg(r5)
            boolean r3 = com.kwad.sdk.core.response.b.a.aU(r3)
            r5 = 1
            if (r3 == 0) goto L3f
            r6 = r5
        L3f:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r3 = r4.setMaterialType(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r3 = r3.setType(r5)
            org.json.JSONObject r3 = r3.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.n(r3)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdInfo r7, long r8, int r10, long r11) {
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r7)
            if (r0 == 0) goto Lb
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r7)
            goto L11
        Lb:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aM(r7)
            java.lang.String r0 = r0.materialUrl
        L11:
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aS(r7)
            com.kwad.sdk.core.diskcache.b.a r2 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r1 = r2.bR(r1)
            if (r1 == 0) goto L2a
            boolean r2 = r1.exists()
            if (r2 == 0) goto L2a
            long r1 = r1.length()
            goto L2c
        L2a:
            r1 = 0
        L2c:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r3 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r3.<init>(r11)
            r11 = 1
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r12 = r3.setStatus(r11)
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aS(r7)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r12 = r12.setPreloadId(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r12.setCostTime(r8)
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r9 = r7.adPreloadInfo
            int r9 = r9.validityPeriod
            long r3 = (long) r9
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setCacheValidTime(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setSize(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setUrl(r0)
            boolean r9 = com.kwad.sdk.core.response.b.a.aU(r7)
            if (r9 == 0) goto L5d
            goto L5e
        L5d:
            r11 = 2
        L5e:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setMaterialType(r11)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setType(r10)
            long r9 = com.kwad.sdk.core.response.b.a.E(r7)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r8.setCreativeId(r9)
            org.json.JSONObject r7 = r7.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.n(r7)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r4, int r5, long r6, long r8) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r0 = r0 - r6
            com.kwad.sdk.core.response.model.AdInfo r6 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r2 = r4.posId
            r7.<init>(r2)
            boolean r2 = r4.notNetworkRequest
            if (r2 == 0) goto L16
            r2 = 2
            goto L17
        L16:
            r2 = 1
        L17:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r7.setType(r2)
            r2 = 3
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r7.setStatus(r2)
            long r2 = r4.loadDataTime
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r7 = r7.setLoadDataTime(r2)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r7.setCheckStatus(r5)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCheckDataTime(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setBeforeLoadDataTime(r8)
            long r7 = r4.loadDataTime
            long r7 = r7 + r0
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r5.setLoadAndCheckDataTime(r7)
            java.lang.String r5 = com.kwad.sdk.core.response.b.a.aS(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r4.setPreloadId(r5)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.l(r4)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r8, java.lang.String r9, boolean r10) {
            r0 = 7
            r1 = 1
            r2 = 2
            if (r8 != 0) goto L24
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r3 = 0
            r8.<init>(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setStatus(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setErrorMsg(r9)
            if (r10 == 0) goto L17
            goto L18
        L17:
            r1 = r2
        L18:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setViewSource(r1)
        L1c:
            org.json.JSONObject r8 = r8.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r8)
            return
        L24:
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r8)
            boolean r4 = com.kwad.sdk.core.response.b.a.aV(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r6 = r8.posId
            r5.<init>(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r5.setStatus(r0)
            long r5 = com.kwad.sdk.core.response.b.a.E(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setCreativeId(r5)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setErrorMsg(r9)
            if (r10 == 0) goto L47
            r9 = r1
            goto L48
        L47:
            r9 = r2
        L48:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setViewSource(r9)
            if (r4 == 0) goto L4f
            r1 = r2
        L4f:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r8 = r8.setType(r1)
            goto L1c
    }

    public static void a(java.lang.String r1, boolean r2, int r3, java.lang.String r4, long r5) {
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r0.<init>(r5)
            r5 = 4
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r0.setStatus(r5)
            if (r2 == 0) goto Le
            r2 = 2
            goto Lf
        Le:
            r2 = 1
        Lf:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = r5.setType(r2)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = r2.setErrorCode(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r2.setPreloadId(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setErrorMsg(r4)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.l(r1)
            return
    }

    public static void a(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3, long r4, long r6) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r1 = r3.iterator()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L21
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aS(r2)
            r0.add(r2)
            goto L9
        L21:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r1.<init>(r6)
            r6 = 2
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r1.setStatus(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r6.setIds(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r6.setLoadDataTime(r4)
            int r3 = r3.size()
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r3 = r4.setCount(r3)
            org.json.JSONObject r3 = r3.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.m(r3)
            return
    }

    public static void b(int r1, java.lang.String r2, long r3) {
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r0.<init>(r3)
            r3 = 3
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r3 = r0.setStatus(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r3.setErrorCode(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setErrorMsg(r2)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.m(r1)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r5, int r6, long r7, long r9) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r0 = r0 - r7
            com.kwad.sdk.core.response.model.AdInfo r7 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r8 = com.kwad.sdk.core.response.b.a.aU(r7)
            if (r8 == 0) goto L14
            java.lang.String r8 = com.kwad.sdk.core.response.b.a.F(r7)
            goto L1a
        L14:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r8 = com.kwad.sdk.core.response.b.a.aM(r7)
            java.lang.String r8 = r8.materialUrl
        L1a:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r3 = r5.posId
            r2.<init>(r3)
            boolean r3 = r5.notNetworkRequest
            if (r3 == 0) goto L27
            r3 = 2
            goto L28
        L27:
            r3 = 1
        L28:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = r2.setType(r3)
            r3 = 5
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = r2.setStatus(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r2.setCheckStatus(r6)
            long r2 = r5.loadDataTime
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r6.setLoadDataTime(r2)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r6.setCheckDataTime(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r6.setBeforeLoadDataTime(r9)
            long r9 = r5.loadDataTime
            long r9 = r9 + r0
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r6.setLoadAndCheckDataTime(r9)
            java.lang.String r6 = com.kwad.sdk.core.response.b.a.aS(r7)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setPreloadId(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setUrl(r8)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.l(r5)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r5, int r6, java.lang.String r7) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r1 = com.kwad.sdk.core.response.b.a.aV(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r3 = r5.posId
            r2.<init>(r3)
            r5 = 3
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r2.setStatus(r5)
            long r2 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCreativeId(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aS(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setPreloadId(r2)
            if (r1 == 0) goto L28
            r2 = 2
            goto L29
        L28:
            r2 = 1
        L29:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setType(r2)
            if (r1 == 0) goto L36
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aM(r0)
            java.lang.String r0 = r0.materialUrl
            goto L3a
        L36:
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r0)
        L3a:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setUrl(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setErrorCode(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setErrorMsg(r7)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r5)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r4, long r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r2 = r4.posId
            r1.<init>(r2)
            boolean r2 = r4.notNetworkRequest
            r3 = 2
            if (r2 == 0) goto L12
            r2 = r3
            goto L13
        L12:
            r2 = 1
        L13:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setType(r2)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setStatus(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r1.setBeforeLoadDataTime(r5)
            long r1 = r4.loadDataTime
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r5.setLoadDataTime(r1)
            java.lang.String r5 = com.kwad.sdk.core.response.b.a.aS(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r4 = r4.setPreloadId(r5)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.l(r4)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r5, long r6, boolean r8) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r0 = r0 - r6
            com.kwad.sdk.core.response.model.AdInfo r6 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r7 = com.kwad.sdk.core.response.b.a.aV(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r3 = r5.posId
            r2.<init>(r3)
            r5 = 6
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r2.setStatus(r5)
            long r2 = com.kwad.sdk.core.response.b.a.E(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCreativeId(r2)
            r6 = 1
            r2 = 2
            if (r8 == 0) goto L27
            r8 = r6
            goto L28
        L27:
            r8 = r2
        L28:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setViewSource(r8)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setLoadDataTime(r0)
            if (r7 == 0) goto L33
            r6 = r2
        L33:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setType(r6)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r5)
            return
    }

    public static void d(long r1, long r3) {
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r0.<init>(r1)
            r1 = 11
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r0.setStatus(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setBeforeLoadDataTime(r3)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.l(r1)
            return
    }

    public static void d(com.kwad.sdk.core.response.model.AdTemplate r5, long r6) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r1 = com.kwad.sdk.core.response.b.a.aV(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r3 = r5.posId
            r2.<init>(r3)
            r5 = 5
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r2.setStatus(r5)
            if (r1 == 0) goto L18
            r1 = 2
            goto L19
        L18:
            r1 = 1
        L19:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setType(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCostTime(r6)
            long r6 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCreativeId(r6)
            java.lang.String r6 = com.kwad.sdk.core.response.b.a.aS(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setPreloadId(r6)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r5)
            return
    }

    public static void e(com.kwad.components.core.response.model.AdResultData r6) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.List r2 = r6.getAdTemplateList()
            java.util.Iterator r2 = r2.iterator()
        L12:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L39
            java.lang.Object r3 = r2.next()
            com.kwad.sdk.core.response.model.AdTemplate r3 = (com.kwad.sdk.core.response.model.AdTemplate) r3
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r3)
            long r4 = com.kwad.sdk.core.response.b.a.E(r4)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r0.add(r4)
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aS(r3)
            r1.add(r3)
            goto L12
        L39:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r3 = r6.getPosId()
            r2.<init>(r3)
            java.util.List r6 = r6.getAdTemplateList()
            int r6 = r6.size()
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r2.setTotalCount(r6)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r6.setCreativeIds(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6 = r6.setPreloadIds(r1)
            org.json.JSONObject r6 = r6.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.o(r6)
            return
    }

    public static void e(com.kwad.sdk.core.response.model.AdTemplate r5, long r6) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r1 = com.kwad.sdk.core.response.b.a.aV(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            long r3 = r5.posId
            r2.<init>(r3)
            r5 = 2
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r2 = r2.setStatus(r5)
            if (r1 == 0) goto L17
            goto L18
        L17:
            r5 = 1
        L18:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r2.setType(r5)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCostTime(r6)
            long r6 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setCreativeId(r6)
            java.lang.String r6 = com.kwad.sdk.core.response.b.a.aS(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r5 = r5.setPreloadId(r6)
            org.json.JSONObject r5 = r5.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r5)
            return
    }

    public static com.kwad.components.ad.splashscreen.monitor.a kN() {
            com.kwad.components.ad.splashscreen.monitor.a r0 = com.kwad.components.ad.splashscreen.monitor.a.CA
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.ad.splashscreen.monitor.a> r0 = com.kwad.components.ad.splashscreen.monitor.a.class
            monitor-enter(r0)
            com.kwad.components.ad.splashscreen.monitor.a r1 = com.kwad.components.ad.splashscreen.monitor.a.CA     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.ad.splashscreen.monitor.a r1 = new com.kwad.components.ad.splashscreen.monitor.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.ad.splashscreen.monitor.a.CA = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.ad.splashscreen.monitor.a r0 = com.kwad.components.ad.splashscreen.monitor.a.CA
            return r0
    }

    public static void m(long r1) {
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r0.<init>(r1)
            r1 = 1
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r0.setStatus(r1)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.l(r1)
            return
    }

    public static void n(long r1) {
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            r0.<init>(r1)
            r1 = 1
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r0.setStatus(r1)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.m(r1)
            return
    }
}
