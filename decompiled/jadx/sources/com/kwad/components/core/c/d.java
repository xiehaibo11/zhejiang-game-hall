package com.kwad.components.core.c;

import android.util.SparseArray;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class d implements com.kwad.components.core.c.c {
    private static volatile d Ij = null;
    private static boolean Ik = true;
    private SparseArray<com.kwad.components.core.c.c> Ii;

    static class a implements Comparator<AdTemplate> {
        private a() {
        }

        /* synthetic */ a(byte b) {
            this();
        }

        private static int a(AdTemplate adTemplate, AdTemplate adTemplate2) {
            int iCv = com.kwad.sdk.core.response.b.d.cv(adTemplate2) - com.kwad.sdk.core.response.b.d.cv(adTemplate);
            if (iCv != 0) {
                return iCv;
            }
            if (adTemplate.fromCache && adTemplate2.fromCache) {
                return 0;
            }
            return adTemplate.fromCache ? 1 : -1;
        }

        @Override // java.util.Comparator
        public final /* synthetic */ int compare(AdTemplate adTemplate, AdTemplate adTemplate2) {
            return a(adTemplate, adTemplate2);
        }
    }

    static class b extends p<com.kwad.components.core.p.a, AdResultData> {
        private com.kwad.components.core.p.a.a Ip;

        public b(com.kwad.components.core.p.a.a aVar) {
            this.Ip = aVar;
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public void onSuccess(com.kwad.components.core.p.a aVar, final AdResultData adResultData) {
            super.onSuccess(aVar, adResultData);
            GlobalThreadPools.CW().submit(new Runnable() { // from class: com.kwad.components.core.c.d.b.1
                @Override // java.lang.Runnable
                public final void run() {
                    b bVar = b.this;
                    b.f(adResultData);
                }
            });
            if (a(this.Ip, adResultData)) {
                return;
            }
            com.kwad.components.core.p.a.a.a(this.Ip, adResultData, false);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static void f(AdResultData adResultData) {
            List<AdTemplate> proceedTemplateList = adResultData.getProceedTemplateList();
            com.kwad.components.core.c.a aVarMg = com.kwad.components.core.c.a.mg();
            if (aVarMg == null || proceedTemplateList.size() <= 0) {
                return;
            }
            AdTemplate adTemplate = proceedTemplateList.get(0);
            com.kwad.components.core.c.e eVarP = com.kwad.components.core.c.e.p(adResultData.getPosId());
            aVarMg.mh();
            aVarMg.g(g.a(eVarP, adResultData));
            aVarMg.a(com.kwad.components.core.c.e.I(adTemplate));
        }

        @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public void onError(com.kwad.components.core.p.a aVar, int i, String str) {
            super.onError(aVar, i, str);
            com.kwad.components.core.p.a.a.a(this.Ip, i, str, false);
        }

        protected boolean a(com.kwad.components.core.p.a.a aVar, AdResultData adResultData) {
            return false;
        }
    }

    interface c {
        void mo();
    }

    /* JADX INFO: renamed from: com.kwad.components.core.c.d$d, reason: collision with other inner class name */
    public static class C0141d implements com.kwad.components.core.c.c {
        @Override // com.kwad.components.core.c.c
        public final void c(com.kwad.components.core.p.a.a aVar) {
            d.a(aVar, new b(aVar));
        }
    }

    public static class e implements com.kwad.components.core.c.c {
        @Override // com.kwad.components.core.c.c
        public final void c(final com.kwad.components.core.p.a.a aVar) {
            GlobalThreadPools.CW().submit(new Runnable() { // from class: com.kwad.components.core.c.d.e.1
                @Override // java.lang.Runnable
                public final void run() throws Throwable {
                    AdResultData adResultDataD = d.d(aVar);
                    if (adResultDataD != null && !adResultDataD.isAdResultDataEmpty()) {
                        com.kwad.components.core.p.a.a.a(aVar, adResultDataD, true);
                    } else {
                        com.kwad.components.core.p.a.a aVar2 = aVar;
                        d.a(aVar2, new b(aVar2));
                    }
                }
            });
        }
    }

    public static class f implements com.kwad.components.core.c.c {

        /* JADX INFO: renamed from: com.kwad.components.core.c.d$f$1, reason: invalid class name */
        final class AnonymousClass1 extends b {
            final /* synthetic */ com.kwad.components.core.p.a.a bv;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass1(com.kwad.components.core.p.a.a aVar, com.kwad.components.core.p.a.a aVar2) {
                super(aVar);
                this.bv = aVar2;
            }

            /* JADX INFO: Access modifiers changed from: private */
            public void a(SceneImpl sceneImpl, AdResultData adResultData, int i, c cVar) throws Throwable {
                AdResultData adResultDataD = d.d(this.bv);
                if (adResultDataD == null || adResultDataD.isAdResultDataEmpty()) {
                    if (cVar != null) {
                        cVar.mo();
                        return;
                    }
                    return;
                }
                List listA = d.a((List<AdTemplate>[]) new List[]{adResultDataD.getProceedTemplateList()});
                List listSubList = listA.subList(0, Math.min(i, listA.size()));
                if (listSubList.size() > 0) {
                    if (adResultData == null) {
                        adResultData = new AdResultData(sceneImpl);
                    }
                    com.kwad.components.core.p.a.a.a(this.bv, new AdResultData(adResultData, sceneImpl, listSubList), false);
                }
            }

            @Override // com.kwad.components.core.c.d.b, com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a */
            public final void onError(final com.kwad.components.core.p.a aVar, final int i, final String str) {
                GlobalThreadPools.CW().submit(new Runnable() { // from class: com.kwad.components.core.c.d.f.1.2
                    @Override // java.lang.Runnable
                    public final void run() throws Throwable {
                        AnonymousClass1.this.a(aVar.getScene(), null, aVar.getAdNum(), new c() { // from class: com.kwad.components.core.c.d.f.1.2.1
                            @Override // com.kwad.components.core.c.d.c
                            public final void mo() {
                                com.kwad.components.core.p.a.a.a(AnonymousClass1.this.bv, i, str, false);
                            }
                        });
                    }
                });
            }

            @Override // com.kwad.components.core.c.d.b
            protected final boolean a(final com.kwad.components.core.p.a.a aVar, final AdResultData adResultData) {
                AdResultData adResultDataD;
                final SceneImpl adScene = adResultData.getAdScene(aVar.getPosId());
                final int adNum = adScene.getAdNum();
                if (adResultData.isAdResultDataEmpty()) {
                    GlobalThreadPools.CW().submit(new Runnable() { // from class: com.kwad.components.core.c.d.f.1.1
                        @Override // java.lang.Runnable
                        public final void run() throws Throwable {
                            AnonymousClass1.this.a(adScene, adResultData, adNum, new c() { // from class: com.kwad.components.core.c.d.f.1.1.1
                                @Override // com.kwad.components.core.c.d.c
                                public final void mo() {
                                    com.kwad.components.core.p.a.a.a(aVar, adResultData, false);
                                }
                            });
                        }
                    });
                    return true;
                }
                if (adResultData.isBidding() && (adResultDataD = d.d(aVar)) != null && !adResultDataD.isAdResultDataEmpty()) {
                    List listA = d.a((List<AdTemplate>[]) new List[]{adResultDataD.getProceedTemplateList(), adResultData.getProceedTemplateList()});
                    List listSubList = listA.subList(0, Math.min(adNum, listA.size()));
                    if (listSubList != null && listSubList.size() > 0) {
                        com.kwad.components.core.p.a.a.a(aVar, new AdResultData(adResultData, adScene, listSubList), true);
                        return true;
                    }
                }
                return false;
            }
        }

        @Override // com.kwad.components.core.c.c
        public final void c(com.kwad.components.core.p.a.a aVar) {
            d.a(aVar, new AnonymousClass1(aVar, aVar));
        }
    }

    private d() {
        SparseArray<com.kwad.components.core.c.c> sparseArray = new SparseArray<>();
        this.Ii = sparseArray;
        sparseArray.append(1, new f());
        this.Ii.append(2, new e());
        this.Ii.append(0, new C0141d());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static <T extends com.kwad.components.core.p.a> T a(com.kwad.sdk.g.c<T> cVar) {
        return cVar.get();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static List<AdTemplate> a(List<AdTemplate>... listArr) {
        if (listArr == null) {
            return null;
        }
        ArrayList<AdTemplate> arrayList = new ArrayList();
        byte b2 = 0;
        for (List<AdTemplate> list : listArr) {
            arrayList.addAll(list);
        }
        Collections.sort(arrayList, new a(b2));
        ArrayList arrayList2 = new ArrayList();
        HashSet hashSet = new HashSet();
        for (AdTemplate adTemplate : arrayList) {
            long jCq = com.kwad.sdk.core.response.b.d.cq(adTemplate);
            if (!hashSet.contains(Long.valueOf(jCq))) {
                hashSet.add(Long.valueOf(jCq));
                arrayList2.add(adTemplate);
            }
        }
        return arrayList2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(final com.kwad.components.core.p.a.a aVar, p<com.kwad.components.core.p.a, AdResultData> pVar) {
        new com.kwad.components.core.m.a(aVar.Lj) { // from class: com.kwad.components.core.c.d.1
            @Override // com.kwad.components.core.m.a, com.kwad.sdk.core.network.m
            /* JADX INFO: renamed from: ag */
            public final AdResultData parseData(String str) {
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(KSLoggerReporter.cs(aVar.getAdStyle()), "requestFinish").report();
                return AdResultData.createFromResponseJson(str, aVar.Lj.PN);
            }

            @Override // com.kwad.components.core.m.a, com.kwad.sdk.core.network.a
            /* JADX INFO: renamed from: mm */
            public final com.kwad.components.core.p.a createRequest() {
                return d.a(new com.kwad.sdk.g.c<com.kwad.components.core.p.a>() { // from class: com.kwad.components.core.c.d.1.1
                    /* JADX INFO: Access modifiers changed from: private */
                    @Override // com.kwad.sdk.g.c
                    /* JADX INFO: renamed from: mn, reason: merged with bridge method [inline-methods] */
                    public com.kwad.components.core.p.a get() {
                        if (aVar.getAdStyle() == 4) {
                            com.kwad.components.ad.b.h hVar = (com.kwad.components.ad.b.h) com.kwad.sdk.components.c.f(com.kwad.components.ad.b.h.class);
                            aVar.PJ = hVar.R();
                        }
                        return new com.kwad.components.core.p.a(aVar);
                    }
                });
            }
        }.request(pVar);
    }

    static /* synthetic */ boolean a(d dVar) {
        return mk();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static AdResultData d(com.kwad.components.core.p.a.a aVar) throws Throwable {
        com.kwad.components.core.c.a aVarMg = com.kwad.components.core.c.a.mg();
        if (aVarMg == null) {
            return null;
        }
        int adNum = aVar.getAdNum();
        List<g> listB = aVarMg.b(String.valueOf(aVar.getPosId()), System.currentTimeMillis() / 1000, com.kwad.components.core.c.e.p(aVar.getPosId()).mr());
        if (com.kwad.sdk.core.config.d.zT()) {
            h(listB);
        }
        if (listB == null || listB.size() <= 0) {
            return null;
        }
        Collections.sort(listB);
        return g.i(listB.subList(0, Math.min(listB.size(), adNum)));
    }

    private static void h(List<g> list) {
        if (list == null) {
            return;
        }
        Iterator<g> it = list.iterator();
        while (it.hasNext()) {
            g next = it.next();
            if (com.kwad.components.core.c.f.mu().a(next)) {
                com.kwad.sdk.core.e.c.d("AdCacheFetcherHolder", "filterByMemCached contain: " + next.mB());
                it.remove();
            }
        }
    }

    public static d mj() {
        if (Ij == null) {
            synchronized (d.class) {
                if (Ij == null) {
                    Ij = new d();
                }
            }
        }
        return Ij;
    }

    private static boolean mk() {
        if (!Ik) {
            return false;
        }
        try {
            Class.forName("com.kwad.devTools.PosConfigFetcher");
            Ik = true;
        } catch (ClassNotFoundException unused) {
            Ik = false;
        }
        return Ik;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public com.kwad.components.core.c.c ml() {
        return this.Ii.get(0);
    }

    @Override // com.kwad.components.core.c.c
    public final void c(final com.kwad.components.core.p.a.a aVar) {
        GlobalThreadPools.CW().submit(new Runnable() { // from class: com.kwad.components.core.c.d.2
            @Override // java.lang.Runnable
            public final void run() {
                final com.kwad.components.core.c.e eVarP = com.kwad.components.core.c.e.p(aVar.getPosId());
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.c.d.2.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.components.core.c.b.b(eVarP);
                    }
                });
                com.kwad.components.core.c.c cVarMl = (d.a(d.this) || !(eVarP.isDefault() || eVarP.isEnable())) ? d.this.ml() : (com.kwad.components.core.c.c) d.this.Ii.get(eVarP.mq());
                if (cVarMl == null) {
                    cVarMl = (com.kwad.components.core.c.c) d.this.Ii.get(1);
                }
                cVarMl.c(aVar);
            }
        });
    }
}
