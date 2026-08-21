package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class p implements com.kwad.sdk.core.webview.c.a {
    private Handler TT = new Handler(Looper.getMainLooper());
    private com.kwad.sdk.core.webview.c.c TU;
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;

    public p(com.kwad.sdk.core.webview.d.a.b bVar) {
        this.mWebCardCloseListener = bVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(WebCloseStatus webCloseStatus) {
        com.kwad.sdk.core.webview.d.a.b bVar = this.mWebCardCloseListener;
        if (bVar != null) {
            bVar.a(webCloseStatus);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.TU = cVar;
        final WebCloseStatus webCloseStatus = new WebCloseStatus();
        try {
            webCloseStatus.parseJson(new JSONObject(str));
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        this.TT.post(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.p.1
            @Override // java.lang.Runnable
            public final void run() {
                p.this.c(webCloseStatus);
                if (p.this.TU != null) {
                    p.this.TU.a(null);
                }
            }
        });
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "close";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.mWebCardCloseListener = null;
        this.TU = null;
        this.TT.removeCallbacksAndMessages(null);
    }
}
