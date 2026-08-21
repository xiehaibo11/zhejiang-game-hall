package com.kwad.components.core.webview.jshandler;

public final class g implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String data;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.g$a r2 = new com.kwad.components.core.webview.jshandler.g$a
            r2.<init>()
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r2.data = r0
            r3.a(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "uuid"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
