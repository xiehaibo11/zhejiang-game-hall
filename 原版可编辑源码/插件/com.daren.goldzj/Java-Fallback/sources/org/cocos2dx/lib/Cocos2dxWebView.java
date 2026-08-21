package org.cocos2dx.lib;

import android.annotation.SuppressLint;
import android.content.Context;
import android.util.Log;
import android.webkit.JavascriptInterface;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import java.net.URI;
import java.util.concurrent.CountDownLatch;

public class Cocos2dxWebView extends WebView {
    private static final String TAG = null;
    private String mJSScheme;
    private int mViewTag;

    class Cocos2dxWebViewClient extends WebViewClient {
        final Cocos2dxWebView this$0;

        Cocos2dxWebViewClient(Cocos2dxWebView r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean shouldOverrideUrlLoading(WebView r6, final String r7) {
            Cocos2dxActivity r62 = (Cocos2dxActivity) this.this$0.getContext();
            URI r1 = URI.create(r7);     // Catch: Exception -> L9
            if (r1 != null) goto L6;
        L10:
            boolean[] r12 = {true};
            CountDownLatch r3 = new CountDownLatch(1);
            r62.runOnGLThread(new ShouldStartLoadingWorker(r3, r12, Cocos2dxWebView.access$100(this.this$0), r7));
            r3.await();     // Catch: InterruptedException -> L13
        L15:
            return r12[0];
        L13:
            Log.d(Cocos2dxWebView.access$200(), "'shouldOverrideUrlLoading' failed");
            goto L15
        L6:
            if (r1.getScheme().equals(Cocos2dxWebView.access$000(this.this$0)) == false) goto L10;
            r62.runOnGLThread(new 1(this, r7));     // Catch: Exception -> L9
            return true;
        L9:
            Log.d(Cocos2dxWebView.access$200(), "Failed to create URI from url");
            goto L10
        }

        @Override
        public void onPageFinished(WebView r2, final String r3) {
            super.onPageFinished(r2, r3);
            ((Cocos2dxActivity) this.this$0.getContext()).runOnGLThread(new 2(this, r3));
        }

        @Override
        public void onReceivedError(WebView r1, int r2, String r3, final String r4) {
            super.onReceivedError(r1, r2, r3, r4);
            ((Cocos2dxActivity) this.this$0.getContext()).runOnGLThread(new 3(this, r4));
        }
    }

    public class TyWebview2JsInterface {
        final Cocos2dxWebView this$0;

        public TyWebview2JsInterface(Cocos2dxWebView r1) {
            this.this$0 = r1;
        }

        @JavascriptInterface
        public void CallNativeJSFunction(int r2, String r3) {
            ((Cocos2dxActivity) Cocos2dxActivity.getContext()).CallJSFuncByEvent(r2, r3);
        }
    }

    static String access$000(Cocos2dxWebView r0) {
        return r0.mJSScheme;
    }

    static int access$100(Cocos2dxWebView r0) {
        return r0.mViewTag;
    }

    static String access$200() {
        return TAG;
    }

    static {
        TAG = Cocos2dxWebViewHelper.class.getSimpleName();
    }

    public Cocos2dxWebView(Context r2) {
        this(r2, -1);
    }

    @SuppressLint({"SetJavaScriptEnabled"})
    public Cocos2dxWebView(Context r5, int r6) {
        super(r5);
        this.mViewTag = r6;
        this.mJSScheme = "";
        setFocusable(true);
        setFocusableInTouchMode(true);
        getSettings().setSupportZoom(false);
        getSettings().setDomStorageEnabled(true);
        getSettings().setJavaScriptEnabled(true);
        getClass().getMethod("removeJavascriptInterface", new Class[]{String.class}).invoke(this, new Object[]{"searchBoxJavaBridge_"});     // Catch: Exception -> L5
    L6:
        setWebViewClient(new Cocos2dxWebViewClient(this));
        setWebChromeClient(new WebChromeClient());
        addJavascriptInterface(new TyWebview2JsInterface(this), "TyWebview2JsInterface");
        return;
    L5:
        Log.d(TAG, "This API level do not support `removeJavascriptInterface`");
        goto L6
    }

    public void setJavascriptInterfaceScheme(String r1) {
        if (r1 != null) goto L5;
        r1 = "";
    L5:
        this.mJSScheme = r1;
    }

    public void setScalesPageToFit(boolean r2) {
        getSettings().setSupportZoom(r2);
    }

    public void setWebViewRect(int r3, int r4, int r5, int r6) {
        FrameLayout.LayoutParams r0 = new FrameLayout.LayoutParams(-1, -1);
        r0.leftMargin = r3;
        r0.topMargin = r4;
        r0.width = r5;
        r0.height = r6;
        setLayoutParams(r0);
    }
}
