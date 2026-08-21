package com.kwad.components.ad.reward.widget.tailframe;

import android.animation.ValueAnimator;
import android.content.Context;
import android.util.AttributeSet;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;

public class TailFrameBarH5View extends LinearLayout {
    protected TextView dB;
    protected TextView dC;
    protected ValueAnimator iI;

    public TailFrameBarH5View(Context context) {
        this(context, null, 0);
    }

    public TailFrameBarH5View(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TailFrameBarH5View(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    private void f(Context context, int i) {
        l.inflate(context, i, this);
        this.dB = (TextView) findViewById(R.id.ksad_tf_h5_ad_desc);
        this.dC = (TextView) findViewById(R.id.ksad_tf_h5_open_btn);
    }

    private void kp() {
        if (this.iI != null) {
            kq();
            this.iI.start();
        }
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(1.0f, 1.2f, 1.0f);
        this.iI = valueAnimatorOfFloat;
        valueAnimatorOfFloat.setDuration(1200L);
        this.iI.setRepeatCount(-1);
        this.iI.setRepeatMode(1);
        this.iI.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                TailFrameBarH5View.this.dC.setScaleY(fFloatValue);
                TailFrameBarH5View.this.dC.setScaleX(fFloatValue);
            }
        });
        this.iI.start();
    }

    public final void b(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        this.dB.setText(com.kwad.sdk.core.response.b.a.an(adInfoCg));
        this.dC.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
        kp();
    }

    public final void e(boolean z, boolean z2) {
        f(getContext(), z ? z2 ? R.layout.ksad_video_tf_bar_h5_portrait_vertical : R.layout.ksad_video_tf_bar_h5_portrait_horizontal : R.layout.ksad_video_tf_bar_h5_landscape);
    }

    public TextView getH5OpenBtn() {
        return this.dC;
    }

    public final void kq() {
        ValueAnimator valueAnimator = this.iI;
        if (valueAnimator == null || !valueAnimator.isRunning()) {
            return;
        }
        this.iI.cancel();
        this.iI.end();
    }
}
