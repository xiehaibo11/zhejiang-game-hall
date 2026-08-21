package com.kwad.components.core.webview.jshandler;

public final class aq implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private com.kwad.components.core.webview.jshandler.aq.a Vw;

    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int status;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public aq() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.webview.jshandler.aq$a r0 = new com.kwad.components.core.webview.jshandler.aq$a
            r0.<init>()
            r1.Vw = r0
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            return
    }

    public final void aO(int r2) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.Tv
            if (r0 == 0) goto Lf
            com.kwad.components.core.webview.jshandler.aq$a r0 = r1.Vw
            r0.status = r2
            com.kwad.sdk.core.webview.c.c r2 = r1.Tv
            com.kwad.components.core.webview.jshandler.aq$a r0 = r1.Vw
            r2.a(r0)
        Lf:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerVideoListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }
}
