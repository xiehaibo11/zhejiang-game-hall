package com.mbridge.msdk.splash.view.nativeview;

public class MBNoRecycledCrashImageView extends android.widget.ImageView {
    public MBNoRecycledCrashImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBNoRecycledCrashImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MBNoRecycledCrashImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public MBNoRecycledCrashImageView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r1) {
            r0 = this;
            super.onDraw(r1)     // Catch: java.lang.RuntimeException -> L4
            goto L8
        L4:
            r1 = move-exception
            r1.printStackTrace()
        L8:
            return
    }
}
