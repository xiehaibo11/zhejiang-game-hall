package com.kwad.components.core.i;

import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.core.p.h;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class a {
    private static int KI = 12;
    private static int KJ = 4;
    private static int KK = 1;

    public interface a {
        void c(List<c> list);

        void onError(int i, String str);

        void onRequestResult(int i);
    }

    private static void a(int i, int i2, SceneImpl sceneImpl, final int i3, final a aVar) {
        SceneImpl sceneImplClone = sceneImpl.clone();
        final long jElapsedRealtime = SystemClock.elapsedRealtime();
        sceneImplClone.setAdStyle(i);
        sceneImplClone.setAdNum(i2);
        a(new com.kwad.components.core.p.a.b(sceneImplClone), null, false, true, new h() {
            @Override
            public final void a(final AdResultData adResultData) {
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            aVar.onRequestResult(adResultData.getAdTemplateList().size());
                        } catch (Throwable th) {
                            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                        }
                    }
                });
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        aVar.c(a.b(adResultData.getAdTemplateList(), i3));
                        a.a(adResultData, jElapsedRealtime);
                    }
                });
            }

            @Override
            public final void onError(final int i4, final String str) {
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        com.kwad.sdk.core.e.c.w("RefluxAdLoadManager", "loadInnerAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i4), str));
                        aVar.onError(i4, str);
                    }
                });
            }
        }, false);
    }

    private static void a(final com.kwad.components.core.p.a.b bVar, List<String> list, boolean z, boolean z2, final h hVar, boolean z3) {
        final List list2 = null;
        final boolean z4 = false;
        final boolean z5 = true;
        final boolean z6 = false;
        new com.kwad.components.core.m.a(bVar) {
            @Override
            public final com.kwad.components.core.p.a createRequest() {
                com.kwad.components.core.p.a aVar = new com.kwad.components.core.p.a(bVar, list2, z4, null);
                aVar.aC(z5 ? 1 : 0);
                return aVar;
            }
        }.request(new p<com.kwad.components.core.p.a, AdResultData>() {
            private void b(AdResultData adResultData) {
                if (!adResultData.isAdResultDataEmpty() || z6) {
                    hVar.a(adResultData);
                } else {
                    hVar.onError(f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? f.aoU.msg : adResultData.testErrorMsg);
                }
            }

            private void f(int i, String str) {
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

    public static void a(SceneImpl sceneImpl, a aVar) {
        a(15, KJ, sceneImpl, e.AGGREGATION, aVar);
    }

    private static List<c> b(List<AdTemplate> list, int i) {
        ArrayList arrayList = new ArrayList();
        Iterator<AdTemplate> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(new c(it.next(), i));
        }
        return arrayList;
    }

    public static void b(SceneImpl sceneImpl, a aVar) {
        a(17, KK, sceneImpl, e.KU, aVar);
    }
}
