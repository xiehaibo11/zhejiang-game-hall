package com.kwad.components.core.webview.jshandler;

public final class ak implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private com.kwad.components.core.webview.jshandler.ak.c Vn;

    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int status;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public interface b {
        void oW();
    }

    public interface c {
        void pa();
    }

    public ak(com.kwad.components.core.webview.jshandler.ak.c r1) {
            r0 = this;
            r0.<init>()
            r0.Vn = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            com.kwad.components.core.webview.jshandler.ak$c r1 = r0.Vn
            if (r1 == 0) goto L9
            r1.pa()
        L9:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerBackClickListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }

    public final void ry() {
            r2 = this;
            com.kwad.sdk.core.webview.c.c r0 = r2.Tv
            if (r0 == 0) goto L11
            com.kwad.components.core.webview.jshandler.ak$a r0 = new com.kwad.components.core.webview.jshandler.ak$a
            r0.<init>()
            r1 = 1
            r0.status = r1
            com.kwad.sdk.core.webview.c.c r1 = r2.Tv
            r1.a(r0)
        L11:
            return
    }
}
