package com.kwad.components.core.webview.jshandler;

public final class al implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;

    public al() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerDeeplinkListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }

    public final void onFailed() {
            r3 = this;
            com.kwad.sdk.core.webview.c.c r0 = r3.Tv
            if (r0 == 0) goto La
            r1 = -1
            java.lang.String r2 = "deep link error"
            r0.onError(r1, r2)
        La:
            return
    }

    public final void onSuccess() {
            r2 = this;
            com.kwad.sdk.core.webview.c.c r0 = r2.Tv
            if (r0 == 0) goto L8
            r1 = 0
            r0.a(r1)
        L8:
            return
    }
}
