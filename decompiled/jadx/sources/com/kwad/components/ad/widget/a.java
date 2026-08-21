package com.kwad.components.ad.widget;

import android.animation.ValueAnimator;
import android.view.View;
import android.view.ViewGroup;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a implements ValueAnimator.AnimatorUpdateListener {
    private WeakReference<View> Hj;

    public a(View view) {
        this.Hj = new WeakReference<>(view);
    }

    public abstract void a(ViewGroup.LayoutParams layoutParams, Object obj);

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public void onAnimationUpdate(ValueAnimator valueAnimator) {
        WeakReference<View> weakReference = this.Hj;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        View view = this.Hj.get();
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        a(layoutParams, valueAnimator.getAnimatedValue());
        view.setLayoutParams(layoutParams);
    }
}
