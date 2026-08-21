package com.kwad.components.core.webview.jshandler;

public final class as implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c TU;
    private com.kwad.components.core.webview.jshandler.as.b Vy;


    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int visibility;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public interface b {
        void a(com.kwad.components.core.webview.jshandler.as.a r1);
    }

    public as(com.kwad.components.core.webview.jshandler.as.b r1) {
            r0 = this;
            r0.<init>()
            r0.Vy = r1
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.jshandler.as r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.TU
            return r0
    }

    static void a(com.kwad.components.core.webview.jshandler.as r0, com.kwad.components.core.webview.jshandler.as.a r1) {
            r0.b(r1)
            return
    }

    private void b(com.kwad.components.core.webview.jshandler.as.a r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.as$b r0 = r1.Vy
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            r1.TU = r3
            com.kwad.components.core.webview.jshandler.as$a r3 = new com.kwad.components.core.webview.jshandler.as$a
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L10
            r3.parseJson(r0)     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L14:
            com.kwad.components.core.webview.jshandler.as$1 r2 = new com.kwad.components.core.webview.jshandler.as$1
            r2.<init>(r1, r3)
            com.kwad.sdk.utils.bj.postOnUiThread(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "setHeaderBar"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Vy = r0
            r1.TU = r0
            return
    }
}
