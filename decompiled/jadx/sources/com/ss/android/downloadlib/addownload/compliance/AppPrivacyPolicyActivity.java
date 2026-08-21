package com.ss.android.downloadlib.addownload.compliance;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.RenderProcessGoneDetail;
import android.webkit.WebResourceRequest;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ImageView;
import com.bytedance.sdk.openadsdk.R;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.constants.EventConstants;

/* JADX INFO: loaded from: classes3.dex */
public class AppPrivacyPolicyActivity extends Activity {
    private WebView df;
    private String pp;
    private long pt;
    private long q;
    private ImageView rg;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ttdownloader_activity_app_privacy_policy);
        if (rg()) {
            df();
        } else {
            com.ss.android.socialbase.appdownloader.q.rg((Activity) this);
        }
    }

    public static void rg(Activity activity, long j) {
        Intent intent = new Intent(activity, (Class<?>) AppPrivacyPolicyActivity.class);
        intent.putExtra("app_info_id", j);
        activity.startActivity(intent);
    }

    private boolean rg() {
        this.q = getIntent().getLongExtra("app_info_id", 0L);
        com.ss.android.downloadlib.addownload.model.df dfVarRg = q.rg().rg(this.q);
        if (dfVarRg == null) {
            return false;
        }
        this.pt = dfVarRg.df;
        String str = dfVarRg.rz;
        this.pp = str;
        if (!TextUtils.isEmpty(str)) {
            return true;
        }
        this.pp = bm.rz().optString("ad_privacy_backup_url", "https://sf6-ttcdn-tos.pstatp.com/obj/ad-tetris-site/personal-privacy-page.html");
        return true;
    }

    private void df() {
        this.rg = (ImageView) findViewById(R.id.iv_privacy_back);
        this.df = (WebView) findViewById(R.id.privacy_webview);
        this.rg.setOnClickListener(new View.OnClickListener() { // from class: com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                pp.rg(EventConstants.Refer.LP_APP_PRIVACY_CLICK_CLOSE, AppPrivacyPolicyActivity.this.pt);
                AppPrivacyPolicyActivity.this.finish();
            }
        });
        WebSettings settings = this.df.getSettings();
        settings.setDefaultFontSize(16);
        settings.setCacheMode(-1);
        settings.setJavaScriptEnabled(true);
        settings.setDomStorageEnabled(true);
        if (Build.VERSION.SDK_INT >= 21) {
            settings.setMixedContentMode(0);
        }
        settings.setLoadWithOverviewMode(true);
        settings.setUseWideViewPort(true);
        settings.setSupportZoom(true);
        settings.setBuiltInZoomControls(true);
        settings.setDisplayZoomControls(false);
        settings.setSavePassword(false);
        settings.setAllowFileAccess(false);
        this.df.setWebViewClient(new WebViewClient() { // from class: com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity.2
            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
                return rg(webResourceRequest.getUrl());
            }

            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView webView, String str) {
                return rg(Uri.parse(str));
            }

            @Override // android.webkit.WebViewClient
            public boolean onRenderProcessGone(WebView webView, RenderProcessGoneDetail renderProcessGoneDetail) {
                if (Build.VERSION.SDK_INT < 26) {
                    return super.onRenderProcessGone(webView, renderProcessGoneDetail);
                }
                if (!renderProcessGoneDetail.didCrash()) {
                    com.ss.android.downloadlib.utils.bm.rg("System killed the WebView rendering process to reclaim memory. Recreating...");
                    if (webView != null) {
                        ((ViewGroup) webView.getParent()).removeView(webView);
                        webView.destroy();
                    }
                    return true;
                }
                com.ss.android.downloadlib.utils.bm.rg("The WebView rendering process crashed!");
                if (webView != null) {
                    ((ViewGroup) webView.getParent()).removeView(webView);
                    webView.destroy();
                }
                return true;
            }

            private boolean rg(Uri uri) {
                String scheme = uri.getScheme();
                return ("http".equals(scheme) || "https".equals(scheme)) ? false : true;
            }
        });
        rg(this.df);
        this.df.setScrollBarStyle(0);
        this.df.loadUrl(this.pp);
    }

    private void rg(WebView webView) {
        try {
            webView.removeJavascriptInterface("searchBoxJavaBridge_");
            webView.removeJavascriptInterface("accessibility");
            webView.removeJavascriptInterface("accessibilityTraversal");
        } catch (Throwable unused) {
        }
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        pp.rg(EventConstants.Refer.LP_APP_PRIVACY_CLICK_CLOSE, this.pt);
        super.onBackPressed();
    }
}
