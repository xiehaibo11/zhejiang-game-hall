package com.kwad.components.ad.interstitial;

import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.ad.KsAdLoadManager;
import com.kwad.components.core.p.a.a;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.components.core.t.k;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.i;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    public static void loadInterstitialAd(KsScene ksScene, final KsLoadManager.InterstitialAdListener interstitialAdListener) {
        if (!KsAdSDKImpl.get().hasInitFinish()) {
            com.kwad.sdk.core.e.c.e("KsAdInterstitialLoadManager", "loadInterstitialAd please init sdk first");
            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.e.1
                @Override // java.lang.Runnable
                public final void run() {
                    interstitialAdListener.onError(f.aoU.errorCode, f.aoU.msg + "sdk not init");
                }
            });
            return;
        }
        final SceneImpl sceneImplCovert = SceneImpl.covert(ksScene);
        boolean zA = k.qo().a(sceneImplCovert, "loadInterstitialAd");
        final long jElapsedRealtime = SystemClock.elapsedRealtime();
        sceneImplCovert.setAdStyle(13);
        com.kwad.components.ad.interstitial.monitor.b.cL();
        com.kwad.components.ad.interstitial.monitor.b.g(sceneImplCovert.getPosId());
        KsAdLoadManager.M();
        KsAdLoadManager.a(new a.C0159a().e(new com.kwad.components.core.p.a.b(sceneImplCovert)).aF(zA).a(new com.kwad.components.core.p.c() { // from class: com.kwad.components.ad.interstitial.e.2
            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.b
            public final void a(AdResultData adResultData, boolean z) {
                b bVar;
                final List<AdTemplate> adTemplateList = adResultData.getAdTemplateList();
                if (adTemplateList.isEmpty()) {
                    onError(f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? f.aoU.msg : adResultData.testErrorMsg);
                    i.am("insertAd_", "onInterstitialAdCacheFailed");
                    return;
                }
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.e.2.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            interstitialAdListener.onRequestResult(adTemplateList.size());
                        } catch (Throwable th) {
                            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                        }
                    }
                });
                com.kwad.components.ad.interstitial.monitor.b.cL();
                com.kwad.components.ad.interstitial.monitor.b.a(adTemplateList.get(0), jElapsedRealtime, z);
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_INTERSTITIAL, "dataReady").report();
                long jElapsedRealtime2 = SystemClock.elapsedRealtime();
                final ArrayList arrayList = new ArrayList();
                for (AdTemplate adTemplate : adTemplateList) {
                    if (adTemplate != null) {
                        if (adTemplate.mAdScene == null) {
                            adTemplate.mAdScene = sceneImplCovert;
                        }
                        if (TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.F(com.kwad.sdk.core.response.b.d.cg(adTemplate)))) {
                            bVar = new b(sceneImplCovert, adTemplate);
                        } else if (com.kwad.components.ad.interstitial.monitor.a.h(adTemplate)) {
                            bVar = new b(sceneImplCovert, adTemplate);
                        }
                        arrayList.add(bVar);
                    }
                }
                if (arrayList.size() == 0) {
                    onError(f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? f.aoU.msg : adResultData.testErrorMsg);
                    i.am("insertAd_", "onInterstitialAdCacheFailed");
                } else {
                    com.kwad.components.ad.interstitial.monitor.b.cL();
                    com.kwad.components.ad.interstitial.monitor.b.b(adTemplateList.get(0), jElapsedRealtime2, z);
                    bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.e.2.3
                        @Override // java.lang.Runnable
                        public final void run() {
                            KsAdLoadManager.M().b(arrayList);
                            i.am("insertAd_", "onInterstitialAdCacheSuccess");
                            interstitialAdListener.onInterstitialAdLoad(arrayList);
                        }
                    });
                }
            }

            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
            public final void onError(final int i, final String str) {
                com.kwad.components.ad.interstitial.monitor.b.cL();
                com.kwad.components.ad.interstitial.monitor.b.a(i, str, sceneImplCovert.getPosId());
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.e.2.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.sdk.core.e.c.w("KsAdInterstitialLoadManager", "loadInterstitialAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                        interstitialAdListener.onError(i, str);
                    }
                });
            }
        }).pI());
    }
}
