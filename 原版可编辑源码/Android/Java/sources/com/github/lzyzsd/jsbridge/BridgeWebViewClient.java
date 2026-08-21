package com.github.lzyzsd.jsbridge;

import android.graphics.Bitmap;
import android.os.Build;
import android.util.Log;
import android.webkit.WebResourceError;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import java.net.URLDecoder;
import java.util.Iterator;

public class BridgeWebViewClient extends WebViewClient {
    private BridgeWebView webView;

    protected void onCustomPageFinishd(WebView webView, String str) {
    }

    protected boolean onCustomShouldOverrideUrlLoading(String str) {
        return false;
    }

    public BridgeWebViewClient(BridgeWebView bridgeWebView) {
        this.webView = bridgeWebView;
    }

    @Override
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        try {
            str = URLDecoder.decode(str, "UTF-8");
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (str.startsWith("yy://return/")) {
            this.webView.handlerReturnData(str);
            return true;
        }
        if (str.startsWith("yy://")) {
            this.webView.flushMessageQueue();
            return true;
        }
        if (onCustomShouldOverrideUrlLoading(str)) {
            return true;
        }
        return super.shouldOverrideUrlLoading(webView, str);
    }

    @Override
    public boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        if (Build.VERSION.SDK_INT >= 24) {
            String string = webResourceRequest.getUrl().toString();
            try {
                string = URLDecoder.decode(string, "UTF-8");
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (string.startsWith("yy://return/")) {
                this.webView.handlerReturnData(string);
                return true;
            }
            if (string.startsWith("yy://")) {
                this.webView.flushMessageQueue();
                return true;
            }
            if (onCustomShouldOverrideUrlLoading(string)) {
                return true;
            }
            return super.shouldOverrideUrlLoading(webView, webResourceRequest);
        }
        return super.shouldOverrideUrlLoading(webView, webResourceRequest);
    }

    @Override
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
    }

    @Override
    public void onPageFinished(WebView webView, String str) throws Throwable {
        super.onPageFinished(webView, str);
        BridgeUtil.webViewLoadLocalJs(webView, BridgeWebView.toLoadJs);
        if (this.webView.getStartupMessage() != null) {
            Iterator<Message> it = this.webView.getStartupMessage().iterator();
            while (it.hasNext()) {
                this.webView.dispatchMessage(it.next());
            }
            this.webView.setStartupMessage(null);
        }
        onCustomPageFinishd(webView, str);
    }

    @Override
    public void onReceivedError(WebView webView, WebResourceRequest webResourceRequest, WebResourceError webResourceError) {
        super.onReceivedError(webView, webResourceRequest, webResourceError);
        Log.e("ymnsdk: ", "onReceivedError" + webResourceRequest.toString() + "--" + webResourceError.toString());
    }
}
