package com.tkay.expressad.video.dynview.widget;

import android.animation.ObjectAnimator;
import android.content.Context;
import android.util.AttributeSet;
import android.widget.TextView;

public class TYTextView extends TextView {
    private ObjectAnimator a;

    public TYTextView(Context context) {
        super(context);
    }

    public TYTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYTextView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setObjectAnimator(ObjectAnimator objectAnimator) {
        this.a = objectAnimator;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        ObjectAnimator objectAnimator = this.a;
        if (objectAnimator != null) {
            try {
                objectAnimator.start();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ObjectAnimator objectAnimator = this.a;
        if (objectAnimator != null) {
            try {
                objectAnimator.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
