package com.mbridge.msdk.widget.custom.baseview;

final class b extends android.graphics.drawable.Drawable {
    private float a;
    private float b;
    private int c;
    private int d;
    private int e;
    private android.graphics.RectF f;
    private android.graphics.Paint g;
    private android.graphics.Path h;

    public b(int r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.d = r2
            r0.e = r3
            r1 = -1028390912(0xffffffffc2b40000, float:-90.0)
            r0.b = r1
            r1 = 0
            r0.a = r1
            return
    }

    public final void a(float r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public final void draw(android.graphics.Canvas r8) {
            r7 = this;
            android.graphics.Rect r0 = r7.getBounds()
            android.graphics.Path r1 = r7.h
            if (r1 != 0) goto Lf
            android.graphics.Path r1 = new android.graphics.Path
            r1.<init>()
            r7.h = r1
        Lf:
            android.graphics.Path r1 = r7.h
            r1.reset()
            android.graphics.Path r1 = r7.h
            android.graphics.RectF r2 = r7.f
            if (r2 != 0) goto L2d
            int r2 = r7.d
            int r2 = r2 / 2
            android.graphics.RectF r3 = new android.graphics.RectF
            float r4 = (float) r2
            int r5 = r7.c
            int r6 = r5 - r2
            float r6 = (float) r6
            int r5 = r5 - r2
            float r2 = (float) r5
            r3.<init>(r4, r4, r6, r2)
            r7.f = r3
        L2d:
            android.graphics.RectF r2 = r7.f
            float r3 = r7.b
            float r4 = r7.a
            r1.addArc(r2, r3, r4)
            android.graphics.Path r1 = r7.h
            int r2 = r0.left
            float r2 = (float) r2
            int r0 = r0.top
            float r0 = (float) r0
            r1.offset(r2, r0)
            android.graphics.Path r0 = r7.h
            android.graphics.Paint r1 = r7.g
            if (r1 != 0) goto L68
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r7.g = r1
            r2 = 1
            r1.setAntiAlias(r2)
            android.graphics.Paint r1 = r7.g
            android.graphics.Paint$Style r2 = android.graphics.Paint.Style.STROKE
            r1.setStyle(r2)
            android.graphics.Paint r1 = r7.g
            int r2 = r7.d
            float r2 = (float) r2
            r1.setStrokeWidth(r2)
            android.graphics.Paint r1 = r7.g
            int r2 = r7.e
            r1.setColor(r2)
        L68:
            android.graphics.Paint r1 = r7.g
            r8.drawPath(r0, r1)
            return
    }

    @Override
    public final int getOpacity() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void setAlpha(int r1) {
            r0 = this;
            return
    }

    @Override
    public final void setColorFilter(android.graphics.ColorFilter r1) {
            r0 = this;
            return
    }
}
