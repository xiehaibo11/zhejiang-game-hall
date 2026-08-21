package com.tkay.expressad.video.dynview.widget;

public class ATRotationView extends android.widget.FrameLayout {
    java.lang.Runnable a;
    private android.graphics.Camera b;
    private android.graphics.Matrix c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private int k;
    private float l;
    private float m;
    private boolean n;
    private boolean o;
    private boolean p;


    public ATRotationView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 40
            r1.f = r2
            r2 = 20
            r1.g = r2
            r2 = 0
            r1.h = r2
            r1.i = r2
            r1.k = r2
            r0 = 1056964608(0x3f000000, float:0.5)
            r1.l = r0
            r0 = 1063675494(0x3f666666, float:0.9)
            r1.m = r0
            r0 = 1
            r1.n = r0
            r1.o = r2
            r1.p = r2
            com.tkay.expressad.video.dynview.widget.ATRotationView$1 r2 = new com.tkay.expressad.video.dynview.widget.ATRotationView$1
            r2.<init>(r1)
            r1.a = r2
            r1.a()
            return
    }

    public ATRotationView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 40
            r0.f = r1
            r1 = 20
            r0.g = r1
            r1 = 0
            r0.h = r1
            r0.i = r1
            r0.k = r1
            r2 = 1056964608(0x3f000000, float:0.5)
            r0.l = r2
            r2 = 1063675494(0x3f666666, float:0.9)
            r0.m = r2
            r2 = 1
            r0.n = r2
            r0.o = r1
            r0.p = r1
            com.tkay.expressad.video.dynview.widget.ATRotationView$1 r1 = new com.tkay.expressad.video.dynview.widget.ATRotationView$1
            r1.<init>(r0)
            r0.a = r1
            r0.a()
            return
    }

    public ATRotationView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 40
            r0.f = r1
            r1 = 20
            r0.g = r1
            r1 = 0
            r0.h = r1
            r0.i = r1
            r0.k = r1
            r2 = 1056964608(0x3f000000, float:0.5)
            r0.l = r2
            r2 = 1063675494(0x3f666666, float:0.9)
            r0.m = r2
            r2 = 1
            r0.n = r2
            r0.o = r1
            r0.p = r1
            com.tkay.expressad.video.dynview.widget.ATRotationView$1 r1 = new com.tkay.expressad.video.dynview.widget.ATRotationView$1
            r1.<init>(r0)
            r0.a = r1
            r0.a()
            return
    }

    private int a(int r3) {
            r2 = this;
            r0 = 2
            if (r3 == 0) goto L26
            r1 = 1
            if (r3 == r1) goto L1a
            if (r3 == r0) goto L10
            r0 = 3
            if (r3 == r0) goto Ld
            r3 = 0
            goto L31
        Ld:
            int r3 = r2.i
            goto L31
        L10:
            boolean r3 = r2.p
            if (r3 == 0) goto L17
            int r3 = r2.i
            goto L24
        L17:
            int r3 = r2.i
            goto L20
        L1a:
            boolean r3 = r2.p
            if (r3 == 0) goto L22
            int r3 = r2.i
        L20:
            int r3 = r3 + r1
            goto L31
        L22:
            int r3 = r2.i
        L24:
            int r3 = r3 - r1
            goto L31
        L26:
            boolean r3 = r2.p
            if (r3 == 0) goto L2e
            int r3 = r2.i
            int r3 = r3 - r0
            goto L31
        L2e:
            int r3 = r2.i
            int r3 = r3 + r0
        L31:
            int r0 = r2.getChildCount()
            int r3 = r3 % r0
            if (r3 < 0) goto L39
            return r3
        L39:
            int r0 = r2.getChildCount()
            int r3 = r3 + r0
            return r3
    }

    private void a() {
            r1 = this;
            android.graphics.Camera r0 = new android.graphics.Camera
            r0.<init>()
            r1.b = r0
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            r1.c = r0
            r0 = 0
            r1.setWillNotDraw(r0)
            return
    }

    private void a(int r3, int r4, int r5) {
            r2 = this;
            int r3 = -r3
            float r3 = (float) r3
            r0 = 1073741824(0x40000000, float:2.0)
            float r3 = r3 / r0
            r0 = 0
            if (r5 == 0) goto L3b
            r1 = 1
            if (r5 == r1) goto L2a
            r1 = 2
            if (r5 == r1) goto L18
            r3 = 3
            if (r5 == r3) goto L12
            goto L17
        L12:
            android.graphics.Camera r3 = r2.b
            r3.rotateX(r0)
        L17:
            return
        L18:
            android.graphics.Camera r5 = r2.b
            r5.translate(r0, r3, r0)
            android.graphics.Camera r5 = r2.b
            int r4 = -r4
            float r4 = (float) r4
            r5.rotateX(r4)
            android.graphics.Camera r4 = r2.b
            r4.translate(r0, r3, r0)
            return
        L2a:
            android.graphics.Camera r5 = r2.b
            r5.translate(r0, r3, r0)
            android.graphics.Camera r5 = r2.b
            float r4 = (float) r4
            r5.rotateX(r4)
            android.graphics.Camera r4 = r2.b
            r4.translate(r0, r3, r0)
            return
        L3b:
            android.graphics.Camera r5 = r2.b
            r5.translate(r0, r3, r0)
            android.graphics.Camera r5 = r2.b
            int r4 = -r4
            float r4 = (float) r4
            r5.rotateX(r4)
            android.graphics.Camera r5 = r2.b
            r5.translate(r0, r3, r0)
            android.graphics.Camera r5 = r2.b
            r5.translate(r0, r3, r0)
            android.graphics.Camera r5 = r2.b
            r5.rotateX(r4)
            android.graphics.Camera r4 = r2.b
            r4.translate(r0, r3, r0)
            return
    }

    private void a(android.graphics.Canvas r7) {
            r6 = this;
            int r0 = r6.getWidth()
            r1 = 2
            int r0 = r0 / r1
            int r2 = r6.h
            int r3 = r6.e
            int r2 = r2 * r3
            int r2 = r2 / r1
            int r3 = r6.f
            int r2 = r2 / r3
            r3 = 0
            r6.b(r7, r2, r0, r3)
            r3 = 1
            r6.b(r7, r2, r0, r3)
            int r3 = r6.h
            int r3 = java.lang.Math.abs(r3)
            int r4 = r6.f
            int r4 = r4 / r1
            r5 = 3
            if (r3 <= r4) goto L2a
            r6.b(r7, r2, r0, r5)
            r6.b(r7, r2, r0, r1)
            return
        L2a:
            r6.b(r7, r2, r0, r1)
            r6.b(r7, r2, r0, r5)
            return
    }

    private void a(android.graphics.Canvas r5, int r6, int r7, int r8) {
            r4 = this;
            r5.save()
            android.graphics.Camera r0 = r4.b
            r0.save()
            android.graphics.Matrix r0 = r4.c
            r0.reset()
            android.graphics.Camera r0 = r4.b
            float r1 = (float) r6
            r2 = 0
            r0.translate(r2, r1, r2)
            android.graphics.Camera r0 = r4.b
            int r3 = r4.h
            float r3 = (float) r3
            r0.rotateX(r3)
            android.graphics.Camera r0 = r4.b
            r0.translate(r2, r1, r2)
            if (r6 != 0) goto L39
            boolean r6 = r4.p
            if (r6 == 0) goto L2f
            int r6 = r4.d
            int r0 = r4.f
            r4.a(r6, r0, r8)
            goto L4e
        L2f:
            int r6 = r4.d
            int r6 = -r6
            int r0 = r4.f
            int r0 = -r0
            r4.a(r6, r0, r8)
            goto L4e
        L39:
            if (r6 <= 0) goto L43
            int r6 = r4.d
            int r0 = r4.f
            r4.a(r6, r0, r8)
            goto L4e
        L43:
            if (r6 >= 0) goto L4e
            int r6 = r4.d
            int r6 = -r6
            int r0 = r4.f
            int r0 = -r0
            r4.a(r6, r0, r8)
        L4e:
            android.graphics.Camera r6 = r4.b
            android.graphics.Matrix r0 = r4.c
            r6.getMatrix(r0)
            android.graphics.Camera r6 = r4.b
            r6.restore()
            android.graphics.Matrix r6 = r4.c
            int r0 = r4.getWidth()
            int r0 = -r0
            int r0 = r0 / 2
            float r0 = (float) r0
            int r1 = -r7
            float r1 = (float) r1
            r6.preTranslate(r0, r1)
            android.graphics.Matrix r6 = r4.c
            int r0 = r4.getWidth()
            int r0 = r0 / 2
            float r0 = (float) r0
            float r7 = (float) r7
            r6.postTranslate(r0, r7)
            android.graphics.Matrix r6 = r4.c
            r5.concat(r6)
            int r6 = r4.a(r8)
            android.view.View r6 = r4.getChildAt(r6)
            if (r6 == 0) goto L8a
            r7 = 0
            r4.drawChild(r5, r6, r7)
        L8a:
            r5.restore()
            return
    }

    static void a(com.tkay.expressad.video.dynview.widget.ATRotationView r4) {
            int r0 = r4.getChildCount()
            if (r0 == 0) goto L46
            int r0 = r4.h
            int r0 = r0 + (-1)
            r4.h = r0
            int r1 = r4.i
            r4.j = r1
            int r2 = r4.f
            int r3 = r0 / r2
            int r1 = r1 - r3
            int r0 = r0 % r2
            r4.h = r0
            r4.i = r1
            int r0 = java.lang.Math.abs(r0)
            int r1 = r4.f
            r2 = 2
            int r1 = r1 / r2
            if (r0 <= r1) goto L29
            int r0 = r4.a(r2)
            goto L2e
        L29:
            r0 = 3
            int r0 = r4.a(r0)
        L2e:
            int r1 = r4.k
            if (r1 == r0) goto L34
            r4.k = r0
        L34:
            r4.invalidate()
            boolean r0 = r4.n
            if (r0 == 0) goto L46
            java.lang.Runnable r0 = r4.a
            r1 = 1000(0x3e8, float:1.401E-42)
            int r2 = r4.g
            int r1 = r1 / r2
            long r1 = (long) r1
            r4.postDelayed(r0, r1)
        L46:
            return
    }

    private void b() {
            r4 = this;
            int r0 = r4.getChildCount()
            if (r0 != 0) goto L7
            return
        L7:
            int r0 = r4.h
            int r0 = r0 + (-1)
            r4.h = r0
            int r1 = r4.i
            r4.j = r1
            int r2 = r4.f
            int r3 = r0 / r2
            int r1 = r1 - r3
            int r0 = r0 % r2
            r4.h = r0
            r4.i = r1
            int r0 = java.lang.Math.abs(r0)
            int r1 = r4.f
            r2 = 2
            int r1 = r1 / r2
            if (r0 <= r1) goto L2a
            int r0 = r4.a(r2)
            goto L2f
        L2a:
            r0 = 3
            int r0 = r4.a(r0)
        L2f:
            int r1 = r4.k
            if (r1 == r0) goto L35
            r4.k = r0
        L35:
            r4.invalidate()
            boolean r0 = r4.n
            if (r0 == 0) goto L47
            java.lang.Runnable r0 = r4.a
            r1 = 1000(0x3e8, float:1.401E-42)
            int r2 = r4.g
            int r1 = r1 / r2
            long r1 = (long) r1
            r4.postDelayed(r0, r1)
        L47:
            return
    }

    private void b(int r4) {
            r3 = this;
            int r0 = r3.f
            int r1 = r4 / r0
            int r2 = r3.j
            int r2 = r2 - r1
            int r4 = r4 % r0
            r3.h = r4
            r3.i = r2
            int r4 = java.lang.Math.abs(r4)
            int r0 = r3.f
            r1 = 2
            int r0 = r0 / r1
            if (r4 <= r0) goto L1b
            int r4 = r3.a(r1)
            goto L20
        L1b:
            r4 = 3
            int r4 = r3.a(r4)
        L20:
            int r0 = r3.k
            if (r0 == r4) goto L26
            r3.k = r4
        L26:
            r3.invalidate()
            return
    }

    private void b(int r4, int r5, int r6) {
            r3 = this;
            r0 = 2
            r1 = 0
            if (r6 == 0) goto L3b
            r2 = 1
            if (r6 == r2) goto L28
            if (r6 == r0) goto L13
            r4 = 3
            if (r6 == r4) goto Ld
            goto L12
        Ld:
            android.graphics.Camera r4 = r3.b
            r4.rotateY(r1)
        L12:
            return
        L13:
            android.graphics.Camera r6 = r3.b
            int r4 = -r4
            int r4 = r4 / r0
            float r4 = (float) r4
            r6.translate(r4, r1, r1)
            android.graphics.Camera r6 = r3.b
            int r5 = -r5
            float r5 = (float) r5
            r6.rotateY(r5)
            android.graphics.Camera r5 = r3.b
            r5.translate(r4, r1, r1)
            return
        L28:
            android.graphics.Camera r6 = r3.b
            int r4 = r4 / r0
            float r4 = (float) r4
            r6.translate(r4, r1, r1)
            android.graphics.Camera r6 = r3.b
            float r5 = (float) r5
            r6.rotateY(r5)
            android.graphics.Camera r5 = r3.b
            r5.translate(r4, r1, r1)
            return
        L3b:
            android.graphics.Camera r6 = r3.b
            int r4 = -r4
            int r4 = r4 / r0
            float r4 = (float) r4
            r6.translate(r4, r1, r1)
            android.graphics.Camera r6 = r3.b
            int r5 = -r5
            float r5 = (float) r5
            r6.rotateY(r5)
            android.graphics.Camera r6 = r3.b
            r6.translate(r4, r1, r1)
            android.graphics.Camera r6 = r3.b
            r6.translate(r4, r1, r1)
            android.graphics.Camera r6 = r3.b
            r6.rotateY(r5)
            android.graphics.Camera r5 = r3.b
            r5.translate(r4, r1, r1)
            return
    }

    private void b(android.graphics.Canvas r7) {
            r6 = this;
            int r0 = r6.getHeight()
            r1 = 2
            int r0 = r0 / r1
            int r2 = r6.h
            int r3 = r6.d
            int r2 = r2 * r3
            int r2 = r2 / r1
            int r3 = r6.f
            int r2 = r2 / r3
            r3 = 0
            r6.a(r7, r2, r0, r3)
            r3 = 1
            r6.a(r7, r2, r0, r3)
            int r3 = r6.h
            int r3 = java.lang.Math.abs(r3)
            int r4 = r6.f
            int r4 = r4 / r1
            r5 = 3
            if (r3 <= r4) goto L2a
            r6.a(r7, r2, r0, r5)
            r6.a(r7, r2, r0, r1)
            return
        L2a:
            r6.a(r7, r2, r0, r1)
            r6.a(r7, r2, r0, r5)
            return
    }

    private void b(android.graphics.Canvas r5, int r6, int r7, int r8) {
            r4 = this;
            r5.save()
            android.graphics.Camera r0 = r4.b
            r0.save()
            android.graphics.Matrix r0 = r4.c
            r0.reset()
            android.graphics.Camera r0 = r4.b
            float r1 = (float) r6
            r2 = 0
            r0.translate(r1, r2, r2)
            android.graphics.Camera r0 = r4.b
            int r3 = r4.h
            float r3 = (float) r3
            r0.rotateY(r3)
            android.graphics.Camera r0 = r4.b
            r0.translate(r1, r2, r2)
            if (r6 != 0) goto L39
            boolean r6 = r4.p
            if (r6 == 0) goto L2f
            int r6 = r4.e
            int r0 = r4.f
            r4.b(r6, r0, r8)
            goto L4e
        L2f:
            int r6 = r4.e
            int r6 = -r6
            int r0 = r4.f
            int r0 = -r0
            r4.b(r6, r0, r8)
            goto L4e
        L39:
            if (r6 <= 0) goto L43
            int r6 = r4.e
            int r0 = r4.f
            r4.b(r6, r0, r8)
            goto L4e
        L43:
            if (r6 >= 0) goto L4e
            int r6 = r4.e
            int r6 = -r6
            int r0 = r4.f
            int r0 = -r0
            r4.b(r6, r0, r8)
        L4e:
            android.graphics.Camera r6 = r4.b
            android.graphics.Matrix r0 = r4.c
            r6.getMatrix(r0)
            android.graphics.Camera r6 = r4.b
            r6.restore()
            android.graphics.Matrix r6 = r4.c
            int r0 = -r7
            float r0 = (float) r0
            int r1 = r4.getHeight()
            int r1 = -r1
            int r1 = r1 / 2
            float r1 = (float) r1
            r6.preTranslate(r0, r1)
            android.graphics.Matrix r6 = r4.c
            float r7 = (float) r7
            int r0 = r4.getHeight()
            int r0 = r0 / 2
            float r0 = (float) r0
            r6.postTranslate(r7, r0)
            android.graphics.Matrix r6 = r4.c
            r5.concat(r6)
            int r6 = r4.a(r8)
            android.view.View r6 = r4.getChildAt(r6)
            if (r6 == 0) goto L8a
            r7 = 0
            r4.drawChild(r5, r6, r7)
        L8a:
            r5.restore()
            return
    }

    private void c(int r3) {
            r2 = this;
            r2.i = r3
            int r3 = r2.h
            int r3 = java.lang.Math.abs(r3)
            int r0 = r2.f
            r1 = 2
            int r0 = r0 / r1
            if (r3 <= r0) goto L13
            int r3 = r2.a(r1)
            goto L18
        L13:
            r3 = 3
            int r3 = r2.a(r3)
        L18:
            int r0 = r2.k
            if (r0 == r3) goto L1e
            r2.k = r3
        L1e:
            return
    }

    @Override
    protected void dispatchDraw(android.graphics.Canvas r8) {
            r7 = this;
            int r0 = r7.getChildCount()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r7.o
            r1 = 1
            r2 = 0
            r3 = 3
            r4 = 2
            if (r0 == 0) goto L3c
            int r0 = r7.getHeight()
            int r0 = r0 / r4
            int r5 = r7.h
            int r6 = r7.d
            int r5 = r5 * r6
            int r5 = r5 / r4
            int r6 = r7.f
            int r5 = r5 / r6
            r7.a(r8, r5, r0, r2)
            r7.a(r8, r5, r0, r1)
            int r1 = r7.h
            int r1 = java.lang.Math.abs(r1)
            int r2 = r7.f
            int r2 = r2 / r4
            if (r1 <= r2) goto L35
            r7.a(r8, r5, r0, r3)
            r7.a(r8, r5, r0, r4)
            return
        L35:
            r7.a(r8, r5, r0, r4)
            r7.a(r8, r5, r0, r3)
            return
        L3c:
            int r0 = r7.getWidth()
            int r0 = r0 / r4
            int r5 = r7.h
            int r6 = r7.e
            int r5 = r5 * r6
            int r5 = r5 / r4
            int r6 = r7.f
            int r5 = r5 / r6
            r7.b(r8, r5, r0, r2)
            r7.b(r8, r5, r0, r1)
            int r1 = r7.h
            int r1 = java.lang.Math.abs(r1)
            int r2 = r7.f
            int r2 = r2 / r4
            if (r1 <= r2) goto L62
            r7.b(r8, r5, r0, r3)
            r7.b(r8, r5, r0, r4)
            return
        L62:
            r7.b(r8, r5, r0, r4)
            r7.b(r8, r5, r0, r3)
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    protected void onLayout(boolean r6, int r7, int r8, int r9, int r10) {
            r5 = this;
            int r9 = r9 - r7
            float r6 = (float) r9
            float r7 = r5.l
            r0 = 1065353216(0x3f800000, float:1.0)
            float r1 = r0 - r7
            float r1 = r1 * r6
            r2 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r2
            int r1 = (int) r1
            int r10 = r10 - r8
            float r8 = (float) r10
            float r3 = r5.m
            float r0 = r0 - r3
            float r0 = r0 * r8
            float r0 = r0 / r2
            int r0 = (int) r0
            float r8 = r8 * r3
            int r8 = (int) r8
            r5.d = r8
            float r6 = r6 * r7
            int r6 = (int) r6
            r5.e = r6
            int r6 = r5.getChildCount()
            r7 = 0
        L22:
            if (r7 >= r6) goto L49
            android.view.View r8 = r5.getChildAt(r7)
            int r2 = r9 - r1
            int r3 = r10 - r0
            r8.layout(r1, r0, r2, r3)
            r2 = 1
            r8.setClickable(r2)
            android.view.ViewGroup$LayoutParams r2 = r8.getLayoutParams()
            int r3 = r2.width
            int r4 = r5.e
            if (r3 == r4) goto L46
            r2.width = r4
            int r3 = r5.d
            r2.height = r3
            r8.setLayoutParams(r2)
        L46:
            int r7 = r7 + 1
            goto L22
        L49:
            return
    }

    public void setAutoscroll(boolean r4) {
            r3 = this;
            if (r4 == 0) goto Ld
            java.lang.Runnable r0 = r3.a
            r1 = 1000(0x3e8, float:1.401E-42)
            int r2 = r3.g
            int r1 = r1 / r2
            long r1 = (long) r1
            r3.postDelayed(r0, r1)
        Ld:
            r3.n = r4
            return
    }

    public void setHeightRatio(float r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setRotateV(boolean r1) {
            r0 = this;
            r0.o = r1
            r0.invalidate()
            return
    }

    public void setWidthRatio(float r1) {
            r0 = this;
            r0.l = r1
            return
    }
}
