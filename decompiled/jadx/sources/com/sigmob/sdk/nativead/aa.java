package com.sigmob.sdk.nativead;

import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.view.ViewGroup;
import android.view.animation.DecelerateInterpolator;

/* JADX INFO: loaded from: classes3.dex */
public class aa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ViewGroup f5094a;
    private z b;
    private z c;
    private long d;

    public aa(ViewGroup viewGroup, z zVar, z zVar2, long j) {
        this.f5094a = viewGroup;
        this.b = zVar;
        this.c = zVar2;
        this.d = j;
    }

    public void a() {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.f5094a, "x", this.b.a(), this.c.a());
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(this.f5094a, "y", this.b.b(), this.c.b());
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(this.b.c(), this.c.c());
        ValueAnimator valueAnimatorOfInt2 = ValueAnimator.ofInt(this.b.d(), this.c.d());
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.sigmob.sdk.nativead.aa.1
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public void onAnimationUpdate(ValueAnimator valueAnimator) {
                ViewGroup.LayoutParams layoutParams = aa.this.f5094a.getLayoutParams();
                layoutParams.width = ((Integer) valueAnimator.getAnimatedValue()).intValue();
                aa.this.f5094a.setLayoutParams(layoutParams);
            }
        });
        valueAnimatorOfInt2.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.sigmob.sdk.nativead.aa.2
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public void onAnimationUpdate(ValueAnimator valueAnimator) {
                ViewGroup.LayoutParams layoutParams = aa.this.f5094a.getLayoutParams();
                layoutParams.height = ((Integer) valueAnimator.getAnimatedValue()).intValue();
                aa.this.f5094a.setLayoutParams(layoutParams);
            }
        });
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playTogether(objectAnimatorOfFloat, objectAnimatorOfFloat2, valueAnimatorOfInt, valueAnimatorOfInt2);
        animatorSet.setDuration(this.d);
        animatorSet.setInterpolator(new DecelerateInterpolator());
        animatorSet.start();
    }
}
