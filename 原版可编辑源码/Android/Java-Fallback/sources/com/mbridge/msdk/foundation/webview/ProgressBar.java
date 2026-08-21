package com.mbridge.msdk.foundation.webview;

public class ProgressBar extends android.view.View implements com.mbridge.msdk.foundation.webview.c {
    java.lang.Runnable a;
    private android.graphics.Rect b;
    private float c;
    private float d;
    private long e;
    private float f;
    private boolean g;
    private float h;
    private float i;
    private float j;
    private long k;
    private int l;
    private int m;
    private int n;
    private int o;
    private long p;
    private android.graphics.drawable.Drawable q;
    private android.graphics.drawable.Drawable r;
    private android.graphics.drawable.Drawable s;
    private android.graphics.drawable.Drawable t;
    private boolean u;
    private com.mbridge.msdk.foundation.webview.c.a v;
    private android.os.Handler w;
    private boolean x;
    private boolean y;


    public ProgressBar(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            android.graphics.Rect r3 = new android.graphics.Rect
            r3.<init>()
            r2.b = r3
            r3 = 1064514355(0x3f733333, float:0.95)
            r2.d = r3
            r0 = 25
            r2.p = r0
            r3 = 0
            r2.u = r3
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.w = r0
            com.mbridge.msdk.foundation.webview.ProgressBar$1 r0 = new com.mbridge.msdk.foundation.webview.ProgressBar$1
            r0.<init>(r2)
            r2.a = r0
            r2.y = r3
            r2.setWillNotDraw(r3)
            return
    }

    public ProgressBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.b = r2
            r2 = 1064514355(0x3f733333, float:0.95)
            r1.d = r2
            r2 = 25
            r1.p = r2
            r2 = 0
            r1.u = r2
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r3.<init>(r0)
            r1.w = r3
            com.mbridge.msdk.foundation.webview.ProgressBar$1 r3 = new com.mbridge.msdk.foundation.webview.ProgressBar$1
            r3.<init>(r1)
            r1.a = r3
            r1.y = r2
            r1.setWillNotDraw(r2)
            return
    }

    @Override
    public void draw(android.graphics.Canvas r11) {
            r10 = this;
            boolean r0 = r10.u
            r1 = 1
            if (r0 != 0) goto L7
            r10.u = r1
        L7:
            long r2 = java.lang.System.currentTimeMillis()
            boolean r0 = r10.y
            if (r0 == 0) goto L12
            r4 = 0
            goto L16
        L12:
            long r4 = r10.e
            long r4 = r2 - r4
        L16:
            float r0 = (float) r4
            r6 = 1148846080(0x447a0000, float:1000.0)
            float r0 = r0 / r6
            float r0 = java.lang.Math.abs(r0)
            r10.f = r0
            r10.e = r2
            long r2 = r10.k
            long r2 = r2 + r4
            r10.k = r2
            boolean r0 = r10.g
            r4 = 1045220557(0x3e4ccccd, float:0.2)
            r5 = 1028443341(0x3d4ccccd, float:0.05)
            r6 = 1065353216(0x3f800000, float:1.0)
            r7 = 1053609165(0x3ecccccd, float:0.4)
            if (r0 != 0) goto L57
            r8 = 2000(0x7d0, double:9.88E-321)
            int r0 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r0 >= 0) goto L55
            int r0 = r10.n
            if (r0 != r1) goto L45
            boolean r0 = r10.x
            if (r0 == 0) goto L5c
            goto L5b
        L45:
            int r0 = r10.m
            if (r0 != r1) goto L50
            boolean r0 = r10.x
            if (r0 == 0) goto L4e
            goto L5c
        L4e:
            r7 = r4
            goto L5c
        L50:
            boolean r0 = r10.x
            if (r0 == 0) goto L55
            goto L4e
        L55:
            r7 = r5
            goto L5c
        L57:
            boolean r0 = r10.x
            if (r0 == 0) goto L5c
        L5b:
            r7 = r6
        L5c:
            r10.j = r7
            float r0 = r10.i
            float r1 = r10.f
            float r7 = r7 * r1
            float r0 = r0 + r7
            r10.i = r0
            boolean r1 = r10.g
            if (r1 != 0) goto L72
            float r1 = r10.d
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L72
            r10.i = r1
        L72:
            android.graphics.Rect r0 = r10.b
            float r1 = r10.i
            float r2 = r10.c
            float r1 = r1 * r2
            int r1 = (int) r1
            r0.right = r1
            android.os.Handler r0 = r10.w
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            android.os.Handler r0 = r10.w
            java.lang.Runnable r1 = r10.a
            long r2 = r10.p
            r0.postDelayed(r1, r2)
            super.draw(r11)
            float r0 = r10.f
            boolean r1 = r10.g
            r2 = 0
            r3 = 0
            if (r1 == 0) goto Lcf
            float r1 = r10.h
            float r7 = r10.c
            r8 = 1056964608(0x3f000000, float:0.5)
            float r7 = r7 * r8
            float r1 = r1 / r7
            float r6 = r6 - r1
            r1 = 1132396544(0x437f0000, float:255.0)
            float r6 = r6 * r1
            int r1 = (int) r6
            if (r1 >= 0) goto La6
            r1 = r3
        La6:
            float r6 = r10.h
            float r7 = r10.c
            float r7 = r7 * r8
            int r6 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r6 <= 0) goto Lb2
            r10.setVisible(r3)
        Lb2:
            android.graphics.drawable.Drawable r6 = r10.r
            if (r6 == 0) goto Lb9
            r6.setAlpha(r1)
        Lb9:
            android.graphics.drawable.Drawable r6 = r10.s
            if (r6 == 0) goto Lc0
            r6.setAlpha(r1)
        Lc0:
            android.graphics.drawable.Drawable r6 = r10.q
            if (r6 == 0) goto Lc7
            r6.setAlpha(r1)
        Lc7:
            r11.save()
            float r1 = r10.h
            r11.translate(r1, r2)
        Lcf:
            android.graphics.drawable.Drawable r1 = r10.r
            if (r1 == 0) goto Lf6
            android.graphics.drawable.Drawable r1 = r10.q
            if (r1 == 0) goto Lf6
            android.graphics.Rect r1 = r10.b
            int r1 = r1.width()
            float r1 = (float) r1
            android.graphics.drawable.Drawable r6 = r10.q
            int r6 = r6.getIntrinsicWidth()
            float r6 = (float) r6
            float r6 = r6 * r5
            float r1 = r1 - r6
            int r1 = (int) r1
            android.graphics.drawable.Drawable r5 = r10.r
            int r6 = r5.getIntrinsicHeight()
            r5.setBounds(r3, r3, r1, r6)
            android.graphics.drawable.Drawable r1 = r10.r
            r1.draw(r11)
        Lf6:
            boolean r1 = r10.g
            if (r1 == 0) goto L11f
            android.graphics.drawable.Drawable r1 = r10.s
            if (r1 == 0) goto L11f
            android.graphics.drawable.Drawable r5 = r10.q
            if (r5 == 0) goto L11f
            int r1 = r1.getIntrinsicWidth()
            android.graphics.drawable.Drawable r5 = r10.s
            int r6 = r5.getIntrinsicHeight()
            r5.setBounds(r3, r3, r1, r6)
            r11.save()
            int r1 = -r1
            float r1 = (float) r1
            r11.translate(r1, r2)
            android.graphics.drawable.Drawable r1 = r10.s
            r1.draw(r11)
            r11.restore()
        L11f:
            android.graphics.drawable.Drawable r1 = r10.q
            if (r1 == 0) goto L13d
            r11.save()
            android.graphics.Rect r1 = r10.b
            int r1 = r1.width()
            int r3 = r10.getWidth()
            int r1 = r1 - r3
            float r1 = (float) r1
            r11.translate(r1, r2)
            android.graphics.drawable.Drawable r1 = r10.q
            r1.draw(r11)
            r11.restore()
        L13d:
            boolean r1 = r10.g
            if (r1 != 0) goto L187
            float r1 = r10.i
            float r3 = r10.d
            float r1 = r1 - r3
            float r1 = java.lang.Math.abs(r1)
            r3 = 925353388(0x3727c5ac, float:1.0E-5)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L187
            android.graphics.drawable.Drawable r1 = r10.t
            if (r1 == 0) goto L187
            int r3 = r10.l
            float r3 = (float) r3
            float r0 = r0 * r4
            float r4 = r10.c
            float r0 = r0 * r4
            float r3 = r3 + r0
            int r0 = (int) r3
            r10.l = r0
            int r1 = r1.getIntrinsicWidth()
            int r0 = r0 + r1
            android.graphics.Rect r1 = r10.b
            int r1 = r1.width()
            if (r0 < r1) goto L176
            android.graphics.drawable.Drawable r0 = r10.t
            int r0 = r0.getIntrinsicWidth()
            int r0 = -r0
            r10.l = r0
        L176:
            r11.save()
            int r0 = r10.l
            float r0 = (float) r0
            r11.translate(r0, r2)
            android.graphics.drawable.Drawable r0 = r10.t
            r0.draw(r11)
            r11.restore()
        L187:
            boolean r0 = r10.g
            if (r0 == 0) goto L18e
            r11.restore()
        L18e:
            return
    }

    @Override
    public android.graphics.Bitmap getDrawingCache(boolean r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public float getProgress() {
            r1 = this;
            float r0 = r1.i
            return r0
    }

    public void initResource(boolean r6) {
            r5 = this;
            if (r6 != 0) goto L13
            android.graphics.drawable.Drawable r6 = r5.t
            if (r6 != 0) goto L12
            android.graphics.drawable.Drawable r6 = r5.q
            if (r6 != 0) goto L12
            android.graphics.drawable.Drawable r6 = r5.r
            if (r6 != 0) goto L12
            android.graphics.drawable.Drawable r6 = r5.s
            if (r6 == 0) goto L13
        L12:
            return
        L13:
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r0 = r5.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r2 = "drawable"
            java.lang.String r3 = "mbridge_cm_highlight"
            int r0 = r0.getIdentifier(r3, r2, r1)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r0)
            r5.t = r6
            r0 = 0
            if (r6 == 0) goto L41
            int r1 = r6.getIntrinsicWidth()
            android.graphics.drawable.Drawable r3 = r5.t
            int r3 = r3.getIntrinsicHeight()
            r6.setBounds(r0, r0, r1, r3)
        L41:
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r1 = r5.getResources()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.d()
            java.lang.String r4 = "mbridge_cm_head"
            int r1 = r1.getIdentifier(r4, r2, r3)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r1)
            r5.q = r6
            if (r6 == 0) goto L6c
            int r1 = r6.getIntrinsicWidth()
            android.graphics.drawable.Drawable r3 = r5.q
            int r3 = r3.getIntrinsicHeight()
            r6.setBounds(r0, r0, r1, r3)
        L6c:
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r0 = r5.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r3 = "mbridge_cm_tail"
            int r0 = r0.getIdentifier(r3, r2, r1)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r0)
            r5.r = r6
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r0 = r5.getResources()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.d()
            java.lang.String r3 = "mbridge_cm_end_animation"
            int r0 = r0.getIdentifier(r3, r2, r1)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r0)
            r5.s = r6
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            int r1 = r0.getMeasuredWidth()
            float r1 = (float) r1
            r0.c = r1
            return
    }

    public void onThemeChange() {
            r1 = this;
            boolean r0 = r1.u
            if (r0 == 0) goto L8
            r0 = 1
            r1.initResource(r0)
        L8:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r6) {
            r5 = this;
            super.onWindowFocusChanged(r6)
            android.graphics.drawable.Drawable r6 = r5.t
            r0 = 0
            if (r6 == 0) goto L18
            int r1 = r6.getIntrinsicWidth()
            double r1 = (double) r1
            r3 = 4609434218613702656(0x3ff8000000000000, double:1.5)
            double r1 = r1 * r3
            int r1 = (int) r1
            int r2 = r5.getHeight()
            r6.setBounds(r0, r0, r1, r2)
        L18:
            android.graphics.drawable.Drawable r6 = r5.q
            if (r6 == 0) goto L27
            int r1 = r5.getWidth()
            int r2 = r5.getHeight()
            r6.setBounds(r0, r0, r1, r2)
        L27:
            return
    }

    public void setPaused(boolean r3) {
            r2 = this;
            r2.y = r3
            if (r3 != 0) goto La
            long r0 = java.lang.System.currentTimeMillis()
            r2.e = r0
        La:
            return
    }

    public void setProgress(float r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto Lb
            r2 = 1065353216(0x3f800000, float:1.0)
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 < 0) goto Lb
            r0.startEndAnimation()
        Lb:
            return
    }

    public void setProgressBarListener(com.mbridge.msdk.foundation.webview.c.a r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void setProgressState(int r5) {
            r4 = this;
            r0 = 5
            r1 = 0
            r3 = 1
            if (r5 == r0) goto L2b
            r0 = 6
            if (r5 == r0) goto L1f
            r0 = 7
            if (r5 == r0) goto L1b
            r0 = 8
            if (r5 == r0) goto L11
            goto L34
        L11:
            r4.o = r3
            int r5 = r4.n
            if (r5 != r3) goto L34
            r4.startEndAnimation()
            goto L34
        L1b:
            r4.startEndAnimation()
            goto L34
        L1f:
            r4.n = r3
            int r5 = r4.o
            if (r5 != r3) goto L28
            r4.startEndAnimation()
        L28:
            r4.k = r1
            goto L34
        L2b:
            r4.m = r3
            r5 = 0
            r4.n = r5
            r4.o = r5
            r4.k = r1
        L34:
            return
    }

    @Override
    public void setVisibility(int r2) {
            r1 = this;
            super.setVisibility(r2)
            if (r2 != 0) goto Le
            com.mbridge.msdk.foundation.webview.c$a r2 = r1.v
            if (r2 == 0) goto L16
            r0 = 1
            r2.a(r0)
            goto L16
        Le:
            com.mbridge.msdk.foundation.webview.c$a r2 = r1.v
            if (r2 == 0) goto L16
            r0 = 0
            r2.a(r0)
        L16:
            return
    }

    public void setVisible(boolean r3) {
            r2 = this;
            if (r3 == 0) goto L54
            r3 = 1
            r2.x = r3
            long r0 = java.lang.System.currentTimeMillis()
            r2.e = r0
            r3 = 0
            r2.f = r3
            r0 = 0
            r2.k = r0
            r0 = 0
            r2.g = r0
            r2.h = r3
            r2.i = r3
            int r3 = r2.getMeasuredWidth()
            float r3 = (float) r3
            r2.c = r3
            r2.y = r0
            r2.m = r0
            r2.n = r0
            r2.o = r0
            android.graphics.drawable.Drawable r3 = r2.t
            if (r3 == 0) goto L34
            int r3 = r3.getIntrinsicWidth()
            int r3 = -r3
            r2.l = r3
            goto L36
        L34:
            r2.l = r0
        L36:
            android.graphics.drawable.Drawable r3 = r2.r
            r1 = 255(0xff, float:3.57E-43)
            if (r3 == 0) goto L3f
            r3.setAlpha(r1)
        L3f:
            android.graphics.drawable.Drawable r3 = r2.s
            if (r3 == 0) goto L46
            r3.setAlpha(r1)
        L46:
            android.graphics.drawable.Drawable r3 = r2.q
            if (r3 == 0) goto L4d
            r3.setAlpha(r1)
        L4d:
            r2.setVisibility(r0)
            r2.invalidate()
            goto L58
        L54:
            r3 = 4
            r2.setVisibility(r3)
        L58:
            return
    }

    public void startEndAnimation() {
            r1 = this;
            boolean r0 = r1.g
            if (r0 != 0) goto La
            r0 = 1
            r1.g = r0
            r0 = 0
            r1.h = r0
        La:
            return
    }
}
