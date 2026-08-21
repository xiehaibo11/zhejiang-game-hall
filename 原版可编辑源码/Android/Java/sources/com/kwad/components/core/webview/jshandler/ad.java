package com.kwad.components.core.webview.jshandler;

import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class ad implements com.kwad.sdk.core.webview.c.a {
    private List<c> mHolders = new ArrayList();

    static class a extends com.kwad.sdk.core.download.a.a {
        private c Vb;

        public a(c cVar) {
            this.Vb = cVar;
        }

        @Override
        public final void onDownloadFailed() {
            ad.a(this.Vb, 1, 0.0f);
        }

        @Override
        public final void onDownloadFinished() {
            ad.a(this.Vb, 5, 1.0f);
        }

        @Override
        public final void onIdle() {
            ad.a(this.Vb, 1, 0.0f);
        }

        @Override
        public final void onInstalled() {
            ad.a(this.Vb, 6, 1.0f);
        }

        @Override
        public final void onPaused(int i) {
            ad.a(this.Vb, 3, (i * 1.0f) / 100.0f);
        }

        @Override
        public final void onProgressUpdate(int i) {
            ad.a(this.Vb, 2, (i * 1.0f) / 100.0f);
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public long creativeId = -1;
    }

    static class c {
        private com.kwad.components.core.e.d.c Vc;
        private a Vd;
        private AdTemplate mAdTemplate;
        private com.kwad.sdk.core.webview.c.c nA;

        public c(com.kwad.components.core.e.d.c cVar, AdTemplate adTemplate) {
            this.Vc = cVar;
            this.mAdTemplate = adTemplate;
        }

        public final void a(a aVar) {
            this.Vc.b(aVar);
            this.Vd = aVar;
        }

        public final void destroy() {
            a aVar;
            com.kwad.components.core.e.d.c cVar = this.Vc;
            if (cVar == null || (aVar = this.Vd) == null) {
                return;
            }
            cVar.c(aVar);
        }

        public final long rx() {
            AdTemplate adTemplate = this.mAdTemplate;
            if (adTemplate == null) {
                return -1L;
            }
            return com.kwad.sdk.core.response.b.d.cq(adTemplate);
        }
    }

    public ad(List<AdTemplate> list, List<com.kwad.components.core.e.d.c> list2) {
        if (list == null || list2 == null) {
            return;
        }
        int size = list.size();
        for (int i = 0; i < size; i++) {
            this.mHolders.add(new c(list2.get(i), list.get(i)));
        }
    }

    private c D(long j) {
        if (j == -1) {
            return null;
        }
        for (c cVar : this.mHolders) {
            if (cVar.rx() == j) {
                return cVar;
            }
        }
        return null;
    }

    private static void a(c cVar, int i, float f) {
        if (cVar == null || cVar.nA == null) {
            return;
        }
        com.kwad.sdk.core.e.c.d("MultiProgressListener", "notifyDownloadProgress: " + cVar.nA + f);
        com.kwad.sdk.core.webview.c.c cVar2 = cVar.nA;
        ap.a aVar = new ap.a();
        aVar.Vv = f;
        aVar.status = i;
        aVar.creativeId = cVar.rx();
        aVar.totalBytes = com.kwad.sdk.core.response.b.d.cg(cVar.mAdTemplate).totalBytes;
        cVar2.a(aVar);
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (str != null) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                b bVar = new b();
                bVar.parseJson(jSONObject);
                c cVarD = D(bVar.creativeId);
                if (cVarD != null) {
                    cVarD.nA = cVar;
                    cVarD.a(new a(cVarD));
                }
            } catch (Exception unused) {
            }
        }
    }

    @Override
    public final String getKey() {
        return "registerMultiProgressListener";
    }

    @Override
    public final void onDestroy() {
        Iterator<c> it = this.mHolders.iterator();
        while (it.hasNext()) {
            it.next().destroy();
        }
    }
}
