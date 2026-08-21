package com.kwad.components.offline.api.core.webview;

public abstract class BaseKsWebView extends android.widget.FrameLayout {
    private boolean enableScroll;
    public com.kwad.components.offline.api.core.webview.BaseKsWebView.DeepLinkListener mDeeplinkListener;
    protected java.lang.String mUniqueId;
    private com.kwad.sdk.widget.h mViewRCHelper;
    public com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener mWebLoadListener;
    protected com.kwad.components.offline.api.core.webview.BaseKsWebView.WebViewStateListener mWebViewStateListener;

    public interface DeepLinkListener {
        void onFailed();

        void onSuccess();
    }

    public interface WebLoadListener {
        void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5);

        void onPageFinished();

        void onPageStart();

        void onReceivedHttpError(int r1, java.lang.String r2, java.lang.String r3);

        boolean shouldOverrideUrlLoading(android.webkit.WebView r1, java.lang.String r2);
    }

    public interface WebViewStateListener {
        void onFocusChanged(boolean r1, int r2, android.graphics.Rect r3);

        void onScrollChanged(int r1, int r2, int r3, int r4);

        void onSizeChanged(int r1, int r2, int r3, int r4);

        void onVisibilityChanged(android.view.View r1, int r2);

        void onWindowFocusChanged(boolean r1);
    }

    public BaseKsWebView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 1
            r1.enableScroll = r0
            r0 = 0
            r1.init(r2, r0)
            return
    }

    public BaseKsWebView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r0 = 1
            r1.enableScroll = r0
            r1.init(r2, r3)
            return
    }

    public BaseKsWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r3 = 1
            r0.enableScroll = r3
            r0.init(r1, r2)
            return
    }

    private float[] getRadius(float r3, float r4, float r5, float r6) {
            r2 = this;
            r0 = 8
            float[] r0 = new float[r0]
            r1 = 0
            r0[r1] = r3
            r1 = 1
            r0[r1] = r3
            r3 = 2
            r0[r3] = r4
            r3 = 3
            r0[r3] = r4
            r3 = 4
            r0[r3] = r5
            r3 = 5
            r0[r3] = r5
            r3 = 6
            r0[r3] = r6
            r3 = 7
            r0[r3] = r6
            return r0
    }

    private void init(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = new com.kwad.sdk.widget.h
            r0.<init>()
            r1.mViewRCHelper = r0
            r0.initAttrs(r2, r3)
            return
    }

    public abstract void addJavascriptInterface(java.lang.Object r1, java.lang.String r2);

    public abstract void callJs(java.lang.String r1);

    public abstract void callJs(java.lang.String r1, java.lang.String r2);

    public abstract void destroy();

    @Override
    protected void dispatchDraw(android.graphics.Canvas r2) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.beforeDispatchDraw(r2)
            super.dispatchDraw(r2)
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.afterDispatchDraw(r2)
            return
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.beforeDraw(r2)
            super.draw(r2)
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.afterDraw(r2)
            return
    }

    public java.lang.String getUniqueId() {
            r1 = this;
            java.lang.String r0 = r1.mUniqueId
            if (r0 != 0) goto Le
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r1.mUniqueId = r0
        Le:
            java.lang.String r0 = r1.mUniqueId
            return r0
    }

    public abstract void loadUrl(java.lang.String r1);

    @Override
    protected void onFocusChanged(boolean r2, int r3, android.graphics.Rect r4) {
            r1 = this;
            super.onFocusChanged(r2, r3, r4)
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebViewStateListener r0 = r1.mWebViewStateListener
            if (r0 == 0) goto La
            r0.onFocusChanged(r2, r3, r4)
        La:
            return
    }

    @Override
    protected void onScrollChanged(int r2, int r3, int r4, int r5) {
            r1 = this;
            super.onScrollChanged(r2, r3, r4, r5)
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebViewStateListener r0 = r1.mWebViewStateListener
            if (r0 == 0) goto La
            r0.onScrollChanged(r2, r3, r4, r5)
        La:
            return
    }

    @Override
    protected void onSizeChanged(int r2, int r3, int r4, int r5) {
            r1 = this;
            super.onSizeChanged(r2, r3, r4, r5)
            com.kwad.sdk.widget.h r0 = r1.mViewRCHelper
            r0.onSizeChanged(r2, r3)
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebViewStateListener r0 = r1.mWebViewStateListener
            if (r0 == 0) goto Lf
            r0.onSizeChanged(r2, r3, r4, r5)
        Lf:
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r2, int r3) {
            r1 = this;
            super.onVisibilityChanged(r2, r3)
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebViewStateListener r0 = r1.mWebViewStateListener
            if (r0 == 0) goto La
            r0.onVisibilityChanged(r2, r3)
        La:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            super.onWindowFocusChanged(r2)
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebViewStateListener r0 = r1.mWebViewStateListener
            if (r0 == 0) goto La
            r0.onWindowFocusChanged(r2)
        La:
            return
    }

    @Override
    public abstract void scrollBy(int r1, int r2);

    @Override
    public abstract void scrollTo(int r1, int r2);

    public abstract void setAcceptThirdPartyCookies(boolean r1);

    public abstract void setAllowContentAccess(boolean r1);

    public abstract void setAllowFileAccess(boolean r1);

    public abstract void setAllowFileAccessFromFileURLs(boolean r1);

    public abstract void setAllowUniversalAccessFromFileURLs(boolean r1);

    public abstract void setCacheMode(int r1);

    public abstract void setContextUniqId(int r1);

    public abstract void setDebugEnabled(boolean r1);

    public abstract void setDeeplinkEnabled(boolean r1);

    public void setDeeplinkListener(com.kwad.components.offline.api.core.webview.BaseKsWebView.DeepLinkListener r1) {
            r0 = this;
            r0.mDeeplinkListener = r1
            return
    }

    public abstract void setEnableScroll(boolean r1);

    public abstract void setEnableWebCache(boolean r1);

    public abstract void setInnerDownloadEnabled(boolean r1);

    public abstract void setJavaScriptEnabled(boolean r1);

    public abstract void setMixedContentMode(int r1);

    public void setRadius(float r1, float r2, float r3, float r4) {
            r0 = this;
            float[] r1 = r0.getRadius(r1, r2, r3, r4)
            com.kwad.sdk.widget.h r2 = r0.mViewRCHelper
            r2.setRadius(r1)
            r0.postInvalidate()
            return
    }

    public abstract void setSavePassword(boolean r1);

    public abstract void setTextZoom(int r1);

    public void setWebLoadListener(com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener r1) {
            r0 = this;
            r0.mWebLoadListener = r1
            return
    }

    public void setWebViewStateListener(com.kwad.components.offline.api.core.webview.BaseKsWebView.WebViewStateListener r1) {
            r0 = this;
            r0.mWebViewStateListener = r1
            return
    }
}
