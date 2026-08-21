package com.tkay.basead.ui;

import android.animation.ValueAnimator;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.Button;

public class ScanningAnimButton extends Button {
    ValueAnimator a;

    private static void a() {
    }

    public ScanningAnimButton(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        startAnimation();
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        stopAnimation();
    }

    @Override
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        if (isShown() && i == 0) {
            startAnimation();
        } else {
            stopAnimation();
        }
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (isShown() && i == 0) {
            startAnimation();
        } else {
            stopAnimation();
        }
    }

    public void startAnimation() {
        if (this.a == null) {
            ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(1.0f, 0.95f);
            this.a = valueAnimatorOfFloat;
            valueAnimatorOfFloat.setDuration(500L);
            this.a.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                    float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                    ScanningAnimButton.this.setScaleX(fFloatValue);
                    ScanningAnimButton.this.setScaleY(fFloatValue);
                }
            });
            this.a.setRepeatMode(2);
            this.a.setRepeatCount(-1);
        }
        if (this.a.isStarted()) {
            return;
        }
        this.a.start();
    }

    public void stopAnimation() {
        ValueAnimator valueAnimator = this.a;
        if (valueAnimator != null) {
            valueAnimator.cancel();
        }
    }
}
