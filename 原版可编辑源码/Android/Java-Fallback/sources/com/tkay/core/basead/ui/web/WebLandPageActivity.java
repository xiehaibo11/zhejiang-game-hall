package com.tkay.core.basead.ui.web;

public class WebLandPageActivity extends android.app.Activity {
    private static final int e = 343452;
    int a;
    org.json.JSONArray b;
    int c;
    int d;
    private com.tkay.core.basead.ui.web.WebProgressBarView f;
    private android.webkit.WebView g;
    private android.widget.ImageButton h;
    private android.widget.ImageButton i;
    private android.widget.ImageButton j;
    private android.widget.ImageButton k;
    private boolean l;
    private com.tkay.core.common.f.h m;
    private com.tkay.core.common.f.i n;
    private java.lang.String o;
    private com.tkay.core.api.IOfferClickHandler p;
    private com.tkay.core.basead.ui.web.b q;
    private android.webkit.ValueCallback<android.net.Uri[]> r;
    private final int s;

    final class 1 implements android.webkit.DownloadListener {
        final com.tkay.core.basead.ui.web.WebLandPageActivity a;

        1(com.tkay.core.basead.ui.web.WebLandPageActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
                r0 = this;
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                com.tkay.core.common.f.h r2 = com.tkay.core.basead.ui.web.WebLandPageActivity.a(r2)
                if (r2 == 0) goto L6a
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                com.tkay.core.common.f.i r2 = com.tkay.core.basead.ui.web.WebLandPageActivity.b(r2)
                if (r2 == 0) goto L6a
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                com.tkay.core.common.f.h r2 = com.tkay.core.basead.ui.web.WebLandPageActivity.a(r2)
                java.lang.String r2 = r2.B()
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto L6a
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                com.tkay.core.api.IOfferClickHandler r2 = com.tkay.core.basead.ui.web.WebLandPageActivity.c(r2)
                if (r2 == 0) goto L5c
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                com.tkay.core.api.IOfferClickHandler r2 = com.tkay.core.basead.ui.web.WebLandPageActivity.c(r2)
                boolean r2 = r2 instanceof com.tkay.core.api.IOfferClickHandler
                if (r2 == 0) goto L5c
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                com.tkay.core.api.IOfferClickHandler r2 = com.tkay.core.basead.ui.web.WebLandPageActivity.c(r2)
                com.tkay.core.basead.ui.web.WebLandPageActivity r3 = r0.a
                android.content.Context r3 = r3.getApplicationContext()
                com.tkay.core.basead.ui.web.WebLandPageActivity r4 = r0.a
                com.tkay.core.common.f.h r4 = com.tkay.core.basead.ui.web.WebLandPageActivity.a(r4)
                com.tkay.core.basead.ui.web.WebLandPageActivity r5 = r0.a
                com.tkay.core.common.f.i r5 = com.tkay.core.basead.ui.web.WebLandPageActivity.b(r5)
                boolean r2 = r2.startDownloadApp(r3, r4, r5, r1)
                if (r2 != 0) goto L51
                goto L5c
            L51:
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                r2 = 6
                r1.a = r2
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                r2 = 1
                r1.d = r2
                goto L73
            L5c:
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                r3 = 2
                r2.d = r3
                com.tkay.core.common.l.l.a(r1)
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                r2 = 7
                r1.a = r2
                goto L73
            L6a:
                com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r0.a
                r3 = 11
                r2.a = r3
                com.tkay.core.common.l.l.a(r1)
            L73:
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                r1.finish()
                return
        }
    }

    final class 2 implements android.view.View.OnClickListener {
        final com.tkay.core.basead.ui.web.WebLandPageActivity a;

        2(com.tkay.core.basead.ui.web.WebLandPageActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                android.webkit.WebView r1 = com.tkay.core.basead.ui.web.WebLandPageActivity.d(r1)
                boolean r1 = r1.canGoBack()
                if (r1 == 0) goto L15
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                android.webkit.WebView r1 = com.tkay.core.basead.ui.web.WebLandPageActivity.d(r1)
                r1.goBack()
            L15:
                return
        }
    }

    final class 3 implements android.view.View.OnClickListener {
        final com.tkay.core.basead.ui.web.WebLandPageActivity a;

        3(com.tkay.core.basead.ui.web.WebLandPageActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                android.webkit.WebView r1 = com.tkay.core.basead.ui.web.WebLandPageActivity.d(r1)
                boolean r1 = r1.canGoForward()
                if (r1 == 0) goto L15
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                android.webkit.WebView r1 = com.tkay.core.basead.ui.web.WebLandPageActivity.d(r1)
                r1.goForward()
            L15:
                return
        }
    }

    final class 4 implements android.view.View.OnClickListener {
        final com.tkay.core.basead.ui.web.WebLandPageActivity a;

        4(com.tkay.core.basead.ui.web.WebLandPageActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                android.webkit.WebView r1 = com.tkay.core.basead.ui.web.WebLandPageActivity.d(r1)
                r1.reload()
                return
        }
    }

    final class 5 implements android.view.View.OnClickListener {
        final com.tkay.core.basead.ui.web.WebLandPageActivity a;

        5(com.tkay.core.basead.ui.web.WebLandPageActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
                r1.finish()
                return
        }
    }


    public WebLandPageActivity() {
            r1 = this;
            r1.<init>()
            r0 = 8
            r1.a = r0
            r0 = 0
            r1.r = r0
            r0 = 512(0x200, float:7.17E-43)
            r1.s = r0
            r0 = 0
            r1.c = r0
            r1.d = r0
            return
    }

    static android.webkit.ValueCallback a(com.tkay.core.basead.ui.web.WebLandPageActivity r0, android.webkit.ValueCallback r1) {
            r0.r = r1
            return r1
    }

    private android.widget.ImageButton a(android.graphics.drawable.Drawable r6) {
            r5 = this;
            android.widget.ImageButton r0 = new android.widget.ImageButton
            r0.<init>(r5)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r2 = 1108082688(0x420c0000, float:35.0)
            int r2 = com.tkay.core.common.l.h.a(r5, r2)
            r3 = -2
            r4 = 1065353216(0x3f800000, float:1.0)
            r1.<init>(r3, r2, r4)
            r2 = 16
            r1.gravity = r2
            r0.setLayoutParams(r1)
            r1 = 0
            r0.setBackgroundColor(r1)
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r0.setScaleType(r1)
            r0.setImageDrawable(r6)
            return r0
    }

    static com.tkay.core.common.f.h a(com.tkay.core.basead.ui.web.WebLandPageActivity r0) {
            com.tkay.core.common.f.h r0 = r0.m
            return r0
    }

    public static void a(android.content.Context r3, com.tkay.core.basead.b.a r4) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.Class<com.tkay.core.basead.ui.web.WebLandPageActivity> r1 = com.tkay.core.basead.ui.web.WebLandPageActivity.class
            r0.setClass(r3, r1)
            com.tkay.core.common.f.h r1 = r4.c
            java.lang.String r2 = "extra_offer_ad"
            r0.putExtra(r2, r1)
            com.tkay.core.common.f.i r1 = r4.h
            java.lang.String r2 = "extra_request_info"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r4.f
            java.lang.String r2 = "extra_target_url"
            r0.putExtra(r2, r1)
            com.tkay.core.api.IOfferClickHandler r1 = r4.g
            if (r1 == 0) goto L2a
            com.tkay.core.api.IOfferClickHandler r4 = r4.g
            java.lang.String r1 = "extra_click_handler"
            r0.putExtra(r1, r4)
        L2a:
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)
            r3.startActivity(r0)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2) {
            com.tkay.core.basead.b.a r0 = new com.tkay.core.basead.b.a
            r0.<init>()
            r0.f = r2
            a(r1, r0)
            return
    }

    private void a(java.lang.String r8) {
            r7 = this;
            android.webkit.WebView r0 = r7.g
            android.webkit.WebSettings r0 = r0.getSettings()
            android.webkit.WebView r1 = r7.g
            r2 = 0
            r1.setHorizontalScrollBarEnabled(r2)
            android.webkit.WebView r1 = r7.g
            r1.setVerticalScrollBarEnabled(r2)
            android.webkit.WebView r1 = r7.g
            r1.setVerticalScrollBarEnabled(r2)
            android.webkit.WebView r1 = r7.g
            r1.requestFocus()
            r1 = 1
            r0.setJavaScriptEnabled(r1)
            r0.setAppCacheEnabled(r1)
            r3 = 5242880(0x500000, double:2.590327E-317)
            r0.setAppCacheMaxSize(r3)
            r0.setAllowFileAccess(r2)
            r0.setBuiltInZoomControls(r1)
            r0.setJavaScriptCanOpenWindowsAutomatically(r1)
            r0.setDomStorageEnabled(r1)
            r0.setSupportZoom(r1)
            r0.setBuiltInZoomControls(r1)
            r0.setSavePassword(r2)
            r0.setDatabaseEnabled(r1)
            r0.setUseWideViewPort(r1)
            r0.setLoadWithOverviewMode(r1)
            android.webkit.WebSettings$RenderPriority r3 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 17
            if (r3 < r4) goto L54
            r0.setMediaPlaybackRequiresUserGesture(r2)
        L54:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L5e
            r4 = 21
            if (r3 < r4) goto L62
            r0.setMixedContentMode(r2)     // Catch: java.lang.Exception -> L5e
            goto L62
        L5e:
            r3 = move-exception
            r3.printStackTrace()
        L62:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 11
            if (r3 < r4) goto L82
            java.lang.Class<android.webkit.WebSettings> r3 = android.webkit.WebSettings.class
            java.lang.String r4 = "setDisplayZoomControls"
            java.lang.Class[] r5 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L82
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L82
            r5[r2] = r6     // Catch: java.lang.Exception -> L82
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r5)     // Catch: java.lang.Exception -> L82
            r3.setAccessible(r1)     // Catch: java.lang.Exception -> L82
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L82
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> L82
            r4[r2] = r5     // Catch: java.lang.Exception -> L82
            r3.invoke(r0, r4)     // Catch: java.lang.Exception -> L82
        L82:
            r0.setDatabaseEnabled(r1)
            java.lang.String r3 = "database"
            java.io.File r2 = r7.getDir(r3, r2)
            java.lang.String r2 = r2.getPath()
            r0.setDatabasePath(r2)
            r0.setGeolocationEnabled(r1)
            r0.setGeolocationDatabasePath(r2)
            android.webkit.WebView r0 = r7.g
            com.tkay.core.basead.ui.web.a r1 = new com.tkay.core.basead.ui.web.a
            r1.<init>(r7)
            r0.setWebViewClient(r1)
            android.webkit.WebView r0 = r7.g
            com.tkay.core.basead.ui.web.WebLandPageActivity$1 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$1
            r1.<init>(r7)
            r0.setDownloadListener(r1)
            com.tkay.core.common.f.an r8 = com.tkay.core.basead.a.a.a(r8)
            int r0 = r8.l
            r7.a = r0
            android.webkit.WebView r0 = r7.g
            java.lang.String r8 = r8.o
            r0.loadUrl(r8)
            return
    }

    private void a(boolean r3) {
            r2 = this;
            android.widget.ImageButton r0 = r2.i
            java.lang.String r1 = "drawable"
            if (r3 == 0) goto Ld
            java.lang.String r3 = "browser_right_icon"
            int r3 = com.tkay.core.common.l.h.a(r2, r3, r1)
            goto L13
        Ld:
            java.lang.String r3 = "browser_unright_icon"
            int r3 = com.tkay.core.common.l.h.a(r2, r3, r1)
        L13:
            r0.setImageResource(r3)
            return
    }

    static com.tkay.core.common.f.i b(com.tkay.core.basead.ui.web.WebLandPageActivity r0) {
            com.tkay.core.common.f.i r0 = r0.n
            return r0
    }

    private void b() {
            r3 = this;
            android.content.Intent r0 = r3.getIntent()
            if (r0 == 0) goto L59
            java.lang.String r1 = "extra_offer_ad"
            java.io.Serializable r1 = r0.getSerializableExtra(r1)     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L22
            boolean r2 = r1 instanceof com.tkay.core.common.f.h     // Catch: java.lang.Throwable -> L1e
            if (r2 == 0) goto L22
            com.tkay.core.common.f.h r1 = (com.tkay.core.common.f.h) r1     // Catch: java.lang.Throwable -> L1e
            r3.m = r1     // Catch: java.lang.Throwable -> L1e
            com.tkay.core.basead.ui.web.b r2 = new com.tkay.core.basead.ui.web.b     // Catch: java.lang.Throwable -> L1e
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L1e
            r3.q = r2     // Catch: java.lang.Throwable -> L1e
            goto L22
        L1e:
            r1 = move-exception
            r1.printStackTrace()
        L22:
            java.lang.String r1 = "extra_request_info"
            java.io.Serializable r1 = r0.getSerializableExtra(r1)     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L37
            boolean r2 = r1 instanceof com.tkay.core.common.f.i     // Catch: java.lang.Throwable -> L33
            if (r2 == 0) goto L37
            com.tkay.core.common.f.i r1 = (com.tkay.core.common.f.i) r1     // Catch: java.lang.Throwable -> L33
            r3.n = r1     // Catch: java.lang.Throwable -> L33
            goto L37
        L33:
            r1 = move-exception
            r1.printStackTrace()
        L37:
            java.lang.String r1 = "extra_click_handler"
            java.io.Serializable r1 = r0.getSerializableExtra(r1)     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L4c
            boolean r2 = r1 instanceof com.tkay.core.api.IOfferClickHandler     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L4c
            com.tkay.core.api.IOfferClickHandler r1 = (com.tkay.core.api.IOfferClickHandler) r1     // Catch: java.lang.Throwable -> L48
            r3.p = r1     // Catch: java.lang.Throwable -> L48
            goto L4c
        L48:
            r1 = move-exception
            r1.printStackTrace()
        L4c:
            java.lang.String r1 = "extra_target_url"
            java.lang.String r0 = r0.getStringExtra(r1)     // Catch: java.lang.Throwable -> L55
            r3.o = r0     // Catch: java.lang.Throwable -> L55
            return
        L55:
            r0 = move-exception
            r0.printStackTrace()
        L59:
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            org.json.JSONArray r0 = r1.b
            if (r0 != 0) goto Lb
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1.b = r0
        Lb:
            org.json.JSONArray r0 = r1.b
            r0.put(r2)
            return
    }

    private void b(boolean r3) {
            r2 = this;
            android.widget.ImageButton r0 = r2.h
            java.lang.String r1 = "drawable"
            if (r3 == 0) goto Ld
            java.lang.String r3 = "browser_left_icon"
            int r3 = com.tkay.core.common.l.h.a(r2, r3, r1)
            goto L13
        Ld:
            java.lang.String r3 = "browser_unleft_icon"
            int r3 = com.tkay.core.common.l.h.a(r2, r3, r1)
        L13:
            r0.setImageResource(r3)
            return
    }

    static com.tkay.core.api.IOfferClickHandler c(com.tkay.core.basead.ui.web.WebLandPageActivity r0) {
            com.tkay.core.api.IOfferClickHandler r0 = r0.p
            return r0
    }

    private void c() {
            r3 = this;
            android.widget.ImageButton r0 = r3.h
            r1 = 0
            r0.setBackgroundColor(r1)
            android.widget.ImageButton r0 = r3.h
            com.tkay.core.basead.ui.web.WebLandPageActivity$2 r2 = new com.tkay.core.basead.ui.web.WebLandPageActivity$2
            r2.<init>(r3)
            r0.setOnClickListener(r2)
            android.widget.ImageButton r0 = r3.i
            r0.setBackgroundColor(r1)
            android.widget.ImageButton r0 = r3.i
            com.tkay.core.basead.ui.web.WebLandPageActivity$3 r2 = new com.tkay.core.basead.ui.web.WebLandPageActivity$3
            r2.<init>(r3)
            r0.setOnClickListener(r2)
            android.widget.ImageButton r0 = r3.j
            r0.setBackgroundColor(r1)
            android.widget.ImageButton r0 = r3.j
            com.tkay.core.basead.ui.web.WebLandPageActivity$4 r2 = new com.tkay.core.basead.ui.web.WebLandPageActivity$4
            r2.<init>(r3)
            r0.setOnClickListener(r2)
            android.widget.ImageButton r0 = r3.k
            r0.setBackgroundColor(r1)
            android.widget.ImageButton r0 = r3.k
            com.tkay.core.basead.ui.web.WebLandPageActivity$5 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$5
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            return
    }

    static android.webkit.WebView d(com.tkay.core.basead.ui.web.WebLandPageActivity r0) {
            android.webkit.WebView r0 = r0.g
            return r0
    }

    private void d() {
            r1 = this;
            android.webkit.CookieSyncManager.createInstance(r1)
            android.webkit.CookieSyncManager r0 = android.webkit.CookieSyncManager.getInstance()
            r0.startSync()
            return
    }

    private android.view.View e() {
            r8 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r8)
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setBackgroundColor(r1)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r0.setLayoutParams(r1)
            android.widget.LinearLayout r1 = new android.widget.LinearLayout
            r1.<init>(r8)
            r3 = 343452(0x53d9c, float:4.81279E-40)
            r1.setId(r3)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r5 = 1113325568(0x425c0000, float:55.0)
            int r5 = com.tkay.core.common.l.h.a(r8, r5)
            r4.<init>(r2, r5)
            r5 = 12
            r4.addRule(r5)
            r1.setLayoutParams(r4)
            android.graphics.drawable.ColorDrawable r4 = new android.graphics.drawable.ColorDrawable
            r5 = -592138(0xfffffffffff6f6f6, float:NaN)
            r4.<init>(r5)
            r1.setBackgroundDrawable(r4)
            r4 = 1101004800(0x41a00000, float:20.0)
            int r4 = com.tkay.core.common.l.h.a(r8, r4)
            r5 = 0
            r1.setPadding(r4, r5, r4, r5)
            r0.addView(r1)
            android.content.res.Resources r4 = r8.getResources()
            java.lang.String r6 = "drawable"
            java.lang.String r7 = "browser_unleft_icon"
            int r7 = com.tkay.core.common.l.h.a(r8, r7, r6)
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r7)
            android.widget.ImageButton r4 = r8.a(r4)
            r8.h = r4
            android.content.res.Resources r4 = r8.getResources()
            java.lang.String r7 = "browser_unright_icon"
            int r7 = com.tkay.core.common.l.h.a(r8, r7, r6)
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r7)
            android.widget.ImageButton r4 = r8.a(r4)
            r8.i = r4
            android.content.res.Resources r4 = r8.getResources()
            java.lang.String r7 = "browser_refresh_icon"
            int r7 = com.tkay.core.common.l.h.a(r8, r7, r6)
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r7)
            android.widget.ImageButton r4 = r8.a(r4)
            r8.j = r4
            android.content.res.Resources r4 = r8.getResources()
            java.lang.String r7 = "browser_close_icon"
            int r6 = com.tkay.core.common.l.h.a(r8, r7, r6)
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r6)
            android.widget.ImageButton r4 = r8.a(r4)
            r8.k = r4
            android.widget.ImageButton r4 = r8.h
            r1.addView(r4)
            android.widget.ImageButton r4 = r8.i
            r1.addView(r4)
            android.widget.ImageButton r4 = r8.j
            r1.addView(r4)
            android.widget.ImageButton r4 = r8.k
            r1.addView(r4)
            com.tkay.core.basead.ui.web.BaseWebView r1 = new com.tkay.core.basead.ui.web.BaseWebView
            r1.<init>(r8)
            r8.g = r1
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r2, r2)
            r4 = 2
            r1.addRule(r4, r3)
            android.webkit.WebView r6 = r8.g
            r6.setLayoutParams(r1)
            android.webkit.WebView r1 = r8.g
            r0.addView(r1)
            android.view.View r1 = new android.view.View
            r1.<init>(r8)
            r6 = -2434342(0xffffffffffdadada, float:NaN)
            r1.setBackgroundColor(r6)
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r7 = 1065353216(0x3f800000, float:1.0)
            int r7 = com.tkay.core.common.l.h.a(r8, r7)
            r6.<init>(r2, r7)
            r6.addRule(r4, r3)
            r1.setLayoutParams(r6)
            r0.addView(r1)
            com.tkay.core.basead.ui.web.WebProgressBarView r1 = new com.tkay.core.basead.ui.web.WebProgressBarView
            r1.<init>(r8)
            r8.f = r1
            r1.setProgress(r5)
            com.tkay.core.basead.ui.web.WebProgressBarView r1 = r8.f
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r4 = 1073741824(0x40000000, float:2.0)
            int r4 = com.tkay.core.common.l.h.a(r8, r4)
            r3.<init>(r2, r4)
            r0.addView(r1, r3)
            return r0
    }

    static com.tkay.core.basead.ui.web.WebProgressBarView e(com.tkay.core.basead.ui.web.WebLandPageActivity r0) {
            com.tkay.core.basead.ui.web.WebProgressBarView r0 = r0.f
            return r0
    }

    public final com.tkay.core.basead.ui.web.WebProgressBarView a() {
            r1 = this;
            com.tkay.core.basead.ui.web.WebProgressBarView r0 = r1.f
            return r0
    }

    public final void a(android.webkit.WebView r6, java.lang.String r7) {
            r5 = this;
            boolean r0 = r6.canGoBack()
            android.widget.ImageButton r1 = r5.h
            java.lang.String r2 = "drawable"
            if (r0 == 0) goto L11
            java.lang.String r0 = "browser_left_icon"
            int r0 = com.tkay.core.common.l.h.a(r5, r0, r2)
            goto L17
        L11:
            java.lang.String r0 = "browser_unleft_icon"
            int r0 = com.tkay.core.common.l.h.a(r5, r0, r2)
        L17:
            r1.setImageResource(r0)
            boolean r0 = r6.canGoForward()
            android.widget.ImageButton r1 = r5.i
            if (r0 == 0) goto L29
            java.lang.String r0 = "browser_right_icon"
            int r0 = com.tkay.core.common.l.h.a(r5, r0, r2)
            goto L2f
        L29:
            java.lang.String r0 = "browser_unright_icon"
            int r0 = com.tkay.core.common.l.h.a(r5, r0, r2)
        L2f:
            r1.setImageResource(r0)
            com.tkay.core.basead.ui.web.b r0 = r5.q
            if (r0 == 0) goto L6f
            org.json.JSONObject r1 = r0.b
            if (r1 == 0) goto L6f
            org.json.JSONObject r1 = r0.b     // Catch: java.lang.Throwable -> L6f
            java.util.Iterator r1 = r1.keys()     // Catch: java.lang.Throwable -> L6f
        L40:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L6f
            if (r2 == 0) goto L6f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L6f
            if (r2 == 0) goto L40
            if (r7 == 0) goto L40
            boolean r3 = r7.contains(r2)     // Catch: java.lang.Throwable -> L6f
            if (r3 == 0) goto L40
            java.util.HashMap<java.lang.String, java.lang.Boolean> r3 = r0.c     // Catch: java.lang.Throwable -> L6f
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L6f
            if (r3 != 0) goto L40
            java.util.HashMap<java.lang.String, java.lang.Boolean> r3 = r0.c     // Catch: java.lang.Throwable -> L6f
            java.lang.Boolean r4 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L6f
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L6f
            org.json.JSONObject r3 = r0.b     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = r3.optString(r2)     // Catch: java.lang.Throwable -> L6f
            r6.loadUrl(r2)     // Catch: java.lang.Throwable -> L6f
            goto L40
        L6f:
            return
    }

    protected final void a(com.tkay.core.common.f.an r2) {
            r1 = this;
            int r0 = r2.l
            r1.a = r0
            boolean r0 = r2.n
            if (r0 == 0) goto L16
            boolean r2 = r2.m
            if (r2 == 0) goto L13
            r2 = 1
            r1.c = r2
            r1.finish()
            return
        L13:
            r2 = 2
            r1.c = r2
        L16:
            return
    }

    @Override
    public void finish() {
            r1 = this;
            android.view.Window r0 = r1.getWindow()
            android.view.View r0 = r0.getDecorView()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeAllViews()
            super.finish()
            return
    }

    @Override
    protected void onActivityResult(int r8, int r9, android.content.Intent r10) {
            r7 = this;
            r0 = 512(0x200, float:7.17E-43)
            if (r8 != r0) goto L4c
            android.webkit.ValueCallback<android.net.Uri[]> r0 = r7.r     // Catch: java.lang.Throwable -> L49
            if (r0 != 0) goto L9
            goto L4c
        L9:
            r0 = -1
            r1 = 0
            if (r9 != r0) goto L41
            if (r10 == 0) goto L41
            java.lang.String r0 = r10.getDataString()     // Catch: java.lang.Throwable -> L49
            r2 = 0
            android.content.ClipData r3 = r10.getClipData()     // Catch: java.lang.Throwable -> L34
            if (r3 == 0) goto L34
            int r4 = r3.getItemCount()     // Catch: java.lang.Throwable -> L34
            android.net.Uri[] r4 = new android.net.Uri[r4]     // Catch: java.lang.Throwable -> L34
            r5 = r2
        L21:
            int r6 = r3.getItemCount()     // Catch: java.lang.Throwable -> L35
            if (r5 >= r6) goto L35
            android.content.ClipData$Item r6 = r3.getItemAt(r5)     // Catch: java.lang.Throwable -> L35
            android.net.Uri r6 = r6.getUri()     // Catch: java.lang.Throwable -> L35
            r4[r5] = r6     // Catch: java.lang.Throwable -> L35
            int r5 = r5 + 1
            goto L21
        L34:
            r4 = r1
        L35:
            if (r0 == 0) goto L42
            r3 = 1
            android.net.Uri[] r4 = new android.net.Uri[r3]     // Catch: java.lang.Throwable -> L49
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L49
            r4[r2] = r0     // Catch: java.lang.Throwable -> L49
            goto L42
        L41:
            r4 = r1
        L42:
            android.webkit.ValueCallback<android.net.Uri[]> r0 = r7.r     // Catch: java.lang.Throwable -> L49
            r0.onReceiveValue(r4)     // Catch: java.lang.Throwable -> L49
            r7.r = r1     // Catch: java.lang.Throwable -> L49
        L49:
            super.onActivityResult(r8, r9, r10)
        L4c:
            return
    }

    @Override
    public void onCreate(android.os.Bundle r10) {
            r9 = this;
            super.onCreate(r10)
            r10 = -1
            r9.setResult(r10)
            android.view.Window r0 = r9.getWindow()
            r1 = 2
            boolean r0 = r0.requestFeature(r1)
            r9.l = r0
            if (r0 == 0) goto L1b
            android.view.Window r0 = r9.getWindow()
            r0.setFeatureInt(r1, r10)
        L1b:
            android.content.Intent r0 = r9.getIntent()
            if (r0 == 0) goto L74
            java.lang.String r2 = "extra_offer_ad"
            java.io.Serializable r2 = r0.getSerializableExtra(r2)     // Catch: java.lang.Throwable -> L39
            if (r2 == 0) goto L3d
            boolean r3 = r2 instanceof com.tkay.core.common.f.h     // Catch: java.lang.Throwable -> L39
            if (r3 == 0) goto L3d
            com.tkay.core.common.f.h r2 = (com.tkay.core.common.f.h) r2     // Catch: java.lang.Throwable -> L39
            r9.m = r2     // Catch: java.lang.Throwable -> L39
            com.tkay.core.basead.ui.web.b r3 = new com.tkay.core.basead.ui.web.b     // Catch: java.lang.Throwable -> L39
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L39
            r9.q = r3     // Catch: java.lang.Throwable -> L39
            goto L3d
        L39:
            r2 = move-exception
            r2.printStackTrace()
        L3d:
            java.lang.String r2 = "extra_request_info"
            java.io.Serializable r2 = r0.getSerializableExtra(r2)     // Catch: java.lang.Throwable -> L4e
            if (r2 == 0) goto L52
            boolean r3 = r2 instanceof com.tkay.core.common.f.i     // Catch: java.lang.Throwable -> L4e
            if (r3 == 0) goto L52
            com.tkay.core.common.f.i r2 = (com.tkay.core.common.f.i) r2     // Catch: java.lang.Throwable -> L4e
            r9.n = r2     // Catch: java.lang.Throwable -> L4e
            goto L52
        L4e:
            r2 = move-exception
            r2.printStackTrace()
        L52:
            java.lang.String r2 = "extra_click_handler"
            java.io.Serializable r2 = r0.getSerializableExtra(r2)     // Catch: java.lang.Throwable -> L63
            if (r2 == 0) goto L67
            boolean r3 = r2 instanceof com.tkay.core.api.IOfferClickHandler     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L67
            com.tkay.core.api.IOfferClickHandler r2 = (com.tkay.core.api.IOfferClickHandler) r2     // Catch: java.lang.Throwable -> L63
            r9.p = r2     // Catch: java.lang.Throwable -> L63
            goto L67
        L63:
            r2 = move-exception
            r2.printStackTrace()
        L67:
            java.lang.String r2 = "extra_target_url"
            java.lang.String r0 = r0.getStringExtra(r2)     // Catch: java.lang.Throwable -> L70
            r9.o = r0     // Catch: java.lang.Throwable -> L70
            goto L74
        L70:
            r0 = move-exception
            r0.printStackTrace()
        L74:
            java.lang.String r0 = r9.o
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L87
            com.tkay.core.common.f.h r0 = r9.m
            if (r0 == 0) goto L85
            java.lang.String r0 = r0.A()
            goto L87
        L85:
            java.lang.String r0 = ""
        L87:
            android.content.Context r2 = r9.getApplicationContext()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            r4 = 0
            if (r3 == 0) goto La5
            java.lang.String r10 = "basead_click_empty"
            java.lang.String r0 = "string"
            int r10 = com.tkay.core.common.l.h.a(r2, r10, r0)
            android.widget.Toast r10 = android.widget.Toast.makeText(r2, r10, r4)
            r10.show()
            r9.finish()
            return
        La5:
            com.tkay.core.common.f.an r2 = com.tkay.core.basead.a.a.a(r2, r0)
            boolean r3 = r2.m
            if (r3 == 0) goto Lb1
            r9.a(r2)
            return
        Lb1:
            r9.a(r2)
            android.widget.RelativeLayout r2 = new android.widget.RelativeLayout
            r2.<init>(r9)
            r3 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2.setBackgroundColor(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r10, r10)
            r2.setLayoutParams(r3)
            android.widget.LinearLayout r3 = new android.widget.LinearLayout
            r3.<init>(r9)
            r5 = 343452(0x53d9c, float:4.81279E-40)
            r3.setId(r5)
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r7 = 1113325568(0x425c0000, float:55.0)
            int r7 = com.tkay.core.common.l.h.a(r9, r7)
            r6.<init>(r10, r7)
            r7 = 12
            r6.addRule(r7)
            r3.setLayoutParams(r6)
            android.graphics.drawable.ColorDrawable r6 = new android.graphics.drawable.ColorDrawable
            r7 = -592138(0xfffffffffff6f6f6, float:NaN)
            r6.<init>(r7)
            r3.setBackgroundDrawable(r6)
            r6 = 1101004800(0x41a00000, float:20.0)
            int r6 = com.tkay.core.common.l.h.a(r9, r6)
            r3.setPadding(r6, r4, r6, r4)
            r2.addView(r3)
            android.content.res.Resources r6 = r9.getResources()
            java.lang.String r7 = "drawable"
            java.lang.String r8 = "browser_unleft_icon"
            int r8 = com.tkay.core.common.l.h.a(r9, r8, r7)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r8)
            android.widget.ImageButton r6 = r9.a(r6)
            r9.h = r6
            android.content.res.Resources r6 = r9.getResources()
            java.lang.String r8 = "browser_unright_icon"
            int r8 = com.tkay.core.common.l.h.a(r9, r8, r7)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r8)
            android.widget.ImageButton r6 = r9.a(r6)
            r9.i = r6
            android.content.res.Resources r6 = r9.getResources()
            java.lang.String r8 = "browser_refresh_icon"
            int r8 = com.tkay.core.common.l.h.a(r9, r8, r7)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r8)
            android.widget.ImageButton r6 = r9.a(r6)
            r9.j = r6
            android.content.res.Resources r6 = r9.getResources()
            java.lang.String r8 = "browser_close_icon"
            int r7 = com.tkay.core.common.l.h.a(r9, r8, r7)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r7)
            android.widget.ImageButton r6 = r9.a(r6)
            r9.k = r6
            android.widget.ImageButton r6 = r9.h
            r3.addView(r6)
            android.widget.ImageButton r6 = r9.i
            r3.addView(r6)
            android.widget.ImageButton r6 = r9.j
            r3.addView(r6)
            android.widget.ImageButton r6 = r9.k
            r3.addView(r6)
            com.tkay.core.basead.ui.web.BaseWebView r3 = new com.tkay.core.basead.ui.web.BaseWebView
            r3.<init>(r9)
            r9.g = r3
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r10, r10)
            r3.addRule(r1, r5)
            android.webkit.WebView r6 = r9.g
            r6.setLayoutParams(r3)
            android.webkit.WebView r3 = r9.g
            r2.addView(r3)
            android.view.View r3 = new android.view.View
            r3.<init>(r9)
            r6 = -2434342(0xffffffffffdadada, float:NaN)
            r3.setBackgroundColor(r6)
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            r7 = 1065353216(0x3f800000, float:1.0)
            int r7 = com.tkay.core.common.l.h.a(r9, r7)
            r6.<init>(r10, r7)
            r6.addRule(r1, r5)
            r3.setLayoutParams(r6)
            r2.addView(r3)
            com.tkay.core.basead.ui.web.WebProgressBarView r1 = new com.tkay.core.basead.ui.web.WebProgressBarView
            r1.<init>(r9)
            r9.f = r1
            r1.setProgress(r4)
            com.tkay.core.basead.ui.web.WebProgressBarView r1 = r9.f
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r5 = 1073741824(0x40000000, float:2.0)
            int r5 = com.tkay.core.common.l.h.a(r9, r5)
            r3.<init>(r10, r5)
            r2.addView(r1, r3)
            r9.setContentView(r2)
            android.widget.ImageButton r10 = r9.h
            r10.setBackgroundColor(r4)
            android.widget.ImageButton r10 = r9.h
            com.tkay.core.basead.ui.web.WebLandPageActivity$2 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$2
            r1.<init>(r9)
            r10.setOnClickListener(r1)
            android.widget.ImageButton r10 = r9.i
            r10.setBackgroundColor(r4)
            android.widget.ImageButton r10 = r9.i
            com.tkay.core.basead.ui.web.WebLandPageActivity$3 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$3
            r1.<init>(r9)
            r10.setOnClickListener(r1)
            android.widget.ImageButton r10 = r9.j
            r10.setBackgroundColor(r4)
            android.widget.ImageButton r10 = r9.j
            com.tkay.core.basead.ui.web.WebLandPageActivity$4 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$4
            r1.<init>(r9)
            r10.setOnClickListener(r1)
            android.widget.ImageButton r10 = r9.k
            r10.setBackgroundColor(r4)
            android.widget.ImageButton r10 = r9.k
            com.tkay.core.basead.ui.web.WebLandPageActivity$5 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$5
            r1.<init>(r9)
            r10.setOnClickListener(r1)
            android.webkit.CookieSyncManager.createInstance(r9)
            android.webkit.CookieSyncManager r10 = android.webkit.CookieSyncManager.getInstance()
            r10.startSync()
            android.webkit.WebView r10 = r9.g
            android.webkit.WebSettings r10 = r10.getSettings()
            android.webkit.WebView r1 = r9.g
            r1.setHorizontalScrollBarEnabled(r4)
            android.webkit.WebView r1 = r9.g
            r1.setVerticalScrollBarEnabled(r4)
            android.webkit.WebView r1 = r9.g
            r1.setVerticalScrollBarEnabled(r4)
            android.webkit.WebView r1 = r9.g
            r1.requestFocus()
            r1 = 1
            r10.setJavaScriptEnabled(r1)
            r10.setAppCacheEnabled(r1)
            r2 = 5242880(0x500000, double:2.590327E-317)
            r10.setAppCacheMaxSize(r2)
            r10.setAllowFileAccess(r4)
            r10.setBuiltInZoomControls(r1)
            r10.setJavaScriptCanOpenWindowsAutomatically(r1)
            r10.setDomStorageEnabled(r1)
            r10.setSupportZoom(r1)
            r10.setBuiltInZoomControls(r1)
            r10.setSavePassword(r4)
            r10.setDatabaseEnabled(r1)
            r10.setUseWideViewPort(r1)
            r10.setLoadWithOverviewMode(r1)
            android.webkit.WebSettings$RenderPriority r2 = android.webkit.WebSettings.RenderPriority.HIGH
            r10.setRenderPriority(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 17
            if (r2 < r3) goto L24f
            r10.setMediaPlaybackRequiresUserGesture(r4)
        L24f:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L259
            r3 = 21
            if (r2 < r3) goto L25d
            r10.setMixedContentMode(r4)     // Catch: java.lang.Exception -> L259
            goto L25d
        L259:
            r2 = move-exception
            r2.printStackTrace()
        L25d:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 11
            if (r2 < r3) goto L27d
            java.lang.Class<android.webkit.WebSettings> r2 = android.webkit.WebSettings.class
            java.lang.String r3 = "setDisplayZoomControls"
            java.lang.Class[] r5 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L27d
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L27d
            r5[r4] = r6     // Catch: java.lang.Exception -> L27d
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r5)     // Catch: java.lang.Exception -> L27d
            r2.setAccessible(r1)     // Catch: java.lang.Exception -> L27d
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L27d
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> L27d
            r3[r4] = r5     // Catch: java.lang.Exception -> L27d
            r2.invoke(r10, r3)     // Catch: java.lang.Exception -> L27d
        L27d:
            r10.setDatabaseEnabled(r1)
            java.lang.String r2 = "database"
            java.io.File r2 = r9.getDir(r2, r4)
            java.lang.String r2 = r2.getPath()
            r10.setDatabasePath(r2)
            r10.setGeolocationEnabled(r1)
            r10.setGeolocationDatabasePath(r2)
            android.webkit.WebView r10 = r9.g
            com.tkay.core.basead.ui.web.a r1 = new com.tkay.core.basead.ui.web.a
            r1.<init>(r9)
            r10.setWebViewClient(r1)
            android.webkit.WebView r10 = r9.g
            com.tkay.core.basead.ui.web.WebLandPageActivity$1 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$1
            r1.<init>(r9)
            r10.setDownloadListener(r1)
            com.tkay.core.common.f.an r10 = com.tkay.core.basead.a.a.a(r0)
            int r0 = r10.l
            r9.a = r0
            android.webkit.WebView r0 = r9.g
            java.lang.String r10 = r10.o
            r0.loadUrl(r10)
            return
    }

    @Override
    protected void onDestroy() {
            r11 = this;
            super.onDestroy()
            android.webkit.WebView r0 = r11.g
            r1 = 0
            if (r0 == 0) goto L10
            r0.setDownloadListener(r1)
            android.webkit.WebView r0 = r11.g
            r0.destroy()
        L10:
            r11.g = r1
            com.tkay.core.common.f.h r0 = r11.m
            if (r0 == 0) goto L3d
            com.tkay.core.common.f.i r0 = r11.n
            if (r0 == 0) goto L3d
            java.lang.String r1 = r0.b
            com.tkay.core.common.f.i r0 = r11.n
            java.lang.String r2 = r0.d
            com.tkay.core.common.f.h r0 = r11.m
            int r3 = r0.d()
            com.tkay.core.common.f.h r0 = r11.m
            java.lang.String r4 = r0.p()
            org.json.JSONArray r5 = r11.b
            int r6 = r11.c
            int r7 = r11.d
            int r8 = r11.a
            java.lang.String r9 = r11.o
            com.tkay.core.common.f.i r0 = r11.n
            int r10 = r0.j
            com.tkay.core.common.k.c.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
        L3d:
            return
    }

    @Override
    protected void onPause() {
            r2 = this;
            super.onPause()
            android.webkit.CookieSyncManager r0 = android.webkit.CookieSyncManager.getInstance()
            r0.stopSync()
            android.webkit.WebView r0 = r2.g
            r1 = 0
            r0.setWebChromeClient(r1)
            android.webkit.WebView r0 = r2.g
            boolean r1 = r2.isFinishing()
            if (r1 == 0) goto L20
            r0.stopLoading()
            java.lang.String r1 = ""
            r0.loadUrl(r1)
        L20:
            r0.onPause()
            return
    }

    @Override
    protected void onResume() {
            r2 = this;
            super.onResume()
            android.webkit.CookieSyncManager r0 = android.webkit.CookieSyncManager.getInstance()
            r0.startSync()
            android.webkit.WebView r0 = r2.g
            com.tkay.core.basead.ui.web.WebLandPageActivity$6 r1 = new com.tkay.core.basead.ui.web.WebLandPageActivity$6
            r1.<init>(r2)
            r0.setWebChromeClient(r1)
            android.webkit.WebView r0 = r2.g
            r0.onResume()
            return
    }

    @Override
    protected void onStart() {
            r0 = this;
            super.onStart()
            return
    }
}
