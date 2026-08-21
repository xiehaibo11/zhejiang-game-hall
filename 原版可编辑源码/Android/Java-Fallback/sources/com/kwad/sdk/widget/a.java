package com.kwad.sdk.widget;

public final class a {
    public static android.animation.ValueAnimator ofArgb(int... r1) {
            android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
            r0.<init>()
            r0.setIntValues(r1)
            android.animation.ArgbEvaluator r1 = com.kwad.sdk.widget.b.KE()
            r0.setEvaluator(r1)
            return r0
    }
}
