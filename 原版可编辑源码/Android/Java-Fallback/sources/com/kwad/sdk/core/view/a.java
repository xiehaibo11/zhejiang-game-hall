package com.kwad.sdk.core.view;

public final class a extends android.text.style.ImageSpan {
    public a(android.content.Context r1, android.graphics.Bitmap r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public final void draw(android.graphics.Canvas r1, java.lang.CharSequence r2, int r3, int r4, float r5, int r6, int r7, int r8, android.graphics.Paint r9) {
            r0 = this;
            android.graphics.drawable.Drawable r2 = r0.getDrawable()
            r1.save()
            int r8 = r8 - r6
            android.graphics.Rect r3 = r2.getBounds()
            int r3 = r3.bottom
            int r8 = r8 - r3
            int r8 = r8 / 2
            int r8 = r8 + r6
            float r3 = (float) r8
            r1.translate(r5, r3)
            r2.draw(r1)
            r1.restore()
            return
    }

    @Override
    public final int getSize(android.graphics.Paint r1, java.lang.CharSequence r2, int r3, int r4, android.graphics.Paint.FontMetricsInt r5) {
            r0 = this;
            android.graphics.drawable.Drawable r2 = r0.getDrawable()
            android.graphics.Rect r2 = r2.getBounds()
            if (r5 == 0) goto L28
            android.graphics.Paint$FontMetricsInt r1 = r1.getFontMetricsInt()
            int r3 = r1.bottom
            int r1 = r1.top
            int r3 = r3 - r1
            int r1 = r2.bottom
            int r4 = r2.top
            int r1 = r1 - r4
            int r1 = r1 / 2
            int r3 = r3 / 4
            int r4 = r1 - r3
            int r1 = r1 + r3
            int r1 = -r1
            r5.ascent = r1
            r5.top = r1
            r5.bottom = r4
            r5.descent = r4
        L28:
            int r1 = r2.right
            return r1
    }
}
