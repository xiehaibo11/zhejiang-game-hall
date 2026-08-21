package com.tkay.expressad.video.dynview.widget;

public class TYRelativeLayout extends android.widget.RelativeLayout {
    private boolean a;
    private android.animation.AnimatorSet b;
    private boolean c;

    public TYRelativeLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TYRelativeLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public TYRelativeLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            android.animation.AnimatorSet r0 = r1.b
            if (r0 == 0) goto Lf
            r0.start()     // Catch: java.lang.Exception -> Lb
            return
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
            boolean r0 = r1.a
            if (r0 != 0) goto La
            r0 = 1
            r1.a = r0
        La:
            android.animation.AnimatorSet r0 = r1.b
            if (r0 == 0) goto L16
            r0.cancel()     // Catch: java.lang.Exception -> L12
            return
        L12:
            r0 = move-exception
            r0.printStackTrace()
        L16:
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            return
    }

    public void setAnimatorSet(android.animation.AnimatorSet r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
