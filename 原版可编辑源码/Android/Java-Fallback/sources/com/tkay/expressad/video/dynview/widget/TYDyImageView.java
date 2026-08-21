package com.tkay.expressad.video.dynview.widget;

public class TYDyImageView extends android.widget.ImageView {
    private static final java.lang.String a = "TYDyImageView";

    public TYDyImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TYDyImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public TYDyImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r1) {
            r0 = this;
            super.onDraw(r1)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r1 = move-exception
            r1.getMessage()
            return
    }
}
