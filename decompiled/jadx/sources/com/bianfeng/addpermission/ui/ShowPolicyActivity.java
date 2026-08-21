package com.bianfeng.addpermission.ui;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ImageView;
import android.widget.Toast;
import com.bianfeng.addpermission.common.DensityUtils;
import com.bianfeng.addpermission.common.PolicyConstantsUtils;
import com.bianfeng.addpermission.common.ResourceManger;
import com.bianfeng.addpermission.common.SharedPreferencesUtils;

/* JADX INFO: loaded from: classes.dex */
public class ShowPolicyActivity extends Dialog implements View.OnClickListener {
    private ImageView cancel_btn;
    private Activity context;
    private String type;
    private WebView webView;
    private WebViewClient webViewClient;

    public ShowPolicyActivity(Activity activity, String str) {
        super(activity, ResourceManger.getId(activity, "R.style.DialogActivityTheme"));
        this.webViewClient = new WebViewClient() { // from class: com.bianfeng.addpermission.ui.ShowPolicyActivity.1
            @Override // android.webkit.WebViewClient
            public void onPageFinished(WebView webView, String str2) {
            }

            @Override // android.webkit.WebViewClient
            public void onPageStarted(WebView webView, String str2, Bitmap bitmap) {
            }

            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView webView, String str2) {
                return super.shouldOverrideUrlLoading(webView, str2);
            }
        };
        this.context = activity;
        this.type = str;
        setContentView(ResourceManger.getId(activity, "R.layout.activity_show_policy_v2"));
    }

    public static void start(Activity activity, String str) {
        new ShowPolicyActivity(activity, str).show();
        SharedPreferencesUtils.getInstance(activity).setPolicyDialogShow(true);
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Window window = getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        DisplayMetrics displayMetrics = this.context.getResources().getDisplayMetrics();
        setCancelable(false);
        if (DensityUtils.isPortrait(this.context)) {
            attributes.height = (int) (((double) displayMetrics.heightPixels) * 0.75d);
            attributes.width = (int) (((double) displayMetrics.widthPixels) * 0.85d);
        } else {
            attributes.height = (int) (((double) displayMetrics.heightPixels) * 0.9d);
            attributes.width = (int) (((double) displayMetrics.widthPixels) * 0.8d);
        }
        window.setAttributes(attributes);
        ImageView imageView = (ImageView) findViewById(ResourceManger.getId(this.context, "R.id.dialog_policy_close"));
        this.cancel_btn = imageView;
        imageView.setOnClickListener(this);
        this.webView = (WebView) findViewById(ResourceManger.getId(this.context, "R.id.show_policy_web"));
        initdata();
    }

    private void initdata() {
        WebView webView = this.webView;
        if (webView != null) {
            WebSettings settings = webView.getSettings();
            if (Build.VERSION.SDK_INT >= 26) {
                settings.setSafeBrowsingEnabled(false);
            }
            settings.setJavaScriptEnabled(true);
            settings.setJavaScriptCanOpenWindowsAutomatically(true);
            settings.setAllowFileAccess(true);
            settings.setLayoutAlgorithm(WebSettings.LayoutAlgorithm.NARROW_COLUMNS);
            settings.setSupportZoom(true);
            settings.setBuiltInZoomControls(true);
            settings.setDisplayZoomControls(false);
            settings.setUseWideViewPort(false);
            settings.setSupportMultipleWindows(true);
            settings.setLoadWithOverviewMode(false);
            settings.setAppCacheEnabled(false);
            settings.setDatabaseEnabled(true);
            settings.setDomStorageEnabled(true);
            settings.setGeolocationEnabled(true);
            settings.setTextSize(WebSettings.TextSize.NORMAL);
            settings.setAppCacheMaxSize(Long.MAX_VALUE);
            settings.setCacheMode(1);
            settings.setPluginState(WebSettings.PluginState.ON_DEMAND);
            settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
        }
        this.webView.setBackgroundColor(0);
        this.webView.getSettings().setTextZoom(100);
        this.webView.setLayerType(2, null);
        this.webView.setClickable(true);
        this.webView.getSettings().setJavaScriptEnabled(true);
        this.webView.setWebViewClient(this.webViewClient);
        this.webView.loadUrl(PolicyConstantsUtils.getUrl(this.context, this.type));
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == ResourceManger.getId(this.context, "R.id.dialog_policy_close")) {
            dismiss();
            SharedPreferencesUtils.getInstance(this.context).setPolicyDialogShow(false);
        }
    }

    public static void openBrowser(Context context, String str) {
        Intent intent = new Intent();
        intent.setAction("android.intent.action.VIEW");
        intent.setData(Uri.parse(str));
        if (intent.resolveActivity(context.getPackageManager()) != null) {
            intent.resolveActivity(context.getPackageManager());
            context.startActivity(Intent.createChooser(intent, "请选择浏览器"));
        } else {
            Toast.makeText(context, "Toast.makeText(context,链接错误或无浏览器)", 1);
        }
    }
}
