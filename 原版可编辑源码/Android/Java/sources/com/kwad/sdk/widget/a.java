package com.kwad.sdk.widget;

import android.animation.ValueAnimator;

public final class a {
    public static ValueAnimator ofArgb(int... iArr) {
        ValueAnimator valueAnimator = new ValueAnimator();
        valueAnimator.setIntValues(iArr);
        valueAnimator.setEvaluator(b.KE());
        return valueAnimator;
    }
}
