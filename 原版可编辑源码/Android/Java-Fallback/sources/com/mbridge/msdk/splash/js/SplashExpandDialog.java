package com.mbridge.msdk.splash.js;

public class SplashExpandDialog extends android.app.Dialog {
    private final java.lang.String a;
    private java.lang.String b;
    private boolean c;
    private android.widget.FrameLayout d;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView e;
    private android.widget.TextView f;
    private java.lang.String g;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> h;
    private com.mbridge.msdk.splash.d.a i;
    private com.mbridge.msdk.mbjscommon.mraid.b j;





    public SplashExpandDialog(android.content.Context r1, android.os.Bundle r2, com.mbridge.msdk.splash.d.a r3) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "SplashExpandDialog"
            r0.a = r1
            com.mbridge.msdk.splash.js.SplashExpandDialog$4 r1 = new com.mbridge.msdk.splash.js.SplashExpandDialog$4
            r1.<init>(r0)
            r0.j = r1
            if (r2 == 0) goto L20
            java.lang.String r1 = "url"
            java.lang.String r1 = r2.getString(r1)
            r0.b = r1
            java.lang.String r1 = "shouldUseCustomClose"
            boolean r1 = r2.getBoolean(r1)
            r0.c = r1
        L20:
            r0.i = r3
            return
    }

    static com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView a(com.mbridge.msdk.splash.js.SplashExpandDialog r0, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1) {
            r0.e = r1
            return r1
    }

    static com.mbridge.msdk.splash.d.a a(com.mbridge.msdk.splash.js.SplashExpandDialog r0, com.mbridge.msdk.splash.d.a r1) {
            r0.i = r1
            return r1
    }

    static void a(com.mbridge.msdk.splash.js.SplashExpandDialog r22) {
            r0 = r22
            java.lang.String r1 = "true"
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L101
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L101
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L101
            android.content.res.Configuration r2 = r2.getConfiguration()     // Catch: java.lang.Throwable -> L101
            int r2 = r2.orientation     // Catch: java.lang.Throwable -> L101
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L101
            r3.<init>()     // Catch: java.lang.Throwable -> L101
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
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> L101
            java.lang.String r2 = "locked"
            r3.put(r2, r1)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L101
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L101
            int r2 = com.mbridge.msdk.foundation.tools.v.x(r2)     // Catch: java.lang.Throwable -> L101
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L101
            android.content.Context r4 = r4.j()     // Catch: java.lang.Throwable -> L101
            int r4 = com.mbridge.msdk.foundation.tools.v.y(r4)     // Catch: java.lang.Throwable -> L101
            float r4 = (float) r4     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L101
            android.content.Context r7 = r7.j()     // Catch: java.lang.Throwable -> L101
            java.util.HashMap r7 = com.mbridge.msdk.foundation.tools.v.z(r7)     // Catch: java.lang.Throwable -> L101
            java.lang.String r8 = "width"
            java.lang.Object r8 = r7.get(r8)     // Catch: java.lang.Throwable -> L101
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Throwable -> L101
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> L101
            java.lang.String r9 = "height"
            java.lang.Object r7 = r7.get(r9)     // Catch: java.lang.Throwable -> L101
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L101
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L101
            java.util.HashMap r9 = new java.util.HashMap     // Catch: java.lang.Throwable -> L101
            r9.<init>()     // Catch: java.lang.Throwable -> L101
            java.lang.String r10 = "placementType"
            java.lang.String r11 = "Interstitial"
            r9.put(r10, r11)     // Catch: java.lang.Throwable -> L101
            java.lang.String r10 = "state"
            java.lang.String r11 = "expanded"
            r9.put(r10, r11)     // Catch: java.lang.Throwable -> L101
            java.lang.String r10 = "viewable"
            r9.put(r10, r1)     // Catch: java.lang.Throwable -> L101
            java.lang.String r1 = "currentAppOrientation"
            r9.put(r1, r3)     // Catch: java.lang.Throwable -> L101
            int[] r1 = new int[r5]     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r0.e     // Catch: java.lang.Throwable -> L101
            r3.getLocationInWindow(r1)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.mraid.a r10 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r11 = r0.e     // Catch: java.lang.Throwable -> L101
            r3 = 0
            r5 = r1[r3]     // Catch: java.lang.Throwable -> L101
            float r12 = (float) r5     // Catch: java.lang.Throwable -> L101
            r5 = r1[r6]     // Catch: java.lang.Throwable -> L101
            float r13 = (float) r5     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L101
            int r5 = r5.getWidth()     // Catch: java.lang.Throwable -> L101
            float r14 = (float) r5     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L101
            int r5 = r5.getHeight()     // Catch: java.lang.Throwable -> L101
            float r15 = (float) r5     // Catch: java.lang.Throwable -> L101
            r10.a(r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.mraid.a r16 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r0.e     // Catch: java.lang.Throwable -> L101
            r3 = r1[r3]     // Catch: java.lang.Throwable -> L101
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L101
            r1 = r1[r6]     // Catch: java.lang.Throwable -> L101
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r0.e     // Catch: java.lang.Throwable -> L101
            int r6 = r6.getWidth()     // Catch: java.lang.Throwable -> L101
            float r6 = (float) r6     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r10 = r0.e     // Catch: java.lang.Throwable -> L101
            int r10 = r10.getHeight()     // Catch: java.lang.Throwable -> L101
            float r10 = (float) r10     // Catch: java.lang.Throwable -> L101
            r17 = r5
            r18 = r3
            r19 = r1
            r20 = r6
            r21 = r10
            r16.b(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r0.e     // Catch: java.lang.Throwable -> L101
            r1.b(r3, r2, r4)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r0.e     // Catch: java.lang.Throwable -> L101
            float r3 = (float) r8     // Catch: java.lang.Throwable -> L101
            float r4 = (float) r7     // Catch: java.lang.Throwable -> L101
            r1.c(r2, r3, r4)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r0.e     // Catch: java.lang.Throwable -> L101
            r1.a(r2, r9)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.e     // Catch: java.lang.Throwable -> L101
            r1.a(r0)     // Catch: java.lang.Throwable -> L101
            goto L109
        L101:
            r0 = move-exception
            java.lang.String r1 = "SplashExpandDialog"
            java.lang.String r2 = "notifyMraid"
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L109:
            return
    }

    static com.mbridge.msdk.splash.d.a b(com.mbridge.msdk.splash.js.SplashExpandDialog r0) {
            com.mbridge.msdk.splash.d.a r0 = r0.i
            return r0
    }

    static com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView c(com.mbridge.msdk.splash.js.SplashExpandDialog r0) {
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.e
            return r0
    }

    static android.widget.FrameLayout d(com.mbridge.msdk.splash.js.SplashExpandDialog r0) {
            android.widget.FrameLayout r0 = r0.d
            return r0
    }

    static java.util.List e(com.mbridge.msdk.splash.js.SplashExpandDialog r0) {
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.h
            return r0
    }

    static android.widget.TextView f(com.mbridge.msdk.splash.js.SplashExpandDialog r0) {
            android.widget.TextView r0 = r0.f
            return r0
    }

    @Override
    public void dismiss() {
            r0 = this;
            super.dismiss()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
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
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView
            android.content.Context r1 = r3.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            r4.<init>(r1)
            r3.e = r4
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r1.<init>(r2, r2)
            r4.setLayoutParams(r1)
            android.widget.FrameLayout r4 = r3.d
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.e
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
            com.mbridge.msdk.splash.js.SplashExpandDialog$1 r1 = new com.mbridge.msdk.splash.js.SplashExpandDialog$1
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
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r3.e
            com.mbridge.msdk.splash.js.SplashExpandDialog$2 r0 = new com.mbridge.msdk.splash.js.SplashExpandDialog$2
            r0.<init>(r3)
            r4.setWebViewListener(r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r3.e
            com.mbridge.msdk.mbjscommon.mraid.b r0 = r3.j
            r4.setObject(r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r3.e
            java.lang.String r0 = r3.b
            r4.loadUrl(r0)
            com.mbridge.msdk.splash.js.SplashExpandDialog$3 r4 = new com.mbridge.msdk.splash.js.SplashExpandDialog$3
            r4.<init>(r3)
            r3.setOnDismissListener(r4)
            return
    }

    public void setCampaignList(java.lang.String r1, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2) {
            r0 = this;
            r0.g = r1
            r0.h = r2
            return
    }
}
