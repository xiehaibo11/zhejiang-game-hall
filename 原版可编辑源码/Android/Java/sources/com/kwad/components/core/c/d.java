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

public class d implements com.kwad.components.core.c.c {
    private static volatile d Ij = null;
    private static boolean Ik = true;
    private SparseArray<com.kwad.components.core.c.c> Ii;

    static class a implements Comparator<AdTemplate> {
        private a() {
        }

        a(byte b) {
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

        @Override
        public final int compare(AdTemplate adTemplate, AdTemplate adTemplate2) {
            return a(adTemplate, adTemplate2);
        }
    }

    static class b extends p<com.kwad.components.core.p.a, AdResultData> {
        private com.kwad.components.core.p.a.a Ip;

        public b(com.kwad.components.core.p.a.a aVar) {
            this.Ip = aVar;
        }

        @Override
        private void onSuccess(com.kwad.components.core.p.a aVar, final AdResultData adResultData) {
            super.onSuccess(aVar, adResultData);
            GlobalThreadPools.CW().submit(new Runnable() {
                @Override
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

        private static void f(AdResultData adResultData) {
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

        @Override
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

    public static class d implements com.kwad.components.core.c.c {
        @Override
        public final void c(com.kwad.components.core.p.a.a aVar) {
            d.a(aVar, new b(aVar));
        }
    }

    public static class e implements com.kwad.components.core.c.c {
        @Override
        public final void c(final com.kwad.components.core.p.a.a aVar) {
            GlobalThreadPools.CW().submit(new Runnable() {
                @Override
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

        final class 1 extends b {
            final com.kwad.components.core.p.a.a bv;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            1(com.kwad.components.core.p.a.a aVar, com.kwad.components.core.p.a.a aVar2) {
                super(aVar);
                this.bv = aVar2;
            }

            private void a(SceneImpl sceneImpl, AdResultData adResultData, int i, c cVar) throws Throwable {
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

            @Override
            public final void onError(final com.kwad.components.core.p.a aVar, final int i, final String str) {
                GlobalThreadPools.CW().submit(new Runnable() {
                    @Override
                    public final void run() throws Throwable {
                        1.this.a(aVar.getScene(), null, aVar.getAdNum(), new c() {
                            @Override
                            public final void mo() {
                                com.kwad.components.core.p.a.a.a(1.this.bv, i, str, false);
                            }
                        });
                    }
                });
            }

            @Override
            protected final boolean a(final com.kwad.components.core.p.a.a aVar, final AdResultData adResultData) {
                AdResultData adResultDataD;
                final SceneImpl adScene = adResultData.getAdScene(aVar.getPosId());
                final int adNum = adScene.getAdNum();
                if (adResultData.isAdResultDataEmpty()) {
                    GlobalThreadPools.CW().submit(new Runnable() {
                        @Override
                        public final void run() throws Throwable {
                            1.this.a(adScene, adResultData, adNum, new c() {
                                @Override
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

        @Override
        public final void c(com.kwad.components.core.p.a.a aVar) {
            d.a(aVar, new 1(aVar, aVar));
        }
    }

    private d() {
        SparseArray<com.kwad.components.core.c.c> sparseArray = new SparseArray<>();
        this.Ii = sparseArray;
        sparseArray.append(1, new f());
        this.Ii.append(2, new e());
        this.Ii.append(0, new d());
    }

    private static <T extends com.kwad.components.core.p.a> T a(com.kwad.sdk.g.c<T> cVar) {
        return cVar.get();
    }

    private static List<AdTemplate> a(List<AdTemplate>... listArr) {
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

    private static void a(final com.kwad.components.core.p.a.a aVar, p<com.kwad.components.core.p.a, AdResultData> pVar) {
        new com.kwad.components.core.m.a(aVar.Lj) {
            @Override
            public final AdResultData parseData(String str) {
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(KSLoggerReporter.cs(aVar.getAdStyle()), "requestFinish").report();
                return AdResultData.createFromResponseJson(str, aVar.Lj.PN);
            }

            @Override
            public final com.kwad.components.core.p.a createRequest() {
                return d.a(new com.kwad.sdk.g.c<com.kwad.components.core.p.a>() {
                    @Override
                    private com.kwad.components.core.p.a get() {
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

    static boolean a(d dVar) {
        return mk();
    }

    private static AdResultData d(com.kwad.components.core.p.a.a aVar) throws Throwable {
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

    private com.kwad.components.core.c.c ml() {
        return this.Ii.get(0);
    }

    @Override
    public final void c(final com.kwad.components.core.p.a.a aVar) {
        GlobalThreadPools.CW().submit(new Runnable() {
            @Override
            public final void run() {
                final com.kwad.components.core.c.e eVarP = com.kwad.components.core.c.e.p(aVar.getPosId());
                bj.runOnUiThread(new Runnable() {
                    @Override
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
