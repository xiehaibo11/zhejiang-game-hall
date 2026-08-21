package com.tkay.expressad.foundation.webview;

public class BrowserView extends android.widget.LinearLayout {
    private static final java.lang.String a = "BrowserView";
    private java.lang.String b;
    private com.tkay.expressad.foundation.webview.ProgressBar c;
    private android.webkit.WebView d;
    private com.tkay.expressad.foundation.webview.ToolBar e;
    private com.tkay.expressad.foundation.webview.BrowserView.a f;
    private com.tkay.expressad.foundation.d.c g;





    public static final class DownloadListener implements android.webkit.DownloadListener {
        private com.tkay.expressad.foundation.d.c campaignEx;
        private java.lang.String title;

        public DownloadListener() {
                r0 = this;
                r0.<init>()
                return
        }

        public DownloadListener(com.tkay.expressad.foundation.d.c r1) {
                r0 = this;
                r0.<init>()
                r0.campaignEx = r1
                return
        }

        @Override
        public final void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
                r0 = this;
                return
        }

        public final void setTitle(java.lang.String r1) {
                r0 = this;
                r0.title = r1
                return
        }
    }

    public interface a {
        void a();

        boolean a(android.webkit.WebView r1, java.lang.String r2);

        void b();
    }

    public BrowserView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.init()
            return
    }

    public BrowserView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.init()
            return
    }

    public BrowserView(android.content.Context r1, com.tkay.expressad.foundation.d.c r2) {
            r0 = this;
            r0.<init>(r1)
            r0.g = r2
            r0.init()
            return
    }

    static android.webkit.WebView a(com.tkay.expressad.foundation.webview.BrowserView r0) {
            android.webkit.WebView r0 = r0.d
            return r0
    }

    static java.lang.String a(com.tkay.expressad.foundation.webview.BrowserView r0, java.lang.String r1) {
            r0.b = r1
            return r1
    }

    private void a() {
            r4 = this;
            com.tkay.expressad.foundation.webview.ProgressBar r0 = new com.tkay.expressad.foundation.webview.ProgressBar
            android.content.Context r1 = r4.getContext()
            r0.<init>(r1)
            r4.c = r0
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r2 = -1
            r3 = 4
            r1.<init>(r2, r3)
            r0.setLayoutParams(r1)
            android.webkit.WebView r0 = r4.d     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L1f
            android.webkit.WebView r0 = r4.b()     // Catch: java.lang.Throwable -> L2d
            r4.d = r0     // Catch: java.lang.Throwable -> L2d
        L1f:
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L2d
            r0.<init>(r2, r2)     // Catch: java.lang.Throwable -> L2d
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.weight = r1     // Catch: java.lang.Throwable -> L2d
            android.webkit.WebView r1 = r4.d     // Catch: java.lang.Throwable -> L2d
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L2d
        L2d:
            com.tkay.expressad.foundation.webview.ToolBar r0 = new com.tkay.expressad.foundation.webview.ToolBar
            android.content.Context r1 = r4.getContext()
            r0.<init>(r1)
            r4.e = r0
            android.content.Context r0 = r4.getContext()
            r1 = 1109393408(0x42200000, float:40.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            com.tkay.expressad.foundation.webview.ToolBar r1 = r4.e
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r2, r0)
            r1.setLayoutParams(r3)
            com.tkay.expressad.foundation.webview.ToolBar r0 = r4.e
            r0.setBackgroundColor(r2)
            com.tkay.expressad.foundation.webview.ProgressBar r0 = r4.c
            r4.addView(r0)
            android.webkit.WebView r0 = r4.d
            if (r0 == 0) goto L5d
            r4.addView(r0)
        L5d:
            com.tkay.expressad.foundation.webview.ToolBar r0 = r4.e
            r4.addView(r0)
            return
    }

    private android.webkit.WebView b() {
            r8 = this;
            android.webkit.WebView r0 = new android.webkit.WebView
            android.content.Context r1 = r8.getContext()
            r0.<init>(r1)
            android.webkit.WebSettings r1 = r0.getSettings()     // Catch: java.lang.Throwable -> Lc6
            r2 = 1
            r1.setJavaScriptEnabled(r2)     // Catch: java.lang.Throwable -> Lc6
            r1.setAppCacheEnabled(r2)     // Catch: java.lang.Throwable -> Lc6
            r3 = 5242880(0x500000, double:2.590327E-317)
            r1.setAppCacheMaxSize(r3)     // Catch: java.lang.Throwable -> Lc6
            r1.setAllowFileAccess(r2)     // Catch: java.lang.Throwable -> Lc6
            r1.setBuiltInZoomControls(r2)     // Catch: java.lang.Throwable -> Lc6
            r1.setJavaScriptCanOpenWindowsAutomatically(r2)     // Catch: java.lang.Throwable -> Lc6
            r1.setDomStorageEnabled(r2)     // Catch: java.lang.Throwable -> Lc6
            r3 = 0
            r1.setSupportZoom(r3)     // Catch: java.lang.Throwable -> Lc6
            r1.setSavePassword(r3)     // Catch: java.lang.Throwable -> Lc6
            r1.setDatabaseEnabled(r2)     // Catch: java.lang.Throwable -> Lc6
            r1.setUseWideViewPort(r2)     // Catch: java.lang.Throwable -> Lc6
            r1.setLoadWithOverviewMode(r2)     // Catch: java.lang.Throwable -> Lc6
            android.webkit.WebSettings$RenderPriority r4 = android.webkit.WebSettings.RenderPriority.HIGH     // Catch: java.lang.Throwable -> Lc6
            r1.setRenderPriority(r4)     // Catch: java.lang.Throwable -> Lc6
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lc6
            r5 = 26
            if (r4 < r5) goto L49
            r1.setSafeBrowsingEnabled(r3)     // Catch: java.lang.Throwable -> L45
            goto L49
        L45:
            r4 = move-exception
            r4.getMessage()     // Catch: java.lang.Throwable -> Lc6
        L49:
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lc6
            r5 = 17
            if (r4 < r5) goto L52
            r1.setMediaPlaybackRequiresUserGesture(r3)     // Catch: java.lang.Throwable -> Lc6
        L52:
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5c
            r5 = 16
            if (r4 < r5) goto L60
            r1.setAllowUniversalAccessFromFileURLs(r3)     // Catch: java.lang.Throwable -> L5c
            goto L60
        L5c:
            r4 = move-exception
            r4.getMessage()     // Catch: java.lang.Throwable -> Lc6
        L60:
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L6a java.lang.Throwable -> Lc6
            r5 = 21
            if (r4 < r5) goto L6e
            r1.setMixedContentMode(r3)     // Catch: java.lang.Exception -> L6a java.lang.Throwable -> Lc6
            goto L6e
        L6a:
            r4 = move-exception
            r4.getMessage()     // Catch: java.lang.Throwable -> Lc6
        L6e:
            r1.setDatabaseEnabled(r2)     // Catch: java.lang.Throwable -> Lc6
            android.content.Context r4 = r8.getContext()     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r5 = "database"
            java.io.File r4 = r4.getDir(r5, r3)     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Throwable -> Lc6
            r1.setDatabasePath(r4)     // Catch: java.lang.Throwable -> Lc6
            r1.setGeolocationEnabled(r2)     // Catch: java.lang.Throwable -> Lc6
            r1.setGeolocationDatabasePath(r4)     // Catch: java.lang.Throwable -> Lc6
            java.lang.Class<android.webkit.WebSettings> r4 = android.webkit.WebSettings.class
            java.lang.String r5 = "setDisplayZoomControls"
            java.lang.Class[] r6 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            r6[r3] = r7     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            java.lang.reflect.Method r4 = r4.getDeclaredMethod(r5, r6)     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            r4.setAccessible(r2)     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            java.lang.Boolean r6 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            r5[r3] = r6     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            r4.invoke(r1, r5)     // Catch: java.lang.Exception -> La3 java.lang.Throwable -> Lc6
            goto La7
        La3:
            r4 = move-exception
            r4.getMessage()     // Catch: java.lang.Throwable -> Lc6
        La7:
            java.lang.Class<android.webkit.WebSettings> r4 = android.webkit.WebSettings.class
            java.lang.String r5 = "c2V0QWxsb3dVbml2ZXJzYWxBY2Nlc3NGcm9tRmlsZVVSTHM="
            java.lang.String r5 = com.tkay.core.common.l.c.b(r5)     // Catch: java.lang.Throwable -> Lca
            java.lang.Class[] r6 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> Lca
            java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> Lca
            r6[r3] = r7     // Catch: java.lang.Throwable -> Lca
            java.lang.reflect.Method r4 = r4.getDeclaredMethod(r5, r6)     // Catch: java.lang.Throwable -> Lca
            r4.setAccessible(r2)     // Catch: java.lang.Throwable -> Lca
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Lca
            java.lang.Boolean r5 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lca
            r2[r3] = r5     // Catch: java.lang.Throwable -> Lca
            r4.invoke(r1, r2)     // Catch: java.lang.Throwable -> Lca
            goto Lca
        Lc6:
            r1 = move-exception
            r1.getMessage()
        Lca:
            com.tkay.expressad.foundation.webview.BrowserView$DownloadListener r1 = new com.tkay.expressad.foundation.webview.BrowserView$DownloadListener
            com.tkay.expressad.foundation.d.c r2 = r8.g
            r1.<init>(r2)
            r0.setDownloadListener(r1)
            com.tkay.expressad.foundation.webview.BrowserView$2 r1 = new com.tkay.expressad.foundation.webview.BrowserView$2
            r1.<init>(r8)
            r0.setWebViewClient(r1)
            int r1 = com.tkay.expressad.foundation.h.k.d()
            r2 = 10
            if (r1 > r2) goto Lea
            com.tkay.expressad.foundation.webview.BrowserView$3 r1 = new com.tkay.expressad.foundation.webview.BrowserView$3
            r1.<init>(r8)
            goto Lef
        Lea:
            com.tkay.expressad.foundation.webview.BrowserView$4 r1 = new com.tkay.expressad.foundation.webview.BrowserView$4
            r1.<init>(r8)
        Lef:
            r0.setWebChromeClient(r1)
            return r0
    }

    static com.tkay.expressad.foundation.webview.ToolBar b(com.tkay.expressad.foundation.webview.BrowserView r0) {
            com.tkay.expressad.foundation.webview.ToolBar r0 = r0.e
            return r0
    }

    static java.lang.String c(com.tkay.expressad.foundation.webview.BrowserView r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static com.tkay.expressad.foundation.webview.BrowserView.a d(com.tkay.expressad.foundation.webview.BrowserView r0) {
            com.tkay.expressad.foundation.webview.BrowserView$a r0 = r0.f
            return r0
    }

    static com.tkay.expressad.foundation.webview.ProgressBar e(com.tkay.expressad.foundation.webview.BrowserView r0) {
            com.tkay.expressad.foundation.webview.ProgressBar r0 = r0.c
            return r0
    }

    public void destroy() {
            r2 = this;
            android.webkit.WebView r0 = r2.d
            if (r0 == 0) goto L15
            r0.stopLoading()
            android.webkit.WebView r0 = r2.d
            r1 = 0
            r0.setWebViewClient(r1)
            android.webkit.WebView r0 = r2.d
            r0.destroy()
            r2.removeAllViews()
        L15:
            return
    }

    public void init() {
            r5 = this;
            r0 = 1
            r5.setOrientation(r0)
            r1 = 17
            r5.setGravity(r1)
            com.tkay.expressad.foundation.webview.ProgressBar r1 = new com.tkay.expressad.foundation.webview.ProgressBar
            android.content.Context r2 = r5.getContext()
            r1.<init>(r2)
            r5.c = r1
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r3 = -1
            r4 = 4
            r2.<init>(r3, r4)
            r1.setLayoutParams(r2)
            android.webkit.WebView r1 = r5.d     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L28
            android.webkit.WebView r1 = r5.b()     // Catch: java.lang.Throwable -> L36
            r5.d = r1     // Catch: java.lang.Throwable -> L36
        L28:
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L36
            r1.<init>(r3, r3)     // Catch: java.lang.Throwable -> L36
            r2 = 1065353216(0x3f800000, float:1.0)
            r1.weight = r2     // Catch: java.lang.Throwable -> L36
            android.webkit.WebView r2 = r5.d     // Catch: java.lang.Throwable -> L36
            r2.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L36
        L36:
            com.tkay.expressad.foundation.webview.ToolBar r1 = new com.tkay.expressad.foundation.webview.ToolBar
            android.content.Context r2 = r5.getContext()
            r1.<init>(r2)
            r5.e = r1
            android.content.Context r1 = r5.getContext()
            r2 = 1109393408(0x42200000, float:40.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            com.tkay.expressad.foundation.webview.ToolBar r2 = r5.e
            android.widget.LinearLayout$LayoutParams r4 = new android.widget.LinearLayout$LayoutParams
            r4.<init>(r3, r1)
            r2.setLayoutParams(r4)
            com.tkay.expressad.foundation.webview.ToolBar r1 = r5.e
            r1.setBackgroundColor(r3)
            com.tkay.expressad.foundation.webview.ProgressBar r1 = r5.c
            r5.addView(r1)
            android.webkit.WebView r1 = r5.d
            if (r1 == 0) goto L66
            r5.addView(r1)
        L66:
            com.tkay.expressad.foundation.webview.ToolBar r1 = r5.e
            r5.addView(r1)
            com.tkay.expressad.foundation.webview.ProgressBar r1 = r5.c
            r1.initResource(r0)
            com.tkay.expressad.foundation.webview.ToolBar r0 = r5.e
            java.lang.String r1 = "backward"
            android.view.View r0 = r0.getItem(r1)
            r1 = 0
            r0.setEnabled(r1)
            com.tkay.expressad.foundation.webview.ToolBar r0 = r5.e
            java.lang.String r2 = "forward"
            android.view.View r0 = r0.getItem(r2)
            r0.setEnabled(r1)
            com.tkay.expressad.foundation.webview.ToolBar r0 = r5.e
            com.tkay.expressad.foundation.webview.BrowserView$1 r1 = new com.tkay.expressad.foundation.webview.BrowserView$1
            r1.<init>(r5)
            r0.setOnItemClickListener(r1)
            return
    }

    public void loadUrl(java.lang.String r2) {
            r1 = this;
            android.webkit.WebView r0 = r1.d
            if (r0 == 0) goto L7
            r0.loadUrl(r2)
        L7:
            return
    }

    public void setListener(com.tkay.expressad.foundation.webview.BrowserView.a r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
