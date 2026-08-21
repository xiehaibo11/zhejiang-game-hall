package com.mbridge.msdk.mbjscommon.confirmation;

public final class e implements java.io.Serializable {
    public static int b = 1;
    public static int c = 0;
    public static int d = 2;
    java.util.HashMap<java.lang.String, java.lang.Integer> a;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView e;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView f;
    private com.mbridge.msdk.mbjscommon.confirmation.b g;
    private com.mbridge.msdk.mbjscommon.confirmation.b h;
    private com.mbridge.msdk.mbjscommon.confirmation.c i;
    private int j;
    private com.mbridge.msdk.widget.dialog.MBAlertDialog k;
    private com.mbridge.msdk.widget.custom.DownloadMessageDialog l;
    private java.util.concurrent.atomic.AtomicBoolean m;
    private java.util.concurrent.atomic.AtomicBoolean n;
    private volatile boolean o;
    private java.util.Timer p;
    private com.mbridge.msdk.mbjscommon.confirmation.e.a q;
    private final android.os.Handler r;







    private static final class a implements android.content.DialogInterface.OnDismissListener {
        private android.content.BroadcastReceiver a;
        private final java.lang.String b;
        private final com.mbridge.msdk.mbjscommon.confirmation.c c;
        private final com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView d;
        private final com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView e;
        private int f;

        public a(android.content.BroadcastReceiver r1, java.lang.String r2, com.mbridge.msdk.mbjscommon.confirmation.c r3, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5, int r6) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                return
        }

        public a(java.lang.String r1, com.mbridge.msdk.mbjscommon.confirmation.c r2, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4, int r5) {
                r0 = this;
                r0.<init>()
                r0.b = r1
                r0.c = r2
                r0.d = r3
                r0.e = r4
                r0.f = r5
                return
        }

        public final void a(int r1) {
                r0 = this;
                r0.f = r1
                return
        }

        @Override
        public final void onDismiss(android.content.DialogInterface r4) {
                r3 = this;
                android.content.BroadcastReceiver r4 = r3.a
                if (r4 == 0) goto L1c
                com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L12
                android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L12
                android.content.BroadcastReceiver r0 = r3.a     // Catch: java.lang.Exception -> L12
                r4.unregisterReceiver(r0)     // Catch: java.lang.Exception -> L12
                goto L1c
            L12:
                r4 = move-exception
                java.lang.String r4 = r4.getMessage()
                java.lang.String r0 = "SecondaryConfirmationManager"
                com.mbridge.msdk.foundation.tools.z.a(r0, r4)
            L1c:
                java.lang.String r4 = r3.b
                com.mbridge.msdk.mbjscommon.confirmation.c r0 = r3.c
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.d
                if (r1 == 0) goto L4f
                boolean r1 = r1.isDestoryed()
                if (r1 != 0) goto L4f
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.d
                java.lang.Object r1 = r1.getObject()
                if (r1 == 0) goto L4f
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.d
                java.lang.Object r1 = r1.getObject()
                com.mbridge.msdk.mbjscommon.confirmation.e r2 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
                com.mbridge.msdk.mbjscommon.confirmation.a r2 = com.mbridge.msdk.mbjscommon.confirmation.e.a(r2, r4)
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L4f
                com.mbridge.msdk.mbjscommon.confirmation.e r1 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r3.d
                com.mbridge.msdk.mbjscommon.confirmation.e.a(r1, r2)
            L4f:
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.e
                if (r1 == 0) goto L76
                java.lang.Object r1 = r1.getObject()
                if (r1 == 0) goto L76
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.e
                java.lang.Object r1 = r1.getObject()
                com.mbridge.msdk.mbjscommon.confirmation.e r2 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
                com.mbridge.msdk.mbjscommon.confirmation.a r4 = com.mbridge.msdk.mbjscommon.confirmation.e.a(r2, r4)
                boolean r4 = r1.equals(r4)
                if (r4 == 0) goto L76
                com.mbridge.msdk.mbjscommon.confirmation.e r4 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.e
                com.mbridge.msdk.mbjscommon.confirmation.e.a(r4, r1)
            L76:
                if (r0 == 0) goto L80
                int r4 = r3.f
                r0.a(r4)
                r0.b()
            L80:
                com.mbridge.msdk.mbjscommon.confirmation.e r4 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
                com.mbridge.msdk.mbjscommon.confirmation.e.i(r4)
                return
        }
    }

    static class b {
        private static final com.mbridge.msdk.mbjscommon.confirmation.e a = null;

        static {
                com.mbridge.msdk.mbjscommon.confirmation.e r0 = new com.mbridge.msdk.mbjscommon.confirmation.e
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.mbjscommon.confirmation.e.b.a = r0
                return
        }

        static com.mbridge.msdk.mbjscommon.confirmation.e a() {
                com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.b.a
                return r0
        }
    }

    static {
            return
    }

    private e() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.a = r0
            r0 = 1
            r2.j = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.m = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            r2.n = r0
            r2.o = r1
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r2.p = r0
            com.mbridge.msdk.mbjscommon.confirmation.e$1 r0 = new com.mbridge.msdk.mbjscommon.confirmation.e$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.r = r0
            return
    }

    e(com.mbridge.msdk.mbjscommon.confirmation.e.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static com.mbridge.msdk.mbjscommon.confirmation.a a(com.mbridge.msdk.mbjscommon.confirmation.e r0, java.lang.Object r1) {
            com.mbridge.msdk.mbjscommon.confirmation.a r0 = r0.a(r1)
            return r0
    }

    private com.mbridge.msdk.mbjscommon.confirmation.a a(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r0 == 0) goto L13
            com.mbridge.msdk.mbjscommon.windvane.a r2 = (com.mbridge.msdk.mbjscommon.windvane.a) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r2.a
            java.lang.Object r2 = r2.getObject()
            boolean r0 = r2 instanceof com.mbridge.msdk.mbjscommon.confirmation.a
            if (r0 == 0) goto L13
            com.mbridge.msdk.mbjscommon.confirmation.a r2 = (com.mbridge.msdk.mbjscommon.confirmation.a) r2
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    static com.mbridge.msdk.mbjscommon.confirmation.b a(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            com.mbridge.msdk.mbjscommon.confirmation.b r0 = r0.h
            return r0
    }

    public static com.mbridge.msdk.mbjscommon.confirmation.e a() {
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.b.a()
            return r0
    }

    static com.mbridge.msdk.widget.dialog.MBAlertDialog a(com.mbridge.msdk.mbjscommon.confirmation.e r0, com.mbridge.msdk.widget.dialog.MBAlertDialog r1) {
            r0.k = r1
            return r1
    }

    private java.lang.String a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L19
            android.net.Uri r3 = android.net.Uri.parse(r3)
            android.net.Uri$Builder r3 = r3.buildUpon()
            java.lang.String r0 = "dialogRenderMode"
            java.lang.String r1 = "default"
            r3.appendQueryParameter(r0, r1)
            java.lang.String r3 = r3.toString()
        L19:
            return r3
    }

    private java.lang.String a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L7
            return r3
        L7:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.d r4 = r0.e(r1, r4)
            if (r4 == 0) goto L1b
            java.lang.String r3 = com.mbridge.msdk.c.d.a
        L1b:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L22
            return r3
        L22:
            java.lang.String r3 = ""
            return r3
    }

    private void a(int r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.confirmation.e$a r0 = r1.q
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r7, android.content.Context r8, java.lang.String r9, java.lang.String r10, com.mbridge.msdk.mbjscommon.confirmation.c r11) {
            r6 = this;
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r6.k
            if (r1 == 0) goto L5b
            java.lang.String r2 = r7.getAppName()
            r1.makeDownloadAlert(r2)
            boolean r1 = r8 instanceof android.app.Activity
            if (r1 == 0) goto L58
            r1 = r8
            android.app.Activity r1 = (android.app.Activity) r1
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 17
            if (r2 < r3) goto L2b
            boolean r2 = r1.isDestroyed()
            if (r2 == 0) goto L2b
            r4 = 4
            r5 = 2
            r0 = r8
            r1 = r7
            r2 = r9
            r3 = r10
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5)
            r6.b()
            return
        L2b:
            boolean r1 = r1.isFinishing()
            if (r1 != 0) goto L4b
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r6.k
            r1.show()
            r1 = 1
            r6.j = r1
            r6.a(r1)
            int r1 = r6.j
            r11.a(r1)
            r4 = 1
            r5 = 2
            r0 = r8
            r1 = r7
            r2 = r9
            r3 = r10
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5)
            goto L5b
        L4b:
            r4 = 4
            r5 = 2
            r0 = r8
            r1 = r7
            r2 = r9
            r3 = r10
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5)
            r6.b()
            return
        L58:
            r6.b()
        L5b:
            return
    }

    static void a(com.mbridge.msdk.mbjscommon.confirmation.e r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, android.content.Context r2, java.lang.String r3, java.lang.String r4, com.mbridge.msdk.mbjscommon.confirmation.c r5) {
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    static void a(com.mbridge.msdk.mbjscommon.confirmation.e r2, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3) {
            com.mbridge.msdk.widget.dialog.MBAlertDialog r2 = r2.k
            if (r2 == 0) goto L7
            r2.clear()
        L7:
            if (r3 == 0) goto L14
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            java.lang.String r0 = "close"
            java.lang.String r1 = ""
            r2.a(r3, r0, r1)
        L14:
            return
    }

    static void a(com.mbridge.msdk.mbjscommon.confirmation.e r0, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1, java.lang.String r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, android.content.Context r4, java.lang.String r5, com.mbridge.msdk.mbjscommon.confirmation.c r6) {
            r0.a(r1, r2, r3, r4, r5, r6)
            return
    }

    static void a(com.mbridge.msdk.mbjscommon.confirmation.e r0, java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, android.content.Context r3, java.lang.String r4, com.mbridge.msdk.mbjscommon.confirmation.c r5) {
            r0.b(r1, r2, r3, r4, r5)
            return
    }

    private void a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4) {
            r3 = this;
            if (r4 == 0) goto Ld
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            java.lang.String r1 = "webviewshow"
            java.lang.String r2 = ""
            r0.a(r4, r1, r2)
        Ld:
            return
    }

    private void a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7, java.lang.String r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, android.content.Context r10, java.lang.String r11, com.mbridge.msdk.mbjscommon.confirmation.c r12) {
            r6 = this;
            if (r7 == 0) goto L70
            boolean r1 = r7.isDestoryed()
            if (r1 != 0) goto L70
            r6.a(r7)
            android.view.ViewParent r1 = r7.getParent()
            if (r1 == 0) goto L1a
            android.view.ViewParent r1 = r7.getParent()
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r1.removeView(r7)
        L1a:
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r6.k
            r1.setContentView(r7)
            boolean r0 = r10 instanceof android.app.Activity
            if (r0 == 0) goto L6c
            r0 = r10
            android.app.Activity r0 = (android.app.Activity) r0
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r1 < r2) goto L3f
            boolean r1 = r0.isDestroyed()
            if (r1 == 0) goto L3f
            r4 = 4
            r5 = 2
            r0 = r10
            r1 = r9
            r2 = r8
            r3 = r11
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5)
            r6.b()
            return
        L3f:
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto L5f
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r6.k
            r0.show()
            r0 = 2
            r6.j = r0
            r6.a(r0)
            int r0 = r6.j
            r12.a(r0)
            r4 = 2
            r5 = 2
            r0 = r10
            r1 = r9
            r2 = r8
            r3 = r11
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5)
            goto L79
        L5f:
            r4 = 4
            r5 = 2
            r0 = r10
            r1 = r9
            r2 = r8
            r3 = r11
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5)
            r6.b()
            return
        L6c:
            r6.b()
            goto L79
        L70:
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.b(r1, r2, r3, r4, r5)
        L79:
            return
    }

    private void a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8, java.lang.String r9, com.mbridge.msdk.foundation.entity.CampaignEx r10, android.content.Context r11, java.lang.String r12, com.mbridge.msdk.mbjscommon.confirmation.c r13, com.mbridge.msdk.mbjscommon.confirmation.b r14) {
            r7 = this;
            com.mbridge.msdk.mbjscommon.base.b r11 = new com.mbridge.msdk.mbjscommon.base.b
            r11.<init>()
            com.mbridge.msdk.mbjscommon.confirmation.e$4 r13 = new com.mbridge.msdk.mbjscommon.confirmation.e$4
            r13.<init>(r7, r14)
            r11.a(r13)
            com.mbridge.msdk.mbjscommon.confirmation.a r13 = new com.mbridge.msdk.mbjscommon.confirmation.a
            r13.<init>(r10, r9, r12)
            int r10 = com.mbridge.msdk.mbjscommon.confirmation.e.c
            r13.a(r10)
            r8.setObject(r13)
            r8.setWebViewClient(r11)
            r10 = 3
            boolean r11 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Ld1
            if (r11 != 0) goto L33
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r11 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r11 = r11.getH5ResAddress(r9)     // Catch: java.lang.Exception -> Ld1
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> Ld1
            if (r12 != 0) goto L33
            goto L34
        L33:
            r11 = r9
        L34:
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r12 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r12 = r12.getHtmlContentFromUrl(r9)     // Catch: java.lang.Exception -> Ld1
            java.lang.String r13 = ""
            boolean r0 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> Ld1
            if (r0 != 0) goto L46
            r3 = r12
            goto L47
        L46:
            r3 = r13
        L47:
            boolean r12 = r8.isDestoryed()     // Catch: java.lang.Exception -> Ld1
            if (r12 != 0) goto Lc9
            boolean r12 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Ld1
            java.lang.String r13 = "SecondaryConfirmationManager"
            if (r12 != 0) goto L9f
            java.lang.String r2 = r7.a(r9)     // Catch: java.lang.Exception -> Ld1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld1
            r9.<init>()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r12 = "load====== html url:"
            r9.append(r12)     // Catch: java.lang.Exception -> Ld1
            r9.append(r11)     // Catch: java.lang.Exception -> Ld1
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Ld1
            com.mbridge.msdk.foundation.tools.z.a(r13, r9)     // Catch: java.lang.Exception -> Ld1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld1
            r9.<init>()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r11 = "load===== html..."
            r9.append(r11)     // Catch: java.lang.Exception -> Ld1
            r9.append(r3)     // Catch: java.lang.Exception -> Ld1
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Ld1
            com.mbridge.msdk.foundation.tools.z.a(r13, r9)     // Catch: java.lang.Exception -> Ld1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld1
            r9.<init>()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r11 = "load=====lastUrl html..."
            r9.append(r11)     // Catch: java.lang.Exception -> Ld1
            r9.append(r2)     // Catch: java.lang.Exception -> Ld1
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Ld1
            com.mbridge.msdk.foundation.tools.z.a(r13, r9)     // Catch: java.lang.Exception -> Ld1
            java.lang.String r4 = "text/html"
            java.lang.String r5 = "UTF-8"
            r6 = 0
            r1 = r8
            r1.loadDataWithBaseURL(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> Ld1
            goto Lde
        L9f:
            boolean r9 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> Ld1
            if (r9 == 0) goto Lad
            if (r14 == 0) goto Lde
            java.lang.String r8 = "localUrl is null"
            r14.a(r10, r8)     // Catch: java.lang.Exception -> Ld1
            goto Lde
        Lad:
            java.lang.String r9 = r7.a(r11)     // Catch: java.lang.Exception -> Ld1
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld1
            r11.<init>()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r12 = "load====== url:"
            r11.append(r12)     // Catch: java.lang.Exception -> Ld1
            r11.append(r9)     // Catch: java.lang.Exception -> Ld1
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> Ld1
            com.mbridge.msdk.foundation.tools.z.a(r13, r11)     // Catch: java.lang.Exception -> Ld1
            r8.loadUrl(r9)     // Catch: java.lang.Exception -> Ld1
            goto Lde
        Lc9:
            if (r14 == 0) goto Lde
            java.lang.String r8 = "webview has destoryed"
            r14.a(r10, r8)     // Catch: java.lang.Exception -> Ld1
            goto Lde
        Ld1:
            r8 = move-exception
            r8.printStackTrace()
            if (r14 == 0) goto Lde
            java.lang.String r8 = r8.getMessage()
            r14.a(r10, r8)
        Lde:
            return
    }

    static boolean a(com.mbridge.msdk.mbjscommon.confirmation.e r0, boolean r1) {
            r0.o = r1
            return r1
    }

    static com.mbridge.msdk.mbjscommon.confirmation.b b(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            com.mbridge.msdk.mbjscommon.confirmation.b r0 = r0.g
            return r0
    }

    private void b(java.lang.String r16, com.mbridge.msdk.foundation.entity.CampaignEx r17, android.content.Context r18, java.lang.String r19, com.mbridge.msdk.mbjscommon.confirmation.c r20) {
            r15 = this;
            r9 = r15
            r10 = r17
            r11 = r18
            r12 = 1
            com.mbridge.msdk.mbjscommon.confirmation.d[] r8 = new com.mbridge.msdk.mbjscommon.confirmation.d[r12]
            r13 = 0
            r0 = 0
            r8[r0] = r13
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = new com.mbridge.msdk.widget.custom.CustomViewMessageWrap
            java.lang.String r1 = "mbridge_download_dialog_view"
            java.lang.String r1 = com.mbridge.msdk.widget.custom.CustomViewMessageWrap.getViewFilePath(r1)
            r0.<init>(r10, r1)
            com.mbridge.msdk.mbjscommon.confirmation.e$6 r14 = new com.mbridge.msdk.mbjscommon.confirmation.e$6
            r1 = r14
            r2 = r15
            r3 = r17
            r4 = r16
            r5 = r19
            r6 = r18
            r7 = r20
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r1 = new com.mbridge.msdk.widget.custom.DownloadMessageDialog
            r1.<init>(r11, r12, r0, r14)
            r9.l = r1
            if (r11 == 0) goto L59
            if (r10 == 0) goto L59
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r17)
            if (r0 == 0) goto L59
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L4f
            r0.<init>()     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = "mb_dp_close_broadcast_receiver"
            r0.addAction(r1)     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.mbjscommon.confirmation.CloseDialogBroadcastReceiver r1 = new com.mbridge.msdk.mbjscommon.confirmation.CloseDialogBroadcastReceiver     // Catch: java.lang.Exception -> L4f
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r2 = r9.l     // Catch: java.lang.Exception -> L4f
            r1.<init>(r2)     // Catch: java.lang.Exception -> L4f
            r11.registerReceiver(r1, r0)     // Catch: java.lang.Exception -> L4d
        L4d:
            r3 = r1
            goto L5a
        L4f:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "SecondaryConfirmationManager"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L59:
            r3 = r13
        L5a:
            r9.j = r12
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r9.l
            com.mbridge.msdk.mbjscommon.confirmation.e$a r1 = new com.mbridge.msdk.mbjscommon.confirmation.e$a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r12 = r16
            r2.append(r12)
            com.mbridge.msdk.out.ApkDisplayInfo r4 = r17.getApkDisplayInfo()
            java.lang.String r4 = r4.toString()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r9.e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r9.f
            int r8 = r9.j
            r2 = r1
            r5 = r20
            r2.<init>(r3, r4, r5, r6, r7, r8)
            r0.setOnDismissListener(r1)
            boolean r0 = r11 instanceof android.app.Activity
            if (r0 == 0) goto Lef
            r0 = r11
            android.app.Activity r0 = (android.app.Activity) r0
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r1 < r2) goto Lb2
            boolean r1 = r0.isDestroyed()
            if (r1 == 0) goto Lb2
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r0.j()
            r5 = 4
            r6 = 2
            r2 = r17
            r3 = r16
            r4 = r19
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r4, r5, r6)
            r15.b()
            return
        Lb2:
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto Ld8
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r9.l
            r0.show()
            int r0 = r9.j
            r1 = r20
            r1.a(r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r0.j()
            r5 = 3
            r6 = 2
            r2 = r17
            r3 = r16
            r4 = r19
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r4, r5, r6)
            goto Lf2
        Ld8:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r0.j()
            r5 = 4
            r6 = 2
            r2 = r17
            r3 = r16
            r4 = r19
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r4, r5, r6)
            r15.b()
            return
        Lef:
            r15.b()
        Lf2:
            return
    }

    static android.os.Handler c(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            android.os.Handler r0 = r0.r
            return r0
    }

    static com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView d(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.f
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean e(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.m
            return r0
    }

    static com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView f(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.e
            return r0
    }

    static com.mbridge.msdk.widget.dialog.MBAlertDialog g(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r0.k
            return r0
    }

    static int h(com.mbridge.msdk.mbjscommon.confirmation.e r0) {
            int r0 = r0.j
            return r0
    }

    static void i(com.mbridge.msdk.mbjscommon.confirmation.e r2) {
            com.mbridge.msdk.mbjscommon.confirmation.c r0 = r2.i
            r1 = 0
            if (r0 == 0) goto L7
            r2.i = r1
        L7:
            com.mbridge.msdk.mbjscommon.confirmation.b r0 = r2.g
            if (r0 == 0) goto Ld
            r2.g = r1
        Ld:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.e
            if (r0 == 0) goto L14
            r0.release()
        L14:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.f
            if (r0 == 0) goto L1b
            r0.release()
        L1b:
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r2.k
            if (r0 == 0) goto L2a
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L2a
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r2.k
            r0.dismiss()
        L2a:
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r2.l
            if (r0 == 0) goto L39
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L39
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r2.l
            r0.dismiss()
        L39:
            r2.b()
            return
    }

    public final void a(java.lang.Object r6, int r7) {
            r5 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.e
            java.lang.String r1 = "webview render error and undefault"
            r2 = 0
            r3 = 1
            if (r0 == 0) goto L35
            java.lang.Object r0 = r0.getObject()
            if (r0 == 0) goto L35
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.e
            java.lang.Object r0 = r0.getObject()
            com.mbridge.msdk.mbjscommon.confirmation.a r4 = r5.a(r6)
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L35
            java.util.concurrent.atomic.AtomicBoolean r0 = r5.m
            boolean r0 = r0.compareAndSet(r3, r3)
            if (r0 != 0) goto L35
            com.mbridge.msdk.mbjscommon.confirmation.b r0 = r5.g
            if (r0 == 0) goto L35
            int r4 = com.mbridge.msdk.mbjscommon.confirmation.e.b
            if (r7 != r4) goto L32
            r0.a()
            goto L35
        L32:
            r0.a(r2, r1)
        L35:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.f
            if (r0 == 0) goto L66
            java.lang.Object r0 = r0.getObject()
            if (r0 == 0) goto L66
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.f
            java.lang.Object r0 = r0.getObject()
            com.mbridge.msdk.mbjscommon.confirmation.a r6 = r5.a(r6)
            boolean r6 = r0.equals(r6)
            if (r6 == 0) goto L66
            java.util.concurrent.atomic.AtomicBoolean r6 = r5.n
            boolean r6 = r6.compareAndSet(r3, r3)
            if (r6 != 0) goto L66
            com.mbridge.msdk.mbjscommon.confirmation.b r6 = r5.h
            if (r6 == 0) goto L66
            int r0 = com.mbridge.msdk.mbjscommon.confirmation.e.b
            if (r7 != r0) goto L63
            r6.a()
            goto L66
        L63:
            r6.a(r2, r1)
        L66:
            return
    }

    public final void a(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = "SecondaryConfirmationManager"
            java.lang.String r2 = "closeDialog"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r0.k
            if (r1 == 0) goto L1b
            boolean r1 = r1.isShowing()
            if (r1 == 0) goto L1b
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r0.k
            r1.dismiss()
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r0.k
            r1.clear()
        L1b:
            return
    }

    public final void a(java.lang.String r12, com.mbridge.msdk.foundation.entity.CampaignEx r13, android.content.Context r14, java.lang.String r15, com.mbridge.msdk.mbjscommon.confirmation.c r16) {
            r11 = this;
            r8 = r11
            r2 = r12
            r5 = r15
            java.lang.String r0 = r11.a(r12, r15)
            com.mbridge.msdk.mbjscommon.confirmation.e$3 r1 = new com.mbridge.msdk.mbjscommon.confirmation.e$3
            r3 = r13
            r1.<init>(r11, r13, r0, r15)
            r8.h = r1
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            r1 = 2
            if (r0 == 0) goto L1e
            com.mbridge.msdk.mbjscommon.confirmation.b r0 = r8.h
            java.lang.String r2 = "url is null"
            r0.a(r1, r2)
            return
        L1e:
            java.lang.String r0 = "ldtm=1"
            boolean r0 = r12.contains(r0)
            if (r0 != 0) goto L2f
            com.mbridge.msdk.mbjscommon.confirmation.b r0 = r8.h
            r1 = 5
            java.lang.String r2 = "unwanted prerender"
            r0.a(r1, r2)
            return
        L2f:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r8.f
            r4 = 0
            if (r0 == 0) goto L3d
            boolean r0 = r0.isDestoryed()
            if (r0 == 0) goto L3b
            goto L3d
        L3b:
            r6 = r14
            goto L59
        L3d:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView
            r6 = r14
            r0.<init>(r14)
            r8.f = r0
            r0.setBackgroundColor(r4)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r8.f
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 == 0) goto L59
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r8.f
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r0.setAlpha(r4)
        L59:
            java.util.concurrent.atomic.AtomicBoolean r0 = r8.n
            r7 = 1
            r0.compareAndSet(r7, r4)
            android.os.Handler r0 = r8.r
            r9 = 500(0x1f4, double:2.47E-321)
            r0.sendEmptyMessageDelayed(r1, r9)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r8.f
            com.mbridge.msdk.mbjscommon.confirmation.b r7 = r8.h
            r0 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r0.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public final synchronized void a(java.lang.String r20, com.mbridge.msdk.foundation.entity.CampaignEx r21, android.content.Context r22, java.lang.String r23, com.mbridge.msdk.widget.dialog.a r24) {
            r19 = this;
            r9 = r19
            r0 = r21
            r1 = r22
            r10 = r23
            monitor-enter(r19)
            boolean r2 = r9.o     // Catch: java.lang.Throwable -> L21c
            if (r2 == 0) goto Lf
            monitor-exit(r19)
            return
        Lf:
            if (r0 == 0) goto L2a
            int r2 = r21.getClickTimeOutInterval()     // Catch: java.lang.Throwable -> L21c
            int r2 = r2 * 1000
            if (r2 != 0) goto L1a
            goto L2a
        L1a:
            java.util.Timer r3 = new java.util.Timer     // Catch: java.lang.Throwable -> L21c
            r3.<init>()     // Catch: java.lang.Throwable -> L21c
            r9.p = r3     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.mbjscommon.confirmation.e$2 r4 = new com.mbridge.msdk.mbjscommon.confirmation.e$2     // Catch: java.lang.Throwable -> L21c
            r4.<init>(r9)     // Catch: java.lang.Throwable -> L21c
            long r5 = (long) r2     // Catch: java.lang.Throwable -> L21c
            r3.schedule(r4, r5)     // Catch: java.lang.Throwable -> L21c
        L2a:
            r8 = 1
            r9.o = r8     // Catch: java.lang.Throwable -> L21c
            r2 = r20
            java.lang.String r11 = r9.a(r2, r10)     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L21c
            android.content.Context r2 = r2.c()     // Catch: java.lang.Throwable -> L21c
            r3 = 0
            boolean r4 = r2 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L21c
            if (r4 == 0) goto L43
            r3 = r2
            android.app.Activity r3 = (android.app.Activity) r3     // Catch: java.lang.Throwable -> L21c
        L43:
            boolean r2 = r1 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L21c
            r4 = 17
            if (r2 == 0) goto L59
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L21c
            if (r2 < r4) goto L56
            r2 = r1
            android.app.Activity r2 = (android.app.Activity) r2     // Catch: java.lang.Throwable -> L21c
            boolean r2 = r2.isDestroyed()     // Catch: java.lang.Throwable -> L21c
            if (r2 != 0) goto L59
        L56:
            r3 = r1
            android.app.Activity r3 = (android.app.Activity) r3     // Catch: java.lang.Throwable -> L21c
        L59:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L21c
            java.lang.ref.WeakReference r1 = r1.a()     // Catch: java.lang.Throwable -> L21c
            if (r1 == 0) goto L7d
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L21c
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.Throwable -> L21c
            if (r1 == 0) goto L7d
            boolean r2 = r1.isFinishing()     // Catch: java.lang.Throwable -> L21c
            if (r2 != 0) goto L7d
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L21c
            if (r2 < r4) goto L7b
            boolean r2 = r1.isDestroyed()     // Catch: java.lang.Throwable -> L21c
            if (r2 != 0) goto L7d
        L7b:
            r12 = r1
            goto L7e
        L7d:
            r12 = r3
        L7e:
            if (r12 == 0) goto L217
            boolean r1 = r12.isFinishing()     // Catch: java.lang.Throwable -> L21c
            if (r1 != 0) goto L217
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L21c
            if (r1 < r4) goto L92
            boolean r1 = r12.isDestroyed()     // Catch: java.lang.Throwable -> L21c
            if (r1 == 0) goto L92
            goto L217
        L92:
            com.mbridge.msdk.mbjscommon.confirmation.c r7 = new com.mbridge.msdk.mbjscommon.confirmation.c     // Catch: java.lang.Throwable -> L21c
            r1 = r7
            r2 = r24
            r3 = r12
            r4 = r21
            r5 = r11
            r6 = r23
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L21c
            r9.i = r7     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = new com.mbridge.msdk.widget.dialog.MBAlertDialog     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.mbjscommon.confirmation.c r2 = r9.i     // Catch: java.lang.Throwable -> L21c
            r1.<init>(r12, r2)     // Catch: java.lang.Throwable -> L21c
            r9.k = r1     // Catch: java.lang.Throwable -> L21c
            r1.setCancelable(r8)     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.out.ApkDisplayInfo r1 = r21.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L21c
            if (r1 != 0) goto Lc3
            com.mbridge.msdk.mbjscommon.confirmation.c r6 = r9.i     // Catch: java.lang.Throwable -> L21c
            r1 = r19
            r2 = r21
            r3 = r12
            r4 = r11
            r5 = r23
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L21c
            monitor-exit(r19)
            return
        Lc3:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L21c
            r1.<init>()     // Catch: java.lang.Throwable -> L21c
            r1.append(r11)     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.out.ApkDisplayInfo r2 = r21.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L21c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L21c
            r1.append(r2)     // Catch: java.lang.Throwable -> L21c
            java.lang.String r14 = r1.toString()     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.mbjscommon.confirmation.e$a r1 = new com.mbridge.msdk.mbjscommon.confirmation.e$a     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.mbjscommon.confirmation.c r15 = r9.i     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.e     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r9.f     // Catch: java.lang.Throwable -> L21c
            int r4 = r9.j     // Catch: java.lang.Throwable -> L21c
            r13 = r1
            r16 = r2
            r17 = r3
            r18 = r4
            r13.<init>(r14, r15, r16, r17, r18)     // Catch: java.lang.Throwable -> L21c
            r9.q = r1     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.widget.dialog.MBAlertDialog r2 = r9.k     // Catch: java.lang.Throwable -> L21c
            r2.setOnDismissListener(r1)     // Catch: java.lang.Throwable -> L21c
            com.mbridge.msdk.mbjscommon.confirmation.c r13 = r9.i     // Catch: java.lang.Throwable -> L208
            if (r0 == 0) goto L202
            com.mbridge.msdk.out.ApkDisplayInfo r1 = r21.getApkDisplayInfo()     // Catch: java.lang.Throwable -> L208
            if (r1 != 0) goto L10d
            r1 = r19
            r2 = r21
            r3 = r12
            r4 = r11
            r5 = r23
            r6 = r13
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L208
            goto L215
        L10d:
            boolean r1 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L208
            if (r1 == 0) goto L121
            r1 = r19
            r2 = r11
            r3 = r21
            r4 = r12
            r5 = r23
            r6 = r13
            r1.b(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L208
            goto L215
        L121:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.e     // Catch: java.lang.Throwable -> L208
            r14 = 0
            if (r1 == 0) goto L14e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.e     // Catch: java.lang.Throwable -> L208
            boolean r1 = r1.isDestoryed()     // Catch: java.lang.Throwable -> L208
            if (r1 != 0) goto L14e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.e     // Catch: java.lang.Throwable -> L208
            java.lang.Object r1 = r1.getObject()     // Catch: java.lang.Throwable -> L208
            boolean r2 = r1 instanceof com.mbridge.msdk.mbjscommon.confirmation.a     // Catch: java.lang.Throwable -> L208
            if (r2 == 0) goto L14e
            com.mbridge.msdk.mbjscommon.confirmation.a r1 = (com.mbridge.msdk.mbjscommon.confirmation.a) r1     // Catch: java.lang.Throwable -> L208
            java.lang.String r2 = r1.c()     // Catch: java.lang.Throwable -> L208
            int r1 = r1.a()     // Catch: java.lang.Throwable -> L208
            int r3 = com.mbridge.msdk.mbjscommon.confirmation.e.b     // Catch: java.lang.Throwable -> L208
            if (r1 != r3) goto L14e
            boolean r1 = r11.equals(r2)     // Catch: java.lang.Throwable -> L208
            if (r1 == 0) goto L14e
            r1 = r8
            goto L14f
        L14e:
            r1 = r14
        L14f:
            if (r1 != 0) goto L181
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.f     // Catch: java.lang.Throwable -> L208
            if (r2 == 0) goto L181
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.f     // Catch: java.lang.Throwable -> L208
            boolean r2 = r2.isDestoryed()     // Catch: java.lang.Throwable -> L208
            if (r2 != 0) goto L181
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.f     // Catch: java.lang.Throwable -> L208
            java.lang.Object r2 = r2.getObject()     // Catch: java.lang.Throwable -> L208
            boolean r3 = r2 instanceof com.mbridge.msdk.mbjscommon.confirmation.a     // Catch: java.lang.Throwable -> L208
            if (r3 == 0) goto L181
            com.mbridge.msdk.mbjscommon.confirmation.a r2 = (com.mbridge.msdk.mbjscommon.confirmation.a) r2     // Catch: java.lang.Throwable -> L208
            java.lang.String r3 = r2.c()     // Catch: java.lang.Throwable -> L208
            int r2 = r2.a()     // Catch: java.lang.Throwable -> L208
            int r4 = com.mbridge.msdk.mbjscommon.confirmation.e.b     // Catch: java.lang.Throwable -> L208
            if (r2 != r4) goto L181
            boolean r2 = r11.equals(r3)     // Catch: java.lang.Throwable -> L208
            if (r2 == 0) goto L181
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.f     // Catch: java.lang.Throwable -> L208
            r9.e = r1     // Catch: java.lang.Throwable -> L208
            r15 = r8
            goto L182
        L181:
            r15 = r1
        L182:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.e     // Catch: java.lang.Throwable -> L208
            if (r1 == 0) goto L18e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.e     // Catch: java.lang.Throwable -> L208
            boolean r1 = r1.isDestoryed()     // Catch: java.lang.Throwable -> L208
            if (r1 == 0) goto L1a9
        L18e:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L208
            r1.<init>(r12)     // Catch: java.lang.Throwable -> L208
            r9.e = r1     // Catch: java.lang.Throwable -> L208
            r1.setBackgroundColor(r14)     // Catch: java.lang.Throwable -> L208
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.e     // Catch: java.lang.Throwable -> L208
            android.graphics.drawable.Drawable r1 = r1.getBackground()     // Catch: java.lang.Throwable -> L208
            if (r1 == 0) goto L1a9
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.e     // Catch: java.lang.Throwable -> L208
            android.graphics.drawable.Drawable r1 = r1.getBackground()     // Catch: java.lang.Throwable -> L208
            r1.setAlpha(r14)     // Catch: java.lang.Throwable -> L208
        L1a9:
            com.mbridge.msdk.mbjscommon.confirmation.e$5 r7 = new com.mbridge.msdk.mbjscommon.confirmation.e$5     // Catch: java.lang.Throwable -> L208
            r1 = r7
            r2 = r19
            r3 = r11
            r4 = r21
            r5 = r12
            r6 = r23
            r14 = r7
            r7 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L208
            r9.g = r14     // Catch: java.lang.Throwable -> L208
            android.os.Handler r1 = r9.r     // Catch: java.lang.Throwable -> L208
            r2 = 500(0x1f4, double:2.47E-321)
            r1.sendEmptyMessageDelayed(r8, r2)     // Catch: java.lang.Throwable -> L208
            if (r15 == 0) goto L1eb
            com.mbridge.msdk.mbjscommon.confirmation.a r1 = new com.mbridge.msdk.mbjscommon.confirmation.a     // Catch: java.lang.Throwable -> L208
            r1.<init>(r0, r11, r10)     // Catch: java.lang.Throwable -> L208
            int r2 = com.mbridge.msdk.mbjscommon.confirmation.e.c     // Catch: java.lang.Throwable -> L208
            r1.a(r2)     // Catch: java.lang.Throwable -> L208
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.e     // Catch: java.lang.Throwable -> L208
            r2.setObject(r1)     // Catch: java.lang.Throwable -> L208
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L208
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.e     // Catch: java.lang.Throwable -> L208
            r1.a(r2)     // Catch: java.lang.Throwable -> L208
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.e     // Catch: java.lang.Throwable -> L208
            r1 = r19
            r3 = r11
            r4 = r21
            r5 = r12
            r6 = r23
            r7 = r13
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L208
            goto L215
        L1eb:
            java.util.concurrent.atomic.AtomicBoolean r1 = r9.m     // Catch: java.lang.Throwable -> L208
            r2 = 0
            r1.compareAndSet(r8, r2)     // Catch: java.lang.Throwable -> L208
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.e     // Catch: java.lang.Throwable -> L208
            com.mbridge.msdk.mbjscommon.confirmation.b r8 = r9.g     // Catch: java.lang.Throwable -> L208
            r1 = r19
            r3 = r11
            r4 = r21
            r5 = r12
            r6 = r23
            r7 = r13
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L208
            goto L215
        L202:
            if (r13 == 0) goto L215
            r13.a()     // Catch: java.lang.Throwable -> L208
            goto L215
        L208:
            com.mbridge.msdk.mbjscommon.confirmation.c r6 = r9.i     // Catch: java.lang.Throwable -> L21c
            r1 = r19
            r2 = r21
            r3 = r12
            r4 = r11
            r5 = r23
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L21c
        L215:
            monitor-exit(r19)
            return
        L217:
            r19.b()     // Catch: java.lang.Throwable -> L21c
            monitor-exit(r19)
            return
        L21c:
            r0 = move-exception
            monitor-exit(r19)
            throw r0
    }

    public final void b() {
            r1 = this;
            java.util.Timer r0 = r1.p
            r0.cancel()
            r0 = 0
            r1.o = r0
            return
    }

    public final void b(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r0.k
            if (r1 == 0) goto L1b
            boolean r1 = r1.isShowing()
            if (r1 == 0) goto L1b
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r0.k
            com.mbridge.msdk.widget.dialog.a r1 = r1.getListener()
            if (r1 == 0) goto L1b
            com.mbridge.msdk.widget.dialog.MBAlertDialog r1 = r0.k
            com.mbridge.msdk.widget.dialog.a r1 = r1.getListener()
            r1.c()
        L1b:
            return
    }

    public final void c() {
            r2 = this;
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r2.l     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L9
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r0 = r2.l     // Catch: java.lang.Throwable -> L13
            r0.dismiss()     // Catch: java.lang.Throwable -> L13
        L9:
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r2.k     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L1d
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r2.k     // Catch: java.lang.Throwable -> L13
            r0.dismiss()     // Catch: java.lang.Throwable -> L13
            goto L1d
        L13:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "SecondaryConfirmationManager"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1d:
            return
    }

    public final com.mbridge.msdk.widget.dialog.MBAlertDialog d() {
            r1 = this;
            com.mbridge.msdk.widget.dialog.MBAlertDialog r0 = r1.k
            return r0
    }
}
