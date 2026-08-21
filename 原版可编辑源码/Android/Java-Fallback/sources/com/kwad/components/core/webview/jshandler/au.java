package com.kwad.components.core.webview.jshandler;

public final class au implements com.kwad.sdk.core.webview.c.a {
    private static android.os.Handler VH;
    private com.kwad.components.core.e.d.c JG;
    private com.kwad.sdk.core.webview.b VG;
    private com.kwad.components.core.webview.jshandler.au.b VI;


    public static class a extends com.kwad.sdk.core.response.a.a {
        public int jG;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public interface b {
        void P(int r1);
    }

    public au(com.kwad.sdk.core.webview.b r1, com.kwad.components.core.e.d.c r2, com.kwad.components.core.webview.jshandler.au.b r3) {
            r0 = this;
            r0.<init>()
            r0.VG = r1
            r0.JG = r2
            r0.VI = r3
            android.os.Handler r1 = com.kwad.components.core.webview.jshandler.au.VH
            if (r1 != 0) goto L18
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            com.kwad.components.core.webview.jshandler.au.VH = r1
        L18:
            return
    }

    static com.kwad.components.core.webview.jshandler.au.b a(com.kwad.components.core.webview.jshandler.au r0) {
            com.kwad.components.core.webview.jshandler.au$b r0 = r0.VI
            return r0
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L21
            if (r3 == 0) goto L7
            return
        L7:
            com.kwad.components.core.webview.jshandler.au$a r3 = new com.kwad.components.core.webview.jshandler.au$a     // Catch: java.lang.Exception -> L21
            r3.<init>()     // Catch: java.lang.Exception -> L21
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L21
            r0.<init>(r2)     // Catch: java.lang.Exception -> L21
            r3.parseJson(r0)     // Catch: java.lang.Exception -> L21
            int r2 = r3.jG     // Catch: java.lang.Exception -> L21
            android.os.Handler r3 = com.kwad.components.core.webview.jshandler.au.VH     // Catch: java.lang.Exception -> L21
            com.kwad.components.core.webview.jshandler.au$1 r0 = new com.kwad.components.core.webview.jshandler.au$1     // Catch: java.lang.Exception -> L21
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L21
            r3.post(r0)     // Catch: java.lang.Exception -> L21
            return
        L21:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "playableConvert"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
