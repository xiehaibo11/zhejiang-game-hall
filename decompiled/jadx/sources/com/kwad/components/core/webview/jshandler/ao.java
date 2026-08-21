package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class ao implements com.kwad.sdk.core.webview.c.a {
    private final a Vr;

    public interface a {
        void bA();
    }

    public ao(a aVar) {
        this.Vr = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, final com.kwad.sdk.core.webview.c.c cVar) {
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.ao.1
            @Override // java.lang.Runnable
            public final void run() {
                if (ao.this.Vr != null) {
                    ao.this.Vr.bA();
                }
                cVar.a(null);
            }
        });
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerMotionListener";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
