package com.tkay.expressad.video.dynview.widget;

import android.animation.AnimatorSet;
import android.content.Context;
import android.util.AttributeSet;
import android.widget.FrameLayout;

public class TYFramLayout extends FrameLayout {
    private AnimatorSet a;

    public TYFramLayout(Context context) {
        super(context);
    }

    public TYFramLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYFramLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setAnimatorSet(AnimatorSet animatorSet) {
        this.a = animatorSet;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        AnimatorSet animatorSet = this.a;
        if (animatorSet != null) {
            try {
                animatorSet.start();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        AnimatorSet animatorSet = this.a;
        if (animatorSet != null) {
            try {
                animatorSet.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
