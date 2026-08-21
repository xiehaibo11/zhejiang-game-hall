package com.bianfeng.roomlib.ui;

import android.app.Activity;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.view.KeyEvent;
import android.webkit.WebSettings;
import com.bianfeng.roomlib.YmnH5GameRoomSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.BridgeWebViewClient;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class GameRoomWebActivity extends Activity {
    private String cp;
    private RegWebViewMethodMaganer methodMaganer;
    private String url;
    private String userid;
    private BridgeWebView webView;

    public static void start(Activity activity, String str, String str2, String str3) {
        Intent intent = new Intent(activity, (Class<?>) GameRoomWebActivity.class);
        intent.putExtra("h5url", str);
        intent.putExtra("cp", str2);
        intent.putExtra("userid", str3);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        activity.startActivity(intent);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        UtilsSdk.getActivityHook().hookOrientation(this);
        UtilsSdk.getFullScreen().setFullScreen(this);
        UtilsSdk.getDensityUtils().setDefault(this);
        setContentView(UtilsSdk.getResourceManger().getId(this, "R.layout.activity_gameroom_web"));
        Intent intent = getIntent();
        if (intent != null) {
            this.url = intent.getStringExtra("h5url");
            this.cp = intent.getStringExtra("cp");
            this.userid = intent.getStringExtra("userid");
        }
        UtilsSdk.getFullScreen().hideBar(this);
        initView();
        initData();
    }

    private void initView() {
        this.webView = (BridgeWebView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.gameroom_web_bridge_webView"));
        RegWebViewMethodMaganer regWebViewMethodMaganer = new RegWebViewMethodMaganer(this.webView, this, this.cp, this.userid);
        this.methodMaganer = regWebViewMethodMaganer;
        regWebViewMethodMaganer.reg();
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
        this.webView.setBackgroundColor(0);
        this.webView.getSettings().setTextZoom(100);
        this.webView.setLayerType(2, null);
        this.webView.setClickable(true);
        this.webView.getSettings().setJavaScriptEnabled(true);
        this.webView.setWebViewClient(new BridgeWebViewClient(this.webView));
        this.webView.loadUrl(this.url);
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

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (i == 4) {
            YmnH5GameRoomSdk.getInstance().getCallback().onClose();
        }
        return super.onKeyDown(i, keyEvent);
    }
}
