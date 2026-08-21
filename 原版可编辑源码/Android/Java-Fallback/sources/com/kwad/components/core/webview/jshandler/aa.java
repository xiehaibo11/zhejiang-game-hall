package com.kwad.components.core.webview.jshandler;

public final class aa implements com.kwad.sdk.core.webview.c.a {
    private final android.webkit.WebView Ms;
    private android.os.Handler TT;
    private com.kwad.sdk.core.webview.c.c TU;
    private boolean UK;
    private com.kwad.components.core.webview.jshandler.aa.b cI;



    public static final class a implements com.kwad.sdk.core.b {
        public int bottomMargin;
        public int height;
        public int leftMargin;
        public int rightMargin;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void parseJson(org.json.JSONObject r2) {
                r1 = this;
                if (r2 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "height"
                int r0 = r2.optInt(r0)
                r1.height = r0
                java.lang.String r0 = "leftMargin"
                int r0 = r2.optInt(r0)
                r1.leftMargin = r0
                java.lang.String r0 = "rightMargin"
                int r0 = r2.optInt(r0)
                r1.rightMargin = r0
                java.lang.String r0 = "bottomMargin"
                int r2 = r2.optInt(r0)
                r1.bottomMargin = r2
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                int r1 = r3.height
                java.lang.String r2 = "height"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                int r1 = r3.leftMargin
                java.lang.String r2 = "leftMargin"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                int r1 = r3.rightMargin
                java.lang.String r2 = "rightMargin"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                int r1 = r3.bottomMargin
                java.lang.String r2 = "bottomMargin"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public interface b {
        void a(com.kwad.components.core.webview.jshandler.aa.a r1);
    }

    public aa(com.kwad.sdk.core.webview.b r2, com.kwad.components.core.webview.jshandler.aa.b r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r3, r0)
            return
    }

    private aa(com.kwad.sdk.core.webview.b r3, com.kwad.components.core.webview.jshandler.aa.b r4, boolean r5) {
            r2 = this;
            r2.<init>()
            r5 = 1
            r2.UK = r5
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.TT = r0
            android.webkit.WebView r3 = r3.Ms
            r2.Ms = r3
            r2.cI = r4
            r2.UK = r5
            return
    }

    static android.webkit.WebView a(com.kwad.components.core.webview.jshandler.aa r0) {
            android.webkit.WebView r0 = r0.Ms
            return r0
    }

    static boolean b(com.kwad.components.core.webview.jshandler.aa r0) {
            boolean r0 = r0.UK
            return r0
    }

    static com.kwad.components.core.webview.jshandler.aa.b c(com.kwad.components.core.webview.jshandler.aa r0) {
            com.kwad.components.core.webview.jshandler.aa$b r0 = r0.cI
            return r0
    }

    static com.kwad.sdk.core.webview.c.c d(com.kwad.components.core.webview.jshandler.aa r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.TU
            return r0
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            r2.TU = r4
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L24
            r0.<init>(r3)     // Catch: org.json.JSONException -> L24
            com.kwad.components.core.webview.jshandler.aa$a r3 = new com.kwad.components.core.webview.jshandler.aa$a     // Catch: org.json.JSONException -> L24
            r3.<init>()     // Catch: org.json.JSONException -> L24
            r3.parseJson(r0)     // Catch: org.json.JSONException -> L24
            android.os.Handler r0 = r2.TT     // Catch: org.json.JSONException -> L24
            com.kwad.components.core.webview.jshandler.aa$1 r1 = new com.kwad.components.core.webview.jshandler.aa$1     // Catch: org.json.JSONException -> L24
            r1.<init>(r2, r3)     // Catch: org.json.JSONException -> L24
            r0.post(r1)     // Catch: org.json.JSONException -> L24
            android.os.Handler r3 = r2.TT     // Catch: org.json.JSONException -> L24
            com.kwad.components.core.webview.jshandler.aa$2 r0 = new com.kwad.components.core.webview.jshandler.aa$2     // Catch: org.json.JSONException -> L24
            r0.<init>(r2)     // Catch: org.json.JSONException -> L24
            r3.post(r0)     // Catch: org.json.JSONException -> L24
            return
        L24:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            r0 = -1
            java.lang.String r3 = r3.getMessage()
            r4.onError(r0, r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "initKsAdFrame"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            r0 = 0
            r2.TU = r0
            r2.cI = r0
            android.os.Handler r1 = r2.TT
            r1.removeCallbacksAndMessages(r0)
            return
    }
}
