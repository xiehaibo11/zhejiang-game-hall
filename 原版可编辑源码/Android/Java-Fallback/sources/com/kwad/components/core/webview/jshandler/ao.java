package com.kwad.components.core.webview.jshandler;

public final class ao implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.components.core.webview.jshandler.ao.a Vr;


    public interface a {
        void bA();
    }

    public ao(com.kwad.components.core.webview.jshandler.ao.a r1) {
            r0 = this;
            r0.<init>()
            r0.Vr = r1
            return
    }

    static com.kwad.components.core.webview.jshandler.ao.a a(com.kwad.components.core.webview.jshandler.ao r0) {
            com.kwad.components.core.webview.jshandler.ao$a r0 = r0.Vr
            return r0
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.ao$1 r1 = new com.kwad.components.core.webview.jshandler.ao$1
            r1.<init>(r0, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerMotionListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
