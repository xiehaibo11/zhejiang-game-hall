package com.kwad.components.core.webview.jshandler;

public final class e implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private com.kwad.components.core.webview.jshandler.i Tw;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String Tx;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.String getTarget() {
                r1 = this;
                java.lang.String r0 = r1.Tx
                return r0
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int KR;
        public int Ty;
        public int Tz;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public e(com.kwad.components.core.webview.jshandler.i r1) {
            r0 = this;
            r0.<init>()
            r0.Tw = r1
            return
    }

    public final void a(com.kwad.sdk.core.response.a.a r2) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.Tv
            if (r0 == 0) goto La
            if (r2 != 0) goto L7
            goto La
        L7:
            r0.a(r2)
        La:
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            r1.Tv = r3
            com.kwad.components.core.webview.jshandler.e$a r3 = new com.kwad.components.core.webview.jshandler.e$a     // Catch: java.lang.Exception -> L1c
            r3.<init>()     // Catch: java.lang.Exception -> L1c
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1c
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1c
            r3.parseJson(r0)     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = r3.getTarget()     // Catch: java.lang.Exception -> L1c
            com.kwad.components.core.webview.jshandler.i r3 = r1.Tw     // Catch: java.lang.Exception -> L1c
            if (r3 == 0) goto L1c
            com.kwad.components.core.webview.jshandler.i r3 = r1.Tw     // Catch: java.lang.Exception -> L1c
            r3.a(r1, r2)     // Catch: java.lang.Exception -> L1c
        L1c:
            return
    }

    public final void aM(int r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.e$b r0 = new com.kwad.components.core.webview.jshandler.e$b
            r0.<init>()
            r0.KR = r2
            r1.a(r0)
            return
    }

    public final void aM(boolean r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.e$b r0 = new com.kwad.components.core.webview.jshandler.e$b
            r0.<init>()
            r0.Tz = r2
            r1.a(r0)
            return
    }

    public final void f(com.kwad.components.core.playable.PlayableSource r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.components.core.webview.jshandler.e$b r0 = new com.kwad.components.core.webview.jshandler.e$b
            r0.<init>()
            int r2 = r2.getCode()
            r0.Ty = r2
            r1.a(r0)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getNativeData"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }
}
