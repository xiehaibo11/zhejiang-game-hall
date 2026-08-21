package com.kwad.components.core.page;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.AdWebViewActivity.class)
public class AdWebViewActivityProxy extends com.kwad.components.core.n.c {
    private static final java.lang.String KEY_IS_AUTO_SHOW = "key_is_auto_show";
    private static final java.lang.String KEY_PAGE_TITLE = "key_page_title";
    private static final java.lang.String KEY_PAGE_URL = "key_page_url";
    private static final java.lang.String KEY_SHOW_PERMISSION = "key_show_permission";
    public static final java.lang.String KEY_TEMPLATE = "key_template_json";
    private volatile boolean destroyed;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private boolean mAutoShow;
    private com.kwad.components.core.webview.b.e.c mBaseDialogListener;
    private com.kwad.components.core.r.b mDialogFragment;
    private android.app.Dialog mKsExitInterceptDialog;
    private android.app.Dialog mKsExitInterceptDialogV2;
    private com.kwad.components.core.page.a.a mLandPageViewListener;
    private com.kwad.components.core.page.c mLandingPageView;
    private java.lang.String mPageTitle;
    private java.lang.String mPageUrl;
    private boolean mShowPermission;
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;






    public static class a {
        private java.lang.String MB;
        private java.lang.String MC;
        private boolean MD;
        private boolean ME;
        private com.kwad.sdk.core.response.model.AdTemplate adTemplate;

        public static class a {
            private java.lang.String MB;
            private java.lang.String MC;
            private boolean ME;
            private boolean MF;
            private com.kwad.sdk.core.response.model.AdTemplate adTemplate;

            public a() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public final com.kwad.components.core.page.AdWebViewActivityProxy.a.a S(com.kwad.sdk.core.response.model.AdTemplate r1) {
                    r0 = this;
                    r0.adTemplate = r1
                    return r0
            }

            public final com.kwad.components.core.page.AdWebViewActivityProxy.a.a aq(java.lang.String r1) {
                    r0 = this;
                    r0.MB = r1
                    return r0
            }

            public final com.kwad.components.core.page.AdWebViewActivityProxy.a.a ar(java.lang.String r1) {
                    r0 = this;
                    r0.MC = r1
                    return r0
            }

            public final com.kwad.components.core.page.AdWebViewActivityProxy.a.a ay(boolean r1) {
                    r0 = this;
                    r0.MF = r1
                    return r0
            }

            public final com.kwad.components.core.page.AdWebViewActivityProxy.a.a az(boolean r1) {
                    r0 = this;
                    r0.ME = r1
                    return r0
            }

            public final com.kwad.components.core.page.AdWebViewActivityProxy.a oA() {
                    r8 = this;
                    com.kwad.components.core.page.AdWebViewActivityProxy$a r7 = new com.kwad.components.core.page.AdWebViewActivityProxy$a
                    java.lang.String r1 = r8.MB
                    java.lang.String r2 = r8.MC
                    com.kwad.sdk.core.response.model.AdTemplate r3 = r8.adTemplate
                    boolean r4 = r8.MF
                    boolean r5 = r8.ME
                    r6 = 0
                    r0 = r7
                    r0.<init>(r1, r2, r3, r4, r5, r6)
                    return r7
            }
        }

        private a(java.lang.String r1, java.lang.String r2, com.kwad.sdk.core.response.model.AdTemplate r3, boolean r4, boolean r5) {
                r0 = this;
                r0.<init>()
                r0.MB = r1
                r0.MC = r2
                r0.adTemplate = r3
                r0.MD = r4
                r0.ME = r5
                return
        }

        a(java.lang.String r1, java.lang.String r2, com.kwad.sdk.core.response.model.AdTemplate r3, boolean r4, boolean r5, byte r6) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }

        static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.core.page.AdWebViewActivityProxy.a r0) {
                com.kwad.sdk.core.response.model.AdTemplate r0 = r0.adTemplate
                return r0
        }

        static java.lang.String b(com.kwad.components.core.page.AdWebViewActivityProxy.a r0) {
                java.lang.String r0 = r0.MC
                return r0
        }

        static java.lang.String c(com.kwad.components.core.page.AdWebViewActivityProxy.a r0) {
                java.lang.String r0 = r0.MB
                return r0
        }

        static boolean d(com.kwad.components.core.page.AdWebViewActivityProxy.a r0) {
                boolean r0 = r0.ME
                return r0
        }

        static boolean e(com.kwad.components.core.page.AdWebViewActivityProxy.a r0) {
                boolean r0 = r0.MD
                return r0
        }

        public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
                r1 = this;
                com.kwad.sdk.core.response.model.AdTemplate r0 = r1.adTemplate
                return r0
        }

        public final java.lang.String ow() {
                r1 = this;
                java.lang.String r0 = r1.MB
                return r0
        }

        public final java.lang.String ox() {
                r1 = this;
                java.lang.String r0 = r1.MC
                return r0
        }

        public final boolean oy() {
                r1 = this;
                boolean r0 = r1.MD
                return r0
        }

        public final boolean oz() {
                r1 = this;
                boolean r0 = r1.ME
                return r0
        }
    }

    public AdWebViewActivityProxy() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.destroyed = r0
            com.kwad.components.core.page.AdWebViewActivityProxy$1 r0 = new com.kwad.components.core.page.AdWebViewActivityProxy$1
            r0.<init>(r1)
            r1.mWebCardCloseListener = r0
            com.kwad.components.core.page.AdWebViewActivityProxy$2 r0 = new com.kwad.components.core.page.AdWebViewActivityProxy$2
            r0.<init>(r1)
            r1.mLandPageViewListener = r0
            com.kwad.components.core.page.AdWebViewActivityProxy$3 r0 = new com.kwad.components.core.page.AdWebViewActivityProxy$3
            r0.<init>(r1)
            r1.mBaseDialogListener = r0
            return
    }

    static boolean access$1000(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            boolean r0 = r0.isFormAdExitInterceptEnable()
            return r0
    }

    static void access$1100(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            r0.showDialog()
            return
    }

    static boolean access$1200(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            boolean r0 = r0.destroyed
            return r0
    }

    static void access$1301(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            super.onBackPressed()
            return
    }

    static void access$1401(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            super.onBackPressed()
            return
    }

    static com.kwad.components.core.page.c access$500(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            com.kwad.components.core.page.c r0 = r0.mLandingPageView
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate access$600(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.core.r.b access$700(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            com.kwad.components.core.r.b r0 = r0.mDialogFragment
            return r0
    }

    static com.kwad.components.core.r.b access$702(com.kwad.components.core.page.AdWebViewActivityProxy r0, com.kwad.components.core.r.b r1) {
            r0.mDialogFragment = r1
            return r1
    }

    static com.kwad.components.core.r.b access$800(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            com.kwad.components.core.r.b r0 = r0.getTkDialogFragment()
            return r0
    }

    static com.kwad.components.core.webview.b.e.c access$900(com.kwad.components.core.page.AdWebViewActivityProxy r0) {
            com.kwad.components.core.webview.b.e.c r0 = r0.mBaseDialogListener
            return r0
    }

    private com.kwad.components.core.page.widget.a buildDialog() {
            r3 = this;
            com.kwad.components.core.page.widget.a r0 = new com.kwad.components.core.page.widget.a
            android.app.Activity r1 = r3.getActivity()
            com.kwad.components.core.page.AdWebViewActivityProxy$5 r2 = new com.kwad.components.core.page.AdWebViewActivityProxy$5
            r2.<init>(r3)
            r0.<init>(r1, r2)
            return r0
    }

    private com.kwad.components.core.r.b getTkDialogFragment() {
            r2 = this;
            com.kwad.components.core.webview.b.c.d$b r0 = new com.kwad.components.core.webview.b.c.d$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            java.lang.String r1 = "ksad-video-web-close-card"
            r0.aO(r1)
            r1 = 0
            r0.aP(r1)
            r1 = 1
            r0.aQ(r1)
            com.kwad.components.core.r.b r0 = com.kwad.components.core.r.b.a(r0)
            return r0
    }

    private void initContentView() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_land_page_root
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r1 = new com.kwad.components.core.page.AdWebViewActivityProxy$a$a
            r1.<init>()
            java.lang.String r2 = r3.mPageTitle
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r1 = r1.aq(r2)
            java.lang.String r2 = r3.mPageUrl
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r1 = r1.ar(r2)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r1 = r1.S(r2)
            boolean r2 = r3.mShowPermission
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r1 = r1.ay(r2)
            boolean r2 = r3.mAutoShow
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r1 = r1.az(r2)
            com.kwad.components.core.page.AdWebViewActivityProxy$a r1 = r1.oA()
            android.content.Context r2 = r3.mContext
            com.kwad.components.core.page.c r1 = com.kwad.components.core.page.c.b(r2, r1)
            r3.mLandingPageView = r1
            com.kwad.components.core.page.a.a r2 = r3.mLandPageViewListener
            r1.setLandPageViewListener(r2)
            com.kwad.components.core.page.c r1 = r3.mLandingPageView
            com.kwad.sdk.core.webview.d.a.b r2 = r3.mWebCardCloseListener
            r1.setWebCardCloseListener(r2)
            com.kwad.components.core.page.c r1 = r3.mLandingPageView
            r0.addView(r1)
            return
    }

    private boolean isFormAdExitInterceptEnable() {
            r3 = this;
            boolean r0 = r3.mShowPermission
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            if (r0 != 0) goto Lb
            return r1
        Lb:
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r0)
            if (r0 == 0) goto L12
            return r1
        L12:
            boolean r0 = com.kwad.sdk.core.config.d.zx()
            r2 = 1
            if (r0 == 0) goto L20
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            boolean r0 = r0.mIsFromContent
            if (r0 == 0) goto L20
            return r2
        L20:
            boolean r0 = com.kwad.sdk.core.config.d.zy()
            if (r0 == 0) goto L2d
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            boolean r0 = r0.mIsFromContent
            if (r0 != 0) goto L2d
            return r2
        L2d:
            return r1
    }

    public static void launch(android.content.Context r6, com.kwad.components.core.page.AdWebViewActivityProxy.a r7) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = com.kwad.components.core.page.AdWebViewActivityProxy.a.a(r7)
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            if (r0 == 0) goto L17
            com.kwad.sdk.core.response.model.AdTemplate r0 = com.kwad.components.core.page.AdWebViewActivityProxy.a.a(r7)
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            int r0 = r0.getAdStyle()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwad.sdk.core.report.KSLoggerReporter.cs(r0)
            goto L18
        L17:
            r0 = 0
        L18:
            java.lang.String r1 = com.kwad.components.core.page.AdWebViewActivityProxy.a.b(r7)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3d
            java.lang.String r1 = com.kwad.components.core.page.AdWebViewActivityProxy.a.b(r7)
            java.lang.String r2 = " "
            boolean r1 = r1.contains(r2)
            if (r1 != 0) goto L3d
            java.lang.String r1 = com.kwad.components.core.page.AdWebViewActivityProxy.a.b(r7)
            java.lang.String r2 = "http"
            boolean r1 = r1.startsWith(r2)
            if (r1 != 0) goto L3b
            goto L3d
        L3b:
            r1 = 0
            goto L3e
        L3d:
            r1 = 1
        L3e:
            if (r1 == 0) goto L61
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r1 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.RESPONE_MONITOR
            com.kwad.sdk.core.report.KSLoggerReporter$b r1 = r1.buildNormalApmReporter()
            java.lang.String r2 = "response_biz_error_convert"
            com.kwad.sdk.core.report.KSLoggerReporter$b r1 = r1.dx(r2)
            com.kwad.sdk.core.response.model.AdTemplate r2 = com.kwad.components.core.page.AdWebViewActivityProxy.a.a(r7)
            com.kwad.sdk.core.report.KSLoggerReporter$b r1 = r1.aK(r2)
            java.lang.String r2 = com.kwad.components.core.page.AdWebViewActivityProxy.a.b(r7)
            java.lang.String r3 = "h5UrlError"
            com.kwad.sdk.core.report.KSLoggerReporter$b r1 = r1.W(r3, r2)
            r1.report()
        L61:
            if (r6 == 0) goto Ld0
            java.lang.String r1 = com.kwad.components.core.page.AdWebViewActivityProxy.a.b(r7)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L6e
            goto Ld0
        L6e:
            java.lang.String r1 = "launch_landing_page"
            java.lang.String r2 = "convert"
            java.lang.String r3 = "all"
            com.kwad.sdk.i.a.e(r3, r2, r1)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r4 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            java.lang.String r5 = "startH5Page"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r4.buildMethodCheck(r0, r5)
            r0.report()
            java.lang.Class<com.kwad.sdk.api.proxy.app.AdWebViewActivity> r0 = com.kwad.sdk.api.proxy.app.AdWebViewActivity.class
            java.lang.Class<com.kwad.components.core.page.AdWebViewActivityProxy> r4 = com.kwad.components.core.page.AdWebViewActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r4)
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.kwad.sdk.api.proxy.app.AdWebViewActivity> r4 = com.kwad.sdk.api.proxy.app.AdWebViewActivity.class
            r0.<init>(r6, r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)
            java.lang.String r4 = com.kwad.components.core.page.AdWebViewActivityProxy.a.c(r7)
            java.lang.String r5 = "key_page_title"
            r0.putExtra(r5, r4)
            java.lang.String r4 = com.kwad.components.core.page.AdWebViewActivityProxy.a.b(r7)
            java.lang.String r5 = "key_page_url"
            r0.putExtra(r5, r4)
            boolean r4 = com.kwad.components.core.page.AdWebViewActivityProxy.a.d(r7)
            java.lang.String r5 = "key_is_auto_show"
            r0.putExtra(r5, r4)
            com.kwad.sdk.core.response.model.AdTemplate r4 = com.kwad.components.core.page.AdWebViewActivityProxy.a.a(r7)
            org.json.JSONObject r4 = r4.toJson()
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "key_template_json"
            r0.putExtra(r5, r4)
            boolean r7 = com.kwad.components.core.page.AdWebViewActivityProxy.a.e(r7)
            java.lang.String r4 = "key_show_permission"
            r0.putExtra(r4, r7)
            r6.startActivity(r0)
            com.kwad.sdk.i.a.f(r3, r2, r1)
        Ld0:
            return
    }

    public static void launch(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r0 = new com.kwad.components.core.page.AdWebViewActivityProxy$a$a
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bm(r3)
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r0 = r0.ar(r1)
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r0.S(r3)
            com.kwad.components.core.page.AdWebViewActivityProxy$a r3 = r3.oA()
            launch(r2, r3)
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.AdWebViewActivity> r0 = com.kwad.sdk.api.proxy.app.AdWebViewActivity.class
            java.lang.Class<com.kwad.components.core.page.AdWebViewActivityProxy> r1 = com.kwad.components.core.page.AdWebViewActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            return
    }

    private void showDialog() {
            r3 = this;
            android.app.Dialog r0 = r3.mKsExitInterceptDialog
            if (r0 != 0) goto La
            com.kwad.components.core.page.widget.a r0 = r3.buildDialog()
            r3.mKsExitInterceptDialog = r0
        La:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r1 = 103(0x67, float:1.44E-43)
            r2 = 0
            com.kwad.sdk.core.report.a.b(r0, r1, r2)
            android.app.Dialog r0 = r3.mKsExitInterceptDialog
            r0.show()
            return
    }

    @Override
    public boolean checkIntentData(android.content.Intent r3) {
            r2 = this;
            android.content.Intent r3 = r2.getIntent()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = "key_template_json"
            java.lang.String r3 = r3.getStringExtra(r0)     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L1a
            r0.<init>()     // Catch: java.lang.Throwable -> L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1a
            r0.parseJson(r1)     // Catch: java.lang.Throwable -> L1a
            r2.mAdTemplate = r0     // Catch: java.lang.Throwable -> L1a
            goto L1e
        L1a:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L1e:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            if (r3 == 0) goto L24
            r3 = 1
            return r3
        L24:
            r3 = 0
            return r3
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "AdWebViewActivityProxy"
            return r0
    }

    @Override
    public void initData() {
            r4 = this;
            r0 = 0
            r4.destroyed = r0
            android.content.Intent r1 = r4.getIntent()
            java.lang.String r2 = "key_template_json"
            java.lang.String r1 = r1.getStringExtra(r2)
            android.content.Intent r2 = r4.getIntent()
            java.lang.String r3 = "key_page_title"
            java.lang.String r2 = r2.getStringExtra(r3)
            r4.mPageTitle = r2
            android.content.Intent r2 = r4.getIntent()
            java.lang.String r3 = "key_page_url"
            java.lang.String r2 = r2.getStringExtra(r3)
            r4.mPageUrl = r2
            android.content.Intent r2 = r4.getIntent()
            java.lang.String r3 = "key_is_auto_show"
            boolean r2 = r2.getBooleanExtra(r3, r0)
            r4.mAutoShow = r2
            android.content.Intent r2 = r4.getIntent()
            java.lang.String r3 = "key_show_permission"
            boolean r0 = r2.getBooleanExtra(r3, r0)
            r4.mShowPermission = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L4d
            r0.<init>()     // Catch: java.lang.Throwable -> L4d
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4d
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L4d
            r0.parseJson(r2)     // Catch: java.lang.Throwable -> L4d
            r4.mAdTemplate = r0     // Catch: java.lang.Throwable -> L4d
            return
        L4d:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    @Override
    public void initView() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_activity_landpage
            r1.setContentView(r0)
            r1.initContentView()
            return
    }

    @Override
    public void onBackPressed() {
            r3 = this;
            com.kwad.components.core.page.c r0 = r3.mLandingPageView
            if (r0 == 0) goto L10
            boolean r0 = r0.getCanInterceptBackClick()
            if (r0 == 0) goto L10
            com.kwad.components.core.page.c r0 = r3.mLandingPageView
            r0.oC()
            return
        L10:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            if (r0 == 0) goto L93
            boolean r0 = r0.mIsForceJumpLandingPage
            if (r0 == 0) goto L1a
            goto L93
        L1a:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aG(r0)
            if (r0 == 0) goto L63
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            int r0 = r0.pT()
            r1 = 1
            if (r0 != r1) goto L63
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            boolean r0 = r0.pY()
            if (r0 == 0) goto L63
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            boolean r0 = r0.pV()
            if (r0 != 0) goto L63
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            boolean r0 = r0.pU()
            if (r0 == 0) goto L53
            super.onBackPressed()
            return
        L53:
            com.kwad.components.core.r.b r0 = r3.getTkDialogFragment()
            r3.mDialogFragment = r0
            android.app.Activity r1 = r3.getActivity()
            com.kwad.components.core.webview.b.e.c r2 = r3.mBaseDialogListener
            com.kwad.components.core.r.b.a(r0, r1, r2)
            return
        L63:
            boolean r0 = r3.isFormAdExitInterceptEnable()
            if (r0 == 0) goto L8f
            android.app.Dialog r0 = r3.mKsExitInterceptDialogV2     // Catch: java.lang.Throwable -> L8b
            if (r0 != 0) goto L7d
            com.kwad.components.core.page.widget.a r0 = new com.kwad.components.core.page.widget.a     // Catch: java.lang.Throwable -> L8b
            android.app.Activity r1 = r3.getActivity()     // Catch: java.lang.Throwable -> L8b
            com.kwad.components.core.page.AdWebViewActivityProxy$4 r2 = new com.kwad.components.core.page.AdWebViewActivityProxy$4     // Catch: java.lang.Throwable -> L8b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8b
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L8b
            r3.mKsExitInterceptDialogV2 = r0     // Catch: java.lang.Throwable -> L8b
        L7d:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate     // Catch: java.lang.Throwable -> L8b
            r1 = 103(0x67, float:1.44E-43)
            r2 = 0
            com.kwad.sdk.core.report.a.b(r0, r1, r2)     // Catch: java.lang.Throwable -> L8b
            android.app.Dialog r0 = r3.mKsExitInterceptDialogV2     // Catch: java.lang.Throwable -> L8b
            r0.show()     // Catch: java.lang.Throwable -> L8b
            return
        L8b:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L8f:
            super.onBackPressed()
            return
        L93:
            super.onBackPressed()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            if (r3 == 0) goto L18
            com.kwad.sdk.internal.api.SceneImpl r3 = r3.mAdScene
            if (r3 == 0) goto L18
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.sdk.internal.api.SceneImpl r3 = r3.mAdScene
            int r3 = r3.getAdStyle()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwad.sdk.core.report.KSLoggerReporter.cs(r3)
            goto L19
        L18:
            r3 = 0
        L19:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CONVERT_H5WEB
            java.lang.String r1 = "h5PageCreate"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r0.buildMethodCheck(r3, r1)
            r3.report()
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            r0 = 1
            r2.destroyed = r0
            android.app.Dialog r0 = r2.mKsExitInterceptDialog
            if (r0 == 0) goto L12
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L12
            android.app.Dialog r0 = r2.mKsExitInterceptDialog
            r0.dismiss()
        L12:
            android.app.Dialog r0 = r2.mKsExitInterceptDialogV2
            if (r0 == 0) goto L21
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L21
            android.app.Dialog r0 = r2.mKsExitInterceptDialogV2
            r0.dismiss()
        L21:
            super.onDestroy()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto L2f
            r1 = 0
            r0.interactLandingPageShowing = r1
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r0.mIsForceJumpLandingPage = r1
        L2f:
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            r0 = 0
            r1.overridePendingTransition(r0, r0)
            return
    }

    @Override
    public void onPreCreate(android.os.Bundle r2) {
            r1 = this;
            super.onPreCreate(r2)
            android.content.Intent r2 = r1.getIntent()     // Catch: java.lang.Throwable -> Lc
            java.lang.String r0 = "key_template"
            r2.removeExtra(r0)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            super.onResume()
            return
    }
}
