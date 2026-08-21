package com.bianfeng.paylib.ui;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.webkit.WebSettings;
import com.bianfeng.paylib.utils.YmnURLManager;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeHandler;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.BridgeWebViewClient;
import com.github.lzyzsd.jsbridge.CallBackFunction;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONException;
import org.json.JSONObject;

public class PaymentWebActivity extends Activity {
    private String url = "";
    private BridgeWebView webView;

    public static void start(Context context, String str) {
        Intent intent = new Intent(context, (Class<?>) PaymentWebActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("h5url", str);
        context.startActivity(intent);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        UtilsSdk.getActivityHook().hookOrientation(this);
        UtilsSdk.getFullScreen().setFullScreen(this);
        setContentView(UtilsSdk.getResourceManger().getId(this, "R.layout.activity_payment_web"));
        Intent intent = getIntent();
        if (intent != null) {
            this.url = YmnURLManager.getPaymentUrl() + intent.getStringExtra("h5url");
            UtilsSdk.getLogger().i("url---" + this.url);
        }
        UtilsSdk.getFullScreen().hideBar(this);
        initView();
        initData();
    }

    private void initView() {
        this.webView = (BridgeWebView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.payment_web_bridge_webView"));
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
        this.webView.setLayerType(2, null);
        this.webView.setClickable(true);
        this.webView.getSettings().setJavaScriptEnabled(true);
        this.webView.getSettings().setTextZoom(100);
        this.webView.setWebViewClient(new BridgeWebViewClient(this.webView));
        this.webView.loadUrl(this.url);
        this.webView.registerHandler("payInH5", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                try {
                    WebpaysdkApi.getInstance().getCallback().buyNext(new JSONObject(str).getString("pay_type"));
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                UtilsSdk.getLogger().i("callBackFromH5：payInH5 " + str);
                PaymentWebActivity.this.finish();
            }
        });
        this.webView.registerHandler("closePayWindow", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                UtilsSdk.getLogger().i("callBackFromH5：" + str);
                PaymentWebActivity.this.finish();
            }
        });
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
