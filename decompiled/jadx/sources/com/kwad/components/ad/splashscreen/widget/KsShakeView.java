package com.kwad.components.ad.splashscreen.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.util.AttributeSet;
import android.view.View;
import android.view.animation.Interpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.core.t.m;
import com.kwad.sdk.R;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public class KsShakeView extends KSFrameLayout {
    private float FA;
    private int FB;
    private Animator FC;
    private boolean FD;
    private int Fu;
    private float Fv;
    private int Fw;
    private int Fx;
    private int Fy;
    private float Fz;
    private ImageView eZ;
    private Animator fa;
    private Paint mPaint;

    public KsShakeView(Context context) {
        this(context, null, 0);
    }

    public KsShakeView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public KsShakeView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mPaint = new Paint();
        this.FD = false;
        a(context, attributeSet, i);
    }

    private Animator a(View view, long j, float f) {
        Interpolator interpolatorCreate;
        float height;
        if (view == null) {
            return null;
        }
        if (this.Fu == 1) {
            interpolatorCreate = PathInterpolatorCompat.create(0.22f, 0.59f, 0.36f, 1.0f);
            view.setPivotX(view.getWidth());
            height = view.getHeight();
        } else {
            interpolatorCreate = PathInterpolatorCompat.create(0.33f, 0.0f, 0.36f, 1.0f);
            view.setPivotX(view.getWidth() / 2.0f);
            height = view.getHeight() / 2.0f;
        }
        view.setPivotY(height);
        return m.a(view, interpolatorCreate, 100L, 16.0f);
    }

    private void a(Context context, AttributeSet attributeSet, int i) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_KsShakeView, i, 0);
        this.Fv = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KsShakeView_ksad_outerStrokeWidth, 1.0f);
        this.Fw = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_KsShakeView_ksad_outerStrokeColor, Color.parseColor("#4DFFFFFF"));
        this.Fx = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_KsShakeView_ksad_solidColor, Color.parseColor("#66000000"));
        this.Fu = typedArrayObtainStyledAttributes.getInteger(R.styleable.ksad_KsShakeView_ksad_shakeViewStyle, 1);
        this.Fy = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_KsShakeView_ksad_innerCircleStrokeColor, Color.parseColor("#B3FFFFFF"));
        this.Fz = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KsShakeView_ksad_innerCircleStrokeWidth, 1.0f);
        this.FB = typedArrayObtainStyledAttributes.getResourceId(R.styleable.ksad_KsShakeView_ksad_shakeIcon, R.drawable.ksad_ic_shake_hand);
        this.FA = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KsShakeView_ksad_innerCirclePadding, com.kwad.sdk.d.a.a.a(context, 10.0f));
        typedArrayObtainStyledAttributes.recycle();
        this.eZ = new ImageView(getContext());
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 17;
        addView(this.eZ, layoutParams);
        ll();
    }

    private static Animator b(View view, long j, float f) {
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.33f, 0.0f, 0.36f, 1.0f);
        AnimatorSet animatorSet = new AnimatorSet();
        ObjectAnimator duration = ObjectAnimator.ofFloat(view, "translationY", f).setDuration(100L);
        duration.setInterpolator(interpolatorCreate);
        float f2 = -f;
        ObjectAnimator duration2 = ObjectAnimator.ofFloat(view, "translationY", f2).setDuration(200L);
        duration2.setInterpolator(interpolatorCreate);
        ObjectAnimator duration3 = ObjectAnimator.ofFloat(view, "translationY", f).setDuration(200L);
        duration3.setInterpolator(interpolatorCreate);
        ObjectAnimator duration4 = ObjectAnimator.ofFloat(view, "translationY", f2).setDuration(200L);
        duration4.setInterpolator(interpolatorCreate);
        animatorSet.playSequentially(duration, duration2, duration3, duration4, ObjectAnimator.ofFloat(view, "translationY", f).setDuration(100L), ObjectAnimator.ofFloat(view, "alpha", 1.0f, 1.0f).setDuration(100L));
        return animatorSet;
    }

    private void ll() {
        this.eZ.setImageResource(this.FB);
    }

    private void setBgCirclePaint(Paint paint) {
        paint.reset();
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(this.Fx);
        paint.setAntiAlias(true);
    }

    private void setInnerCirclePaint(Paint paint) {
        paint.reset();
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(this.Fz);
        paint.setColor(this.Fy);
        paint.setAntiAlias(true);
    }

    private void setOuterCirclePaint(Paint paint) {
        paint.reset();
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(this.Fv);
        paint.setColor(this.Fw);
        paint.setAntiAlias(true);
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void ab() {
        super.ab();
        Animator animator = this.fa;
        if (animator != null) {
            animator.cancel();
        }
    }

    public final void ae(int i) {
        this.Fu = i;
        setIconDrawableRes(i != 2 ? R.drawable.ksad_ic_shake_hand : R.drawable.ksad_ic_shake_phone);
    }

    public final void b(AnimatorListenerAdapter animatorListenerAdapter) {
        this.FD = true;
        Animator animator = this.fa;
        if (animator != null) {
            animator.cancel();
        }
        this.eZ.setRotation(0.0f);
        int dimensionPixelSize = getResources().getDimensionPixelSize(R.dimen.ksad_splash_shake_animator_height);
        Animator animator2 = this.FC;
        if (animator2 != null) {
            animator2.cancel();
        }
        Animator animatorB = b(this, 100L, dimensionPixelSize);
        this.FC = animatorB;
        animatorB.addListener(animatorListenerAdapter);
        this.FC.start();
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout, android.view.ViewGroup, android.view.View
    public void dispatchDraw(Canvas canvas) {
        float fMin = Math.min(getWidth(), getHeight()) / 2.0f;
        setBgCirclePaint(this.mPaint);
        canvas.drawCircle(getWidth() / 2.0f, getHeight() / 2.0f, fMin, this.mPaint);
        setOuterCirclePaint(this.mPaint);
        canvas.drawCircle(getWidth() / 2.0f, getHeight() / 2.0f, fMin, this.mPaint);
        if (this.Fu == 2) {
            setInnerCirclePaint(this.mPaint);
            canvas.drawCircle(getWidth() / 2.0f, getHeight() / 2.0f, fMin - this.FA, this.mPaint);
        }
        super.dispatchDraw(canvas);
    }

    public final void lH() {
        this.FD = false;
        Animator animator = this.fa;
        if (animator != null) {
            animator.cancel();
            this.fa = null;
        }
        Animator animatorA = a(this.eZ, 100L, 16.0f);
        this.fa = animatorA;
        if (animatorA != null) {
            animatorA.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.splashscreen.widget.KsShakeView.1
                @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
                public final void onAnimationCancel(Animator animator2) {
                    super.onAnimationCancel(animator2);
                    KsShakeView.this.eZ.setRotation(0.0f);
                }

                @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
                public final void onAnimationEnd(Animator animator2) {
                    super.onAnimationEnd(animator2);
                    if (KsShakeView.this.FD || KsShakeView.this.fa == null) {
                        return;
                    }
                    KsShakeView.this.fa.start();
                }
            });
            this.fa.start();
        }
    }

    public final void lI() {
        Animator animator = this.fa;
        if (animator != null) {
            animator.cancel();
        }
        Animator animator2 = this.FC;
        if (animator2 != null) {
            animator2.cancel();
        }
        this.fa = null;
        this.FC = null;
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout, android.widget.FrameLayout, android.view.View
    public void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
    }

    public void setIconDrawableRes(int i) {
        ImageView imageView = this.eZ;
        if (imageView != null) {
            imageView.setImageResource(i);
        }
    }
}
