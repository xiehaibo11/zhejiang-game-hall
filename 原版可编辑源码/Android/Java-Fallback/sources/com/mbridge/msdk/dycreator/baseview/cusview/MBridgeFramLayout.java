package com.mbridge.msdk.dycreator.baseview.cusview;

public class MBridgeFramLayout extends android.widget.FrameLayout {
    private android.animation.AnimatorSet a;

    public MBridgeFramLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeFramLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MBridgeFramLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            android.animation.AnimatorSet r0 = r1.a
            if (r0 == 0) goto Lf
            r0.start()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            android.animation.AnimatorSet r0 = r1.a
            if (r0 == 0) goto Lf
            r0.cancel()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    public void setAnimatorSet(android.animation.AnimatorSet r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
