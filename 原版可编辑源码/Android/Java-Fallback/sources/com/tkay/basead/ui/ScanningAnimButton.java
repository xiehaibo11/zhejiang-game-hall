package com.tkay.basead.ui;

public class ScanningAnimButton extends android.widget.Button {
    android.animation.ValueAnimator a;


    public ScanningAnimButton(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private static void a() {
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            r0.startAnimation()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.stopAnimation()
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            boolean r1 = r0.isShown()
            if (r1 == 0) goto Lf
            if (r2 != 0) goto Lf
            r0.startAnimation()
            return
        Lf:
            r0.stopAnimation()
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r2) {
            r1 = this;
            super.onWindowVisibilityChanged(r2)
            boolean r0 = r1.isShown()
            if (r0 == 0) goto Lf
            if (r2 != 0) goto Lf
            r1.startAnimation()
            return
        Lf:
            r1.stopAnimation()
            return
    }

    public void startAnimation() {
            r4 = this;
            android.animation.ValueAnimator r0 = r4.a
            if (r0 != 0) goto L2a
            r0 = 2
            float[] r1 = new float[r0]
            r1 = {x0038: FILL_ARRAY_DATA , data: [1065353216, 1064514355} // fill-array
            android.animation.ValueAnimator r1 = android.animation.ValueAnimator.ofFloat(r1)
            r4.a = r1
            r2 = 500(0x1f4, double:2.47E-321)
            r1.setDuration(r2)
            android.animation.ValueAnimator r1 = r4.a
            com.tkay.basead.ui.ScanningAnimButton$1 r2 = new com.tkay.basead.ui.ScanningAnimButton$1
            r2.<init>(r4)
            r1.addUpdateListener(r2)
            android.animation.ValueAnimator r1 = r4.a
            r1.setRepeatMode(r0)
            android.animation.ValueAnimator r0 = r4.a
            r1 = -1
            r0.setRepeatCount(r1)
        L2a:
            android.animation.ValueAnimator r0 = r4.a
            boolean r0 = r0.isStarted()
            if (r0 != 0) goto L37
            android.animation.ValueAnimator r0 = r4.a
            r0.start()
        L37:
            return
    }

    public void stopAnimation() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.a
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }
}
