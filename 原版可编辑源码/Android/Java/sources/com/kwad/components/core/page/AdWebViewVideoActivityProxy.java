package com.kwad.components.core.page;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.core.b.a;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.n.f;
import com.kwad.components.core.page.widget.a;
import com.kwad.sdk.R;
import com.kwad.sdk.api.core.KsAdSdkDynamicImpl;
import com.kwad.sdk.api.core.fragment.KsFragment;
import com.kwad.sdk.api.core.fragment.KsFragmentTransaction;
import com.kwad.sdk.api.proxy.app.AdWebViewActivity;
import com.kwad.sdk.api.proxy.app.BaseFragmentActivity;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.widget.DownloadProgressBar;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONObject;

@KsAdSdkDynamicImpl(AdWebViewActivity.class)
public class AdWebViewVideoActivityProxy extends f {
    public static final String KEY_REPORTED = "key_reported";
    public static final String KEY_TEMPLATE = "key_template_json";
    public static boolean showingAdWebViewVideoActivity;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private b mFragment;
    private Dialog mKsExitInterceptDialog;
    private DownloadProgressBar mProgressbar;
    private com.kwad.components.core.page.splitLandingPage.a mSplitLandingPage;
    private com.kwad.components.core.b.a mTitleBarHelper;
    private ViewGroup mWebDownloadContainer;

    private com.kwad.components.core.page.widget.a buildDialog() {
        return new com.kwad.components.core.page.widget.a(getActivity(), new a.a() {
            @Override
            public final void a(DialogInterface dialogInterface) {
                com.kwad.sdk.core.report.a.q(AdWebViewVideoActivityProxy.this.mAdTemplate, 104);
                dialogInterface.dismiss();
            }

            @Override
            public final void b(DialogInterface dialogInterface) {
                AdWebViewVideoActivityProxy.super.onBackPressed();
                com.kwad.sdk.core.report.a.q(AdWebViewVideoActivityProxy.this.mAdTemplate, 105);
            }

            @Override
            public final void c(DialogInterface dialogInterface) {
                com.kwad.sdk.core.report.a.q(AdWebViewVideoActivityProxy.this.mAdTemplate, 106);
                dialogInterface.dismiss();
            }
        });
    }

    private a.a getAdClickConfig(boolean z) {
        return new a.a(getActivity()).am(z).ar(true).an(false).P(this.mAdTemplate).ap(false);
    }

    private void initView() {
        KsFragmentTransaction ksFragmentTransactionBeginTransaction;
        KsFragment ksFragment;
        this.mProgressbar = (DownloadProgressBar) findViewById(R.id.ksad_web_download_progress);
        this.mWebDownloadContainer = (ViewGroup) findViewById(R.id.ksad_web_download_container);
        final AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            this.mWebDownloadContainer.setVisibility(0);
            this.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate, new com.kwad.sdk.core.download.a.a() {
                @Override
                public final void onDownloadFailed() {
                    AdWebViewVideoActivityProxy.this.mProgressbar.setProgress(100.0f);
                    AdWebViewVideoActivityProxy.this.mProgressbar.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
                }

                @Override
                public final void onDownloadFinished() {
                    AdWebViewVideoActivityProxy.this.mProgressbar.setProgress(100.0f);
                    AdWebViewVideoActivityProxy.this.mProgressbar.setText(com.kwad.sdk.core.response.b.a.aM(AdWebViewVideoActivityProxy.this.mAdTemplate));
                }

                @Override
                public final void onIdle() {
                    AdWebViewVideoActivityProxy.this.mProgressbar.setProgress(100.0f);
                    AdWebViewVideoActivityProxy.this.mProgressbar.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
                }

                @Override
                public final void onInstalled() {
                    AdWebViewVideoActivityProxy.this.mProgressbar.setProgress(100.0f);
                    AdWebViewVideoActivityProxy.this.mProgressbar.setText(com.kwad.sdk.core.response.b.a.U(adInfoCg));
                }

                @Override
                public final void onPaused(int i) {
                    AdWebViewVideoActivityProxy.this.mProgressbar.setProgress(i);
                    AdWebViewVideoActivityProxy.this.mProgressbar.setText(com.kwad.sdk.core.response.b.a.cw(i));
                }

                @Override
                public final void onProgressUpdate(int i) {
                    AdWebViewVideoActivityProxy.this.mProgressbar.setProgress(i);
                    AdWebViewVideoActivityProxy.this.mProgressbar.setText(com.kwad.sdk.core.response.b.a.cv(i));
                }
            });
            this.mProgressbar.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    com.kwad.sdk.core.report.a.a(AdWebViewVideoActivityProxy.this.mAdTemplate, 50, (ac.a) null);
                    com.kwad.components.core.e.d.a.a(AdWebViewVideoActivityProxy.this.getAdClickConfig(true));
                }
            });
        } else {
            this.mWebDownloadContainer.setVisibility(8);
        }
        String strBO = (this.mAdTemplate.adInfoList == null || this.mAdTemplate.adInfoList.size() <= 0 || this.mAdTemplate.adInfoList.get(0) == null) ? "详情页面" : com.kwad.sdk.core.response.b.a.bO(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
        com.kwad.components.core.b.a aVar = new com.kwad.components.core.b.a((ViewGroup) findViewById(R.id.ksad_kwad_web_title_bar));
        this.mTitleBarHelper = aVar;
        aVar.a(new a.a() {
            @Override
            public final void t(View view) {
                AdWebViewVideoActivityProxy.this.onBackPressed();
            }

            @Override
            public final void u(View view) {
                AdWebViewVideoActivityProxy.this.finish();
            }
        });
        this.mTitleBarHelper.a(new com.kwad.components.core.b.b(strBO));
        ai.cl(getActivity());
        com.kwad.components.core.t.d.a(getActivity(), 0, true);
        int i = R.id.ksad_recycler_container;
        if (com.kwad.sdk.core.config.d.yY() != 0) {
            com.kwad.components.core.page.splitLandingPage.a aVarT = com.kwad.components.core.page.splitLandingPage.a.T(this.mAdTemplate);
            this.mSplitLandingPage = aVarT;
            aVarT.setApkDownloadHelper(this.mApkDownloadHelper);
            ksFragmentTransactionBeginTransaction = getSupportFragmentManager().beginTransaction();
            ksFragment = this.mSplitLandingPage;
        } else {
            b bVarR = b.R(this.mAdTemplate);
            this.mFragment = bVarR;
            bVarR.setApkDownloadHelper(this.mApkDownloadHelper);
            ksFragmentTransactionBeginTransaction = getSupportFragmentManager().beginTransaction();
            ksFragment = this.mFragment;
        }
        ksFragmentTransactionBeginTransaction.replace(i, ksFragment).commitAllowingStateLoss();
    }

    private boolean isFormAdExitInterceptEnable() {
        if (this.mAdTemplate == null) {
            return false;
        }
        if (com.kwad.sdk.core.config.d.zx() && this.mAdTemplate.mIsFromContent) {
            return true;
        }
        return com.kwad.sdk.core.config.d.zy() && !this.mAdTemplate.mIsFromContent;
    }

    public static void launch(Context context, AdTemplate adTemplate) {
        if (context == null || adTemplate == null) {
            return;
        }
        Intent intent = new Intent(context, (Class<?>) BaseFragmentActivity.FragmentActivity3.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("key_template_json", adTemplate.toJson().toString());
        intent.putExtra(KEY_REPORTED, adTemplate.mPvReported);
        context.startActivity(intent);
        Activity activityDr = l.dr(context);
        if (activityDr != null) {
            activityDr.overridePendingTransition(0, 0);
        }
    }

    public static void register() {
        com.kwad.sdk.service.b.a(BaseFragmentActivity.FragmentActivity3.class, AdWebViewVideoActivityProxy.class);
    }

    private void showDialog() {
        if (this.mKsExitInterceptDialog == null) {
            this.mKsExitInterceptDialog = buildDialog();
        }
        com.kwad.sdk.core.report.a.b(this.mAdTemplate, 103, (JSONObject) null);
        this.mKsExitInterceptDialog.show();
    }

    private void showWaitDialog() {
        if (isFormAdExitInterceptEnable()) {
            showDialog();
        } else {
            finish();
        }
    }

    @Override
    public String getPageName() {
        return "AdWebViewVideoActivityProxy";
    }

    @Override
    public void onBackPressed() {
        com.kwad.components.core.page.splitLandingPage.a aVar = this.mSplitLandingPage;
        if (aVar == null || !aVar.bP()) {
            com.kwad.components.core.page.splitLandingPage.a aVar2 = this.mSplitLandingPage;
            if (aVar2 != null) {
                aVar2.po();
            }
            b bVar = this.mFragment;
            if (bVar == null || !bVar.bP()) {
                showWaitDialog();
            } else {
                super.onBackPressed();
            }
        }
    }

    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ksad_activity_ad_video_webview);
        showingAdWebViewVideoActivity = true;
        try {
            String stringExtra = getIntent().getStringExtra("key_template_json");
            AdTemplate adTemplate = new AdTemplate();
            adTemplate.parseJson(new JSONObject(stringExtra));
            this.mAdTemplate = adTemplate;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
        AdTemplate adTemplate2 = this.mAdTemplate;
        if (adTemplate2 == null) {
            finish();
        } else {
            adTemplate2.mPvReported = getIntent().getBooleanExtra(KEY_REPORTED, false);
            initView();
        }
    }

    @Override
    public void onDestroy() {
        Dialog dialog = this.mKsExitInterceptDialog;
        if (dialog != null && dialog.isShowing()) {
            this.mKsExitInterceptDialog.dismiss();
        }
        super.onDestroy();
        showingAdWebViewVideoActivity = false;
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.clear();
        }
    }

    @Override
    public void onPause() {
        showingAdWebViewVideoActivity = false;
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
        showingAdWebViewVideoActivity = true;
    }
}
