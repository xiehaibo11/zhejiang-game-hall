package com.sigmob.sdk.base.views;

public class l extends com.sigmob.sdk.base.views.e {
    private static float b = 10.0f;
    private static final float c = 1.0f;
    private final com.sigmob.sdk.base.views.b a;
    private com.sigmob.sdk.base.views.l.a d;

    public interface a {
        void a(android.view.MotionEvent r1, android.view.MotionEvent r2);
    }

    class b implements android.view.View.OnTouchListener {
        android.view.MotionEvent a;
        final com.sigmob.sdk.base.views.l b;
        private boolean c;

        b(com.sigmob.sdk.base.views.l r1) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onTouch(android.view.View r3, android.view.MotionEvent r4) {
                r2 = this;
                int r3 = r4.getAction()
                r0 = 1
                r1 = 0
                if (r3 == 0) goto L26
                if (r3 == r0) goto Lb
                goto L2e
            Lb:
                boolean r3 = r2.c
                if (r3 != 0) goto L10
                return r1
            L10:
                r2.c = r1
                com.sigmob.sdk.base.views.l r3 = r2.b
                com.sigmob.sdk.base.views.l$a r3 = com.sigmob.sdk.base.views.l.a(r3)
                if (r3 == 0) goto L2e
                com.sigmob.sdk.base.views.l r3 = r2.b
                com.sigmob.sdk.base.views.l$a r3 = com.sigmob.sdk.base.views.l.a(r3)
                android.view.MotionEvent r0 = r2.a
                r3.a(r0, r4)
                goto L2e
            L26:
                r2.c = r0
                android.view.MotionEvent r3 = android.view.MotionEvent.obtain(r4)
                r2.a = r3
            L2e:
                return r1
        }
    }

    static {
            return
    }

    private l(android.content.Context r5, java.lang.String r6, boolean r7, boolean r8) {
            r4 = this;
            r4.<init>(r5)
            r4.h()
            r5 = 2
            r8 = 1
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r0 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> L29
            android.webkit.WebSettings r1 = r4.getSettings()     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="
            byte[] r3 = android.util.Base64.decode(r3, r5)     // Catch: java.lang.Exception -> L29
            r2.<init>(r3)     // Catch: java.lang.Exception -> L29
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L29
            java.lang.Class r1 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L29
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Exception -> L29
            r0.addParam(r1, r2)     // Catch: java.lang.Exception -> L29
            r0.execute()     // Catch: java.lang.Exception -> L29
            goto L2d
        L29:
            r0 = move-exception
            r0.printStackTrace()
        L2d:
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r0 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> L4e
            android.webkit.WebSettings r1 = r4.getSettings()     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = "c2V0QWxsb3dGaWxlQWNjZXNz"
            byte[] r5 = android.util.Base64.decode(r3, r5)     // Catch: java.lang.Exception -> L4e
            r2.<init>(r5)     // Catch: java.lang.Exception -> L4e
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L4e
            java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L4e
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Exception -> L4e
            r0.addParam(r5, r1)     // Catch: java.lang.Exception -> L4e
            r0.execute()     // Catch: java.lang.Exception -> L4e
            goto L52
        L4e:
            r5 = move-exception
            r5.printStackTrace()
        L52:
            r4.a(r8)
            r5 = 0
            r4.setBackgroundColor(r5)
            if (r7 == 0) goto L7f
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r7 = -1
            r0 = -2
            r5.<init>(r7, r0)
            com.sigmob.sdk.base.views.b r7 = new com.sigmob.sdk.base.views.b
            android.content.Context r0 = r4.getContext()
            r7.<init>(r0, r8)
            r4.a = r7
            r7.a(r6)
            com.sigmob.sdk.base.views.b r6 = r4.a
            java.lang.String r7 = com.sigmob.sdk.base.d.g()
            r6.b(r7)
            com.sigmob.sdk.base.views.b r6 = r4.a
            r4.addView(r6, r5)
            goto L82
        L7f:
            r5 = 0
            r4.a = r5
        L82:
            com.sigmob.sdk.base.views.l$b r5 = new com.sigmob.sdk.base.views.l$b
            r5.<init>(r4)
            r4.setOnTouchListener(r5)
            return
    }

    static com.sigmob.sdk.base.views.l.a a(com.sigmob.sdk.base.views.l r0) {
            com.sigmob.sdk.base.views.l$a r0 = r0.d
            return r0
    }

    public static com.sigmob.sdk.base.views.l a(android.content.Context r1, java.lang.String r2, boolean r3, boolean r4) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            com.sigmob.sdk.base.views.l r0 = new com.sigmob.sdk.base.views.l
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    private void h() {
            r2 = this;
            r0 = 0
            r2.setHorizontalScrollBarEnabled(r0)
            r2.setHorizontalScrollbarOverlay(r0)
            r2.setVerticalScrollBarEnabled(r0)
            r2.setVerticalScrollbarOverlay(r0)
            android.webkit.WebSettings r1 = r2.getSettings()
            r1.setSupportZoom(r0)
            r2.setScrollBarStyle(r0)
            return
    }

    void a(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = com.czhj.sdk.common.utils.Md5Util.md5(r9)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ".html"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.io.File r0 = com.sigmob.sdk.base.utils.b.a(r9, r0)
            if (r0 == 0) goto L3e
            java.lang.String r1 = r0.getAbsolutePath()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3e
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "file://"
            r9.append(r1)
            java.lang.String r0 = r0.getAbsolutePath()
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            r8.loadUrl(r9)
            goto L5d
        L3e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.czhj.sdk.common.network.Networking.getBaseUrlScheme()
            r0.append(r1)
            java.lang.String r1 = "://localhost/"
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            r7 = 0
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "utf-8"
            r2 = r8
            r4 = r9
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
        L5d:
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            java.lang.String r0 = "CreativeWebView destroy() callSigmobLog.d( \"CreativeWebView destroy() called\");ed"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            super.destroy()
            return
    }

    public void setLogoClickListener(android.view.View.OnClickListener r2) {
            r1 = this;
            com.sigmob.sdk.base.views.b r0 = r1.a
            if (r0 == 0) goto L7
            r0.setOnClickListener(r2)
        L7:
            return
    }

    public void setWebViewClickListener(com.sigmob.sdk.base.views.l.a r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
