package com.ss.android.downloadlib.addownload.compliance;

public class AppPrivacyPolicyActivity extends android.app.Activity {
    private android.webkit.WebView df;
    private java.lang.String pp;
    private long pt;
    private long q;
    private android.widget.ImageView rg;



    public AppPrivacyPolicyActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void df() {
            r5 = this;
            int r0 = com.bytedance.sdk.openadsdk.R.id.iv_privacy_back
            android.view.View r0 = r5.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r5.rg = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.privacy_webview
            android.view.View r0 = r5.findViewById(r0)
            android.webkit.WebView r0 = (android.webkit.WebView) r0
            r5.df = r0
            android.widget.ImageView r0 = r5.rg
            com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity$1 r1 = new com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity$1
            r1.<init>(r5)
            r0.setOnClickListener(r1)
            android.webkit.WebView r0 = r5.df
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 16
            r0.setDefaultFontSize(r1)
            r1 = -1
            r0.setCacheMode(r1)
            r1 = 1
            r0.setJavaScriptEnabled(r1)
            r0.setDomStorageEnabled(r1)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 0
            r4 = 21
            if (r2 < r4) goto L3e
            r0.setMixedContentMode(r3)
        L3e:
            r0.setLoadWithOverviewMode(r1)
            r0.setUseWideViewPort(r1)
            r0.setSupportZoom(r1)
            r0.setBuiltInZoomControls(r1)
            r0.setDisplayZoomControls(r3)
            r0.setSavePassword(r3)
            r0.setAllowFileAccess(r3)
            android.webkit.WebView r0 = r5.df
            com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity$2 r1 = new com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity$2
            r1.<init>(r5)
            r0.setWebViewClient(r1)
            android.webkit.WebView r0 = r5.df
            r5.rg(r0)
            android.webkit.WebView r0 = r5.df
            r0.setScrollBarStyle(r3)
            android.webkit.WebView r0 = r5.df
            java.lang.String r1 = r5.pp
            r0.loadUrl(r1)
            return
    }

    static long rg(com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity r2) {
            long r0 = r2.pt
            return r0
    }

    public static void rg(android.app.Activity r2, long r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity> r1 = com.ss.android.downloadlib.addownload.compliance.AppPrivacyPolicyActivity.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "app_info_id"
            r0.putExtra(r1, r3)
            r2.startActivity(r0)
            return
    }

    private void rg(android.webkit.WebView r2) {
            r1 = this;
            java.lang.String r0 = "searchBoxJavaBridge_"
            r2.removeJavascriptInterface(r0)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r0 = "accessibility"
            r2.removeJavascriptInterface(r0)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r0 = "accessibilityTraversal"
            r2.removeJavascriptInterface(r0)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    private boolean rg() {
            r4 = this;
            android.content.Intent r0 = r4.getIntent()
            java.lang.String r1 = "app_info_id"
            r2 = 0
            long r0 = r0.getLongExtra(r1, r2)
            r4.q = r0
            com.ss.android.downloadlib.addownload.compliance.q r0 = com.ss.android.downloadlib.addownload.compliance.q.rg()
            long r1 = r4.q
            com.ss.android.downloadlib.addownload.model.df r0 = r0.rg(r1)
            if (r0 != 0) goto L1c
            r0 = 0
            return r0
        L1c:
            long r1 = r0.df
            r4.pt = r1
            java.lang.String r0 = r0.rz
            r4.pp = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L38
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "ad_privacy_backup_url"
            java.lang.String r2 = "https://sf6-ttcdn-tos.pstatp.com/obj/ad-tetris-site/personal-privacy-page.html"
            java.lang.String r0 = r0.optString(r1, r2)
            r4.pp = r0
        L38:
            r0 = 1
            return r0
    }

    @Override
    public void onBackPressed() {
            r3 = this;
            long r0 = r3.pt
            java.lang.String r2 = "lp_app_privacy_click_close"
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r2, r0)
            super.onBackPressed()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            int r1 = com.bytedance.sdk.openadsdk.R.layout.ttdownloader_activity_app_privacy_policy
            r0.setContentView(r1)
            boolean r1 = r0.rg()
            if (r1 == 0) goto L12
            r0.df()
            goto L15
        L12:
            com.ss.android.socialbase.appdownloader.q.rg(r0)
        L15:
            return
    }
}
