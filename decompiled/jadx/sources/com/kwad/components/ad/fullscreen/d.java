package com.kwad.components.ad.fullscreen;

import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.ad.KsAdLoadManager;
import com.kwad.components.core.p.a.a;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.components.core.t.k;
import com.kwad.sdk.api.KsFullScreenVideoAd;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.i;
import com.kwad.sdk.utils.s;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    /* JADX INFO: Access modifiers changed from: private */
    public static List<AdTemplate> a(SceneImpl sceneImpl, List<AdTemplate> list) {
        ArrayList arrayList = new ArrayList();
        if (list.isEmpty()) {
            return arrayList;
        }
        for (AdTemplate adTemplate : list) {
            if (adTemplate != null) {
                if (adTemplate.mAdScene == null) {
                    adTemplate.mAdScene = sceneImpl;
                }
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
                if ((1 == com.kwad.sdk.core.response.b.a.aW(adInfoCg) && !TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.F(adInfoCg))) || com.kwad.sdk.core.response.b.a.aV(adInfoCg) || com.kwad.sdk.core.response.b.a.cw(adInfoCg)) {
                    arrayList.add(adTemplate);
                }
            }
        }
        return arrayList;
    }

    public static void loadFullScreenVideoAd(KsScene ksScene, final KsLoadManager.FullScreenVideoAdListener fullScreenVideoAdListener) {
        final long jElapsedRealtime = SystemClock.elapsedRealtime();
        final SceneImpl sceneImplCovert = SceneImpl.covert(ksScene);
        com.kwad.components.ad.reward.monitor.a.a(false, sceneImplCovert.getPosId());
        boolean zA = k.qo().a(sceneImplCovert, "loadFullScreenVideoAd");
        sceneImplCovert.setAdStyle(3);
        KsAdLoadManager.M();
        KsAdLoadManager.a(new a.C0159a().e(new com.kwad.components.core.p.a.b(sceneImplCovert)).aF(zA).a(new com.kwad.components.core.p.c() { // from class: com.kwad.components.ad.fullscreen.d.1
            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.b
            public final void a(AdResultData adResultData, boolean z) {
                List<AdTemplate> listA = d.a(sceneImplCovert, adResultData.getAdTemplateList());
                if (listA.isEmpty()) {
                    onError(f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? f.aoU.msg : adResultData.testErrorMsg);
                    i.am("fullAd_", "onFullScreenVideoAdCacheFailed");
                    return;
                }
                long jElapsedRealtime2 = SystemClock.elapsedRealtime();
                final ArrayList<KsFullScreenVideoAd> arrayList = new ArrayList();
                for (AdTemplate adTemplate : listA) {
                    arrayList.add(new e(adTemplate));
                    adTemplate.setLoadDataTime(jElapsedRealtime2);
                    adTemplate.setLoadFromCache(z);
                }
                com.kwad.components.ad.reward.monitor.a.a(false, (AdTemplate) listA.get(0), listA.size(), jElapsedRealtime);
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FULLSCREEN, "dataReady").report();
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.fullscreen.d.1.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            fullScreenVideoAdListener.onFullScreenVideoResult(arrayList);
                        } catch (Throwable unused) {
                        }
                        try {
                            s.f(fullScreenVideoAdListener, "onRequestResult", Integer.valueOf(arrayList.size()));
                        } catch (Throwable unused2) {
                        }
                    }
                });
                ArrayList arrayList2 = new ArrayList();
                for (KsFullScreenVideoAd ksFullScreenVideoAd : arrayList) {
                    AdTemplate adTemplate2 = ((e) ksFullScreenVideoAd).getAdTemplate();
                    AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate2);
                    if (com.kwad.components.ad.c.a.a(adTemplate2, false) || com.kwad.sdk.core.response.b.a.aV(adInfoCg) || com.kwad.sdk.core.response.b.a.cw(adInfoCg)) {
                        arrayList2.add(ksFullScreenVideoAd);
                    }
                }
                if (arrayList2.isEmpty()) {
                    onError(f.aoV.errorCode, f.aoV.msg);
                    i.am("fullAd_", "onFullScreenVideoAdCacheFailed");
                } else {
                    com.kwad.components.ad.reward.monitor.a.b(false, (AdTemplate) listA.get(0), listA.size(), jElapsedRealtime);
                    bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.fullscreen.d.1.3
                        @Override // java.lang.Runnable
                        public final void run() {
                            i.am("fullAd_", "onFullScreenVideoAdCacheFailed");
                            KsAdLoadManager.M().b(arrayList);
                            fullScreenVideoAdListener.onFullScreenVideoAdLoad(arrayList);
                        }
                    });
                }
            }

            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
            public final void onError(final int i, final String str) {
                com.kwad.components.ad.reward.monitor.a.a(false, i, str, sceneImplCovert.getPosId());
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.fullscreen.d.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.sdk.core.e.c.d("KsAdFullScreenLoadManager", "onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                        fullScreenVideoAdListener.onError(i, str);
                    }
                });
            }
        }).pI());
    }
}
