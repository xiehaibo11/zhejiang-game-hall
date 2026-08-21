package com.tkay.basead.ui;

public abstract class BaseEndCardView extends android.widget.RelativeLayout {
    protected java.lang.String a;
    protected com.tkay.core.common.f.h b;
    protected com.tkay.core.common.f.i c;
    protected com.tkay.core.common.f.j d;
    private boolean e;

    public BaseEndCardView(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3) {
            r0 = this;
            r0.<init>(r1)
            java.lang.Class r1 = r0.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.a = r1
            r1 = 0
            super.setWillNotDraw(r1)
            r0.b = r2
            r0.c = r3
            com.tkay.core.common.f.j r1 = r3.m
            r0.d = r1
            return
    }

    private static android.graphics.RectF a(int r4, int r5) {
            int r4 = r4 / 2
            float r0 = (float) r5
            r1 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 * r0
            int r1 = (int) r1
            android.graphics.RectF r2 = new android.graphics.RectF
            r2.<init>()
            int r3 = r4 - r1
            float r3 = (float) r3
            r2.left = r3
            int r3 = r1 * 2
            int r5 = r5 - r3
            float r5 = (float) r5
            r2.top = r5
            int r4 = r4 + r1
            float r4 = (float) r4
            r2.right = r4
            r2.bottom = r0
            return r2
    }

    protected abstract void a();

    @Override
    public void draw(android.graphics.Canvas r10) {
            r9 = this;
            boolean r0 = r9.e     // Catch: java.lang.Exception -> L4f
            if (r0 == 0) goto L4f
            r2 = 0
            r3 = 0
            int r0 = r9.getWidth()     // Catch: java.lang.Exception -> L4f
            float r4 = (float) r0     // Catch: java.lang.Exception -> L4f
            int r0 = r9.getHeight()     // Catch: java.lang.Exception -> L4f
            float r5 = (float) r0     // Catch: java.lang.Exception -> L4f
            r6 = 0
            r7 = 31
            r1 = r10
            int r0 = r1.saveLayer(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4f
            super.draw(r10)     // Catch: java.lang.Exception -> L4f
            int r1 = r9.getWidth()     // Catch: java.lang.Exception -> L4f
            int r2 = r9.getHeight()     // Catch: java.lang.Exception -> L4f
            int r3 = r9.getWidth()     // Catch: java.lang.Exception -> L4f
            int r4 = r9.getHeight()     // Catch: java.lang.Exception -> L4f
            int r3 = r3 / 2
            float r5 = (float) r4     // Catch: java.lang.Exception -> L4f
            r6 = 1065353216(0x3f800000, float:1.0)
            float r6 = r6 * r5
            int r6 = (int) r6     // Catch: java.lang.Exception -> L4f
            android.graphics.RectF r7 = new android.graphics.RectF     // Catch: java.lang.Exception -> L4f
            r7.<init>()     // Catch: java.lang.Exception -> L4f
            int r8 = r3 - r6
            float r8 = (float) r8     // Catch: java.lang.Exception -> L4f
            r7.left = r8     // Catch: java.lang.Exception -> L4f
            int r8 = r6 * 2
            int r4 = r4 - r8
            float r4 = (float) r4     // Catch: java.lang.Exception -> L4f
            r7.top = r4     // Catch: java.lang.Exception -> L4f
            int r3 = r3 + r6
            float r3 = (float) r3     // Catch: java.lang.Exception -> L4f
            r7.right = r3     // Catch: java.lang.Exception -> L4f
            r7.bottom = r5     // Catch: java.lang.Exception -> L4f
            com.tkay.core.common.l.u.a(r10, r1, r2, r7)     // Catch: java.lang.Exception -> L4f
            r10.restoreToCount(r0)     // Catch: java.lang.Exception -> L4f
            return
        L4f:
            super.draw(r10)
            return
    }

    public void setNeedArc(boolean r1) {
            r0 = this;
            r0.e = r1
            r0.invalidate()
            return
    }
}
