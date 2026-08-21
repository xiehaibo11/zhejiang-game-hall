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

public final class c {
    private volatile boolean hY;
    private m<com.kwad.components.core.p.a, AdResultData> hZ;

    final class 1 extends h {
        final SceneImpl dU;
        final long hD;
        final b ia;

        1(SceneImpl sceneImpl, b bVar, long j) {
            this.dU = sceneImpl;
            this.ia = bVar;
            this.hD = j;
        }

        @Override
        public final void a(final AdResultData adResultData) {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    final ArrayList arrayList = new ArrayList();
                    for (AdTemplate adTemplate : adResultData.getAdTemplateList()) {
                        if (adTemplate != null) {
                            if (adTemplate.mAdScene == null) {
                                adTemplate.mAdScene = 1.this.dU;
                            }
                            arrayList.add(adTemplate);
                        }
                    }
                    bj.runOnUiThread(new Runnable() {
                        @Override
                        public final void run() {
                            1.this.ia.onInterstitialAdLoad(arrayList);
                            c cVar = c.this;
                            c.a(adResultData, 1.this.hD);
                        }
                    });
                }
            });
        }

        @Override
        public final void onError(final int i, final String str) {
            bj.runOnUiThread(new Runnable() {
                @Override
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

    c(byte b2) {
        this();
    }

    private void a(com.kwad.components.core.p.a.b bVar, final h hVar) {
        com.kwad.components.core.m.a aVar = new com.kwad.components.core.m.a(bVar);
        this.hZ = aVar;
        aVar.request(new p<com.kwad.components.core.p.a, AdResultData>() {
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

            @Override
            public final void onError(g gVar, int i, String str) {
                f(i, str);
            }

            @Override
            public final void onSuccess(g gVar, BaseResultData baseResultData) {
                b((AdResultData) baseResultData);
            }
        });
    }

    private static void a(AdResultData adResultData, long j) {
        AdTemplate adTemplate;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (adResultData.getAdTemplateList().size() <= 0 || (adTemplate = adResultData.getAdTemplateList().get(0)) == null) {
            return;
        }
        com.kwad.components.core.o.a.pA().f(adTemplate, jElapsedRealtime - j);
    }

    static boolean a(c cVar, boolean z) {
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
        SceneImpl sceneImplClone = sceneImpl.clone();
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        sceneImplClone.setAdStyle(16);
        sceneImplClone.setAdNum(i2);
        a(new com.kwad.components.core.p.a.b(sceneImplClone), new 1(sceneImpl, bVar, jElapsedRealtime));
    }

    public final void release() {
        m<com.kwad.components.core.p.a, AdResultData> mVar = this.hZ;
        if (mVar != null) {
            mVar.cancel();
        }
    }
}
