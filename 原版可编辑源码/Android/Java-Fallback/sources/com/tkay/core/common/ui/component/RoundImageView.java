package com.tkay.core.common.ui.component;

public class RoundImageView extends com.tkay.core.common.res.image.RecycleImageView {
    int a;
    boolean b;

    public RoundImageView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            android.content.Context r2 = r1.getContext()
            r0 = 1084227584(0x40a00000, float:5.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r0)
            r1.a = r2
            return
    }

    public RoundImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            android.content.Context r1 = r0.getContext()
            r2 = 1084227584(0x40a00000, float:5.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r0.a = r1
            return
    }

    public RoundImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.content.Context r1 = r0.getContext()
            r2 = 1084227584(0x40a00000, float:5.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r0.a = r1
            return
    }

    @Override
    protected void dispatchDraw(android.graphics.Canvas r9) {
            r8 = this;
            boolean r0 = r8.b     // Catch: java.lang.Exception -> L47
            if (r0 == 0) goto L47
            r2 = 0
            r3 = 0
            int r0 = r8.getWidth()     // Catch: java.lang.Exception -> L47
            float r4 = (float) r0     // Catch: java.lang.Exception -> L47
            int r0 = r8.getHeight()     // Catch: java.lang.Exception -> L47
            float r5 = (float) r0     // Catch: java.lang.Exception -> L47
            r6 = 0
            r7 = 31
            r1 = r9
            int r0 = r1.saveLayer(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L47
            super.dispatchDraw(r9)     // Catch: java.lang.Exception -> L47
            int r1 = r8.getPaddingLeft()     // Catch: java.lang.Exception -> L47
            float r1 = (float) r1     // Catch: java.lang.Exception -> L47
            int r2 = r8.getPaddingTop()     // Catch: java.lang.Exception -> L47
            float r2 = (float) r2     // Catch: java.lang.Exception -> L47
            r9.translate(r1, r2)     // Catch: java.lang.Exception -> L47
            int r1 = r8.getWidth()     // Catch: java.lang.Exception -> L47
            int r2 = r8.getPaddingLeft()     // Catch: java.lang.Exception -> L47
            int r2 = r2 * 2
            int r1 = r1 - r2
            int r2 = r8.getHeight()     // Catch: java.lang.Exception -> L47
            int r3 = r8.getPaddingTop()     // Catch: java.lang.Exception -> L47
            int r3 = r3 * 2
            int r2 = r2 - r3
            int r3 = r8.a     // Catch: java.lang.Exception -> L47
            com.tkay.core.common.l.u.a(r9, r1, r2, r3)     // Catch: java.lang.Exception -> L47
            r9.restoreToCount(r0)     // Catch: java.lang.Exception -> L47
            return
        L47:
            super.dispatchDraw(r9)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r9) {
            r8 = this;
            boolean r0 = r8.b     // Catch: java.lang.Exception -> L47
            if (r0 == 0) goto L47
            r2 = 0
            r3 = 0
            int r0 = r8.getWidth()     // Catch: java.lang.Exception -> L47
            float r4 = (float) r0     // Catch: java.lang.Exception -> L47
            int r0 = r8.getHeight()     // Catch: java.lang.Exception -> L47
            float r5 = (float) r0     // Catch: java.lang.Exception -> L47
            r6 = 0
            r7 = 31
            r1 = r9
            int r0 = r1.saveLayer(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L47
            super.onDraw(r9)     // Catch: java.lang.Exception -> L47
            int r1 = r8.getPaddingLeft()     // Catch: java.lang.Exception -> L47
            float r1 = (float) r1     // Catch: java.lang.Exception -> L47
            int r2 = r8.getPaddingTop()     // Catch: java.lang.Exception -> L47
            float r2 = (float) r2     // Catch: java.lang.Exception -> L47
            r9.translate(r1, r2)     // Catch: java.lang.Exception -> L47
            int r1 = r8.getWidth()     // Catch: java.lang.Exception -> L47
            int r2 = r8.getPaddingLeft()     // Catch: java.lang.Exception -> L47
            int r2 = r2 * 2
            int r1 = r1 - r2
            int r2 = r8.getHeight()     // Catch: java.lang.Exception -> L47
            int r3 = r8.getPaddingTop()     // Catch: java.lang.Exception -> L47
            int r3 = r3 * 2
            int r2 = r2 - r3
            int r3 = r8.a     // Catch: java.lang.Exception -> L47
            com.tkay.core.common.l.u.a(r9, r1, r2, r3)     // Catch: java.lang.Exception -> L47
            r9.restoreToCount(r0)     // Catch: java.lang.Exception -> L47
            return
        L47:
            super.onDraw(r9)
            return
    }

    public void setNeedRadiu(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setRadiusInDip(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            float r2 = (float) r2
            int r2 = com.tkay.core.common.l.h.a(r0, r2)
            r1.a = r2
            return
    }
}
