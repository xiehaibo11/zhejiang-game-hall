package com.tkay.core.common.ui.component;

public class RoundRelativeLayout extends android.widget.RelativeLayout {
    int a;

    public RoundRelativeLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RoundRelativeLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r2 = 1082130432(0x40800000, float:4.0)
            int r1 = dip2px(r1, r2)
            r0.a = r1
            return
    }

    public RoundRelativeLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void a(android.content.Context r2) {
            r1 = this;
            r0 = 1082130432(0x40800000, float:4.0)
            int r2 = dip2px(r2, r0)
            r1.a = r2
            return
    }

    public static int dip2px(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    @Override
    public void draw(android.graphics.Canvas r9) {
            r8 = this;
            int r0 = r8.getWidth()
            float r4 = (float) r0
            int r0 = r8.getHeight()
            float r5 = (float) r0
            r2 = 0
            r3 = 0
            r6 = 0
            r7 = 31
            r1 = r9
            int r0 = r1.saveLayer(r2, r3, r4, r5, r6, r7)
            super.draw(r9)
            int r1 = r8.getWidth()
            int r2 = r8.getHeight()
            int r3 = r8.a
            com.tkay.core.common.l.u.a(r9, r1, r2, r3)
            r9.restoreToCount(r0)
            return
    }
}
