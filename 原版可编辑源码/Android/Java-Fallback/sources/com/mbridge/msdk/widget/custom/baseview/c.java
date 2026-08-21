package com.mbridge.msdk.widget.custom.baseview;

final class c {
    private com.mbridge.msdk.widget.custom.baseview.d a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private float i;
    private float j;
    private float k;
    private android.widget.TextView l;
    private com.mbridge.msdk.widget.custom.baseview.f m;



    public c(android.widget.TextView r1, com.mbridge.msdk.widget.custom.baseview.f r2) {
            r0 = this;
            r0.<init>()
            r0.l = r1
            r0.m = r2
            return
    }

    static int a(com.mbridge.msdk.widget.custom.baseview.c r0) {
            int r0 = r0.c
            return r0
    }

    static int b(com.mbridge.msdk.widget.custom.baseview.c r0) {
            int r0 = r0.d
            return r0
    }

    static float c(com.mbridge.msdk.widget.custom.baseview.c r0) {
            float r0 = r0.k
            return r0
    }

    static android.widget.TextView d(com.mbridge.msdk.widget.custom.baseview.c r0) {
            android.widget.TextView r0 = r0.l
            return r0
    }

    static com.mbridge.msdk.widget.custom.baseview.d e(com.mbridge.msdk.widget.custom.baseview.c r0) {
            com.mbridge.msdk.widget.custom.baseview.d r0 = r0.a
            return r0
    }

    public final void a() {
            r10 = this;
            r0 = 2
            int[] r1 = new int[r0]
            int r2 = r10.c
            r3 = 0
            r1[r3] = r2
            int r2 = r10.d
            r4 = 1
            r1[r4] = r2
            android.animation.ValueAnimator r1 = android.animation.ValueAnimator.ofInt(r1)
            com.mbridge.msdk.widget.custom.baseview.f r2 = r10.m
            android.graphics.drawable.GradientDrawable r2 = r2.a()
            com.mbridge.msdk.widget.custom.baseview.c$1 r5 = new com.mbridge.msdk.widget.custom.baseview.c$1
            r5.<init>(r10, r2)
            r1.addUpdateListener(r5)
            int[] r5 = new int[r0]
            int r6 = r10.e
            r5[r3] = r6
            int r6 = r10.f
            r5[r4] = r6
            java.lang.String r6 = "color"
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofInt(r2, r6, r5)
            android.animation.ArgbEvaluator r6 = new android.animation.ArgbEvaluator
            r6.<init>()
            r5.setEvaluator(r6)
            com.mbridge.msdk.widget.custom.baseview.f r6 = r10.m
            int[] r7 = new int[r0]
            int r8 = r10.g
            r7[r3] = r8
            int r8 = r10.h
            r7[r4] = r8
            java.lang.String r8 = "strokeColor"
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofInt(r6, r8, r7)
            android.animation.ArgbEvaluator r7 = new android.animation.ArgbEvaluator
            r7.<init>()
            r6.setEvaluator(r7)
            float[] r7 = new float[r0]
            float r8 = r10.i
            r7[r3] = r8
            float r8 = r10.j
            r7[r4] = r8
            java.lang.String r8 = "cornerRadius"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r8, r7)
            android.animation.AnimatorSet r7 = new android.animation.AnimatorSet
            r7.<init>()
            int r8 = r10.b
            long r8 = (long) r8
            r7.setDuration(r8)
            r8 = 4
            android.animation.Animator[] r8 = new android.animation.Animator[r8]
            r8[r3] = r1
            r8[r4] = r5
            r8[r0] = r6
            r0 = 3
            r8[r0] = r2
            r7.playTogether(r8)
            com.mbridge.msdk.widget.custom.baseview.c$2 r0 = new com.mbridge.msdk.widget.custom.baseview.c$2
            r0.<init>(r10)
            r7.addListener(r0)
            r7.start()
            return
    }

    public final void a(float r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(com.mbridge.msdk.widget.custom.baseview.d r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void b(float r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void c(float r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public final void c(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void d(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void e(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void f(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void g(int r1) {
            r0 = this;
            r0.h = r1
            return
    }
}
