package com.tencent.connect.avatar;

public class c extends android.widget.ImageView {
    final java.lang.String a;
    public boolean b;
    private android.graphics.Matrix c;
    private android.graphics.Matrix d;
    private int e;
    private float f;
    private float g;
    private android.graphics.Bitmap h;
    private boolean i;
    private float j;
    private float k;
    private android.graphics.PointF l;
    private android.graphics.PointF m;
    private float n;
    private float o;
    private android.graphics.Rect p;


    public c(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            android.graphics.Matrix r3 = new android.graphics.Matrix
            r3.<init>()
            r2.c = r3
            android.graphics.Matrix r3 = new android.graphics.Matrix
            r3.<init>()
            r2.d = r3
            r3 = 0
            r2.e = r3
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.f = r0
            r2.g = r0
            r2.i = r3
            java.lang.String r1 = "TouchView"
            r2.a = r1
            android.graphics.PointF r1 = new android.graphics.PointF
            r1.<init>()
            r2.l = r1
            android.graphics.PointF r1 = new android.graphics.PointF
            r1.<init>()
            r2.m = r1
            r2.n = r0
            r0 = 0
            r2.o = r0
            r2.b = r3
            android.graphics.Rect r3 = new android.graphics.Rect
            r3.<init>()
            r2.p = r3
            r2.getDrawingRect(r3)
            r2.a()
            return
    }

    private float a(android.view.MotionEvent r5) {
            r4 = this;
            int r0 = r5.getPointerCount()
            r1 = 2
            if (r0 >= r1) goto L9
            r5 = 0
            return r5
        L9:
            r0 = 0
            float r1 = r5.getX(r0)
            r2 = 1
            float r3 = r5.getX(r2)
            float r1 = r1 - r3
            float r0 = r5.getY(r0)
            float r5 = r5.getY(r2)
            float r0 = r0 - r5
            float r1 = r1 * r1
            float r0 = r0 * r0
            float r1 = r1 + r0
            double r0 = (double) r1
            double r0 = java.lang.Math.sqrt(r0)
            float r5 = (float) r0
            return r5
    }

    private void a() {
            r0 = this;
            return
    }

    private void a(android.graphics.PointF r8) {
            r7 = this;
            android.graphics.Bitmap r0 = r7.h
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 9
            float[] r0 = new float[r0]
            android.graphics.Matrix r1 = r7.c
            r1.getValues(r0)
            r1 = 2
            r1 = r0[r1]
            r2 = 5
            r2 = r0[r2]
            r3 = 0
            r0 = r0[r3]
            android.graphics.Bitmap r3 = r7.h
            int r3 = r3.getWidth()
            float r3 = (float) r3
            android.graphics.Bitmap r4 = r7.h
            int r4 = r4.getHeight()
            float r4 = (float) r4
            float r3 = r3 * r0
            float r4 = r4 * r0
            android.graphics.Rect r0 = r7.p
            int r0 = r0.left
            float r0 = (float) r0
            float r0 = r0 - r1
            r5 = 1065353216(0x3f800000, float:1.0)
            int r6 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r6 > 0) goto L37
            r0 = 1065353216(0x3f800000, float:1.0)
        L37:
            float r1 = r1 + r3
            android.graphics.Rect r3 = r7.p
            int r3 = r3.right
            float r3 = (float) r3
            float r1 = r1 - r3
            int r3 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r3 > 0) goto L44
            r1 = 1065353216(0x3f800000, float:1.0)
        L44:
            float r1 = r1 + r0
            android.graphics.Rect r3 = r7.p
            int r3 = r3.width()
            float r3 = (float) r3
            float r3 = r3 * r0
            float r3 = r3 / r1
            android.graphics.Rect r0 = r7.p
            int r0 = r0.left
            float r0 = (float) r0
            float r3 = r3 + r0
            android.graphics.Rect r0 = r7.p
            int r0 = r0.top
            float r0 = (float) r0
            float r0 = r0 - r2
            float r2 = r2 + r4
            android.graphics.Rect r1 = r7.p
            int r1 = r1.bottom
            float r1 = (float) r1
            float r2 = r2 - r1
            int r1 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r1 > 0) goto L68
            r0 = 1065353216(0x3f800000, float:1.0)
        L68:
            int r1 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r1 > 0) goto L6d
            goto L6e
        L6d:
            r5 = r2
        L6e:
            float r5 = r5 + r0
            android.graphics.Rect r1 = r7.p
            int r1 = r1.height()
            float r1 = (float) r1
            float r1 = r1 * r0
            float r1 = r1 / r5
            android.graphics.Rect r0 = r7.p
            int r0 = r0.top
            float r0 = (float) r0
            float r1 = r1 + r0
            r8.set(r3, r1)
            return
    }

    static void a(com.tencent.connect.avatar.c r0) {
            r0.b()
            return
    }

    static boolean a(com.tencent.connect.avatar.c r0, boolean r1) {
            r0.i = r1
            return r1
    }

    private void b() {
            r17 = this;
            r0 = r17
            android.graphics.Bitmap r1 = r0.h
            if (r1 != 0) goto L7
            return
        L7:
            android.graphics.Rect r1 = r0.p
            int r1 = r1.width()
            float r1 = (float) r1
            android.graphics.Rect r2 = r0.p
            int r2 = r2.height()
            float r2 = (float) r2
            r3 = 9
            float[] r3 = new float[r3]
            android.graphics.Matrix r4 = r0.c
            r4.getValues(r3)
            r4 = 2
            r5 = r3[r4]
            r6 = 5
            r7 = r3[r6]
            r8 = 0
            r9 = r3[r8]
            r10 = 0
            float r11 = r0.f
            r12 = 1
            int r13 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r13 <= 0) goto L60
            float r11 = r11 / r9
            r0.o = r11
            android.graphics.Matrix r1 = r0.c
            android.graphics.PointF r2 = r0.m
            float r2 = r2.x
            android.graphics.PointF r3 = r0.m
            float r3 = r3.y
            r1.postScale(r11, r11, r2, r3)
            android.graphics.Matrix r1 = r0.c
            r0.setImageMatrix(r1)
            android.view.animation.ScaleAnimation r10 = new android.view.animation.ScaleAnimation
            float r1 = r0.o
            r2 = 1065353216(0x3f800000, float:1.0)
            float r3 = r2 / r1
            r4 = 1065353216(0x3f800000, float:1.0)
            float r5 = r2 / r1
            r6 = 1065353216(0x3f800000, float:1.0)
            android.graphics.PointF r1 = r0.m
            float r7 = r1.x
            android.graphics.PointF r1 = r0.m
            float r8 = r1.y
            r2 = r10
            r2.<init>(r3, r4, r5, r6, r7, r8)
            goto Lff
        L60:
            float r11 = r0.g
            int r13 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r13 >= 0) goto L8d
            float r11 = r11 / r9
            r0.o = r11
            android.graphics.Matrix r1 = r0.c
            android.graphics.PointF r2 = r0.m
            float r2 = r2.x
            android.graphics.PointF r3 = r0.m
            float r3 = r3.y
            r1.postScale(r11, r11, r2, r3)
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r5 = 1065353216(0x3f800000, float:1.0)
            float r8 = r0.o
            r7 = 1065353216(0x3f800000, float:1.0)
            android.graphics.PointF r2 = r0.m
            float r9 = r2.x
            android.graphics.PointF r2 = r0.m
            float r10 = r2.y
            r4 = r1
            r6 = r8
            r4.<init>(r5, r6, r7, r8, r9, r10)
            r10 = r1
            goto Lff
        L8d:
            android.graphics.Bitmap r11 = r0.h
            int r11 = r11.getWidth()
            float r11 = (float) r11
            float r11 = r11 * r9
            android.graphics.Bitmap r13 = r0.h
            int r13 = r13.getHeight()
            float r13 = (float) r13
            float r13 = r13 * r9
            android.graphics.Rect r9 = r0.p
            int r9 = r9.left
            float r9 = (float) r9
            float r9 = r9 - r5
            android.graphics.Rect r14 = r0.p
            int r14 = r14.top
            float r14 = (float) r14
            float r14 = r14 - r7
            r15 = 0
            int r16 = (r9 > r15 ? 1 : (r9 == r15 ? 0 : -1))
            if (r16 >= 0) goto Lb6
            android.graphics.Rect r5 = r0.p
            int r5 = r5.left
            float r5 = (float) r5
            r8 = 1
        Lb6:
            int r16 = (r14 > r15 ? 1 : (r14 == r15 ? 0 : -1))
            if (r16 >= 0) goto Lc0
            android.graphics.Rect r7 = r0.p
            int r7 = r7.top
            float r7 = (float) r7
            r8 = 1
        Lc0:
            float r9 = r11 - r9
            float r14 = r13 - r14
            int r9 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r9 >= 0) goto Ld1
            float r11 = r11 - r1
            android.graphics.Rect r1 = r0.p
            int r1 = r1.left
            float r1 = (float) r1
            float r5 = r1 - r11
            r8 = 1
        Ld1:
            int r1 = (r14 > r2 ? 1 : (r14 == r2 ? 0 : -1))
            if (r1 >= 0) goto Lde
            float r13 = r13 - r2
            android.graphics.Rect r1 = r0.p
            int r1 = r1.top
            float r1 = (float) r1
            float r7 = r1 - r13
            r8 = 1
        Lde:
            if (r8 == 0) goto Lfa
            r1 = r3[r4]
            float r1 = r1 - r5
            r2 = r3[r6]
            float r2 = r2 - r7
            r3[r4] = r5
            r3[r6] = r7
            android.graphics.Matrix r4 = r0.c
            r4.setValues(r3)
            android.graphics.Matrix r3 = r0.c
            r0.setImageMatrix(r3)
            android.view.animation.TranslateAnimation r10 = new android.view.animation.TranslateAnimation
            r10.<init>(r1, r15, r2, r15)
            goto Lff
        Lfa:
            android.graphics.Matrix r1 = r0.c
            r0.setImageMatrix(r1)
        Lff:
            if (r10 == 0) goto L118
            r0.i = r12
            r1 = 300(0x12c, double:1.48E-321)
            r10.setDuration(r1)
            r0.startAnimation(r10)
            java.lang.Thread r1 = new java.lang.Thread
            com.tencent.connect.avatar.c$1 r2 = new com.tencent.connect.avatar.c$1
            r2.<init>(r0)
            r1.<init>(r2)
            r1.start()
        L118:
            return
    }

    private void c() {
            r6 = this;
            android.graphics.Bitmap r0 = r6.h
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 9
            float[] r0 = new float[r0]
            android.graphics.Matrix r1 = r6.c
            r1.getValues(r0)
            android.graphics.Rect r1 = r6.p
            int r1 = r1.width()
            float r1 = (float) r1
            android.graphics.Bitmap r2 = r6.h
            int r2 = r2.getWidth()
            float r2 = (float) r2
            float r1 = r1 / r2
            android.graphics.Rect r2 = r6.p
            int r2 = r2.height()
            float r2 = (float) r2
            android.graphics.Bitmap r3 = r6.h
            int r3 = r3.getHeight()
            float r3 = (float) r3
            float r2 = r2 / r3
            float r1 = java.lang.Math.max(r1, r2)
            android.graphics.Rect r2 = r6.p
            int r2 = r2.left
            float r2 = (float) r2
            android.graphics.Bitmap r3 = r6.h
            int r3 = r3.getWidth()
            float r3 = (float) r3
            float r3 = r3 * r1
            android.graphics.Rect r4 = r6.p
            int r4 = r4.width()
            float r4 = (float) r4
            float r3 = r3 - r4
            r4 = 1073741824(0x40000000, float:2.0)
            float r3 = r3 / r4
            float r2 = r2 - r3
            r6.j = r2
            android.graphics.Rect r2 = r6.p
            int r2 = r2.top
            float r2 = (float) r2
            android.graphics.Bitmap r3 = r6.h
            int r3 = r3.getHeight()
            float r3 = (float) r3
            float r3 = r3 * r1
            android.graphics.Rect r5 = r6.p
            int r5 = r5.height()
            float r5 = (float) r5
            float r3 = r3 - r5
            float r3 = r3 / r4
            float r2 = r2 - r3
            r6.k = r2
            r3 = 2
            float r4 = r6.j
            r0[r3] = r4
            r3 = 5
            r0[r3] = r2
            r2 = 0
            r3 = 4
            r0[r3] = r1
            r0[r2] = r1
            android.graphics.Matrix r2 = r6.c
            r2.setValues(r0)
            android.graphics.Bitmap r0 = r6.h
            int r0 = r0.getWidth()
            float r0 = (float) r0
            r2 = 1157627904(0x45000000, float:2048.0)
            float r0 = r2 / r0
            android.graphics.Bitmap r3 = r6.h
            int r3 = r3.getHeight()
            float r3 = (float) r3
            float r2 = r2 / r3
            float r0 = java.lang.Math.min(r0, r2)
            r6.f = r0
            r6.g = r1
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L9a
            r6.f = r1
        L9a:
            android.graphics.Matrix r0 = r6.c
            r6.setImageMatrix(r0)
            return
    }

    public void a(android.graphics.Rect r1) {
            r0 = this;
            r0.p = r1
            android.graphics.Bitmap r1 = r0.h
            if (r1 == 0) goto L9
            r0.c()
        L9:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r6) {
            r5 = this;
            boolean r0 = r5.i
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            int r0 = r6.getAction()
            r0 = r0 & 255(0xff, float:3.57E-43)
            if (r0 == 0) goto L92
            if (r0 == r1) goto L8b
            r2 = 1092616192(0x41200000, float:10.0)
            r3 = 2
            if (r0 == r3) goto L37
            r4 = 5
            if (r0 == r4) goto L1d
            r6 = 6
            if (r0 == r6) goto L8b
            goto Lb1
        L1d:
            float r6 = r5.a(r6)
            r5.n = r6
            int r6 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r6 <= 0) goto Lb1
            android.graphics.Matrix r6 = r5.d
            android.graphics.Matrix r0 = r5.c
            r6.set(r0)
            android.graphics.PointF r6 = r5.m
            r5.a(r6)
            r5.e = r3
            goto Lb1
        L37:
            int r0 = r5.e
            if (r0 != r1) goto L5f
            android.graphics.Matrix r0 = r5.c
            android.graphics.Matrix r2 = r5.d
            r0.set(r2)
            float r0 = r6.getX()
            android.graphics.PointF r2 = r5.l
            float r2 = r2.x
            float r0 = r0 - r2
            float r6 = r6.getY()
            android.graphics.PointF r2 = r5.l
            float r2 = r2.y
            float r6 = r6 - r2
            android.graphics.Matrix r2 = r5.c
            r2.postTranslate(r0, r6)
            android.graphics.Matrix r6 = r5.c
            r5.setImageMatrix(r6)
            goto Lb1
        L5f:
            if (r0 != r3) goto Lb1
            android.graphics.Matrix r0 = r5.c
            r0.set(r0)
            float r6 = r5.a(r6)
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 <= 0) goto L85
            android.graphics.Matrix r0 = r5.c
            android.graphics.Matrix r2 = r5.d
            r0.set(r2)
            float r0 = r5.n
            float r6 = r6 / r0
            android.graphics.Matrix r0 = r5.c
            android.graphics.PointF r2 = r5.m
            float r2 = r2.x
            android.graphics.PointF r3 = r5.m
            float r3 = r3.y
            r0.postScale(r6, r6, r2, r3)
        L85:
            android.graphics.Matrix r6 = r5.c
            r5.setImageMatrix(r6)
            goto Lb1
        L8b:
            r5.b()
            r6 = 0
            r5.e = r6
            goto Lb1
        L92:
            android.graphics.Matrix r0 = r5.c
            android.graphics.Matrix r2 = r5.getImageMatrix()
            r0.set(r2)
            android.graphics.Matrix r0 = r5.d
            android.graphics.Matrix r2 = r5.c
            r0.set(r2)
            android.graphics.PointF r0 = r5.l
            float r2 = r6.getX()
            float r6 = r6.getY()
            r0.set(r2, r6)
            r5.e = r1
        Lb1:
            r5.b = r1
            return r1
    }

    @Override
    public void setImageBitmap(android.graphics.Bitmap r1) {
            r0 = this;
            super.setImageBitmap(r1)
            r0.h = r1
            if (r1 == 0) goto L9
            r0.h = r1
        L9:
            return
    }
}
