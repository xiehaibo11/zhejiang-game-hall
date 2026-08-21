package com.kwad.components.core.page.b.a;

public final class g extends com.kwad.components.core.page.b.a.a {
    private com.kwad.components.core.webview.jshandler.ak.b Na;
    private com.kwad.components.core.webview.b Nv;
    private boolean Nw;
    private com.kwad.components.core.webview.jshandler.am Nx;
    private com.kwad.components.core.webview.jshandler.ak Ny;
    private com.kwad.components.core.webview.c Nz;
    private com.kwad.sdk.core.webview.KsAdWebView mAdWebView;
    private final com.kwad.sdk.core.c.c xj;






    public g() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.Nw = r0
            com.kwad.components.core.page.b.a.g$1 r0 = new com.kwad.components.core.page.b.a.g$1
            r0.<init>(r1)
            r1.xj = r0
            com.kwad.components.core.page.b.a.g$2 r0 = new com.kwad.components.core.page.b.a.g$2
            r0.<init>(r1)
            r1.Na = r0
            com.kwad.components.core.page.b.a.g$3 r0 = new com.kwad.components.core.page.b.a.g$3
            r0.<init>(r1)
            r1.Nz = r0
            return
    }

    static com.kwad.components.core.webview.jshandler.ak a(com.kwad.components.core.page.b.a.g r0, com.kwad.components.core.webview.jshandler.ak r1) {
            r0.Ny = r1
            return r1
    }

    static com.kwad.components.core.webview.jshandler.am a(com.kwad.components.core.page.b.a.g r0, com.kwad.components.core.webview.jshandler.am r1) {
            r0.Nx = r1
            return r1
    }

    static com.kwad.sdk.core.webview.KsAdWebView a(com.kwad.components.core.page.b.a.g r0) {
            com.kwad.sdk.core.webview.KsAdWebView r0 = r0.mAdWebView
            return r0
    }

    static com.kwad.sdk.core.webview.KsAdWebView a(com.kwad.components.core.page.b.a.g r0, com.kwad.sdk.core.webview.KsAdWebView r1) {
            r1 = 0
            r0.mAdWebView = r1
            return r1
    }

    static boolean a(com.kwad.components.core.page.b.a.g r0, boolean r1) {
            r0.Nw = r1
            return r1
    }

    static com.kwad.components.core.webview.jshandler.ak b(com.kwad.components.core.page.b.a.g r0) {
            com.kwad.components.core.webview.jshandler.ak r0 = r0.Ny
            return r0
    }

    static com.kwad.components.core.webview.jshandler.ak.b c(com.kwad.components.core.page.b.a.g r0) {
            com.kwad.components.core.webview.jshandler.ak$b r0 = r0.Na
            return r0
    }

    private void eK() {
            r2 = this;
            com.kwad.components.core.webview.b r0 = new com.kwad.components.core.webview.b
            r0.<init>()
            r2.Nv = r0
            com.kwad.components.core.webview.b$a r0 = new com.kwad.components.core.webview.b$a
            r0.<init>()
            com.kwad.components.core.page.b.a.b r1 = r2.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.core.webview.b$a r0 = r0.X(r1)
            com.kwad.components.core.page.b.a.b r1 = r2.MW
            java.lang.String r1 = r1.mPageUrl
            com.kwad.components.core.webview.b$a r0 = r0.aD(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.mAdWebView
            com.kwad.components.core.webview.b$a r0 = r0.d(r1)
            com.kwad.components.core.page.b.a.b r1 = r2.MW
            android.view.ViewGroup r1 = r1.gg
            com.kwad.components.core.webview.b$a r0 = r0.k(r1)
            com.kwad.components.core.webview.c r1 = r2.Nz
            com.kwad.components.core.webview.b$a r0 = r0.a(r1)
            com.kwad.components.core.page.b.a.b r1 = r2.MW
            com.kwad.sdk.core.webview.KsAdWebView$c r1 = r1.MY
            com.kwad.components.core.webview.b$a r0 = r0.b(r1)
            com.kwad.components.core.webview.b r1 = r2.Nv
            r1.a(r0)
            r2.oV()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            com.kwad.components.core.page.b.a.b r1 = r2.MW
            java.lang.String r1 = r1.mPageUrl
            r0.loadUrl(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            r0.onActivityCreate()
            return
    }

    private void oV() {
            r6 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r6.mAdWebView
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r1 = 1
            com.kwad.sdk.core.webview.a.c$a r0 = r0.bm(r1)
            com.kwad.components.core.page.b.a.b r2 = r6.MW
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r2)
            r2 = 0
            com.kwad.sdk.core.webview.a.c$a r0 = r0.bk(r2)
            com.kwad.sdk.core.webview.KsAdWebView r2 = r6.mAdWebView
            r2.setClientConfig(r0)
            com.kwad.components.core.page.b.a.b r0 = r6.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            long r2 = com.kwad.sdk.core.response.b.a.bw(r0)
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L44
            com.kwad.components.core.page.b.a.g$4 r0 = new com.kwad.components.core.page.b.a.g$4
            r0.<init>(r6)
            com.kwad.components.core.page.b.a.b r1 = r6.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            long r1 = com.kwad.sdk.core.response.b.a.bw(r1)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            goto L5f
        L44:
            com.kwad.components.core.page.b.a.b r0 = r6.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            long r2 = com.kwad.sdk.core.response.b.a.bw(r0)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L5f
            com.kwad.sdk.core.webview.KsAdWebView r0 = r6.mAdWebView
            if (r0 == 0) goto L5f
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r0.bk(r1)
        L5f:
            com.kwad.components.core.page.b.a.b r0 = r6.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.bZ(r0)
            if (r0 <= 0) goto L7c
            com.kwad.sdk.core.webview.KsAdWebView r0 = r6.mAdWebView
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.components.core.page.b.a.b r1 = r6.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            boolean r1 = r1.converted
            r0.bk(r1)
        L7c:
            com.kwad.sdk.core.webview.KsAdWebView r0 = r6.mAdWebView
            com.kwad.components.core.page.b.a.g$5 r1 = new com.kwad.components.core.page.b.a.g$5
            r1.<init>(r6)
            r0.setOnTouchListener(r1)
            return
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            r1.eK()
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.core.c.c r0 = r1.xj
            com.kwad.sdk.core.c.b.a(r0)
            return
    }

    public final void hide() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.Nx
            if (r0 == 0) goto L7
            r0.rB()
        L7:
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            android.view.ViewGroup r0 = r0.gg
            if (r0 == 0) goto L16
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            android.view.ViewGroup r0 = r0.gg
            r1 = 8
            r0.setVisibility(r1)
        L16:
            com.kwad.components.core.webview.jshandler.am r0 = r2.Nx
            if (r0 == 0) goto L1d
            r0.rC()
        L1d:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_webview
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r1.mAdWebView = r0
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b r0 = r1.Nv
            r0.jv()
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.core.c.c r0 = r1.xj
            com.kwad.sdk.core.c.b.b(r0)
            return
    }

    public final void show() {
            r2 = this;
            boolean r0 = r2.Nw
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.components.core.webview.jshandler.am r0 = r2.Nx
            if (r0 == 0) goto Lc
            r0.rz()
        Lc:
            com.kwad.components.core.page.b.a.b r0 = r2.MW     // Catch: java.lang.Exception -> L1b
            android.view.ViewGroup r0 = r0.gg     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L1f
            com.kwad.components.core.page.b.a.b r0 = r2.MW     // Catch: java.lang.Exception -> L1b
            android.view.ViewGroup r0 = r0.gg     // Catch: java.lang.Exception -> L1b
            r1 = 0
            r0.setVisibility(r1)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r0 = move-exception
            com.kwad.components.core.d.a.b(r0)
        L1f:
            com.kwad.components.core.webview.jshandler.am r0 = r2.Nx
            if (r0 == 0) goto L26
            r0.rA()
        L26:
            return
    }
}
