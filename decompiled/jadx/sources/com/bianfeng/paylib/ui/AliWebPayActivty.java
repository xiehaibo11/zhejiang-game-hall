package com.bianfeng.paylib.ui;

import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.Window;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.bianfeng.baselib.BaseActivity;
import com.bianfeng.paylib.entity.YmnAliWebpayEntity;
import com.bianfeng.paylib.utils.YmnURLManager;
import com.bianfeng.utilslib.Logger;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeHandler;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.CallBackFunction;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes.dex */
public class AliWebPayActivty extends BaseActivity {
    private String url;
    private String urlStartsWith = "";
    private int webOpenType = 0;
    private BridgeWebView webView;

    public static void start(Context context, String str) {
        Intent intent = new Intent(context, (Class<?>) AliWebPayActivty.class);
        intent.putExtra("h5url", str);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    public static void start(Context context, YmnAliWebpayEntity ymnAliWebpayEntity) {
        Intent intent = new Intent(context, (Class<?>) AliWebPayActivty.class);
        intent.putExtra("h5url", ymnAliWebpayEntity.getBase64_html());
        intent.putExtra("url_starts_with", ymnAliWebpayEntity.getUrl_starts_with());
        intent.putExtra("web_open_type", ymnAliWebpayEntity.getWeb_open_type());
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Window window = getWindow();
        requestWindowFeature(1);
        window.setFlags(1024, 1024);
        setContentView(UtilsSdk.getResourceManger().getId(this, "R.layout.activity_webpaysdk_ali"));
        this.url = getIntent().getStringExtra("h5url");
        if (getIntent().hasExtra("url_starts_with")) {
            this.urlStartsWith = getIntent().getStringExtra("url_starts_with");
        }
        if (getIntent().hasExtra("web_open_type")) {
            this.webOpenType = getIntent().getIntExtra("web_open_type", 0);
        }
        initView();
        initData();
    }

    private void initView() {
        this.webView = (BridgeWebView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_webview"));
    }

    private void initData() {
        WebSettings settings = this.webView.getSettings();
        settings.setDomStorageEnabled(true);
        settings.setJavaScriptEnabled(true);
        settings.setBlockNetworkImage(false);
        settings.setJavaScriptCanOpenWindowsAutomatically(true);
        settings.setLoadsImagesAutomatically(true);
        this.webView.setWebChromeClient(new WebChromeClient());
        this.webView.getSettings().setTextZoom(100);
        this.webView.setWebViewClient(new WebViewClient() { // from class: com.bianfeng.paylib.ui.AliWebPayActivty.1
            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView webView, String str) {
                if (str == null) {
                    return false;
                }
                try {
                    if (str.startsWith(AliWebPayActivty.this.urlStartsWith)) {
                        int i = AliWebPayActivty.this.webOpenType;
                        if (i == 0) {
                            AliWebPayActivty.this.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                            AliWebPayActivty.this.finish();
                            return true;
                        }
                        if (i == 1) {
                            Intent uri = Intent.parseUri(str, 1);
                            uri.addFlags(270532608);
                            AliWebPayActivty.this.startActivity(uri);
                            AliWebPayActivty.this.finish();
                            return true;
                        }
                    }
                    webView.loadUrl(str);
                } catch (Exception unused) {
                }
                return true;
            }

            @Override // android.webkit.WebViewClient
            public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
                super.onPageStarted(webView, str, bitmap);
                if (YmnURLManager.return_url.equalsIgnoreCase(str)) {
                    AliWebPayActivty.this.finish();
                }
            }
        });
        this.webView.loadDataWithBaseURL(null, this.url, "text/html", "utf-8", null);
        this.webView.registerHandler("closePayResultWindow", new BridgeHandler() { // from class: com.bianfeng.paylib.ui.AliWebPayActivty.2
            @Override // com.github.lzyzsd.jsbridge.BridgeHandler
            public void handler(String str, CallBackFunction callBackFunction) {
                Logger.getInstance().e("closePayResultWindow");
                UtilsSdk.getReflexCall().onCallWithHashmap(UtilsSdk.getClassNameSet().getLoginCallback(), "closePayResultWindow");
                AliWebPayActivty.this.finish();
            }
        });
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        BridgeWebView bridgeWebView = this.webView;
        if (bridgeWebView != null) {
            bridgeWebView.removeAllViews();
            this.webView.destroy();
        }
        super.onDestroy();
    }

    @Override // com.bianfeng.baselib.BaseActivity, android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (i == 4 && this.webView.canGoBack()) {
            this.webView.goBack();
            finish();
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }
}
