package com.sigmob.sdk.base.views;

public class i extends com.sigmob.sdk.base.views.e {
    private float a;
    private int b;
    private int c;
    private int d;
    private int e;
    private android.graphics.Paint f;
    private android.graphics.Paint g;

    public i(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public i(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public i(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1)
            r2 = 1109393408(0x42200000, float:40.0)
            r0.a = r2
            android.webkit.WebSettings r2 = r0.getSettings()
            r0.a(r2)
            r0.a(r1)
            return
    }

    private void a(android.content.Context r3) {
            r2 = this;
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r2.f = r3
            r0 = -1
            r3.setColor(r0)
            android.graphics.Paint r3 = r2.f
            r0 = 1
            r3.setAntiAlias(r0)
            android.graphics.Paint r3 = r2.f
            android.graphics.PorterDuffXfermode r0 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.DST_OUT
            r0.<init>(r1)
            r3.setXfermode(r0)
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r2.g = r3
            r0 = 0
            r3.setXfermode(r0)
            return
    }

    private void a(android.graphics.Canvas r10) {
            r9 = this;
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            int r1 = r9.d
            float r1 = (float) r1
            float r2 = r9.a
            r0.moveTo(r1, r2)
            int r1 = r9.d
            float r1 = (float) r1
            int r2 = r9.e
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            float r1 = r9.a
            int r2 = r9.e
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            android.graphics.RectF r1 = new android.graphics.RectF
            int r2 = r9.d
            float r3 = (float) r2
            int r4 = r9.e
            float r5 = (float) r4
            float r2 = (float) r2
            float r6 = r9.a
            r7 = 1073741824(0x40000000, float:2.0)
            float r8 = r6 * r7
            float r2 = r2 + r8
            float r4 = (float) r4
            float r6 = r6 * r7
            float r4 = r4 + r6
            r1.<init>(r3, r5, r2, r4)
            r2 = -1028390912(0xffffffffc2b40000, float:-90.0)
            r0.arcTo(r1, r2, r2)
            r0.close()
            android.graphics.Paint r1 = r9.f
            r10.drawPath(r0, r1)
            return
    }

    private void a(android.webkit.WebSettings r6) {
            r5 = this;
            r0 = 2
            r1 = 1
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r2 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> L1f
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L1f
            java.lang.String r4 = "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Exception -> L1f
            r3.<init>(r4)     // Catch: java.lang.Exception -> L1f
            r2.<init>(r6, r3)     // Catch: java.lang.Exception -> L1f
            java.lang.Class r3 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L1f
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L1f
            r2.addParam(r3, r4)     // Catch: java.lang.Exception -> L1f
            r2.execute()     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.printStackTrace()
        L23:
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r2 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> L40
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L40
            java.lang.String r4 = "c2V0QWxsb3dGaWxlQWNjZXNz"
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Exception -> L40
            r3.<init>(r4)     // Catch: java.lang.Exception -> L40
            r2.<init>(r6, r3)     // Catch: java.lang.Exception -> L40
            java.lang.Class r3 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L40
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L40
            r2.addParam(r3, r4)     // Catch: java.lang.Exception -> L40
            r2.execute()     // Catch: java.lang.Exception -> L40
            goto L44
        L40:
            r2 = move-exception
            r2.printStackTrace()
        L44:
            r6.setDomStorageEnabled(r1)
            r6.setUseWideViewPort(r1)
            r6.setBuiltInZoomControls(r1)
            r6.setLoadWithOverviewMode(r1)
            r6.setSupportZoom(r1)
            java.lang.String r2 = "UTF-8"
            r6.setDefaultTextEncodingName(r2)
            r6.setCacheMode(r0)
            android.webkit.WebSettings$PluginState r0 = android.webkit.WebSettings.PluginState.ON
            r6.setPluginState(r0)
            r0 = 0
            r6.setBlockNetworkImage(r0)
            r6.setBlockNetworkLoads(r0)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 17
            if (r2 < r3) goto L70
            r6.setMediaPlaybackRequiresUserGesture(r0)
        L70:
            r6.setLoadsImagesAutomatically(r1)
            r6.setAllowContentAccess(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 >= r2) goto L7f
            r6.setAllowUniversalAccessFromFileURLs(r0)
        L7f:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 < r2) goto L88
            r6.setSafeBrowsingEnabled(r0)
        L88:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L91
            r6.setMixedContentMode(r0)
        L91:
            return
    }

    private void b(android.graphics.Canvas r10) {
            r9 = this;
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            int r1 = r9.d
            int r2 = r9.b
            int r1 = r1 + r2
            float r1 = (float) r1
            int r2 = r9.e
            float r2 = (float) r2
            float r3 = r9.a
            float r2 = r2 + r3
            r0.moveTo(r1, r2)
            int r1 = r9.d
            int r2 = r9.b
            int r1 = r1 + r2
            float r1 = (float) r1
            int r2 = r9.e
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            int r1 = r9.d
            int r2 = r9.b
            int r1 = r1 + r2
            float r1 = (float) r1
            float r2 = r9.a
            float r1 = r1 - r2
            int r2 = r9.e
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            android.graphics.RectF r1 = new android.graphics.RectF
            int r2 = r9.d
            int r3 = r9.b
            int r4 = r2 + r3
            float r4 = (float) r4
            float r5 = r9.a
            r6 = 1073741824(0x40000000, float:2.0)
            float r7 = r5 * r6
            float r4 = r4 - r7
            int r7 = r9.e
            float r8 = (float) r7
            int r2 = r2 + r3
            float r2 = (float) r2
            float r3 = (float) r7
            float r5 = r5 * r6
            float r3 = r3 + r5
            r1.<init>(r4, r8, r2, r3)
            r2 = -1028390912(0xffffffffc2b40000, float:-90.0)
            r3 = 1119092736(0x42b40000, float:90.0)
            r0.arcTo(r1, r2, r3)
            r0.close()
            android.graphics.Paint r1 = r9.f
            r10.drawPath(r0, r1)
            return
    }

    private void c(android.graphics.Canvas r11) {
            r10 = this;
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            int r1 = r10.d
            float r1 = (float) r1
            int r2 = r10.e
            int r3 = r10.c
            int r2 = r2 + r3
            float r2 = (float) r2
            float r3 = r10.a
            float r2 = r2 - r3
            r0.moveTo(r1, r2)
            int r1 = r10.d
            float r1 = (float) r1
            int r2 = r10.e
            int r3 = r10.c
            int r2 = r2 + r3
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            int r1 = r10.d
            float r1 = (float) r1
            float r2 = r10.a
            float r1 = r1 + r2
            int r2 = r10.e
            int r3 = r10.c
            int r2 = r2 + r3
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            android.graphics.RectF r1 = new android.graphics.RectF
            int r2 = r10.d
            float r3 = (float) r2
            int r4 = r10.e
            int r5 = r10.c
            int r6 = r4 + r5
            float r6 = (float) r6
            float r7 = r10.a
            r8 = 1073741824(0x40000000, float:2.0)
            float r9 = r7 * r8
            float r6 = r6 - r9
            float r2 = (float) r2
            float r7 = r7 * r8
            float r2 = r2 + r7
            int r4 = r4 + r5
            float r4 = (float) r4
            r1.<init>(r3, r6, r2, r4)
            r2 = 1119092736(0x42b40000, float:90.0)
            r0.arcTo(r1, r2, r2)
            r0.close()
            android.graphics.Paint r1 = r10.f
            r11.drawPath(r0, r1)
            return
    }

    private void d(android.graphics.Canvas r11) {
            r10 = this;
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            int r1 = r10.d
            int r2 = r10.b
            int r1 = r1 + r2
            float r1 = (float) r1
            float r2 = r10.a
            float r1 = r1 - r2
            int r2 = r10.e
            int r3 = r10.c
            int r2 = r2 + r3
            float r2 = (float) r2
            r0.moveTo(r1, r2)
            int r1 = r10.d
            int r2 = r10.b
            int r1 = r1 + r2
            float r1 = (float) r1
            int r2 = r10.e
            int r3 = r10.c
            int r2 = r2 + r3
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            int r1 = r10.d
            int r2 = r10.b
            int r1 = r1 + r2
            float r1 = (float) r1
            int r2 = r10.e
            int r3 = r10.c
            int r2 = r2 + r3
            float r2 = (float) r2
            float r3 = r10.a
            float r2 = r2 - r3
            r0.lineTo(r1, r2)
            android.graphics.RectF r1 = new android.graphics.RectF
            int r2 = r10.d
            int r3 = r10.b
            int r4 = r2 + r3
            float r4 = (float) r4
            float r5 = r10.a
            r6 = 1073741824(0x40000000, float:2.0)
            float r7 = r5 * r6
            float r4 = r4 - r7
            int r7 = r10.e
            int r8 = r10.c
            int r9 = r7 + r8
            float r9 = (float) r9
            float r5 = r5 * r6
            float r9 = r9 - r5
            int r2 = r2 + r3
            float r2 = (float) r2
            int r7 = r7 + r8
            float r3 = (float) r7
            r1.<init>(r4, r9, r2, r3)
            r2 = 0
            r3 = 1119092736(0x42b40000, float:90.0)
            r0.arcTo(r1, r2, r3)
            r0.close()
            android.graphics.Paint r1 = r10.f
            r11.drawPath(r0, r1)
            return
    }

    @Override
    public void a(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L7
            return
        L7:
            if (r3 == 0) goto L10
            android.webkit.WebSettings r3 = r2.getSettings()
            android.webkit.WebSettings$PluginState r0 = android.webkit.WebSettings.PluginState.ON
            goto L16
        L10:
            android.webkit.WebSettings r3 = r2.getSettings()
            android.webkit.WebSettings$PluginState r0 = android.webkit.WebSettings.PluginState.OFF
        L16:
            r3.setPluginState(r0)
            return
    }

    @Override
    public void draw(android.graphics.Canvas r4) {
            r3 = this;
            int r0 = r3.getScrollX()
            r3.d = r0
            int r0 = r3.getScrollY()
            r3.e = r0
            int r1 = r3.d
            int r2 = r3.b
            int r1 = r1 + r2
            int r2 = r3.c
            int r0 = r0 + r2
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r1, r0, r2)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            super.draw(r1)
            r3.a(r1)
            r3.b(r1)
            android.graphics.Paint r1 = r3.g
            r2 = 0
            r4.drawBitmap(r0, r2, r2, r1)
            r0.recycle()
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            int r1 = r0.getMeasuredWidth()
            r0.b = r1
            int r1 = r0.getMeasuredHeight()
            r0.c = r1
            return
    }

    public void setRadius(float r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
