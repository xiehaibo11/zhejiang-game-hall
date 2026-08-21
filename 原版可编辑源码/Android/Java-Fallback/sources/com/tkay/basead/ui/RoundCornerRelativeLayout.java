package com.tkay.basead.ui;

public class RoundCornerRelativeLayout extends android.widget.RelativeLayout {
    private android.graphics.Path a;
    private android.graphics.Paint b;
    private android.graphics.RectF c;
    private float d;

    public RoundCornerRelativeLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.d = r1
            r0.a()
            return
    }

    public RoundCornerRelativeLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.d = r1
            r0.a()
            return
    }

    public RoundCornerRelativeLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.d = r1
            r0.a()
            return
    }

    public RoundCornerRelativeLayout(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 0
            r0.d = r1
            r0.a()
            return
    }

    private void a() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            r1 = 1094713344(0x41400000, float:12.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r1)
            float r0 = (float) r0
            r3.d = r0
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r3.a = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r1 = 1
            r0.<init>(r1)
            r3.b = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r3.c = r0
            android.graphics.Paint r0 = r3.b
            android.graphics.PorterDuffXfermode r1 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.DST_IN
            r1.<init>(r2)
            r0.setXfermode(r1)
            return
    }

    private android.graphics.Path b() {
            r4 = this;
            android.graphics.Path r0 = r4.a
            r0.reset()
            android.graphics.Path r0 = r4.a
            android.graphics.RectF r1 = r4.c
            float r2 = r4.d
            android.graphics.Path$Direction r3 = android.graphics.Path.Direction.CW
            r0.addRoundRect(r1, r2, r2, r3)
            android.graphics.Path r0 = r4.a
            return r0
    }

    @Override
    protected void dispatchDraw(android.graphics.Canvas r5) {
            r4 = this;
            r5.save()
            android.graphics.Path r0 = r4.a
            r0.reset()
            android.graphics.Path r0 = r4.a
            android.graphics.RectF r1 = r4.c
            float r2 = r4.d
            android.graphics.Path$Direction r3 = android.graphics.Path.Direction.CW
            r0.addRoundRect(r1, r2, r2, r3)
            android.graphics.Path r0 = r4.a
            r5.clipPath(r0)
            super.dispatchDraw(r5)
            r5.restore()
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            android.graphics.RectF r3 = r0.c
            float r1 = (float) r1
            float r2 = (float) r2
            r4 = 0
            r3.set(r4, r4, r1, r2)
            return
    }
}
