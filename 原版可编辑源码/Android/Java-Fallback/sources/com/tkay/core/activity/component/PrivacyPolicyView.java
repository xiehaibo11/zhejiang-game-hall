package com.tkay.core.activity.component;

public class PrivacyPolicyView extends android.widget.RelativeLayout implements android.view.View.OnClickListener {
    private static java.lang.String n;
    android.view.ViewGroup a;
    android.widget.LinearLayout b;
    com.tkay.core.activity.component.LoadingView c;
    android.widget.TextView d;
    android.widget.FrameLayout e;
    android.webkit.WebView f;
    android.widget.CheckBox g;
    android.view.View h;
    android.widget.TextView i;
    boolean j;
    boolean k;
    java.lang.String l;
    com.tkay.core.activity.component.PrivacyPolicyView.a m;

    final class 1 implements android.view.View.OnClickListener {
        final com.tkay.core.activity.component.PrivacyPolicyView a;

        1(com.tkay.core.activity.component.PrivacyPolicyView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.activity.component.PrivacyPolicyView r2 = r1.a     // Catch: java.lang.Throwable -> L23
                android.webkit.WebView r2 = r2.f     // Catch: java.lang.Throwable -> L23
                if (r2 == 0) goto L23
                com.tkay.core.activity.component.PrivacyPolicyView r2 = r1.a     // Catch: java.lang.Throwable -> L23
                boolean r2 = r2.k     // Catch: java.lang.Throwable -> L23
                if (r2 != 0) goto L23
                com.tkay.core.activity.component.PrivacyPolicyView r2 = r1.a     // Catch: java.lang.Throwable -> L23
                r0 = 1
                r2.j = r0     // Catch: java.lang.Throwable -> L23
                java.lang.String r2 = com.tkay.core.activity.component.PrivacyPolicyView.a()     // Catch: java.lang.Throwable -> L23
                java.lang.String r0 = "reload......."
                android.util.Log.d(r2, r0)     // Catch: java.lang.Throwable -> L23
                com.tkay.core.activity.component.PrivacyPolicyView r2 = r1.a     // Catch: java.lang.Throwable -> L23
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r1.a     // Catch: java.lang.Throwable -> L23
                java.lang.String r0 = r0.l     // Catch: java.lang.Throwable -> L23
                r2.loadPolicyUrl(r0)     // Catch: java.lang.Throwable -> L23
            L23:
                return
        }
    }

    final class 2 extends android.webkit.WebViewClient {
        final com.tkay.core.activity.component.PrivacyPolicyView a;

        2(com.tkay.core.activity.component.PrivacyPolicyView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r5, java.lang.String r6) {
                r4 = this;
                java.lang.String r0 = com.tkay.core.activity.component.PrivacyPolicyView.a()     // Catch: java.lang.Throwable -> L8f
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8f
                java.lang.String r2 = "onPageFinished:"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L8f
                r1.append(r6)     // Catch: java.lang.Throwable -> L8f
                java.lang.String r2 = "   mIsWebViewloadSuccess:"
                r1.append(r2)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r2 = r4.a     // Catch: java.lang.Throwable -> L8f
                boolean r2 = r2.j     // Catch: java.lang.Throwable -> L8f
                r1.append(r2)     // Catch: java.lang.Throwable -> L8f
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L8f
                android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                java.lang.String r0 = r0.l     // Catch: java.lang.Throwable -> L8f
                boolean r0 = r0.equals(r6)     // Catch: java.lang.Throwable -> L8f
                if (r0 == 0) goto L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                boolean r0 = r0.j     // Catch: java.lang.Throwable -> L8f
                r1 = 8
                r2 = 0
                if (r0 == 0) goto L5f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                android.widget.LinearLayout r0 = r0.b     // Catch: java.lang.Throwable -> L8f
                r3 = 4
                r0.setVisibility(r3)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                android.view.ViewGroup r0 = r0.a     // Catch: java.lang.Throwable -> L8f
                r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                android.widget.LinearLayout r0 = r0.b     // Catch: java.lang.Throwable -> L8f
                r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.LoadingView r0 = r0.c     // Catch: java.lang.Throwable -> L8f
                r0.clearAnimation()     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView$a r0 = r0.m     // Catch: java.lang.Throwable -> L8f
                if (r0 == 0) goto L88
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView$a r0 = r0.m     // Catch: java.lang.Throwable -> L8f
                r0.onPageLoadSuccess()     // Catch: java.lang.Throwable -> L8f
                goto L88
            L5f:
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                android.widget.LinearLayout r0 = r0.b     // Catch: java.lang.Throwable -> L8f
                r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.LoadingView r0 = r0.c     // Catch: java.lang.Throwable -> L8f
                r0.clearAnimation()     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                android.widget.TextView r0 = r0.d     // Catch: java.lang.Throwable -> L8f
                r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                android.view.ViewGroup r0 = r0.a     // Catch: java.lang.Throwable -> L8f
                r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView$a r0 = r0.m     // Catch: java.lang.Throwable -> L8f
                if (r0 == 0) goto L88
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                com.tkay.core.activity.component.PrivacyPolicyView$a r0 = r0.m     // Catch: java.lang.Throwable -> L8f
                r0.onPageLoadFail()     // Catch: java.lang.Throwable -> L8f
            L88:
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r4.a     // Catch: java.lang.Throwable -> L8f
                r0.k = r2     // Catch: java.lang.Throwable -> L8f
                super.onPageFinished(r5, r6)     // Catch: java.lang.Throwable -> L8f
            L8f:
                return
        }

        @Override
        public final void onPageStarted(android.webkit.WebView r4, java.lang.String r5, android.graphics.Bitmap r6) {
                r3 = this;
                java.lang.String r0 = com.tkay.core.activity.component.PrivacyPolicyView.a()
                java.lang.String r1 = java.lang.String.valueOf(r5)
                java.lang.String r2 = "onPageStarted:"
                java.lang.String r1 = r2.concat(r1)
                android.util.Log.d(r0, r1)
                super.onPageStarted(r4, r5, r6)
                return
        }

        @Override
        public final void onReceivedError(android.webkit.WebView r4, android.webkit.WebResourceRequest r5, android.webkit.WebResourceError r6) {
                r3 = this;
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r3.a
                r1 = 0
                r0.j = r1
                java.lang.String r0 = com.tkay.core.activity.component.PrivacyPolicyView.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "onPageFinished:"
                r1.<init>(r2)
                int r2 = r6.getErrorCode()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                android.util.Log.d(r0, r1)
                super.onReceivedError(r4, r5, r6)
                return
        }

        @Override
        public final boolean shouldOverrideUrlLoading(android.webkit.WebView r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r3 = com.tkay.core.activity.component.PrivacyPolicyView.a()
                java.lang.String r0 = java.lang.String.valueOf(r4)
                java.lang.String r1 = "shouldOverrideUrlLoading:"
                java.lang.String r0 = r1.concat(r0)
                android.util.Log.d(r3, r0)
                boolean r3 = android.text.TextUtils.isEmpty(r4)
                if (r3 != 0) goto L22
                com.tkay.core.activity.component.PrivacyPolicyView r3 = r2.a
                android.content.Context r3 = r3.getContext()
                com.tkay.core.activity.component.PrivacyPolicyView.a(r3, r4)
                r3 = 1
                return r3
            L22:
                r3 = 0
                return r3
        }
    }

    final class 3 extends android.webkit.WebChromeClient {
        final com.tkay.core.activity.component.PrivacyPolicyView a;

        3(com.tkay.core.activity.component.PrivacyPolicyView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onReceivedTitle(android.webkit.WebView r3, java.lang.String r4) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r4)
                if (r0 != 0) goto L17
                java.lang.String r0 = r4.toLowerCase()
                java.lang.String r1 = "error"
                boolean r0 = r0.contains(r1)
                if (r0 == 0) goto L17
                com.tkay.core.activity.component.PrivacyPolicyView r0 = r2.a
                r1 = 0
                r0.j = r1
            L17:
                super.onReceivedTitle(r3, r4)
                return
        }
    }

    public interface a {
        void onLevelSelect(int r1);

        void onPageLoadFail();

        void onPageLoadSuccess();
    }

    static {
            java.lang.Class<com.tkay.core.activity.component.PrivacyPolicyView> r0 = com.tkay.core.activity.component.PrivacyPolicyView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.activity.component.PrivacyPolicyView.n = r0
            return
    }

    public PrivacyPolicyView(android.content.Context r7) {
            r6 = this;
            r6.<init>(r7)
            r7 = 1
            r6.j = r7
            r0 = 0
            r6.k = r0
            android.content.Context r1 = r6.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r2 = r6.getContext()
            java.lang.String r3 = "privace_policy_layout"
            java.lang.String r4 = "layout"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r1.inflate(r2, r6)
            android.content.Context r1 = r6.getContext()
            java.lang.String r2 = "id"
            java.lang.String r3 = "policy_content_view"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r1 = r6.findViewById(r1)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r6.a = r1
            android.content.Context r1 = r6.getContext()
            java.lang.String r3 = "policy_loading_view"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r1 = r6.findViewById(r1)
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1
            r6.b = r1
            com.tkay.core.activity.component.LoadingView r1 = new com.tkay.core.activity.component.LoadingView
            android.content.Context r3 = r6.getContext()
            r1.<init>(r3)
            r6.c = r1
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r3 = r6.getContext()
            r4 = 1106247680(0x41f00000, float:30.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            android.content.Context r5 = r6.getContext()
            int r4 = com.tkay.core.common.l.h.a(r5, r4)
            r1.<init>(r3, r4)
            r1.gravity = r7
            com.tkay.core.activity.component.LoadingView r3 = r6.c
            r3.setLayoutParams(r1)
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r3 = r6.getContext()
            r1.<init>(r3)
            r6.d = r1
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r3 = -2
            r1.<init>(r3, r3)
            r1.gravity = r7
            android.content.Context r3 = r6.getContext()
            r4 = 1084227584(0x40a00000, float:5.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            r1.topMargin = r3
            android.widget.TextView r3 = r6.d
            r3.setLayoutParams(r1)
            android.widget.TextView r1 = r6.d
            java.lang.String r3 = "Page failed to load, please try again later."
            r1.setText(r3)
            android.widget.TextView r1 = r6.d
            r3 = -8947849(0xffffffffff777777, float:-3.2893961E38)
            r1.setTextColor(r3)
            android.widget.TextView r1 = r6.d
            r3 = 1094713344(0x41400000, float:12.0)
            r1.setTextSize(r7, r3)
            android.widget.LinearLayout r1 = r6.b
            com.tkay.core.activity.component.LoadingView r3 = r6.c
            r1.addView(r3)
            android.widget.LinearLayout r1 = r6.b
            android.widget.TextView r3 = r6.d
            r1.addView(r3)
            android.widget.LinearLayout r1 = r6.b
            com.tkay.core.activity.component.PrivacyPolicyView$1 r3 = new com.tkay.core.activity.component.PrivacyPolicyView$1
            r3.<init>(r6)
            r1.setOnClickListener(r3)
            android.content.Context r1 = r6.getContext()
            java.lang.String r3 = "policy_webview_area"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r1 = r6.findViewById(r1)
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1
            r6.e = r1
            android.webkit.WebView r1 = new android.webkit.WebView
            android.content.Context r3 = r6.getContext()
            r1.<init>(r3)
            r6.f = r1
            com.tkay.core.common.l.g.a(r1)
            android.widget.FrameLayout r1 = r6.e
            android.webkit.WebView r3 = r6.f
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            r5 = -1
            r4.<init>(r5, r5)
            r1.addView(r3, r4)
            android.webkit.WebView r1 = r6.f
            android.webkit.WebSettings r1 = r1.getSettings()
            if (r1 == 0) goto L123
            r1.setJavaScriptEnabled(r0)
            r1.setAppCacheEnabled(r7)
            r1.setBuiltInZoomControls(r7)
            r1.setJavaScriptCanOpenWindowsAutomatically(r7)
            r1.setDomStorageEnabled(r7)
            r1.setSupportZoom(r0)
            r1.setSavePassword(r0)
            r1.setDatabaseEnabled(r0)
            android.webkit.WebSettings$RenderPriority r0 = android.webkit.WebSettings.RenderPriority.HIGH
            r1.setRenderPriority(r0)
            android.webkit.WebSettings$PluginState r0 = android.webkit.WebSettings.PluginState.ON
            r1.setPluginState(r0)
            android.webkit.WebSettings$LayoutAlgorithm r0 = android.webkit.WebSettings.LayoutAlgorithm.NORMAL
            r1.setLayoutAlgorithm(r0)
            r1.setLoadWithOverviewMode(r7)
            r1.setUseWideViewPort(r7)
        L123:
            android.webkit.WebView r7 = r6.f
            com.tkay.core.activity.component.PrivacyPolicyView$2 r0 = new com.tkay.core.activity.component.PrivacyPolicyView$2
            r0.<init>(r6)
            r7.setWebViewClient(r0)
            android.webkit.WebView r7 = r6.f
            com.tkay.core.activity.component.PrivacyPolicyView$3 r0 = new com.tkay.core.activity.component.PrivacyPolicyView$3
            r0.<init>(r6)
            r7.setWebChromeClient(r0)
            android.content.Context r7 = r6.getContext()
            java.lang.String r0 = "policy_check_box"
            int r7 = com.tkay.core.common.l.h.a(r7, r0, r2)
            android.view.View r7 = r6.findViewById(r7)
            android.widget.CheckBox r7 = (android.widget.CheckBox) r7
            r6.g = r7
            android.content.Context r7 = r6.getContext()
            java.lang.String r0 = "policy_agree_view"
            int r7 = com.tkay.core.common.l.h.a(r7, r0, r2)
            android.view.View r7 = r6.findViewById(r7)
            r6.h = r7
            android.content.Context r7 = r6.getContext()
            java.lang.String r0 = "policy_reject_view"
            int r7 = com.tkay.core.common.l.h.a(r7, r0, r2)
            android.view.View r7 = r6.findViewById(r7)
            android.widget.TextView r7 = (android.widget.TextView) r7
            r6.i = r7
            android.view.View r7 = r6.h
            r7.setOnClickListener(r6)
            android.widget.TextView r7 = r6.i
            r7.setOnClickListener(r6)
            android.content.Context r7 = r6.getContext()
            r0 = 1101004800(0x41a00000, float:20.0)
            int r7 = com.tkay.core.common.l.h.a(r7, r0)
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r1 = -13472268(0xffffffffff326df4, float:-2.371735E38)
            r0.setColor(r1)
            float r7 = (float) r7
            r0.setCornerRadius(r7)
            android.view.View r7 = r6.h
            r7.setBackgroundDrawable(r0)
            android.widget.TextView r7 = r6.i
            java.lang.String r0 = "<u>No,Thanks</u>"
            android.text.Spanned r0 = android.text.Html.fromHtml(r0)
            r7.setText(r0)
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.core.activity.component.PrivacyPolicyView.n
            return r0
    }

    static void a(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.setAction(r1)
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0.setData(r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r3)
            r2.startActivity(r0)
            return
    }

    private void b() {
            r6 = this;
            android.content.Context r0 = r6.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r6.getContext()
            java.lang.String r2 = "privace_policy_layout"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.inflate(r1, r6)
            android.content.Context r0 = r6.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "policy_content_view"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r6.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.a = r0
            android.content.Context r0 = r6.getContext()
            java.lang.String r2 = "policy_loading_view"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r6.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r6.b = r0
            com.tkay.core.activity.component.LoadingView r0 = new com.tkay.core.activity.component.LoadingView
            android.content.Context r2 = r6.getContext()
            r0.<init>(r2)
            r6.c = r0
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r2 = r6.getContext()
            r3 = 1106247680(0x41f00000, float:30.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            android.content.Context r4 = r6.getContext()
            int r3 = com.tkay.core.common.l.h.a(r4, r3)
            r0.<init>(r2, r3)
            r2 = 1
            r0.gravity = r2
            com.tkay.core.activity.component.LoadingView r3 = r6.c
            r3.setLayoutParams(r0)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r3 = r6.getContext()
            r0.<init>(r3)
            r6.d = r0
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r3 = -2
            r0.<init>(r3, r3)
            r0.gravity = r2
            android.content.Context r3 = r6.getContext()
            r4 = 1084227584(0x40a00000, float:5.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            r0.topMargin = r3
            android.widget.TextView r3 = r6.d
            r3.setLayoutParams(r0)
            android.widget.TextView r0 = r6.d
            java.lang.String r3 = "Page failed to load, please try again later."
            r0.setText(r3)
            android.widget.TextView r0 = r6.d
            r3 = -8947849(0xffffffffff777777, float:-3.2893961E38)
            r0.setTextColor(r3)
            android.widget.TextView r0 = r6.d
            r3 = 1094713344(0x41400000, float:12.0)
            r0.setTextSize(r2, r3)
            android.widget.LinearLayout r0 = r6.b
            com.tkay.core.activity.component.LoadingView r3 = r6.c
            r0.addView(r3)
            android.widget.LinearLayout r0 = r6.b
            android.widget.TextView r3 = r6.d
            r0.addView(r3)
            android.widget.LinearLayout r0 = r6.b
            com.tkay.core.activity.component.PrivacyPolicyView$1 r3 = new com.tkay.core.activity.component.PrivacyPolicyView$1
            r3.<init>(r6)
            r0.setOnClickListener(r3)
            android.content.Context r0 = r6.getContext()
            java.lang.String r3 = "policy_webview_area"
            int r0 = com.tkay.core.common.l.h.a(r0, r3, r1)
            android.view.View r0 = r6.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r6.e = r0
            android.webkit.WebView r0 = new android.webkit.WebView
            android.content.Context r3 = r6.getContext()
            r0.<init>(r3)
            r6.f = r0
            com.tkay.core.common.l.g.a(r0)
            android.widget.FrameLayout r0 = r6.e
            android.webkit.WebView r3 = r6.f
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            r5 = -1
            r4.<init>(r5, r5)
            r0.addView(r3, r4)
            android.webkit.WebView r0 = r6.f
            android.webkit.WebSettings r0 = r0.getSettings()
            if (r0 == 0) goto L11c
            r3 = 0
            r0.setJavaScriptEnabled(r3)
            r0.setAppCacheEnabled(r2)
            r0.setBuiltInZoomControls(r2)
            r0.setJavaScriptCanOpenWindowsAutomatically(r2)
            r0.setDomStorageEnabled(r2)
            r0.setSupportZoom(r3)
            r0.setSavePassword(r3)
            r0.setDatabaseEnabled(r3)
            android.webkit.WebSettings$RenderPriority r3 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r3)
            android.webkit.WebSettings$PluginState r3 = android.webkit.WebSettings.PluginState.ON
            r0.setPluginState(r3)
            android.webkit.WebSettings$LayoutAlgorithm r3 = android.webkit.WebSettings.LayoutAlgorithm.NORMAL
            r0.setLayoutAlgorithm(r3)
            r0.setLoadWithOverviewMode(r2)
            r0.setUseWideViewPort(r2)
        L11c:
            android.webkit.WebView r0 = r6.f
            com.tkay.core.activity.component.PrivacyPolicyView$2 r2 = new com.tkay.core.activity.component.PrivacyPolicyView$2
            r2.<init>(r6)
            r0.setWebViewClient(r2)
            android.webkit.WebView r0 = r6.f
            com.tkay.core.activity.component.PrivacyPolicyView$3 r2 = new com.tkay.core.activity.component.PrivacyPolicyView$3
            r2.<init>(r6)
            r0.setWebChromeClient(r2)
            android.content.Context r0 = r6.getContext()
            java.lang.String r2 = "policy_check_box"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r6.findViewById(r0)
            android.widget.CheckBox r0 = (android.widget.CheckBox) r0
            r6.g = r0
            android.content.Context r0 = r6.getContext()
            java.lang.String r2 = "policy_agree_view"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r6.findViewById(r0)
            r6.h = r0
            android.content.Context r0 = r6.getContext()
            java.lang.String r2 = "policy_reject_view"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r6.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r6.i = r0
            android.view.View r0 = r6.h
            r0.setOnClickListener(r6)
            android.widget.TextView r0 = r6.i
            r0.setOnClickListener(r6)
            android.content.Context r0 = r6.getContext()
            r1 = 1101004800(0x41a00000, float:20.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r1)
            android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
            r1.<init>()
            r2 = -13472268(0xffffffffff326df4, float:-2.371735E38)
            r1.setColor(r2)
            float r0 = (float) r0
            r1.setCornerRadius(r0)
            android.view.View r0 = r6.h
            r0.setBackgroundDrawable(r1)
            android.widget.TextView r0 = r6.i
            java.lang.String r1 = "<u>No,Thanks</u>"
            android.text.Spanned r1 = android.text.Html.fromHtml(r1)
            r0.setText(r1)
            return
    }

    private static void b(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.setAction(r1)
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0.setData(r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r3)
            r2.startActivity(r0)
            return
    }

    private void c() {
            r3 = this;
            android.webkit.WebView r0 = r3.f
            android.webkit.WebSettings r0 = r0.getSettings()
            if (r0 == 0) goto L37
            r1 = 0
            r0.setJavaScriptEnabled(r1)
            r2 = 1
            r0.setAppCacheEnabled(r2)
            r0.setBuiltInZoomControls(r2)
            r0.setJavaScriptCanOpenWindowsAutomatically(r2)
            r0.setDomStorageEnabled(r2)
            r0.setSupportZoom(r1)
            r0.setSavePassword(r1)
            r0.setDatabaseEnabled(r1)
            android.webkit.WebSettings$RenderPriority r1 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r1)
            android.webkit.WebSettings$PluginState r1 = android.webkit.WebSettings.PluginState.ON
            r0.setPluginState(r1)
            android.webkit.WebSettings$LayoutAlgorithm r1 = android.webkit.WebSettings.LayoutAlgorithm.NORMAL
            r0.setLayoutAlgorithm(r1)
            r0.setLoadWithOverviewMode(r2)
            r0.setUseWideViewPort(r2)
        L37:
            android.webkit.WebView r0 = r3.f
            com.tkay.core.activity.component.PrivacyPolicyView$2 r1 = new com.tkay.core.activity.component.PrivacyPolicyView$2
            r1.<init>(r3)
            r0.setWebViewClient(r1)
            android.webkit.WebView r0 = r3.f
            com.tkay.core.activity.component.PrivacyPolicyView$3 r1 = new com.tkay.core.activity.component.PrivacyPolicyView$3
            r1.<init>(r3)
            r0.setWebChromeClient(r1)
            return
    }

    public void destory() {
            r2 = this;
            r2.removeAllViews()     // Catch: java.lang.Throwable -> L33
            android.view.ViewGroup r0 = r2.a     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto Lc
            android.view.ViewGroup r0 = r2.a     // Catch: java.lang.Throwable -> L33
            r0.removeAllViews()     // Catch: java.lang.Throwable -> L33
        Lc:
            android.widget.FrameLayout r0 = r2.e     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L1c
            android.widget.FrameLayout r0 = r2.e     // Catch: java.lang.Throwable -> L33
            android.webkit.WebView r1 = r2.f     // Catch: java.lang.Throwable -> L33
            r0.removeView(r1)     // Catch: java.lang.Throwable -> L33
            android.webkit.WebView r0 = r2.f     // Catch: java.lang.Throwable -> L33
            r0.removeAllViews()     // Catch: java.lang.Throwable -> L33
        L1c:
            android.webkit.WebView r0 = r2.f     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L33
            android.webkit.WebView r0 = r2.f     // Catch: java.lang.Throwable -> L33
            r0.clearHistory()     // Catch: java.lang.Throwable -> L33
            android.webkit.WebView r0 = r2.f     // Catch: java.lang.Throwable -> L33
            r1 = 1
            r0.clearCache(r1)     // Catch: java.lang.Throwable -> L33
            android.webkit.WebView r0 = r2.f     // Catch: java.lang.Throwable -> L33
            r0.destroy()     // Catch: java.lang.Throwable -> L33
            r0 = 0
            r2.f = r0     // Catch: java.lang.Throwable -> L33
        L33:
            return
    }

    public void loadPolicyUrl(java.lang.String r4) {
            r3 = this;
            boolean r0 = r3.k
            if (r0 == 0) goto L5
            return
        L5:
            r3.l = r4
            android.content.Context r4 = r3.getContext()
            boolean r4 = com.tkay.core.common.l.h.a(r4)
            r0 = 8
            r1 = 0
            if (r4 == 0) goto L49
            r4 = 1
            r3.j = r4
            android.widget.LinearLayout r2 = r3.b
            r2.setVisibility(r1)
            com.tkay.core.activity.component.LoadingView r1 = r3.c
            r1.clearAnimation()
            com.tkay.core.activity.component.LoadingView r1 = r3.c
            r1.startAnimation()
            android.widget.TextView r1 = r3.d
            r1.setVisibility(r0)
            r3.k = r4
            java.lang.String r4 = r3.l
            android.webkit.WebView r0 = r3.f
            java.lang.String r0 = r0.getUrl()
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L41
            android.webkit.WebView r4 = r3.f
            r4.reload()
            return
        L41:
            android.webkit.WebView r4 = r3.f
            java.lang.String r0 = r3.l
            r4.loadUrl(r0)
            return
        L49:
            r3.j = r1
            android.widget.LinearLayout r4 = r3.b
            r4.setVisibility(r1)
            com.tkay.core.activity.component.LoadingView r4 = r3.c
            r4.clearAnimation()
            android.widget.TextView r4 = r3.d
            r4.setVisibility(r1)
            android.view.ViewGroup r4 = r3.a
            r4.setVisibility(r0)
            com.tkay.core.activity.component.PrivacyPolicyView$a r4 = r3.m
            if (r4 == 0) goto L66
            r4.onPageLoadFail()
        L66:
            return
    }

    @Override
    public void onClick(android.view.View r3) {
            r2 = this;
            android.view.View r0 = r2.h
            if (r3 != r0) goto L1b
            android.content.Context r0 = r2.getContext()
            r1 = 0
            com.tkay.core.api.TYSDK.setGDPRUploadDataLevel(r0, r1)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            r3.setTag(r0)
            com.tkay.core.activity.component.PrivacyPolicyView$a r3 = r2.m
            if (r3 == 0) goto L35
            r3.onLevelSelect(r1)
            return
        L1b:
            android.widget.TextView r0 = r2.i
            if (r3 != r0) goto L35
            android.content.Context r0 = r2.getContext()
            r1 = 1
            com.tkay.core.api.TYSDK.setGDPRUploadDataLevel(r0, r1)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            r3.setTag(r0)
            com.tkay.core.activity.component.PrivacyPolicyView$a r3 = r2.m
            if (r3 == 0) goto L35
            r3.onLevelSelect(r1)
        L35:
            return
    }

    public void setResultCallbackListener(com.tkay.core.activity.component.PrivacyPolicyView.a r1) {
            r0 = this;
            r0.m = r1
            return
    }
}
