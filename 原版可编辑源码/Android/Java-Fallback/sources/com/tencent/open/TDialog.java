package com.tencent.open;

public class TDialog extends com.tencent.open.c {
    static final android.widget.FrameLayout.LayoutParams c = null;
    static android.widget.Toast d;
    private static java.lang.ref.WeakReference<android.app.ProgressDialog> f;
    private java.lang.ref.WeakReference<android.content.Context> e;
    private java.lang.String g;
    private com.tencent.open.TDialog.OnTimeListener h;
    private com.tencent.tauth.IUiListener i;
    private android.widget.FrameLayout j;
    private com.tencent.open.c.b k;
    private android.os.Handler l;
    private boolean m;
    private com.tencent.connect.auth.QQToken n;


    private class FbWebViewClient extends android.webkit.WebViewClient {
        final com.tencent.open.TDialog a;

        private FbWebViewClient(com.tencent.open.TDialog r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        FbWebViewClient(com.tencent.open.TDialog r1, com.tencent.open.TDialog.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onPageFinished(android.webkit.WebView r1, java.lang.String r2) {
                r0 = this;
                super.onPageFinished(r1, r2)
                com.tencent.open.TDialog r1 = r0.a
                com.tencent.open.c.b r1 = com.tencent.open.TDialog.d(r1)
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
                java.lang.String r1 = "openSDK_LOG.TDialog"
                com.tencent.open.log.SLog.v(r1, r0)
                super.onPageStarted(r3, r4, r5)
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.onReceivedError(r2, r3, r4, r5)
                com.tencent.open.TDialog r2 = r1.a
                com.tencent.open.TDialog$OnTimeListener r2 = com.tencent.open.TDialog.c(r2)
                com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
                r0.<init>(r3, r4, r5)
                r2.onError(r0)
                com.tencent.open.TDialog r2 = r1.a
                java.lang.ref.WeakReference r2 = com.tencent.open.TDialog.a(r2)
                if (r2 == 0) goto L3b
                com.tencent.open.TDialog r2 = r1.a
                java.lang.ref.WeakReference r2 = com.tencent.open.TDialog.a(r2)
                java.lang.Object r2 = r2.get()
                if (r2 == 0) goto L3b
                com.tencent.open.TDialog r2 = r1.a
                java.lang.ref.WeakReference r2 = com.tencent.open.TDialog.a(r2)
                java.lang.Object r2 = r2.get()
                android.content.Context r2 = (android.content.Context) r2
                r3 = 0
                java.lang.String r4 = "网络连接异常或系统错误"
                android.widget.Toast r2 = android.widget.Toast.makeText(r2, r4, r3)
                r2.show()
            L3b:
                com.tencent.open.TDialog r2 = r1.a
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
                java.lang.String r0 = "openSDK_LOG.TDialog"
                com.tencent.open.log.SLog.v(r0, r3)
                com.tencent.open.utils.j r3 = com.tencent.open.utils.j.a()
                com.tencent.open.TDialog r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.TDialog.a(r0)
                java.lang.Object r0 = r0.get()
                android.content.Context r0 = (android.content.Context) r0
                java.lang.String r1 = "auth://tauth.qq.com/"
                java.lang.String r3 = r3.a(r0, r1)
                boolean r3 = r4.startsWith(r3)
                r0 = 1
                if (r3 == 0) goto L4e
                com.tencent.open.TDialog r3 = r2.a
                com.tencent.open.TDialog$OnTimeListener r3 = com.tencent.open.TDialog.c(r3)
                org.json.JSONObject r4 = com.tencent.open.utils.m.c(r4)
                r3.onComplete(r4)
                com.tencent.open.TDialog r3 = r2.a
                boolean r3 = r3.isShowing()
                if (r3 == 0) goto L4d
                com.tencent.open.TDialog r3 = r2.a
                r3.dismiss()
            L4d:
                return r0
            L4e:
                java.lang.String r3 = "auth://cancel"
                boolean r3 = r4.startsWith(r3)
                if (r3 == 0) goto L6d
                com.tencent.open.TDialog r3 = r2.a
                com.tencent.open.TDialog$OnTimeListener r3 = com.tencent.open.TDialog.c(r3)
                r3.onCancel()
                com.tencent.open.TDialog r3 = r2.a
                boolean r3 = r3.isShowing()
                if (r3 == 0) goto L6c
                com.tencent.open.TDialog r3 = r2.a
                r3.dismiss()
            L6c:
                return r0
            L6d:
                java.lang.String r3 = "auth://close"
                boolean r3 = r4.startsWith(r3)
                if (r3 == 0) goto L83
                com.tencent.open.TDialog r3 = r2.a
                boolean r3 = r3.isShowing()
                if (r3 == 0) goto L82
                com.tencent.open.TDialog r3 = r2.a
                r3.dismiss()
            L82:
                return r0
            L83:
                java.lang.String r3 = "download://"
                boolean r1 = r4.startsWith(r3)
                if (r1 != 0) goto L9f
                java.lang.String r1 = ".apk"
                boolean r1 = r4.endsWith(r1)
                if (r1 == 0) goto L94
                goto L9f
            L94:
                java.lang.String r3 = "auth://progress"
                boolean r3 = r4.startsWith(r3)
                if (r3 == 0) goto L9d
                return r0
            L9d:
                r3 = 0
                return r3
            L9f:
                boolean r3 = r4.startsWith(r3)     // Catch: java.lang.Exception -> Lec
                if (r3 == 0) goto Lb4
                r3 = 11
                java.lang.String r3 = r4.substring(r3)     // Catch: java.lang.Exception -> Lec
                java.lang.String r3 = android.net.Uri.decode(r3)     // Catch: java.lang.Exception -> Lec
                android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> Lec
                goto Lbc
            Lb4:
                java.lang.String r3 = android.net.Uri.decode(r4)     // Catch: java.lang.Exception -> Lec
                android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> Lec
            Lbc:
                android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> Lec
                java.lang.String r1 = "android.intent.action.VIEW"
                r4.<init>(r1, r3)     // Catch: java.lang.Exception -> Lec
                r3 = 268435456(0x10000000, float:2.524355E-29)
                r4.addFlags(r3)     // Catch: java.lang.Exception -> Lec
                com.tencent.open.TDialog r3 = r2.a     // Catch: java.lang.Exception -> Lec
                java.lang.ref.WeakReference r3 = com.tencent.open.TDialog.a(r3)     // Catch: java.lang.Exception -> Lec
                if (r3 == 0) goto Lf0
                com.tencent.open.TDialog r3 = r2.a     // Catch: java.lang.Exception -> Lec
                java.lang.ref.WeakReference r3 = com.tencent.open.TDialog.a(r3)     // Catch: java.lang.Exception -> Lec
                java.lang.Object r3 = r3.get()     // Catch: java.lang.Exception -> Lec
                if (r3 == 0) goto Lf0
                com.tencent.open.TDialog r3 = r2.a     // Catch: java.lang.Exception -> Lec
                java.lang.ref.WeakReference r3 = com.tencent.open.TDialog.a(r3)     // Catch: java.lang.Exception -> Lec
                java.lang.Object r3 = r3.get()     // Catch: java.lang.Exception -> Lec
                android.content.Context r3 = (android.content.Context) r3     // Catch: java.lang.Exception -> Lec
                r3.startActivity(r4)     // Catch: java.lang.Exception -> Lec
                goto Lf0
            Lec:
                r3 = move-exception
                r3.printStackTrace()
            Lf0:
                return r0
        }
    }

    private class JsListener extends com.tencent.open.b.b {
        final com.tencent.open.TDialog a;

        private JsListener(com.tencent.open.TDialog r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        JsListener(com.tencent.open.TDialog r1, com.tencent.open.TDialog.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public void onAddShare(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "openSDK_LOG.TDialog"
                java.lang.String r1 = "JsListener onAddShare"
                com.tencent.open.log.SLog.d(r0, r1)
                r2.onComplete(r3)
                return
        }

        public void onCancel(java.lang.String r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "JsListener onCancel --msg = "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "openSDK_LOG.TDialog"
                com.tencent.open.log.SLog.e(r1, r0)
                com.tencent.open.TDialog r0 = r2.a
                android.os.Handler r0 = com.tencent.open.TDialog.b(r0)
                r1 = 2
                android.os.Message r3 = r0.obtainMessage(r1, r3)
                r3.sendToTarget()
                com.tencent.open.TDialog r3 = r2.a
                r3.dismiss()
                return
        }

        public void onCancelAddShare(java.lang.String r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "JsListener onCancelAddShare"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "openSDK_LOG.TDialog"
                com.tencent.open.log.SLog.e(r0, r3)
                java.lang.String r3 = "cancel"
                r2.onCancel(r3)
                return
        }

        public void onCancelInvite() {
                r2 = this;
                java.lang.String r0 = "openSDK_LOG.TDialog"
                java.lang.String r1 = "JsListener onCancelInvite"
                com.tencent.open.log.SLog.e(r0, r1)
                java.lang.String r0 = ""
                r2.onCancel(r0)
                return
        }

        public void onCancelLogin() {
                r1 = this;
                java.lang.String r0 = ""
                r1.onCancel(r0)
                return
        }

        public void onComplete(java.lang.String r3) {
                r2 = this;
                com.tencent.open.TDialog r0 = r2.a
                android.os.Handler r0 = com.tencent.open.TDialog.b(r0)
                r1 = 1
                android.os.Message r0 = r0.obtainMessage(r1, r3)
                r0.sendToTarget()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "JsListener onComplete"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "openSDK_LOG.TDialog"
                com.tencent.open.log.SLog.e(r0, r3)
                com.tencent.open.TDialog r3 = r2.a
                r3.dismiss()
                return
        }

        public void onInvite(java.lang.String r1) {
                r0 = this;
                r0.onComplete(r1)
                return
        }

        public void onLoad(java.lang.String r3) {
                r2 = this;
                com.tencent.open.TDialog r0 = r2.a
                android.os.Handler r0 = com.tencent.open.TDialog.b(r0)
                r1 = 4
                android.os.Message r3 = r0.obtainMessage(r1, r3)
                r3.sendToTarget()
                return
        }

        public void showMsg(java.lang.String r3) {
                r2 = this;
                com.tencent.open.TDialog r0 = r2.a
                android.os.Handler r0 = com.tencent.open.TDialog.b(r0)
                r1 = 3
                android.os.Message r3 = r0.obtainMessage(r1, r3)
                r3.sendToTarget()
                return
        }
    }

    private static class OnTimeListener extends com.tencent.tauth.DefaultUiListener {
        java.lang.String a;
        java.lang.String b;
        private java.lang.ref.WeakReference<android.content.Context> c;
        private java.lang.String d;
        private com.tencent.tauth.IUiListener e;

        public OnTimeListener(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tencent.tauth.IUiListener r6) {
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

        static void a(com.tencent.open.TDialog.OnTimeListener r0, java.lang.String r1) {
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

    private class THandler extends android.os.Handler {
        final com.tencent.open.TDialog a;
        private com.tencent.open.TDialog.OnTimeListener b;

        public THandler(com.tencent.open.TDialog r1, com.tencent.open.TDialog.OnTimeListener r2, android.os.Looper r3) {
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
                java.lang.String r1 = "--handleMessage--msg.WHAT = "
                r0.append(r1)
                int r1 = r3.what
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "openSDK_LOG.TDialog"
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
                com.tencent.open.TDialog r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.TDialog.a(r0)
                if (r0 == 0) goto L86
                com.tencent.open.TDialog r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.TDialog.a(r0)
                java.lang.Object r0 = r0.get()
                if (r0 == 0) goto L86
                com.tencent.open.TDialog r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.TDialog.a(r0)
                java.lang.Object r0 = r0.get()
                android.content.Context r0 = (android.content.Context) r0
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.open.TDialog.b(r0, r3)
                goto L86
            L4f:
                com.tencent.open.TDialog r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.TDialog.a(r0)
                if (r0 == 0) goto L86
                com.tencent.open.TDialog r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.TDialog.a(r0)
                java.lang.Object r0 = r0.get()
                if (r0 == 0) goto L86
                com.tencent.open.TDialog r0 = r2.a
                java.lang.ref.WeakReference r0 = com.tencent.open.TDialog.a(r0)
                java.lang.Object r0 = r0.get()
                android.content.Context r0 = (android.content.Context) r0
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.open.TDialog.a(r0, r3)
                goto L86
            L77:
                com.tencent.open.TDialog$OnTimeListener r3 = r2.b
                r3.onCancel()
                goto L86
            L7d:
                com.tencent.open.TDialog$OnTimeListener r0 = r2.b
                java.lang.Object r3 = r3.obj
                java.lang.String r3 = (java.lang.String) r3
                com.tencent.open.TDialog.OnTimeListener.a(r0, r3)
            L86:
                return
        }
    }

    static {
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.tencent.open.TDialog.c = r0
            r0 = 0
            com.tencent.open.TDialog.d = r0
            return
    }

    public TDialog(android.content.Context r8, java.lang.String r9, java.lang.String r10, com.tencent.tauth.IUiListener r11, com.tencent.connect.auth.QQToken r12) {
            r7 = this;
            r0 = 16973840(0x1030010, float:2.4060945E-38)
            r7.<init>(r8, r0)
            r0 = 0
            r7.m = r0
            r0 = 0
            r7.n = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r8)
            r7.e = r0
            r7.g = r10
            com.tencent.open.TDialog$OnTimeListener r0 = new com.tencent.open.TDialog$OnTimeListener
            java.lang.String r5 = r12.getAppId()
            r1 = r0
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r7.h = r0
            com.tencent.open.TDialog$THandler r9 = new com.tencent.open.TDialog$THandler
            com.tencent.open.TDialog$OnTimeListener r10 = r7.h
            android.os.Looper r8 = r8.getMainLooper()
            r9.<init>(r7, r10, r8)
            r7.l = r9
            r7.i = r11
            r7.n = r12
            return
    }

    static java.lang.ref.WeakReference a(com.tencent.open.TDialog r0) {
            java.lang.ref.WeakReference<android.content.Context> r0 = r0.e
            return r0
    }

    private void a() {
            r4 = this;
            android.widget.TextView r0 = new android.widget.TextView     // Catch: java.lang.Throwable -> L52
            java.lang.ref.WeakReference<android.content.Context> r1 = r4.e     // Catch: java.lang.Throwable -> L52
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L52
            android.content.Context r1 = (android.content.Context) r1     // Catch: java.lang.Throwable -> L52
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = "test"
            r0.setText(r1)     // Catch: java.lang.Throwable -> L52
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L52
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Throwable -> L52
            com.tencent.open.c.b r2 = new com.tencent.open.c.b     // Catch: java.lang.Throwable -> L52
            java.lang.ref.WeakReference<android.content.Context> r3 = r4.e     // Catch: java.lang.Throwable -> L52
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L52
            android.content.Context r3 = (android.content.Context) r3     // Catch: java.lang.Throwable -> L52
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L52
            r4.k = r2     // Catch: java.lang.Throwable -> L52
            r2.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L52
            r2 = 17
            r0.gravity = r2     // Catch: java.lang.Throwable -> L52
            com.tencent.open.c.c r2 = new com.tencent.open.c.c     // Catch: java.lang.Throwable -> L52
            java.lang.ref.WeakReference<android.content.Context> r3 = r4.e     // Catch: java.lang.Throwable -> L52
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L52
            android.content.Context r3 = (android.content.Context) r3     // Catch: java.lang.Throwable -> L52
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L52
            r4.j = r2     // Catch: java.lang.Throwable -> L52
            r2.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L52
            android.widget.FrameLayout r0 = r4.j     // Catch: java.lang.Throwable -> L52
            r0.setBackgroundColor(r1)     // Catch: java.lang.Throwable -> L52
            android.widget.FrameLayout r0 = r4.j     // Catch: java.lang.Throwable -> L52
            com.tencent.open.c.b r1 = r4.k     // Catch: java.lang.Throwable -> L52
            r0.addView(r1)     // Catch: java.lang.Throwable -> L52
            android.widget.FrameLayout r0 = r4.j     // Catch: java.lang.Throwable -> L52
            r4.setContentView(r0)     // Catch: java.lang.Throwable -> L52
            goto L5f
        L52:
            r0 = move-exception
            java.lang.String r1 = "openSDK_LOG.TDialog"
            java.lang.String r2 = "onCreateView exception"
            com.tencent.open.log.SLog.e(r1, r2, r0)
            android.os.Handler r0 = r4.l
            com.tencent.open.a.a(r4, r0)
        L5f:
            return
    }

    static void a(android.content.Context r0, java.lang.String r1) {
            c(r0, r1)
            return
    }

    static android.os.Handler b(com.tencent.open.TDialog r0) {
            android.os.Handler r0 = r0.l
            return r0
    }

    private void b() {
            r6 = this;
            com.tencent.open.c.b r0 = r6.k
            r1 = 0
            r0.setVerticalScrollBarEnabled(r1)
            com.tencent.open.c.b r0 = r6.k
            r0.setHorizontalScrollBarEnabled(r1)
            com.tencent.open.c.b r0 = r6.k
            com.tencent.open.TDialog$FbWebViewClient r2 = new com.tencent.open.TDialog$FbWebViewClient
            r3 = 0
            r2.<init>(r6, r3)
            r0.setWebViewClient(r2)
            com.tencent.open.c.b r0 = r6.k
            android.webkit.WebChromeClient r2 = r6.b
            r0.setWebChromeClient(r2)
            com.tencent.open.c.b r0 = r6.k
            r0.clearFormData()
            com.tencent.open.c.b r0 = r6.k
            android.webkit.WebSettings r0 = r0.getSettings()
            if (r0 != 0) goto L2b
            return
        L2b:
            com.tencent.open.c.b r2 = r6.k
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
            java.lang.ref.WeakReference<android.content.Context> r4 = r6.e
            if (r4 == 0) goto L6c
            java.lang.Object r4 = r4.get()
            if (r4 == 0) goto L6c
            r0.setDatabaseEnabled(r2)
            java.lang.ref.WeakReference<android.content.Context> r4 = r6.e
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
            com.tencent.open.TDialog$JsListener r1 = new com.tencent.open.TDialog$JsListener
            r1.<init>(r6, r3)
            java.lang.String r2 = "sdk_js_if"
            r0.a(r1, r2)
            com.tencent.open.c.b r0 = r6.k
            java.lang.String r1 = r6.g
            r0.loadUrl(r1)
            com.tencent.open.c.b r0 = r6.k
            android.widget.FrameLayout$LayoutParams r1 = com.tencent.open.TDialog.c
            r0.setLayoutParams(r1)
            com.tencent.open.c.b r0 = r6.k
            r1 = 4
            r0.setVisibility(r1)
            return
    }

    static void b(android.content.Context r0, java.lang.String r1) {
            d(r0, r1)
            return
    }

    static com.tencent.open.TDialog.OnTimeListener c(com.tencent.open.TDialog r0) {
            com.tencent.open.TDialog$OnTimeListener r0 = r0.h
            return r0
    }

    private static void c(android.content.Context r2, java.lang.String r3) {
            org.json.JSONObject r3 = com.tencent.open.utils.m.d(r3)     // Catch: org.json.JSONException -> L62
            java.lang.String r0 = "type"
            int r0 = r3.getInt(r0)     // Catch: org.json.JSONException -> L62
            java.lang.String r1 = "msg"
            java.lang.String r3 = r3.getString(r1)     // Catch: org.json.JSONException -> L62
            if (r0 != 0) goto L39
            android.widget.Toast r0 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            r1 = 0
            if (r0 != 0) goto L1e
            android.widget.Toast r2 = android.widget.Toast.makeText(r2, r3, r1)     // Catch: org.json.JSONException -> L62
            com.tencent.open.TDialog.d = r2     // Catch: org.json.JSONException -> L62
            goto L33
        L1e:
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            android.widget.Toast r0 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            android.view.View r0 = r0.getView()     // Catch: org.json.JSONException -> L62
            r2.setView(r0)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            r2.setText(r3)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            r2.setDuration(r1)     // Catch: org.json.JSONException -> L62
        L33:
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            r2.show()     // Catch: org.json.JSONException -> L62
            goto L66
        L39:
            r1 = 1
            if (r0 != r1) goto L66
            android.widget.Toast r0 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            if (r0 != 0) goto L47
            android.widget.Toast r2 = android.widget.Toast.makeText(r2, r3, r1)     // Catch: org.json.JSONException -> L62
            com.tencent.open.TDialog.d = r2     // Catch: org.json.JSONException -> L62
            goto L5c
        L47:
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            android.widget.Toast r0 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            android.view.View r0 = r0.getView()     // Catch: org.json.JSONException -> L62
            r2.setView(r0)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            r2.setText(r3)     // Catch: org.json.JSONException -> L62
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            r2.setDuration(r1)     // Catch: org.json.JSONException -> L62
        L5c:
            android.widget.Toast r2 = com.tencent.open.TDialog.d     // Catch: org.json.JSONException -> L62
            r2.show()     // Catch: org.json.JSONException -> L62
            goto L66
        L62:
            r2 = move-exception
            r2.printStackTrace()
        L66:
            return
    }

    static com.tencent.open.c.b d(com.tencent.open.TDialog r0) {
            com.tencent.open.c.b r0 = r0.k
            return r0
    }

    private static void d(android.content.Context r2, java.lang.String r3) {
            if (r2 == 0) goto L8e
            if (r3 != 0) goto L6
            goto L8e
        L6:
            org.json.JSONObject r3 = com.tencent.open.utils.m.d(r3)     // Catch: org.json.JSONException -> L8a
            java.lang.String r0 = "action"
            int r0 = r3.getInt(r0)     // Catch: org.json.JSONException -> L8a
            java.lang.String r1 = "msg"
            java.lang.String r3 = r3.getString(r1)     // Catch: org.json.JSONException -> L8a
            r1 = 1
            if (r0 != r1) goto L5e
            java.lang.ref.WeakReference<android.app.ProgressDialog> r0 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            if (r0 == 0) goto L4b
            java.lang.ref.WeakReference<android.app.ProgressDialog> r0 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            java.lang.Object r0 = r0.get()     // Catch: org.json.JSONException -> L8a
            if (r0 != 0) goto L26
            goto L4b
        L26:
            java.lang.ref.WeakReference<android.app.ProgressDialog> r2 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            java.lang.Object r2 = r2.get()     // Catch: org.json.JSONException -> L8a
            android.app.ProgressDialog r2 = (android.app.ProgressDialog) r2     // Catch: org.json.JSONException -> L8a
            r2.setMessage(r3)     // Catch: org.json.JSONException -> L8a
            java.lang.ref.WeakReference<android.app.ProgressDialog> r2 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            java.lang.Object r2 = r2.get()     // Catch: org.json.JSONException -> L8a
            android.app.ProgressDialog r2 = (android.app.ProgressDialog) r2     // Catch: org.json.JSONException -> L8a
            boolean r2 = r2.isShowing()     // Catch: org.json.JSONException -> L8a
            if (r2 != 0) goto L8e
            java.lang.ref.WeakReference<android.app.ProgressDialog> r2 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            java.lang.Object r2 = r2.get()     // Catch: org.json.JSONException -> L8a
            android.app.ProgressDialog r2 = (android.app.ProgressDialog) r2     // Catch: org.json.JSONException -> L8a
            r2.show()     // Catch: org.json.JSONException -> L8a
            goto L8e
        L4b:
            android.app.ProgressDialog r0 = new android.app.ProgressDialog     // Catch: org.json.JSONException -> L8a
            r0.<init>(r2)     // Catch: org.json.JSONException -> L8a
            r0.setMessage(r3)     // Catch: org.json.JSONException -> L8a
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: org.json.JSONException -> L8a
            r2.<init>(r0)     // Catch: org.json.JSONException -> L8a
            com.tencent.open.TDialog.f = r2     // Catch: org.json.JSONException -> L8a
            r0.show()     // Catch: org.json.JSONException -> L8a
            goto L8e
        L5e:
            if (r0 != 0) goto L8e
            java.lang.ref.WeakReference<android.app.ProgressDialog> r2 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            if (r2 != 0) goto L65
            return
        L65:
            java.lang.ref.WeakReference<android.app.ProgressDialog> r2 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            java.lang.Object r2 = r2.get()     // Catch: org.json.JSONException -> L8a
            if (r2 == 0) goto L8e
            java.lang.ref.WeakReference<android.app.ProgressDialog> r2 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            java.lang.Object r2 = r2.get()     // Catch: org.json.JSONException -> L8a
            android.app.ProgressDialog r2 = (android.app.ProgressDialog) r2     // Catch: org.json.JSONException -> L8a
            boolean r2 = r2.isShowing()     // Catch: org.json.JSONException -> L8a
            if (r2 == 0) goto L8e
            java.lang.ref.WeakReference<android.app.ProgressDialog> r2 = com.tencent.open.TDialog.f     // Catch: org.json.JSONException -> L8a
            java.lang.Object r2 = r2.get()     // Catch: org.json.JSONException -> L8a
            android.app.ProgressDialog r2 = (android.app.ProgressDialog) r2     // Catch: org.json.JSONException -> L8a
            r2.dismiss()     // Catch: org.json.JSONException -> L8a
            r2 = 0
            com.tencent.open.TDialog.f = r2     // Catch: org.json.JSONException -> L8a
            goto L8e
        L8a:
            r2 = move-exception
            r2.printStackTrace()
        L8e:
            return
    }

    @Override
    protected void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.TDialog"
            java.lang.String r1 = "--onConsoleMessage--"
            com.tencent.open.log.SLog.d(r0, r1)
            com.tencent.open.b r0 = r2.a     // Catch: java.lang.Exception -> Le
            com.tencent.open.c.b r1 = r2.k     // Catch: java.lang.Exception -> Le
            r0.a(r1, r3)     // Catch: java.lang.Exception -> Le
        Le:
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.tencent.open.TDialog$OnTimeListener r0 = r1.h
            if (r0 == 0) goto L7
            r0.onCancel()
        L7:
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
            r1.a()
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            com.tencent.open.TDialog$1 r0 = new com.tencent.open.TDialog$1
            r0.<init>(r1)
            r2.post(r0)
            r1.b()
            return
    }
}
