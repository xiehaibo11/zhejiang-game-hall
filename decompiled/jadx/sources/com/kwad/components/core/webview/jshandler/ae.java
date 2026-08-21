package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ae implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b cE;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public String UY;
    }

    public static final class b extends com.kwad.sdk.core.response.a.a {
        public double Vf;
        public int status;
        public long totalBytes;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i, float f, com.kwad.sdk.core.webview.c.c cVar) {
        if (cVar != null) {
            b bVar = new b();
            bVar.Vf = f;
            bVar.status = i;
            bVar.totalBytes = com.kwad.sdk.core.response.b.d.cg(this.cE.getAdTemplate()).totalBytes;
            cVar.a(bVar);
        }
    }

    private KsAppDownloadListener aJ(String str) {
        return new com.kwad.sdk.core.download.a.a(str) { // from class: com.kwad.components.core.webview.jshandler.ae.1
            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFailed() {
                if (ae.this.cE.ayf != null) {
                    ae.this.a(1, 0.0f, ae.this.cE.ayf.fz(nx()));
                }
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFinished() {
                if (ae.this.cE.ayf != null) {
                    ae.this.a(5, 1.0f, ae.this.cE.ayf.fz(nx()));
                }
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onIdle() {
                if (ae.this.cE.ayf != null) {
                    ae.this.a(1, 0.0f, ae.this.cE.ayf.fz(nx()));
                }
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onInstalled() {
                if (ae.this.cE.ayf != null) {
                    ae.this.a(6, 1.0f, ae.this.cE.ayf.fz(nx()));
                }
            }

            @Override // com.kwad.sdk.core.download.a.a
            public final void onPaused(int i) {
                if (ae.this.cE.ayf != null) {
                    ae.this.a(3, (i * 1.0f) / 100.0f, ae.this.cE.ayf.fz(nx()));
                }
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onProgressUpdate(int i) {
                if (ae.this.cE.ayf != null) {
                    ae.this.a(2, (i * 1.0f) / 100.0f, ae.this.cE.ayf.fz(nx()));
                }
            }
        };
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        a aVar = new a();
        AdTemplate adTemplate = new AdTemplate();
        try {
            aVar.parseJson(new JSONObject(str));
            adTemplate.parseJson(new JSONObject(aVar.UY));
        } catch (Exception e) {
            adTemplate = null;
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        if (adTemplate == null || !com.kwad.sdk.core.response.b.d.bY(adTemplate) || this.cE.ayf == null) {
            return;
        }
        com.kwad.components.core.e.d.c cVar2 = new com.kwad.components.core.e.d.c(adTemplate);
        String strNx = cVar2.nx();
        cVar2.b(aJ(strNx));
        this.cE.ayf.a(strNx, cVar2);
        this.cE.ayf.b(strNx, cVar);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerProgressListener";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        if (this.cE.ayf != null) {
            this.cE.ayf.release();
        }
    }
}
