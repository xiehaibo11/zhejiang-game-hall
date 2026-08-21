package com.kwad.components.ad.reward.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.os.Message;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.t.g;
import com.kwad.components.core.widget.KSCornerImageView;
import com.kwad.components.core.widget.e;
import com.kwad.sdk.R;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.b.a;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.bn;

/* JADX INFO: loaded from: classes2.dex */
public class KsAuthorIconView extends FrameLayout implements bn.a {
    private ViewGroup AG;
    private KSCornerImageView AH;
    private KSCornerImageView AI;
    private KSCornerImageView AJ;
    private TextView AK;
    private View AL;
    private View AM;
    private ImageView AN;
    private View AO;
    private View AP;
    private View AQ;
    private View AR;
    private final bn gx;
    private KSCornerImageView zO;

    public KsAuthorIconView(Context context) {
        super(context);
        this.gx = new bn(this);
        R(context);
    }

    public KsAuthorIconView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.gx = new bn(this);
        R(context);
    }

    public KsAuthorIconView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.gx = new bn(this);
        R(context);
    }

    public KsAuthorIconView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.gx = new bn(this);
        R(context);
    }

    private void R(Context context) {
        l.inflate(context, R.layout.ksad_author_icon, this);
        this.AG = (ViewGroup) findViewById(R.id.ksad_author_icon_frame);
        this.zO = (KSCornerImageView) findViewById(R.id.ksad_author_icon);
        this.AH = (KSCornerImageView) findViewById(R.id.ksad_author_icon_outer);
        this.AI = (KSCornerImageView) findViewById(R.id.ksad_author_animator);
        this.AJ = (KSCornerImageView) findViewById(R.id.ksad_author_animator2);
        this.AK = (TextView) findViewById(R.id.ksad_fans_count);
        this.AM = findViewById(R.id.ksad_fans_hot_icon);
        this.AL = findViewById(R.id.ksad_author_btn_follow);
        this.AN = (ImageView) findViewById(R.id.ksad_author_arrow_down);
        this.AP = findViewById(R.id.ksad_origin_live_bottom_layout);
        this.AO = findViewById(R.id.ksad_top_layout);
        this.AR = findViewById(R.id.ksad_author_icon_layout);
        this.AQ = findViewById(R.id.ksad_top_flag_layout);
    }

    private void a(e eVar, Drawable drawable) {
        if (drawable instanceof GradientDrawable) {
            ((GradientDrawable) drawable).setStroke(getResources().getDimensionPixelSize(R.dimen.ksad_reward_author_icon_stroke_width), eVar.sv());
        }
    }

    private Animator c(View view, long j) {
        if (view == null || view.getWidth() == 0 || view.getHeight() == 0) {
            return null;
        }
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(view.getWidth(), getResources().getDimension(R.dimen.ksad_reward_author_icon_width));
        valueAnimatorOfFloat.addUpdateListener(f(view, false));
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 0.0f);
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.42f, 0.0f, 1.0f, 1.0f);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.setDuration(j);
        animatorSet.setInterpolator(interpolatorCreate);
        animatorSet.playTogether(valueAnimatorOfFloat, objectAnimatorOfFloat);
        return animatorSet;
    }

    private static Animator e(View view, boolean z) {
        float width = view.getWidth();
        if (width <= 0.0f) {
            return null;
        }
        float f = 0.9f * width;
        c.d("KsAuthorIconView", "getIconScaleAnimator size: " + width + ", endSize: " + f);
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(width, f);
        valueAnimatorOfFloat.addUpdateListener(f(view, false));
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.42f, 0.0f, 1.0f, 1.0f);
        valueAnimatorOfFloat.setDuration(500L);
        valueAnimatorOfFloat.setInterpolator(interpolatorCreate);
        ValueAnimator valueAnimatorOfFloat2 = ValueAnimator.ofFloat(f, width);
        valueAnimatorOfFloat2.addUpdateListener(f(view, false));
        Interpolator interpolatorCreate2 = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
        valueAnimatorOfFloat2.setDuration(500L);
        valueAnimatorOfFloat2.setInterpolator(interpolatorCreate2);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playSequentially(valueAnimatorOfFloat, valueAnimatorOfFloat2);
        return animatorSet;
    }

    private static ValueAnimator.AnimatorUpdateListener f(final View view, final boolean z) {
        return new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.reward.widget.KsAuthorIconView.1
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
                if (layoutParams != null) {
                    int i = (int) fFloatValue;
                    layoutParams.width = i;
                    if (!z) {
                        layoutParams.height = i;
                    }
                    view.setLayoutParams(layoutParams);
                }
            }
        };
    }

    private static Animator i(View view, int i) {
        if (view == null) {
            return null;
        }
        int width = view.getWidth();
        int height = view.getHeight();
        view.setPivotX(width / 2.0f);
        view.setPivotY(height);
        AnimatorSet animatorSet = new AnimatorSet();
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.42f, 0.0f, 1.0f, 1.0f);
        animatorSet.playTogether(ObjectAnimator.ofFloat(view, "scaleX", 1.0f, 1.1f, 1.0f), ObjectAnimator.ofFloat(view, "scaleY", 1.0f, 1.1f, 1.0f));
        animatorSet.setInterpolator(interpolatorCreate);
        animatorSet.setDuration(250L);
        AnimatorSet animatorSet2 = new AnimatorSet();
        Interpolator interpolatorCreate2 = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
        animatorSet2.playTogether(ObjectAnimator.ofFloat(view, "scaleX", 1.0f, 1.1f, 1.0f), ObjectAnimator.ofFloat(view, "scaleY", 1.0f, 1.1f, 1.0f));
        animatorSet2.setInterpolator(interpolatorCreate2);
        animatorSet2.setDuration(250L);
        AnimatorSet animatorSet3 = new AnimatorSet();
        animatorSet3.playSequentially(animatorSet, animatorSet2);
        animatorSet3.setDuration(500L);
        return animatorSet3;
    }

    @Override // com.kwad.sdk.utils.bn.a
    public final void a(Message message) {
        if (message.what != 1) {
            return;
        }
        c.d("KsAuthorIconView", "handleMsg MSG_CHECKING");
        final Animator animatorC = c(this.AI, 900L);
        final Animator animatorC2 = c(this.AJ, 1000L);
        final Animator animatorE = e(this.zO, false);
        final Animator animatorI = i(this.AO, 500);
        if (animatorI == null || animatorC == null || animatorC2 == null || animatorE == null) {
            this.gx.sendEmptyMessageDelayed(1, 500L);
            return;
        }
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playTogether(animatorE, animatorC, animatorC2);
        animatorSet.start();
        animatorE.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.reward.widget.KsAuthorIconView.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                animatorC.start();
                animatorC2.start();
                animatorE.start();
                animatorI.start();
            }
        });
    }

    public final void a(e eVar) {
        g.a(eVar, this);
        this.AN.setImageResource(R.drawable.ksad_reward_follow_arrow_down);
        a(eVar, this.AI.getBackground());
        a(eVar, this.AH.getBackground());
        a(eVar, this.AJ.getBackground());
        a(eVar, this.AG.getBackground());
    }

    public final void b(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        String strBQ = a.bQ(adInfoCg);
        if (!TextUtils.isEmpty(strBQ)) {
            KSImageLoader.loadImage(this.zO, strBQ, adTemplate);
        }
        int iAX = a.aX(adInfoCg);
        if (a.cw(d.cg(adTemplate))) {
            this.AK.setText("直播中");
            this.AM.setVisibility(8);
            this.AL.setVisibility(8);
            if (iAX == 8) {
                this.AQ.setVisibility(8);
                this.AN.setVisibility(8);
                this.AP.setVisibility(0);
            } else {
                this.AP.setVisibility(8);
                this.AN.setVisibility(0);
                this.AP.setVisibility(8);
            }
        } else {
            this.AK.setText(a.cr(adInfoCg));
        }
        this.gx.sendEmptyMessageAtTime(1, 500L);
    }
}
