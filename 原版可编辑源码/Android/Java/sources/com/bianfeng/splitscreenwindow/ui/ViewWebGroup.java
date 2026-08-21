package com.bianfeng.splitscreenwindow.ui;

import android.app.Activity;
import android.os.Build;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebSettings;
import android.widget.RelativeLayout;
import com.bianfeng.customwidgetlib.SuspendIconView;
import com.bianfeng.splitscreenwindow.ShowType;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.thridlibrary.datafun.YmnDatafunUtils;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeHandler;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.BridgeWebViewClient;
import com.github.lzyzsd.jsbridge.CallBackFunction;

public class ViewWebGroup {
    private SuspendIconView iconView;
    private RelativeLayout mFloatLayout;
    private BridgeWebView mWebView;
    private ViewWebInterface webInterface;

    public interface ViewWebInterface {
        void onPay(String str);

        void onRemove();

        void showFenping(ShowType showType);

        void showNotityDailog();

        void showQuanping(ShowType showType);
    }

    public void setWebInterface(ViewWebInterface viewWebInterface) {
        this.webInterface = viewWebInterface;
    }

    public ViewWebGroup(Activity activity) {
        RelativeLayout relativeLayout = (RelativeLayout) LayoutInflater.from(activity).inflate(UtilsSdk.getResourceManger().getId(activity, "R.layout.activity_screen"), (ViewGroup) null);
        this.mFloatLayout = relativeLayout;
        this.mWebView = (BridgeWebView) relativeLayout.findViewById(UtilsSdk.getResourceManger().getId(activity, "R.id.screen_webview"));
        this.iconView = (SuspendIconView) this.mFloatLayout.findViewById(UtilsSdk.getResourceManger().getId(activity, "R.id.screen_game_icon"));
        this.mFloatLayout.measure(View.MeasureSpec.makeMeasureSpec(0, 0), View.MeasureSpec.makeMeasureSpec(0, 0));
        setupView(activity);
    }

    public RelativeLayout getFloatLayout() {
        return this.mFloatLayout;
    }

    private void setupView(Activity activity) {
        BridgeWebView bridgeWebView = this.mWebView;
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
        this.mWebView.setLayerType(2, null);
        this.mWebView.setClickable(true);
        this.mWebView.getSettings().setJavaScriptEnabled(true);
        this.mWebView.setWebViewClient(new BridgeWebViewClient(this.mWebView));
        this.iconView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if (ViewWebGroup.this.iconView.getTag().toString().trim().equalsIgnoreCase("全屏")) {
                    ViewWebGroup.this.webInterface.showQuanping(ShowType.QUANPING_LAND);
                } else {
                    ViewWebGroup.this.webInterface.showFenping(ShowType.FENPING_LAND);
                }
            }
        });
        registerHandler(activity);
    }

    private void registerHandler(Activity activity) {
        this.mWebView.registerHandler("payActionFromWeb", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                ViewWebGroup.this.webInterface.onPay(str);
            }
        });
        this.mWebView.registerHandler("transUserData", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                ThridSdk.getYmnDatafun().onClickWithH5(str);
            }
        });
        this.mWebView.registerHandler("closeH5Game", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                if (UtilsSdk.getSharedPreferences().getBoolean("enterGame")) {
                    ViewWebGroup.this.webInterface.showNotityDailog();
                    return;
                }
                ThridSdk.getYmnDatafun().onClickWithH5Fenping(YmnDatafunUtils.event_h5_finping);
                UtilsSdk.getReflexCall().onCallWithHashmap(UtilsSdk.getClassNameSet().getLoginCallback(), "GameClose");
                ViewWebGroup.this.webInterface.onRemove();
            }
        });
    }

    public void show(String str) {
        this.mWebView.loadUrl(str);
    }

    public void setIconViewVisibility() {
        this.iconView.setVisibility(0);
    }

    public void setIconViewRotation(float f) {
        this.iconView.setRotation(f);
    }

    public void setIconViewTag(String str) {
        this.iconView.setTag(str);
    }
}
