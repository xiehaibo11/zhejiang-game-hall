package com.kwad.components.ad.interstitial.aggregate;

import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.core.p.h;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private volatile boolean hY;
    private m<com.kwad.components.core.p.a, AdResultData> hZ;

    /* JADX INFO: renamed from: com.kwad.components.ad.interstitial.aggregate.c$1, reason: invalid class name */
    final class AnonymousClass1 extends h {
        final /* synthetic */ SceneImpl dU;
        final /* synthetic */ long hD;
        final /* synthetic */ b ia;

        AnonymousClass1(SceneImpl sceneImpl, b bVar, long j) {
            this.dU = sceneImpl;
            this.ia = bVar;
            this.hD = j;
        }

        @Override // com.kwad.components.core.p.i
        public final void a(final AdResultData adResultData) {
            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.aggregate.c.1.2
                @Override // java.lang.Runnable
                public final void run() {
                    final ArrayList arrayList = new ArrayList();
                    for (AdTemplate adTemplate : adResultData.getAdTemplateList()) {
                        if (adTemplate != null) {
                            if (adTemplate.mAdScene == null) {
                                adTemplate.mAdScene = AnonymousClass1.this.dU;
                            }
                            arrayList.add(adTemplate);
                        }
                    }
                    bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.aggregate.c.1.2.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            AnonymousClass1.this.ia.onInterstitialAdLoad(arrayList);
                            c cVar = c.this;
                            c.a(adResultData, AnonymousClass1.this.hD);
                        }
                    });
                }
            });
        }

        @Override // com.kwad.components.core.p.i
        public final void onError(final int i, final String str) {
            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.interstitial.aggregate.c.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    com.kwad.sdk.core.e.c.e("InterstitialAggregateDataFetcher", "loadAggregationAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                }
            });
        }
    }

    static class a {
        private static c ih = new c(0);
    }

    public interface b {
        void onInterstitialAdLoad(List<AdTemplate> list);
    }

    private c() {
        this.hY = false;
    }

    /* synthetic */ c(byte b2) {
        this();
    }

    private void a(com.kwad.components.core.p.a.b bVar, final h hVar) {
        com.kwad.components.core.m.a aVar = new com.kwad.components.core.m.a(bVar);
        this.hZ = aVar;
        aVar.request(new p<com.kwad.components.core.p.a, AdResultData>() { // from class: com.kwad.components.ad.interstitial.aggregate.c.2
            private void b(AdResultData adResultData) {
                c.a(c.this, false);
                if (adResultData.isAdResultDataEmpty()) {
                    hVar.onError(f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? f.aoU.msg : adResultData.testErrorMsg);
                } else {
                    hVar.a(adResultData);
                }
            }

            private void f(int i, String str) {
                c.a(c.this, false);
                hVar.onError(i, str);
            }

            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final /* synthetic */ void onError(g gVar, int i, String str) {
                f(i, str);
            }

            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final /* synthetic */ void onSuccess(g gVar, BaseResultData baseResultData) {
                b((AdResultData) baseResultData);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(AdResultData adResultData, long j) {
        AdTemplate adTemplate;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (adResultData.getAdTemplateList().size() <= 0 || (adTemplate = adResultData.getAdTemplateList().get(0)) == null) {
            return;
        }
        com.kwad.components.core.o.a.pA().f(adTemplate, jElapsedRealtime - j);
    }

    static /* synthetic */ boolean a(c cVar, boolean z) {
        cVar.hY = false;
        return false;
    }

    public static c ct() {
        return a.ih;
    }

    public final void a(int i, int i2, SceneImpl sceneImpl, b bVar) {
        if (this.hY) {
            return;
        }
        SceneImpl sceneImplM21clone = sceneImpl.m21clone();
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        sceneImplM21clone.setAdStyle(16);
        sceneImplM21clone.setAdNum(i2);
        a(new com.kwad.components.core.p.a.b(sceneImplM21clone), new AnonymousClass1(sceneImpl, bVar, jElapsedRealtime));
    }

    public final void release() {
        m<com.kwad.components.core.p.a, AdResultData> mVar = this.hZ;
        if (mVar != null) {
            mVar.cancel();
        }
    }
}
