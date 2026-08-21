package com.kwad.components.core.webview.jshandler;

public final class at implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.jshandler.at.a VB;


    public interface a {
        void rp();
    }

    public at(com.kwad.components.core.webview.jshandler.at.a r1) {
            r0 = this;
            r0.<init>()
            r0.VB = r1
            return
    }

    static com.kwad.components.core.webview.jshandler.at.a a(com.kwad.components.core.webview.jshandler.at r0) {
            com.kwad.components.core.webview.jshandler.at$a r0 = r0.VB
            return r0
    }

    private void rF() {
            r1 = this;
            boolean r0 = com.kwad.components.core.e.c.b.mZ()
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.components.core.webview.jshandler.at$1 r0 = new com.kwad.components.core.webview.jshandler.at$1
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.rF()
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "showDownloadTips"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
