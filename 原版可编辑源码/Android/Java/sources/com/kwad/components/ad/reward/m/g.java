package com.kwad.components.ad.reward.m;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class g extends s implements View.OnClickListener {
    private TextView gQ;
    private com.kwad.components.ad.reward.j qx;

    public interface a {
        void hD();
    }

    public g(com.kwad.components.ad.reward.j jVar) {
        this.qx = jVar;
    }

    private static Animator q(View view) {
        if (view == null) {
            return null;
        }
        int dimensionPixelSize = view.getContext().getResources().getDimensionPixelSize(R.dimen.ksad_live_card_tips_animation_y);
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
        AnimatorSet animatorSet = new AnimatorSet();
        ObjectAnimator duration = ObjectAnimator.ofFloat(view, "translationY", -dimensionPixelSize).setDuration(500L);
        duration.setInterpolator(interpolatorCreate);
        ObjectAnimator duration2 = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 1.0f).setDuration(2500L);
        ObjectAnimator duration3 = ObjectAnimator.ofFloat(view, "translationY", 0.0f).setDuration(500L);
        duration3.setInterpolator(interpolatorCreate);
        animatorSet.playSequentially(duration, duration2, duration3);
        return animatorSet;
    }

    public final void a(final a aVar, long j) {
        final Animator animatorQ = q(this.sw);
        if (animatorQ == null) {
            aVar.hD();
        } else {
            animatorQ.addListener(new AnimatorListenerAdapter() {
                @Override
                public final void onAnimationCancel(Animator animator) {
                    super.onAnimationCancel(animator);
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.hD();
                    }
                }

                @Override
                public final void onAnimationEnd(Animator animator) {
                    super.onAnimationEnd(animator);
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.hD();
                    }
                }
            });
            this.sw.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    animatorQ.start();
                }
            }, 500L);
        }
    }

    @Override
    protected final void a(r rVar) {
        String str;
        TextView textView;
        super.a(rVar);
        AdTemplate adTemplate = rVar.getAdTemplate();
        if (adTemplate == null || (str = com.kwad.sdk.core.response.b.b.bL(adTemplate).title) == null || (textView = this.gQ) == null) {
            return;
        }
        textView.setText(str);
    }

    public final void f(ViewGroup viewGroup) {
        super.a(viewGroup, R.id.ksad_card_tips_view, R.id.ksad_card_tips_root);
        if (this.gQ == null) {
            this.gQ = (TextView) this.sw.findViewById(R.id.ksad_card_tips_title);
        }
        this.sw.setOnClickListener(this);
    }

    @Override
    public final ViewGroup gQ() {
        return this.sw;
    }

    @Override
    public final void onClick(View view) {
        if (view.equals(this.sw)) {
            com.kwad.components.ad.reward.j jVar = this.qx;
            jVar.a(1, jVar.mContext, 1, 1);
        }
    }
}
