package com.kwad.components.ad.i;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.bj;

public final class a {
    private View GA;
    private Runnable GB;
    private boolean GC = false;
    private Animator gX;
    private View yp;
    private Button yq;
    private Button yr;

    public a(View view) {
        this.GA = view;
        initView();
    }

    private static Animator a(final View view, float f, final float f2, long j) {
        final float f3 = f / f2;
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, f2);
        valueAnimatorOfFloat.setDuration(j);
        valueAnimatorOfFloat.setInterpolator(PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f));
        final float dimension = view.getResources().getDimension(R.dimen.ksad_reward_apk_info_card_actionbar_text_size);
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                float f4 = f3 * fFloatValue;
                float f5 = f2;
                if (f5 != 0.0f) {
                    float f6 = (fFloatValue / f5) * dimension;
                    View view2 = view;
                    if (view2 instanceof TextView) {
                        ((TextView) view2).setTextSize(0, f6);
                    }
                }
                ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
                if (layoutParams != null) {
                    layoutParams.height = (int) fFloatValue;
                    layoutParams.width = (int) f4;
                    view.setLayoutParams(layoutParams);
                }
            }
        });
        return valueAnimatorOfFloat;
    }

    private static Animator a(final View view, View view2, int i, int i2, long j, long j2) {
        Animator animatorD = d(view, 200L);
        float f = i;
        float f2 = i2;
        Animator animatorA = a(view2, f, f2, 200L);
        animatorA.addListener(new com.kwad.components.ad.widget.tailframe.appbar.b() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                view.setAlpha(1.0f);
                ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
                if (layoutParams != null) {
                    layoutParams.width = 0;
                    layoutParams.height = 0;
                    view.setLayoutParams(layoutParams);
                }
            }
        });
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view2, "scaleX", 1.0f, 1.0f);
        objectAnimatorOfFloat.setDuration(1600L);
        Animator animatorD2 = d(view2, 200L);
        Animator animatorA2 = a(view, f, f2, 200L);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playSequentially(animatorD, animatorA, objectAnimatorOfFloat, animatorD2, animatorA2);
        return animatorSet;
    }

    private static Animator d(View view, long j) {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 0.0f);
        objectAnimatorOfFloat.setDuration(j);
        objectAnimatorOfFloat.setInterpolator(PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f));
        return objectAnimatorOfFloat;
    }

    private void initView() {
        this.yq = (Button) this.GA.findViewById(R.id.ksad_reward_apk_info_install_action);
        this.yr = (Button) this.GA.findViewById(R.id.ksad_reward_apk_info_install_start);
        this.yp = this.GA.findViewById(R.id.ksad_reward_apk_info_install_container);
    }

    public final void ia() {
        c.d("ApkInstallAnimHelper", "startAnimation");
        int height = this.yp.getHeight();
        int width = this.yp.getWidth();
        if (height == 0 || width == 0) {
            return;
        }
        if (this.gX == null) {
            Animator animatorA = a(this.yr, this.yq, width, height, 1600L, 200L);
            this.gX = animatorA;
            animatorA.addListener(new com.kwad.components.ad.widget.tailframe.appbar.b() {
                @Override
                public final void onAnimationEnd(final Animator animator) {
                    if (a.this.GC) {
                        return;
                    }
                    if (a.this.GB == null) {
                        a.this.GB = new Runnable() {
                            @Override
                            public final void run() {
                                animator.start();
                            }
                        };
                    }
                    bj.a(a.this.GB, null, 1600L);
                }
            });
        }
        c.d("ApkInstallAnimHelper", "mAnimator isStarted: " + this.gX.isStarted());
        if (!this.gX.isStarted()) {
            c.d("ApkInstallAnimHelper", "mAnimator.start()");
            this.gX.start();
        }
        this.GC = false;
    }

    public final void jU() {
        lN();
    }

    public final void lN() {
        Animator animator = this.gX;
        if (animator != null) {
            animator.cancel();
            this.gX.removeAllListeners();
            this.GC = true;
        }
        Runnable runnable = this.GB;
        if (runnable != null) {
            bj.b(runnable);
            this.GB = null;
        }
    }

    public final void lO() {
        this.GC = true;
    }
}
