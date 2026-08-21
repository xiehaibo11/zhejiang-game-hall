package com.kwad.components.ad.splashscreen.monitor;

public final class b {
    public static void Y(java.lang.String r2) {
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo
            r0.<init>()
            java.lang.String r1 = "webview_load_url"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_splash"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setSceneId(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r2 = r0.setUrl(r2)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r2)
            return
    }

    public static void a(java.lang.String r2, long r3, int r5, java.lang.String r6) {
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo
            r0.<init>()
            java.lang.String r1 = "webview_timeout"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_splash"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setSceneId(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r3 = r0.setDurationMs(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r3 = r3.setTimeType(r5)
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r2 = r3.setUrl(r2)
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r2 = r2.setErrorMsg(r6)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r2)
            return
    }

    public static void d(java.lang.String r2, long r3) {
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo
            r0.<init>()
            java.lang.String r1 = "webview_load_finish"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_splash"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setSceneId(r1)
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r3 = r0.setDurationMs(r3)
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r2 = r3.setUrl(r2)
            org.json.JSONObject r2 = r2.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r2)
            return
    }

    public static void kO() {
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo
            r0.<init>()
            java.lang.String r1 = "ad_show"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_splash"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setSceneId(r1)
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r0)
            return
    }

    public static void kP() {
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = new com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo
            r0.<init>()
            java.lang.String r1 = "webview_init"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setEvent(r1)
            java.lang.String r1 = "ad_splash"
            com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo r0 = r0.setSceneId(r1)
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.j(r0)
            return
    }
}
