package com.mbridge.msdk.video.bt.module;

public class MBridgeBTNativeEC extends com.mbridge.msdk.video.bt.module.BTBaseView {
    private android.widget.TextView A;
    private com.mbridge.msdk.videocommon.view.StarLevelView B;
    private boolean C;
    private boolean D;
    private int E;
    private java.lang.Runnable F;
    private boolean G;
    private android.view.View H;
    private com.mbridge.msdk.widget.MBDownloadProgressBar I;
    private java.lang.String J;
    private com.mbridge.msdk.video.js.a.j K;
    private android.webkit.WebView L;
    private android.view.ViewGroup p;
    private android.view.ViewGroup q;
    private android.widget.RelativeLayout r;
    private android.widget.ImageView s;
    private com.mbridge.msdk.videocommon.view.RoundImageView t;
    private android.widget.ImageView u;
    private android.widget.ImageView v;
    private android.widget.ImageView w;
    private android.widget.ImageView x;
    private android.widget.TextView y;
    private android.widget.TextView z;








    public MBridgeBTNativeEC(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.C = r1
            r0.D = r1
            r0.E = r1
            r0.G = r1
            return
    }

    public MBridgeBTNativeEC(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.C = r1
            r0.D = r1
            r0.E = r1
            r0.G = r1
            return
    }

    private android.graphics.Bitmap a(android.graphics.drawable.Drawable r6) {
            r5 = this;
            int r0 = r6.getIntrinsicWidth()     // Catch: java.lang.Throwable -> L1b
            int r1 = r6.getIntrinsicHeight()     // Catch: java.lang.Throwable -> L1b
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L1b
            android.graphics.Bitmap r2 = android.graphics.Bitmap.createBitmap(r0, r1, r2)     // Catch: java.lang.Throwable -> L1b
            android.graphics.Canvas r3 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L1b
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1b
            r4 = 0
            r6.setBounds(r4, r4, r0, r1)     // Catch: java.lang.Throwable -> L1b
            r6.draw(r3)     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r0, r6)
            r6 = 0
            return r6
    }

    static android.view.View a(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r0) {
            android.view.View r0 = r0.H
            return r0
    }

    private void a(android.view.View r2) {
            r1 = this;
            if (r2 != 0) goto Lb
            android.content.Context r2 = r1.a
            r1.init(r2)
            r1.preLoadData()
            goto L23
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
        L23:
            return
    }

    static void a(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r4, float r5, float r6) {
            java.lang.String r0 = "onClicked"
            android.webkit.WebView r1 = r4.L
            if (r1 == 0) goto L57
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4c
            r1.<init>()     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "code"
            int r3 = com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.n     // Catch: java.lang.Exception -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L4c
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L4c
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4c
            r2.<init>()     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = "x"
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L4c
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L4c
            java.lang.String r5 = "y"
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Exception -> L4c
            r2.put(r5, r6)     // Catch: java.lang.Exception -> L4c
            java.lang.String r5 = "data"
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L4c
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L4c
            android.webkit.WebView r6 = r4.L     // Catch: java.lang.Exception -> L4c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L4c
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L4c
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Exception -> L4c
            r5.a(r6, r0, r1)     // Catch: java.lang.Exception -> L4c
            goto L57
        L4c:
            com.mbridge.msdk.video.bt.a.c r5 = com.mbridge.msdk.video.bt.a.c.a()
            android.webkit.WebView r6 = r4.L
            java.lang.String r4 = r4.d
            r5.a(r6, r0, r4)
        L57:
            return
    }

    static void a(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r2, int r3, android.content.Context r4) {
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13 org.json.JSONException -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L13 org.json.JSONException -> L15
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.p     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            org.json.JSONObject r3 = r2.a(r3)     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            r1.put(r0, r3)     // Catch: org.json.JSONException -> L10 java.lang.Throwable -> L13
            goto L1a
        L10:
            r3 = move-exception
            r0 = r1
            goto L16
        L13:
            r2 = move-exception
            goto L68
        L15:
            r3 = move-exception
        L16:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L13
            r1 = r0
        L1a:
            com.mbridge.msdk.video.js.a.j r3 = r2.K     // Catch: java.lang.Throwable -> L13
            if (r3 == 0) goto L71
            if (r4 == 0) goto L2b
            android.content.Context r3 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L13
            if (r4 == r3) goto L2b
            com.mbridge.msdk.video.js.a.j r3 = r2.K     // Catch: java.lang.Throwable -> L13
            r3.a(r4)     // Catch: java.lang.Throwable -> L13
        L2b:
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.b     // Catch: java.lang.Throwable -> L13
            if (r3 == 0) goto L58
            com.mbridge.msdk.video.bt.a.c r3 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L13
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13
            r4.<init>()     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = r2.J     // Catch: java.lang.Throwable -> L13
            r4.append(r0)     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = "_"
            r4.append(r0)     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = r0.getRequestId()     // Catch: java.lang.Throwable -> L13
            r4.append(r0)     // Catch: java.lang.Throwable -> L13
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L13
            android.app.Activity r3 = r3.d(r4)     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.video.js.a.j r4 = r2.K     // Catch: java.lang.Throwable -> L13
            r4.a(r3)     // Catch: java.lang.Throwable -> L13
        L58:
            com.mbridge.msdk.video.js.a.j r2 = r2.K     // Catch: java.lang.Throwable -> L13
            r3 = 1
            if (r1 == 0) goto L62
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L13
            goto L64
        L62:
            java.lang.String r4 = ""
        L64:
            r2.click(r3, r4)     // Catch: java.lang.Throwable -> L13
            goto L71
        L68:
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
        L71:
            return
    }

    static boolean a(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r0, boolean r1) {
            r0.D = r1
            return r1
    }

    private boolean b(android.view.View r4) {
            r3 = this;
            r0 = 0
            java.lang.String r1 = "mbridge_native_ec_layout"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> Leb
            r3.r = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_iv_adbanner_bg"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Leb
            r3.s = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_iv_adbanner"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            com.mbridge.msdk.videocommon.view.RoundImageView r1 = (com.mbridge.msdk.videocommon.view.RoundImageView) r1     // Catch: java.lang.Throwable -> Leb
            r3.t = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_iv_icon"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Leb
            r3.u = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_iv_flag"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Leb
            r3.v = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_iv_link"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> Leb
            r3.w = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_tv_apptitle"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> Leb
            r3.y = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_tv_appdesc"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> Leb
            r3.z = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_tv_number"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> Leb
            r3.A = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_sv_starlevel"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            com.mbridge.msdk.videocommon.view.StarLevelView r1 = (com.mbridge.msdk.videocommon.view.StarLevelView) r1     // Catch: java.lang.Throwable -> Leb
            r3.B = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_iv_close"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            r3.H = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_tv_cta"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            com.mbridge.msdk.widget.MBDownloadProgressBar r1 = (com.mbridge.msdk.widget.MBDownloadProgressBar) r1     // Catch: java.lang.Throwable -> Leb
            r3.I = r1     // Catch: java.lang.Throwable -> Leb
            java.lang.String r1 = "mbridge_iv_logo"
            int r1 = r3.findID(r1)     // Catch: java.lang.Throwable -> Leb
            android.view.View r4 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> Leb
            android.widget.ImageView r4 = (android.widget.ImageView) r4     // Catch: java.lang.Throwable -> Leb
            r3.x = r4     // Catch: java.lang.Throwable -> Leb
            r4 = 9
            android.view.View[] r4 = new android.view.View[r4]     // Catch: java.lang.Throwable -> Leb
            android.widget.ImageView r1 = r3.s     // Catch: java.lang.Throwable -> Leb
            r4[r0] = r1     // Catch: java.lang.Throwable -> Leb
            r1 = 1
            com.mbridge.msdk.videocommon.view.RoundImageView r2 = r3.t     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            r1 = 2
            android.widget.ImageView r2 = r3.u     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            r1 = 3
            android.widget.TextView r2 = r3.y     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            r1 = 4
            android.widget.TextView r2 = r3.z     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            r1 = 5
            android.widget.TextView r2 = r3.A     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            r1 = 6
            com.mbridge.msdk.videocommon.view.StarLevelView r2 = r3.B     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            r1 = 7
            android.view.View r2 = r3.H     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            r1 = 8
            com.mbridge.msdk.widget.MBDownloadProgressBar r2 = r3.I     // Catch: java.lang.Throwable -> Leb
            r4[r1] = r2     // Catch: java.lang.Throwable -> Leb
            boolean r4 = r3.isNotNULL(r4)     // Catch: java.lang.Throwable -> Leb
            return r4
        Leb:
            r4 = move-exception
            java.lang.String r1 = r4.getMessage()
            java.lang.String r2 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r4)
            return r0
    }

    static boolean b(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r0) {
            boolean r0 = r0.C
            return r0
    }

    static android.webkit.WebView c(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r0) {
            android.webkit.WebView r0 = r0.L
            return r0
    }

    static java.lang.String d(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r0) {
            java.lang.String r0 = r0.J
            return r0
    }

    static com.mbridge.msdk.widget.MBDownloadProgressBar e(com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r0) {
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r0.I
            return r0
    }

    @Override
    protected final void a() {
            r2 = this;
            boolean r0 = r2.h     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L41
            android.widget.RelativeLayout r0 = r2.r     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$3 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$3     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L37
            android.view.View r0 = r2.H     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$4 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$4     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r2.I     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$5 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$5     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L37
            android.widget.ImageView r0 = r2.u     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$6 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$6     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.videocommon.view.RoundImageView r0 = r2.t     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$7 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$7     // Catch: java.lang.Throwable -> L37
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L37
            goto L41
        L37:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L41:
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
            java.lang.String r3 = "mbridge_reward_endcard_native_land"
            goto Lb
        L9:
            java.lang.String r3 = "mbridge_reward_endcard_native_hor"
        Lb:
            int r3 = r2.findLayout(r3)
            if (r3 <= 0) goto L44
            boolean r0 = r2.isLandscape()
            r1 = 0
            if (r0 == 0) goto L2c
            android.view.LayoutInflater r0 = r2.f
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.q = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.q
            boolean r3 = r2.b(r3)
            goto L3f
        L2c:
            android.view.LayoutInflater r0 = r2.f
            android.view.View r3 = r0.inflate(r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.p = r3
            r2.addView(r3)
            android.view.ViewGroup r3 = r2.p
            boolean r3 = r2.b(r3)
        L3f:
            r2.h = r3
            r2.a()
        L44:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r9 = this;
            super.onAttachedToWindow()
            java.lang.Runnable r0 = r9.F
            if (r0 != 0) goto Le
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$1 r0 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$1
            r0.<init>(r9)
            r9.F = r0
        Le:
            java.lang.Runnable r0 = r9.F
            if (r0 == 0) goto L1a
            int r1 = r9.E
            int r1 = r1 * 1000
            long r1 = (long) r1
            r9.postDelayed(r0, r1)
        L1a:
            boolean r0 = r9.h
            java.lang.String r1 = "data"
            java.lang.String r2 = "unitId"
            r3 = 2
            java.lang.String r4 = "id"
            java.lang.String r5 = "BTBaseView"
            if (r0 != 0) goto L7a
            android.webkit.WebView r0 = r9.L
            if (r0 == 0) goto L7a
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r6 = r9.d     // Catch: org.json.JSONException -> L5b
            r0.put(r4, r6)     // Catch: org.json.JSONException -> L5b
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5b
            r6.<init>()     // Catch: org.json.JSONException -> L5b
            java.lang.String r7 = r9.J     // Catch: org.json.JSONException -> L5b
            r6.put(r2, r7)     // Catch: org.json.JSONException -> L5b
            r0.put(r1, r6)     // Catch: org.json.JSONException -> L5b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L5b
            r6.<init>()     // Catch: org.json.JSONException -> L5b
            java.lang.String r7 = "NativeEC Call H5 onCloseBtnClicked "
            r6.append(r7)     // Catch: org.json.JSONException -> L5b
            java.lang.String r7 = r0.toString()     // Catch: org.json.JSONException -> L5b
            r6.append(r7)     // Catch: org.json.JSONException -> L5b
            java.lang.String r6 = r6.toString()     // Catch: org.json.JSONException -> L5b
            com.mbridge.msdk.foundation.tools.z.a(r5, r6)     // Catch: org.json.JSONException -> L5b
            goto L63
        L5b:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r5, r6)
        L63:
            com.mbridge.msdk.mbjscommon.windvane.h r6 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            android.webkit.WebView r7 = r9.L
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)
            java.lang.String r8 = "onCloseBtnClicked"
            r6.a(r7, r8, r0)
        L7a:
            android.webkit.WebView r0 = r9.L
            if (r0 == 0) goto Lcd
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r6 = r9.d     // Catch: org.json.JSONException -> Lae
            r0.put(r4, r6)     // Catch: org.json.JSONException -> Lae
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lae
            r4.<init>()     // Catch: org.json.JSONException -> Lae
            java.lang.String r6 = r9.J     // Catch: org.json.JSONException -> Lae
            r4.put(r2, r6)     // Catch: org.json.JSONException -> Lae
            r0.put(r1, r4)     // Catch: org.json.JSONException -> Lae
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lae
            r1.<init>()     // Catch: org.json.JSONException -> Lae
            java.lang.String r2 = "NativeEC Call H5 onEndCardShow "
            r1.append(r2)     // Catch: org.json.JSONException -> Lae
            java.lang.String r2 = r0.toString()     // Catch: org.json.JSONException -> Lae
            r1.append(r2)     // Catch: org.json.JSONException -> Lae
            java.lang.String r1 = r1.toString()     // Catch: org.json.JSONException -> Lae
            com.mbridge.msdk.foundation.tools.z.a(r5, r1)     // Catch: org.json.JSONException -> Lae
            goto Lb6
        Lae:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r5, r1)
        Lb6:
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            android.webkit.WebView r2 = r9.L
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)
            java.lang.String r3 = "onNativeECShow"
            r1.a(r2, r3, r0)
        Lcd:
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
            java.lang.Runnable r0 = r1.F
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
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = " native onSelfConfigurationChanged:"
            r2.append(r0)
            int r0 = r1.g
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            int r2 = r1.g
            r0 = 2
            if (r2 != r0) goto L2f
            android.view.ViewGroup r2 = r1.p
            r1.removeView(r2)
            android.view.ViewGroup r2 = r1.q
            r1.a(r2)
            goto L39
        L2f:
            android.view.ViewGroup r2 = r1.q
            r1.removeView(r2)
            android.view.ViewGroup r2 = r1.p
            r1.a(r2)
        L39:
            return
    }

    public void preLoadData() {
            r7 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            if (r0 == 0) goto L1f1
            boolean r0 = r7.h     // Catch: java.lang.Throwable -> L1e7
            if (r0 == 0) goto L1f1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            int r0 = r0.getCbd()     // Catch: java.lang.Throwable -> L1e7
            r1 = -2
            if (r0 <= r1) goto L1a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            int r0 = r0.getCbd()     // Catch: java.lang.Throwable -> L1e7
            r7.E = r0     // Catch: java.lang.Throwable -> L1e7
            goto L26
        L1a:
            com.mbridge.msdk.videocommon.d.c r0 = r7.e     // Catch: java.lang.Throwable -> L1e7
            if (r0 == 0) goto L26
            com.mbridge.msdk.videocommon.d.c r0 = r7.e     // Catch: java.lang.Throwable -> L1e7
            int r0 = r0.p()     // Catch: java.lang.Throwable -> L1e7
            r7.E = r0     // Catch: java.lang.Throwable -> L1e7
        L26:
            com.mbridge.msdk.video.module.a.a.d r0 = new com.mbridge.msdk.video.module.a.a.d     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.videocommon.view.RoundImageView r1 = r7.t     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r3 = r7.J     // Catch: java.lang.Throwable -> L1e7
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> L1e7
            android.content.Context r1 = r7.a     // Catch: java.lang.Throwable -> L1e7
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r2 = r2.getImageUrl()     // Catch: java.lang.Throwable -> L1e7
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.video.module.a.a.i r0 = new com.mbridge.msdk.video.module.a.a.i     // Catch: java.lang.Throwable -> L1e7
            android.widget.ImageView r1 = r7.u     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1e7
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L1e7
            r3 = 1090519040(0x41000000, float:8.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)     // Catch: java.lang.Throwable -> L1e7
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L1e7
            android.content.Context r1 = r7.a     // Catch: java.lang.Throwable -> L1e7
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r2 = r2.getIconUrl()     // Catch: java.lang.Throwable -> L1e7
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L1e7
            android.widget.TextView r0 = r7.y     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r1 = r1.getAppName()     // Catch: java.lang.Throwable -> L1e7
            r0.setText(r1)     // Catch: java.lang.Throwable -> L1e7
            android.widget.TextView r0 = r7.z     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r1 = r1.getAppDesc()     // Catch: java.lang.Throwable -> L1e7
            r0.setText(r1)     // Catch: java.lang.Throwable -> L1e7
            android.widget.TextView r0 = r7.A     // Catch: java.lang.Throwable -> L1e7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e7
            r1.<init>()     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.b     // Catch: java.lang.Throwable -> L1e7
            int r2 = r2.getNumberRating()     // Catch: java.lang.Throwable -> L1e7
            r1.append(r2)     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r2 = ")"
            r1.append(r2)     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1e7
            r0.setText(r1)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.videocommon.view.StarLevelView r0 = r7.B     // Catch: java.lang.Throwable -> L1e7
            r0.removeAllViews()     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r7.I     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r1 = r1.getAkdlui()     // Catch: java.lang.Throwable -> L1e7
            r0.setUniqueKey(r1)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r7.I     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L1e7
            int r1 = r1.getLinkType()     // Catch: java.lang.Throwable -> L1e7
            r0.setLinkType(r1)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r7.I     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r1 = r1.getCMPTEntryUrl()     // Catch: java.lang.Throwable -> L1e7
            r0.setCtaldtypeUrl(r1)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.widget.MBDownloadProgressBar r0 = r7.I     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r1 = r1.getAdCall()     // Catch: java.lang.Throwable -> L1e7
            r0.setText(r1)     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            double r0 = r0.getRating()     // Catch: java.lang.Throwable -> L1e7
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto Ldd
            r0 = 4617315517961601024(0x4014000000000000, double:5.0)
        Ldd:
            com.mbridge.msdk.videocommon.view.StarLevelView r2 = r7.B     // Catch: java.lang.Throwable -> L1e7
            r2.initScore(r0)     // Catch: java.lang.Throwable -> L1e7
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1e7
            r1 = 17
            r2 = 8
            if (r0 >= r1) goto Lf0
            android.widget.ImageView r0 = r7.s     // Catch: java.lang.Throwable -> L1e7
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L1e7
            return
        Lf0:
            com.mbridge.msdk.videocommon.view.RoundImageView r0 = r7.t     // Catch: java.lang.Throwable -> L108
            android.graphics.drawable.Drawable r0 = r0.getDrawable()     // Catch: java.lang.Throwable -> L108
            android.graphics.Bitmap r0 = r7.a(r0)     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto L10d
            android.graphics.Bitmap r0 = r7.blurBitmap(r0)     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto L10d
            android.widget.ImageView r1 = r7.s     // Catch: java.lang.Throwable -> L108
            r1.setImageBitmap(r0)     // Catch: java.lang.Throwable -> L108
            goto L10d
        L108:
            android.widget.ImageView r0 = r7.s     // Catch: java.lang.Throwable -> L1e7
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L1e7
        L10d:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L1e7
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1e7
            r1 = 1
            if (r0 != 0) goto L12a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r3 = "alecfc=1"
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Throwable -> L1e7
            if (r0 == 0) goto L12a
            r7.C = r1     // Catch: java.lang.Throwable -> L1e7
        L12a:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L1e7
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1e7
            if (r0 != 0) goto L146
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r3 = "wlgo=1"
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Throwable -> L1e7
            if (r0 == 0) goto L146
            r7.G = r1     // Catch: java.lang.Throwable -> L1e7
        L146:
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r0 = r0.getLanguage()     // Catch: java.lang.Throwable -> L1e7
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r3 = "drawable"
            if (r1 != 0) goto L17e
            java.lang.String r1 = "zh"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L1e7
            if (r0 == 0) goto L17e
            android.widget.ImageView r0 = r7.v     // Catch: java.lang.Throwable -> L1e7
            android.content.res.Resources r1 = r7.getResources()     // Catch: java.lang.Throwable -> L1e7
            android.content.res.Resources r4 = r7.getResources()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r5 = "mbridge_reward_flag_cn"
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r6 = r6.d()     // Catch: java.lang.Throwable -> L1e7
            int r3 = r4.getIdentifier(r5, r3, r6)     // Catch: java.lang.Throwable -> L1e7
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r3)     // Catch: java.lang.Throwable -> L1e7
            r0.setImageDrawable(r1)     // Catch: java.lang.Throwable -> L1e7
            goto L19d
        L17e:
            android.widget.ImageView r0 = r7.v     // Catch: java.lang.Throwable -> L1e7
            android.content.res.Resources r1 = r7.getResources()     // Catch: java.lang.Throwable -> L1e7
            android.content.res.Resources r4 = r7.getResources()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r5 = "mbridge_reward_flag_en"
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r6 = r6.d()     // Catch: java.lang.Throwable -> L1e7
            int r3 = r4.getIdentifier(r5, r3, r6)     // Catch: java.lang.Throwable -> L1e7
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r3)     // Catch: java.lang.Throwable -> L1e7
            r0.setImageDrawable(r1)     // Catch: java.lang.Throwable -> L1e7
        L19d:
            boolean r0 = r7.G     // Catch: java.lang.Throwable -> L1e7
            if (r0 != 0) goto L1ac
            android.widget.ImageView r0 = r7.v     // Catch: java.lang.Throwable -> L1e7
            r1 = 4
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L1e7
            android.widget.ImageView r0 = r7.x     // Catch: java.lang.Throwable -> L1e7
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L1e7
        L1ac:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1e7
            java.lang.String r0 = r0.k()     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.c.a r0 = r1.b(r0)     // Catch: java.lang.Throwable -> L1e7
            if (r0 == 0) goto L1d8
            java.lang.String r0 = r0.az()     // Catch: java.lang.Throwable -> L1e7
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1e7
            if (r1 == 0) goto L1cd
            android.widget.ImageView r1 = r7.w     // Catch: java.lang.Throwable -> L1e7
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L1e7
        L1cd:
            android.widget.ImageView r1 = r7.w     // Catch: java.lang.Throwable -> L1e7
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$2 r3 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC$2     // Catch: java.lang.Throwable -> L1e7
            r3.<init>(r7, r0)     // Catch: java.lang.Throwable -> L1e7
            r1.setOnClickListener(r3)     // Catch: java.lang.Throwable -> L1e7
            goto L1dd
        L1d8:
            android.widget.ImageView r0 = r7.w     // Catch: java.lang.Throwable -> L1e7
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L1e7
        L1dd:
            boolean r0 = r7.D     // Catch: java.lang.Throwable -> L1e7
            if (r0 != 0) goto L1f1
            android.view.View r0 = r7.H     // Catch: java.lang.Throwable -> L1e7
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> L1e7
            goto L1f1
        L1e7:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L1f1:
            return
    }

    public void setCreateWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.L = r1
            return
    }

    public void setJSCommon(com.mbridge.msdk.video.js.a.j r1) {
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
