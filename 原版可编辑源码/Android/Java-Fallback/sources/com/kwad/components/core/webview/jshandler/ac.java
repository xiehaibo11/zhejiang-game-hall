package com.kwad.components.core.webview.jshandler;

public final class ac implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private final android.os.Handler TT;
    private final com.kwad.components.core.webview.jshandler.ac.b UR;



    public static final class a extends com.kwad.sdk.core.response.a.a {
        public boolean UX;
        public java.lang.String UY;
        public int UZ;
        public com.kwad.sdk.core.webview.d.b.c Va;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public interface b {
    }

    static com.kwad.sdk.core.webview.b a(com.kwad.components.core.webview.jshandler.ac r0) {
            com.kwad.sdk.core.webview.b r0 = r0.TL
            return r0
    }

    @Override
    public final void a(java.lang.String r6, com.kwad.sdk.core.webview.c.c r7) {
            r5 = this;
            com.kwad.components.core.webview.jshandler.ac$a r0 = new com.kwad.components.core.webview.jshandler.ac$a
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = new com.kwad.sdk.core.response.model.AdTemplate
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1d
            r2.<init>(r6)     // Catch: org.json.JSONException -> L1d
            r0.parseJson(r2)     // Catch: org.json.JSONException -> L1d
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1d
            java.lang.String r2 = r0.UY     // Catch: org.json.JSONException -> L1d
            r6.<init>(r2)     // Catch: org.json.JSONException -> L1d
            r1.parseJson(r6)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)
        L21:
            boolean r6 = com.kwad.sdk.core.response.b.d.bY(r1)
            if (r6 != 0) goto L28
            return
        L28:
            com.kwad.sdk.core.webview.b r6 = r5.TL
            com.kwad.sdk.utils.af r6 = r6.ayf
            r2 = 0
            if (r6 == 0) goto L40
            com.kwad.sdk.core.response.model.AdInfo r6 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r6 = r6.downloadId
            com.kwad.sdk.core.webview.b r3 = r5.TL
            com.kwad.sdk.utils.af r3 = r3.ayf
            com.kwad.sdk.core.webview.a r6 = r3.fy(r6)
            com.kwad.components.core.e.d.c r6 = (com.kwad.components.core.e.d.c) r6
            goto L41
        L40:
            r6 = r2
        L41:
            com.kwad.sdk.core.webview.b r3 = r5.TL
            boolean r3 = r3.ayg
            if (r3 == 0) goto L52
            android.os.Handler r3 = r5.TT
            com.kwad.components.core.webview.jshandler.ac$1 r4 = new com.kwad.components.core.webview.jshandler.ac$1
            r4.<init>(r5, r0, r1, r6)
            r3.post(r4)
            goto L60
        L52:
            com.kwad.components.core.webview.jshandler.ac$b r6 = r5.UR
            if (r6 == 0) goto L60
            android.os.Handler r6 = r5.TT
            com.kwad.components.core.webview.jshandler.ac$2 r0 = new com.kwad.components.core.webview.jshandler.ac$2
            r0.<init>(r5)
            r6.post(r0)
        L60:
            r7.a(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "clickAction"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            android.os.Handler r0 = r2.TT
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }
}
