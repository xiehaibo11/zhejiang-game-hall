package com.kwad.components.core.webview.jshandler;

public final class ae implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b cE;


    public static final class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String UY;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static final class b extends com.kwad.sdk.core.response.a.a {
        public double Vf;
        public int status;
        public long totalBytes;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static com.kwad.sdk.core.webview.b a(com.kwad.components.core.webview.jshandler.ae r0) {
            com.kwad.sdk.core.webview.b r0 = r0.cE
            return r0
    }

    private void a(int r4, float r5, com.kwad.sdk.core.webview.c.c r6) {
            r3 = this;
            if (r6 == 0) goto L1d
            com.kwad.components.core.webview.jshandler.ae$b r0 = new com.kwad.components.core.webview.jshandler.ae$b
            r0.<init>()
            double r1 = (double) r5
            r0.Vf = r1
            r0.status = r4
            com.kwad.sdk.core.webview.b r4 = r3.cE
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            long r4 = r4.totalBytes
            r0.totalBytes = r4
            r6.a(r0)
        L1d:
            return
    }

    static void a(com.kwad.components.core.webview.jshandler.ae r0, int r1, float r2, com.kwad.sdk.core.webview.c.c r3) {
            r0.a(r1, r2, r3)
            return
    }

    private com.kwad.sdk.api.KsAppDownloadListener aJ(java.lang.String r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.ae$1 r0 = new com.kwad.components.core.webview.jshandler.ae$1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public final void a(java.lang.String r4, com.kwad.sdk.core.webview.c.c r5) {
            r3 = this;
            com.kwad.components.core.webview.jshandler.ae$a r0 = new com.kwad.components.core.webview.jshandler.ae$a
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = new com.kwad.sdk.core.response.model.AdTemplate
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1d
            r2.<init>(r4)     // Catch: java.lang.Exception -> L1d
            r0.parseJson(r2)     // Catch: java.lang.Exception -> L1d
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1d
            java.lang.String r0 = r0.UY     // Catch: java.lang.Exception -> L1d
            r4.<init>(r0)     // Catch: java.lang.Exception -> L1d
            r1.parseJson(r4)     // Catch: java.lang.Exception -> L1d
            goto L22
        L1d:
            r4 = move-exception
            r1 = 0
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
        L22:
            if (r1 == 0) goto L4e
            boolean r4 = com.kwad.sdk.core.response.b.d.bY(r1)
            if (r4 == 0) goto L4e
            com.kwad.sdk.core.webview.b r4 = r3.cE
            com.kwad.sdk.utils.af r4 = r4.ayf
            if (r4 == 0) goto L4e
            com.kwad.components.core.e.d.c r4 = new com.kwad.components.core.e.d.c
            r4.<init>(r1)
            java.lang.String r0 = r4.nx()
            com.kwad.sdk.api.KsAppDownloadListener r1 = r3.aJ(r0)
            r4.b(r1)
            com.kwad.sdk.core.webview.b r1 = r3.cE
            com.kwad.sdk.utils.af r1 = r1.ayf
            r1.a(r0, r4)
            com.kwad.sdk.core.webview.b r4 = r3.cE
            com.kwad.sdk.utils.af r4 = r4.ayf
            r4.b(r0, r5)
        L4e:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerProgressListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            com.kwad.sdk.core.webview.b r0 = r1.cE
            com.kwad.sdk.utils.af r0 = r0.ayf
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.webview.b r0 = r1.cE
            com.kwad.sdk.utils.af r0 = r0.ayf
            r0.release()
        Ld:
            return
    }
}
