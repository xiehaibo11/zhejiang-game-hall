package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.utils.bj;

public final class ao implements com.kwad.sdk.core.webview.c.a {
    private final a Vr;

    public interface a {
        void bA();
    }

    public ao(a aVar) {
        this.Vr = aVar;
    }

    @Override
    public final void a(String str, final com.kwad.sdk.core.webview.c.c cVar) {
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                if (ao.this.Vr != null) {
                    ao.this.Vr.bA();
                }
                cVar.a(null);
            }
        });
    }

    @Override
    public final String getKey() {
        return "registerMotionListener";
    }

    @Override
    public final void onDestroy() {
    }
}
