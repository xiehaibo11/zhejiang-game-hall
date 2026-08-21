package com.kwad.components.core.webview;

public final class b {
    private com.kwad.sdk.core.webview.KsAdWebView GQ;
    private com.kwad.sdk.core.webview.KsAdWebView.c MY;
    private com.kwad.components.core.webview.c Nz;
    private android.view.ViewGroup Tg;
    private com.kwad.components.core.webview.a.a Th;
    private com.kwad.components.core.webview.jshandler.al Ti;
    private com.kwad.sdk.core.download.e Tj;
    private com.kwad.components.core.webview.jshandler.ah.b Tk;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private java.lang.String mPageUrl;












    public static class a {
        private com.kwad.sdk.core.webview.KsAdWebView GQ;
        private com.kwad.sdk.core.webview.KsAdWebView.c MY;
        private com.kwad.components.core.webview.c Nz;
        private android.view.ViewGroup Tg;
        private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
        private java.lang.String mPageUrl;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.kwad.components.core.webview.b.a X(com.kwad.sdk.core.response.model.AdTemplate r1) {
                r0 = this;
                r0.mAdTemplate = r1
                return r0
        }

        public final com.kwad.components.core.webview.b.a a(com.kwad.components.core.webview.c r1) {
                r0 = this;
                r0.Nz = r1
                return r0
        }

        public final com.kwad.components.core.webview.b.a aD(java.lang.String r1) {
                r0 = this;
                r0.mPageUrl = r1
                return r0
        }

        public final com.kwad.components.core.webview.b.a b(com.kwad.sdk.core.webview.KsAdWebView.c r1) {
                r0 = this;
                r0.MY = r1
                return r0
        }

        public final com.kwad.components.core.webview.b.a d(com.kwad.sdk.core.webview.KsAdWebView r1) {
                r0 = this;
                r0.GQ = r1
                return r0
        }

        public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
                r1 = this;
                com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
                return r0
        }

        public final com.kwad.components.core.webview.b.a k(android.view.ViewGroup r1) {
                r0 = this;
                r0.Tg = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.KsAdWebView.c oR() {
                r1 = this;
                com.kwad.sdk.core.webview.KsAdWebView$c r0 = r1.MY
                return r0
        }

        public final java.lang.String ox() {
                r1 = this;
                java.lang.String r0 = r1.mPageUrl
                return r0
        }

        public final android.view.ViewGroup rq() {
                r1 = this;
                android.view.ViewGroup r0 = r1.Tg
                return r0
        }

        public final com.kwad.sdk.core.webview.KsAdWebView rr() {
                r1 = this;
                com.kwad.sdk.core.webview.KsAdWebView r0 = r1.GQ
                return r0
        }

        public final com.kwad.components.core.webview.c rs() {
                r1 = this;
                com.kwad.components.core.webview.c r0 = r1.Nz
                return r0
        }
    }

    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.webview.b$10 r0 = new com.kwad.components.core.webview.b$10
            r0.<init>(r1)
            r1.Tk = r0
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.core.webview.b r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private static void a(com.kwad.components.core.webview.c r0, android.webkit.WebView r1) {
            if (r0 == 0) goto L11
            boolean r0 = r0.oX()
            if (r0 != 0) goto L9
            goto L11
        L9:
            android.webkit.WebSettings r0 = r1.getSettings()
            r1 = 1
            r0.setAllowFileAccess(r1)
        L11:
            return
    }

    private void av() {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r2.cE = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r2.cE
            r1 = 0
            r0.mScreenOrientation = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.GQ
            r0.Ms = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            android.view.ViewGroup r1 = r2.Tg
            r0.MT = r1
            return
    }

    private void ay() {
            r2 = this;
            com.kwad.components.core.webview.a r0 = r2.cD
            r1 = 0
            if (r0 == 0) goto La
            r0.destroy()
            r2.cD = r1
        La:
            com.kwad.components.core.webview.a.a r0 = r2.Th
            if (r0 == 0) goto L13
            r0.destroy()
            r2.Th = r1
        L13:
            return
    }

    static com.kwad.sdk.core.webview.b b(com.kwad.components.core.webview.b r0) {
            com.kwad.sdk.core.webview.b r0 = r0.cE
            return r0
    }

    private void b(com.kwad.components.core.webview.a r10, com.kwad.sdk.core.webview.b r11) {
            r9 = this;
            com.kwad.components.core.webview.jshandler.am r0 = new com.kwad.components.core.webview.jshandler.am
            r0.<init>()
            r10.a(r0)
            r9.c(r0)
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            r0.<init>(r11)
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            r0.<init>(r11)
            r10.a(r0)
            com.kwad.components.core.webview.b.a.f r0 = new com.kwad.components.core.webview.b.a.f
            r0.<init>()
            r10.a(r0)
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            r0.<init>(r1)
            com.kwad.components.core.webview.jshandler.r r7 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r2 = r9.cE
            com.kwad.sdk.core.webview.d.a.a r4 = r9.getClickListener()
            boolean r5 = r9.rj()
            r6 = 0
            r1 = r7
            r3 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r10.a(r7)
            com.kwad.components.core.webview.jshandler.o r8 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r2 = r9.cE
            com.kwad.sdk.core.webview.d.a.a r4 = r9.getClickListener()
            boolean r5 = r9.rj()
            boolean r7 = r9.rk()
            r1 = r8
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r10.a(r8)
            com.kwad.components.core.webview.jshandler.ap r1 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r2 = r9.cE
            r1.<init>(r2, r0)
            r10.a(r1)
            com.kwad.components.core.webview.jshandler.aj r0 = new com.kwad.components.core.webview.jshandler.aj
            com.kwad.sdk.core.webview.b r1 = r9.cE
            r0.<init>(r1)
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.ag r0 = new com.kwad.components.core.webview.jshandler.ag
            com.kwad.sdk.core.webview.b r1 = r9.cE
            android.webkit.WebView r1 = r1.Ms
            android.content.Context r1 = r1.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r9.mAdTemplate
            r0.<init>(r1, r2)
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.at r0 = new com.kwad.components.core.webview.jshandler.at
            com.kwad.components.core.webview.b$1 r1 = new com.kwad.components.core.webview.b$1
            r1.<init>(r9)
            r0.<init>(r1)
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.y r0 = new com.kwad.components.core.webview.jshandler.y
            com.kwad.sdk.core.webview.b r1 = r9.cE
            r0.<init>(r1)
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r9.Tk
            java.lang.String r2 = r9.mPageUrl
            r0.<init>(r1, r2)
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.al r0 = new com.kwad.components.core.webview.jshandler.al
            r0.<init>()
            r9.Ti = r0
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.p r0 = new com.kwad.components.core.webview.jshandler.p
            com.kwad.components.core.webview.b$4 r1 = new com.kwad.components.core.webview.b$4
            r1.<init>(r9)
            r0.<init>(r1)
            r10.a(r0)
            com.kwad.components.core.webview.b.a.s r0 = new com.kwad.components.core.webview.b.a.s
            r0.<init>()
            com.kwad.components.core.webview.b$5 r1 = new com.kwad.components.core.webview.b$5
            r1.<init>(r9)
            r0.a(r1)
            r10.a(r0)
            com.kwad.components.core.webview.b.a.k r0 = new com.kwad.components.core.webview.b.a.k
            r0.<init>()
            r10.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            r0.<init>(r11)
            r10.a(r0)
            com.kwad.sdk.core.response.model.AdTemplate r11 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r11 = com.kwad.sdk.core.response.b.d.cg(r11)
            boolean r11 = com.kwad.sdk.core.response.b.a.ax(r11)
            if (r11 == 0) goto Lfe
            com.kwad.components.core.webview.b.a.l r11 = new com.kwad.components.core.webview.b.a.l
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.b$6 r0 = new com.kwad.components.core.webview.b$6
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            r0.<init>(r9, r1, r11)
            r9.Tj = r0
            com.kwad.sdk.core.download.c r11 = com.kwad.sdk.core.download.c.Aw()
            com.kwad.sdk.core.download.e r0 = r9.Tj
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            r11.a(r0, r1)
        Lfe:
            com.kwad.components.core.webview.b$7 r11 = new com.kwad.components.core.webview.b$7
            r11.<init>(r9)
            r10.a(r11)
            com.kwad.components.core.webview.b$8 r11 = new com.kwad.components.core.webview.b$8
            r11.<init>(r9)
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.b r11 = new com.kwad.components.core.webview.jshandler.b
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.d r11 = new com.kwad.components.core.webview.jshandler.d
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.g r11 = new com.kwad.components.core.webview.jshandler.g
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.a r11 = new com.kwad.components.core.webview.jshandler.a
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.t r11 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r0 = r9.cE
            r11.<init>(r0)
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.h r11 = new com.kwad.components.core.webview.jshandler.h
            com.kwad.sdk.core.webview.b r0 = r9.cE
            android.webkit.WebView r0 = r0.Ms
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r9.mAdTemplate
            r11.<init>(r0, r1)
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.aa r11 = new com.kwad.components.core.webview.jshandler.aa
            com.kwad.sdk.core.webview.b r0 = r9.cE
            com.kwad.components.core.webview.b$9 r1 = new com.kwad.components.core.webview.b$9
            r1.<init>(r9)
            r11.<init>(r0, r1)
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.f r11 = new com.kwad.components.core.webview.jshandler.f
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.l r11 = new com.kwad.components.core.webview.jshandler.l
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.k r11 = new com.kwad.components.core.webview.jshandler.k
            r11.<init>()
            r10.a(r11)
            com.kwad.components.core.webview.jshandler.j r11 = new com.kwad.components.core.webview.jshandler.j
            r11.<init>()
            r10.a(r11)
            return
    }

    private void b(com.kwad.sdk.core.webview.KsAdWebView r4) {
            r3 = this;
            r3.ay()
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            r0.<init>(r4)
            r3.cD = r0
            com.kwad.sdk.core.webview.b r1 = r3.cE
            r3.b(r0, r1)
            com.kwad.components.core.webview.c r0 = r3.Nz
            if (r0 == 0) goto L1a
            com.kwad.components.core.webview.a r1 = r3.cD
            com.kwad.sdk.core.webview.b r2 = r3.cE
            r0.a(r1, r2)
        L1a:
            com.kwad.components.core.webview.a r0 = r3.cD
            java.lang.String r1 = "KwaiAd"
            r4.addJavascriptInterface(r0, r1)
            return
    }

    static com.kwad.components.core.webview.c c(com.kwad.components.core.webview.b r0) {
            com.kwad.components.core.webview.c r0 = r0.Nz
            return r0
    }

    private void c(com.kwad.components.core.webview.jshandler.am r2) {
            r1 = this;
            com.kwad.components.core.webview.c r0 = r1.Nz
            if (r0 != 0) goto L5
            return
        L5:
            r0.c(r2)
            return
    }

    private void c(com.kwad.sdk.core.webview.KsAdWebView r3) {
            r2 = this;
            r2.ay()
            com.kwad.components.core.webview.a.a r0 = new com.kwad.components.core.webview.a.a
            com.kwad.sdk.core.webview.b r1 = r2.cE
            r0.<init>(r3, r1)
            r2.Th = r0
            java.lang.String r1 = "KwaiAdForThird"
            r3.addJavascriptInterface(r0, r1)
            return
    }

    static com.kwad.components.core.webview.jshandler.al d(com.kwad.components.core.webview.b r0) {
            com.kwad.components.core.webview.jshandler.al r0 = r0.Ti
            return r0
    }

    private void eK() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.GQ
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.report.z$b r1 = r2.rm()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r2.rn()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            com.kwad.sdk.core.webview.KsAdWebView$b r1 = r2.rl()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.a(r1)
            com.kwad.sdk.core.webview.KsAdWebView$c r1 = r2.MY
            com.kwad.sdk.core.webview.a.c$a r0 = r0.c(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.GQ
            r1.setClientConfig(r0)
            return
    }

    private com.kwad.sdk.core.webview.d.a.a getClickListener() {
            r1 = this;
            com.kwad.components.core.webview.b$11 r0 = new com.kwad.components.core.webview.b$11
            r0.<init>(r1)
            return r0
    }

    private boolean rj() {
            r1 = this;
            com.kwad.components.core.webview.c r0 = r1.Nz
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.oY()
            return r0
    }

    private boolean rk() {
            r2 = this;
            com.kwad.components.core.webview.c r0 = r2.Nz
            r1 = 0
            return r1
    }

    private com.kwad.sdk.core.webview.KsAdWebView.b rl() {
            r1 = this;
            com.kwad.components.core.webview.b$2 r0 = new com.kwad.components.core.webview.b$2
            r0.<init>(r1)
            return r0
    }

    private com.kwad.sdk.core.report.z.b rm() {
            r2 = this;
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r1 = 0
            r0.ati = r1
            int r1 = r2.ro()
            r0.atu = r1
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d rn() {
            r1 = this;
            com.kwad.components.core.webview.b$3 r0 = new com.kwad.components.core.webview.b$3
            r0.<init>(r1)
            return r0
    }

    private int ro() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.N(r0)
            if (r0 == 0) goto Le
            r0 = 5
            return r0
        Le:
            r0 = 1
            return r0
    }

    public final void a(com.kwad.components.core.webview.b.a r2) {
            r1 = this;
            java.lang.String r0 = r2.ox()
            r1.mPageUrl = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.getAdTemplate()
            r1.mAdTemplate = r0
            android.view.ViewGroup r0 = r2.rq()
            r1.Tg = r0
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.rr()
            r1.GQ = r0
            com.kwad.components.core.webview.c r0 = r2.rs()
            r1.Nz = r0
            com.kwad.sdk.core.webview.KsAdWebView$c r2 = r2.oR()
            r1.MY = r2
            r1.eK()
            com.kwad.components.core.webview.c r2 = r1.Nz
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.GQ
            a(r2, r0)
            r1.av()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r2 = com.kwad.sdk.core.response.b.a.J(r2)
            if (r2 == 0) goto L43
            com.kwad.sdk.core.webview.KsAdWebView r2 = r1.GQ
            r1.c(r2)
            return
        L43:
            java.lang.String r2 = r1.mPageUrl
            boolean r2 = com.kwad.sdk.core.response.b.b.dD(r2)
            if (r2 == 0) goto L50
            com.kwad.sdk.core.webview.KsAdWebView r2 = r1.GQ
            r1.b(r2)
        L50:
            return
    }

    public final void jv() {
            r2 = this;
            r2.ay()
            com.kwad.sdk.core.download.e r0 = r2.Tj
            if (r0 == 0) goto L10
            com.kwad.sdk.core.download.c r0 = com.kwad.sdk.core.download.c.Aw()
            com.kwad.sdk.core.download.e r1 = r2.Tj
            r0.a(r1)
        L10:
            return
    }
}
