package com.bianfeng.addpermission.ui;

public class ShowPolicyActivity extends android.app.Dialog implements android.view.View.OnClickListener {
    private android.widget.ImageView cancel_btn;
    private android.app.Activity context;
    private java.lang.String type;
    private android.webkit.WebView webView;
    private android.webkit.WebViewClient webViewClient;


    public ShowPolicyActivity(android.app.Activity r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "R.style.DialogActivityTheme"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r0)
            r1.<init>(r2, r0)
            com.bianfeng.addpermission.ui.ShowPolicyActivity$1 r0 = new com.bianfeng.addpermission.ui.ShowPolicyActivity$1
            r0.<init>(r1)
            r1.webViewClient = r0
            r1.context = r2
            r1.type = r3
            java.lang.String r3 = "R.layout.activity_show_policy_v2"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r3)
            r1.setContentView(r2)
            return
    }

    private void initdata() {
            r5 = this;
            android.webkit.WebView r0 = r5.webView
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L59
            android.webkit.WebSettings r0 = r0.getSettings()
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 26
            if (r3 < r4) goto L13
            r0.setSafeBrowsingEnabled(r1)
        L13:
            r0.setJavaScriptEnabled(r2)
            r0.setJavaScriptCanOpenWindowsAutomatically(r2)
            r0.setAllowFileAccess(r2)
            android.webkit.WebSettings$LayoutAlgorithm r3 = android.webkit.WebSettings.LayoutAlgorithm.NARROW_COLUMNS
            r0.setLayoutAlgorithm(r3)
            r0.setSupportZoom(r2)
            r0.setBuiltInZoomControls(r2)
            r0.setDisplayZoomControls(r1)
            r0.setUseWideViewPort(r1)
            r0.setSupportMultipleWindows(r2)
            r0.setLoadWithOverviewMode(r1)
            r0.setAppCacheEnabled(r1)
            r0.setDatabaseEnabled(r2)
            r0.setDomStorageEnabled(r2)
            r0.setGeolocationEnabled(r2)
            android.webkit.WebSettings$TextSize r3 = android.webkit.WebSettings.TextSize.NORMAL
            r0.setTextSize(r3)
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.setAppCacheMaxSize(r3)
            r0.setCacheMode(r2)
            android.webkit.WebSettings$PluginState r3 = android.webkit.WebSettings.PluginState.ON_DEMAND
            r0.setPluginState(r3)
            android.webkit.WebSettings$RenderPriority r3 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r3)
        L59:
            android.webkit.WebView r0 = r5.webView
            r0.setBackgroundColor(r1)
            android.webkit.WebView r0 = r5.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 100
            r0.setTextZoom(r1)
            android.webkit.WebView r0 = r5.webView
            r1 = 2
            r3 = 0
            r0.setLayerType(r1, r3)
            android.webkit.WebView r0 = r5.webView
            r0.setClickable(r2)
            android.webkit.WebView r0 = r5.webView
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setJavaScriptEnabled(r2)
            android.webkit.WebView r0 = r5.webView
            android.webkit.WebViewClient r1 = r5.webViewClient
            r0.setWebViewClient(r1)
            android.app.Activity r0 = r5.context
            java.lang.String r1 = r5.type
            java.lang.String r0 = com.bianfeng.addpermission.common.PolicyConstantsUtils.getUrl(r0, r1)
            android.webkit.WebView r1 = r5.webView
            r1.loadUrl(r0)
            return
    }

    public static void openBrowser(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.setAction(r1)
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0.setData(r3)
            android.content.pm.PackageManager r3 = r2.getPackageManager()
            android.content.ComponentName r3 = r0.resolveActivity(r3)
            if (r3 == 0) goto L2c
            android.content.pm.PackageManager r3 = r2.getPackageManager()
            r0.resolveActivity(r3)
            java.lang.String r3 = "请选择浏览器"
            android.content.Intent r3 = android.content.Intent.createChooser(r0, r3)
            r2.startActivity(r3)
            goto L32
        L2c:
            r3 = 1
            java.lang.String r0 = "Toast.makeText(context,链接错误或无浏览器)"
            android.widget.Toast.makeText(r2, r0, r3)
        L32:
            return
    }

    public static void start(android.app.Activity r1, java.lang.String r2) {
            com.bianfeng.addpermission.ui.ShowPolicyActivity r0 = new com.bianfeng.addpermission.ui.ShowPolicyActivity
            r0.<init>(r1, r2)
            r0.show()
            com.bianfeng.addpermission.common.SharedPreferencesUtils r1 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r1)
            r2 = 1
            r1.setPolicyDialogShow(r2)
            return
    }

    @Override
    public void onClick(android.view.View r3) {
            r2 = this;
            int r3 = r3.getId()
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "R.id.dialog_policy_close"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            if (r3 != r0) goto L1b
            r2.dismiss()
            android.app.Activity r3 = r2.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r3 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r3)
            r0 = 0
            r3.setPolicyDialogShow(r0)
        L1b:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            super.onCreate(r7)
            android.view.Window r7 = r6.getWindow()
            android.view.WindowManager$LayoutParams r0 = r7.getAttributes()
            android.app.Activity r1 = r6.context
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r2 = 0
            r6.setCancelable(r2)
            android.app.Activity r2 = r6.context
            boolean r2 = com.bianfeng.addpermission.common.DensityUtils.isPortrait(r2)
            if (r2 == 0) goto L39
            int r2 = r1.heightPixels
            double r2 = (double) r2
            r4 = 4604930618986332160(0x3fe8000000000000, double:0.75)
            double r2 = r2 * r4
            int r2 = (int) r2
            r0.height = r2
            int r1 = r1.widthPixels
            double r1 = (double) r1
            r3 = 4605831338911806259(0x3feb333333333333, double:0.85)
            double r1 = r1 * r3
            int r1 = (int) r1
            r0.width = r1
            goto L53
        L39:
            int r2 = r1.heightPixels
            double r2 = (double) r2
            r4 = 4606281698874543309(0x3feccccccccccccd, double:0.9)
            double r2 = r2 * r4
            int r2 = (int) r2
            r0.height = r2
            int r1 = r1.widthPixels
            double r1 = (double) r1
            r3 = 4605380978949069210(0x3fe999999999999a, double:0.8)
            double r1 = r1 * r3
            int r1 = (int) r1
            r0.width = r1
        L53:
            r7.setAttributes(r0)
            android.app.Activity r7 = r6.context
            java.lang.String r0 = "R.id.dialog_policy_close"
            int r7 = com.bianfeng.addpermission.common.ResourceManger.getId(r7, r0)
            android.view.View r7 = r6.findViewById(r7)
            android.widget.ImageView r7 = (android.widget.ImageView) r7
            r6.cancel_btn = r7
            r7.setOnClickListener(r6)
            android.app.Activity r7 = r6.context
            java.lang.String r0 = "R.id.show_policy_web"
            int r7 = com.bianfeng.addpermission.common.ResourceManger.getId(r7, r0)
            android.view.View r7 = r6.findViewById(r7)
            android.webkit.WebView r7 = (android.webkit.WebView) r7
            r6.webView = r7
            r6.initdata()
            return
    }
}
