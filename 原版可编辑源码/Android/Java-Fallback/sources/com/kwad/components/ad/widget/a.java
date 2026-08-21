package com.kwad.components.ad.widget;

public abstract class a implements android.animation.ValueAnimator.AnimatorUpdateListener {
    private java.lang.ref.WeakReference<android.view.View> Hj;

    public a(android.view.View r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.Hj = r0
            return
    }

    public abstract void a(android.view.ViewGroup.LayoutParams r1, java.lang.Object r2);

    @Override
    public void onAnimationUpdate(android.animation.ValueAnimator r3) {
            r2 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r2.Hj
            if (r0 == 0) goto L20
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L20
            java.lang.ref.WeakReference<android.view.View> r0 = r2.Hj
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            java.lang.Object r3 = r3.getAnimatedValue()
            r2.a(r1, r3)
            r0.setLayoutParams(r1)
        L20:
            return
    }
}
