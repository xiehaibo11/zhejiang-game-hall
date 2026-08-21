package com.tkay.basead.ui;

import android.animation.ValueAnimator;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.TextView;

/* JADX INFO: loaded from: classes3.dex */
public class ScanningAnimTextView extends TextView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    ValueAnimator f5828a;

    private static void a() {
    }

    public ScanningAnimTextView(Context context) {
        super(context);
    }

    public ScanningAnimTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override // android.widget.TextView, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        startAnimation();
    }

    @Override // android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        stopAnimation();
    }

    @Override // android.view.View
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        if (isShown() && i == 0) {
            startAnimation();
        } else {
            stopAnimation();
        }
    }

    @Override // android.widget.TextView, android.view.View
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (isShown() && i == 0) {
            startAnimation();
        } else {
            stopAnimation();
        }
    }

    public void startAnimation() {
        if (this.f5828a == null) {
            ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(1.0f, 0.95f);
            this.f5828a = valueAnimatorOfFloat;
            valueAnimatorOfFloat.setDuration(500L);
            this.f5828a.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.tkay.basead.ui.ScanningAnimTextView.1
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                    float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                    ScanningAnimTextView.this.setScaleX(fFloatValue);
                    ScanningAnimTextView.this.setScaleY(fFloatValue);
                }
            });
            this.f5828a.setRepeatMode(2);
            this.f5828a.setRepeatCount(-1);
        }
        if (this.f5828a.isStarted()) {
            return;
        }
        this.f5828a.start();
    }

    public void stopAnimation() {
        ValueAnimator valueAnimator = this.f5828a;
        if (valueAnimator != null) {
            valueAnimator.cancel();
        }
    }
}
