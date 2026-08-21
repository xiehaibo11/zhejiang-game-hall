package com.bianfeng.splitscreenlib.huodong;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.webkit.WebSettings;
import com.bianfeng.splitscreenlib.YmnH5GameSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.BridgeWebViewClient;
import com.tkay.core.common.res.d;

public class HuodongActivity extends Activity {
    private String url = "https://www.baidu.com";
    private BridgeWebView webView;

    public static void start(Context context) {
        context.startActivity(new Intent(context, (Class<?>) HuodongActivity.class));
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        UtilsSdk.getFullScreen().setFullScreen(this);
        setContentView(UtilsSdk.getResourceManger().getId(this, "R.layout.activity_ymnh5_sdk_webview"));
        UtilsSdk.getFullScreen().hideBar(this);
        initView();
        initData();
    }

    private void initView() {
        this.webView = (BridgeWebView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.ymnh5_sdk_bridge_webView"));
    }

    private void initData() {
        YmnH5GameSdk.getInstance().getCallback();
        BridgeWebView bridgeWebView = this.webView;
        if (bridgeWebView != null) {
            WebSettings settings = bridgeWebView.getSettings();
            if (Build.VERSION.SDK_INT >= 26) {
                settings.setSafeBrowsingEnabled(false);
            }
            settings.setJavaScriptEnabled(true);
            settings.setJavaScriptCanOpenWindowsAutomatically(true);
            settings.setAllowFileAccess(true);
            settings.setLayoutAlgorithm(WebSettings.LayoutAlgorithm.NARROW_COLUMNS);
            settings.setSupportZoom(true);
            settings.setBuiltInZoomControls(true);
            settings.setUseWideViewPort(true);
            settings.setSupportMultipleWindows(true);
            settings.setLoadWithOverviewMode(true);
            settings.setAppCacheEnabled(false);
            settings.setDatabaseEnabled(true);
            settings.setDomStorageEnabled(true);
            settings.setGeolocationEnabled(true);
            settings.setAppCacheMaxSize(Long.MAX_VALUE);
            settings.setCacheMode(1);
            settings.setPluginState(WebSettings.PluginState.ON_DEMAND);
            settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
        }
        this.webView.setLayerType(1, null);
        this.webView.setClickable(true);
        this.webView.getSettings().setJavaScriptEnabled(true);
        this.webView.setWebViewClient(new BridgeWebViewClient(this.webView));
        this.webView.loadUrl(this.url);
    }

    @Override
    protected void onPause() {
        super.onPause();
        this.webView.loadUrl(d.a);
    }

    @Override
    protected void onDestroy() {
        BridgeWebView bridgeWebView = this.webView;
        if (bridgeWebView != null) {
            bridgeWebView.removeAllViews();
            this.webView.destroy();
        }
        super.onDestroy();
    }
}
