package com.kwad.components.ad.splashscreen.c.a;

import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.view.ViewGroup;
import android.widget.TextView;
import com.kwad.sdk.R;

public final class a extends com.kwad.components.ad.splashscreen.c.e {
    private AnimatorSet Ea;
    private TextView Eb;
    private ViewGroup Ec;
    private ViewGroup Ed;

    private void initView() {
        this.Eb = (TextView) findViewById(R.id.ksad_ad_developer_text);
        this.Ec = (ViewGroup) findViewById(R.id.ksad_splash_end_card_native_view);
        this.Ed = (ViewGroup) findViewById(R.id.ksad_splash_end_card_native_dialog_root);
    }

    private void lu() {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.Ed, "alpha", 0.0f, 1.0f);
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(this.Eb, "alpha", 0.0f, 1.0f);
        ObjectAnimator objectAnimatorOfFloat3 = ObjectAnimator.ofFloat(this.Ec, "scaleX", 0.8f, 1.0f);
        ObjectAnimator objectAnimatorOfFloat4 = ObjectAnimator.ofFloat(this.Ec, "scaleY", 0.8f, 1.0f);
        AnimatorSet animatorSet = new AnimatorSet();
        this.Ea = animatorSet;
        animatorSet.playTogether(objectAnimatorOfFloat, objectAnimatorOfFloat2, objectAnimatorOfFloat3, objectAnimatorOfFloat4);
        this.Ea.setDuration(300L);
        this.Ea.start();
    }

    @Override
    public final void ah() {
        super.ah();
        lu();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        initView();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        AnimatorSet animatorSet = this.Ea;
        if (animatorSet != null) {
            animatorSet.cancel();
        }
    }
}
