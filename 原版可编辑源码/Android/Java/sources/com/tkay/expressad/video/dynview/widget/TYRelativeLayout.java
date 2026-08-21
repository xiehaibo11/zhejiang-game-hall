package com.tkay.expressad.video.dynview.widget;

import android.animation.AnimatorSet;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RelativeLayout;

public class TYRelativeLayout extends RelativeLayout {
    private boolean a;
    private AnimatorSet b;
    private boolean c;

    public TYRelativeLayout(Context context) {
        super(context);
    }

    public TYRelativeLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYRelativeLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setAnimatorSet(AnimatorSet animatorSet) {
        this.b = animatorSet;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        AnimatorSet animatorSet = this.b;
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
        if (!this.a) {
            this.a = true;
        }
        AnimatorSet animatorSet = this.b;
        if (animatorSet != null) {
            try {
                animatorSet.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
    }
}
