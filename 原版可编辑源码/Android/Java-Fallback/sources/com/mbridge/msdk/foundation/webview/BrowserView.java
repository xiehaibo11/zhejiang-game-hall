package com.mbridge.msdk.foundation.webview;

public class BrowserView extends android.widget.LinearLayout {
    private java.lang.String a;
    private com.mbridge.msdk.foundation.webview.ProgressBar b;
    private android.webkit.WebView c;
    private com.mbridge.msdk.foundation.webview.ToolBar d;
    private com.mbridge.msdk.foundation.webview.BrowserView.a e;
    private com.mbridge.msdk.foundation.entity.CampaignEx f;





    public static final class MBDownloadListener implements android.webkit.DownloadListener {
        private com.mbridge.msdk.foundation.entity.CampaignEx campaignEx;
        private java.lang.String title;

        public MBDownloadListener() {
                r0 = this;
                r0.<init>()
                return
        }

        public MBDownloadListener(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
                r0 = this;
                r0.<init>()
                r0.campaignEx = r1
                return
        }

        @Override
        public final void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
                r0 = this;
                java.lang.String r2 = r0.title
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.campaignEx
                r4 = 1
                com.mbridge.msdk.foundation.tools.ad.a(r2, r1, r3, r4)
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

        void a(android.webkit.WebView r1, int r2, java.lang.String r3, java.lang.String r4);

        void a(android.webkit.WebView r1, java.lang.String r2);

        void a(android.webkit.WebView r1, java.lang.String r2, android.graphics.Bitmap r3);

        boolean b(android.webkit.WebView r1, java.lang.String r2);

        void c(android.webkit.WebView r1, java.lang.String r2);
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

    public BrowserView(android.content.Context r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r0 = this;
            r0.<init>(r1)
            r0.f = r2
            r0.init()
            return
    }

    private android.webkit.WebView a() {
            r9 = this;
            java.lang.String r0 = "BrowserView"
            android.webkit.WebView r1 = new android.webkit.WebView
            android.content.Context r2 = r9.getContext()
            r1.<init>(r2)
            android.webkit.WebSettings r2 = r1.getSettings()     // Catch: java.lang.Throwable -> Lb6
            r3 = 1
            r2.setJavaScriptEnabled(r3)     // Catch: java.lang.Throwable -> Lb6
            r2.setAppCacheEnabled(r3)     // Catch: java.lang.Throwable -> Lb6
            r4 = 5242880(0x500000, double:2.590327E-317)
            r2.setAppCacheMaxSize(r4)     // Catch: java.lang.Throwable -> Lb6
            r2.setAllowFileAccess(r3)     // Catch: java.lang.Throwable -> Lb6
            r2.setBuiltInZoomControls(r3)     // Catch: java.lang.Throwable -> Lb6
            r2.setJavaScriptCanOpenWindowsAutomatically(r3)     // Catch: java.lang.Throwable -> Lb6
            r2.setDomStorageEnabled(r3)     // Catch: java.lang.Throwable -> Lb6
            r4 = 0
            r2.setSupportZoom(r4)     // Catch: java.lang.Throwable -> Lb6
            r2.setSavePassword(r4)     // Catch: java.lang.Throwable -> Lb6
            r2.setDatabaseEnabled(r3)     // Catch: java.lang.Throwable -> Lb6
            r2.setUseWideViewPort(r3)     // Catch: java.lang.Throwable -> Lb6
            r2.setLoadWithOverviewMode(r3)     // Catch: java.lang.Throwable -> Lb6
            android.webkit.WebSettings$RenderPriority r5 = android.webkit.WebSettings.RenderPriority.HIGH     // Catch: java.lang.Throwable -> Lb6
            r2.setRenderPriority(r5)     // Catch: java.lang.Throwable -> Lb6
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb6
            r6 = 26
            if (r5 < r6) goto L4f
            r2.setSafeBrowsingEnabled(r4)     // Catch: java.lang.Throwable -> L47
            goto L4f
        L47:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> Lb6
        L4f:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb6
            r6 = 17
            if (r5 < r6) goto L58
            r2.setMediaPlaybackRequiresUserGesture(r4)     // Catch: java.lang.Throwable -> Lb6
        L58:
            r2.setAllowUniversalAccessFromFileURLs(r3)     // Catch: java.lang.Throwable -> L5c
            goto L64
        L5c:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> Lb6
        L64:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L6e java.lang.Throwable -> Lb6
            r6 = 21
            if (r5 < r6) goto L76
            r2.setMixedContentMode(r4)     // Catch: java.lang.Exception -> L6e java.lang.Throwable -> Lb6
            goto L76
        L6e:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> Lb6
        L76:
            r2.setDatabaseEnabled(r3)     // Catch: java.lang.Throwable -> Lb6
            android.content.Context r5 = r9.getContext()     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r6 = "database"
            java.io.File r5 = r5.getDir(r6, r4)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r5 = r5.getPath()     // Catch: java.lang.Throwable -> Lb6
            r2.setDatabasePath(r5)     // Catch: java.lang.Throwable -> Lb6
            r2.setGeolocationEnabled(r3)     // Catch: java.lang.Throwable -> Lb6
            r2.setGeolocationDatabasePath(r5)     // Catch: java.lang.Throwable -> Lb6
            java.lang.Class<android.webkit.WebSettings> r5 = android.webkit.WebSettings.class
            java.lang.String r6 = "setDisplayZoomControls"
            java.lang.Class[] r7 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            java.lang.Class r8 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            r7[r4] = r8     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            java.lang.reflect.Method r5 = r5.getDeclaredMethod(r6, r7)     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            r5.setAccessible(r3)     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            r3[r4] = r6     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            r5.invoke(r2, r3)     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> Lb6
            goto Lbe
        Lad:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> Lb6
            goto Lbe
        Lb6:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        Lbe:
            com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener r0 = new com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.f
            r0.<init>(r2)
            r1.setDownloadListener(r0)
            com.mbridge.msdk.foundation.webview.BrowserView$2 r0 = new com.mbridge.msdk.foundation.webview.BrowserView$2
            r0.<init>(r9)
            r1.setWebViewClient(r0)
            int r0 = com.mbridge.msdk.foundation.tools.v.D()
            r2 = 10
            if (r0 > r2) goto Lde
            com.mbridge.msdk.foundation.webview.BrowserView$3 r0 = new com.mbridge.msdk.foundation.webview.BrowserView$3
            r0.<init>(r9)
            goto Le3
        Lde:
            com.mbridge.msdk.foundation.webview.BrowserView$4 r0 = new com.mbridge.msdk.foundation.webview.BrowserView$4
            r0.<init>(r9)
        Le3:
            r1.setWebChromeClient(r0)
            return r1
    }

    static android.webkit.WebView a(com.mbridge.msdk.foundation.webview.BrowserView r0) {
            android.webkit.WebView r0 = r0.c
            return r0
    }

    static java.lang.String a(com.mbridge.msdk.foundation.webview.BrowserView r0, java.lang.String r1) {
            r0.a = r1
            return r1
    }

    static com.mbridge.msdk.foundation.webview.ToolBar b(com.mbridge.msdk.foundation.webview.BrowserView r0) {
            com.mbridge.msdk.foundation.webview.ToolBar r0 = r0.d
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.foundation.webview.BrowserView r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static com.mbridge.msdk.foundation.webview.BrowserView.a d(com.mbridge.msdk.foundation.webview.BrowserView r0) {
            com.mbridge.msdk.foundation.webview.BrowserView$a r0 = r0.e
            return r0
    }

    static com.mbridge.msdk.foundation.webview.ProgressBar e(com.mbridge.msdk.foundation.webview.BrowserView r0) {
            com.mbridge.msdk.foundation.webview.ProgressBar r0 = r0.b
            return r0
    }

    public void destroy() {
            r2 = this;
            android.webkit.WebView r0 = r2.c
            if (r0 == 0) goto L17
            r0.stopLoading()
            android.webkit.WebView r0 = r2.c
            r1 = 0
            r0.setWebViewClient(r1)
            android.webkit.WebView r0 = r2.c
            r0.destroy()
            r2.c = r1
            r2.removeAllViews()
        L17:
            return
    }

    public void init() {
            r5 = this;
            r0 = 1
            r5.setOrientation(r0)
            r1 = 17
            r5.setGravity(r1)
            com.mbridge.msdk.foundation.webview.ProgressBar r1 = new com.mbridge.msdk.foundation.webview.ProgressBar
            android.content.Context r2 = r5.getContext()
            r1.<init>(r2)
            r5.b = r1
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r3 = -1
            r4 = 4
            r2.<init>(r3, r4)
            r1.setLayoutParams(r2)
            android.webkit.WebView r1 = r5.c     // Catch: java.lang.Throwable -> L37
            if (r1 != 0) goto L28
            android.webkit.WebView r1 = r5.a()     // Catch: java.lang.Throwable -> L37
            r5.c = r1     // Catch: java.lang.Throwable -> L37
        L28:
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L37
            r1.<init>(r3, r3)     // Catch: java.lang.Throwable -> L37
            r2 = 1065353216(0x3f800000, float:1.0)
            r1.weight = r2     // Catch: java.lang.Throwable -> L37
            android.webkit.WebView r2 = r5.c     // Catch: java.lang.Throwable -> L37
            r2.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L37
            goto L3f
        L37:
            r1 = move-exception
            java.lang.String r2 = "BrowserView"
            java.lang.String r4 = "webview is error"
            com.mbridge.msdk.foundation.tools.z.c(r2, r4, r1)
        L3f:
            com.mbridge.msdk.foundation.webview.ToolBar r1 = new com.mbridge.msdk.foundation.webview.ToolBar
            android.content.Context r2 = r5.getContext()
            r1.<init>(r2)
            r5.d = r1
            android.content.Context r1 = r5.getContext()
            r2 = 1109393408(0x42200000, float:40.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            com.mbridge.msdk.foundation.webview.ToolBar r2 = r5.d
            android.widget.LinearLayout$LayoutParams r4 = new android.widget.LinearLayout$LayoutParams
            r4.<init>(r3, r1)
            r2.setLayoutParams(r4)
            com.mbridge.msdk.foundation.webview.ToolBar r1 = r5.d
            r1.setBackgroundColor(r3)
            com.mbridge.msdk.foundation.webview.ProgressBar r1 = r5.b
            r5.addView(r1)
            android.webkit.WebView r1 = r5.c
            if (r1 == 0) goto L6f
            r5.addView(r1)
        L6f:
            com.mbridge.msdk.foundation.webview.ToolBar r1 = r5.d
            r5.addView(r1)
            com.mbridge.msdk.foundation.webview.ProgressBar r1 = r5.b
            r1.initResource(r0)
            com.mbridge.msdk.foundation.webview.ToolBar r0 = r5.d
            java.lang.String r1 = "backward"
            android.view.View r0 = r0.getItem(r1)
            r1 = 0
            r0.setEnabled(r1)
            com.mbridge.msdk.foundation.webview.ToolBar r0 = r5.d
            java.lang.String r2 = "forward"
            android.view.View r0 = r0.getItem(r2)
            r0.setEnabled(r1)
            com.mbridge.msdk.foundation.webview.ToolBar r0 = r5.d
            com.mbridge.msdk.foundation.webview.BrowserView$1 r1 = new com.mbridge.msdk.foundation.webview.BrowserView$1
            r1.<init>(r5)
            r0.setOnItemClickListener(r1)
            return
    }

    public void loadUrl(java.lang.String r2) {
            r1 = this;
            android.webkit.WebView r0 = r1.c
            if (r0 == 0) goto L7
            r0.loadUrl(r2)
        L7:
            return
    }

    public void setListener(com.mbridge.msdk.foundation.webview.BrowserView.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
