package com.tkay.expressad.foundation.webview;

public class ProgressBar extends android.view.View implements com.tkay.expressad.foundation.webview.a {
    private static final float C = 1200.0f;
    private static final long L = 25;
    private static final java.lang.String g = "ProgressBar";
    private static final boolean h = false;
    private static final float t = 0.05f;
    private static final float u = 0.2f;
    private static final float v = 0.4f;
    private static final float w = 1.0f;
    private static final long x = 2000;
    private static final float y = 0.2f;
    private int A;
    private int B;
    private long D;
    private android.graphics.drawable.Drawable E;
    private android.graphics.drawable.Drawable F;
    private android.graphics.drawable.Drawable G;
    private android.graphics.drawable.Drawable H;
    private boolean I;
    private com.tkay.expressad.foundation.webview.a.a J;
    private android.os.Handler K;
    private boolean M;
    private boolean N;
    java.lang.Runnable f;
    private android.graphics.Rect i;
    private float j;
    private float k;
    private long l;
    private float m;
    private boolean n;
    private float o;
    private float p;
    private float q;
    private long r;
    private int s;
    private int z;


    public ProgressBar(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            android.graphics.Rect r3 = new android.graphics.Rect
            r3.<init>()
            r2.i = r3
            r3 = 1064514355(0x3f733333, float:0.95)
            r2.k = r3
            r0 = 25
            r2.D = r0
            r3 = 0
            r2.I = r3
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.K = r0
            com.tkay.expressad.foundation.webview.ProgressBar$1 r0 = new com.tkay.expressad.foundation.webview.ProgressBar$1
            r0.<init>(r2)
            r2.f = r0
            r2.N = r3
            r2.setWillNotDraw(r3)
            return
    }

    public ProgressBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.i = r2
            r2 = 1064514355(0x3f733333, float:0.95)
            r1.k = r2
            r2 = 25
            r1.D = r2
            r2 = 0
            r1.I = r2
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r3.<init>(r0)
            r1.K = r3
            com.tkay.expressad.foundation.webview.ProgressBar$1 r3 = new com.tkay.expressad.foundation.webview.ProgressBar$1
            r3.<init>(r1)
            r1.f = r3
            r1.N = r2
            r1.setWillNotDraw(r2)
            return
    }

    private void a() {
            r1 = this;
            r0 = 0
            r1.setWillNotDraw(r0)
            return
    }

    private void a(android.graphics.Canvas r7, float r8) {
            r6 = this;
            boolean r0 = r6.n
            r1 = 0
            r2 = 0
            if (r0 == 0) goto L41
            r0 = 1065353216(0x3f800000, float:1.0)
            float r3 = r6.o
            float r4 = r6.j
            r5 = 1056964608(0x3f000000, float:0.5)
            float r4 = r4 * r5
            float r3 = r3 / r4
            float r0 = r0 - r3
            r3 = 1132396544(0x437f0000, float:255.0)
            float r0 = r0 * r3
            int r0 = (int) r0
            if (r0 >= 0) goto L18
            r0 = r2
        L18:
            float r3 = r6.o
            float r4 = r6.j
            float r4 = r4 * r5
            int r3 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r3 <= 0) goto L24
            r6.setVisible(r2)
        L24:
            android.graphics.drawable.Drawable r3 = r6.F
            if (r3 == 0) goto L2b
            r3.setAlpha(r0)
        L2b:
            android.graphics.drawable.Drawable r3 = r6.G
            if (r3 == 0) goto L32
            r3.setAlpha(r0)
        L32:
            android.graphics.drawable.Drawable r3 = r6.E
            if (r3 == 0) goto L39
            r3.setAlpha(r0)
        L39:
            r7.save()
            float r0 = r6.o
            r7.translate(r0, r1)
        L41:
            android.graphics.drawable.Drawable r0 = r6.F
            if (r0 == 0) goto L6b
            android.graphics.drawable.Drawable r0 = r6.E
            if (r0 == 0) goto L6b
            android.graphics.Rect r0 = r6.i
            int r0 = r0.width()
            float r0 = (float) r0
            android.graphics.drawable.Drawable r3 = r6.E
            int r3 = r3.getIntrinsicWidth()
            float r3 = (float) r3
            r4 = 1028443341(0x3d4ccccd, float:0.05)
            float r3 = r3 * r4
            float r0 = r0 - r3
            int r0 = (int) r0
            android.graphics.drawable.Drawable r3 = r6.F
            int r4 = r3.getIntrinsicHeight()
            r3.setBounds(r2, r2, r0, r4)
            android.graphics.drawable.Drawable r0 = r6.F
            r0.draw(r7)
        L6b:
            boolean r0 = r6.n
            if (r0 == 0) goto L94
            android.graphics.drawable.Drawable r0 = r6.G
            if (r0 == 0) goto L94
            android.graphics.drawable.Drawable r3 = r6.E
            if (r3 == 0) goto L94
            int r0 = r0.getIntrinsicWidth()
            android.graphics.drawable.Drawable r3 = r6.G
            int r4 = r3.getIntrinsicHeight()
            r3.setBounds(r2, r2, r0, r4)
            r7.save()
            int r0 = -r0
            float r0 = (float) r0
            r7.translate(r0, r1)
            android.graphics.drawable.Drawable r0 = r6.G
            r0.draw(r7)
            r7.restore()
        L94:
            android.graphics.drawable.Drawable r0 = r6.E
            if (r0 == 0) goto Lb2
            r7.save()
            android.graphics.Rect r0 = r6.i
            int r0 = r0.width()
            int r2 = r6.getWidth()
            int r0 = r0 - r2
            float r0 = (float) r0
            r7.translate(r0, r1)
            android.graphics.drawable.Drawable r0 = r6.E
            r0.draw(r7)
            r7.restore()
        Lb2:
            boolean r0 = r6.n
            if (r0 != 0) goto Lff
            float r0 = r6.p
            float r2 = r6.k
            float r0 = r0 - r2
            float r0 = java.lang.Math.abs(r0)
            r2 = 925353388(0x3727c5ac, float:1.0E-5)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lff
            android.graphics.drawable.Drawable r0 = r6.H
            if (r0 == 0) goto Lff
            int r2 = r6.s
            float r2 = (float) r2
            r3 = 1045220557(0x3e4ccccd, float:0.2)
            float r8 = r8 * r3
            float r3 = r6.j
            float r8 = r8 * r3
            float r2 = r2 + r8
            int r8 = (int) r2
            r6.s = r8
            int r0 = r0.getIntrinsicWidth()
            int r8 = r8 + r0
            android.graphics.Rect r0 = r6.i
            int r0 = r0.width()
            if (r8 < r0) goto Lee
            android.graphics.drawable.Drawable r8 = r6.H
            int r8 = r8.getIntrinsicWidth()
            int r8 = -r8
            r6.s = r8
        Lee:
            r7.save()
            int r8 = r6.s
            float r8 = (float) r8
            r7.translate(r8, r1)
            android.graphics.drawable.Drawable r8 = r6.H
            r8.draw(r7)
            r7.restore()
        Lff:
            boolean r8 = r6.n
            if (r8 == 0) goto L106
            r7.restore()
        L106:
            return
    }

    private float b() {
            r7 = this;
            boolean r0 = r7.n
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 1053609165(0x3ecccccd, float:0.4)
            if (r0 != 0) goto L32
            long r3 = r7.r
            r5 = 2000(0x7d0, double:9.88E-321)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            r3 = 1028443341(0x3d4ccccd, float:0.05)
            if (r0 >= 0) goto L31
            int r0 = r7.A
            r4 = 1
            if (r0 != r4) goto L1f
            boolean r0 = r7.M
            if (r0 == 0) goto L1e
            return r1
        L1e:
            return r2
        L1f:
            int r0 = r7.z
            r1 = 1045220557(0x3e4ccccd, float:0.2)
            if (r0 != r4) goto L2c
            boolean r0 = r7.M
            if (r0 == 0) goto L2b
            return r2
        L2b:
            return r1
        L2c:
            boolean r0 = r7.M
            if (r0 == 0) goto L31
            return r1
        L31:
            return r3
        L32:
            boolean r0 = r7.M
            if (r0 == 0) goto L37
            return r1
        L37:
            return r2
    }

    @Override
    public void draw(android.graphics.Canvas r11) {
            r10 = this;
            boolean r0 = r10.I
            r1 = 1
            if (r0 != 0) goto L7
            r10.I = r1
        L7:
            long r2 = java.lang.System.currentTimeMillis()
            boolean r0 = r10.N
            if (r0 == 0) goto L12
            r4 = 0
            goto L16
        L12:
            long r4 = r10.l
            long r4 = r2 - r4
        L16:
            float r0 = (float) r4
            r6 = 1148846080(0x447a0000, float:1000.0)
            float r0 = r0 / r6
            float r0 = java.lang.Math.abs(r0)
            r10.m = r0
            r10.l = r2
            long r2 = r10.r
            long r2 = r2 + r4
            r10.r = r2
            boolean r0 = r10.n
            r4 = 1053609165(0x3ecccccd, float:0.4)
            r5 = 1045220557(0x3e4ccccd, float:0.2)
            r6 = 1028443341(0x3d4ccccd, float:0.05)
            r7 = 1065353216(0x3f800000, float:1.0)
            if (r0 != 0) goto L56
            r8 = 2000(0x7d0, double:9.88E-321)
            int r0 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r0 >= 0) goto L54
            int r0 = r10.A
            if (r0 != r1) goto L45
            boolean r0 = r10.M
            if (r0 == 0) goto L5b
            goto L5a
        L45:
            int r0 = r10.z
            if (r0 != r1) goto L4e
            boolean r0 = r10.M
            if (r0 != 0) goto L5b
            goto L52
        L4e:
            boolean r0 = r10.M
            if (r0 == 0) goto L54
        L52:
            r4 = r5
            goto L5b
        L54:
            r4 = r6
            goto L5b
        L56:
            boolean r0 = r10.M
            if (r0 == 0) goto L5b
        L5a:
            r4 = r7
        L5b:
            r10.q = r4
            float r0 = r10.p
            float r1 = r10.m
            float r4 = r4 * r1
            float r0 = r0 + r4
            r10.p = r0
            boolean r1 = r10.n
            if (r1 != 0) goto L71
            float r1 = r10.k
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L71
            r10.p = r1
        L71:
            android.graphics.Rect r0 = r10.i
            float r1 = r10.p
            float r2 = r10.j
            float r1 = r1 * r2
            int r1 = (int) r1
            r0.right = r1
            android.os.Handler r0 = r10.K
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            android.os.Handler r0 = r10.K
            java.lang.Runnable r1 = r10.f
            long r2 = r10.D
            r0.postDelayed(r1, r2)
            super.draw(r11)
            float r0 = r10.m
            boolean r1 = r10.n
            r2 = 0
            r3 = 0
            if (r1 == 0) goto Lce
            float r1 = r10.o
            float r4 = r10.j
            r8 = 1056964608(0x3f000000, float:0.5)
            float r4 = r4 * r8
            float r1 = r1 / r4
            float r7 = r7 - r1
            r1 = 1132396544(0x437f0000, float:255.0)
            float r7 = r7 * r1
            int r1 = (int) r7
            if (r1 >= 0) goto La5
            r1 = r3
        La5:
            float r4 = r10.o
            float r7 = r10.j
            float r7 = r7 * r8
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 <= 0) goto Lb1
            r10.setVisible(r3)
        Lb1:
            android.graphics.drawable.Drawable r4 = r10.F
            if (r4 == 0) goto Lb8
            r4.setAlpha(r1)
        Lb8:
            android.graphics.drawable.Drawable r4 = r10.G
            if (r4 == 0) goto Lbf
            r4.setAlpha(r1)
        Lbf:
            android.graphics.drawable.Drawable r4 = r10.E
            if (r4 == 0) goto Lc6
            r4.setAlpha(r1)
        Lc6:
            r11.save()
            float r1 = r10.o
            r11.translate(r1, r2)
        Lce:
            android.graphics.drawable.Drawable r1 = r10.F
            if (r1 == 0) goto Lf5
            android.graphics.drawable.Drawable r1 = r10.E
            if (r1 == 0) goto Lf5
            android.graphics.Rect r1 = r10.i
            int r1 = r1.width()
            float r1 = (float) r1
            android.graphics.drawable.Drawable r4 = r10.E
            int r4 = r4.getIntrinsicWidth()
            float r4 = (float) r4
            float r4 = r4 * r6
            float r1 = r1 - r4
            int r1 = (int) r1
            android.graphics.drawable.Drawable r4 = r10.F
            int r6 = r4.getIntrinsicHeight()
            r4.setBounds(r3, r3, r1, r6)
            android.graphics.drawable.Drawable r1 = r10.F
            r1.draw(r11)
        Lf5:
            boolean r1 = r10.n
            if (r1 == 0) goto L11e
            android.graphics.drawable.Drawable r1 = r10.G
            if (r1 == 0) goto L11e
            android.graphics.drawable.Drawable r4 = r10.E
            if (r4 == 0) goto L11e
            int r1 = r1.getIntrinsicWidth()
            android.graphics.drawable.Drawable r4 = r10.G
            int r6 = r4.getIntrinsicHeight()
            r4.setBounds(r3, r3, r1, r6)
            r11.save()
            int r1 = -r1
            float r1 = (float) r1
            r11.translate(r1, r2)
            android.graphics.drawable.Drawable r1 = r10.G
            r1.draw(r11)
            r11.restore()
        L11e:
            android.graphics.drawable.Drawable r1 = r10.E
            if (r1 == 0) goto L13c
            r11.save()
            android.graphics.Rect r1 = r10.i
            int r1 = r1.width()
            int r3 = r10.getWidth()
            int r1 = r1 - r3
            float r1 = (float) r1
            r11.translate(r1, r2)
            android.graphics.drawable.Drawable r1 = r10.E
            r1.draw(r11)
            r11.restore()
        L13c:
            boolean r1 = r10.n
            if (r1 != 0) goto L186
            float r1 = r10.p
            float r3 = r10.k
            float r1 = r1 - r3
            float r1 = java.lang.Math.abs(r1)
            r3 = 925353388(0x3727c5ac, float:1.0E-5)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L186
            android.graphics.drawable.Drawable r1 = r10.H
            if (r1 == 0) goto L186
            int r3 = r10.s
            float r3 = (float) r3
            float r0 = r0 * r5
            float r4 = r10.j
            float r0 = r0 * r4
            float r3 = r3 + r0
            int r0 = (int) r3
            r10.s = r0
            int r1 = r1.getIntrinsicWidth()
            int r0 = r0 + r1
            android.graphics.Rect r1 = r10.i
            int r1 = r1.width()
            if (r0 < r1) goto L175
            android.graphics.drawable.Drawable r0 = r10.H
            int r0 = r0.getIntrinsicWidth()
            int r0 = -r0
            r10.s = r0
        L175:
            r11.save()
            int r0 = r10.s
            float r0 = (float) r0
            r11.translate(r0, r2)
            android.graphics.drawable.Drawable r0 = r10.H
            r0.draw(r11)
            r11.restore()
        L186:
            boolean r0 = r10.n
            if (r0 == 0) goto L18d
            r11.restore()
        L18d:
            return
    }

    @Override
    public android.graphics.Bitmap getDrawingCache(boolean r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public float getProgress() {
            r1 = this;
            float r0 = r1.p
            return r0
    }

    @Override
    public void initResource(boolean r6) {
            r5 = this;
            if (r6 != 0) goto L13
            android.graphics.drawable.Drawable r6 = r5.H
            if (r6 != 0) goto L12
            android.graphics.drawable.Drawable r6 = r5.E
            if (r6 != 0) goto L12
            android.graphics.drawable.Drawable r6 = r5.F
            if (r6 != 0) goto L12
            android.graphics.drawable.Drawable r6 = r5.G
            if (r6 == 0) goto L13
        L12:
            return
        L13:
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r0 = r5.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "drawable"
            java.lang.String r3 = "tkay_cm_highlight"
            int r0 = r0.getIdentifier(r3, r2, r1)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r0)
            r5.H = r6
            r0 = 0
            if (r6 == 0) goto L41
            int r1 = r6.getIntrinsicWidth()
            android.graphics.drawable.Drawable r3 = r5.H
            int r3 = r3.getIntrinsicHeight()
            r6.setBounds(r0, r0, r1, r3)
        L41:
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r1 = r5.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r4 = "tkay_cm_head"
            int r1 = r1.getIdentifier(r4, r2, r3)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r1)
            r5.E = r6
            if (r6 == 0) goto L6c
            int r1 = r6.getIntrinsicWidth()
            android.graphics.drawable.Drawable r3 = r5.E
            int r3 = r3.getIntrinsicHeight()
            r6.setBounds(r0, r0, r1, r3)
        L6c:
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r0 = r5.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r3 = "tkay_cm_tail"
            int r0 = r0.getIdentifier(r3, r2, r1)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r0)
            r5.F = r6
            android.content.res.Resources r6 = r5.getResources()
            android.content.res.Resources r0 = r5.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r3 = "tkay_cm_end_animation"
            int r0 = r0.getIdentifier(r3, r2, r1)
            android.graphics.drawable.Drawable r6 = r6.getDrawable(r0)
            r5.G = r6
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
            r0.j = r1
            return
    }

    @Override
    public void onThemeChange() {
            r1 = this;
            boolean r0 = r1.I
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
            android.graphics.drawable.Drawable r6 = r5.H
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
            android.graphics.drawable.Drawable r6 = r5.E
            if (r6 == 0) goto L27
            int r1 = r5.getWidth()
            int r2 = r5.getHeight()
            r6.setBounds(r0, r0, r1, r2)
        L27:
            return
    }

    @Override
    public void setPaused(boolean r3) {
            r2 = this;
            r2.N = r3
            if (r3 != 0) goto La
            long r0 = java.lang.System.currentTimeMillis()
            r2.l = r0
        La:
            return
    }

    @Override
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

    @Override
    public void setProgressBarListener(com.tkay.expressad.foundation.webview.a.a r1) {
            r0 = this;
            r0.J = r1
            return
    }

    @Override
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
            goto L1a
        L11:
            r4.B = r3
            int r5 = r4.A
            if (r5 != r3) goto L1a
            r4.startEndAnimation()
        L1a:
            return
        L1b:
            r4.startEndAnimation()
            return
        L1f:
            r4.A = r3
            int r5 = r4.B
            if (r5 != r3) goto L28
            r4.startEndAnimation()
        L28:
            r4.r = r1
            return
        L2b:
            r4.z = r3
            r5 = 0
            r4.A = r5
            r4.B = r5
            r4.r = r1
            return
    }

    @Override
    public void setVisibility(int r1) {
            r0 = this;
            super.setVisibility(r1)
            return
    }

    @Override
    public void setVisible(boolean r3) {
            r2 = this;
            if (r3 == 0) goto L54
            r3 = 1
            r2.M = r3
            long r0 = java.lang.System.currentTimeMillis()
            r2.l = r0
            r3 = 0
            r2.m = r3
            r0 = 0
            r2.r = r0
            r0 = 0
            r2.n = r0
            r2.o = r3
            r2.p = r3
            int r3 = r2.getMeasuredWidth()
            float r3 = (float) r3
            r2.j = r3
            r2.N = r0
            r2.z = r0
            r2.A = r0
            r2.B = r0
            android.graphics.drawable.Drawable r3 = r2.H
            if (r3 == 0) goto L34
            int r3 = r3.getIntrinsicWidth()
            int r3 = -r3
            r2.s = r3
            goto L36
        L34:
            r2.s = r0
        L36:
            android.graphics.drawable.Drawable r3 = r2.F
            r1 = 255(0xff, float:3.57E-43)
            if (r3 == 0) goto L3f
            r3.setAlpha(r1)
        L3f:
            android.graphics.drawable.Drawable r3 = r2.G
            if (r3 == 0) goto L46
            r3.setAlpha(r1)
        L46:
            android.graphics.drawable.Drawable r3 = r2.E
            if (r3 == 0) goto L4d
            r3.setAlpha(r1)
        L4d:
            r2.setVisibility(r0)
            r2.invalidate()
            return
        L54:
            r3 = 4
            r2.setVisibility(r3)
            return
    }

    @Override
    public void startEndAnimation() {
            r1 = this;
            boolean r0 = r1.n
            if (r0 != 0) goto La
            r0 = 1
            r1.n = r0
            r0 = 0
            r1.o = r0
        La:
            return
    }
}
