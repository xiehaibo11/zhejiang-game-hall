package com.kwad.components.core.page.b.a;

public final class f extends com.kwad.components.core.page.b.a.a {
    private boolean Nt;
    private com.kwad.components.core.b.a mTitleBarHelper;



    public interface a {
        void ay(int r1);
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.components.core.b.a a(com.kwad.components.core.page.b.a.f r0) {
            com.kwad.components.core.b.a r0 = r0.mTitleBarHelper
            return r0
    }

    static void a(com.kwad.components.core.page.b.a.f r0, android.view.View r1) {
            r0.w(r1)
            return
    }

    static void b(com.kwad.components.core.page.b.a.f r0, android.view.View r1) {
            r0.x(r1)
            return
    }

    private java.lang.String getTitle() {
            r2 = this;
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            java.lang.String r0 = r0.mPageTitle
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            java.lang.String r0 = r0.mPageTitle
            goto L3f
        Lf:
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            if (r0 == 0) goto L3d
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            int r0 = r0.size()
            if (r0 <= 0) goto L3d
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L3d
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bO(r0)
            goto L3f
        L3d:
            java.lang.String r0 = "详情页面"
        L3f:
            return r0
    }

    private boolean oT() {
            r1 = this;
            com.kwad.components.core.page.b.a.b r0 = r1.MW
            java.lang.String r0 = r0.mPageTitle
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc
            r0 = 0
            return r0
        Lc:
            r0 = 1
            return r0
    }

    private void oU() {
            r3 = this;
            com.kwad.components.core.b.a r0 = new com.kwad.components.core.b.a
            com.kwad.components.core.page.b.a.b r1 = r3.MW
            android.view.ViewGroup r1 = r1.gg
            r0.<init>(r1)
            r3.mTitleBarHelper = r0
            com.kwad.components.core.b.b r1 = new com.kwad.components.core.b.b
            java.lang.String r2 = r3.getTitle()
            r1.<init>(r2)
            r0.a(r1)
            com.kwad.components.core.b.a r0 = r3.mTitleBarHelper
            boolean r1 = r3.oT()
            r0.aj(r1)
            com.kwad.components.core.b.a r0 = r3.mTitleBarHelper
            com.kwad.components.core.page.b.a.f$1 r1 = new com.kwad.components.core.page.b.a.f$1
            r1.<init>(r3)
            r0.a(r1)
            com.kwad.components.core.b.a r0 = r3.mTitleBarHelper
            android.view.ViewGroup r0 = r0.gQ()
            com.kwad.components.core.page.b.a.b r1 = r3.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            boolean r1 = r1.mIsForceJumpLandingPage
            r2 = 0
            if (r1 == 0) goto L3a
            goto L4b
        L3a:
            com.kwad.components.core.page.b.a.b r1 = r3.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.b.cO(r1)
            if (r1 == 0) goto L49
            goto L4b
        L49:
            r2 = 8
        L4b:
            r0.setVisibility(r2)
            com.kwad.components.core.page.b.a.b r0 = r3.MW
            com.kwad.components.core.page.b.a.f$2 r1 = new com.kwad.components.core.page.b.a.f$2
            r1.<init>(r3)
            r0.a(r1)
            return
    }

    private void w(android.view.View r1) {
            r0 = this;
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.webview.KsAdWebView r1 = r1.mAdWebView
            if (r1 == 0) goto L23
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.webview.KsAdWebView r1 = r1.mAdWebView
            boolean r1 = r1.canGoBack()
            if (r1 == 0) goto L23
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.webview.KsAdWebView r1 = r1.mAdWebView
            r1.goBack()
            boolean r1 = r0.Nt
            if (r1 == 0) goto L30
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.aB(r1)
            return
        L23:
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.components.core.page.a.a r1 = r1.MX
            if (r1 == 0) goto L30
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.components.core.page.a.a r1 = r1.MX
            r1.dE()
        L30:
            return
    }

    private void x(android.view.View r1) {
            r0 = this;
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.webview.KsAdWebView r1 = r1.mAdWebView
            if (r1 == 0) goto L23
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.webview.KsAdWebView r1 = r1.mAdWebView
            boolean r1 = r1.canGoBack()
            if (r1 == 0) goto L23
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.webview.KsAdWebView r1 = r1.mAdWebView
            r1.goBack()
            boolean r1 = r0.Nt
            if (r1 == 0) goto L30
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.aB(r1)
            return
        L23:
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.components.core.page.a.a r1 = r1.MX
            if (r1 == 0) goto L30
            com.kwad.components.core.page.b.a.b r1 = r0.MW
            com.kwad.components.core.page.a.a r1 = r1.MX
            r1.dF()
        L30:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.core.page.b.a.b r0 = r2.MW
            java.lang.String r0 = r0.mPageUrl
            com.kwad.components.core.page.b.a.b r1 = r2.MW
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aK(r1)
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            r2.Nt = r0
            r2.oU()
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }
}
