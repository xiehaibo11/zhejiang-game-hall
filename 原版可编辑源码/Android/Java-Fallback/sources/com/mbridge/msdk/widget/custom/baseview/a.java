package com.mbridge.msdk.widget.custom.baseview;

final class a extends android.graphics.drawable.Drawable implements android.graphics.drawable.Animatable {
    private static final android.view.animation.Interpolator a = null;
    private static final android.view.animation.Interpolator b = null;
    private final android.graphics.RectF c;
    private android.animation.ObjectAnimator d;
    private android.animation.ObjectAnimator e;
    private boolean f;
    private android.graphics.Paint g;
    private float h;
    private float i;
    private float j;
    private float k;
    private boolean l;
    private android.util.Property<com.mbridge.msdk.widget.custom.baseview.a, java.lang.Float> m;
    private android.util.Property<com.mbridge.msdk.widget.custom.baseview.a, java.lang.Float> n;




    static {
            android.view.animation.LinearInterpolator r0 = new android.view.animation.LinearInterpolator
            r0.<init>()
            com.mbridge.msdk.widget.custom.baseview.a.a = r0
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r0.<init>()
            com.mbridge.msdk.widget.custom.baseview.a.b = r0
            return
    }

    public a(int r6, float r7) {
            r5 = this;
            r5.<init>()
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r5.c = r0
            com.mbridge.msdk.widget.custom.baseview.a$1 r0 = new com.mbridge.msdk.widget.custom.baseview.a$1
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            java.lang.String r2 = "angle"
            r0.<init>(r5, r1, r2)
            r5.m = r0
            com.mbridge.msdk.widget.custom.baseview.a$2 r0 = new com.mbridge.msdk.widget.custom.baseview.a$2
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            java.lang.String r2 = "arc"
            r0.<init>(r5, r1, r2)
            r5.n = r0
            r5.k = r7
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r5.g = r0
            r1 = 1
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = r5.g
            android.graphics.Paint$Style r2 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r2)
            android.graphics.Paint r0 = r5.g
            r0.setStrokeWidth(r7)
            android.graphics.Paint r7 = r5.g
            r7.setColor(r6)
            android.util.Property<com.mbridge.msdk.widget.custom.baseview.a, java.lang.Float> r6 = r5.m
            float[] r7 = new float[r1]
            r0 = 1135869952(0x43b40000, float:360.0)
            r2 = 0
            r7[r2] = r0
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r5, r6, r7)
            r5.e = r6
            android.view.animation.Interpolator r7 = com.mbridge.msdk.widget.custom.baseview.a.a
            r6.setInterpolator(r7)
            android.animation.ObjectAnimator r6 = r5.e
            r3 = 2000(0x7d0, double:9.88E-321)
            r6.setDuration(r3)
            android.animation.ObjectAnimator r6 = r5.e
            r6.setRepeatMode(r1)
            android.animation.ObjectAnimator r6 = r5.e
            r7 = -1
            r6.setRepeatCount(r7)
            android.util.Property<com.mbridge.msdk.widget.custom.baseview.a, java.lang.Float> r6 = r5.n
            float[] r0 = new float[r1]
            r3 = 1133903872(0x43960000, float:300.0)
            r0[r2] = r3
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r5, r6, r0)
            r5.d = r6
            android.view.animation.Interpolator r0 = com.mbridge.msdk.widget.custom.baseview.a.b
            r6.setInterpolator(r0)
            android.animation.ObjectAnimator r6 = r5.d
            r2 = 600(0x258, double:2.964E-321)
            r6.setDuration(r2)
            android.animation.ObjectAnimator r6 = r5.d
            r6.setRepeatMode(r1)
            android.animation.ObjectAnimator r6 = r5.d
            r6.setRepeatCount(r7)
            android.animation.ObjectAnimator r6 = r5.d
            com.mbridge.msdk.widget.custom.baseview.a$3 r7 = new com.mbridge.msdk.widget.custom.baseview.a$3
            r7.<init>(r5)
            r6.addListener(r7)
            return
    }

    static void a(com.mbridge.msdk.widget.custom.baseview.a r2) {
            boolean r0 = r2.f
            r0 = r0 ^ 1
            r2.f = r0
            if (r0 == 0) goto L12
            float r0 = r2.h
            r1 = 1114636288(0x42700000, float:60.0)
            float r0 = r0 + r1
            r1 = 1135869952(0x43b40000, float:360.0)
            float r0 = r0 % r1
            r2.h = r0
        L12:
            return
    }

    public final float a() {
            r1 = this;
            float r0 = r1.i
            return r0
    }

    public final void a(float r1) {
            r0 = this;
            r0.i = r1
            r0.invalidateSelf()
            return
    }

    public final float b() {
            r1 = this;
            float r0 = r1.j
            return r0
    }

    public final void b(float r1) {
            r0 = this;
            r0.j = r1
            r0.invalidateSelf()
            return
    }

    @Override
    public final void draw(android.graphics.Canvas r10) {
            r9 = this;
            float r0 = r9.i
            float r1 = r9.h
            float r0 = r0 - r1
            float r1 = r9.j
            boolean r2 = r9.f
            r3 = 1106247680(0x41f00000, float:30.0)
            if (r2 != 0) goto L13
            float r0 = r0 + r1
            r2 = 1135869952(0x43b40000, float:360.0)
            float r2 = r2 - r1
            float r2 = r2 - r3
            goto L15
        L13:
            float r2 = r1 + r3
        L15:
            r5 = r0
            r6 = r2
            android.graphics.RectF r4 = r9.c
            r7 = 0
            android.graphics.Paint r8 = r9.g
            r3 = r10
            r3.drawArc(r4, r5, r6, r7, r8)
            return
    }

    @Override
    public final int getOpacity() {
            r1 = this;
            r0 = -2
            return r0
    }

    @Override
    public final boolean isRunning() {
            r1 = this;
            boolean r0 = r1.l
            return r0
    }

    @Override
    protected final void onBoundsChange(android.graphics.Rect r6) {
            r5 = this;
            super.onBoundsChange(r6)
            android.graphics.RectF r0 = r5.c
            int r1 = r6.left
            float r1 = (float) r1
            float r2 = r5.k
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r3
            float r1 = r1 + r2
            r2 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r2
            r0.left = r1
            android.graphics.RectF r0 = r5.c
            int r1 = r6.right
            float r1 = (float) r1
            float r4 = r5.k
            float r4 = r4 / r3
            float r1 = r1 - r4
            float r1 = r1 - r2
            r0.right = r1
            android.graphics.RectF r0 = r5.c
            int r1 = r6.top
            float r1 = (float) r1
            float r4 = r5.k
            float r4 = r4 / r3
            float r1 = r1 + r4
            float r1 = r1 + r2
            r0.top = r1
            android.graphics.RectF r0 = r5.c
            int r6 = r6.bottom
            float r6 = (float) r6
            float r1 = r5.k
            float r1 = r1 / r3
            float r6 = r6 - r1
            float r6 = r6 - r2
            r0.bottom = r6
            return
    }

    @Override
    public final void setAlpha(int r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.g
            r0.setAlpha(r2)
            return
    }

    @Override
    public final void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.g
            r0.setColorFilter(r2)
            return
    }

    @Override
    public final void start() {
            r1 = this;
            boolean r0 = r1.isRunning()
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 1
            r1.l = r0
            android.animation.ObjectAnimator r0 = r1.e
            r0.start()
            android.animation.ObjectAnimator r0 = r1.d
            r0.start()
            r1.invalidateSelf()
            return
    }

    @Override
    public final void stop() {
            r1 = this;
            boolean r0 = r1.isRunning()
            if (r0 != 0) goto L7
            return
        L7:
            r0 = 0
            r1.l = r0
            android.animation.ObjectAnimator r0 = r1.e
            r0.cancel()
            android.animation.ObjectAnimator r0 = r1.d
            r0.cancel()
            r1.invalidateSelf()
            return
    }
}
