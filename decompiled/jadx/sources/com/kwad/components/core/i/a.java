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

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static int KI = 12;
    private static int KJ = 4;
    private static int KK = 1;

    /* JADX INFO: renamed from: com.kwad.components.core.i.a$a, reason: collision with other inner class name */
    public interface InterfaceC0155a {
        void c(List<c> list);

        void onError(int i, String str);

        void onRequestResult(int i);
    }

    private static void a(int i, int i2, SceneImpl sceneImpl, final int i3, final InterfaceC0155a interfaceC0155a) {
        SceneImpl sceneImplM21clone = sceneImpl.m21clone();
        final long jElapsedRealtime = SystemClock.elapsedRealtime();
        sceneImplM21clone.setAdStyle(i);
        sceneImplM21clone.setAdNum(i2);
        a(new com.kwad.components.core.p.a.b(sceneImplM21clone), null, false, true, new h() { // from class: com.kwad.components.core.i.a.1
            @Override // com.kwad.components.core.p.i
            public final void a(final AdResultData adResultData) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.i.a.1.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            interfaceC0155a.onRequestResult(adResultData.getAdTemplateList().size());
                        } catch (Throwable th) {
                            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                        }
                    }
                });
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.i.a.1.3
                    @Override // java.lang.Runnable
                    public final void run() {
                        interfaceC0155a.c(a.b(adResultData.getAdTemplateList(), i3));
                        a.a(adResultData, jElapsedRealtime);
                    }
                });
            }

            @Override // com.kwad.components.core.p.i
            public final void onError(final int i4, final String str) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.i.a.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.sdk.core.e.c.w("RefluxAdLoadManager", "loadInnerAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i4), str));
                        interfaceC0155a.onError(i4, str);
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
        new com.kwad.components.core.m.a(bVar) { // from class: com.kwad.components.core.i.a.2
            @Override // com.kwad.components.core.m.a, com.kwad.sdk.core.network.a
            /* JADX INFO: renamed from: mm, reason: merged with bridge method [inline-methods] */
            public final com.kwad.components.core.p.a createRequest() {
                com.kwad.components.core.p.a aVar = new com.kwad.components.core.p.a(bVar, list2, z4, null);
                aVar.aC(z5 ? 1 : 0);
                return aVar;
            }
        }.request(new p<com.kwad.components.core.p.a, AdResultData>() { // from class: com.kwad.components.core.i.a.3
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

    public static void a(SceneImpl sceneImpl, InterfaceC0155a interfaceC0155a) {
        a(15, KJ, sceneImpl, e.AGGREGATION, interfaceC0155a);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static List<c> b(List<AdTemplate> list, int i) {
        ArrayList arrayList = new ArrayList();
        Iterator<AdTemplate> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(new c(it.next(), i));
        }
        return arrayList;
    }

    public static void b(SceneImpl sceneImpl, InterfaceC0155a interfaceC0155a) {
        a(17, KK, sceneImpl, e.KU, interfaceC0155a);
    }
}
