package com.kwad.components.ad.interstitial.monitor;

public final class b {

    static class a {
        private static final com.kwad.components.ad.interstitial.monitor.b iZ = null;

        static {
                com.kwad.components.ad.interstitial.monitor.b r0 = new com.kwad.components.ad.interstitial.monitor.b
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.interstitial.monitor.b.a.iZ = r0
                return
        }

        static com.kwad.components.ad.interstitial.monitor.b cM() {
                com.kwad.components.ad.interstitial.monitor.b r0 = com.kwad.components.ad.interstitial.monitor.b.a.iZ
                return r0
        }
    }

    private b() {
            r0 = this;
            r0.<init>()
            init()
            return
    }

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(int r1, java.lang.String r2, long r3) {
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r0 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            r0.<init>(r3)
            r3 = 5
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = r0.setStatus(r3)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r3.setErrorCode(r1)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r1.setErrorMsg(r2)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.s(r1)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r4, int r5, java.lang.String r6) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            long r2 = r4.posId
            r1.<init>(r2)
            long r2 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r1.setCreativeId(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r1.setVideoUrl(r2)
            int r2 = r4.getDownloadType()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r1.setDownloadType(r2)
            long r2 = r4.getDownloadSize()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r1.setDownloadSize(r2)
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            int r0 = r0 * 1000
            long r0 = (long) r0
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r4.setVideoDuration(r0)
            r0 = 2
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r4.setStatus(r0)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r4.setErrorMsg(r6)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r4.setErrorCode(r5)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.w(r4)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r4, long r5, boolean r7) {
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 > 0) goto L7
            return
        L7:
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 - r5
            r4.loadDataTime = r2
            long r5 = r4.loadDataTime
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 <= 0) goto L47
            long r5 = r4.loadDataTime
            r0 = 60000(0xea60, double:2.9644E-319)
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 < 0) goto L1e
            goto L47
        L1e:
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            long r0 = r4.posId
            r5.<init>(r0)
            r6 = 2
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = r5.setStatus(r6)
            if (r7 == 0) goto L2d
            goto L2e
        L2d:
            r6 = 1
        L2e:
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = r5.setType(r6)
            long r6 = r4.loadDataTime
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = r5.setLoadDataTime(r6)
            int r4 = com.kwad.sdk.core.response.b.b.bB(r4)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r5.setExpectedRenderType(r4)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.s(r4)
        L47:
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r4, java.lang.String r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            long r2 = r4.posId
            r1.<init>(r2)
            long r2 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r1.setCreativeId(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.F(r0)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r1.setVideoUrl(r2)
            long r2 = r4.getDownloadSize()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r1.setDownloadSize(r2)
            int r4 = r4.getDownloadType()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r1.setDownloadType(r4)
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            int r0 = r0 * 1000
            long r0 = (long) r0
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r4.setVideoDuration(r0)
            r0 = 2
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r4.setStatus(r0)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r4.setErrorMsg(r5)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.u(r4)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r8, int r9) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r8.adShowStartTimeStamp
            long r0 = r0 - r2
            long r2 = r8.adShowStartTimeStamp
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L63
            long r2 = r8.loadDataTime
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L63
            long r2 = r8.loadDataTime
            r6 = 60000(0xea60, double:2.9644E-319)
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 >= 0) goto L63
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 <= 0) goto L63
            r2 = 5000(0x1388, double:2.4703E-320)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L29
            goto L63
        L29:
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r8)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            long r4 = r8.posId
            r3.<init>(r4)
            r4 = 4
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = r3.setStatus(r4)
            boolean r4 = r8.notNetworkRequest
            if (r4 == 0) goto L3f
            r4 = 2
            goto L40
        L3f:
            r4 = 1
        L40:
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = r3.setType(r4)
            int r2 = com.kwad.sdk.core.response.b.a.aW(r2)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r2 = r3.setMaterialType(r2)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r0 = r2.setRenderDuration(r0)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r9 = r0.setRenderType(r9)
            int r8 = com.kwad.sdk.core.response.b.b.bB(r8)
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r8 = r9.setExpectedRenderType(r8)
            org.json.JSONObject r8 = r8.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.s(r8)
        L63:
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r4, long r5, boolean r7) {
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 > 0) goto L7
            return
        L7:
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r2 = com.kwad.sdk.core.response.b.a.aZ(r2)
            if (r2 != 0) goto L12
            return
        L12:
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 - r5
            r4.downloadDuration = r2
            long r5 = r4.downloadDuration
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 <= 0) goto L5f
            long r5 = r4.downloadDuration
            r0 = 60000(0xea60, double:2.9644E-319)
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 < 0) goto L29
            goto L5f
        L29:
            r4.notNetworkRequest = r7
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            long r6 = r4.posId
            r5.<init>(r6)
            r6 = 3
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = r5.setStatus(r6)
            boolean r6 = r4.notNetworkRequest
            if (r6 == 0) goto L3d
            r6 = 2
            goto L3e
        L3d:
            r6 = 1
        L3e:
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = r5.setType(r6)
            long r6 = r4.downloadDuration
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = r5.setDownloadDuration(r6)
            long r6 = r4.getDownloadSize()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r5 = r5.setDownloadSize(r6)
            int r4 = r4.getDownloadType()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r4 = r5.setDownloadType(r4)
            org.json.JSONObject r4 = r4.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.s(r4)
        L5f:
            return
    }

    public static com.kwad.components.ad.interstitial.monitor.b cL() {
            com.kwad.components.ad.interstitial.monitor.b r0 = com.kwad.components.ad.interstitial.monitor.b.a.cM()
            return r0
    }

    public static void g(long r1) {
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r0 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            r0.<init>(r1)
            r1 = 1
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r0.setStatus(r1)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.s(r1)
            return
    }

    public static void h(long r1) {
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r0 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            r0.<init>(r1)
            r1 = 6
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r1 = r0.setStatus(r1)
            org.json.JSONObject r1 = r1.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.s(r1)
            return
    }

    public static void i(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r0 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            long r1 = r3.posId
            r0.<init>(r1)
            int r3 = r3.getDownloadType()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = r0.setDownloadType(r3)
            r0 = 1
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = r3.setStatus(r0)
            org.json.JSONObject r3 = r3.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.t(r3)
            return
    }

    private static void init() {
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            return
    }

    public static void j(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r0 = new com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo
            long r1 = r3.posId
            r0.<init>(r1)
            int r3 = r3.getDownloadType()
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = r0.setDownloadType(r3)
            r0 = 1
            com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo r3 = r3.setStatus(r0)
            org.json.JSONObject r3 = r3.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.v(r3)
            return
    }
}
