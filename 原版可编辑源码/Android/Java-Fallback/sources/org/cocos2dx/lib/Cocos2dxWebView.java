package org.cocos2dx.lib;

public class Cocos2dxWebView extends android.webkit.WebView {
    private static final java.lang.String TAG = null;
    private java.lang.String mJSScheme;
    private int mViewTag;

    class Cocos2dxWebViewClient extends android.webkit.WebViewClient {
        final org.cocos2dx.lib.Cocos2dxWebView this$0;




        Cocos2dxWebViewClient(org.cocos2dx.lib.Cocos2dxWebView r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onPageFinished(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                super.onPageFinished(r2, r3)
                org.cocos2dx.lib.Cocos2dxWebView r2 = r1.this$0
                android.content.Context r2 = r2.getContext()
                org.cocos2dx.lib.Cocos2dxActivity r2 = (org.cocos2dx.lib.Cocos2dxActivity) r2
                org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient$2 r0 = new org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient$2
                r0.<init>(r1, r3)
                r2.runOnGLThread(r0)
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r1, int r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                super.onReceivedError(r1, r2, r3, r4)
                org.cocos2dx.lib.Cocos2dxWebView r1 = r0.this$0
                android.content.Context r1 = r1.getContext()
                org.cocos2dx.lib.Cocos2dxActivity r1 = (org.cocos2dx.lib.Cocos2dxActivity) r1
                org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient$3 r2 = new org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient$3
                r2.<init>(r0, r4)
                r1.runOnGLThread(r2)
                return
        }

        @Override
        public boolean shouldOverrideUrlLoading(android.webkit.WebView r6, java.lang.String r7) {
                r5 = this;
                org.cocos2dx.lib.Cocos2dxWebView r6 = r5.this$0
                android.content.Context r6 = r6.getContext()
                org.cocos2dx.lib.Cocos2dxActivity r6 = (org.cocos2dx.lib.Cocos2dxActivity) r6
                r0 = 1
                java.net.URI r1 = java.net.URI.create(r7)     // Catch: java.lang.Exception -> L28
                if (r1 == 0) goto L31
                java.lang.String r1 = r1.getScheme()     // Catch: java.lang.Exception -> L28
                org.cocos2dx.lib.Cocos2dxWebView r2 = r5.this$0     // Catch: java.lang.Exception -> L28
                java.lang.String r2 = org.cocos2dx.lib.Cocos2dxWebView.access$000(r2)     // Catch: java.lang.Exception -> L28
                boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L28
                if (r1 == 0) goto L31
                org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient$1 r1 = new org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient$1     // Catch: java.lang.Exception -> L28
                r1.<init>(r5, r7)     // Catch: java.lang.Exception -> L28
                r6.runOnGLThread(r1)     // Catch: java.lang.Exception -> L28
                return r0
            L28:
                java.lang.String r1 = org.cocos2dx.lib.Cocos2dxWebView.access$200()
                java.lang.String r2 = "Failed to create URI from url"
                android.util.Log.d(r1, r2)
            L31:
                boolean[] r1 = new boolean[r0]
                r2 = 0
                r1[r2] = r0
                java.util.concurrent.CountDownLatch r3 = new java.util.concurrent.CountDownLatch
                r3.<init>(r0)
                org.cocos2dx.lib.ShouldStartLoadingWorker r0 = new org.cocos2dx.lib.ShouldStartLoadingWorker
                org.cocos2dx.lib.Cocos2dxWebView r4 = r5.this$0
                int r4 = org.cocos2dx.lib.Cocos2dxWebView.access$100(r4)
                r0.<init>(r3, r1, r4, r7)
                r6.runOnGLThread(r0)
                r3.await()     // Catch: java.lang.InterruptedException -> L4d
                goto L56
            L4d:
                java.lang.String r6 = org.cocos2dx.lib.Cocos2dxWebView.access$200()
                java.lang.String r7 = "'shouldOverrideUrlLoading' failed"
                android.util.Log.d(r6, r7)
            L56:
                boolean r6 = r1[r2]
                return r6
        }
    }

    static {
            java.lang.Class<org.cocos2dx.lib.Cocos2dxWebViewHelper> r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.class
            java.lang.String r0 = r0.getSimpleName()
            org.cocos2dx.lib.Cocos2dxWebView.TAG = r0
            return
    }

    public Cocos2dxWebView(android.content.Context r2) {
            r1 = this;
            r0 = -1
            r1.<init>(r2, r0)
            return
    }

    @android.annotation.SuppressLint({"SetJavaScriptEnabled"})
    public Cocos2dxWebView(android.content.Context r5, int r6) {
            r4 = this;
            r4.<init>(r5)
            r4.mViewTag = r6
            java.lang.String r5 = ""
            r4.mJSScheme = r5
            r5 = 1
            r4.setFocusable(r5)
            r4.setFocusableInTouchMode(r5)
            android.webkit.WebSettings r6 = r4.getSettings()
            r0 = 0
            r6.setSupportZoom(r0)
            android.webkit.WebSettings r6 = r4.getSettings()
            r6.setDomStorageEnabled(r5)
            android.webkit.WebSettings r6 = r4.getSettings()
            r6.setJavaScriptEnabled(r5)
            r4.setBackgroundColor(r0)
            r4.setVerticalScrollBarEnabled(r0)
            java.lang.Class r6 = r4.getClass()     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "removeJavascriptInterface"
            java.lang.Class[] r2 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L46
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r2[r0] = r3     // Catch: java.lang.Exception -> L46
            java.lang.reflect.Method r6 = r6.getMethod(r1, r2)     // Catch: java.lang.Exception -> L46
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "searchBoxJavaBridge_"
            r5[r0] = r1     // Catch: java.lang.Exception -> L46
            r6.invoke(r4, r5)     // Catch: java.lang.Exception -> L46
            goto L4d
        L46:
            java.lang.String r5 = org.cocos2dx.lib.Cocos2dxWebView.TAG
            java.lang.String r6 = "This API level do not support `removeJavascriptInterface`"
            android.util.Log.d(r5, r6)
        L4d:
            org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient r5 = new org.cocos2dx.lib.Cocos2dxWebView$Cocos2dxWebViewClient
            r5.<init>(r4)
            r4.setWebViewClient(r5)
            android.webkit.WebChromeClient r5 = new android.webkit.WebChromeClient
            r5.<init>()
            r4.setWebChromeClient(r5)
            return
    }

    static java.lang.String access$000(org.cocos2dx.lib.Cocos2dxWebView r0) {
            java.lang.String r0 = r0.mJSScheme
            return r0
    }

    static int access$100(org.cocos2dx.lib.Cocos2dxWebView r0) {
            int r0 = r0.mViewTag
            return r0
    }

    static java.lang.String access$200() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxWebView.TAG
            return r0
    }

    public void setJavascriptInterfaceScheme(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L3
            goto L5
        L3:
            java.lang.String r1 = ""
        L5:
            r0.mJSScheme = r1
            return
    }

    public void setScalesPageToFit(boolean r2) {
            r1 = this;
            android.webkit.WebSettings r0 = r1.getSettings()
            r0.setSupportZoom(r2)
            return
    }

    public void setWebViewRect(int r3, int r4, int r5, int r6) {
            r2 = this;
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r0.leftMargin = r3
            r0.topMargin = r4
            r0.width = r5
            r0.height = r6
            r3 = 51
            r0.gravity = r3
            r2.setLayoutParams(r0)
            return
    }
}
