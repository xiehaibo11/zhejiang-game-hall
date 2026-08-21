package com.kwad.components.core.webview.jshandler;

public final class ai implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private com.kwad.components.core.webview.jshandler.ai.a Vj;

    public class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        final com.kwad.components.core.webview.jshandler.ai Vk;
        public int id;
        public int status;

        public a(com.kwad.components.core.webview.jshandler.ai r1) {
                r0 = this;
                r0.Vk = r1
                r0.<init>()
                return
        }
    }

    public ai() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.webview.jshandler.ai$a r0 = new com.kwad.components.core.webview.jshandler.ai$a
            r0.<init>(r1)
            r1.Vj = r0
            return
    }

    private void p(int r1, int r2) {
            r0 = this;
            com.kwad.sdk.core.webview.c.c r2 = r0.Tv
            if (r2 == 0) goto L14
            com.kwad.components.core.webview.jshandler.ai$a r2 = r0.Vj
            r2.id = r1
            com.kwad.components.core.webview.jshandler.ai$a r1 = r0.Vj
            r2 = 2
            r1.status = r2
            com.kwad.sdk.core.webview.c.c r1 = r0.Tv
            com.kwad.components.core.webview.jshandler.ai$a r2 = r0.Vj
            r1.a(r2)
        L14:
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            return
    }

    public final void aN(int r2) {
            r1 = this;
            r2 = 1
            r0 = 2
            r1.p(r2, r0)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerAnimationListener"
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
