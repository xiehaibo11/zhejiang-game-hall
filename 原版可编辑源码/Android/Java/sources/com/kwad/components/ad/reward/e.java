package com.kwad.components.ad.reward;

import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.ad.KsAdLoadManager;
import com.kwad.components.core.p.a.a;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsRewardVideoAd;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.s;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.ArrayList;
import java.util.List;

public final class e {
    private static List<AdTemplate> a(SceneImpl sceneImpl, List<AdTemplate> list) {
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
                int iAW = com.kwad.sdk.core.response.b.a.aW(adInfoCg);
                if (com.kwad.sdk.core.response.b.a.bK(adInfoCg) || com.kwad.sdk.core.response.b.a.cw(adInfoCg) || ((1 == iAW && !TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.F(adInfoCg))) || com.kwad.sdk.core.response.b.a.aV(adInfoCg))) {
                    arrayList.add(adTemplate);
                }
            }
        }
        return arrayList;
    }

    public static void loadRewardVideoAd(KsScene ksScene, final KsLoadManager.RewardVideoAdListener rewardVideoAdListener) {
        final long jElapsedRealtime = SystemClock.elapsedRealtime();
        final SceneImpl sceneImplCovert = SceneImpl.covert(ksScene);
        com.kwad.components.ad.reward.monitor.a.a(true, sceneImplCovert.getPosId());
        boolean zA = com.kwad.components.core.t.k.qo().a(sceneImplCovert, "loadRewardVideoAd");
        sceneImplCovert.setAdStyle(2);
        KsAdLoadManager.M();
        KsAdLoadManager.a(new a.a().e(new com.kwad.components.core.p.a.b(sceneImplCovert)).aF(zA).a(new com.kwad.components.core.p.c() {
            @Override
            public final void a(AdResultData adResultData, boolean z) {
                List<AdTemplate> listA = e.a(sceneImplCovert, adResultData.getProceedTemplateList());
                if (listA.isEmpty()) {
                    onError(com.kwad.sdk.core.network.f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? com.kwad.sdk.core.network.f.aoU.msg : adResultData.testErrorMsg);
                    com.kwad.sdk.utils.i.am("rewardAd_", "onRewardVideoAdCacheFailed");
                    return;
                }
                long jElapsedRealtime2 = SystemClock.elapsedRealtime();
                final ArrayList<KsRewardVideoAd> arrayList = new ArrayList();
                for (AdTemplate adTemplate : listA) {
                    arrayList.add(new f(adTemplate));
                    adTemplate.setLoadDataTime(jElapsedRealtime2);
                    adTemplate.setLoadFromCache(z);
                }
                com.kwad.components.ad.reward.monitor.a.a(true, (AdTemplate) listA.get(0), listA.size(), jElapsedRealtime);
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_REWARD, "dataReady").report();
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            KsAdLoadManager.M().b(arrayList);
                            rewardVideoAdListener.onRewardVideoResult(arrayList);
                        } catch (Throwable unused) {
                        }
                        try {
                            s.f(rewardVideoAdListener, "onRequestResult", Integer.valueOf(arrayList.size()));
                        } catch (Throwable unused2) {
                        }
                    }
                });
                final ArrayList arrayList2 = new ArrayList();
                boolean z2 = false;
                for (KsRewardVideoAd ksRewardVideoAd : arrayList) {
                    AdTemplate adTemplate2 = ((f) ksRewardVideoAd).getAdTemplate();
                    AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate2);
                    if (com.kwad.sdk.core.response.b.a.bK(adInfoCg) || com.kwad.sdk.core.response.b.a.cw(adInfoCg) || com.kwad.sdk.core.response.b.a.aV(adInfoCg)) {
                        arrayList2.add(ksRewardVideoAd);
                        z2 = true;
                    } else if (com.kwad.components.ad.c.a.a(adTemplate2, true)) {
                        arrayList2.add(ksRewardVideoAd);
                    }
                }
                if (z2 || !arrayList2.isEmpty()) {
                    com.kwad.components.ad.reward.monitor.a.b(true, (AdTemplate) listA.get(0), listA.size(), jElapsedRealtime);
                    bj.runOnUiThread(new Runnable() {
                        @Override
                        public final void run() {
                            com.kwad.sdk.utils.i.am("rewardAd_", "onRewardVideoAdCacheSuccess");
                            rewardVideoAdListener.onRewardVideoAdLoad(arrayList2);
                        }
                    });
                } else {
                    onError(com.kwad.sdk.core.network.f.aoV.errorCode, com.kwad.sdk.core.network.f.aoV.msg);
                    com.kwad.sdk.utils.i.am("rewardAd_", "onRewardVideoAdCacheFailed");
                }
            }

            @Override
            public final void onError(final int i, final String str) {
                com.kwad.components.ad.reward.monitor.a.a(true, i, str, sceneImplCovert.getPosId());
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        com.kwad.sdk.core.e.c.d("KsAdRewardLoadManager", "onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                        rewardVideoAdListener.onError(i, str);
                    }
                });
            }
        }).pI());
    }
}
