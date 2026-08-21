package com.sigmob.sdk.base.views;

public class g extends com.sigmob.sdk.base.views.f {
    private final android.graphics.Paint a;
    private final float b;

    public g() {
            r1 = this;
            r0 = 1090519040(0x41000000, float:8.0)
            r1.<init>(r0)
            return
    }

    private g(float r3) {
            r2 = this;
            r2.<init>()
            r0 = 1073741824(0x40000000, float:2.0)
            float r0 = r3 / r0
            r2.b = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r2.a = r0
            r1 = -1
            r0.setColor(r1)
            android.graphics.Paint r0 = r2.a
            r0.setStrokeWidth(r3)
            android.graphics.Paint r3 = r2.a
            android.graphics.Paint$Cap r0 = com.sigmob.sdk.base.views.n.a.f
            r3.setStrokeCap(r0)
            return
    }

    @Override
    public void draw(android.graphics.Canvas r11) {
            r10 = this;
            android.graphics.Rect r0 = r10.getBounds()
            int r0 = r0.width()
            android.graphics.Rect r1 = r10.getBounds()
            int r1 = r1.height()
            float r2 = r10.b
            r3 = 0
            float r5 = r2 + r3
            float r1 = (float) r1
            float r6 = r1 - r2
            float r0 = (float) r0
            float r7 = r0 - r2
            float r8 = r2 + r3
            android.graphics.Paint r9 = r10.a
            r4 = r11
            r4.drawLine(r5, r6, r7, r8, r9)
            float r2 = r10.b
            float r5 = r2 + r3
            float r6 = r2 + r3
            float r7 = r0 - r2
            float r8 = r1 - r2
            android.graphics.Paint r9 = r10.a
            r4.drawLine(r5, r6, r7, r8, r9)
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
