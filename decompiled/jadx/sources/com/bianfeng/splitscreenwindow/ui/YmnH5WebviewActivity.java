package com.bianfeng.splitscreenwindow.ui;

import android.app.Activity;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.view.KeyEvent;
import android.webkit.WebSettings;
import com.bianfeng.baselib.BaseActivity;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.BridgeWebViewClient;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes.dex */
public class YmnH5WebviewActivity extends BaseActivity {
    private static Activity hostActivity;
    private RegWebViewMethodMaganer methodMaganer;
    private String url;
    private BridgeWebView webView;

    public static void start(Activity activity, String str) {
        hostActivity = activity;
        Intent intent = new Intent(activity, (Class<?>) YmnH5WebviewActivity.class);
        intent.putExtra("h5url", str);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        activity.startActivity(intent);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        UtilsSdk.getFullScreen().setFullScreen(this);
        setContentView(UtilsSdk.getResourceManger().getId(this, "R.layout.activity_ymnh5_sdk_webview"));
        Intent intent = getIntent();
        if (intent != null) {
            this.url = intent.getStringExtra("h5url");
        }
        initView();
        initData();
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        UtilsSdk.getLogger().e("webview onStart");
        AndroidBug5497Workaround.getInstance(this).setListener();
    }

    private void initView() {
        this.webView = (BridgeWebView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.ymnh5_sdk_bridge_webView"));
        this.methodMaganer = new RegWebViewMethodMaganer(this.webView, this, hostActivity);
    }

    private void initData() {
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
            settings.setSupportZoom(false);
            settings.setBuiltInZoomControls(false);
            settings.setUseWideViewPort(true);
            settings.setSupportMultipleWindows(true);
            settings.setLoadWithOverviewMode(true);
            settings.setAppCacheEnabled(false);
            settings.setDatabaseEnabled(true);
            settings.setDomStorageEnabled(true);
            settings.setGeolocationEnabled(true);
            settings.setAppCacheMaxSize(Long.MAX_VALUE);
            settings.setMediaPlaybackRequiresUserGesture(false);
            settings.setCacheMode(1);
            settings.setPluginState(WebSettings.PluginState.ON);
            settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
            if (Build.VERSION.SDK_INT >= 21) {
                settings.setMixedContentMode(0);
            }
        }
        this.webView.setLayerType(2, null);
        this.webView.setClickable(true);
        this.webView.getSettings().setJavaScriptEnabled(true);
        this.webView.setWebViewClient(new BridgeWebViewClient(this.webView));
        this.webView.loadUrl(this.url);
        this.methodMaganer.reg();
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        UtilsSdk.getLogger().e("webview onStop");
        AndroidBug5497Workaround.getInstance(this).removeListener();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        BridgeWebView bridgeWebView = this.webView;
        if (bridgeWebView != null) {
            bridgeWebView.removeAllViews();
            this.webView.destroy();
        }
        RegWebViewMethodMaganer regWebViewMethodMaganer = this.methodMaganer;
        if (regWebViewMethodMaganer != null) {
            regWebViewMethodMaganer.unReg();
        }
        super.onDestroy();
    }

    @Override // com.bianfeng.baselib.BaseActivity, android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (i == 4 && this.webView.canGoBack()) {
            this.webView.goBack();
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }
}
