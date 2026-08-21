package com.kwad.components.ad.splashscreen.monitor;

import com.kwad.sdk.core.report.KSLoggerReporter;
import com.sigmob.sdk.base.mta.PointCategory;

public final class b {
    public static void Y(String str) {
        KSLoggerReporter.j(new SplashWebMonitorInfo().setEvent("webview_load_url").setSceneId("ad_splash").setUrl(str).toJson());
    }

    public static void a(String str, long j, int i, String str2) {
        KSLoggerReporter.j(new SplashWebMonitorInfo().setEvent("webview_timeout").setSceneId("ad_splash").setDurationMs(j).setTimeType(i).setUrl(str).setErrorMsg(str2).toJson());
    }

    public static void d(String str, long j) {
        KSLoggerReporter.j(new SplashWebMonitorInfo().setEvent("webview_load_finish").setSceneId("ad_splash").setDurationMs(j).setUrl(str).toJson());
    }

    public static void kO() {
        KSLoggerReporter.j(new SplashWebMonitorInfo().setEvent(PointCategory.AD_SHOW).setSceneId("ad_splash").toJson());
    }

    public static void kP() {
        KSLoggerReporter.j(new SplashWebMonitorInfo().setEvent("webview_init").setSceneId("ad_splash").toJson());
    }
}
