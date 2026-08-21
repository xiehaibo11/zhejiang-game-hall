package com.kwad.components.core.webview.jshandler;

public final class r implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private boolean TN;
    private android.os.Handler TT;
    private boolean TX;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private final com.kwad.components.core.e.d.c mApkDownloadHelper;



    public r(com.kwad.sdk.core.webview.b r7, com.kwad.components.core.e.d.c r8, com.kwad.sdk.core.webview.d.a.a r9) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public r(com.kwad.sdk.core.webview.b r2, com.kwad.components.core.e.d.c r3, com.kwad.sdk.core.webview.d.a.a r4, boolean r5, boolean r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.TN = r0
            r1.TX = r0
            r1.TN = r5
            android.os.Handler r5 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r5.<init>(r0)
            r1.TT = r5
            r1.TL = r2
            r1.mApkDownloadHelper = r3
            r1.TX = r6
            if (r3 == 0) goto L21
            r2 = 1
            r3.ar(r2)
        L21:
            r1.cH = r4
            return
    }

    static com.kwad.sdk.core.webview.b a(com.kwad.components.core.webview.jshandler.r r0) {
            com.kwad.sdk.core.webview.b r0 = r0.TL
            return r0
    }

    static com.kwad.sdk.core.webview.d.a.a b(com.kwad.components.core.webview.jshandler.r r0) {
            com.kwad.sdk.core.webview.d.a.a r0 = r0.cH
            return r0
    }

    static com.kwad.components.core.e.d.c c(com.kwad.components.core.webview.jshandler.r r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    static boolean d(com.kwad.components.core.webview.jshandler.r r0) {
            boolean r0 = r0.TN
            return r0
    }

    static boolean e(com.kwad.components.core.webview.jshandler.r r0) {
            boolean r0 = r0.TX
            return r0
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = r2.TL
            boolean r0 = r0.DY()
            if (r0 == 0) goto Lf
            r3 = -1
            java.lang.String r0 = "native adTemplate is null"
            r4.onError(r3, r0)
            return
        Lf:
            com.kwad.sdk.core.webview.d.b.a r0 = new com.kwad.sdk.core.webview.d.b.a
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L20
            r1.<init>(r3)     // Catch: org.json.JSONException -> L20
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L20
            r3 = 1
            r0.JC = r3     // Catch: org.json.JSONException -> L20
            goto L24
        L20:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L24:
            com.kwad.sdk.core.webview.b r3 = r2.TL
            boolean r3 = r3.ayg
            if (r3 == 0) goto L35
            android.os.Handler r3 = r2.TT
            com.kwad.components.core.webview.jshandler.r$1 r1 = new com.kwad.components.core.webview.jshandler.r$1
            r1.<init>(r2, r0)
        L31:
            r3.post(r1)
            goto L41
        L35:
            com.kwad.sdk.core.webview.d.a.a r3 = r2.cH
            if (r3 == 0) goto L41
            android.os.Handler r3 = r2.TT
            com.kwad.components.core.webview.jshandler.r$2 r1 = new com.kwad.components.core.webview.jshandler.r$2
            r1.<init>(r2, r0)
            goto L31
        L41:
            r3 = 0
            r4.a(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "convert"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            android.os.Handler r0 = r2.TT
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r2.cH = r1
            return
    }
}
