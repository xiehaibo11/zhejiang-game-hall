package com.tkay.expressad.video.dynview.widget;

public class TYImageView extends android.widget.ImageView {
    private static final java.lang.String a = "MBridgeImageView";
    private android.graphics.Xfermode b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private int k;
    private float[] l;
    private float[] m;
    private android.graphics.RectF n;
    private android.graphics.RectF o;
    private boolean p;
    private boolean q;
    private android.graphics.Path r;
    private android.graphics.Paint s;

    public TYImageView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TYImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public TYImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Path r1 = new android.graphics.Path
            r1.<init>()
            r0.r = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.s = r1
            r1 = 8
            float[] r2 = new float[r1]
            r0.l = r2
            float[] r1 = new float[r1]
            r0.m = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.o = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.n = r1
            android.graphics.PorterDuffXfermode r1 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.DST_IN
            r1.<init>(r2)
            r0.b = r1
            return
    }

    private void a() {
            r5 = this;
            float[] r0 = r5.l
            if (r0 == 0) goto L2b
            float[] r0 = r5.m
            if (r0 == 0) goto L2b
            r0 = 0
        L9:
            float[] r1 = r5.l     // Catch: java.lang.Exception -> L27
            int r1 = r1.length     // Catch: java.lang.Exception -> L27
            if (r0 >= r1) goto L26
            float[] r1 = r5.l     // Catch: java.lang.Exception -> L27
            int r2 = r5.e     // Catch: java.lang.Exception -> L27
            float r2 = (float) r2     // Catch: java.lang.Exception -> L27
            r1[r0] = r2     // Catch: java.lang.Exception -> L27
            float[] r1 = r5.m     // Catch: java.lang.Exception -> L27
            int r2 = r5.e     // Catch: java.lang.Exception -> L27
            float r2 = (float) r2     // Catch: java.lang.Exception -> L27
            int r3 = r5.j     // Catch: java.lang.Exception -> L27
            float r3 = (float) r3     // Catch: java.lang.Exception -> L27
            r4 = 1073741824(0x40000000, float:2.0)
            float r3 = r3 / r4
            float r2 = r2 - r3
            r1[r0] = r2     // Catch: java.lang.Exception -> L27
            int r0 = r0 + 1
            goto L9
        L26:
            return
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            return
    }

    private void a(int r2, int r3) {
            r1 = this;
            android.graphics.Path r0 = r1.r
            if (r0 == 0) goto L7
            r0.reset()
        L7:
            android.graphics.Paint r0 = r1.s
            if (r0 == 0) goto L1b
            float r2 = (float) r2
            r0.setStrokeWidth(r2)
            android.graphics.Paint r2 = r1.s
            r2.setColor(r3)
            android.graphics.Paint r2 = r1.s
            android.graphics.Paint$Style r3 = android.graphics.Paint.Style.STROKE
            r2.setStyle(r3)
        L1b:
            return
    }

    private void a(android.graphics.Canvas r7) {
            r6 = this;
            int r2 = r6.j
            int r3 = r6.k
            android.graphics.RectF r4 = r6.o
            float[] r5 = r6.l
            r0 = r6
            r1 = r7
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private void a(android.graphics.Canvas r1, int r2, int r3, android.graphics.RectF r4, float[] r5) {
            r0 = this;
            r0.a(r2, r3)     // Catch: java.lang.Exception -> L18
            android.graphics.Path r2 = r0.r     // Catch: java.lang.Exception -> L18
            if (r2 == 0) goto Le
            android.graphics.Path r2 = r0.r     // Catch: java.lang.Exception -> L18
            android.graphics.Path$Direction r3 = android.graphics.Path.Direction.CCW     // Catch: java.lang.Exception -> L18
            r2.addRoundRect(r4, r5, r3)     // Catch: java.lang.Exception -> L18
        Le:
            if (r1 == 0) goto L17
            android.graphics.Path r2 = r0.r     // Catch: java.lang.Exception -> L18
            android.graphics.Paint r3 = r0.s     // Catch: java.lang.Exception -> L18
            r1.drawPath(r2, r3)     // Catch: java.lang.Exception -> L18
        L17:
            return
        L18:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void b() {
            r5 = this;
            float[] r0 = r5.l     // Catch: java.lang.Exception -> L71
            if (r0 == 0) goto L70
            float[] r0 = r5.m     // Catch: java.lang.Exception -> L71
            if (r0 == 0) goto L70
            r0 = 0
        L9:
            r1 = 2
            r2 = 1073741824(0x40000000, float:2.0)
            if (r0 >= r1) goto L24
            float[] r1 = r5.l     // Catch: java.lang.Exception -> L71
            int r3 = r5.f     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            r1[r0] = r3     // Catch: java.lang.Exception -> L71
            float[] r1 = r5.m     // Catch: java.lang.Exception -> L71
            int r3 = r5.f     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            int r4 = r5.j     // Catch: java.lang.Exception -> L71
            float r4 = (float) r4     // Catch: java.lang.Exception -> L71
            float r4 = r4 / r2
            float r3 = r3 - r4
            r1[r0] = r3     // Catch: java.lang.Exception -> L71
            int r0 = r0 + 1
            goto L9
        L24:
            r0 = 4
            if (r1 >= r0) goto L3d
            float[] r0 = r5.l     // Catch: java.lang.Exception -> L71
            int r3 = r5.g     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            r0[r1] = r3     // Catch: java.lang.Exception -> L71
            float[] r0 = r5.m     // Catch: java.lang.Exception -> L71
            int r3 = r5.g     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            int r4 = r5.j     // Catch: java.lang.Exception -> L71
            float r4 = (float) r4     // Catch: java.lang.Exception -> L71
            float r4 = r4 / r2
            float r3 = r3 - r4
            r0[r1] = r3     // Catch: java.lang.Exception -> L71
            int r1 = r1 + 1
            goto L24
        L3d:
            r1 = 6
            if (r0 >= r1) goto L56
            float[] r1 = r5.l     // Catch: java.lang.Exception -> L71
            int r3 = r5.h     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            r1[r0] = r3     // Catch: java.lang.Exception -> L71
            float[] r1 = r5.m     // Catch: java.lang.Exception -> L71
            int r3 = r5.h     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            int r4 = r5.j     // Catch: java.lang.Exception -> L71
            float r4 = (float) r4     // Catch: java.lang.Exception -> L71
            float r4 = r4 / r2
            float r3 = r3 - r4
            r1[r0] = r3     // Catch: java.lang.Exception -> L71
            int r0 = r0 + 1
            goto L3d
        L56:
            r0 = 8
            if (r1 >= r0) goto L70
            float[] r0 = r5.l     // Catch: java.lang.Exception -> L71
            int r3 = r5.i     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            r0[r1] = r3     // Catch: java.lang.Exception -> L71
            float[] r0 = r5.m     // Catch: java.lang.Exception -> L71
            int r3 = r5.i     // Catch: java.lang.Exception -> L71
            float r3 = (float) r3     // Catch: java.lang.Exception -> L71
            int r4 = r5.j     // Catch: java.lang.Exception -> L71
            float r4 = (float) r4     // Catch: java.lang.Exception -> L71
            float r4 = r4 / r2
            float r3 = r3 - r4
            r0[r1] = r3     // Catch: java.lang.Exception -> L71
            int r1 = r1 + 1
            goto L56
        L70:
            return
        L71:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private void c() {
            r7 = this;
            android.graphics.RectF r0 = r7.o
            if (r0 == 0) goto L1b
            int r1 = r7.j
            float r2 = (float) r1
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r3
            float r4 = (float) r1
            float r4 = r4 / r3
            int r5 = r7.c
            float r5 = (float) r5
            float r6 = (float) r1
            float r6 = r6 / r3
            float r5 = r5 - r6
            int r6 = r7.d
            float r6 = (float) r6
            float r1 = (float) r1
            float r1 = r1 / r3
            float r6 = r6 - r1
            r0.set(r2, r4, r5, r6)
        L1b:
            return
    }

    private void d() {
            r4 = this;
            android.graphics.RectF r0 = r4.n
            if (r0 == 0) goto Le
            int r1 = r4.c
            float r1 = (float) r1
            int r2 = r4.d
            float r2 = (float) r2
            r3 = 0
            r0.set(r3, r3, r1, r2)
        Le:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r8) {
            r7 = this;
            if (r8 != 0) goto L3
            return
        L3:
            android.graphics.RectF r0 = r7.n     // Catch: java.lang.Exception -> L8d
            r1 = 31
            r2 = 0
            r8.saveLayer(r0, r2, r1)     // Catch: java.lang.Exception -> L8d
            int r0 = r7.c     // Catch: java.lang.Exception -> L8d
            int r1 = r7.j     // Catch: java.lang.Exception -> L8d
            int r1 = r1 * 2
            int r0 = r0 - r1
            float r0 = (float) r0     // Catch: java.lang.Exception -> L8d
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r1
            int r3 = r7.c     // Catch: java.lang.Exception -> L8d
            float r3 = (float) r3     // Catch: java.lang.Exception -> L8d
            float r0 = r0 / r3
            int r3 = r7.d     // Catch: java.lang.Exception -> L8d
            int r4 = r7.j     // Catch: java.lang.Exception -> L8d
            int r4 = r4 * 2
            int r3 = r3 - r4
            float r3 = (float) r3     // Catch: java.lang.Exception -> L8d
            float r3 = r3 * r1
            int r1 = r7.d     // Catch: java.lang.Exception -> L8d
            float r1 = (float) r1     // Catch: java.lang.Exception -> L8d
            float r3 = r3 / r1
            int r1 = r7.c     // Catch: java.lang.Exception -> L8d
            float r1 = (float) r1     // Catch: java.lang.Exception -> L8d
            r4 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r4
            int r5 = r7.d     // Catch: java.lang.Exception -> L8d
            float r5 = (float) r5     // Catch: java.lang.Exception -> L8d
            float r5 = r5 / r4
            r8.scale(r0, r3, r1, r5)     // Catch: java.lang.Exception -> L8d
            super.onDraw(r8)     // Catch: java.lang.Exception -> L8d
            android.graphics.Paint r0 = r7.s     // Catch: java.lang.Exception -> L8d
            if (r0 == 0) goto L54
            android.graphics.Paint r0 = r7.s     // Catch: java.lang.Exception -> L8d
            r0.reset()     // Catch: java.lang.Exception -> L8d
            android.graphics.Paint r0 = r7.s     // Catch: java.lang.Exception -> L8d
            r1 = 1
            r0.setAntiAlias(r1)     // Catch: java.lang.Exception -> L8d
            android.graphics.Paint r0 = r7.s     // Catch: java.lang.Exception -> L8d
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL     // Catch: java.lang.Exception -> L8d
            r0.setStyle(r1)     // Catch: java.lang.Exception -> L8d
            android.graphics.Paint r0 = r7.s     // Catch: java.lang.Exception -> L8d
            android.graphics.Xfermode r1 = r7.b     // Catch: java.lang.Exception -> L8d
            r0.setXfermode(r1)     // Catch: java.lang.Exception -> L8d
        L54:
            android.graphics.Path r0 = r7.r     // Catch: java.lang.Exception -> L8d
            if (r0 == 0) goto L68
            android.graphics.Path r0 = r7.r     // Catch: java.lang.Exception -> L8d
            r0.reset()     // Catch: java.lang.Exception -> L8d
            android.graphics.Path r0 = r7.r     // Catch: java.lang.Exception -> L8d
            android.graphics.RectF r1 = r7.n     // Catch: java.lang.Exception -> L8d
            float[] r3 = r7.m     // Catch: java.lang.Exception -> L8d
            android.graphics.Path$Direction r4 = android.graphics.Path.Direction.CCW     // Catch: java.lang.Exception -> L8d
            r0.addRoundRect(r1, r3, r4)     // Catch: java.lang.Exception -> L8d
        L68:
            android.graphics.Path r0 = r7.r     // Catch: java.lang.Exception -> L8d
            android.graphics.Paint r1 = r7.s     // Catch: java.lang.Exception -> L8d
            r8.drawPath(r0, r1)     // Catch: java.lang.Exception -> L8d
            android.graphics.Paint r0 = r7.s     // Catch: java.lang.Exception -> L8d
            if (r0 == 0) goto L78
            android.graphics.Paint r0 = r7.s     // Catch: java.lang.Exception -> L8d
            r0.setXfermode(r2)     // Catch: java.lang.Exception -> L8d
        L78:
            r8.restore()     // Catch: java.lang.Exception -> L8d
            boolean r0 = r7.p     // Catch: java.lang.Exception -> L8d
            if (r0 == 0) goto L8c
            int r3 = r7.j     // Catch: java.lang.Exception -> L8d
            int r4 = r7.k     // Catch: java.lang.Exception -> L8d
            android.graphics.RectF r5 = r7.o     // Catch: java.lang.Exception -> L8d
            float[] r6 = r7.l     // Catch: java.lang.Exception -> L8d
            r1 = r7
            r2 = r8
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L8d
        L8c:
            return
        L8d:
            r8 = move-exception
            r8.getMessage()
            return
    }

    @Override
    protected void onSizeChanged(int r4, int r5, int r6, int r7) {
            r3 = this;
            super.onSizeChanged(r4, r5, r6, r7)
            r3.c = r4
            r3.d = r5
            boolean r4 = r3.q
            r5 = 0
            r6 = 1073741824(0x40000000, float:2.0)
            if (r4 == 0) goto L80
            float[] r4 = r3.l     // Catch: java.lang.Exception -> L7b
            if (r4 == 0) goto La7
            float[] r4 = r3.m     // Catch: java.lang.Exception -> L7b
            if (r4 == 0) goto La7
        L16:
            r4 = 2
            if (r5 >= r4) goto L2f
            float[] r4 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.f     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            float[] r4 = r3.m     // Catch: java.lang.Exception -> L7b
            int r7 = r3.f     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.j     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            int r5 = r5 + 1
            goto L16
        L2f:
            r5 = 4
            if (r4 >= r5) goto L48
            float[] r5 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.g     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            float[] r5 = r3.m     // Catch: java.lang.Exception -> L7b
            int r7 = r3.g     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.j     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            int r4 = r4 + 1
            goto L2f
        L48:
            r4 = 6
            if (r5 >= r4) goto L61
            float[] r4 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.h     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            float[] r4 = r3.m     // Catch: java.lang.Exception -> L7b
            int r7 = r3.h     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.j     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            int r5 = r5 + 1
            goto L48
        L61:
            r5 = 8
            if (r4 >= r5) goto La7
            float[] r5 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.i     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            float[] r5 = r3.m     // Catch: java.lang.Exception -> L7b
            int r7 = r3.i     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.j     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            int r4 = r4 + 1
            goto L61
        L7b:
            r4 = move-exception
            r4.printStackTrace()
            goto La7
        L80:
            float[] r4 = r3.l
            if (r4 == 0) goto La7
            float[] r4 = r3.m
            if (r4 == 0) goto La7
        L88:
            float[] r4 = r3.l     // Catch: java.lang.Exception -> La3
            int r4 = r4.length     // Catch: java.lang.Exception -> La3
            if (r5 >= r4) goto La7
            float[] r4 = r3.l     // Catch: java.lang.Exception -> La3
            int r7 = r3.e     // Catch: java.lang.Exception -> La3
            float r7 = (float) r7     // Catch: java.lang.Exception -> La3
            r4[r5] = r7     // Catch: java.lang.Exception -> La3
            float[] r4 = r3.m     // Catch: java.lang.Exception -> La3
            int r7 = r3.e     // Catch: java.lang.Exception -> La3
            float r7 = (float) r7     // Catch: java.lang.Exception -> La3
            int r0 = r3.j     // Catch: java.lang.Exception -> La3
            float r0 = (float) r0     // Catch: java.lang.Exception -> La3
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> La3
            int r5 = r5 + 1
            goto L88
        La3:
            r4 = move-exception
            r4.printStackTrace()
        La7:
            android.graphics.RectF r4 = r3.o
            if (r4 == 0) goto Lc0
            int r5 = r3.j
            float r7 = (float) r5
            float r7 = r7 / r6
            float r0 = (float) r5
            float r0 = r0 / r6
            int r1 = r3.c
            float r1 = (float) r1
            float r2 = (float) r5
            float r2 = r2 / r6
            float r1 = r1 - r2
            int r2 = r3.d
            float r2 = (float) r2
            float r5 = (float) r5
            float r5 = r5 / r6
            float r2 = r2 - r5
            r4.set(r7, r0, r1, r2)
        Lc0:
            android.graphics.RectF r4 = r3.n
            if (r4 == 0) goto Lce
            int r5 = r3.c
            float r5 = (float) r5
            int r6 = r3.d
            float r6 = (float) r6
            r7 = 0
            r4.set(r7, r7, r5, r6)
        Lce:
            return
    }

    public void setBorder(int r2, int r3, int r4) {
            r1 = this;
            r0 = 1
            r1.p = r0
            r1.j = r3
            r1.k = r4
            r1.e = r2
            return
    }

    public void setCornerRadius(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setCustomBorder(int r2, int r3, int r4, int r5, int r6, int r7) {
            r1 = this;
            r0 = 1
            r1.p = r0
            r1.q = r0
            r1.j = r6
            r1.k = r7
            r1.f = r2
            r1.h = r4
            r1.g = r3
            r1.i = r5
            return
    }
}
