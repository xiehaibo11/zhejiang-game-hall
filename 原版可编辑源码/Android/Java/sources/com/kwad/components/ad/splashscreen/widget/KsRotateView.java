package com.kwad.components.ad.splashscreen.widget;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.sdk.R;

public class KsRotateView extends b {
    private static int Fo = 50;
    private static int Fp = -12;
    private static int Fq = -25;
    private static int Fr = 12;
    private static int Fs = 25;
    private ImageView Fn;
    private int Ft;
    private ImageView eZ;

    public KsRotateView(Context context) {
        super(context);
    }

    public KsRotateView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public KsRotateView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override
    protected final void a(Context context, AttributeSet attributeSet, int i) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_KsShakeView, i, 0);
        this.Ft = typedArrayObtainStyledAttributes.getResourceId(R.styleable.ksad_KsShakeView_ksad_shakeIcon, R.drawable.ksad_ic_rotate_phone);
        typedArrayObtainStyledAttributes.recycle();
        ImageView imageView = new ImageView(getContext());
        this.Fn = imageView;
        imageView.setImageResource(R.drawable.ksad_ic_rotate_line);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 49;
        addView(this.Fn, layoutParams);
        this.eZ = new ImageView(getContext());
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams2.topMargin = com.kwad.sdk.d.a.a.a(context, 22.0f);
        layoutParams2.gravity = 1;
        addView(this.eZ, layoutParams2);
    }

    @Override
    protected int getAnimationDelayTime() {
        return 500;
    }

    @Override
    protected View getInteractionView() {
        return this.eZ;
    }

    @Override
    protected final Animator lE() {
        View interactionView = getInteractionView();
        if (interactionView == null) {
            return null;
        }
        AnimatorSet animatorSet = new AnimatorSet();
        interactionView.setPivotX(interactionView.getWidth() / 2.0f);
        interactionView.setPivotY(interactionView.getHeight() / 2.0f);
        ObjectAnimator duration = ObjectAnimator.ofFloat(interactionView, "rotation", 0.0f, Fq).setDuration(500L);
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(interactionView, "alpha", 1.0f, 1.0f);
        objectAnimatorOfFloat.setDuration(340L);
        ObjectAnimator duration2 = ObjectAnimator.ofFloat(interactionView, "rotation", Fq, 0.0f).setDuration(Fo);
        ObjectAnimator duration3 = ObjectAnimator.ofFloat(interactionView, "rotation", 0.0f, Fr).setDuration(Fo);
        ObjectAnimator duration4 = ObjectAnimator.ofFloat(interactionView, "rotation", Fr, 0.0f).setDuration(Fo);
        ObjectAnimator duration5 = ObjectAnimator.ofFloat(interactionView, "rotation", 0.0f, Fp).setDuration(Fo);
        ObjectAnimator duration6 = ObjectAnimator.ofFloat(interactionView, "rotation", Fp, 0.0f).setDuration(Fo);
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(interactionView, "alpha", 1.0f, 1.0f);
        objectAnimatorOfFloat2.setDuration(500L);
        ObjectAnimator duration7 = ObjectAnimator.ofFloat(interactionView, "rotation", 0.0f, Fs).setDuration(500L);
        ObjectAnimator objectAnimatorOfFloat3 = ObjectAnimator.ofFloat(interactionView, "alpha", 1.0f, 1.0f);
        objectAnimatorOfFloat.setDuration(340L);
        animatorSet.playSequentially(duration, objectAnimatorOfFloat, duration2, duration3, duration4, duration5, duration6, objectAnimatorOfFloat2, duration7, objectAnimatorOfFloat3, ObjectAnimator.ofFloat(interactionView, "rotation", Fs, 0.0f).setDuration(Fo), ObjectAnimator.ofFloat(interactionView, "rotation", 0.0f, Fp).setDuration(Fo), ObjectAnimator.ofFloat(interactionView, "rotation", Fp, 0.0f).setDuration(Fo), ObjectAnimator.ofFloat(interactionView, "rotation", 0.0f, Fr).setDuration(Fo), ObjectAnimator.ofFloat(interactionView, "rotation", Fr, 0.0f).setDuration(Fo));
        return animatorSet;
    }

    @Override
    protected final void lF() {
        getInteractionView().setRotation(0.0f);
    }

    @Override
    protected final void ll() {
        this.eZ.setImageResource(this.Ft);
    }
}
