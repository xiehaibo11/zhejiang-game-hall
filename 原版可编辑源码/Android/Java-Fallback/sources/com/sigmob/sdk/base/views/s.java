package com.sigmob.sdk.base.views;

public class s extends com.sigmob.sdk.base.views.f {
    private final android.graphics.Paint a;
    private final android.graphics.Paint b;
    private int c;
    private int d;
    private int e;
    private int f;
    private float g;
    private final int h;

    public s(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r3.a = r0
            r1 = -1
            r0.setColor(r1)
            android.graphics.Paint r0 = r3.a
            r1 = 128(0x80, float:1.8E-43)
            r0.setAlpha(r1)
            android.graphics.Paint r0 = r3.a
            android.graphics.Paint$Style r1 = com.sigmob.sdk.base.views.n.b.e
            r0.setStyle(r1)
            android.graphics.Paint r0 = r3.a
            r1 = 1
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r3.b = r0
            int r2 = com.sigmob.sdk.base.views.n.b.f
            r0.setColor(r2)
            android.graphics.Paint r0 = r3.b
            r2 = 255(0xff, float:3.57E-43)
            r0.setAlpha(r2)
            android.graphics.Paint r0 = r3.b
            android.graphics.Paint$Style r2 = com.sigmob.sdk.base.views.n.b.h
            r0.setStyle(r2)
            android.graphics.Paint r0 = r3.b
            r0.setAntiAlias(r1)
            r0 = 1082130432(0x40800000, float:4.0)
            int r4 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r4)
            r3.h = r4
            return
    }

    private void d() {
            r1 = this;
            int r0 = r1.c
            r1.e = r0
            return
    }

    public void a() {
            r1 = this;
            r0 = 0
            r1.f = r0
            return
    }

    public void a(int r4) {
            r3 = this;
            int r0 = r3.f
            if (r4 < r0) goto L9
            r3.e = r4
            r3.f = r4
            goto L28
        L9:
            if (r4 == 0) goto L28
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1[r2] = r0
            r0 = 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1[r0] = r4
            java.lang.String r4 = "Progress not monotonically increasing: last = %d, current = %d"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            com.czhj.sdk.logger.SigmobLog.d(r4)
            r3.d()
        L28:
            r3.invalidateSelf()
            return
    }

    public void a(int r1, int r2) {
            r0 = this;
            r0.c = r1
            r0.d = r2
            float r2 = (float) r2
            float r1 = (float) r1
            float r2 = r2 / r1
            r0.g = r2
            return
    }

    @java.lang.Deprecated
    public float b() {
            r1 = this;
            float r0 = r1.g
            return r0
    }

    @java.lang.Deprecated
    public int c() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    @Override
    public void draw(android.graphics.Canvas r9) {
            r8 = this;
            android.graphics.Rect r0 = r8.getBounds()
            android.graphics.Paint r1 = r8.a
            r9.drawRect(r0, r1)
            int r0 = r8.e
            float r0 = (float) r0
            int r1 = r8.c
            float r1 = (float) r1
            float r0 = r0 / r1
            android.graphics.Rect r1 = r8.getBounds()
            int r1 = r1.left
            float r3 = (float) r1
            android.graphics.Rect r1 = r8.getBounds()
            int r1 = r1.top
            float r4 = (float) r1
            android.graphics.Rect r1 = r8.getBounds()
            int r1 = r1.right
            float r1 = (float) r1
            float r5 = r1 * r0
            android.graphics.Rect r0 = r8.getBounds()
            int r0 = r0.bottom
            float r6 = (float) r0
            android.graphics.Paint r7 = r8.b
            r2 = r9
            r2.drawRect(r3, r4, r5, r6, r7)
            int r0 = r8.d
            if (r0 <= 0) goto L60
            int r1 = r8.c
            if (r0 >= r1) goto L60
            android.graphics.Rect r0 = r8.getBounds()
            int r0 = r0.right
            float r0 = (float) r0
            float r1 = r8.g
            float r3 = r0 * r1
            android.graphics.Rect r0 = r8.getBounds()
            int r0 = r0.top
            float r4 = (float) r0
            int r0 = r8.h
            float r0 = (float) r0
            float r5 = r3 + r0
            android.graphics.Rect r0 = r8.getBounds()
            int r0 = r0.bottom
            float r6 = (float) r0
            android.graphics.Paint r7 = r8.b
            r2 = r9
            r2.drawRect(r3, r4, r5, r6, r7)
        L60:
            return
    }

    @Override
    public int getOpacity() {
            r1 = this;
            int r0 = super.getOpacity()
            return r0
    }

    @Override
    public void setAlpha(int r1) {
            r0 = this;
            super.setAlpha(r1)
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r1) {
            r0 = this;
            super.setColorFilter(r1)
            return
    }
}
