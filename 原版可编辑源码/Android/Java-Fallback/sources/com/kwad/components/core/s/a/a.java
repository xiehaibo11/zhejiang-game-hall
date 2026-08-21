package com.kwad.components.core.s.a;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class)
public class a extends com.kwad.components.core.l.b<com.kwad.components.core.s.a.b> {
    private static final java.util.concurrent.ConcurrentMap<java.lang.Integer, java.util.Map<java.lang.String, java.lang.Object>> QT = null;
    private static final java.util.concurrent.atomic.AtomicInteger QU = null;
    private com.kwad.components.offline.api.tk.model.StyleTemplate QO;
    private java.lang.String QP;
    private boolean QQ;
    private com.kwad.sdk.components.h QR;
    private int QS;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    private com.kwad.components.core.b.a mTitleBarHelper;


    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.components.core.s.a.a.QT = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            com.kwad.components.core.s.a.a.QU = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(int r2, java.lang.String r3, java.lang.Object r4) {
            java.util.concurrent.ConcurrentMap<java.lang.Integer, java.util.Map<java.lang.String, java.lang.Object>> r0 = com.kwad.components.core.s.a.a.QT
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            java.lang.Object r0 = r0.get(r1)
            java.util.Map r0 = (java.util.Map) r0
            if (r0 != 0) goto L1c
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.concurrent.ConcurrentMap<java.lang.Integer, java.util.Map<java.lang.String, java.lang.Object>> r1 = com.kwad.components.core.s.a.a.QT
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r2, r0)
        L1c:
            r0.put(r3, r4)
            return
    }

    private static void aH(int r1) {
            java.util.concurrent.ConcurrentMap<java.lang.Integer, java.util.Map<java.lang.String, java.lang.Object>> r0 = com.kwad.components.core.s.a.a.QT
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r1 = r0.get(r1)
            java.util.Map r1 = (java.util.Map) r1
            if (r1 == 0) goto L11
            r1.clear()
        L11:
            return
    }

    private java.lang.Object aw(java.lang.String r2) {
            r1 = this;
            int r0 = r1.QS
            java.lang.Object r2 = h(r0, r2)
            return r2
    }

    private static java.lang.Object h(int r1, java.lang.String r2) {
            java.util.concurrent.ConcurrentMap<java.lang.Integer, java.util.Map<java.lang.String, java.lang.Object>> r0 = com.kwad.components.core.s.a.a.QT
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r1 = r0.get(r1)
            java.util.Map r1 = (java.util.Map) r1
            if (r1 == 0) goto L13
            java.lang.Object r1 = r1.get(r2)
            return r1
        L13:
            r1 = 0
            return r1
    }

    private com.kwad.components.core.s.a.b qb() {
            r2 = this;
            com.kwad.components.core.s.a.b r0 = new com.kwad.components.core.s.a.b
            r0.<init>(r2)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = r2.QO
            r0.QO = r1
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r2.mRootContainer
            r0.mRootContainer = r1
            com.kwad.sdk.components.h r1 = r2.QR
            r0.QR = r1
            return r0
    }

    public static int qc() {
            java.util.concurrent.atomic.AtomicInteger r0 = com.kwad.components.core.s.a.a.QU
            int r0 = r0.incrementAndGet()
            return r0
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.FeedDownloadActivity> r0 = com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class
            java.lang.Class<com.kwad.components.core.s.a.a> r1 = com.kwad.components.core.s.a.a.class
            com.kwad.sdk.service.b.a(r0, r1)
            return
    }

    @Override
    public boolean checkIntentData(android.content.Intent r4) {
            r3 = this;
            android.content.Intent r4 = r3.getIntent()
            java.lang.String r0 = "tk_style_template"
            java.lang.String r4 = r4.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L12
            return r1
        L12:
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = new com.kwad.components.offline.api.tk.model.StyleTemplate     // Catch: java.lang.Throwable -> L44
            r0.<init>()     // Catch: java.lang.Throwable -> L44
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L44
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L44
            r0.parseJson(r2)     // Catch: java.lang.Throwable -> L44
            r3.QO = r0     // Catch: java.lang.Throwable -> L44
            android.content.Intent r4 = r3.getIntent()
            java.lang.String r0 = "tk_ad_template"
            java.lang.String r4 = r4.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L42
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L41
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L41
            r0.parseJson(r2)     // Catch: java.lang.Throwable -> L41
            r3.mAdTemplate = r0     // Catch: java.lang.Throwable -> L41
            goto L42
        L41:
            return r1
        L42:
            r4 = 1
            return r4
        L44:
            return r1
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_tk_page
            return r0
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "TKActivityProxy"
            return r0
    }

    @Override
    public void initData() {
            r3 = this;
            android.content.Intent r0 = r3.getIntent()
            java.lang.String r1 = "show_navigationBar"
            r2 = 1
            boolean r0 = r0.getBooleanExtra(r1, r2)
            r3.QQ = r0
            android.content.Intent r0 = r3.getIntent()
            java.lang.String r1 = "title"
            java.lang.String r0 = r0.getStringExtra(r1)
            r3.QP = r0
            android.content.Intent r0 = r3.getIntent()
            java.lang.String r1 = "tk_id"
            r2 = 0
            int r0 = r0.getIntExtra(r1, r2)
            r3.QS = r0
            java.lang.String r0 = "native_intent"
            java.lang.Object r0 = r3.aw(r0)
            com.kwad.sdk.components.h r0 = (com.kwad.sdk.components.h) r0
            r3.QR = r0
            return
    }

    @Override
    public void initView() {
            r4 = this;
            int r0 = com.kwad.sdk.R.id.ksad_tk_root_container
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r4.mRootContainer = r0
            boolean r1 = r4.QQ
            r2 = 0
            if (r1 != 0) goto L1c
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r0.topMargin = r2
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r4.mRootContainer
            r1.setLayoutParams(r0)
        L1c:
            com.kwad.components.core.b.a r0 = new com.kwad.components.core.b.a
            int r1 = com.kwad.sdk.R.id.ksad_kwad_web_title_bar
            android.view.View r1 = r4.findViewById(r1)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r0.<init>(r1)
            r4.mTitleBarHelper = r0
            com.kwad.components.core.s.a.a$1 r1 = new com.kwad.components.core.s.a.a$1
            r1.<init>(r4)
            r0.a(r1)
            com.kwad.components.core.b.a r0 = r4.mTitleBarHelper
            com.kwad.components.core.b.b r1 = new com.kwad.components.core.b.b
            java.lang.String r3 = r4.QP
            r1.<init>(r3)
            r0.a(r1)
            com.kwad.components.core.b.a r0 = r4.mTitleBarHelper
            r0.aj(r2)
            return
    }

    @Override
    public com.kwad.components.core.l.a onCreateCallerContext() {
            r1 = this;
            com.kwad.components.core.s.a.b r0 = r1.qb()
            return r0
    }

    @Override
    public com.kwad.sdk.mvp.Presenter onCreatePresenter() {
            r1 = this;
            com.kwad.components.core.s.b.a r0 = new com.kwad.components.core.s.b.a
            r0.<init>()
            return r0
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            int r0 = r1.QS
            aH(r0)
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            super.onPause()
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            super.onResume()
            return
    }
}
