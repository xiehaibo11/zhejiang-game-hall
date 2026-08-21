package com.sigmob.sdk.base.blurkit;

public class c extends android.widget.FrameLayout {
    public static final float a = 0.12f;
    public static final int b = 12;
    public static final int c = 24;
    public static final float d = 0.0f;
    public static final float e = Float.NaN;
    private float f;
    private int g;
    private int h;
    private float i;
    private float j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private com.sigmob.sdk.base.blurkit.d o;
    private java.lang.ref.WeakReference<android.view.View> p;
    private android.graphics.Point q;
    private android.graphics.Bitmap r;
    private android.view.Choreographer.FrameCallback s;


    public c(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            r2 = 1039516303(0x3df5c28f, float:0.12)
            r1.f = r2
            r2 = 12
            r1.g = r2
            r2 = 24
            r1.h = r2
            r2 = 0
            r1.i = r2
            r2 = 2143289344(0x7fc00000, float:NaN)
            r1.j = r2
            com.sigmob.sdk.base.blurkit.c$1 r2 = new com.sigmob.sdk.base.blurkit.c$1
            r2.<init>(r1)
            r1.s = r2
            return
    }

    public c(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r2 = 1039516303(0x3df5c28f, float:0.12)
            r0.f = r2
            r2 = 12
            r0.g = r2
            r2 = 24
            r0.h = r2
            r2 = 0
            r0.i = r2
            r2 = 2143289344(0x7fc00000, float:NaN)
            r0.j = r2
            com.sigmob.sdk.base.blurkit.c$1 r2 = new com.sigmob.sdk.base.blurkit.c$1
            r2.<init>(r0)
            r0.s = r2
            boolean r2 = r0.isInEditMode()
            if (r2 != 0) goto L27
            com.sigmob.sdk.base.blurkit.a.a(r1)
        L27:
            com.sigmob.sdk.base.blurkit.d r1 = new com.sigmob.sdk.base.blurkit.d
            android.content.Context r2 = r0.getContext()
            r1.<init>(r2)
            r0.o = r1
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_XY
            r1.setScaleType(r2)
            com.sigmob.sdk.base.blurkit.d r1 = r0.o
            r0.addView(r1)
            float r1 = r0.i
            r0.setCornerRadius(r1)
            return
    }

    static int a(com.sigmob.sdk.base.blurkit.c r0) {
            int r0 = r0.h
            return r0
    }

    private android.graphics.Bitmap a(android.view.View r5, android.graphics.Rect r6, float r7) throws com.sigmob.sdk.base.blurkit.b, java.lang.NullPointerException {
            r4 = this;
            android.view.View r5 = r5.getRootView()
            int r0 = r6.width()
            float r0 = (float) r0
            float r0 = r0 * r7
            int r0 = (int) r0
            int r1 = r6.height()
            float r1 = (float) r1
            float r1 = r1 * r7
            int r1 = (int) r1
            int r2 = r5.getWidth()
            if (r2 <= 0) goto L49
            int r2 = r5.getHeight()
            if (r2 <= 0) goto L49
            if (r0 <= 0) goto L49
            if (r1 <= 0) goto L49
            int r2 = r6.left
            int r2 = -r2
            float r2 = (float) r2
            float r2 = r2 * r7
            int r6 = r6.top
            int r6 = -r6
            float r6 = (float) r6
            float r6 = r6 * r7
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r3)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            android.graphics.Matrix r3 = new android.graphics.Matrix
            r3.<init>()
            r3.preScale(r7, r7)
            r3.postTranslate(r2, r6)
            r1.setMatrix(r3)
            r5.draw(r1)
            return r0
        L49:
            com.sigmob.sdk.base.blurkit.b r5 = new com.sigmob.sdk.base.blurkit.b
            java.lang.String r6 = "No screen available (width or height = 0)"
            r5.<init>(r6)
            throw r5
    }

    private android.graphics.PointF a(android.view.View r3) {
            r2 = this;
            android.view.ViewParent r0 = r2.getParent()
            if (r0 != 0) goto Lc
            android.graphics.PointF r3 = new android.graphics.PointF
            r3.<init>()
            return r3
        Lc:
            android.view.ViewParent r0 = r3.getParent()     // Catch: java.lang.Exception -> L2a
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L2a
            if (r0 != 0) goto L1a
            android.graphics.PointF r3 = new android.graphics.PointF
            r3.<init>()
            return r3
        L1a:
            android.graphics.PointF r0 = r2.a(r0)
            float r1 = r3.getX()
            float r3 = r3.getY()
            r0.offset(r1, r3)
            return r0
        L2a:
            android.graphics.PointF r3 = new android.graphics.PointF
            r3.<init>()
            return r3
    }

    private android.graphics.Bitmap g() {
            r14 = this;
            android.content.Context r0 = r14.getContext()
            r1 = 0
            if (r0 == 0) goto L12a
            boolean r0 = r14.isInEditMode()
            if (r0 == 0) goto Lf
            goto L12a
        Lf:
            java.lang.ref.WeakReference<android.view.View> r0 = r14.p
            if (r0 == 0) goto L19
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L2b
        L19:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            android.view.View r2 = r14.getActivityView()
            r0.<init>(r2)
            r14.p = r0
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L2b
            return r1
        L2b:
            boolean r0 = r14.m
            if (r0 == 0) goto L3c
            android.graphics.Point r0 = r14.q
            if (r0 != 0) goto L39
            android.graphics.Point r0 = r14.getPositionInScreen()
            r14.q = r0
        L39:
            android.graphics.Point r0 = r14.q
            goto L40
        L3c:
            android.graphics.Point r0 = r14.getPositionInScreen()
        L40:
            r2 = 0
            super.setAlpha(r2)
            java.lang.ref.WeakReference<android.view.View> r2 = r14.p
            java.lang.Object r2 = r2.get()
            android.view.View r2 = (android.view.View) r2
            int r2 = r2.getWidth()
            java.lang.ref.WeakReference<android.view.View> r3 = r14.p
            java.lang.Object r3 = r3.get()
            android.view.View r3 = (android.view.View) r3
            int r3 = r3.getHeight()
            int r4 = r14.getWidth()
            float r4 = (float) r4
            float r5 = r14.f
            float r4 = r4 * r5
            int r4 = (int) r4
            int r5 = r14.getHeight()
            float r5 = (float) r5
            float r6 = r14.f
            float r5 = r5 * r6
            int r5 = (int) r5
            int r6 = r0.x
            float r6 = (float) r6
            float r7 = r14.f
            float r6 = r6 * r7
            int r6 = (int) r6
            int r7 = r0.y
            float r7 = (float) r7
            float r8 = r14.f
            float r7 = r7 * r8
            int r7 = (int) r7
            int r8 = r14.getWidth()
            int r8 = r8 / 8
            int r9 = r14.getHeight()
            int r9 = r9 / 8
            int r10 = -r8
            int r11 = r6 + r10
            r12 = 0
            if (r11 < 0) goto L8f
            goto L90
        L8f:
            r10 = r12
        L90:
            int r11 = r6 + r2
            int r11 = r11 - r8
            if (r11 > r2) goto L96
            goto L99
        L96:
            int r2 = r2 + r2
            int r8 = r2 - r6
        L99:
            int r2 = -r9
            int r11 = r7 + r2
            if (r11 < 0) goto L9f
            goto La0
        L9f:
            r2 = r12
        La0:
            int r11 = r14.getHeight()
            int r11 = r11 + r7
            int r11 = r11 + r9
            if (r11 > r3) goto La9
            goto Laa
        La9:
            r9 = r12
        Laa:
            boolean r3 = r14.n
            if (r3 == 0) goto Lc2
            android.graphics.Bitmap r0 = r14.r
            if (r0 != 0) goto Lb5
            r14.c()
        Lb5:
            if (r4 == 0) goto Lc1
            if (r5 != 0) goto Lba
            goto Lc1
        Lba:
            android.graphics.Bitmap r0 = r14.r
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r6, r7, r4, r5)
            goto Lf5
        Lc1:
            return r1
        Lc2:
            java.lang.ref.WeakReference<android.view.View> r3 = r14.p     // Catch: java.lang.Throwable -> L12a
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L12a
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L12a
            android.graphics.Rect r6 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L12a
            int r7 = r0.x     // Catch: java.lang.Throwable -> L12a
            int r7 = r7 + r10
            int r11 = r0.y     // Catch: java.lang.Throwable -> L12a
            int r11 = r11 + r2
            int r12 = r0.x     // Catch: java.lang.Throwable -> L12a
            int r13 = r14.getWidth()     // Catch: java.lang.Throwable -> L12a
            int r12 = r12 + r13
            int r13 = java.lang.Math.abs(r10)     // Catch: java.lang.Throwable -> L12a
            int r12 = r12 + r13
            int r12 = r12 + r8
            int r0 = r0.y     // Catch: java.lang.Throwable -> L12a
            int r8 = r14.getHeight()     // Catch: java.lang.Throwable -> L12a
            int r0 = r0 + r8
            int r8 = java.lang.Math.abs(r2)     // Catch: java.lang.Throwable -> L12a
            int r0 = r0 + r8
            int r0 = r0 + r9
            r6.<init>(r7, r11, r12, r0)     // Catch: java.lang.Throwable -> L12a
            float r0 = r14.f     // Catch: java.lang.Throwable -> L12a
            android.graphics.Bitmap r0 = r14.a(r3, r6, r0)     // Catch: java.lang.Throwable -> L12a
        Lf5:
            boolean r1 = r14.n
            if (r1 != 0) goto L119
            com.sigmob.sdk.base.blurkit.a r1 = com.sigmob.sdk.base.blurkit.a.a()
            int r3 = r14.g
            android.graphics.Bitmap r0 = r1.a(r0, r3)
            int r1 = java.lang.Math.abs(r10)
            float r1 = (float) r1
            float r3 = r14.f
            float r1 = r1 * r3
            int r1 = (int) r1
            int r2 = java.lang.Math.abs(r2)
            float r2 = (float) r2
            float r3 = r14.f
            float r2 = r2 * r3
            int r2 = (int) r2
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2, r4, r5)
        L119:
            float r1 = r14.j
            boolean r1 = java.lang.Float.isNaN(r1)
            if (r1 == 0) goto L124
            r1 = 1065353216(0x3f800000, float:1.0)
            goto L126
        L124:
            float r1 = r14.j
        L126:
            super.setAlpha(r1)
            return r0
        L12a:
            return r1
    }

    private android.view.View getActivityView() {
            r2 = this;
            android.content.Context r0 = r2.getContext()     // Catch: java.lang.ClassCastException -> L16
            android.app.Activity r0 = (android.app.Activity) r0     // Catch: java.lang.ClassCastException -> L16
            android.view.Window r0 = r0.getWindow()
            android.view.View r0 = r0.getDecorView()
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            return r0
        L16:
            r0 = 0
            return r0
    }

    private android.graphics.Point getPositionInScreen() {
            r3 = this;
            android.graphics.PointF r0 = r3.a(r3)
            android.graphics.Point r1 = new android.graphics.Point
            float r2 = r0.x
            int r2 = (int) r2
            float r0 = r0.y
            int r0 = (int) r0
            r1.<init>(r2, r0)
            return r1
    }

    public void a() {
            r2 = this;
            boolean r0 = r2.k
            if (r0 == 0) goto L5
            return
        L5:
            int r0 = r2.h
            if (r0 <= 0) goto L15
            r0 = 1
            r2.k = r0
            android.view.Choreographer r0 = android.view.Choreographer.getInstance()
            android.view.Choreographer$FrameCallback r1 = r2.s
            r0.postFrameCallback(r1)
        L15:
            return
    }

    public void b() {
            r2 = this;
            boolean r0 = r2.k
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r2.k = r0
            android.view.Choreographer r0 = android.view.Choreographer.getInstance()
            android.view.Choreographer$FrameCallback r1 = r2.s
            r0.removeFrameCallback(r1)
            return
    }

    public void c() {
            r5 = this;
            r0 = 1
            r5.n = r0
            java.lang.ref.WeakReference<android.view.View> r0 = r5.p
            if (r0 == 0) goto L54
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L54
            java.lang.ref.WeakReference<android.view.View> r0 = r5.p
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            android.view.View r0 = r0.getRootView()
            r1 = 0
            super.setAlpha(r1)     // Catch: java.lang.Exception -> L54
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Exception -> L54
            int r2 = r0.getWidth()     // Catch: java.lang.Exception -> L54
            int r3 = r0.getHeight()     // Catch: java.lang.Exception -> L54
            r4 = 0
            r1.<init>(r4, r4, r2, r3)     // Catch: java.lang.Exception -> L54
            float r2 = r5.f     // Catch: java.lang.Exception -> L54
            android.graphics.Bitmap r0 = r5.a(r0, r1, r2)     // Catch: java.lang.Exception -> L54
            r5.r = r0     // Catch: java.lang.Exception -> L54
            float r0 = r5.j     // Catch: java.lang.Exception -> L54
            boolean r0 = java.lang.Float.isNaN(r0)     // Catch: java.lang.Exception -> L54
            if (r0 == 0) goto L41
            r0 = 1065353216(0x3f800000, float:1.0)
            super.setAlpha(r0)     // Catch: java.lang.Exception -> L54
            goto L46
        L41:
            float r0 = r5.j     // Catch: java.lang.Exception -> L54
            super.setAlpha(r0)     // Catch: java.lang.Exception -> L54
        L46:
            com.sigmob.sdk.base.blurkit.a r0 = com.sigmob.sdk.base.blurkit.a.a()     // Catch: java.lang.Exception -> L54
            android.graphics.Bitmap r1 = r5.r     // Catch: java.lang.Exception -> L54
            int r2 = r5.g     // Catch: java.lang.Exception -> L54
            android.graphics.Bitmap r0 = r0.a(r1, r2)     // Catch: java.lang.Exception -> L54
            r5.r = r0     // Catch: java.lang.Exception -> L54
        L54:
            return
    }

    public void d() {
            r1 = this;
            r0 = 0
            r1.n = r0
            r0 = 0
            r1.r = r0
            return
    }

    public void e() {
            r1 = this;
            r0 = 1
            r1.m = r0
            android.graphics.Point r0 = r1.getPositionInScreen()
            r1.q = r0
            return
    }

    public void f() {
            r1 = this;
            r0 = 0
            r1.m = r0
            r0 = 0
            r1.q = r0
            return
    }

    @Override
    public float getAlpha() {
            r1 = this;
            float r0 = r1.j
            return r0
    }

    public int getBlurRadius() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public float getCornerRadius() {
            r1 = this;
            float r0 = r1.i
            return r0
    }

    public float getDownscaleFactor() {
            r1 = this;
            float r0 = r1.f
            return r0
    }

    public int getFPS() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public boolean getPositionLocked() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public boolean getViewLocked() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }

    @Override
    public void invalidate() {
            r2 = this;
            super.invalidate()
            android.graphics.Bitmap r0 = r2.g()
            if (r0 == 0) goto Le
            com.sigmob.sdk.base.blurkit.d r1 = r2.o
            r1.setImageBitmap(r0)
        Le:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.l = r0
            r1.a()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            r1.l = r0
            r1.b()
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            r0.invalidate()
            return
    }

    @Override
    public void setAlpha(float r2) {
            r1 = this;
            r1.j = r2
            boolean r0 = r1.n
            if (r0 != 0) goto L9
            super.setAlpha(r2)
        L9:
            return
    }

    public void setBlurRadius(int r1) {
            r0 = this;
            r0.g = r1
            r1 = 0
            r0.r = r1
            r0.invalidate()
            return
    }

    public void setCornerRadius(float r2) {
            r1 = this;
            r1.i = r2
            com.sigmob.sdk.base.blurkit.d r0 = r1.o
            if (r0 == 0) goto L9
            r0.setCornerRadius(r2)
        L9:
            r1.invalidate()
            return
    }

    public void setDownscaleFactor(float r1) {
            r0 = this;
            r0.f = r1
            r1 = 0
            r0.r = r1
            r0.invalidate()
            return
    }

    public void setFPS(int r2) {
            r1 = this;
            boolean r0 = r1.k
            if (r0 == 0) goto L7
            r1.b()
        L7:
            r1.h = r2
            boolean r2 = r1.l
            if (r2 == 0) goto L10
            r1.a()
        L10:
            return
    }
}
