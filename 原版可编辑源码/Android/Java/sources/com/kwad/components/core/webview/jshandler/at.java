package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.utils.bj;

public final class at implements com.kwad.sdk.core.webview.c.a {
    private a VB;

    public interface a {
        void rp();
    }

    public at(a aVar) {
        this.VB = aVar;
    }

    private void rF() {
        if (com.kwad.components.core.e.c.b.mZ()) {
            return;
        }
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                if (at.this.VB != null) {
                    at.this.VB.rp();
                }
            }
        });
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        rF();
    }

    @Override
    public final String getKey() {
        return "showDownloadTips";
    }

    @Override
    public final void onDestroy() {
    }
}
