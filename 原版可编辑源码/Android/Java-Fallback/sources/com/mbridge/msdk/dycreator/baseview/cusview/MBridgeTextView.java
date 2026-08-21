package com.mbridge.msdk.dycreator.baseview.cusview;

public class MBridgeTextView extends android.widget.TextView {
    private android.animation.ObjectAnimator a;

    public MBridgeTextView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeTextView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MBridgeTextView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            android.animation.ObjectAnimator r0 = r1.a
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
            android.animation.ObjectAnimator r0 = r1.a
            if (r0 == 0) goto Lf
            r0.cancel()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    public void setObjectAnimator(android.animation.ObjectAnimator r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
