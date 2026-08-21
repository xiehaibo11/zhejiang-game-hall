package com.kwad.components.core.webview.jshandler;

public final class p implements com.kwad.sdk.core.webview.c.a {
    private android.os.Handler TT;
    private com.kwad.sdk.core.webview.c.c TU;
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;


    public p(com.kwad.sdk.core.webview.d.a.b r2) {
            r1 = this;
            r1.<init>()
            r1.mWebCardCloseListener = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            r1.TT = r2
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.jshandler.p r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.TU
            return r0
    }

    static void a(com.kwad.components.core.webview.jshandler.p r0, com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0.c(r1)
            return
    }

    private void c(com.kwad.sdk.commercial.model.WebCloseStatus r2) {
            r1 = this;
            com.kwad.sdk.core.webview.d.a.b r0 = r1.mWebCardCloseListener
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            r1.TU = r3
            com.kwad.sdk.commercial.model.WebCloseStatus r3 = new com.kwad.sdk.commercial.model.WebCloseStatus
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L10
            r3.parseJson(r0)     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L14:
            android.os.Handler r2 = r1.TT
            com.kwad.components.core.webview.jshandler.p$1 r0 = new com.kwad.components.core.webview.jshandler.p$1
            r0.<init>(r1, r3)
            r2.post(r0)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "close"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            r0 = 0
            r2.mWebCardCloseListener = r0
            r2.TU = r0
            android.os.Handler r1 = r2.TT
            r1.removeCallbacksAndMessages(r0)
            return
    }
}
