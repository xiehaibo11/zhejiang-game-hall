package com.tencent.connect.auth;

public class a extends android.app.Dialog {
    private java.lang.String a;
    private com.tencent.connect.auth.a.b b;
    private com.tencent.tauth.IUiListener c;
    private android.os.Handler d;
    private android.widget.FrameLayout e;
    private android.widget.LinearLayout f;
    private android.widget.FrameLayout g;
    private android.widget.ProgressBar h;
    private java.lang.String i;
    private com.tencent.open.c.d j;
    private android.content.Context k;
    private com.tencent.open.web.security.b l;
    private boolean m;
    private int n;
    private java.lang.String o;
    private java.lang.String p;
    private long q;
    private long r;
    private java.util.HashMap<java.lang.String, java.lang.Runnable> s;





    private class a extends android.webkit.WebViewClient {
        final com.tencent.connect.auth.a a;


        private a(com.tencent.connect.auth.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tencent.connect.auth.a r1, com.tencent.connect.auth.a.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onPageFinished(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                super.onPageFinished(r2, r3)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "-->onPageFinished, url: "
                r2.append(r0)
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                java.lang.String r0 = "openSDK_LOG.AuthDialog"
                com.tencent.open.log.SLog.v(r0, r2)
                com.tencent.connect.auth.a r2 = r1.a
                android.widget.FrameLayout r2 = com.tencent.connect.auth.a.g(r2)
                r0 = 8
                r2.setVisibility(r0)
                com.tencent.connect.auth.a r2 = r1.a
                com.tencent.open.c.d r2 = com.tencent.connect.auth.a.e(r2)
                if (r2 == 0) goto L36
                com.tencent.connect.auth.a r2 = r1.a
                com.tencent.open.c.d r2 = com.tencent.connect.auth.a.e(r2)
                r0 = 0
                r2.setVisibility(r0)
            L36:
                boolean r2 = android.text.TextUtils.isEmpty(r3)
                if (r2 != 0) goto L51
                com.tencent.connect.auth.a r2 = r1.a
                android.os.Handler r2 = com.tencent.connect.auth.a.n(r2)
                com.tencent.connect.auth.a r0 = r1.a
                java.util.HashMap r0 = com.tencent.connect.auth.a.p(r0)
                java.lang.Object r3 = r0.remove(r3)
                java.lang.Runnable r3 = (java.lang.Runnable) r3
                r2.removeCallbacks(r3)
            L51:
                return
        }

        @Override
        public void onPageStarted(android.webkit.WebView r3, java.lang.String r4, android.graphics.Bitmap r5) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "-->onPageStarted, url: "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "openSDK_LOG.AuthDialog"
                com.tencent.open.log.SLog.v(r1, r0)
                super.onPageStarted(r3, r4, r5)
                com.tencent.connect.auth.a r3 = r2.a
                android.widget.FrameLayout r3 = com.tencent.connect.auth.a.g(r3)
                r5 = 0
                r3.setVisibility(r5)
                com.tencent.connect.auth.a r3 = r2.a
                long r0 = android.os.SystemClock.elapsedRealtime()
                com.tencent.connect.auth.a.a(r3, r0)
                com.tencent.connect.auth.a r3 = r2.a
                java.lang.String r3 = com.tencent.connect.auth.a.i(r3)
                boolean r3 = android.text.TextUtils.isEmpty(r3)
                if (r3 != 0) goto L53
                com.tencent.connect.auth.a r3 = r2.a
                android.os.Handler r3 = com.tencent.connect.auth.a.n(r3)
                com.tencent.connect.auth.a r5 = r2.a
                java.util.HashMap r5 = com.tencent.connect.auth.a.p(r5)
                com.tencent.connect.auth.a r0 = r2.a
                java.lang.String r0 = com.tencent.connect.auth.a.i(r0)
                java.lang.Object r5 = r5.remove(r0)
                java.lang.Runnable r5 = (java.lang.Runnable) r5
                r3.removeCallbacks(r5)
            L53:
                com.tencent.connect.auth.a r3 = r2.a
                com.tencent.connect.auth.a.d(r3, r4)
                com.tencent.connect.auth.a$d r3 = new com.tencent.connect.auth.a$d
                com.tencent.connect.auth.a r5 = r2.a
                java.lang.String r0 = com.tencent.connect.auth.a.i(r5)
                r3.<init>(r5, r0)
                com.tencent.connect.auth.a r5 = r2.a
                java.util.HashMap r5 = com.tencent.connect.auth.a.p(r5)
                r5.put(r4, r3)
                com.tencent.connect.auth.a r4 = r2.a
                android.os.Handler r4 = com.tencent.connect.auth.a.n(r4)
                r0 = 120000(0x1d4c0, double:5.9288E-319)
                r4.postDelayed(r3, r0)
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.onReceivedError(r2, r3, r4, r5)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "-->onReceivedError, errorCode: "
                r2.append(r0)
                r2.append(r3)
                java.lang.String r0 = " | description: "
                r2.append(r0)
                r2.append(r4)
                java.lang.String r2 = r2.toString()
                java.lang.String r0 = "openSDK_LOG.AuthDialog"
                com.tencent.open.log.SLog.i(r0, r2)
                com.tencent.connect.auth.a r2 = r1.a
                android.content.Context r2 = com.tencent.connect.auth.a.a(r2)
                boolean r2 = com.tencent.open.utils.m.b(r2)
                if (r2 != 0) goto L45
                com.tencent.connect.auth.a r2 = r1.a
                com.tencent.connect.auth.a$b r2 = com.tencent.connect.auth.a.f(r2)
                com.tencent.tauth.UiError r3 = new com.tencent.tauth.UiError
                r4 = 9001(0x2329, float:1.2613E-41)
                java.lang.String r0 = "当前网络不可用，请稍后重试！"
                r3.<init>(r4, r0, r5)
                r2.onError(r3)
                com.tencent.connect.auth.a r2 = r1.a
                r2.dismiss()
                return
            L45:
                com.tencent.connect.auth.a r2 = r1.a
                java.lang.String r2 = com.tencent.connect.auth.a.i(r2)
                java.lang.String r0 = "https://imgcache.qq.com/ptlogin/static/qzsjump.html?"
                boolean r2 = r2.startsWith(r0)
                if (r2 != 0) goto L97
                long r2 = android.os.SystemClock.elapsedRealtime()
                com.tencent.connect.auth.a r4 = r1.a
                long r4 = com.tencent.connect.auth.a.j(r4)
                long r2 = r2 - r4
                com.tencent.connect.auth.a r4 = r1.a
                int r4 = com.tencent.connect.auth.a.k(r4)
                r5 = 1
                if (r4 >= r5) goto L87
                com.tencent.connect.auth.a r4 = r1.a
                long r4 = com.tencent.connect.auth.a.l(r4)
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 >= 0) goto L87
                com.tencent.connect.auth.a r2 = r1.a
                com.tencent.connect.auth.a.m(r2)
                com.tencent.connect.auth.a r2 = r1.a
                android.os.Handler r2 = com.tencent.connect.auth.a.n(r2)
                com.tencent.connect.auth.a$a$1 r3 = new com.tencent.connect.auth.a$a$1
                r3.<init>(r1)
                r4 = 500(0x1f4, double:2.47E-321)
                r2.postDelayed(r3, r4)
                goto L96
            L87:
                com.tencent.connect.auth.a r2 = r1.a
                com.tencent.open.c.d r2 = com.tencent.connect.auth.a.e(r2)
                com.tencent.connect.auth.a r3 = r1.a
                java.lang.String r3 = com.tencent.connect.auth.a.o(r3)
                r2.loadUrl(r3)
            L96:
                return
            L97:
                com.tencent.connect.auth.a r2 = r1.a
                com.tencent.connect.auth.a$b r2 = com.tencent.connect.auth.a.f(r2)
                com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
                r0.<init>(r3, r4, r5)
                r2.onError(r0)
                com.tencent.connect.auth.a r2 = r1.a
                r2.dismiss()
                return
        }

        @Override
        public void onReceivedSslError(android.webkit.WebView r2, android.webkit.SslErrorHandler r3, android.net.http.SslError r4) {
                r1 = this;
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "-->onReceivedSslError "
                r2.append(r0)
                int r4 = r4.getPrimaryError()
                r2.append(r4)
                java.lang.String r4 = "请求不合法，请检查手机安全设置，如系统时间、代理等"
                r2.append(r4)
                java.lang.String r2 = r2.toString()
                java.lang.String r4 = "openSDK_LOG.AuthDialog"
                com.tencent.open.log.SLog.e(r4, r2)
                r3.cancel()
                return
        }

        @Override
        public boolean shouldOverrideUrlLoading(android.webkit.WebView r5, java.lang.String r6) {
                r4 = this;
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r0 = "-->Redirect URL: "
                r5.append(r0)
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                java.lang.String r0 = "openSDK_LOG.AuthDialog"
                com.tencent.open.log.SLog.v(r0, r5)
                java.lang.String r5 = "auth://browser"
                boolean r5 = r6.startsWith(r5)
                r1 = 1
                if (r5 == 0) goto Lbc
                org.json.JSONObject r5 = com.tencent.open.utils.m.c(r6)
                com.tencent.connect.auth.a r6 = r4.a
                boolean r0 = com.tencent.connect.auth.a.b(r6)
                com.tencent.connect.auth.a.a(r6, r0)
                com.tencent.connect.auth.a r6 = r4.a
                boolean r6 = com.tencent.connect.auth.a.c(r6)
                if (r6 == 0) goto L36
                goto Lbb
            L36:
                r6 = 0
                java.lang.String r0 = "fail_cb"
                java.lang.String r2 = r5.optString(r0, r6)
                if (r2 == 0) goto L4b
                com.tencent.connect.auth.a r6 = r4.a
                java.lang.String r5 = r5.optString(r0)
                java.lang.String r0 = ""
                r6.a(r5, r0)
                goto Lbb
            L4b:
                java.lang.String r0 = "fall_to_wv"
                int r0 = r5.optInt(r0)
                if (r0 != r1) goto Laa
                com.tencent.connect.auth.a r5 = r4.a
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                com.tencent.connect.auth.a r0 = r4.a
                java.lang.String r0 = com.tencent.connect.auth.a.d(r0)
                r6.append(r0)
                com.tencent.connect.auth.a r0 = r4.a
                java.lang.String r0 = com.tencent.connect.auth.a.d(r0)
                java.lang.String r2 = "?"
                int r0 = r0.indexOf(r2)
                r3 = -1
                if (r0 <= r3) goto L74
                java.lang.String r2 = "&"
            L74:
                r6.append(r2)
                java.lang.String r6 = r6.toString()
                com.tencent.connect.auth.a.b(r5, r6)
                com.tencent.connect.auth.a r5 = r4.a
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                com.tencent.connect.auth.a r0 = r4.a
                java.lang.String r0 = com.tencent.connect.auth.a.d(r0)
                r6.append(r0)
                java.lang.String r0 = "browser_error=1"
                r6.append(r0)
                java.lang.String r6 = r6.toString()
                com.tencent.connect.auth.a.b(r5, r6)
                com.tencent.connect.auth.a r5 = r4.a
                com.tencent.open.c.d r5 = com.tencent.connect.auth.a.e(r5)
                com.tencent.connect.auth.a r6 = r4.a
                java.lang.String r6 = com.tencent.connect.auth.a.d(r6)
                r5.loadUrl(r6)
                goto Lbb
            Laa:
                java.lang.String r0 = "redir"
                java.lang.String r5 = r5.optString(r0, r6)
                if (r5 == 0) goto Lbb
                com.tencent.connect.auth.a r6 = r4.a
                com.tencent.open.c.d r6 = com.tencent.connect.auth.a.e(r6)
                r6.loadUrl(r5)
            Lbb:
                return r1
            Lbc:
                java.lang.String r5 = "auth://tauth.qq.com/"
                boolean r5 = r6.startsWith(r5)
                if (r5 == 0) goto Ld7
                com.tencent.connect.auth.a r5 = r4.a
                com.tencent.connect.auth.a$b r5 = com.tencent.connect.auth.a.f(r5)
                org.json.JSONObject r6 = com.tencent.open.utils.m.c(r6)
                r5.onComplete(r6)
                com.tencent.connect.auth.a r5 = r4.a
                r5.dismiss()
                return r1
            Ld7:
                java.lang.String r5 = "auth://cancel"
                boolean r5 = r6.startsWith(r5)
                if (r5 == 0) goto Lee
                com.tencent.connect.auth.a r5 = r4.a
                com.tencent.connect.auth.a$b r5 = com.tencent.connect.auth.a.f(r5)
                r5.onCancel()
                com.tencent.connect.auth.a r5 = r4.a
                r5.dismiss()
                return r1
            Lee:
                java.lang.String r5 = "auth://close"
                boolean r5 = r6.startsWith(r5)
                if (r5 == 0) goto Lfc
                com.tencent.connect.auth.a r5 = r4.a
                r5.dismiss()
                return r1
            Lfc:
                java.lang.String r5 = "download://"
                boolean r2 = r6.startsWith(r5)
                if (r2 != 0) goto L192
                java.lang.String r2 = ".apk"
                boolean r2 = r6.endsWith(r2)
                if (r2 == 0) goto L10e
                goto L192
            L10e:
                java.lang.String r5 = "auth://progress"
                boolean r5 = r6.startsWith(r5)
                r2 = 0
                if (r5 == 0) goto L157
                android.net.Uri r5 = android.net.Uri.parse(r6)     // Catch: java.lang.Exception -> L156
                java.util.List r5 = r5.getPathSegments()     // Catch: java.lang.Exception -> L156
                boolean r6 = r5.isEmpty()     // Catch: java.lang.Exception -> L156
                if (r6 == 0) goto L126
                return r1
            L126:
                java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Exception -> L156
                java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L156
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L156
                int r5 = r5.intValue()     // Catch: java.lang.Exception -> L156
                if (r5 != 0) goto L14b
                com.tencent.connect.auth.a r5 = r4.a     // Catch: java.lang.Exception -> L156
                android.widget.FrameLayout r5 = com.tencent.connect.auth.a.g(r5)     // Catch: java.lang.Exception -> L156
                r6 = 8
                r5.setVisibility(r6)     // Catch: java.lang.Exception -> L156
                com.tencent.connect.auth.a r5 = r4.a     // Catch: java.lang.Exception -> L156
                com.tencent.open.c.d r5 = com.tencent.connect.auth.a.e(r5)     // Catch: java.lang.Exception -> L156
                r5.setVisibility(r2)     // Catch: java.lang.Exception -> L156
                goto L156
            L14b:
                if (r5 != r1) goto L156
                com.tencent.connect.auth.a r5 = r4.a     // Catch: java.lang.Exception -> L156
                android.widget.FrameLayout r5 = com.tencent.connect.auth.a.g(r5)     // Catch: java.lang.Exception -> L156
                r5.setVisibility(r2)     // Catch: java.lang.Exception -> L156
            L156:
                return r1
            L157:
                java.lang.String r5 = "auth://onLoginSubmit"
                boolean r5 = r6.startsWith(r5)
                if (r5 == 0) goto L179
                android.net.Uri r5 = android.net.Uri.parse(r6)     // Catch: java.lang.Exception -> L178
                java.util.List r5 = r5.getPathSegments()     // Catch: java.lang.Exception -> L178
                boolean r6 = r5.isEmpty()     // Catch: java.lang.Exception -> L178
                if (r6 != 0) goto L178
                com.tencent.connect.auth.a r6 = r4.a     // Catch: java.lang.Exception -> L178
                java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Exception -> L178
                java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L178
                com.tencent.connect.auth.a.c(r6, r5)     // Catch: java.lang.Exception -> L178
            L178:
                return r1
            L179:
                com.tencent.connect.auth.a r5 = r4.a
                com.tencent.open.web.security.b r5 = com.tencent.connect.auth.a.h(r5)
                com.tencent.connect.auth.a r3 = r4.a
                com.tencent.open.c.d r3 = com.tencent.connect.auth.a.e(r3)
                boolean r5 = r5.a(r3, r6)
                if (r5 == 0) goto L18c
                return r1
            L18c:
                java.lang.String r5 = "-->Redirect URL: return false"
                com.tencent.open.log.SLog.i(r0, r5)
                return r2
            L192:
                boolean r5 = r6.startsWith(r5)     // Catch: java.lang.Exception -> L1c5
                if (r5 == 0) goto L1a7
                r5 = 11
                java.lang.String r5 = r6.substring(r5)     // Catch: java.lang.Exception -> L1c5
                java.lang.String r5 = android.net.Uri.decode(r5)     // Catch: java.lang.Exception -> L1c5
                android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L1c5
                goto L1af
            L1a7:
                java.lang.String r5 = android.net.Uri.decode(r6)     // Catch: java.lang.Exception -> L1c5
                android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L1c5
            L1af:
                android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Exception -> L1c5
                java.lang.String r2 = "android.intent.action.VIEW"
                r6.<init>(r2, r5)     // Catch: java.lang.Exception -> L1c5
                r5 = 268435456(0x10000000, float:2.524355E-29)
                r6.addFlags(r5)     // Catch: java.lang.Exception -> L1c5
                com.tencent.connect.auth.a r5 = r4.a     // Catch: java.lang.Exception -> L1c5
                android.content.Context r5 = com.tencent.connect.auth.a.a(r5)     // Catch: java.lang.Exception -> L1c5
                r5.startActivity(r6)     // Catch: java.lang.Exception -> L1c5
                goto L1cb
            L1c5:
                r5 = move-exception
                java.lang.String r6 = "-->start download activity exception, e: "
                com.tencent.open.log.SLog.e(r0, r6, r5)
            L1cb:
                return r1
        }
    }

    private class b extends com.tencent.tauth.DefaultUiListener {
        java.lang.String a;
        java.lang.String b;
        final com.tencent.connect.auth.a c;
        private java.lang.String d;
        private com.tencent.tauth.IUiListener e;

        public b(com.tencent.connect.auth.a r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.tencent.tauth.IUiListener r5) {
                r0 = this;
                r0.c = r1
                r0.<init>()
                r0.d = r2
                r0.a = r3
                r0.b = r4
                r0.e = r5
                return
        }

        static void a(com.tencent.connect.auth.a.b r0, java.lang.String r1) {
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
                com.tencent.open.b.h r1 = com.tencent.open.b.h.a()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r12.d
                r2.append(r3)
                java.lang.String r3 = "_H5"
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                long r3 = android.os.SystemClock.elapsedRealtime()
                r5 = 0
                r7 = 0
                int r9 = r13.errorCode
                r11 = 0
                r10 = r0
                r1.a(r2, r3, r5, r7, r9, r10, r11)
                com.tencent.connect.auth.a r1 = r12.c
                com.tencent.connect.auth.a.a(r1, r0)
                com.tencent.tauth.IUiListener r0 = r12.e
                if (r0 == 0) goto L4f
                r0.onError(r13)
                r13 = 0
                r12.e = r13
            L4f:
                return
        }
    }

    private class c extends android.os.Handler {
        final com.tencent.connect.auth.a a;
        private com.tencent.connect.auth.a.b b;

        public c(com.tencent.connect.auth.a r1, com.tencent.connect.auth.a.b r2, android.os.Looper r3) {
                r0 = this;
                r0.a = r1
                r0.<init>(r3)
                r0.b = r2
                return
        }

        @Override
        public void handleMessage(android.os.Message r3) {
                r2 = this;
                int r0 = r3.what
                r1 = 1
                if (r0 == r1) goto L20
                r1 = 2
                if (r0 == r1) goto L1a
                r1 = 3
                if (r0 == r1) goto Lc
                goto L29
            Lc:
                com.tencent.connect.auth.a r0 = r2.a
                android.content.Context r0 = com.tencent.connect.auth.a.a(r0)
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.connect.auth.a.a(r0, r3)
                goto L29
            L1a:
                com.tencent.connect.auth.a$b r3 = r2.b
                r3.onCancel()
                goto L29
            L20:
                com.tencent.connect.auth.a$b r0 = r2.b
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.connect.auth.a.b.a(r0, r3)
            L29:
                return
        }
    }

    class d implements java.lang.Runnable {
        java.lang.String a;
        final com.tencent.connect.auth.a b;

        public d(com.tencent.connect.auth.a r1, java.lang.String r2) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                java.lang.String r1 = ""
                r0.a = r1
                r0.a = r2
                return
        }

        @Override
        public void run() {
                r5 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "-->timeoutUrl: "
                r0.append(r1)
                java.lang.String r1 = r5.a
                r0.append(r1)
                java.lang.String r1 = " | mRetryUrl: "
                r0.append(r1)
                com.tencent.connect.auth.a r1 = r5.b
                java.lang.String r1 = com.tencent.connect.auth.a.i(r1)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "openSDK_LOG.AuthDialog"
                com.tencent.open.log.SLog.v(r1, r0)
                java.lang.String r0 = r5.a
                com.tencent.connect.auth.a r1 = r5.b
                java.lang.String r1 = com.tencent.connect.auth.a.i(r1)
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L51
                com.tencent.connect.auth.a r0 = r5.b
                com.tencent.connect.auth.a$b r0 = com.tencent.connect.auth.a.f(r0)
                com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
                r2 = 9002(0x232a, float:1.2614E-41)
                com.tencent.connect.auth.a r3 = r5.b
                java.lang.String r3 = com.tencent.connect.auth.a.i(r3)
                java.lang.String r4 = "请求页面超时，请稍后重试！"
                r1.<init>(r2, r4, r3)
                r0.onError(r1)
                com.tencent.connect.auth.a r0 = r5.b
                r0.dismiss()
            L51:
                return
        }
    }

    public a(android.content.Context r9, java.lang.String r10, java.lang.String r11, com.tencent.tauth.IUiListener r12, com.tencent.connect.auth.QQToken r13) {
            r8 = this;
            r0 = 16973840(0x1030010, float:2.4060945E-38)
            r8.<init>(r9, r0)
            r0 = 0
            r8.m = r0
            r0 = 0
            r8.q = r0
            r0 = 30000(0x7530, double:1.4822E-319)
            r8.r = r0
            r8.k = r9
            r8.a = r11
            com.tencent.connect.auth.a$b r0 = new com.tencent.connect.auth.a$b
            java.lang.String r6 = r13.getAppId()
            r2 = r0
            r3 = r8
            r4 = r10
            r5 = r11
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            r8.b = r0
            com.tencent.connect.auth.a$c r11 = new com.tencent.connect.auth.a$c
            com.tencent.connect.auth.a$b r13 = r8.b
            android.os.Looper r9 = r9.getMainLooper()
            r11.<init>(r8, r13, r9)
            r8.d = r11
            r8.c = r12
            r8.i = r10
            com.tencent.open.web.security.b r9 = new com.tencent.open.web.security.b
            r9.<init>()
            r8.l = r9
            android.view.Window r9 = r8.getWindow()
            r10 = 32
            r9.setSoftInputMode(r10)
            return
    }

    static long a(com.tencent.connect.auth.a r0, long r1) {
            r0.q = r1
            return r1
    }

    static android.content.Context a(com.tencent.connect.auth.a r0) {
            android.content.Context r0 = r0.k
            return r0
    }

    private java.lang.String a() {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.String r1 = "?"
            int r1 = r0.indexOf(r1)
            int r1 = r1 + 1
            java.lang.String r0 = r0.substring(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "https://imgcache.qq.com/ptlogin/static/qzsjump.html?"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "openSDK_LOG.AuthDialog"
            java.lang.String r2 = "-->generateDownloadUrl, url: https://imgcache.qq.com/ptlogin/static/qzsjump.html?"
            com.tencent.open.log.SLog.i(r1, r2)
            return r0
    }

    static java.lang.String a(com.tencent.connect.auth.a r0, java.lang.String r1) {
            java.lang.String r0 = r0.a(r1)
            return r0
    }

    private java.lang.String a(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r4)
            java.lang.String r4 = r3.p
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L29
            java.lang.String r4 = r3.p
            int r4 = r4.length()
            r1 = 4
            if (r4 < r1) goto L29
            java.lang.String r4 = r3.p
            int r2 = r4.length()
            int r2 = r2 - r1
            java.lang.String r4 = r4.substring(r2)
            java.lang.String r1 = "_u_"
            r0.append(r1)
            r0.append(r4)
        L29:
            java.lang.String r4 = r0.toString()
            return r4
    }

    static void a(android.content.Context r0, java.lang.String r1) {
            b(r0, r1)
            return
    }

    private void a(android.view.ViewGroup r7) {
            r6 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r6.k
            r0.<init>(r1)
            android.content.Context r1 = r6.k
            r2 = 1098488218(0x4179999a, float:15.6)
            int r1 = com.tencent.connect.avatar.a.a(r1, r2)
            android.content.Context r2 = r6.k
            r3 = 1103731098(0x41c9999a, float:25.2)
            int r2 = com.tencent.connect.avatar.a.a(r2, r3)
            android.content.Context r3 = r6.k
            r4 = 1092616192(0x41200000, float:10.0)
            int r3 = com.tencent.connect.avatar.a.a(r3, r4)
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            int r5 = r3 * 2
            int r1 = r1 + r5
            int r2 = r2 + r5
            r4.<init>(r1, r2)
            r4.leftMargin = r3
            r0.setLayoutParams(r4)
            r0.setPadding(r3, r3, r3, r3)
            android.content.Context r1 = r6.k
            java.lang.String r2 = "h5_qr_back.png"
            android.graphics.drawable.Drawable r1 = com.tencent.open.utils.m.a(r2, r1)
            r0.setImageDrawable(r1)
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_CENTER
            r0.setScaleType(r1)
            com.tencent.connect.auth.a$1 r1 = new com.tencent.connect.auth.a$1
            r1.<init>(r6)
            r0.setOnClickListener(r1)
            r7.addView(r0)
            return
    }

    static boolean a(com.tencent.connect.auth.a r0, boolean r1) {
            r0.m = r1
            return r1
    }

    static java.lang.String b(com.tencent.connect.auth.a r0, java.lang.String r1) {
            r0.a = r1
            return r1
    }

    private void b() {
            r5 = this;
            r5.c()     // Catch: java.lang.Exception -> L70
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L70
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Exception -> L70
            com.tencent.open.c.d r2 = new com.tencent.open.c.d     // Catch: java.lang.Exception -> L70
            android.content.Context r3 = r5.k     // Catch: java.lang.Exception -> L70
            r2.<init>(r3)     // Catch: java.lang.Exception -> L70
            r5.j = r2     // Catch: java.lang.Exception -> L70
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L70
            r3 = 11
            if (r2 < r3) goto L1f
            com.tencent.open.c.d r2 = r5.j     // Catch: java.lang.Exception -> L70
            r3 = 1
            r4 = 0
            r2.setLayerType(r3, r4)     // Catch: java.lang.Exception -> L70
        L1f:
            com.tencent.open.c.d r2 = r5.j     // Catch: java.lang.Exception -> L70
            r2.setLayoutParams(r0)     // Catch: java.lang.Exception -> L70
            r2 = 17
            r0.gravity = r2     // Catch: java.lang.Exception -> L70
            com.tencent.open.c.c r2 = new com.tencent.open.c.c     // Catch: java.lang.Exception -> L70
            android.content.Context r3 = r5.k     // Catch: java.lang.Exception -> L70
            r2.<init>(r3)     // Catch: java.lang.Exception -> L70
            r2.setLayoutParams(r0)     // Catch: java.lang.Exception -> L70
            com.tencent.open.c.d r0 = r5.j     // Catch: java.lang.Exception -> L70
            r2.addView(r0)     // Catch: java.lang.Exception -> L70
            android.widget.FrameLayout r0 = new android.widget.FrameLayout     // Catch: java.lang.Exception -> L70
            android.content.Context r3 = r5.k     // Catch: java.lang.Exception -> L70
            r0.<init>(r3)     // Catch: java.lang.Exception -> L70
            r5.e = r0     // Catch: java.lang.Exception -> L70
            r0.addView(r2)     // Catch: java.lang.Exception -> L70
            android.widget.FrameLayout r0 = r5.e     // Catch: java.lang.Exception -> L70
            r0.setBackgroundColor(r1)     // Catch: java.lang.Exception -> L70
            android.widget.FrameLayout r0 = r5.e     // Catch: java.lang.Exception -> L70
            android.widget.FrameLayout r1 = r5.g     // Catch: java.lang.Exception -> L70
            r0.addView(r1)     // Catch: java.lang.Exception -> L70
            java.lang.String r0 = r5.a     // Catch: java.lang.Exception -> L70
            android.os.Bundle r0 = com.tencent.open.utils.m.b(r0)     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = "style"
            java.lang.String r0 = r0.getString(r1)     // Catch: java.lang.Exception -> L70
            if (r0 == 0) goto L6a
            java.lang.String r1 = "qr"
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Exception -> L70
            if (r0 == 0) goto L6a
            android.widget.FrameLayout r0 = r5.e     // Catch: java.lang.Exception -> L70
            r5.a(r0)     // Catch: java.lang.Exception -> L70
        L6a:
            android.widget.FrameLayout r0 = r5.e     // Catch: java.lang.Exception -> L70
            r5.setContentView(r0)     // Catch: java.lang.Exception -> L70
            goto L7d
        L70:
            r0 = move-exception
            java.lang.String r1 = "openSDK_LOG.AuthDialog"
            java.lang.String r2 = "onCreateView exception"
            com.tencent.open.log.SLog.e(r1, r2, r0)
            android.os.Handler r0 = r5.d
            com.tencent.open.a.a(r5, r0)
        L7d:
            return
    }

    private static void b(android.content.Context r2, java.lang.String r3) {
            org.json.JSONObject r3 = com.tencent.open.utils.m.d(r3)     // Catch: org.json.JSONException -> L1c
            java.lang.String r0 = "type"
            int r0 = r3.getInt(r0)     // Catch: org.json.JSONException -> L1c
            java.lang.String r1 = "msg"
            java.lang.String r3 = r3.getString(r1)     // Catch: org.json.JSONException -> L1c
            android.content.Context r2 = r2.getApplicationContext()     // Catch: org.json.JSONException -> L1c
            android.widget.Toast r2 = android.widget.Toast.makeText(r2, r3, r0)     // Catch: org.json.JSONException -> L1c
            r2.show()     // Catch: org.json.JSONException -> L1c
            goto L20
        L1c:
            r2 = move-exception
            r2.printStackTrace()
        L20:
            return
    }

    static boolean b(com.tencent.connect.auth.a r0) {
            boolean r0 = r0.e()
            return r0
    }

    static java.lang.String c(com.tencent.connect.auth.a r0, java.lang.String r1) {
            r0.p = r1
            return r1
    }

    private void c() {
            r5 = this;
            android.widget.ProgressBar r0 = new android.widget.ProgressBar
            android.content.Context r1 = r5.k
            r0.<init>(r1)
            r5.h = r0
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            android.widget.ProgressBar r2 = r5.h
            r2.setLayoutParams(r0)
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            android.content.Context r2 = r5.k
            r0.<init>(r2)
            r5.f = r0
            java.lang.String r0 = r5.i
            java.lang.String r2 = "action_login"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L67
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r0.<init>(r1, r1)
            r2 = 16
            r0.gravity = r2
            r2 = 5
            r0.leftMargin = r2
            android.widget.TextView r2 = new android.widget.TextView
            android.content.Context r3 = r5.k
            r2.<init>(r3)
            java.util.Locale r3 = java.util.Locale.getDefault()
            java.lang.String r3 = r3.getLanguage()
            java.lang.String r4 = "zh"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L50
            java.lang.String r3 = "登录中..."
            r2.setText(r3)
            goto L55
        L50:
            java.lang.String r3 = "Logging in..."
            r2.setText(r3)
        L55:
            r3 = 255(0xff, float:3.57E-43)
            int r3 = android.graphics.Color.rgb(r3, r3, r3)
            r2.setTextColor(r3)
            r3 = 1099956224(0x41900000, float:18.0)
            r2.setTextSize(r3)
            r2.setLayoutParams(r0)
            goto L68
        L67:
            r2 = 0
        L68:
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r0.<init>(r1, r1)
            r1 = 17
            r0.gravity = r1
            android.widget.LinearLayout r3 = r5.f
            r3.setLayoutParams(r0)
            android.widget.LinearLayout r0 = r5.f
            android.widget.ProgressBar r3 = r5.h
            r0.addView(r3)
            if (r2 == 0) goto L84
            android.widget.LinearLayout r0 = r5.f
            r0.addView(r2)
        L84:
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            android.content.Context r2 = r5.k
            r0.<init>(r2)
            r5.g = r0
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r0.<init>(r2, r2)
            r0.gravity = r1
            android.widget.FrameLayout r1 = r5.g
            r1.setLayoutParams(r0)
            android.widget.FrameLayout r0 = r5.g
            java.lang.String r1 = "#B3000000"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setBackgroundColor(r1)
            android.widget.FrameLayout r0 = r5.g
            android.widget.LinearLayout r1 = r5.f
            r0.addView(r1)
            return
    }

    static boolean c(com.tencent.connect.auth.a r0) {
            boolean r0 = r0.m
            return r0
    }

    static java.lang.String d(com.tencent.connect.auth.a r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static java.lang.String d(com.tencent.connect.auth.a r0, java.lang.String r1) {
            r0.o = r1
            return r1
    }

    private void d() {
            r5 = this;
            com.tencent.open.c.d r0 = r5.j
            r1 = 0
            r0.setVerticalScrollBarEnabled(r1)
            com.tencent.open.c.d r0 = r5.j
            r0.setHorizontalScrollBarEnabled(r1)
            com.tencent.open.c.d r0 = r5.j
            com.tencent.connect.auth.a$a r2 = new com.tencent.connect.auth.a$a
            r3 = 0
            r2.<init>(r5, r3)
            r0.setWebViewClient(r2)
            com.tencent.open.c.d r0 = r5.j
            android.webkit.WebChromeClient r2 = new android.webkit.WebChromeClient
            r2.<init>()
            r0.setWebChromeClient(r2)
            com.tencent.open.c.d r0 = r5.j
            r0.clearFormData()
            com.tencent.open.c.d r0 = r5.j
            r0.clearSslPreferences()
            com.tencent.open.c.d r0 = r5.j
            com.tencent.connect.auth.a$2 r2 = new com.tencent.connect.auth.a$2
            r2.<init>(r5)
            r0.setOnLongClickListener(r2)
            com.tencent.open.c.d r0 = r5.j
            com.tencent.connect.auth.a$3 r2 = new com.tencent.connect.auth.a$3
            r2.<init>(r5)
            r0.setOnTouchListener(r2)
            com.tencent.open.c.d r0 = r5.j
            android.webkit.WebSettings r0 = r0.getSettings()
            com.tencent.open.c.d r2 = r5.j
            com.tencent.open.web.a.a(r2)
            r0.setSaveFormData(r1)
            r2 = -1
            r0.setCacheMode(r2)
            r0.setNeedInitialFocus(r1)
            r2 = 1
            r0.setBuiltInZoomControls(r2)
            r0.setSupportZoom(r2)
            android.webkit.WebSettings$RenderPriority r3 = android.webkit.WebSettings.RenderPriority.HIGH
            r0.setRenderPriority(r3)
            r0.setDatabaseEnabled(r2)
            android.content.Context r3 = r5.k
            java.lang.String r4 = "databases"
            java.io.File r3 = r3.getDir(r4, r1)
            java.lang.String r3 = r3.getPath()
            r0.setDatabasePath(r3)
            r0.setDomStorageEnabled(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-->mUrl : "
            r0.append(r2)
            java.lang.String r2 = r5.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "openSDK_LOG.AuthDialog"
            com.tencent.open.log.SLog.v(r2, r0)
            java.lang.String r0 = r5.a
            r5.o = r0
            com.tencent.open.c.d r2 = r5.j
            r2.loadUrl(r0)
            com.tencent.open.c.d r0 = r5.j
            r2 = 4
            r0.setVisibility(r2)
            com.tencent.open.web.security.b r0 = r5.l
            com.tencent.open.web.security.SecureJsInterface r2 = new com.tencent.open.web.security.SecureJsInterface
            r2.<init>()
            java.lang.String r3 = "SecureJsInterface"
            r0.a(r2, r3)
            com.tencent.open.web.security.SecureJsInterface.isPWDEdit = r1
            com.tencent.connect.auth.a$4 r0 = new com.tencent.connect.auth.a$4
            r0.<init>(r5)
            super.setOnDismissListener(r0)
            return
    }

    static com.tencent.open.c.d e(com.tencent.connect.auth.a r0) {
            com.tencent.open.c.d r0 = r0.j
            return r0
    }

    private boolean e() {
            r6 = this;
            com.tencent.connect.auth.b r0 = com.tencent.connect.auth.b.a()
            java.lang.String r1 = r0.c()
            com.tencent.connect.auth.b$a r2 = new com.tencent.connect.auth.b$a
            r2.<init>()
            com.tencent.tauth.IUiListener r3 = r6.c
            r2.a = r3
            r2.b = r6
            r2.c = r1
            java.lang.String r0 = r0.a(r2)
            java.lang.String r2 = r6.a
            java.lang.String r3 = "?"
            int r4 = r2.indexOf(r3)
            r5 = 0
            java.lang.String r2 = r2.substring(r5, r4)
            java.lang.String r4 = r6.a
            android.os.Bundle r4 = com.tencent.open.utils.m.b(r4)
            java.lang.String r5 = "token_key"
            r4.putString(r5, r1)
            java.lang.String r1 = "serial"
            r4.putString(r1, r0)
            java.lang.String r0 = "browser"
            java.lang.String r1 = "1"
            r4.putString(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r3)
            java.lang.String r1 = com.tencent.open.utils.HttpUtils.encodeUrl(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.a = r0
            android.content.Context r1 = r6.k
            boolean r0 = com.tencent.open.utils.m.a(r1, r0)
            return r0
    }

    static com.tencent.connect.auth.a.b f(com.tencent.connect.auth.a r0) {
            com.tencent.connect.auth.a$b r0 = r0.b
            return r0
    }

    static android.widget.FrameLayout g(com.tencent.connect.auth.a r0) {
            android.widget.FrameLayout r0 = r0.g
            return r0
    }

    static com.tencent.open.web.security.b h(com.tencent.connect.auth.a r0) {
            com.tencent.open.web.security.b r0 = r0.l
            return r0
    }

    static java.lang.String i(com.tencent.connect.auth.a r0) {
            java.lang.String r0 = r0.o
            return r0
    }

    static long j(com.tencent.connect.auth.a r2) {
            long r0 = r2.q
            return r0
    }

    static int k(com.tencent.connect.auth.a r0) {
            int r0 = r0.n
            return r0
    }

    static long l(com.tencent.connect.auth.a r2) {
            long r0 = r2.r
            return r0
    }

    static int m(com.tencent.connect.auth.a r2) {
            int r0 = r2.n
            int r1 = r0 + 1
            r2.n = r1
            return r0
    }

    static android.os.Handler n(com.tencent.connect.auth.a r0) {
            android.os.Handler r0 = r0.d
            return r0
    }

    static java.lang.String o(com.tencent.connect.auth.a r0) {
            java.lang.String r0 = r0.a()
            return r0
    }

    static java.util.HashMap p(com.tencent.connect.auth.a r0) {
            java.util.HashMap<java.lang.String, java.lang.Runnable> r0 = r0.s
            return r0
    }

    public void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "javascript:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "("
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = ");void("
            r0.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            r0.append(r3)
            java.lang.String r3 = ");"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.tencent.open.c.d r4 = r2.j
            r4.loadUrl(r3)
            return
    }

    @Override
    public void dismiss() {
            r4 = this;
            java.lang.String r0 = "openSDK_LOG.AuthDialog"
            java.util.HashMap<java.lang.String, java.lang.Runnable> r1 = r4.s
            r1.clear()
            android.os.Handler r1 = r4.d
            r2 = 0
            r1.removeCallbacksAndMessages(r2)
            android.content.Context r1 = r4.k     // Catch: java.lang.Exception -> L2c
            boolean r1 = r1 instanceof android.app.Activity     // Catch: java.lang.Exception -> L2c
            if (r1 == 0) goto L32
            android.content.Context r1 = r4.k     // Catch: java.lang.Exception -> L2c
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.Exception -> L2c
            boolean r1 = r1.isFinishing()     // Catch: java.lang.Exception -> L2c
            if (r1 != 0) goto L32
            boolean r1 = r4.isShowing()     // Catch: java.lang.Exception -> L2c
            if (r1 == 0) goto L32
            super.dismiss()     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = "-->dismiss dialog"
            com.tencent.open.log.SLog.i(r0, r1)     // Catch: java.lang.Exception -> L2c
            goto L32
        L2c:
            r1 = move-exception
            java.lang.String r3 = "-->dismiss dialog exception:"
            com.tencent.open.log.SLog.e(r0, r3, r1)
        L32:
            com.tencent.open.c.d r0 = r4.j
            if (r0 == 0) goto L3b
            r0.destroy()
            r4.j = r2
        L3b:
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            boolean r0 = r1.m
            if (r0 != 0) goto L9
            com.tencent.connect.auth.a$b r0 = r1.b
            r0.onCancel()
        L9:
            super.onBackPressed()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            r0 = 1
            r1.requestWindowFeature(r0)
            super.onCreate(r2)
            android.view.Window r2 = r1.getWindow()
            com.tencent.open.a.a(r2)
            r1.b()
            r1.d()
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.s = r2
            return
    }

    @Override
    protected void onStop() {
            r0 = this;
            super.onStop()
            return
    }
}
