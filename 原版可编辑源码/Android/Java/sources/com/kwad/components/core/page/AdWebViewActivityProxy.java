package com.kwad.components.core.page;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.ViewGroup;
import com.kwad.components.core.page.widget.a;
import com.kwad.components.core.webview.b.c.d;
import com.kwad.sdk.R;
import com.kwad.sdk.api.core.KsAdSdkDynamicImpl;
import com.kwad.sdk.api.proxy.app.AdWebViewActivity;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONObject;

@KsAdSdkDynamicImpl(AdWebViewActivity.class)
public class AdWebViewActivityProxy extends com.kwad.components.core.n.c {
    private static final String KEY_IS_AUTO_SHOW = "key_is_auto_show";
    private static final String KEY_PAGE_TITLE = "key_page_title";
    private static final String KEY_PAGE_URL = "key_page_url";
    private static final String KEY_SHOW_PERMISSION = "key_show_permission";
    public static final String KEY_TEMPLATE = "key_template_json";
    private AdTemplate mAdTemplate;
    private boolean mAutoShow;
    private com.kwad.components.core.r.b mDialogFragment;
    private Dialog mKsExitInterceptDialog;
    private Dialog mKsExitInterceptDialogV2;
    private c mLandingPageView;
    private String mPageTitle;
    private String mPageUrl;
    private boolean mShowPermission;
    private volatile boolean destroyed = false;
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener = new com.kwad.sdk.core.webview.d.a.b() {
        @Override
        public final void a(WebCloseStatus webCloseStatus) {
            AdWebViewActivityProxy.this.finish();
        }
    };
    private com.kwad.components.core.page.a.a mLandPageViewListener = new com.kwad.components.core.page.a.a() {
        @Override
        public final void dE() {
            AdWebViewActivityProxy.this.onBackPressed();
        }

        @Override
        public final void dF() {
            if (AdWebViewActivityProxy.this.mLandingPageView != null && AdWebViewActivityProxy.this.mLandingPageView.getCanInterceptBackClick()) {
                AdWebViewActivityProxy.this.mLandingPageView.oC();
                return;
            }
            if (AdWebViewActivityProxy.this.mAdTemplate.mIsForceJumpLandingPage) {
                AdWebViewActivityProxy.this.finish();
                return;
            }
            if (com.kwad.sdk.core.response.b.a.aG(com.kwad.sdk.core.response.b.d.cg(AdWebViewActivityProxy.this.mAdTemplate)) && com.kwad.components.core.r.a.pS().pT() == 1 && com.kwad.components.core.r.a.pS().pY() && !com.kwad.components.core.r.a.pS().pV()) {
                if (!com.kwad.components.core.r.a.pS().pU()) {
                    AdWebViewActivityProxy adWebViewActivityProxy = AdWebViewActivityProxy.this;
                    adWebViewActivityProxy.mDialogFragment = adWebViewActivityProxy.getTkDialogFragment();
                    com.kwad.components.core.r.b.a(AdWebViewActivityProxy.this.mDialogFragment, AdWebViewActivityProxy.this.getActivity(), AdWebViewActivityProxy.this.mBaseDialogListener);
                    return;
                }
            } else if (AdWebViewActivityProxy.this.isFormAdExitInterceptEnable()) {
                AdWebViewActivityProxy.this.showDialog();
                return;
            }
            AdWebViewActivityProxy.this.finish();
        }
    };
    private com.kwad.components.core.webview.b.e.c mBaseDialogListener = new com.kwad.components.core.webview.b.e.c() {
        @Override
        public final void H(boolean z) {
        }

        @Override
        public final void gg() {
            com.kwad.components.core.r.a.pS().aH(true);
        }

        @Override
        public final void go() {
            com.kwad.components.core.r.a.pS().aH(false);
        }

        @Override
        public final void gp() {
        }
    };

    public static class a {
        private String MB;
        private String MC;
        private boolean MD;
        private boolean ME;
        private AdTemplate adTemplate;

        public static class a {
            private String MB;
            private String MC;
            private boolean ME;
            private boolean MF;
            private AdTemplate adTemplate;

            public final a S(AdTemplate adTemplate) {
                this.adTemplate = adTemplate;
                return this;
            }

            public final a aq(String str) {
                this.MB = str;
                return this;
            }

            public final a ar(String str) {
                this.MC = str;
                return this;
            }

            public final a ay(boolean z) {
                this.MF = z;
                return this;
            }

            public final a az(boolean z) {
                this.ME = z;
                return this;
            }

            public final a oA() {
                return new a(this.MB, this.MC, this.adTemplate, this.MF, this.ME, (byte) 0);
            }
        }

        private a(String str, String str2, AdTemplate adTemplate, boolean z, boolean z2) {
            this.MB = str;
            this.MC = str2;
            this.adTemplate = adTemplate;
            this.MD = z;
            this.ME = z2;
        }

        a(String str, String str2, AdTemplate adTemplate, boolean z, boolean z2, byte b) {
            this(str, str2, adTemplate, z, z2);
        }

        public final AdTemplate getAdTemplate() {
            return this.adTemplate;
        }

        public final String ow() {
            return this.MB;
        }

        public final String ox() {
            return this.MC;
        }

        public final boolean oy() {
            return this.MD;
        }

        public final boolean oz() {
            return this.ME;
        }
    }

    private com.kwad.components.core.page.widget.a buildDialog() {
        return new com.kwad.components.core.page.widget.a(getActivity(), new a.a() {
            @Override
            public final void a(DialogInterface dialogInterface) {
                com.kwad.sdk.core.report.a.q(AdWebViewActivityProxy.this.mAdTemplate, 104);
                dialogInterface.dismiss();
            }

            @Override
            public final void b(DialogInterface dialogInterface) {
                try {
                    AdWebViewActivityProxy.super.onBackPressed();
                } catch (Throwable unused) {
                }
                com.kwad.sdk.core.report.a.q(AdWebViewActivityProxy.this.mAdTemplate, 105);
            }

            @Override
            public final void c(DialogInterface dialogInterface) {
                com.kwad.sdk.core.report.a.q(AdWebViewActivityProxy.this.mAdTemplate, 106);
                dialogInterface.dismiss();
            }
        });
    }

    private com.kwad.components.core.r.b getTkDialogFragment() {
        d.b bVar = new d.b();
        bVar.setAdTemplate(this.mAdTemplate);
        bVar.aO("ksad-video-web-close-card");
        bVar.aP(false);
        bVar.aQ(true);
        return com.kwad.components.core.r.b.a(bVar);
    }

    private void initContentView() {
        ViewGroup viewGroup = (ViewGroup) findViewById(R.id.ksad_land_page_root);
        c cVarB = c.b(this.mContext, new a.a().aq(this.mPageTitle).ar(this.mPageUrl).S(this.mAdTemplate).ay(this.mShowPermission).az(this.mAutoShow).oA());
        this.mLandingPageView = cVarB;
        cVarB.setLandPageViewListener(this.mLandPageViewListener);
        this.mLandingPageView.setWebCardCloseListener(this.mWebCardCloseListener);
        viewGroup.addView(this.mLandingPageView);
    }

    private boolean isFormAdExitInterceptEnable() {
        AdTemplate adTemplate;
        if (this.mShowPermission || (adTemplate = this.mAdTemplate) == null || com.kwad.sdk.core.response.b.d.s(adTemplate)) {
            return false;
        }
        if (com.kwad.sdk.core.config.d.zx() && this.mAdTemplate.mIsFromContent) {
            return true;
        }
        return com.kwad.sdk.core.config.d.zy() && !this.mAdTemplate.mIsFromContent;
    }

    public static void launch(Context context, a aVar) {
        BusinessType businessTypeCs = aVar.adTemplate.mAdScene != null ? KSLoggerReporter.cs(aVar.adTemplate.mAdScene.getAdStyle()) : null;
        if (TextUtils.isEmpty(aVar.MC) || aVar.MC.contains(" ") || !aVar.MC.startsWith("http")) {
            KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_convert").aK(aVar.adTemplate).W("h5UrlError", aVar.MC).report();
        }
        if (context == null || TextUtils.isEmpty(aVar.MC)) {
            return;
        }
        com.kwad.sdk.i.a.e("all", "convert", "launch_landing_page");
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(businessTypeCs, "startH5Page").report();
        com.kwad.sdk.service.b.a(AdWebViewActivity.class, AdWebViewActivityProxy.class);
        Intent intent = new Intent(context, (Class<?>) AdWebViewActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra(KEY_PAGE_TITLE, aVar.MB);
        intent.putExtra(KEY_PAGE_URL, aVar.MC);
        intent.putExtra(KEY_IS_AUTO_SHOW, aVar.ME);
        intent.putExtra("key_template_json", aVar.adTemplate.toJson().toString());
        intent.putExtra(KEY_SHOW_PERMISSION, aVar.MD);
        context.startActivity(intent);
        com.kwad.sdk.i.a.f("all", "convert", "launch_landing_page");
    }

    public static void launch(Context context, AdTemplate adTemplate) {
        launch(context, new a.a().ar(com.kwad.sdk.core.response.b.b.bm(adTemplate)).S(adTemplate).oA());
    }

    public static void register() {
        com.kwad.sdk.service.b.a(AdWebViewActivity.class, AdWebViewActivityProxy.class);
    }

    private void showDialog() {
        if (this.mKsExitInterceptDialog == null) {
            this.mKsExitInterceptDialog = buildDialog();
        }
        com.kwad.sdk.core.report.a.b(this.mAdTemplate, 103, (JSONObject) null);
        this.mKsExitInterceptDialog.show();
    }

    @Override
    public boolean checkIntentData(Intent intent) {
        try {
            String stringExtra = getIntent().getStringExtra("key_template_json");
            AdTemplate adTemplate = new AdTemplate();
            adTemplate.parseJson(new JSONObject(stringExtra));
            this.mAdTemplate = adTemplate;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
        return this.mAdTemplate != null;
    }

    @Override
    public int getLayoutId() {
        return 0;
    }

    @Override
    public String getPageName() {
        return "AdWebViewActivityProxy";
    }

    @Override
    public void initData() {
        this.destroyed = false;
        String stringExtra = getIntent().getStringExtra("key_template_json");
        this.mPageTitle = getIntent().getStringExtra(KEY_PAGE_TITLE);
        this.mPageUrl = getIntent().getStringExtra(KEY_PAGE_URL);
        this.mAutoShow = getIntent().getBooleanExtra(KEY_IS_AUTO_SHOW, false);
        this.mShowPermission = getIntent().getBooleanExtra(KEY_SHOW_PERMISSION, false);
        try {
            AdTemplate adTemplate = new AdTemplate();
            adTemplate.parseJson(new JSONObject(stringExtra));
            this.mAdTemplate = adTemplate;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
    }

    @Override
    public void initView() {
        setContentView(R.layout.ksad_activity_landpage);
        initContentView();
    }

    @Override
    public void onBackPressed() {
        c cVar = this.mLandingPageView;
        if (cVar != null && cVar.getCanInterceptBackClick()) {
            this.mLandingPageView.oC();
            return;
        }
        AdTemplate adTemplate = this.mAdTemplate;
        if (adTemplate == null || adTemplate.mIsForceJumpLandingPage) {
            super.onBackPressed();
            return;
        }
        if (com.kwad.sdk.core.response.b.a.aG(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)) && com.kwad.components.core.r.a.pS().pT() == 1 && com.kwad.components.core.r.a.pS().pY() && !com.kwad.components.core.r.a.pS().pV()) {
            if (com.kwad.components.core.r.a.pS().pU()) {
                super.onBackPressed();
                return;
            }
            com.kwad.components.core.r.b tkDialogFragment = getTkDialogFragment();
            this.mDialogFragment = tkDialogFragment;
            com.kwad.components.core.r.b.a(tkDialogFragment, getActivity(), this.mBaseDialogListener);
            return;
        }
        if (isFormAdExitInterceptEnable()) {
            try {
                if (this.mKsExitInterceptDialogV2 == null) {
                    this.mKsExitInterceptDialogV2 = new com.kwad.components.core.page.widget.a(getActivity(), new a.a() {
                        @Override
                        public final void a(DialogInterface dialogInterface) {
                            com.kwad.sdk.core.report.a.q(AdWebViewActivityProxy.this.mAdTemplate, 104);
                            dialogInterface.dismiss();
                        }

                        @Override
                        public final void b(DialogInterface dialogInterface) {
                            if (!AdWebViewActivityProxy.this.destroyed) {
                                try {
                                    AdWebViewActivityProxy.super.onBackPressed();
                                } catch (Throwable th) {
                                    com.kwad.sdk.core.e.c.printStackTrace(th);
                                }
                            }
                            com.kwad.sdk.core.report.a.q(AdWebViewActivityProxy.this.mAdTemplate, 105);
                        }

                        @Override
                        public final void c(DialogInterface dialogInterface) {
                            com.kwad.sdk.core.report.a.q(AdWebViewActivityProxy.this.mAdTemplate, 106);
                            dialogInterface.dismiss();
                        }
                    });
                }
                com.kwad.sdk.core.report.a.b(this.mAdTemplate, 103, (JSONObject) null);
                this.mKsExitInterceptDialogV2.show();
                return;
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
        super.onBackPressed();
    }

    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        AdTemplate adTemplate = this.mAdTemplate;
        KSLoggerReporter.ReportClient.CONVERT_H5WEB.buildMethodCheck((adTemplate == null || adTemplate.mAdScene == null) ? null : KSLoggerReporter.cs(this.mAdTemplate.mAdScene.getAdStyle()), "h5PageCreate").report();
    }

    @Override
    public void onDestroy() {
        this.destroyed = true;
        Dialog dialog = this.mKsExitInterceptDialog;
        if (dialog != null && dialog.isShowing()) {
            this.mKsExitInterceptDialog.dismiss();
        }
        Dialog dialog2 = this.mKsExitInterceptDialogV2;
        if (dialog2 != null && dialog2.isShowing()) {
            this.mKsExitInterceptDialogV2.dismiss();
        }
        super.onDestroy();
        AdTemplate adTemplate = this.mAdTemplate;
        if (adTemplate != null) {
            adTemplate.interactLandingPageShowing = false;
            this.mAdTemplate.mIsForceJumpLandingPage = false;
        }
    }

    @Override
    public void onPause() {
        super.onPause();
        overridePendingTransition(0, 0);
    }

    @Override
    public void onPreCreate(Bundle bundle) {
        super.onPreCreate(bundle);
        try {
            getIntent().removeExtra("key_template");
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onResume() {
        super.onResume();
    }
}
