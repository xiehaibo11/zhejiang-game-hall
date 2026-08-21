package com.bianfeng.paylib.ui;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.webkit.WebChromeClient;
import android.webkit.WebResourceRequest;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.LinearLayout;
import android.widget.Toast;
import com.bianfeng.paylib.YmnWebpaySdk;
import com.bianfeng.paylib.entity.YmnWxWebpayEntity;
import com.bianfeng.utilslib.UtilsSdk;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import cz.msebera.android.httpclient.HttpHeaders;
import java.util.HashMap;

public class WxWebPayActivty extends Activity {
    private LinearLayout linearLayout;
    private String url;
    private WebView webView;
    private String urlStartsWith = "";
    private int webOpenType = 0;
    private String wxUrl = "http://ipay.bianfeng.com";
    private boolean firstVisitWXH5PayUrl = true;

    public static void start(Context context, String str) {
        Intent intent = new Intent(context, (Class<?>) WxWebPayActivty.class);
        intent.putExtra("h5url", str);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    public static void start(Context context, YmnWxWebpayEntity ymnWxWebpayEntity) {
        Intent intent = new Intent(context, (Class<?>) WxWebPayActivty.class);
        intent.putExtra("h5url", ymnWxWebpayEntity.getRedirect_url());
        intent.putExtra("url_starts_with", ymnWxWebpayEntity.getUrl_starts_with());
        intent.putExtra("web_open_type", ymnWxWebpayEntity.getWeb_open_type());
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Window window = getWindow();
        requestWindowFeature(1);
        window.setFlags(1024, 1024);
        setContentView(UtilsSdk.getResourceManger().getId(this, "R.layout.activity_webpaysdk_wx"));
        this.url = getIntent().getStringExtra("h5url");
        if (getIntent().hasExtra("url_starts_with")) {
            this.urlStartsWith = getIntent().getStringExtra("url_starts_with");
        }
        if (getIntent().hasExtra("web_open_type")) {
            this.webOpenType = getIntent().getIntExtra("web_open_type", 0);
        }
        this.linearLayout = (LinearLayout) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_webview_wx_dialog"));
        findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_webview_wx_close")).setOnClickListener(new CloseListner());
        initView();
        initData();
    }

    private void initView() {
        this.webView = (WebView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_webview_wx"));
    }

    private void initData() {
        WebSettings settings = this.webView.getSettings();
        settings.setDomStorageEnabled(true);
        settings.setJavaScriptEnabled(true);
        settings.setBlockNetworkImage(false);
        settings.setJavaScriptCanOpenWindowsAutomatically(true);
        settings.setLoadsImagesAutomatically(true);
        this.webView.setWebChromeClient(new WebChromeClient());
        loadData();
        this.webView.setWebViewClient(new WebViewClient() {
            @Override
            public boolean shouldOverrideUrlLoading(WebView webView, String str) {
                WxWebPayActivty.this.toPay(str);
                return false;
            }

            @Override
            public boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
                WxWebPayActivty.this.url = webResourceRequest.getUrl().toString();
                WxWebPayActivty wxWebPayActivty = WxWebPayActivty.this;
                wxWebPayActivty.toPay(wxWebPayActivty.url);
                return false;
            }

            @Override
            public void onPageFinished(WebView webView, String str) {
                super.onPageFinished(webView, str);
                WxWebPayActivty.this.linearLayout.setVisibility(8);
            }
        });
    }

    private void loadData() {
        if (this.url.startsWith("http") || this.url.startsWith("https")) {
            if ("4.4.3".equals(Build.VERSION.RELEASE) || "4.4.4".equals(Build.VERSION.RELEASE)) {
                if (this.firstVisitWXH5PayUrl) {
                    this.webView.loadDataWithBaseURL(this.wxUrl, "<script>window.location.href=\"" + this.url + "\";</script>", "text/html", "utf-8", null);
                    this.firstVisitWXH5PayUrl = false;
                    return;
                }
                return;
            }
            HashMap map = new HashMap(1);
            map.put(HttpHeaders.REFERER, this.wxUrl);
            this.webView.loadUrl(this.url, map);
        }
    }

    private void toPay(String str) {
        if (str.startsWith(this.urlStartsWith)) {
            this.webView.setVisibility(8);
            YmnWebpaySdk.getInstance().payCallback("type_request_order", "下单响应");
            try {
                int i = this.webOpenType;
                if (i == 0) {
                    Intent intent = new Intent();
                    intent.setData(Uri.parse(str));
                    intent.setAction("android.intent.action.VIEW");
                    startActivity(intent);
                    finish();
                } else if (i == 1) {
                    Intent uri = Intent.parseUri(str, 1);
                    uri.addFlags(270532608);
                    startActivity(uri);
                    finish();
                }
            } catch (Exception unused) {
                Toast.makeText(this, "请安装微信或支付宝", 1).show();
                finish();
            }
        }
    }

    @Override
    protected void onDestroy() {
        WebView webView = this.webView;
        if (webView != null) {
            webView.removeAllViews();
            this.webView.destroy();
        }
        super.onDestroy();
    }

    private class CloseListner implements View.OnClickListener {
        private CloseListner() {
        }

        @Override
        public void onClick(View view) {
            WxWebPayActivty.this.finish();
        }
    }
}
