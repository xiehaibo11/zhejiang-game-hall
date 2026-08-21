package com.bianfeng.splitscreenwindow.ui;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.widget.Toast;
import com.bianfeng.splitscreenwindow.SplitScreenSdk;
import com.bianfeng.thridlibrary.GsonUtils;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.AppConfigUtils;
import com.bianfeng.utilslib.DensityUtils;
import com.bianfeng.utilslib.UtilsSdk;
import com.github.lzyzsd.jsbridge.BridgeHandler;
import com.github.lzyzsd.jsbridge.BridgeWebView;
import com.github.lzyzsd.jsbridge.CallBackFunction;

public class RegWebViewMethodMaganer {
    private Activity activity;
    private Activity hostActivity;
    private BridgeWebView webView;

    public RegWebViewMethodMaganer(BridgeWebView bridgeWebView, Activity activity, Activity activity2) {
        this.webView = bridgeWebView;
        this.activity = activity;
        this.hostActivity = activity2;
    }

    public void reg() {
        payActionFromWeb();
        transUserData();
        closeH5Game();
        sendError();
        sendResource();
        getBottomHeight();
        getHeight();
        isSupportDownload();
        downLoadApp();
        getVersion();
    }

    public void unReg() {
        this.webView = null;
        this.activity = null;
    }

    private void payActionFromWeb() {
        this.webView.registerHandler("payActionFromWeb", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                UtilsSdk.getLogger().i("payActionFromWeb---" + str);
                if (RegWebViewMethodMaganer.this.hostActivity == null) {
                    Toast.makeText(RegWebViewMethodMaganer.this.activity, "网络断开，请重新启动游戏~", 1).show();
                } else {
                    SplitScreenSdk.getInstance().payWeb(str);
                }
            }
        });
    }

    private void transUserData() {
        this.webView.registerHandler("transUserData", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                UtilsSdk.getLogger().i("transUserData-->" + str);
                ThridSdk.getYmnDatafun().onClickWithH5(str);
            }
        });
    }

    private void closeH5Game() {
        this.webView.registerHandler("closeH5Game", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                UtilsSdk.getReflexCall().onCallWithHashmap(UtilsSdk.getClassNameSet().getLoginCallback(), "GameClose");
                RegWebViewMethodMaganer.this.activity.finish();
            }
        });
    }

    private void sendError() {
        this.webView.registerHandler("sendError", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
            }
        });
    }

    private void sendResource() {
        this.webView.registerHandler("sendResource", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
            }
        });
    }

    private void getHeight() {
        this.webView.registerHandler("getHeight", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                String str2 = DensityUtils.px2dp(RegWebViewMethodMaganer.this.activity, UtilsSdk.getFullScreen().getBarSize(RegWebViewMethodMaganer.this.activity)) + "";
                UtilsSdk.getLogger().i("获取高度-->" + str2);
                callBackFunction.onCallBack(str2);
                UtilsSdk.getFullScreen().hideBar(RegWebViewMethodMaganer.this.activity);
            }
        });
    }

    private void getBottomHeight() {
        this.webView.registerHandler("getBottomHeight", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                String str2 = DensityUtils.px2dp(RegWebViewMethodMaganer.this.activity, UtilsSdk.getFullScreen().getBoomBarSize(RegWebViewMethodMaganer.this.activity)) + "";
                UtilsSdk.getLogger().i("获取高度-->" + str2);
                callBackFunction.onCallBack(str2);
            }
        });
    }

    private void isSupportDownload() {
        this.webView.registerHandler("isSupportDownLoadApp", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                UtilsSdk.getLogger().i("是否支持下载");
                callBackFunction.onCallBack("true");
            }
        });
    }

    private void downLoadApp() {
        this.webView.registerHandler("downLoadApp", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                UtilsSdk.getLogger().i("下载--->" + str);
                try {
                    Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(GsonUtils.getInstance().fromJson(str).get("app_url")));
                    intent.setFlags(805306368);
                    RegWebViewMethodMaganer.this.activity.startActivity(intent);
                } catch (Exception e) {
                    e.getMessage();
                }
            }
        });
    }

    private void getVersion() {
        this.webView.registerHandler("getVersion", new BridgeHandler() {
            @Override
            public void handler(String str, CallBackFunction callBackFunction) {
                String sdkVersion = AppConfigUtils.getInstance().getSdkVersion();
                UtilsSdk.getLogger().i("获取版本号" + sdkVersion);
                callBackFunction.onCallBack(sdkVersion);
            }
        });
    }
}
