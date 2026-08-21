package com.kwad.components.ad.reward.monitor;

import android.os.SystemClock;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    public static void I(boolean z) {
        KSLoggerReporter.j(new RewardWebViewInfo().setEvent(PointCategory.AD_SHOW).setSceneId(z ? "ad_reward" : "ad_fullscreen").toJson());
    }

    public static void a(AdTemplate adTemplate, int i, int i2, boolean z) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.k(new RewardMonitorInfo(adTemplate.posId).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setRewardType(!z ? 1 : 0).setTaskType(i).setTaskStep(i2).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).toJson());
    }

    public static void a(boolean z, int i, String str, long j) {
        KSLoggerReporter.a(z, new RewardMonitorInfo(j).setLoadStatus(4).setErrorCode(i).setErrorMsg(str).toJson(), com.kwai.adclient.kscommerciallogger.model.a.aNc);
    }

    public static void a(boolean z, long j) {
        KSLoggerReporter.a(z, new RewardMonitorInfo(j).setLoadStatus(1).toJson(), com.kwai.adclient.kscommerciallogger.model.a.aNg);
    }

    public static void a(boolean z, AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.b(z, new RewardMonitorInfo(adTemplate.posId).setPageStatus(3).setLoadType(adTemplate.isLoadFromCache() ? 2 : 1).setDownloadType(adTemplate.getDownloadType()).setDownloadSize(adTemplate.getDownloadSize()).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).toJson());
    }

    public static void a(boolean z, AdTemplate adTemplate, int i, long j) {
        long loadDataTime = (j <= 0 || adTemplate.getLoadDataTime() <= 0) ? -1L : adTemplate.getLoadDataTime() - j;
        long j2 = a(loadDataTime) ? -1L : loadDataTime;
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.a(z, new RewardMonitorInfo(adTemplate.posId).setLoadStatus(2).setLoadType(adTemplate.isLoadFromCache() ? 2 : 1).setAdCount(i).setLoadDataDuration(j2).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).toJson(), com.kwai.adclient.kscommerciallogger.model.a.aNg);
    }

    public static void a(boolean z, AdTemplate adTemplate, long j) {
        if (adTemplate.getLoadDataTime() <= 0 || adTemplate.getDownloadFinishTime() <= 0) {
            return;
        }
        long loadDataTime = j - adTemplate.getLoadDataTime();
        long downloadFinishTime = j - adTemplate.getDownloadFinishTime();
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.b(z, new RewardMonitorInfo(adTemplate.posId).setPageStatus(1).setLoadType(adTemplate.isLoadFromCache() ? 2 : 1).setDataLoadInterval(loadDataTime).setDataDownloadInterval(downloadFinishTime).setDownloadType(adTemplate.getDownloadType()).setDownloadSize(adTemplate.getDownloadSize()).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).toJson());
    }

    public static void a(boolean z, AdTemplate adTemplate, long j, int i, long j2) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.c(z, new RewardMonitorInfo(adTemplate.posId).setLoadType(adTemplate.isLoadFromCache() ? 2 : 1).setCurrentDuration(j).setErrorCode(i).setErrorMsg(String.valueOf(j2)).setDownloadType(adTemplate.getDownloadType()).setDownloadSize(adTemplate.getDownloadSize()).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).toJson());
    }

    public static void a(boolean z, AdTemplate adTemplate, String str) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.a(z, new RewardMonitorInfo(adTemplate.posId).setLoadType(adTemplate.isLoadFromCache() ? 2 : 1).setDownloadType(adTemplate.getDownloadType()).setDownloadSize(adTemplate.getDownloadSize()).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).setErrorMsg(str).toJson());
    }

    public static void a(boolean z, String str) {
        KSLoggerReporter.j(new RewardWebViewInfo().setPageType(str).setEvent("webview_init").setSceneId(z ? "ad_reward" : "ad_fullscreen").toJson());
    }

    public static void a(boolean z, String str, String str2) {
        KSLoggerReporter.j(new RewardWebViewInfo().setPageType(str).setEvent("webview_load_url").setSceneId(z ? "ad_reward" : "ad_fullscreen").setUrl(str2).toJson());
    }

    public static void a(boolean z, String str, String str2, long j) {
        KSLoggerReporter.j(new RewardWebViewInfo().setPageType(str).setEvent("webview_load_finish").setSceneId(z ? "ad_reward" : "ad_fullscreen").setDurationMs(j).setUrl(str2).toJson());
    }

    public static void a(boolean z, String str, String str2, long j, int i) {
        KSLoggerReporter.j(new RewardWebViewInfo().setPageType(str).setEvent("webview_timeout").setSceneId(z ? "ad_reward" : "ad_fullscreen").setDurationMs(j).setTimeType(i).setUrl(str2).toJson());
    }

    private static boolean a(long... jArr) {
        for (long j : jArr) {
            if (j >= 60000) {
                return true;
            }
        }
        return false;
    }

    public static void b(boolean z, AdTemplate adTemplate, int i, long j) {
        adTemplate.setDownloadFinishTime(SystemClock.elapsedRealtime());
        AdInfo adInfoCg = d.cg(adTemplate);
        long loadDataTime = adTemplate.getLoadDataTime() - j;
        long downloadFinishTime = adTemplate.getDownloadFinishTime() - adTemplate.getLoadDataTime();
        long downloadFinishTime2 = adTemplate.getDownloadFinishTime() - j;
        if (a(loadDataTime, downloadFinishTime, downloadFinishTime2)) {
            loadDataTime = -1;
            downloadFinishTime = -1;
            downloadFinishTime2 = -1;
        }
        KSLoggerReporter.a(z, new RewardMonitorInfo(adTemplate.posId).setLoadStatus(3).setLoadType(adTemplate.isLoadFromCache() ? 2 : 1).setAdCount(i).setLoadDataDuration(loadDataTime).setDownloadDuration(downloadFinishTime).setTotalDuration(downloadFinishTime2).setDownloadType(adTemplate.getDownloadType()).setDownloadSize(adTemplate.getDownloadSize()).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).toJson(), com.kwai.adclient.kscommerciallogger.model.a.aNg);
    }

    public static void b(boolean z, AdTemplate adTemplate, long j) {
        if (j == 0 || adTemplate.getLoadDataTime() <= 0 || adTemplate.getDownloadFinishTime() <= 0) {
            return;
        }
        long j2 = -1;
        if (!j(j)) {
            long jElapsedRealtime = SystemClock.elapsedRealtime() - j;
            if (!a(jElapsedRealtime)) {
                j2 = jElapsedRealtime;
            }
        }
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.b(z, new RewardMonitorInfo(adTemplate.posId).setPageStatus(2).setLoadType(adTemplate.isLoadFromCache() ? 2 : 1).setRenderDuration(j2).setDownloadType(adTemplate.getDownloadType()).setDownloadSize(adTemplate.getDownloadSize()).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).toJson());
    }

    private static boolean j(long j) {
        return j == -1;
    }
}
