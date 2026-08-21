package com.tkay.basead.ui;

public class WrapRoundImageView extends com.tkay.core.common.ui.component.RoundImageView {
    public WrapRoundImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public WrapRoundImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public int[] setBitmapAndResize(android.graphics.Bitmap r3, int r4, int r5) {
            r2 = this;
            r2.setImageBitmap(r3)
            r0 = 0
            if (r4 <= 0) goto L30
            if (r5 > 0) goto L9
            goto L30
        L9:
            int r1 = r3.getWidth()     // Catch: java.lang.Throwable -> L2c
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L2c
            int r3 = r3.getHeight()     // Catch: java.lang.Throwable -> L2c
            float r3 = (float) r3     // Catch: java.lang.Throwable -> L2c
            float r1 = r1 / r3
            int[] r3 = com.tkay.core.common.l.u.a(r4, r5, r1)     // Catch: java.lang.Throwable -> L2c
            android.view.ViewGroup$LayoutParams r4 = r2.getLayoutParams()     // Catch: java.lang.Throwable -> L2c
            if (r4 == 0) goto L30
            r5 = 0
            r5 = r3[r5]     // Catch: java.lang.Throwable -> L2c
            r4.width = r5     // Catch: java.lang.Throwable -> L2c
            r5 = 1
            r5 = r3[r5]     // Catch: java.lang.Throwable -> L2c
            r4.height = r5     // Catch: java.lang.Throwable -> L2c
            r2.setLayoutParams(r4)     // Catch: java.lang.Throwable -> L2c
            return r3
        L2c:
            r3 = move-exception
            r3.printStackTrace()
        L30:
            return r0
    }
}
