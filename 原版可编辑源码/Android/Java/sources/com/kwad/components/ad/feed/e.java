package com.kwad.components.ad.feed;

import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Pair;
import com.kwad.components.ad.KsAdLoadManager;
import com.kwad.components.ad.feed.c;
import com.kwad.components.core.p.a.a;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.components.core.t.k;
import com.kwad.components.model.FeedType;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.KsFeedAd;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.ArrayList;

public final class e {

    static class 2 extends com.kwad.components.core.p.c {
        final KsLoadManager.FeedAdListener dT;
        final SceneImpl dU;
        final boolean dV;
        final long dW;

        2(KsLoadManager.FeedAdListener feedAdListener, SceneImpl sceneImpl, boolean z, long j) {
            this.dT = feedAdListener;
            this.dU = sceneImpl;
            this.dV = z;
            this.dW = j;
        }

        @Override
        public final void a(AdResultData adResultData) {
            final ArrayList arrayList = new ArrayList();
            com.kwad.sdk.core.e.c.d("KsAdFeedLoadManager", "loadFeedAd onSuccess:" + adResultData.getAdTemplateList().size());
            String str = null;
            for (AdTemplate adTemplate : adResultData.getAdTemplateList()) {
                if (adTemplate != null) {
                    AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
                    if (FeedType.checkTypeValid(adTemplate)) {
                        adTemplate.mAdScene = this.dU;
                        if (!TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.F(adInfoCg))) {
                            Pair<Integer, String> pairD = com.kwad.components.ad.feed.monitor.a.d(adTemplate);
                            com.kwad.components.ad.feed.monitor.b.e(((Integer) pairD.first).intValue(), (String) pairD.second);
                        }
                        arrayList.add(new c(adTemplate, this.dV));
                    } else {
                        str = String.format("(模板不匹配materialType:%s_feedType:%s)", Integer.valueOf(com.kwad.sdk.core.response.b.a.aW(adInfoCg)), FeedType.fromInt(adTemplate.type));
                    }
                }
            }
            com.kwad.sdk.core.e.c.d("KsAdFeedLoadManager", "loadFeedAd onSuccess:" + arrayList.size());
            com.kwad.components.ad.feed.monitor.b.t(arrayList.size());
            if (!arrayList.isEmpty()) {
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_FEED, "dataReady").ct(arrayList.size()).report();
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        final int size = arrayList.size();
                        final int[] iArr = {0};
                        for (final KsFeedAd ksFeedAd : arrayList) {
                            final c cVar = (c) ksFeedAd;
                            com.kwad.sdk.core.e.c.d("KsAdFeedLoadManager", "ksFeedAd " + ksFeedAd);
                            final long jElapsedRealtime = SystemClock.elapsedRealtime();
                            cVar.a(new c.a() {
                                @Override
                                public final void c(int i, String str2) {
                                    com.kwad.sdk.core.e.c.d("KsAdFeedLoadManager", "ksFeedAd onLoadFinished" + cVar);
                                    com.kwad.components.ad.feed.monitor.b.a(((c) ksFeedAd).getAdTemplate(), i, SystemClock.elapsedRealtime() - jElapsedRealtime, str2);
                                    int[] iArr2 = iArr;
                                    int i2 = iArr2[0] + 1;
                                    iArr2[0] = i2;
                                    int i3 = size;
                                    if (i2 == i3) {
                                        com.kwad.components.ad.feed.monitor.b.a(i3, SystemClock.elapsedRealtime() - 2.this.dW);
                                        KsAdLoadManager.M().b(arrayList);
                                        2.this.dT.onFeedAdLoad(arrayList);
                                    }
                                }
                            });
                        }
                    }
                });
                return;
            }
            com.kwad.components.ad.feed.monitor.b.d(com.kwad.sdk.core.network.f.aoU.errorCode, com.kwad.sdk.core.network.f.aoU.msg + str);
            onError(com.kwad.sdk.core.network.f.aoU.errorCode, com.kwad.sdk.core.network.f.aoU.msg + str);
            com.kwad.sdk.core.e.c.d("KsAdFeedLoadManager", "loadFeedAd onError");
        }

        @Override
        public final void onError(final int i, final String str) {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    com.kwad.sdk.core.e.c.d("KsAdFeedLoadManager", "loadFeedAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                    com.kwad.components.ad.feed.monitor.b.d(i, str);
                    2.this.dT.onError(i, str);
                }
            });
        }
    }

    public static void a(KsScene ksScene, final KsLoadManager.FeedAdListener feedAdListener, boolean z) {
        if (!KsAdSDKImpl.get().hasInitFinish()) {
            com.kwad.sdk.core.e.c.e("KsAdFeedLoadManager", "loadConfigFeedAd please init sdk first");
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    feedAdListener.onError(com.kwad.sdk.core.network.f.aoU.errorCode, com.kwad.sdk.core.network.f.aoU.msg + "sdk not init");
                }
            });
            return;
        }
        SceneImpl sceneImplCovert = SceneImpl.covert(ksScene);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        com.kwad.components.ad.feed.monitor.b.s(sceneImplCovert.getAdNum());
        boolean zA = k.qo().a(sceneImplCovert, "loadConfigFeedAd");
        sceneImplCovert.setAdStyle(1);
        KsAdLoadManager.M();
        KsAdLoadManager.a(new a.a().e(new com.kwad.components.core.p.a.b(sceneImplCovert)).aF(zA).a(new 2(feedAdListener, sceneImplCovert, z, jElapsedRealtime)).pI());
    }
}
