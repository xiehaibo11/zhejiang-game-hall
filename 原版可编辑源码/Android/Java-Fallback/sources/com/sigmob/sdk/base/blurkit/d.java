package com.sigmob.sdk.base.blurkit;

public class d extends android.widget.ImageView {
    public static final int a = -16777216;
    public static final int b = 0;
    private float c;
    private android.graphics.RectF d;
    private android.graphics.PorterDuffXfermode e;

    public d(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            r2 = 0
            r1.c = r2
            android.graphics.RectF r2 = new android.graphics.RectF
            r2.<init>()
            r1.d = r2
            android.graphics.PorterDuffXfermode r2 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r0 = android.graphics.PorterDuff.Mode.SRC_IN
            r2.<init>(r0)
            r1.e = r2
            return
    }

    public d(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.c = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.d = r1
            android.graphics.PorterDuffXfermode r1 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.SRC_IN
            r1.<init>(r2)
            r0.e = r1
            return
    }

    public float getCornerRadius() {
            r1 = this;
            float r0 = r1.c
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r6) {
            r5 = this;
            android.graphics.drawable.Drawable r0 = r5.getDrawable()
            if (r0 == 0) goto L59
            boolean r1 = r0 instanceof android.graphics.drawable.BitmapDrawable
            if (r1 == 0) goto L59
            float r1 = r5.c
            r2 = 0
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 <= 0) goto L59
            android.graphics.RectF r1 = r5.d
            android.graphics.Rect r2 = r0.getBounds()
            r1.set(r2)
            android.graphics.RectF r1 = r5.d
            r2 = 0
            r3 = 31
            int r1 = r6.saveLayer(r1, r2, r3)
            android.graphics.Matrix r2 = r5.getImageMatrix()
            android.graphics.RectF r3 = r5.d
            r2.mapRect(r3)
            android.graphics.drawable.BitmapDrawable r0 = (android.graphics.drawable.BitmapDrawable) r0
            android.graphics.Paint r0 = r0.getPaint()
            r2 = 1
            r0.setAntiAlias(r2)
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setColor(r2)
            android.graphics.Xfermode r2 = r0.getXfermode()
            r3 = 0
            r6.drawARGB(r3, r3, r3, r3)
            android.graphics.RectF r3 = r5.d
            float r4 = r5.c
            r6.drawRoundRect(r3, r4, r4, r0)
            android.graphics.PorterDuffXfermode r3 = r5.e
            r0.setXfermode(r3)
            super.onDraw(r6)
            r0.setXfermode(r2)
            r6.restoreToCount(r1)
            goto L5c
        L59:
            super.onDraw(r6)
        L5c:
            return
    }

    public void setCornerRadius(float r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
