package com.tkay.basead.ui;

public class SpreadAnimLayout extends android.widget.FrameLayout {
    private android.graphics.Paint a;
    private android.animation.ValueAnimator b;
    private com.tkay.basead.ui.SpreadAnimLayout.a c;
    private android.graphics.RectF d;
    private android.graphics.RectF e;
    private int f;
    private int g;
    private int h;
    private android.graphics.Paint i;
    private boolean j;
    private boolean k;



    static class a {
        android.graphics.RectF a;
        int b;

        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public SpreadAnimLayout(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public SpreadAnimLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public SpreadAnimLayout(android.content.Context r5, android.util.AttributeSet r6, int r7) {
            r4 = this;
            r4.<init>(r5, r6, r7)
            r6 = 1
            r4.j = r6
            r7 = 0
            r4.setWillNotDraw(r7)
            android.content.res.Resources r7 = r4.getResources()
            java.lang.String r0 = "color_spread"
            java.lang.String r1 = "color"
            int r0 = com.tkay.core.common.l.h.a(r5, r0, r1)
            int r7 = r7.getColor(r0)
            android.content.res.Resources r0 = r4.getResources()
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_spread_max_distance_normal"
            java.lang.String r3 = "dimen"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            int r0 = r0.getDimensionPixelSize(r1)
            r4.g = r0
            r0 = 1082130432(0x40800000, float:4.0)
            int r5 = com.tkay.core.common.l.h.a(r5, r0)
            r4.f = r5
            r5 = 1000(0x3e8, float:1.401E-42)
            r4.h = r5
            android.graphics.Paint r5 = new android.graphics.Paint
            r5.<init>()
            r4.a = r5
            r5.setAntiAlias(r6)
            android.graphics.Paint r5 = r4.a
            r0 = 255(0xff, float:3.57E-43)
            r5.setAlpha(r0)
            android.graphics.Paint r5 = r4.a
            r5.setColor(r7)
            android.graphics.Paint r5 = new android.graphics.Paint
            r5.<init>(r6)
            r4.i = r5
            r6 = -1
            r5.setColor(r6)
            android.graphics.Paint r5 = r4.i
            android.graphics.Paint$Style r6 = android.graphics.Paint.Style.FILL
            r5.setStyle(r6)
            android.graphics.Paint r5 = r4.i
            android.graphics.PorterDuffXfermode r6 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r7 = android.graphics.PorterDuff.Mode.DST_OUT
            r6.<init>(r7)
            r5.setXfermode(r6)
            return
    }

    static com.tkay.basead.ui.SpreadAnimLayout.a a(com.tkay.basead.ui.SpreadAnimLayout r0) {
            com.tkay.basead.ui.SpreadAnimLayout$a r0 = r0.c
            return r0
    }

    static int b(com.tkay.basead.ui.SpreadAnimLayout r0) {
            int r0 = r0.g
            return r0
    }

    static android.graphics.RectF c(com.tkay.basead.ui.SpreadAnimLayout r0) {
            android.graphics.RectF r0 = r0.d
            return r0
    }

    @Override
    public void draw(android.graphics.Canvas r9) {
            r8 = this;
            boolean r0 = r8.j
            if (r0 == 0) goto L44
            boolean r0 = r8.k
            if (r0 == 0) goto L44
            r2 = 0
            r3 = 0
            int r0 = r8.getWidth()
            float r4 = (float) r0
            int r0 = r8.getHeight()
            float r5 = (float) r0
            r6 = 0
            r7 = 31
            r1 = r9
            int r0 = r1.saveLayer(r2, r3, r4, r5, r6, r7)
            android.graphics.Paint r1 = r8.a
            com.tkay.basead.ui.SpreadAnimLayout$a r2 = r8.c
            int r2 = r2.b
            r1.setAlpha(r2)
            com.tkay.basead.ui.SpreadAnimLayout$a r1 = r8.c
            android.graphics.RectF r1 = r1.a
            int r2 = r8.f
            float r3 = (float) r2
            float r2 = (float) r2
            android.graphics.Paint r4 = r8.a
            r9.drawRoundRect(r1, r3, r2, r4)
            android.graphics.RectF r1 = r8.d
            int r2 = r8.f
            float r3 = (float) r2
            float r2 = (float) r2
            android.graphics.Paint r4 = r8.i
            r9.drawRoundRect(r1, r3, r2, r4)
            r9.restoreToCount(r0)
            super.draw(r9)
            return
        L44:
            super.draw(r9)
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            return
    }

    @Override
    protected void onMeasure(int r1, int r2) {
            r0 = this;
            super.onMeasure(r1, r2)
            int r1 = r0.g
            r0.setPadding(r1, r1, r1, r1)
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r2) {
            r1 = this;
            super.onWindowVisibilityChanged(r2)
            boolean r0 = r1.j
            if (r0 == 0) goto L19
            if (r2 != 0) goto L12
            com.tkay.basead.ui.SpreadAnimLayout$1 r2 = new com.tkay.basead.ui.SpreadAnimLayout$1
            r2.<init>(r1)
            r1.post(r2)
            return
        L12:
            android.animation.ValueAnimator r2 = r1.b
            if (r2 == 0) goto L19
            r2.end()
        L19:
            return
    }

    public void setMaxSpreadDistance(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void startSpreadAnimation() {
            r7 = this;
            r0 = 0
            android.view.View r0 = r7.getChildAt(r0)
            if (r0 != 0) goto L8
            return
        L8:
            r1 = 1
            r7.j = r1
            boolean r2 = r7.k
            if (r2 != 0) goto L97
            android.graphics.RectF r2 = new android.graphics.RectF
            int r3 = r0.getLeft()
            float r3 = (float) r3
            int r4 = r0.getTop()
            float r4 = (float) r4
            int r5 = r0.getRight()
            float r5 = (float) r5
            int r6 = r0.getBottom()
            float r6 = (float) r6
            r2.<init>(r3, r4, r5, r6)
            r7.d = r2
            android.graphics.RectF r2 = new android.graphics.RectF
            android.graphics.RectF r3 = r7.d
            r2.<init>(r3)
            r7.e = r2
            com.tkay.basead.ui.SpreadAnimLayout$a r2 = new com.tkay.basead.ui.SpreadAnimLayout$a
            r2.<init>()
            r7.c = r2
            r3 = 255(0xff, float:3.57E-43)
            r2.b = r3
            com.tkay.basead.ui.SpreadAnimLayout$a r2 = r7.c
            android.graphics.RectF r3 = r7.e
            r2.a = r3
            int r2 = r7.getWidth()
            int r3 = r0.getWidth()
            int r2 = r2 - r3
            int r3 = r7.getHeight()
            int r0 = r0.getHeight()
            int r3 = r3 - r0
            int r0 = r7.g
            r4 = 2
            int r2 = r2 / r4
            int r3 = r3 / r4
            int r2 = java.lang.Math.min(r2, r3)
            int r0 = java.lang.Math.min(r0, r2)
            r7.g = r0
            float[] r0 = new float[r4]
            r0 = {x009e: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r7.b = r0
            int r2 = r7.h
            long r2 = (long) r2
            r0.setDuration(r2)
            android.animation.ValueAnimator r0 = r7.b
            r0.setRepeatMode(r1)
            android.animation.ValueAnimator r0 = r7.b
            r2 = -1
            r0.setRepeatCount(r2)
            android.animation.ValueAnimator r0 = r7.b
            android.view.animation.AccelerateDecelerateInterpolator r2 = new android.view.animation.AccelerateDecelerateInterpolator
            r2.<init>()
            r0.setInterpolator(r2)
            android.animation.ValueAnimator r0 = r7.b
            com.tkay.basead.ui.SpreadAnimLayout$2 r2 = new com.tkay.basead.ui.SpreadAnimLayout$2
            r2.<init>(r7)
            r0.addUpdateListener(r2)
            r7.k = r1
        L97:
            android.animation.ValueAnimator r0 = r7.b
            r0.start()
            return
    }
}
