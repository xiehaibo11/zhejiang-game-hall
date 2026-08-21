package com.kwad.components.core.webview.jshandler;

public final class ah implements com.kwad.sdk.core.webview.c.a {
    private android.os.Handler TT;
    private com.kwad.sdk.core.webview.c.c TU;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private java.lang.String mUrl;


    public static final class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String errorMsg;
        public int status;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final boolean isSuccess() {
                r2 = this;
                int r0 = r2.status
                r1 = 1
                if (r0 != r1) goto L6
                return r1
            L6:
                r0 = 0
                return r0
        }
    }

    public interface b {
        void a(com.kwad.components.core.webview.jshandler.ah.a r1);
    }

    @java.lang.Deprecated
    public ah(com.kwad.components.core.webview.jshandler.ah.b r2) {
            r1 = this;
            r1.<init>()
            r1.cK = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            r1.TT = r2
            return
    }

    public ah(com.kwad.components.core.webview.jshandler.ah.b r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r1.cK = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            r1.TT = r2
            r1.mUrl = r3
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.jshandler.ah r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.TU
            return r0
    }

    static void a(com.kwad.components.core.webview.jshandler.ah r0, com.kwad.components.core.webview.jshandler.ah.a r1) {
            r0.b(r1)
            return
    }

    private void b(com.kwad.components.core.webview.jshandler.ah.a r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.ah$b r0 = r1.cK
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            r2.TU = r4
            com.kwad.components.core.webview.jshandler.ah$a r0 = new com.kwad.components.core.webview.jshandler.ah$a     // Catch: org.json.JSONException -> L1a
            r0.<init>()     // Catch: org.json.JSONException -> L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r1.<init>(r3)     // Catch: org.json.JSONException -> L1a
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L1a
            android.os.Handler r3 = r2.TT     // Catch: org.json.JSONException -> L1a
            com.kwad.components.core.webview.jshandler.ah$1 r1 = new com.kwad.components.core.webview.jshandler.ah$1     // Catch: org.json.JSONException -> L1a
            r1.<init>(r2, r0)     // Catch: org.json.JSONException -> L1a
            r3.post(r1)     // Catch: org.json.JSONException -> L1a
            return
        L1a:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "handleJsCall error: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "WebCardPageStatusHandler"
            com.kwad.sdk.core.e.c.e(r1, r0)
            java.lang.String r0 = r2.mUrl
            java.lang.String r1 = r3.getMessage()
            com.kwad.sdk.core.webview.b.c.b.ad(r0, r1)
            r0 = -1
            java.lang.String r3 = r3.getMessage()
            r4.onError(r0, r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "pageStatus"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            r0 = 0
            r2.cK = r0
            r2.TU = r0
            android.os.Handler r1 = r2.TT
            r1.removeCallbacksAndMessages(r0)
            return
    }
}
