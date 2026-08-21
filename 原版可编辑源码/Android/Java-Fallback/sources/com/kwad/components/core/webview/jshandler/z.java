package com.kwad.components.core.webview.jshandler;

public final class z implements com.kwad.sdk.core.webview.c.a {
    private final android.os.Handler TT;
    private com.kwad.sdk.core.webview.c.c TU;
    private com.kwad.components.core.webview.jshandler.z.b cJ;


    public static class a extends com.kwad.sdk.core.response.a.a {
        public int UJ;
        public int type;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.UJ = r0
                return
        }
    }

    public interface b {
        void a(com.kwad.components.core.webview.jshandler.z.a r1);
    }

    public z(com.kwad.components.core.webview.jshandler.z.b r2) {
            r1 = this;
            r1.<init>()
            r1.cJ = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            r1.TT = r2
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.jshandler.z r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.TU
            return r0
    }

    static void a(com.kwad.components.core.webview.jshandler.z r0, com.kwad.components.core.webview.jshandler.z.a r1) {
            r0.b(r1)
            return
    }

    private void b(com.kwad.components.core.webview.jshandler.z.a r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.z$b r0 = r1.cJ
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            r2.TU = r4     // Catch: java.lang.Exception -> L20
            com.kwad.components.core.webview.jshandler.z$a r4 = new com.kwad.components.core.webview.jshandler.z$a     // Catch: java.lang.Exception -> L20
            r4.<init>()     // Catch: java.lang.Exception -> L20
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L20
            if (r0 != 0) goto L15
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L20
            r0.<init>(r3)     // Catch: java.lang.Exception -> L20
            r4.parseJson(r0)     // Catch: java.lang.Exception -> L20
        L15:
            android.os.Handler r3 = r2.TT     // Catch: java.lang.Exception -> L20
            com.kwad.components.core.webview.jshandler.z$1 r0 = new com.kwad.components.core.webview.jshandler.z$1     // Catch: java.lang.Exception -> L20
            r0.<init>(r2, r4)     // Catch: java.lang.Exception -> L20
            r3.post(r0)     // Catch: java.lang.Exception -> L20
            return
        L20:
            r3 = move-exception
            com.kwad.sdk.core.webview.c.c r4 = r2.TU
            r0 = -1
            java.lang.String r1 = r3.getMessage()
            r4.onError(r0, r1)
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "hide"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            r0 = 0
            r2.cJ = r0
            r2.TU = r0
            android.os.Handler r1 = r2.TT
            r1.removeCallbacksAndMessages(r0)
            return
    }
}
