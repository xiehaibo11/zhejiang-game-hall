package com.tkay.basead.ui;

import android.animation.ValueAnimator;
import android.content.Context;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.animation.ScaleAnimation;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.tkay.basead.ui.WaveAnimImageView;
import com.tkay.core.common.l.h;

public class GuideToClickView extends RelativeLayout {
    WaveAnimImageView a;
    WaveAnimImageView b;
    ImageView c;
    float d;
    float e;
    float f;
    float g;
    float h;
    float i;
    final int j;
    final int k;
    final float l;
    ValueAnimator m;
    ValueAnimator n;
    ScaleAnimation o;

    public GuideToClickView(Context context) {
        super(context);
        this.j = 1000;
        this.k = 200;
        this.l = 0.71428573f;
        a(context);
    }

    public GuideToClickView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.j = 1000;
        this.k = 200;
        this.l = 0.71428573f;
        a(context);
    }

    public GuideToClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.j = 1000;
        this.k = 200;
        this.l = 0.71428573f;
        a(context);
    }

    private void a(Context context) {
        LayoutInflater.from(context).inflate(h.a(context, "myoffer_guide_to_click", "layout"), this);
        this.d = 0.8f;
        this.e = 0.05f;
        this.f = h.a(context, 4.0f);
        this.g = h.a(context, 18.0f);
        this.h = h.a(context, 2.0f);
        this.i = h.a(context, 40.0f);
        this.a = (WaveAnimImageView) findViewById(h.a(context, "myoffer_wave_anim_image", "id"));
        this.b = (WaveAnimImageView) findViewById(h.a(context, "myoffer_wave_anim_image2", "id"));
        this.m = ValueAnimator.ofFloat(0.0f, 1.0f);
        this.n = ValueAnimator.ofFloat(0.0f, 1.0f);
        this.c = (ImageView) findViewById(h.a(context, "myoffer_guide_to_click_finger", "id"));
        ScaleAnimation scaleAnimation = new ScaleAnimation(1.0f, 1.1f, 1.0f, 1.1f);
        this.o = scaleAnimation;
        scaleAnimation.setRepeatMode(2);
        this.o.setRepeatCount(-1);
        this.o.setDuration(333L);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        startAnim(this.m, this.a, 0L);
        startAnim(this.n, this.b, 800L);
        this.c.startAnimation(this.o);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ValueAnimator valueAnimator = this.m;
        if (valueAnimator != null) {
            valueAnimator.cancel();
        }
        ValueAnimator valueAnimator2 = this.n;
        if (valueAnimator2 != null) {
            valueAnimator2.cancel();
        }
        ScaleAnimation scaleAnimation = this.o;
        if (scaleAnimation != null) {
            scaleAnimation.cancel();
        }
    }

    private void a() {
        startAnim(this.m, this.a, 0L);
        startAnim(this.n, this.b, 800L);
        this.c.startAnimation(this.o);
    }

    private void b() {
        ValueAnimator valueAnimator = this.m;
        if (valueAnimator != null) {
            valueAnimator.cancel();
        }
        ValueAnimator valueAnimator2 = this.n;
        if (valueAnimator2 != null) {
            valueAnimator2.cancel();
        }
        ScaleAnimation scaleAnimation = this.o;
        if (scaleAnimation != null) {
            scaleAnimation.cancel();
        }
    }

    public void startAnim(ValueAnimator valueAnimator, final WaveAnimImageView waveAnimImageView, long j) {
        if (valueAnimator != null) {
            valueAnimator.setRepeatMode(1);
            valueAnimator.setRepeatCount(-1);
            valueAnimator.setDuration(1400L);
            valueAnimator.removeAllUpdateListeners();
            valueAnimator.removeAllListeners();
            valueAnimator.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator2) {
                    float f;
                    float fFloatValue = ((Float) valueAnimator2.getAnimatedValue()).floatValue();
                    if (fFloatValue > 0.71428573f) {
                        waveAnimImageView.setVisibility(4);
                        return;
                    }
                    float f2 = fFloatValue / 0.71428573f;
                    float f3 = GuideToClickView.this.h + ((GuideToClickView.this.i - GuideToClickView.this.h) * f2);
                    float f4 = GuideToClickView.this.f + ((GuideToClickView.this.g - GuideToClickView.this.h) * f2);
                    double d = f2;
                    if (d < 0.2d) {
                        f = (float) (((double) GuideToClickView.this.d) + ((1.0d - (((double) (f2 * 1.0f)) / 0.2d)) * ((double) (GuideToClickView.this.e - GuideToClickView.this.d))));
                    } else {
                        f = (float) (((double) GuideToClickView.this.d) + ((((d - 0.2d) * 1.0d) / 0.8d) * ((double) (GuideToClickView.this.e - GuideToClickView.this.d))));
                    }
                    try {
                        if (GuideToClickView.this.isShown()) {
                            waveAnimImageView.setWaveAnimParams(new WaveAnimImageView.a(f3, f4, f));
                            if (waveAnimImageView.getVisibility() != 0) {
                                waveAnimImageView.setVisibility(0);
                            }
                        }
                    } catch (Throwable unused) {
                    }
                }
            });
            valueAnimator.setStartDelay(j);
            valueAnimator.start();
        }
    }
}
