package com.kwad.components.ad.splashscreen.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import com.kwad.sdk.widget.KSFrameLayout;

public abstract class b extends KSFrameLayout {
    private Animator Fj;
    private boolean Fk;

    public b(Context context) {
        this(context, null, 0);
    }

    public b(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public b(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.Fk = false;
        a(context, attributeSet, i);
        ll();
    }

    protected void a(Context context, AttributeSet attributeSet, int i) {
    }

    @Override
    public final void ab() {
        super.ab();
        Animator animator = this.Fj;
        if (animator != null) {
            animator.cancel();
        }
    }

    protected abstract int getAnimationDelayTime();

    protected abstract View getInteractionView();

    protected abstract Animator lE();

    protected abstract void lF();

    public final void lG() {
        this.Fk = true;
        Animator animator = this.Fj;
        if (animator != null) {
            animator.cancel();
        }
    }

    public final void le() {
        Animator animator = this.Fj;
        if (animator != null) {
            animator.cancel();
            this.Fj = null;
        }
        Animator animatorLE = lE();
        this.Fj = animatorLE;
        if (animatorLE != null) {
            animatorLE.addListener(new AnimatorListenerAdapter() {
                @Override
                public final void onAnimationCancel(Animator animator2) {
                    super.onAnimationCancel(animator2);
                    b.this.lF();
                }

                @Override
                public final void onAnimationEnd(Animator animator2) {
                    super.onAnimationEnd(animator2);
                    if (b.this.Fk) {
                        return;
                    }
                    b.this.getInteractionView().postDelayed(new Runnable() {
                        @Override
                        public final void run() {
                            b.this.Fj.start();
                        }
                    }, b.this.getAnimationDelayTime());
                }
            });
            this.Fj.start();
        }
    }

    protected abstract void ll();
}
