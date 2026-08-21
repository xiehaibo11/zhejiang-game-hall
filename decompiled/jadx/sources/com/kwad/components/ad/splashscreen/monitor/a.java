package com.kwad.components.ad.splashscreen.monitor;

import android.os.SystemClock;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static volatile a CA;

    public static void E(AdTemplate adTemplate) {
        KSLoggerReporter.p(new SplashMonitorInfo(adTemplate.posId).setStatus(1).setType(com.kwad.sdk.core.response.b.a.aV(d.cg(adTemplate)) ? 2 : 1).toJson());
    }

    public static void F(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.p(new SplashMonitorInfo(adTemplate.posId).setStatus(4).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setType(com.kwad.sdk.core.response.b.a.aV(adInfoCg) ? 2 : 1).toJson());
    }

    public static void a(AdInfo adInfo, int i, String str, long j) {
        KSLoggerReporter.n(new SplashMonitorInfo(j).setStatus(2).setPreloadId(com.kwad.sdk.core.response.b.a.aS(adInfo)).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfo)).setUrl(com.kwad.sdk.core.response.b.a.aU(adInfo) ? com.kwad.sdk.core.response.b.a.F(adInfo) : com.kwad.sdk.core.response.b.a.aM(adInfo).materialUrl).setErrorCode(i).setErrorMsg(str).setMaterialType(com.kwad.sdk.core.response.b.a.aU(adInfo) ? 1 : 2).setType(1).toJson());
    }

    public static void a(AdInfo adInfo, long j, int i, long j2) {
        String strF = com.kwad.sdk.core.response.b.a.aU(adInfo) ? com.kwad.sdk.core.response.b.a.F(adInfo) : com.kwad.sdk.core.response.b.a.aM(adInfo).materialUrl;
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(com.kwad.sdk.core.response.b.a.aS(adInfo));
        KSLoggerReporter.n(new SplashMonitorInfo(j2).setStatus(1).setPreloadId(com.kwad.sdk.core.response.b.a.aS(adInfo)).setCostTime(j).setCacheValidTime(((long) adInfo.adPreloadInfo.validityPeriod) * 1000).setSize((fileBR == null || !fileBR.exists()) ? 0L : fileBR.length()).setUrl(strF).setMaterialType(com.kwad.sdk.core.response.b.a.aU(adInfo) ? 1 : 2).setType(i).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfo)).toJson());
    }

    public static void a(AdTemplate adTemplate, int i, long j, long j2) {
        long jElapsedRealtime = SystemClock.elapsedRealtime() - j;
        KSLoggerReporter.l(new SplashMonitorInfo(adTemplate.posId).setType(adTemplate.notNetworkRequest ? 2 : 1).setStatus(3).setLoadDataTime(adTemplate.loadDataTime).setCheckStatus(i).setCheckDataTime(jElapsedRealtime).setBeforeLoadDataTime(j2).setLoadAndCheckDataTime(adTemplate.loadDataTime + jElapsedRealtime).setPreloadId(com.kwad.sdk.core.response.b.a.aS(d.cg(adTemplate))).toJson());
    }

    public static void a(AdTemplate adTemplate, String str, boolean z) {
        SplashMonitorInfo type;
        if (adTemplate == null) {
            type = new SplashMonitorInfo(0L).setStatus(7).setErrorMsg(str).setViewSource(z ? 1 : 2);
        } else {
            AdInfo adInfoCg = d.cg(adTemplate);
            type = new SplashMonitorInfo(adTemplate.posId).setStatus(7).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setErrorMsg(str).setViewSource(z ? 1 : 2).setType(com.kwad.sdk.core.response.b.a.aV(adInfoCg) ? 2 : 1);
        }
        KSLoggerReporter.p(type.toJson());
    }

    public static void a(String str, boolean z, int i, String str2, long j) {
        KSLoggerReporter.l(new SplashMonitorInfo(j).setStatus(4).setType(z ? 2 : 1).setErrorCode(i).setPreloadId(str).setErrorMsg(str2).toJson());
    }

    public static void a(List<AdTemplate> list, long j, long j2) {
        ArrayList arrayList = new ArrayList();
        Iterator<AdTemplate> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(com.kwad.sdk.core.response.b.a.aS(d.cg(it.next())));
        }
        KSLoggerReporter.m(new SplashMonitorInfo(j2).setStatus(2).setIds(arrayList).setLoadDataTime(j).setCount(list.size()).toJson());
    }

    public static void b(int i, String str, long j) {
        KSLoggerReporter.m(new SplashMonitorInfo(j).setStatus(3).setErrorCode(i).setErrorMsg(str).toJson());
    }

    public static void b(AdTemplate adTemplate, int i, long j, long j2) {
        long jElapsedRealtime = SystemClock.elapsedRealtime() - j;
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.l(new SplashMonitorInfo(adTemplate.posId).setType(adTemplate.notNetworkRequest ? 2 : 1).setStatus(5).setCheckStatus(i).setLoadDataTime(adTemplate.loadDataTime).setCheckDataTime(jElapsedRealtime).setBeforeLoadDataTime(j2).setLoadAndCheckDataTime(adTemplate.loadDataTime + jElapsedRealtime).setPreloadId(com.kwad.sdk.core.response.b.a.aS(adInfoCg)).setUrl(com.kwad.sdk.core.response.b.a.aU(adInfoCg) ? com.kwad.sdk.core.response.b.a.F(adInfoCg) : com.kwad.sdk.core.response.b.a.aM(adInfoCg).materialUrl).toJson());
    }

    public static void b(AdTemplate adTemplate, int i, String str) {
        AdInfo adInfoCg = d.cg(adTemplate);
        boolean zAV = com.kwad.sdk.core.response.b.a.aV(adInfoCg);
        KSLoggerReporter.p(new SplashMonitorInfo(adTemplate.posId).setStatus(3).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setPreloadId(com.kwad.sdk.core.response.b.a.aS(adInfoCg)).setType(zAV ? 2 : 1).setUrl(zAV ? com.kwad.sdk.core.response.b.a.aM(adInfoCg).materialUrl : com.kwad.sdk.core.response.b.a.F(adInfoCg)).setErrorCode(i).setErrorMsg(str).toJson());
    }

    public static void c(AdTemplate adTemplate, long j) {
        KSLoggerReporter.l(new SplashMonitorInfo(adTemplate.posId).setType(adTemplate.notNetworkRequest ? 2 : 1).setStatus(2).setBeforeLoadDataTime(j).setLoadDataTime(adTemplate.loadDataTime).setPreloadId(com.kwad.sdk.core.response.b.a.aS(d.cg(adTemplate))).toJson());
    }

    public static void c(AdTemplate adTemplate, long j, boolean z) {
        long jElapsedRealtime = SystemClock.elapsedRealtime() - j;
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.p(new SplashMonitorInfo(adTemplate.posId).setStatus(6).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setViewSource(z ? 1 : 2).setLoadDataTime(jElapsedRealtime).setType(com.kwad.sdk.core.response.b.a.aV(adInfoCg) ? 2 : 1).toJson());
    }

    public static void d(long j, long j2) {
        KSLoggerReporter.l(new SplashMonitorInfo(j).setStatus(11).setBeforeLoadDataTime(j2).toJson());
    }

    public static void d(AdTemplate adTemplate, long j) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.p(new SplashMonitorInfo(adTemplate.posId).setStatus(5).setType(com.kwad.sdk.core.response.b.a.aV(adInfoCg) ? 2 : 1).setCostTime(j).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setPreloadId(com.kwad.sdk.core.response.b.a.aS(adInfoCg)).toJson());
    }

    public static void e(AdResultData adResultData) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        for (AdTemplate adTemplate : adResultData.getAdTemplateList()) {
            arrayList.add(String.valueOf(com.kwad.sdk.core.response.b.a.E(d.cg(adTemplate))));
            arrayList2.add(com.kwad.sdk.core.response.b.a.aS(d.cg(adTemplate)));
        }
        KSLoggerReporter.o(new SplashMonitorInfo(adResultData.getPosId()).setTotalCount(adResultData.getAdTemplateList().size()).setCreativeIds(arrayList).setPreloadIds(arrayList2).toJson());
    }

    public static void e(AdTemplate adTemplate, long j) {
        AdInfo adInfoCg = d.cg(adTemplate);
        KSLoggerReporter.p(new SplashMonitorInfo(adTemplate.posId).setStatus(2).setType(com.kwad.sdk.core.response.b.a.aV(adInfoCg) ? 2 : 1).setCostTime(j).setCreativeId(com.kwad.sdk.core.response.b.a.E(adInfoCg)).setPreloadId(com.kwad.sdk.core.response.b.a.aS(adInfoCg)).toJson());
    }

    public static a kN() {
        if (CA == null) {
            synchronized (a.class) {
                if (CA == null) {
                    CA = new a();
                }
            }
        }
        return CA;
    }

    public static void m(long j) {
        KSLoggerReporter.l(new SplashMonitorInfo(j).setStatus(1).toJson());
    }

    public static void n(long j) {
        KSLoggerReporter.m(new SplashMonitorInfo(j).setStatus(1).toJson());
    }
}
