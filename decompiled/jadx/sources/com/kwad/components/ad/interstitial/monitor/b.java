package com.kwad.components.ad.interstitial.monitor;

import android.os.SystemClock;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class b {

    static class a {
        private static final b iZ = new b(0);
    }

    private b() {
        init();
    }

    /* synthetic */ b(byte b) {
        this();
    }

    public static void a(int i, String str, long j) {
        KSLoggerReporter.s(new InterstitialMonitorInfo(j).setStatus(5).setErrorCode(i).setErrorMsg(str).toJson());
    }

    public static void a(AdTemplate adTemplate, int i, String str) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.w(new InterstitialMonitorInfo(adTemplate.posId).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setDownloadType(adTemplate.getDownloadType()).setDownloadSize(adTemplate.getDownloadSize()).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).setStatus(2).setErrorMsg(str).setErrorCode(i).toJson());
    }

    public static void a(AdTemplate adTemplate, long j, boolean z) {
        if (j <= 0) {
            return;
        }
        adTemplate.loadDataTime = SystemClock.elapsedRealtime() - j;
        if (adTemplate.loadDataTime <= 0 || adTemplate.loadDataTime >= 60000) {
            return;
        }
        KSLoggerReporter.s(new InterstitialMonitorInfo(adTemplate.posId).setStatus(2).setType(z ? 2 : 1).setLoadDataTime(adTemplate.loadDataTime).setExpectedRenderType(com.kwad.sdk.core.response.b.b.bB(adTemplate)).toJson());
    }

    public static void a(AdTemplate adTemplate, String str) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.u(new InterstitialMonitorInfo(adTemplate.posId).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setVideoUrl(com.kwad.sdk.core.response.b.a.F(adInfoCg)).setDownloadSize(adTemplate.getDownloadSize()).setDownloadType(adTemplate.getDownloadType()).setVideoDuration(com.kwad.sdk.core.response.b.a.G(adInfoCg) * 1000).setStatus(2).setErrorMsg(str).toJson());
    }

    public static void b(AdTemplate adTemplate, int i) {
        long jElapsedRealtime = SystemClock.elapsedRealtime() - adTemplate.adShowStartTimeStamp;
        if (adTemplate.adShowStartTimeStamp <= 0 || adTemplate.loadDataTime <= 0 || adTemplate.loadDataTime >= 60000 || jElapsedRealtime <= 0 || jElapsedRealtime >= 5000) {
            return;
        }
        KSLoggerReporter.s(new InterstitialMonitorInfo(adTemplate.posId).setStatus(4).setType(adTemplate.notNetworkRequest ? 2 : 1).setMaterialType(com.kwad.sdk.core.response.b.a.aW(d.cg(adTemplate))).setRenderDuration(jElapsedRealtime).setRenderType(i).setExpectedRenderType(com.kwad.sdk.core.response.b.b.bB(adTemplate)).toJson());
    }

    public static void b(AdTemplate adTemplate, long j, boolean z) {
        if (j > 0 && com.kwad.sdk.core.response.b.a.aZ(d.cg(adTemplate))) {
            adTemplate.downloadDuration = SystemClock.elapsedRealtime() - j;
            if (adTemplate.downloadDuration <= 0 || adTemplate.downloadDuration >= 60000) {
                return;
            }
            adTemplate.notNetworkRequest = z;
            KSLoggerReporter.s(new InterstitialMonitorInfo(adTemplate.posId).setStatus(3).setType(adTemplate.notNetworkRequest ? 2 : 1).setDownloadDuration(adTemplate.downloadDuration).setDownloadSize(adTemplate.getDownloadSize()).setDownloadType(adTemplate.getDownloadType()).toJson());
        }
    }

    public static b cL() {
        return a.iZ;
    }

    public static void g(long j) {
        KSLoggerReporter.s(new InterstitialMonitorInfo(j).setStatus(1).toJson());
    }

    public static void h(long j) {
        KSLoggerReporter.s(new InterstitialMonitorInfo(j).setStatus(6).toJson());
    }

    public static void i(AdTemplate adTemplate) {
        KSLoggerReporter.t(new InterstitialMonitorInfo(adTemplate.posId).setDownloadType(adTemplate.getDownloadType()).setStatus(1).toJson());
    }

    private static void init() {
        KsAdSDKImpl.get().getContext();
    }

    public static void j(AdTemplate adTemplate) {
        KSLoggerReporter.v(new InterstitialMonitorInfo(adTemplate.posId).setDownloadType(adTemplate.getDownloadType()).setStatus(1).toJson());
    }
}
