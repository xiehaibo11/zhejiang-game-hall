package com.tencent.open;

public class d extends com.tencent.open.c implements com.tencent.open.c.a.a {
    static android.widget.Toast c;
    private java.lang.String d;
    private com.tencent.tauth.IUiListener e;
    private com.tencent.open.d.c f;
    private android.os.Handler g;
    private com.tencent.open.c.a h;
    private com.tencent.open.c.b i;
    private java.lang.ref.WeakReference<android.content.Context> j;
    private int k;

    static class 1 {
    }

    private class a extends android.webkit.WebViewClient {
        final com.tencent.open.d a;

        private a(com.tencent.open.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tencent.open.d r1, com.tencent.open.d.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onPageFinished(android.webkit.WebView r1, java.lang.String r2) {
                r0 = this;
                super.onPageFinished(r1, r2)
                com.tencent.open.d r1 = r0.a
                com.tencent.open.c.b r1 = com.tencent.open.d.c(r1)
                r2 = 0
                r1.setVisibility(r2)
                return
        }

        @Override
        public void onPageStarted(android.webkit.WebView r3, java.lang.String r4, android.graphics.Bitmap r5) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Webview loading URL: "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "openSDK_LOG.PKDialog"
                com.tencent.open.log.SLog.v(r1, r0)
                super.onPageStarted(r3, r4, r5)
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.onReceivedError(r2, r3, r4, r5)
                com.tencent.open.d r2 = r1.a
                com.tencent.open.d$c r2 = com.tencent.open.d.b(r2)
                com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
                r0.<init>(r3, r4, r5)
                r2.onError(r0)
                com.tencent.open.d r2 = r1.a
                java.lang.ref.WeakReference r2 = com.tencent.open.d.a(r2)
                if (r2 == 0) goto L3b
                com.tencent.open.d r2 = r1.a
                java.lang.ref.WeakReference r2 = com.tencent.open.d.a(r2)
                java.lang.Object r2 = r2.get()
                if (r2 == 0) goto L3b
                com.tencent.open.d r2 = r1.a
                java.lang.ref.WeakReference r2 = com.tencent.open.d.a(r2)
                java.lang.Object r2 = r2.get()
                android.content.Context r2 = (android.content.Context) r2
                r3 = 0
                java.lang.String r4 = "网络连接异常或系统错误"
                android.widget.Toast r2 = android.widget.Toast.makeText(r2, r4, r3)
                r2.show()
            L3b:
                com.tencent.open.d r2 = r1.a
                r2.dismiss()
                return
        }

        @Override
        public boolean shouldOverrideUrlLoading(android.webkit.WebView r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r0 = "Redirect URL: "
                r3.append(r0)
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                java.lang.String r0 = "openSDK_LOG.PKDialog"
                com.tencent.open.log.SLog.v(r0, r3)
                com.tencent.open.utils.j r3 = com.tencent.open.utils.j.a()
                com.tencent.open.d r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.d.a(r0)
                java.lang.Object r0 = r0.get()
                android.content.Context r0 = (android.content.Context) r0
                java.lang.String r1 = "auth://tauth.qq.com/"
                java.lang.String r3 = r3.a(r0, r1)
                boolean r3 = r4.startsWith(r3)
                r0 = 1
                if (r3 == 0) goto L46
                com.tencent.open.d r3 = r2.a
                com.tencent.open.d$c r3 = com.tencent.open.d.b(r3)
                org.json.JSONObject r4 = com.tencent.open.utils.m.c(r4)
                r3.onComplete(r4)
                com.tencent.open.d r3 = r2.a
                r3.dismiss()
                return r0
            L46:
                java.lang.String r3 = "auth://cancel"
                boolean r3 = r4.startsWith(r3)
                if (r3 == 0) goto L5d
                com.tencent.open.d r3 = r2.a
                com.tencent.open.d$c r3 = com.tencent.open.d.b(r3)
                r3.onCancel()
                com.tencent.open.d r3 = r2.a
                r3.dismiss()
                return r0
            L5d:
                java.lang.String r3 = "auth://close"
                boolean r3 = r4.startsWith(r3)
                if (r3 == 0) goto L6b
                com.tencent.open.d r3 = r2.a
                r3.dismiss()
                return r0
            L6b:
                r3 = 0
                return r3
        }
    }

    private class b extends com.tencent.open.b.b {
        final com.tencent.open.d a;

        private b(com.tencent.open.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        b(com.tencent.open.d r1, com.tencent.open.d.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private static class c extends com.tencent.tauth.DefaultUiListener {
        java.lang.String a;
        java.lang.String b;
        private java.lang.ref.WeakReference<android.content.Context> c;
        private java.lang.String d;
        private com.tencent.tauth.IUiListener e;

        public c(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tencent.tauth.IUiListener r6) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.c = r0
                r1.d = r3
                r1.a = r4
                r1.b = r5
                r1.e = r6
                return
        }

        static void a(com.tencent.open.d.c r0, java.lang.String r1) {
                r0.a(r1)
                return
        }

        private void a(java.lang.String r4) {
                r3 = this;
                org.json.JSONObject r0 = com.tencent.open.utils.m.d(r4)     // Catch: org.json.JSONException -> L8
                r3.onComplete(r0)     // Catch: org.json.JSONException -> L8
                goto L17
            L8:
                r0 = move-exception
                r0.printStackTrace()
                com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
                r1 = -4
                java.lang.String r2 = "服务器返回数据格式有误!"
                r0.<init>(r1, r2, r4)
                r3.onError(r0)
            L17:
                return
        }

        @Override
        public void onCancel() {
                r1 = this;
                com.tencent.tauth.IUiListener r0 = r1.e
                if (r0 == 0) goto La
                r0.onCancel()
                r0 = 0
                r1.e = r0
            La:
                return
        }

        @Override
        public void onComplete(java.lang.Object r12) {
                r11 = this;
                org.json.JSONObject r12 = (org.json.JSONObject) r12
                com.tencent.open.b.h r0 = com.tencent.open.b.h.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r11.d
                r1.append(r2)
                java.lang.String r2 = "_H5"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                long r2 = android.os.SystemClock.elapsedRealtime()
                java.lang.String r4 = "ret"
                r5 = -6
                int r8 = r12.optInt(r4, r5)
                java.lang.String r9 = r11.a
                r4 = 0
                r6 = 0
                r10 = 0
                r0.a(r1, r2, r4, r6, r8, r9, r10)
                com.tencent.tauth.IUiListener r0 = r11.e
                if (r0 == 0) goto L38
                r0.onComplete(r12)
                r12 = 0
                r11.e = r12
            L38:
                return
        }

        @Override
        public void onError(com.tencent.tauth.UiError r13) {
                r12 = this;
                java.lang.String r0 = r13.errorMessage
                if (r0 == 0) goto L18
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r13.errorMessage
                r0.append(r1)
                java.lang.String r1 = r12.a
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                goto L1a
            L18:
                java.lang.String r0 = r12.a
            L1a:
                r10 = r0
                com.tencent.open.b.h r1 = com.tencent.open.b.h.a()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = r12.d
                r0.append(r2)
                java.lang.String r2 = "_H5"
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                long r3 = android.os.SystemClock.elapsedRealtime()
                r5 = 0
                r7 = 0
                int r9 = r13.errorCode
                r11 = 0
                r1.a(r2, r3, r5, r7, r9, r10, r11)
                com.tencent.tauth.IUiListener r0 = r12.e
                if (r0 == 0) goto L4a
                r0.onError(r13)
                r13 = 0
                r12.e = r13
            L4a:
                return
        }
    }

    private class d extends android.os.Handler {
        final com.tencent.open.d a;
        private com.tencent.open.d.c b;

        public d(com.tencent.open.d r1, com.tencent.open.d.c r2, android.os.Looper r3) {
                r0 = this;
                r0.a = r1
                r0.<init>(r3)
                r0.b = r2
                return
        }

        @Override
        public void handleMessage(android.os.Message r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "msg = "
                r0.append(r1)
                int r1 = r3.what
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "openSDK_LOG.PKDialog"
                com.tencent.open.log.SLog.d(r1, r0)
                int r0 = r3.what
                r1 = 1
                if (r0 == r1) goto L7d
                r1 = 2
                if (r0 == r1) goto L77
                r1 = 3
                if (r0 == r1) goto L4f
                r1 = 5
                if (r0 == r1) goto L27
                goto L86
            L27:
                com.tencent.open.d r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.d.a(r0)
                if (r0 == 0) goto L86
                com.tencent.open.d r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.d.a(r0)
                java.lang.Object r0 = r0.get()
                if (r0 == 0) goto L86
                com.tencent.open.d r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.d.a(r0)
                java.lang.Object r0 = r0.get()
                android.content.Context r0 = (android.content.Context) r0
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.open.d.b(r0, r3)
                goto L86
            L4f:
                com.tencent.open.d r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.d.a(r0)
                if (r0 == 0) goto L86
                com.tencent.open.d r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.d.a(r0)
                java.lang.Object r0 = r0.get()
                if (r0 == 0) goto L86
                com.tencent.open.d r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.d.a(r0)
                java.lang.Object r0 = r0.get()
                android.content.Context r0 = (android.content.Context) r0
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.open.d.a(r0, r3)
                goto L86
            L77:
                com.tencent.open.d$c r3 = r2.b
                r3.onCancel()
                goto L86
            L7d:
                com.tencent.open.d$c r0 = r2.b
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.open.d.c.a(r0, r3)
            L86:
                return
        }
    }

    static {
            return
    }

    public d(android.content.Context r8, java.lang.String r9, java.lang.String r10, com.tencent.tauth.IUiListener r11, com.tencent.connect.auth.QQToken r12) {
            r7 = this;
            r0 = 16973840(0x1030010, float:2.4060945E-38)
            r7.<init>(r8, r0)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r8)
            r7.j = r0
            r7.d = r10
            com.tencent.open.d$c r0 = new com.tencent.open.d$c
            java.lang.String r5 = r12.getAppId()
            r1 = r0
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r7.f = r0
            com.tencent.open.d$d r9 = new com.tencent.open.d$d
            com.tencent.open.d$c r10 = r7.f
            android.os.Looper r12 = r8.getMainLooper()
            r9.<init>(r7, r10, r12)
            r7.g = r9
            r7.e = r11
            android.content.res.Resources r9 = r8.getResources()
            android.util.DisplayMetrics r9 = r9.getDisplayMetrics()
            float r9 = r9.density
            r10 = 1127809024(0x43390000, float:185.0)
            float r9 = r9 * r10
            int r9 = java.lang.Math.round(r9)
            r7.k = r9
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "density="
            r9.append(r10)
            android.content.res.Resources r8 = r8.getResources()
            android.util.DisplayMetrics r8 = r8.getDisplayMetrics()
            float r8 = r8.density
            r9.append(r8)
            java.lang.String r8 = "; webviewHeight="
            r9.append(r8)
            int r8 = r7.k
            r9.append(r8)
            java.lang.String r8 = r9.toString()
            java.lang.String r9 = "openSDK_LOG.PKDialog"
            com.tencent.open.log.SLog.e(r9, r8)
            return
    }

    static java.lang.ref.WeakReference a(com.tencent.open.d r0) {
            java.lang.ref.WeakReference<android.content.Context> r0 = r0.j
            return r0
    }

    static void a(android.content.Context r0, java.lang.String r1) {
            c(r0, r1)
            return
    }

    static com.tencent.open.d.c b(com.tencent.open.d r0) {
            com.tencent.open.d$c r0 = r0.f
            return r0
    }

    private void b() {
            r8 = this;
            com.tencent.open.c.a r0 = new com.tencent.open.c.a
            java.lang.ref.WeakReference<android.content.Context> r1 = r8.j
            java.lang.Object r1 = r1.get()
            android.content.Context r1 = (android.content.Context) r1
            r0.<init>(r1)
            r8.h = r0
            r1 = 1711276032(0x66000000, float:1.5111573E23)
            r0.setBackgroundColor(r1)
            com.tencent.open.c.a r0 = r8.h
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r0.setLayoutParams(r1)
            com.tencent.open.c.b r0 = new com.tencent.open.c.b
            java.lang.ref.WeakReference<android.content.Context> r1 = r8.j
            java.lang.Object r1 = r1.get()
            android.content.Context r1 = (android.content.Context) r1
            r0.<init>(r1)
            r8.i = r0
            r1 = 0
            r0.setBackgroundColor(r1)
            com.tencent.open.c.b r0 = r8.i
            r3 = 0
            r0.setBackgroundDrawable(r3)
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 11
            if (r0 < r3) goto L6b
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r3 = "setLayerType"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L67
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L67
            r5[r1] = r6     // Catch: java.lang.Exception -> L67
            java.lang.Class<android.graphics.Paint> r6 = android.graphics.Paint.class
            r7 = 1
            r5[r7] = r6     // Catch: java.lang.Exception -> L67
            java.lang.reflect.Method r0 = r0.getMethod(r3, r5)     // Catch: java.lang.Exception -> L67
            com.tencent.open.c.b r3 = r8.i     // Catch: java.lang.Exception -> L67
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L67
            java.lang.Integer r5 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L67
            r4[r1] = r5     // Catch: java.lang.Exception -> L67
            android.graphics.Paint r1 = new android.graphics.Paint     // Catch: java.lang.Exception -> L67
            r1.<init>()     // Catch: java.lang.Exception -> L67
            r4[r7] = r1     // Catch: java.lang.Exception -> L67
            r0.invoke(r3, r4)     // Catch: java.lang.Exception -> L67
            goto L6b
        L67:
            r0 = move-exception
            r0.printStackTrace()
        L6b:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            int r1 = r8.k
            r0.<init>(r2, r1)
            r1 = 13
            r0.addRule(r1, r2)
            com.tencent.open.c.b r1 = r8.i
            r1.setLayoutParams(r0)
            com.tencent.open.c.a r0 = r8.h
            com.tencent.open.c.b r1 = r8.i
            r0.addView(r1)
            com.tencent.open.c.a r0 = r8.h
            r0.a(r8)
            com.tencent.open.c.a r0 = r8.h
            r8.setContentView(r0)
            return
    }

    static void b(android.content.Context r0, java.lang.String r1) {
            d(r0, r1)
            return
    }

    static com.tencent.open.c.b c(com.tencent.open.d r0) {
            com.tencent.open.c.b r0 = r0.i
            return r0
    }

    private void c() {
            r6 = this;
            com.tencent.open.c.b r0 = r6.i
            r1 = 0
            r0.setVerticalScrollBarEnabled(r1)
            com.tencent.open.c.b r0 = r6.i
            r0.setHorizontalScrollBarEnabled(r1)
            com.tencent.open.c.b r0 = r6.i
            com.tencent.open.d$a r2 = new com.tencent.open.d$a
            r3 = 0
            r2.<init>(r6, r3)
            r0.setWebViewClient(r2)
            com.tencent.open.c.b r0 = r6.i
            android.webkit.WebChromeClient r2 = r6.b
            r0.setWebChromeClient(r2)
            com.tencent.open.c.b r0 = r6.i
            r0.clearFormData()
            com.tencent.open.c.b r0 = r6.i
            android.webkit.WebSettings r0 = r0.getSettings()
            if (r0 != 0) goto L2b
            return
        L2b:
            com.tencent.open.c.b r2 = r6.i
            com.tencent.open.web.a.a(r2)
            r0.setSaveFormData(r1)
            r2 = -1
            r0.setCacheMode(r2)
            r0.setNeedInitialFocus(r1)
            r2 = 1
            r0.setBuiltInZoomControls(r2)
            r0.setSupportZoom(r2)
            android.webkit.WebSettings$RenderPriority r4 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r4)
            java.lang.ref.WeakReference<android.content.Context> r4 = r6.j
            if (r4 == 0) goto L6c
            java.lang.Object r4 = r4.get()
            if (r4 == 0) goto L6c
            r0.setDatabaseEnabled(r2)
            java.lang.ref.WeakReference<android.content.Context> r4 = r6.j
            java.lang.Object r4 = r4.get()
            android.content.Context r4 = (android.content.Context) r4
            android.content.Context r4 = r4.getApplicationContext()
            java.lang.String r5 = "databases"
            java.io.File r1 = r4.getDir(r5, r1)
            java.lang.String r1 = r1.getPath()
            r0.setDatabasePath(r1)
        L6c:
            r0.setDomStorageEnabled(r2)
            com.tencent.open.b r0 = r6.a
            com.tencent.open.d$b r1 = new com.tencent.open.d$b
            r1.<init>(r6, r3)
            java.lang.String r2 = "sdk_js_if"
            r0.a(r1, r2)
            com.tencent.open.c.b r0 = r6.i
            r0.clearView()
            com.tencent.open.c.b r0 = r6.i
            java.lang.String r1 = r6.d
            r0.loadUrl(r1)
            return
    }

    private static void c(android.content.Context r2, java.lang.String r3) {
            org.json.JSONObject r3 = com.tencent.open.utils.m.d(r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r0 = "type"
            int r0 = r3.getInt(r0)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = "msg"
            java.lang.String r3 = r3.getString(r1)     // Catch: org.json.JSONException -> L62
            if (r0 != 0) goto L39
            android.widget.Toast r0 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            r1 = 0
            if (r0 != 0) goto L1e
            android.widget.Toast r2 = android.widget.Toast.makeText(r2, r3, r1)     // Catch: org.json.JSONException -> L62
            com.tencent.open.d.c = r2     // Catch: org.json.JSONException -> L62
            goto L33
        L1e:
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            android.widget.Toast r0 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            android.view.View r0 = r0.getView()     // Catch: org.json.JSONException -> L62
            r2.setView(r0)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            r2.setText(r3)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            r2.setDuration(r1)     // Catch: org.json.JSONException -> L62
        L33:
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            r2.show()     // Catch: org.json.JSONException -> L62
            goto L66
        L39:
            r1 = 1
            if (r0 != r1) goto L66
            android.widget.Toast r0 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            if (r0 != 0) goto L47
            android.widget.Toast r2 = android.widget.Toast.makeText(r2, r3, r1)     // Catch: org.json.JSONException -> L62
            com.tencent.open.d.c = r2     // Catch: org.json.JSONException -> L62
            goto L5c
        L47:
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            android.widget.Toast r0 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            android.view.View r0 = r0.getView()     // Catch: org.json.JSONException -> L62
            r2.setView(r0)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            r2.setText(r3)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            r2.setDuration(r1)     // Catch: org.json.JSONException -> L62
        L5c:
            android.widget.Toast r2 = com.tencent.open.d.c     // Catch: org.json.JSONException -> L62
            r2.show()     // Catch: org.json.JSONException -> L62
            goto L66
        L62:
            r2 = move-exception
            r2.printStackTrace()
        L66:
            return
    }

    private static void d(android.content.Context r0, java.lang.String r1) {
            if (r0 == 0) goto L18
            if (r1 != 0) goto L5
            goto L18
        L5:
            org.json.JSONObject r0 = com.tencent.open.utils.m.d(r1)     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "action"
            r0.getInt(r1)     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "msg"
            r0.getString(r1)     // Catch: org.json.JSONException -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            return
    }

    @Override
    public void a() {
            r2 = this;
            com.tencent.open.c.b r0 = r2.i
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            int r1 = r2.k
            r0.height = r1
            java.lang.String r0 = "openSDK_LOG.PKDialog"
            java.lang.String r1 = "onKeyboardHidden keyboard hide"
            com.tencent.open.log.SLog.e(r0, r1)
            return
    }

    @Override
    public void a(int r3) {
            r2 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r2.j
            if (r0 == 0) goto L36
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L36
            int r0 = r2.k
            if (r3 >= r0) goto L2c
            r0 = 2
            java.lang.ref.WeakReference<android.content.Context> r1 = r2.j
            java.lang.Object r1 = r1.get()
            android.content.Context r1 = (android.content.Context) r1
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            if (r0 != r1) goto L2c
            com.tencent.open.c.b r0 = r2.i
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            r0.height = r3
            goto L36
        L2c:
            com.tencent.open.c.b r3 = r2.i
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            int r0 = r2.k
            r3.height = r0
        L36:
            java.lang.String r3 = "openSDK_LOG.PKDialog"
            java.lang.String r0 = "onKeyboardShown keyboard show"
            com.tencent.open.log.SLog.e(r3, r0)
            return
    }

    @Override
    protected void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.PKDialog"
            java.lang.String r1 = "--onConsoleMessage--"
            com.tencent.open.log.SLog.d(r0, r1)
            com.tencent.open.b r0 = r2.a     // Catch: java.lang.Exception -> Le
            com.tencent.open.c.b r1 = r2.i     // Catch: java.lang.Exception -> Le
            r0.a(r1, r3)     // Catch: java.lang.Exception -> Le
        Le:
            return
    }

    @Override
    public void onBackPressed() {
            r0 = this;
            super.onBackPressed()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            r0 = 1
            r2.requestWindowFeature(r0)
            super.onCreate(r3)
            android.view.Window r3 = r2.getWindow()
            r1 = 16
            r3.setSoftInputMode(r1)
            android.view.Window r3 = r2.getWindow()
            r3.setSoftInputMode(r0)
            r2.b()
            r2.c()
            return
    }
}
