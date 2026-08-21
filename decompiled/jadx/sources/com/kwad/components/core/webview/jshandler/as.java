package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class as implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c TU;
    private b Vy;

    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int visibility;
    }

    public interface b {
        void a(a aVar);
    }

    public as(b bVar) {
        this.Vy = bVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(a aVar) {
        b bVar = this.Vy;
        if (bVar != null) {
            bVar.a(aVar);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.TU = cVar;
        final a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(str));
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.as.1
            @Override // java.lang.Runnable
            public final void run() {
                as.this.b(aVar);
                if (as.this.TU != null) {
                    as.this.TU.a(null);
                }
            }
        });
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "setHeaderBar";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.Vy = null;
        this.TU = null;
    }
}
