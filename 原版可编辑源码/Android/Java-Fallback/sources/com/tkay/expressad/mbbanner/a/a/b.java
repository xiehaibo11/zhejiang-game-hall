package com.tkay.expressad.mbbanner.a.a;

public final class b extends android.app.Dialog {
    private final java.lang.String a;
    private java.lang.String b;
    private boolean c;
    private android.widget.FrameLayout d;
    private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView e;
    private android.widget.TextView f;
    private java.lang.String g;
    private java.util.List<com.tkay.expressad.foundation.d.c> h;
    private com.tkay.expressad.mbbanner.a.c.a i;
    private com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge j;

    final class 1 implements android.view.View.OnClickListener {
        final com.tkay.expressad.mbbanner.a.a.b a;

        1(com.tkay.expressad.mbbanner.a.a.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.expressad.mbbanner.a.a.b r1 = r0.a
                r1.dismiss()
                return
        }
    }

    final class 2 extends com.tkay.expressad.atsignalcommon.a.b {
        final com.tkay.expressad.mbbanner.a.a.b a;


        2(com.tkay.expressad.mbbanner.a.a.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r3, java.lang.String r4) {
                r2 = this;
                super.onPageFinished(r3, r4)
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r0 = "javascript:"
                r4.<init>(r0)
                com.tkay.expressad.d.b.a.a()
                java.lang.String r0 = com.tkay.expressad.d.b.a.b()
                r4.append(r0)
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 > r1) goto L22
                java.lang.String r4 = r4.toString()
                r3.loadUrl(r4)
                goto L2e
            L22:
                java.lang.String r4 = r4.toString()
                com.tkay.expressad.mbbanner.a.a.b$2$1 r0 = new com.tkay.expressad.mbbanner.a.a.b$2$1
                r0.<init>(r2)
                r3.evaluateJavascript(r4, r0)
            L2e:
                com.tkay.expressad.mbbanner.a.a.b r3 = r2.a
                com.tkay.expressad.mbbanner.a.a.b.a(r3)
                return
        }
    }

    final class 3 implements android.content.DialogInterface.OnDismissListener {
        final com.tkay.expressad.mbbanner.a.a.b a;

        3(com.tkay.expressad.mbbanner.a.a.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onDismiss(android.content.DialogInterface r7) {
                r6 = this;
                com.tkay.expressad.mbbanner.a.a.b r7 = r6.a
                com.tkay.expressad.mbbanner.a.c.a r7 = com.tkay.expressad.mbbanner.a.a.b.b(r7)
                if (r7 == 0) goto L12
                com.tkay.expressad.mbbanner.a.a.b r7 = r6.a
                com.tkay.expressad.mbbanner.a.c.a r7 = com.tkay.expressad.mbbanner.a.a.b.b(r7)
                r0 = 0
                r7.a(r0)
            L12:
                com.tkay.expressad.mbbanner.a.a.b r7 = r6.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = com.tkay.expressad.mbbanner.a.a.b.c(r7)
                r1 = 0
                r5 = 0
                java.lang.String r2 = ""
                java.lang.String r3 = "text/html"
                java.lang.String r4 = "utf-8"
                r0.loadDataWithBaseURL(r1, r2, r3, r4, r5)
                com.tkay.expressad.mbbanner.a.a.b r7 = r6.a
                android.widget.FrameLayout r7 = com.tkay.expressad.mbbanner.a.a.b.d(r7)
                com.tkay.expressad.mbbanner.a.a.b r0 = r6.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = com.tkay.expressad.mbbanner.a.a.b.c(r0)
                r7.removeView(r0)
                com.tkay.expressad.mbbanner.a.a.b r7 = r6.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = com.tkay.expressad.mbbanner.a.a.b.c(r7)
                r7.release()
                com.tkay.expressad.mbbanner.a.a.b r7 = r6.a
                r0 = 0
                com.tkay.expressad.mbbanner.a.a.b.a(r7, r0)
                com.tkay.expressad.mbbanner.a.a.b r7 = r6.a
                com.tkay.expressad.mbbanner.a.a.b.a(r7, r0)
                return
        }
    }


    public b(android.content.Context r1, android.os.Bundle r2, com.tkay.expressad.mbbanner.a.c.a r3) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "BannerExpandDialog"
            r0.a = r1
            com.tkay.expressad.mbbanner.a.a.b$4 r1 = new com.tkay.expressad.mbbanner.a.a.b$4
            r1.<init>(r0)
            r0.j = r1
            java.lang.String r1 = "url"
            java.lang.String r1 = r2.getString(r1)
            r0.b = r1
            java.lang.String r1 = "shouldUseCustomClose"
            boolean r1 = r2.getBoolean(r1)
            r0.c = r1
            r0.i = r3
            return
    }

    static com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView a(com.tkay.expressad.mbbanner.a.a.b r0, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1) {
            r0.e = r1
            return r1
    }

    static com.tkay.expressad.mbbanner.a.c.a a(com.tkay.expressad.mbbanner.a.a.b r0, com.tkay.expressad.mbbanner.a.c.a r1) {
            r0.i = r1
            return r1
    }

    private void a() {
            r4 = this;
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            android.content.Context r1 = r4.getContext()
            r0.<init>(r1)
            r4.d = r0
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r0.setLayoutParams(r1)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView
            android.content.Context r1 = r4.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            r0.<init>(r1)
            r4.e = r0
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r1.<init>(r2, r2)
            r0.setLayoutParams(r1)
            android.widget.FrameLayout r0 = r4.d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r4.e
            r0.addView(r1)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r1 = r4.getContext()
            r0.<init>(r1)
            r4.f = r0
            r1 = 0
            r0.setBackgroundColor(r1)
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r3 = 96
            r0.<init>(r3, r3)
            r3 = 8388661(0x800035, float:1.1755018E-38)
            r0.gravity = r3
            r3 = 30
            r0.setMargins(r3, r3, r3, r3)
            android.widget.TextView r3 = r4.f
            r3.setLayoutParams(r0)
            android.widget.TextView r0 = r4.f
            boolean r3 = r4.c
            if (r3 == 0) goto L5f
            r3 = 4
            goto L60
        L5f:
            r3 = r1
        L60:
            r0.setVisibility(r3)
            android.widget.TextView r0 = r4.f
            com.tkay.expressad.mbbanner.a.a.b$1 r3 = new com.tkay.expressad.mbbanner.a.a.b$1
            r3.<init>(r4)
            r0.setOnClickListener(r3)
            android.widget.FrameLayout r0 = r4.d
            android.widget.TextView r3 = r4.f
            r0.addView(r3)
            android.widget.FrameLayout r0 = r4.d
            r4.setContentView(r0)
            android.view.Window r0 = r4.getWindow()
            if (r0 == 0) goto Lc4
            android.view.Window r0 = r4.getWindow()
            android.graphics.drawable.ColorDrawable r3 = new android.graphics.drawable.ColorDrawable
            r3.<init>(r1)
            r0.setBackgroundDrawable(r3)
            android.view.Window r0 = r4.getWindow()
            android.view.View r0 = r0.getDecorView()
            r0.setPadding(r1, r1, r1, r1)
            android.view.Window r0 = r4.getWindow()
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            r0.width = r2
            r0.height = r2
            android.view.Window r1 = r4.getWindow()
            r1.setAttributes(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lc4
            r0 = 519(0x207, float:7.27E-43)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r1 < r2) goto Lb9
            r0 = 4615(0x1207, float:6.467E-42)
        Lb9:
            android.view.Window r1 = r4.getWindow()
            android.view.View r1 = r1.getDecorView()
            r1.setSystemUiVisibility(r0)
        Lc4:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.e
            com.tkay.expressad.mbbanner.a.a.b$2 r1 = new com.tkay.expressad.mbbanner.a.a.b$2
            r1.<init>(r4)
            r0.setWebViewListener(r1)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.e
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r1 = r4.j
            r0.setObject(r1)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.e
            java.lang.String r1 = r4.b
            r0.loadUrl(r1)
            com.tkay.expressad.mbbanner.a.a.b$3 r0 = new com.tkay.expressad.mbbanner.a.a.b$3
            r0.<init>(r4)
            r4.setOnDismissListener(r0)
            return
    }

    static void a(com.tkay.expressad.mbbanner.a.a.b r22) {
            r0 = r22
            java.lang.String r1 = "true"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L100
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L100
            android.content.res.Configuration r2 = r2.getConfiguration()     // Catch: java.lang.Throwable -> L100
            int r2 = r2.orientation     // Catch: java.lang.Throwable -> L100
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L100
            r3.<init>()     // Catch: java.lang.Throwable -> L100
            java.lang.String r4 = "orientation"
            r5 = 2
            r6 = 1
            if (r2 != r5) goto L24
            java.lang.String r2 = "landscape"
            goto L2b
        L24:
            if (r2 != r6) goto L29
            java.lang.String r2 = "portrait"
            goto L2b
        L29:
            java.lang.String r2 = "undefined"
        L2b:
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> L100
            java.lang.String r2 = "locked"
            r3.put(r2, r1)     // Catch: java.lang.Throwable -> L100
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L100
            int r2 = com.tkay.expressad.foundation.h.k.e(r2)     // Catch: java.lang.Throwable -> L100
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L100
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> L100
            int r4 = com.tkay.expressad.foundation.h.k.f(r4)     // Catch: java.lang.Throwable -> L100
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L100
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r7 = r7.f()     // Catch: java.lang.Throwable -> L100
            java.util.HashMap r7 = com.tkay.expressad.foundation.h.k.g(r7)     // Catch: java.lang.Throwable -> L100
            java.lang.String r8 = "width"
            java.lang.Object r8 = r7.get(r8)     // Catch: java.lang.Throwable -> L100
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Throwable -> L100
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> L100
            java.lang.String r9 = "height"
            java.lang.Object r7 = r7.get(r9)     // Catch: java.lang.Throwable -> L100
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L100
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L100
            java.util.HashMap r9 = new java.util.HashMap     // Catch: java.lang.Throwable -> L100
            r9.<init>()     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = "placementType"
            java.lang.String r11 = "Interstitial"
            r9.put(r10, r11)     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = "state"
            java.lang.String r11 = "expanded"
            r9.put(r10, r11)     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = "viewable"
            r9.put(r10, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "currentAppOrientation"
            r9.put(r1, r3)     // Catch: java.lang.Throwable -> L100
            int[] r1 = new int[r5]     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r0.e     // Catch: java.lang.Throwable -> L100
            r3.getLocationInWindow(r1)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r10 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r0.e     // Catch: java.lang.Throwable -> L100
            r3 = 0
            r5 = r1[r3]     // Catch: java.lang.Throwable -> L100
            float r12 = (float) r5     // Catch: java.lang.Throwable -> L100
            r5 = r1[r6]     // Catch: java.lang.Throwable -> L100
            float r13 = (float) r5     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L100
            int r5 = r5.getWidth()     // Catch: java.lang.Throwable -> L100
            float r14 = (float) r5     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L100
            int r5 = r5.getHeight()     // Catch: java.lang.Throwable -> L100
            float r15 = (float) r5     // Catch: java.lang.Throwable -> L100
            r10.fireSetDefaultPosition(r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r16 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L100
            r3 = r1[r3]     // Catch: java.lang.Throwable -> L100
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L100
            r1 = r1[r6]     // Catch: java.lang.Throwable -> L100
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r0.e     // Catch: java.lang.Throwable -> L100
            int r6 = r6.getWidth()     // Catch: java.lang.Throwable -> L100
            float r6 = (float) r6     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r10 = r0.e     // Catch: java.lang.Throwable -> L100
            int r10 = r10.getHeight()     // Catch: java.lang.Throwable -> L100
            float r10 = (float) r10     // Catch: java.lang.Throwable -> L100
            r17 = r5
            r18 = r3
            r19 = r1
            r20 = r6
            r21 = r10
            r16.fireSetCurrentPosition(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r0.e     // Catch: java.lang.Throwable -> L100
            r1.fireSetScreenSize(r3, r2, r4)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r0.e     // Catch: java.lang.Throwable -> L100
            float r3 = (float) r8     // Catch: java.lang.Throwable -> L100
            float r4 = (float) r7     // Catch: java.lang.Throwable -> L100
            r1.fireSetMaxSize(r2, r3, r4)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r0.e     // Catch: java.lang.Throwable -> L100
            r1.fireChangeEventForPropertys(r2, r9)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.e     // Catch: java.lang.Throwable -> L100
            r1.fireReadyEvent(r0)     // Catch: java.lang.Throwable -> L100
        L100:
            return
    }

    static com.tkay.expressad.mbbanner.a.c.a b(com.tkay.expressad.mbbanner.a.a.b r0) {
            com.tkay.expressad.mbbanner.a.c.a r0 = r0.i
            return r0
    }

    private void b() {
            r22 = this;
            r0 = r22
            java.lang.String r1 = "true"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L100
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L100
            android.content.res.Configuration r2 = r2.getConfiguration()     // Catch: java.lang.Throwable -> L100
            int r2 = r2.orientation     // Catch: java.lang.Throwable -> L100
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L100
            r3.<init>()     // Catch: java.lang.Throwable -> L100
            java.lang.String r4 = "orientation"
            r5 = 2
            r6 = 1
            if (r2 != r5) goto L24
            java.lang.String r2 = "landscape"
            goto L2b
        L24:
            if (r2 != r6) goto L29
            java.lang.String r2 = "portrait"
            goto L2b
        L29:
            java.lang.String r2 = "undefined"
        L2b:
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> L100
            java.lang.String r2 = "locked"
            r3.put(r2, r1)     // Catch: java.lang.Throwable -> L100
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L100
            int r2 = com.tkay.expressad.foundation.h.k.e(r2)     // Catch: java.lang.Throwable -> L100
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L100
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> L100
            int r4 = com.tkay.expressad.foundation.h.k.f(r4)     // Catch: java.lang.Throwable -> L100
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L100
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L100
            android.content.Context r7 = r7.f()     // Catch: java.lang.Throwable -> L100
            java.util.HashMap r7 = com.tkay.expressad.foundation.h.k.g(r7)     // Catch: java.lang.Throwable -> L100
            java.lang.String r8 = "width"
            java.lang.Object r8 = r7.get(r8)     // Catch: java.lang.Throwable -> L100
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Throwable -> L100
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> L100
            java.lang.String r9 = "height"
            java.lang.Object r7 = r7.get(r9)     // Catch: java.lang.Throwable -> L100
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L100
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L100
            java.util.HashMap r9 = new java.util.HashMap     // Catch: java.lang.Throwable -> L100
            r9.<init>()     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = "placementType"
            java.lang.String r11 = "Interstitial"
            r9.put(r10, r11)     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = "state"
            java.lang.String r11 = "expanded"
            r9.put(r10, r11)     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = "viewable"
            r9.put(r10, r1)     // Catch: java.lang.Throwable -> L100
            java.lang.String r1 = "currentAppOrientation"
            r9.put(r1, r3)     // Catch: java.lang.Throwable -> L100
            int[] r1 = new int[r5]     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r0.e     // Catch: java.lang.Throwable -> L100
            r3.getLocationInWindow(r1)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r10 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r0.e     // Catch: java.lang.Throwable -> L100
            r3 = 0
            r5 = r1[r3]     // Catch: java.lang.Throwable -> L100
            float r12 = (float) r5     // Catch: java.lang.Throwable -> L100
            r5 = r1[r6]     // Catch: java.lang.Throwable -> L100
            float r13 = (float) r5     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L100
            int r5 = r5.getWidth()     // Catch: java.lang.Throwable -> L100
            float r14 = (float) r5     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L100
            int r5 = r5.getHeight()     // Catch: java.lang.Throwable -> L100
            float r15 = (float) r5     // Catch: java.lang.Throwable -> L100
            r10.fireSetDefaultPosition(r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r16 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L100
            r3 = r1[r3]     // Catch: java.lang.Throwable -> L100
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L100
            r1 = r1[r6]     // Catch: java.lang.Throwable -> L100
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r0.e     // Catch: java.lang.Throwable -> L100
            int r6 = r6.getWidth()     // Catch: java.lang.Throwable -> L100
            float r6 = (float) r6     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r10 = r0.e     // Catch: java.lang.Throwable -> L100
            int r10 = r10.getHeight()     // Catch: java.lang.Throwable -> L100
            float r10 = (float) r10     // Catch: java.lang.Throwable -> L100
            r17 = r5
            r18 = r3
            r19 = r1
            r20 = r6
            r21 = r10
            r16.fireSetCurrentPosition(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r0.e     // Catch: java.lang.Throwable -> L100
            r1.fireSetScreenSize(r3, r2, r4)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r0.e     // Catch: java.lang.Throwable -> L100
            float r3 = (float) r8     // Catch: java.lang.Throwable -> L100
            float r4 = (float) r7     // Catch: java.lang.Throwable -> L100
            r1.fireSetMaxSize(r2, r3, r4)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r0.e     // Catch: java.lang.Throwable -> L100
            r1.fireChangeEventForPropertys(r2, r9)     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r1 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L100
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r0.e     // Catch: java.lang.Throwable -> L100
            r1.fireReadyEvent(r2)     // Catch: java.lang.Throwable -> L100
        L100:
            return
    }

    static com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView c(com.tkay.expressad.mbbanner.a.a.b r0) {
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.e
            return r0
    }

    static android.widget.FrameLayout d(com.tkay.expressad.mbbanner.a.a.b r0) {
            android.widget.FrameLayout r0 = r0.d
            return r0
    }

    static java.util.List e(com.tkay.expressad.mbbanner.a.a.b r0) {
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r0.h
            return r0
    }

    static android.widget.TextView f(com.tkay.expressad.mbbanner.a.a.b r0) {
            android.widget.TextView r0 = r0.f
            return r0
    }

    public final void a(java.lang.String r1, java.util.List<com.tkay.expressad.foundation.d.c> r2) {
            r0 = this;
            r0.g = r1
            r0.h = r2
            return
    }

    @Override
    protected final void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            r4 = 1
            r3.requestWindowFeature(r4)
            r0 = 0
            r3.setCanceledOnTouchOutside(r0)
            r3.setCancelable(r4)
            android.widget.FrameLayout r4 = new android.widget.FrameLayout
            android.content.Context r1 = r3.getContext()
            r4.<init>(r1)
            r3.d = r4
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r4.setLayoutParams(r1)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView
            android.content.Context r1 = r3.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            r4.<init>(r1)
            r3.e = r4
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r1.<init>(r2, r2)
            r4.setLayoutParams(r1)
            android.widget.FrameLayout r4 = r3.d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r3.e
            r4.addView(r1)
            android.widget.TextView r4 = new android.widget.TextView
            android.content.Context r1 = r3.getContext()
            r4.<init>(r1)
            r3.f = r4
            r4.setBackgroundColor(r0)
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams
            r1 = 96
            r4.<init>(r1, r1)
            r1 = 8388661(0x800035, float:1.1755018E-38)
            r4.gravity = r1
            r1 = 30
            r4.setMargins(r1, r1, r1, r1)
            android.widget.TextView r1 = r3.f
            r1.setLayoutParams(r4)
            android.widget.TextView r4 = r3.f
            boolean r1 = r3.c
            if (r1 == 0) goto L6c
            r1 = 4
            goto L6d
        L6c:
            r1 = r0
        L6d:
            r4.setVisibility(r1)
            android.widget.TextView r4 = r3.f
            com.tkay.expressad.mbbanner.a.a.b$1 r1 = new com.tkay.expressad.mbbanner.a.a.b$1
            r1.<init>(r3)
            r4.setOnClickListener(r1)
            android.widget.FrameLayout r4 = r3.d
            android.widget.TextView r1 = r3.f
            r4.addView(r1)
            android.widget.FrameLayout r4 = r3.d
            r3.setContentView(r4)
            android.view.Window r4 = r3.getWindow()
            if (r4 == 0) goto Ld1
            android.view.Window r4 = r3.getWindow()
            android.graphics.drawable.ColorDrawable r1 = new android.graphics.drawable.ColorDrawable
            r1.<init>(r0)
            r4.setBackgroundDrawable(r1)
            android.view.Window r4 = r3.getWindow()
            android.view.View r4 = r4.getDecorView()
            r4.setPadding(r0, r0, r0, r0)
            android.view.Window r4 = r3.getWindow()
            android.view.WindowManager$LayoutParams r4 = r4.getAttributes()
            r4.width = r2
            r4.height = r2
            android.view.Window r0 = r3.getWindow()
            r0.setAttributes(r4)
            int r4 = android.os.Build.VERSION.SDK_INT
            r0 = 16
            if (r4 < r0) goto Ld1
            r4 = 519(0x207, float:7.27E-43)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lc6
            r4 = 4615(0x1207, float:6.467E-42)
        Lc6:
            android.view.Window r0 = r3.getWindow()
            android.view.View r0 = r0.getDecorView()
            r0.setSystemUiVisibility(r4)
        Ld1:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.e
            com.tkay.expressad.mbbanner.a.a.b$2 r0 = new com.tkay.expressad.mbbanner.a.a.b$2
            r0.<init>(r3)
            r4.setWebViewListener(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.e
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r0 = r3.j
            r4.setObject(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.e
            java.lang.String r0 = r3.b
            r4.loadUrl(r0)
            com.tkay.expressad.mbbanner.a.a.b$3 r4 = new com.tkay.expressad.mbbanner.a.a.b$3
            r4.<init>(r3)
            r3.setOnDismissListener(r4)
            return
    }
}
