package com.tkay.expressad.video.bt.module;

public class TkayBTNativeEC extends com.tkay.expressad.video.bt.module.BTBaseView {
    private static final java.lang.String p = "tkay_reward_endcard_native_hor";
    private static final java.lang.String q = "tkay_reward_endcard_native_land";
    private android.widget.TextView A;
    private android.widget.TextView B;
    private com.tkay.expressad.videocommon.view.StarLevelView C;
    private boolean D;
    private boolean E;
    private int F;
    private java.lang.Runnable G;
    private android.view.View H;
    private android.view.View I;
    private java.lang.String J;
    private com.tkay.expressad.video.signal.a.j K;
    private android.webkit.WebView L;
    private android.view.ViewGroup r;
    private android.view.ViewGroup s;
    private android.widget.RelativeLayout t;
    private android.widget.ImageView u;
    private com.tkay.expressad.videocommon.view.RoundImageView v;
    private android.widget.ImageView w;
    private android.widget.ImageView x;
    private android.widget.ImageView y;
    private android.widget.TextView z;









    public TkayBTNativeEC(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.D = r1
            r0.E = r1
            r0.F = r1
            return
    }

    public TkayBTNativeEC(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.D = r1
            r0.E = r1
            r0.F = r1
            return
    }

    private static android.graphics.Bitmap a(android.graphics.drawable.Drawable r5) {
            int r0 = r5.getIntrinsicWidth()     // Catch: java.lang.Throwable -> L1b
            int r1 = r5.getIntrinsicHeight()     // Catch: java.lang.Throwable -> L1b
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L1b
            android.graphics.Bitmap r2 = android.graphics.Bitmap.createBitmap(r0, r1, r2)     // Catch: java.lang.Throwable -> L1b
            android.graphics.Canvas r3 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L1b
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1b
            r4 = 0
            r5.setBounds(r4, r4, r0, r1)     // Catch: java.lang.Throwable -> L1b
            r5.draw(r3)     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            r5 = move-exception
            r5.getMessage()
            r5 = 0
            return r5
    }

    private void a(float r5, float r6) {
            r4 = this;
            java.lang.String r0 = "onClicked"
            android.webkit.WebView r1 = r4.L
            if (r1 == 0) goto L55
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4b
            r1.<init>()     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = "code"
            int r3 = com.tkay.expressad.video.bt.module.TkayBTNativeEC.n     // Catch: java.lang.Exception -> L4b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L4b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L4b
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4b
            r2.<init>()     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = "x"
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L4b
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = "y"
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Exception -> L4b
            r2.put(r5, r6)     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = "data"
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L4b
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L4b
            android.webkit.WebView r5 = r4.L     // Catch: java.lang.Exception -> L4b
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L4b
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L4b
            r1 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r1)     // Catch: java.lang.Exception -> L4b
            com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r0, r6)     // Catch: java.lang.Exception -> L4b
            return
        L4b:
            com.tkay.expressad.video.bt.a.c.a()
            android.webkit.WebView r5 = r4.L
            java.lang.String r6 = r4.d
            com.tkay.expressad.video.bt.a.c.a(r5, r0, r6)
        L55:
            return
    }

    private void a(android.view.View r2) {
            r1 = this;
            if (r2 != 0) goto Lb
            android.content.Context r2 = r1.a
            r1.init(r2)
            r1.preLoadData()
            return
        Lb:
            android.view.ViewParent r0 = r2.getParent()
            if (r0 == 0) goto L1a
            android.view.ViewParent r0 = r2.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r2)
        L1a:
            r1.addView(r2)
            r1.b(r2)
            r1.a()
            return
    }

    static void a(com.tkay.expressad.video.bt.module.TkayBTNativeEC r4, float r5, float r6) {
            java.lang.String r0 = "onClicked"
            android.webkit.WebView r1 = r4.L
            if (r1 == 0) goto L55
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4b
            r1.<init>()     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = "code"
            int r3 = com.tkay.expressad.video.bt.module.TkayBTNativeEC.n     // Catch: java.lang.Exception -> L4b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L4b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L4b
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4b
            r2.<init>()     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = "x"
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L4b
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = "y"
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Exception -> L4b
            r2.put(r5, r6)     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = "data"
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L4b
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L4b
            android.webkit.WebView r5 = r4.L     // Catch: java.lang.Exception -> L4b
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L4b
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L4b
            r1 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r1)     // Catch: java.lang.Exception -> L4b
            com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r0, r6)     // Catch: java.lang.Exception -> L4b
            return
        L4b:
            com.tkay.expressad.video.bt.a.c.a()
            android.webkit.WebView r5 = r4.L
            java.lang.String r4 = r4.d
            com.tkay.expressad.video.bt.a.c.a(r5, r0, r4)
        L55:
            return
    }

    static void a(com.tkay.expressad.video.bt.module.TkayBTNativeEC r2, int r3) {
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13 org.json.JSONException -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L13 org.json.JSONException -> L15
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            org.json.JSONObject r3 = r2.a(r3)     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            r1.put(r0, r3)     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            goto L1a
        L10:
            r3 = move-exception
            r0 = r1
            goto L16
        L13:
            r2 = move-exception
            goto L2e
        L15:
            r3 = move-exception
        L16:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L13
            r1 = r0
        L1a:
            com.tkay.expressad.video.signal.a.j r3 = r2.K     // Catch: java.lang.Throwable -> L13
            if (r3 == 0) goto L2d
            com.tkay.expressad.video.signal.a.j r2 = r2.K     // Catch: java.lang.Throwable -> L13
            r3 = 1
            if (r1 == 0) goto L28
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L13
            goto L2a
        L28:
            java.lang.String r0 = ""
        L2a:
            r2.click(r3, r0)     // Catch: java.lang.Throwable -> L13
        L2d:
            return
        L2e:
            r2.getMessage()
            return
    }

    static boolean a(com.tkay.expressad.video.bt.module.TkayBTNativeEC r1) {
            r0 = 1
            r1.E = r0
            return r0
    }

    private int b() {
            r1 = this;
            boolean r0 = r1.isLandscape()
            if (r0 == 0) goto L9
            java.lang.String r0 = "tkay_reward_endcard_native_land"
            goto Lb
        L9:
            java.lang.String r0 = "tkay_reward_endcard_native_hor"
        Lb:
            int r0 = r1.findLayout(r0)
            return r0
    }

    static android.view.View b(com.tkay.expressad.video.bt.module.TkayBTNativeEC r0) {
            android.view.View r0 = r0.H
            return r0
    }

    private boolean b(int r3) {
            r2 = this;
            boolean r0 = r2.isLandscape()
            r1 = 0
            if (r0 == 0) goto L1b
            android.view.LayoutInflater r0 = r2.f
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.s = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.s
            boolean r3 = r2.b(r3)
            return r3
        L1b:
            android.view.LayoutInflater r0 = r2.f
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.r = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.r
            boolean r3 = r2.b(r3)
            return r3
    }

    private boolean b(android.view.View r5) {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "tkay_native_ec_layout"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> Ld9
            r4.t = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_iv_adbanner_bg"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.u = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_iv_adbanner"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            com.tkay.expressad.videocommon.view.RoundImageView r1 = (com.tkay.expressad.videocommon.view.RoundImageView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.v = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_iv_icon"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.w = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_iv_flag"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.x = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_iv_link"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.y = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_tv_apptitle"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.z = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_tv_appdesc"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.A = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_tv_nuater"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.B = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_sv_starlevel"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            com.tkay.expressad.videocommon.view.StarLevelView r1 = (com.tkay.expressad.videocommon.view.StarLevelView) r1     // Catch: java.lang.Throwable -> Ld9
            r4.C = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_iv_close"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            r4.H = r1     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r1 = "tkay_tv_cta"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> Ld9
            android.view.View r5 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> Ld9
            r4.I = r5     // Catch: java.lang.Throwable -> Ld9
            r1 = 9
            android.view.View[] r1 = new android.view.View[r1]     // Catch: java.lang.Throwable -> Ld9
            android.widget.ImageView r2 = r4.u     // Catch: java.lang.Throwable -> Ld9
            r1[r0] = r2     // Catch: java.lang.Throwable -> Ld9
            r2 = 1
            com.tkay.expressad.videocommon.view.RoundImageView r3 = r4.v     // Catch: java.lang.Throwable -> Ld9
            r1[r2] = r3     // Catch: java.lang.Throwable -> Ld9
            r2 = 2
            android.widget.ImageView r3 = r4.w     // Catch: java.lang.Throwable -> Ld9
            r1[r2] = r3     // Catch: java.lang.Throwable -> Ld9
            r2 = 3
            android.widget.TextView r3 = r4.z     // Catch: java.lang.Throwable -> Ld9
            r1[r2] = r3     // Catch: java.lang.Throwable -> Ld9
            r2 = 4
            android.widget.TextView r3 = r4.A     // Catch: java.lang.Throwable -> Ld9
            r1[r2] = r3     // Catch: java.lang.Throwable -> Ld9
            r2 = 5
            android.widget.TextView r3 = r4.B     // Catch: java.lang.Throwable -> Ld9
            r1[r2] = r3     // Catch: java.lang.Throwable -> Ld9
            r2 = 6
            com.tkay.expressad.videocommon.view.StarLevelView r3 = r4.C     // Catch: java.lang.Throwable -> Ld9
            r1[r2] = r3     // Catch: java.lang.Throwable -> Ld9
            r2 = 7
            android.view.View r3 = r4.H     // Catch: java.lang.Throwable -> Ld9
            r1[r2] = r3     // Catch: java.lang.Throwable -> Ld9
            r2 = 8
            r1[r2] = r5     // Catch: java.lang.Throwable -> Ld9
            boolean r5 = r4.isNotNULL(r1)     // Catch: java.lang.Throwable -> Ld9
            return r5
        Ld9:
            r5 = move-exception
            r5.getMessage()
            return r0
    }

    static android.widget.ImageView c(com.tkay.expressad.video.bt.module.TkayBTNativeEC r0) {
            android.widget.ImageView r0 = r0.x
            return r0
    }

    private void c(int r3) {
            r2 = this;
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13 org.json.JSONException -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L13 org.json.JSONException -> L15
            java.lang.String r0 = com.tkay.expressad.foundation.g.a.ce     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            org.json.JSONObject r3 = r2.a(r3)     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            r1.put(r0, r3)     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            goto L1a
        L10:
            r3 = move-exception
            r0 = r1
            goto L16
        L13:
            r3 = move-exception
            goto L2e
        L15:
            r3 = move-exception
        L16:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L13
            r1 = r0
        L1a:
            com.tkay.expressad.video.signal.a.j r3 = r2.K     // Catch: java.lang.Throwable -> L13
            if (r3 == 0) goto L2d
            com.tkay.expressad.video.signal.a.j r3 = r2.K     // Catch: java.lang.Throwable -> L13
            r0 = 1
            if (r1 == 0) goto L28
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L13
            goto L2a
        L28:
            java.lang.String r1 = ""
        L2a:
            r3.click(r0, r1)     // Catch: java.lang.Throwable -> L13
        L2d:
            return
        L2e:
            r3.getMessage()
            return
    }

    static boolean d(com.tkay.expressad.video.bt.module.TkayBTNativeEC r0) {
            boolean r0 = r0.D
            return r0
    }

    static android.webkit.WebView e(com.tkay.expressad.video.bt.module.TkayBTNativeEC r0) {
            android.webkit.WebView r0 = r0.L
            return r0
    }

    static java.lang.String f(com.tkay.expressad.video.bt.module.TkayBTNativeEC r0) {
            java.lang.String r0 = r0.J
            return r0
    }

    @Override
    protected final void a() {
            r2 = this;
            boolean r0 = r2.h
            if (r0 == 0) goto L36
            android.widget.RelativeLayout r0 = r2.t
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$4 r1 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$4
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.H
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$5 r1 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$5
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.I
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$6 r1 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$6
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.w
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$7 r1 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$7
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            com.tkay.expressad.videocommon.view.RoundImageView r0 = r2.v
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$8 r1 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$8
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L36:
            return
    }

    public android.graphics.Bitmap blurBitmap(android.graphics.Bitmap r7) {
            r6 = this;
            int r0 = r7.getWidth()     // Catch: java.lang.Throwable -> L3d
            int r1 = r7.getHeight()     // Catch: java.lang.Throwable -> L3d
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L3d
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)     // Catch: java.lang.Throwable -> L3d
            android.content.Context r1 = r6.a     // Catch: java.lang.Throwable -> L3d
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L3d
            android.renderscript.RenderScript r1 = android.renderscript.RenderScript.create(r1)     // Catch: java.lang.Throwable -> L3d
            android.renderscript.Element r2 = android.renderscript.Element.U8_4(r1)     // Catch: java.lang.Throwable -> L3d
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r1, r2)     // Catch: java.lang.Throwable -> L3d
            android.renderscript.Allocation r3 = android.renderscript.Allocation.createFromBitmap(r1, r7)     // Catch: java.lang.Throwable -> L3d
            android.renderscript.Allocation r4 = android.renderscript.Allocation.createFromBitmap(r1, r0)     // Catch: java.lang.Throwable -> L3d
            r5 = 1092616192(0x41200000, float:10.0)
            r2.setRadius(r5)     // Catch: java.lang.Throwable -> L3d
            r2.setInput(r3)     // Catch: java.lang.Throwable -> L3d
            r2.forEach(r4)     // Catch: java.lang.Throwable -> L3d
            r4.copyTo(r0)     // Catch: java.lang.Throwable -> L3d
            r7.recycle()     // Catch: java.lang.Throwable -> L3d
            r1.destroy()     // Catch: java.lang.Throwable -> L3d
            return r0
        L3d:
            r7 = 0
            return r7
    }

    @Override
    public void init(android.content.Context r3) {
            r2 = this;
            boolean r3 = r2.isLandscape()
            if (r3 == 0) goto L9
            java.lang.String r3 = "tkay_reward_endcard_native_land"
            goto Lb
        L9:
            java.lang.String r3 = "tkay_reward_endcard_native_hor"
        Lb:
            int r3 = r2.findLayout(r3)
            if (r3 <= 0) goto L44
            boolean r0 = r2.isLandscape()
            r1 = 0
            if (r0 == 0) goto L2c
            android.view.LayoutInflater r0 = r2.f
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.s = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.s
            boolean r3 = r2.b(r3)
            goto L3f
        L2c:
            android.view.LayoutInflater r0 = r2.f
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.r = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.r
            boolean r3 = r2.b(r3)
        L3f:
            r2.h = r3
            r2.a()
        L44:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r7 = this;
            super.onAttachedToWindow()
            java.lang.Runnable r0 = r7.G
            if (r0 != 0) goto Le
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$1 r0 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$1
            r0.<init>(r7)
            r7.G = r0
        Le:
            java.lang.Runnable r0 = r7.G
            if (r0 == 0) goto L1a
            int r1 = r7.F
            int r1 = r1 * 1000
            long r1 = (long) r1
            r7.postDelayed(r0, r1)
        L1a:
            boolean r0 = r7.h
            java.lang.String r1 = "data"
            java.lang.String r2 = "unitId"
            r3 = 2
            java.lang.String r4 = "id"
            if (r0 != 0) goto L69
            android.webkit.WebView r0 = r7.L
            if (r0 == 0) goto L69
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r5 = r7.d     // Catch: org.json.JSONException -> L4f
            r0.put(r4, r5)     // Catch: org.json.JSONException -> L4f
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L4f
            r5.<init>()     // Catch: org.json.JSONException -> L4f
            java.lang.String r6 = r7.J     // Catch: org.json.JSONException -> L4f
            r5.put(r2, r6)     // Catch: org.json.JSONException -> L4f
            r0.put(r1, r5)     // Catch: org.json.JSONException -> L4f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L4f
            java.lang.String r6 = "NativeEC Call H5 onCloseBtnClicked "
            r5.<init>(r6)     // Catch: org.json.JSONException -> L4f
            java.lang.String r6 = r0.toString()     // Catch: org.json.JSONException -> L4f
            r5.append(r6)     // Catch: org.json.JSONException -> L4f
            goto L53
        L4f:
            r5 = move-exception
            r5.getMessage()
        L53:
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r5 = r7.L
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)
            java.lang.String r6 = "onCloseBtnClicked"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r6, r0)
        L69:
            android.webkit.WebView r0 = r7.L
            if (r0 == 0) goto Lad
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r5 = r7.d     // Catch: org.json.JSONException -> L93
            r0.put(r4, r5)     // Catch: org.json.JSONException -> L93
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L93
            r4.<init>()     // Catch: org.json.JSONException -> L93
            java.lang.String r5 = r7.J     // Catch: org.json.JSONException -> L93
            r4.put(r2, r5)     // Catch: org.json.JSONException -> L93
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L93
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L93
            java.lang.String r2 = "NativeEC Call H5 onEndCardShow "
            r1.<init>(r2)     // Catch: org.json.JSONException -> L93
            java.lang.String r2 = r0.toString()     // Catch: org.json.JSONException -> L93
            r1.append(r2)     // Catch: org.json.JSONException -> L93
            goto L97
        L93:
            r1 = move-exception
            r1.getMessage()
        L97:
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            android.webkit.WebView r1 = r7.L
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)
            java.lang.String r2 = "onNativeECShow"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
        Lad:
            return
    }

    @Override
    public void onDestory() {
            r0 = this;
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            java.lang.Runnable r0 = r1.G
            if (r0 == 0) goto La
            r1.removeCallbacks(r0)
        La:
            return
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onSelfConfigurationChanged(r2)
            int r2 = r2.orientation
            r1.g = r2
            int r2 = r1.g
            r0 = 2
            if (r2 != r0) goto L17
            android.view.ViewGroup r2 = r1.r
            r1.removeView(r2)
            android.view.ViewGroup r2 = r1.s
            r1.a(r2)
            return
        L17:
            android.view.ViewGroup r2 = r1.s
            r1.removeView(r2)
            android.view.ViewGroup r2 = r1.r
            r1.a(r2)
            return
    }

    public void preLoadData() {
            r4 = this;
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L14c
            if (r0 == 0) goto L14b
            boolean r0 = r4.h     // Catch: java.lang.Throwable -> L14c
            if (r0 == 0) goto L14b
            com.tkay.expressad.videocommon.e.d r0 = r4.e     // Catch: java.lang.Throwable -> L14c
            if (r0 == 0) goto L14
            com.tkay.expressad.videocommon.e.d r0 = r4.e     // Catch: java.lang.Throwable -> L14c
            int r0 = r0.p()     // Catch: java.lang.Throwable -> L14c
            r4.F = r0     // Catch: java.lang.Throwable -> L14c
        L14:
            com.tkay.expressad.video.module.a.a.e r0 = new com.tkay.expressad.video.module.a.a.e     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.videocommon.view.RoundImageView r1 = r4.v     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.d.c r2 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r3 = r4.J     // Catch: java.lang.Throwable -> L14c
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> L14c
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L14c
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.d.c r2 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r2 = r2.be()     // Catch: java.lang.Throwable -> L14c
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.video.module.a.a.j r0 = new com.tkay.expressad.video.module.a.a.j     // Catch: java.lang.Throwable -> L14c
            android.widget.ImageView r1 = r4.w     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L14c
            android.content.Context r2 = r2.d()     // Catch: java.lang.Throwable -> L14c
            r3 = 1090519040(0x41000000, float:8.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)     // Catch: java.lang.Throwable -> L14c
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L14c
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L14c
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.d.c r2 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r2 = r2.bd()     // Catch: java.lang.Throwable -> L14c
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L14c
            android.widget.TextView r0 = r4.z     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r1 = r1.bb()     // Catch: java.lang.Throwable -> L14c
            r0.setText(r1)     // Catch: java.lang.Throwable -> L14c
            android.widget.TextView r0 = r4.A     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r1 = r1.bc()     // Catch: java.lang.Throwable -> L14c
            r0.setText(r1)     // Catch: java.lang.Throwable -> L14c
            android.widget.TextView r0 = r4.B     // Catch: java.lang.Throwable -> L14c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14c
            r1.<init>()     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.d.c r2 = r4.b     // Catch: java.lang.Throwable -> L14c
            int r2 = r2.aY()     // Catch: java.lang.Throwable -> L14c
            r1.append(r2)     // Catch: java.lang.Throwable -> L14c
            java.lang.String r2 = ")"
            r1.append(r2)     // Catch: java.lang.Throwable -> L14c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L14c
            r0.setText(r1)     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.videocommon.view.StarLevelView r0 = r4.C     // Catch: java.lang.Throwable -> L14c
            r0.removeAllViews()     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L14c
            double r0 = r0.aX()     // Catch: java.lang.Throwable -> L14c
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto L9f
            r0 = 4617315517961601024(0x4014000000000000, double:5.0)
        L9f:
            com.tkay.expressad.videocommon.view.StarLevelView r2 = r4.C     // Catch: java.lang.Throwable -> L14c
            r2.initScore(r0)     // Catch: java.lang.Throwable -> L14c
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L14c
            r1 = 17
            r2 = 8
            if (r0 >= r1) goto Lb2
            android.widget.ImageView r0 = r4.u     // Catch: java.lang.Throwable -> L14c
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L14c
            return
        Lb2:
            com.tkay.expressad.videocommon.view.RoundImageView r0 = r4.v     // Catch: java.lang.Throwable -> Lca
            android.graphics.drawable.Drawable r0 = r0.getDrawable()     // Catch: java.lang.Throwable -> Lca
            android.graphics.Bitmap r0 = a(r0)     // Catch: java.lang.Throwable -> Lca
            if (r0 == 0) goto Lcf
            android.graphics.Bitmap r0 = r4.blurBitmap(r0)     // Catch: java.lang.Throwable -> Lca
            if (r0 == 0) goto Lcf
            android.widget.ImageView r1 = r4.u     // Catch: java.lang.Throwable -> Lca
            r1.setImageBitmap(r0)     // Catch: java.lang.Throwable -> Lca
            goto Lcf
        Lca:
            android.widget.ImageView r0 = r4.u     // Catch: java.lang.Throwable -> L14c
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L14c
        Lcf:
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L14c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14c
            if (r0 != 0) goto Lec
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L14c
            java.lang.String r1 = "alecfc=1"
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L14c
            if (r0 == 0) goto Lec
            r0 = 1
            r4.D = r0     // Catch: java.lang.Throwable -> L14c
        Lec:
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r0 = r0.aE()     // Catch: java.lang.Throwable -> L14c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14c
            if (r0 == 0) goto Lfb
            java.lang.String r0 = "https://mores.toponad.com/image/default/mintegral_logo.png"
            goto L101
        Lfb:
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L14c
            java.lang.String r0 = r0.aE()     // Catch: java.lang.Throwable -> L14c
        L101:
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L14c
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$2 r3 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$2     // Catch: java.lang.Throwable -> L14c
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L14c
            r1.a(r0, r3)     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L14c
            r0.e()     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Throwable -> L14c
            if (r0 == 0) goto L13d
            java.lang.String r0 = r0.J()     // Catch: java.lang.Throwable -> L14c
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14c
            if (r1 == 0) goto L132
            android.widget.ImageView r1 = r4.y     // Catch: java.lang.Throwable -> L14c
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L14c
        L132:
            android.widget.ImageView r1 = r4.y     // Catch: java.lang.Throwable -> L14c
            com.tkay.expressad.video.bt.module.TkayBTNativeEC$3 r3 = new com.tkay.expressad.video.bt.module.TkayBTNativeEC$3     // Catch: java.lang.Throwable -> L14c
            r3.<init>(r4, r0)     // Catch: java.lang.Throwable -> L14c
            r1.setOnClickListener(r3)     // Catch: java.lang.Throwable -> L14c
            goto L142
        L13d:
            android.widget.ImageView r0 = r4.y     // Catch: java.lang.Throwable -> L14c
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L14c
        L142:
            boolean r0 = r4.E     // Catch: java.lang.Throwable -> L14c
            if (r0 != 0) goto L14b
            android.view.View r0 = r4.H     // Catch: java.lang.Throwable -> L14c
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L14c
        L14b:
            return
        L14c:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void setCreateWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.L = r1
            return
    }

    public void setJSCommon(com.tkay.expressad.video.signal.a.j r1) {
            r0 = this;
            r0.K = r1
            return
    }

    @Override
    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.J = r1
            return
    }
}
