package com.kwad.components.core.page;

public class a extends com.kwad.components.core.n.f implements com.kwad.components.core.b.a.a, com.kwad.components.core.webview.jshandler.ah.b {
    private boolean Mr;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    private com.kwad.components.core.b.a mTitleBarHelper;
    private com.kwad.components.core.playable.a oX;

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.Mr = r0
            return
    }

    private void b(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "key_template_json"
            java.lang.String r2 = r2.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L2b
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Exception -> L27
            r0.<init>()     // Catch: java.lang.Exception -> L27
            r1.mAdTemplate = r0     // Catch: java.lang.Exception -> L27
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L27
            r0.<init>(r2)     // Catch: java.lang.Exception -> L27
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate     // Catch: java.lang.Exception -> L27
            r2.parseJson(r0)     // Catch: java.lang.Exception -> L27
            com.kwad.components.core.e.d.c r2 = new com.kwad.components.core.e.d.c     // Catch: java.lang.Exception -> L27
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate     // Catch: java.lang.Exception -> L27
            r2.<init>(r0)     // Catch: java.lang.Exception -> L27
            r1.mApkDownloadHelper = r2     // Catch: java.lang.Exception -> L27
            return
        L27:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L2b:
            return
    }

    public static void launch(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            java.lang.Class<com.kwad.sdk.api.proxy.app.BaseFragmentActivity$FragmentActivity8> r0 = com.kwad.sdk.api.proxy.app.BaseFragmentActivity.FragmentActivity8.class
            java.lang.Class<com.kwad.components.core.page.a> r1 = com.kwad.components.core.page.a.class
            com.kwad.sdk.service.b.a(r0, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r2, r0)
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "key_template_json"
            r1.putExtra(r0, r3)
            r2.startActivity(r1)
            return
    }

    private void ou() {
            r3 = this;
            com.kwad.components.core.b.a r0 = new com.kwad.components.core.b.a
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r3.mRootContainer
            r0.<init>(r1)
            r3.mTitleBarHelper = r0
            r0.a(r3)
            com.kwad.components.core.b.a r0 = r3.mTitleBarHelper
            com.kwad.components.core.b.b r1 = new com.kwad.components.core.b.b
            java.lang.String r2 = ""
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.BaseFragmentActivity$FragmentActivity8> r0 = com.kwad.sdk.api.proxy.app.BaseFragmentActivity.FragmentActivity8.class
            java.lang.Class<com.kwad.components.core.page.a> r1 = com.kwad.components.core.page.a.class
            com.kwad.sdk.service.b.a(r0, r1)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.ah.a r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "updatePageStatus status: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AdPlayableActivityProxy"
            com.kwad.sdk.core.e.c.d(r1, r0)
            int r3 = r3.status
            r0 = 1
            if (r3 != r0) goto L21
            com.kwad.components.core.playable.a r3 = r2.oX
            if (r3 == 0) goto L21
            com.kwad.components.core.playable.PlayableSource r0 = com.kwad.components.core.playable.PlayableSource.UNKNOWN_TRYPLAY_ENTRY_SOURCE
            r3.e(r0)
        L21:
            return
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "AdPlayableActivityProxy"
            return r0
    }

    @Override
    public void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.app.Activity r4 = r3.getActivity()
            int r0 = com.kwad.sdk.R.style.Theme_AppCompat_Light_NoActionBar
            r4.setTheme(r0)
            int r4 = com.kwad.sdk.R.layout.ksad_activity_playable
            r3.setContentView(r4)
            android.content.Intent r4 = r3.getIntent()
            r3.b(r4)
            int r4 = com.kwad.sdk.R.id.ksad_playable_activity_root
            android.view.View r4 = r3.findViewById(r4)
            com.kwad.sdk.core.view.AdBaseFrameLayout r4 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r4
            r3.mRootContainer = r4
            int r4 = com.kwad.sdk.R.id.ksad_playable_webview
            android.view.View r4 = r3.findViewById(r4)
            com.kwad.sdk.core.webview.KsAdWebView r4 = (com.kwad.sdk.core.webview.KsAdWebView) r4
            r3.ou()
            com.kwad.components.core.playable.a r0 = new com.kwad.components.core.playable.a
            r0.<init>(r4)
            r3.oX = r0
            com.kwad.sdk.core.response.model.AdTemplate r4 = r3.mAdTemplate
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r3.mRootContainer
            com.kwad.components.core.e.d.c r2 = r3.mApkDownloadHelper
            r0.a(r4, r1, r2)
            com.kwad.components.core.playable.a r4 = r3.oX
            r4.a(r3)
            com.kwad.components.core.playable.a r4 = r3.oX
            r4.pw()
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.kwad.components.core.playable.a r0 = r1.oX
            r0.b(r1)
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            super.onPause()
            return
    }

    @Override
    public void onRestart() {
            r0 = this;
            super.onRestart()
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            super.onResume()
            return
    }

    @Override
    public final void t(android.view.View r1) {
            r0 = this;
            r0.onBackPressed()
            return
    }

    @Override
    public final void u(android.view.View r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r1 = 6
            com.kwad.sdk.core.report.j r0 = r0.ch(r1)
            r1 = 0
            com.kwad.sdk.core.report.a.b(r3, r0, r1)
            r2.finish()
            return
    }
}
