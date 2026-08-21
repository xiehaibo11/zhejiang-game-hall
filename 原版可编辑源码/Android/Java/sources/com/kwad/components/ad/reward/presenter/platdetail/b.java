package com.kwad.components.ad.reward.presenter.platdetail;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.graphics.Color;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.az;

public final class b extends com.kwad.components.ad.reward.presenter.a {
    private View tZ;
    private View ua;
    private View ub;
    private View uc;
    private Animator uf;
    private Animator ug;
    private Animator uh;
    private az uk;
    private az ul;
    private final long tW = 1600;
    private final long tX = 3000;
    private final long tY = 5000;
    private boolean ud = false;
    private boolean ue = false;
    private Animator ui = null;
    private long uj = 3000;
    private Interpolator um = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
    private l mVideoPlayStateListener = new l() {
        private boolean un = false;

        @Override
        public final void onMediaPlayPaused() {
            super.onMediaPlayPaused();
            b.this.ud = true;
            com.kwad.sdk.core.e.c.d("RewardImagePlayerPresenter", "onMediaPlayPaused : ");
        }

        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            if (j2 < b.this.uj || this.un) {
                return;
            }
            this.un = true;
            b.this.ia();
        }

        @Override
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            b.this.ud = false;
            com.kwad.sdk.core.e.c.d("RewardImagePlayerPresenter", "onMediaPlayStart : ");
        }

        @Override
        public final void onMediaPlaying() {
            super.onMediaPlaying();
            b.this.ud = false;
            com.kwad.sdk.core.e.c.d("RewardImagePlayerPresenter", "onMediaPlaying : ");
            if (b.this.ui == null || b.this.ui.isRunning()) {
                return;
            }
            b.this.ui.start();
            b.a(b.this, (Animator) null);
        }
    };

    private Animator a(View view, long j) {
        float[] fArr = {1.0f, 1.106f, 1.0f, 1.106f, 1.0f};
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "scaleX", fArr);
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(view, "scaleY", fArr);
        AnimatorSet animatorSet = new AnimatorSet();
        View view2 = this.ua;
        if (view2 != null) {
            animatorSet.playTogether(objectAnimatorOfFloat, objectAnimatorOfFloat2, ObjectAnimator.ofFloat(view2, "alpha", 0.2f, 0.0f));
        } else {
            animatorSet.playTogether(objectAnimatorOfFloat, objectAnimatorOfFloat2);
        }
        animatorSet.setDuration(j);
        animatorSet.setInterpolator(this.um);
        return animatorSet;
    }

    private Animator a(View view, View view2) {
        Animator animatorO = o(view);
        Animator animatorO2 = o(view2);
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view2, "scaleX", 1.0f);
        objectAnimatorOfFloat.setDuration(300L);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playSequentially(objectAnimatorOfFloat, animatorO2);
        AnimatorSet animatorSet2 = new AnimatorSet();
        animatorSet2.playTogether(animatorO, animatorSet);
        return animatorSet2;
    }

    static Animator a(b bVar, Animator animator) {
        bVar.ui = null;
        return null;
    }

    private View a(int i, ViewGroup viewGroup) {
        ImageView imageView = (ImageView) LayoutInflater.from(getContext()).inflate(R.layout.ksad_image_player_sweep, viewGroup, false);
        imageView.setImageDrawable(getContext().getResources().getDrawable(i));
        return imageView;
    }

    private void a(Animator animator) {
        if (this.ud) {
            this.ui = animator;
        } else {
            animator.start();
        }
    }

    private Animator b(View view, long j) {
        Animator animatorA = a(view, 1600L);
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "alpha", 1.0f);
        objectAnimatorOfFloat.setDuration(5000L);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playSequentially(animatorA, objectAnimatorOfFloat);
        animatorSet.setDuration(1600L);
        return animatorSet;
    }

    static View b(b bVar, View view) {
        bVar.ua = null;
        return null;
    }

    static boolean b(b bVar, boolean z) {
        bVar.ue = true;
        return true;
    }

    static View c(b bVar, View view) {
        bVar.ub = null;
        return null;
    }

    static View d(b bVar, View view) {
        bVar.uc = null;
        return null;
    }

    private void hY() {
        this.uk = new az(getContext().getResources().getDimensionPixelSize(R.dimen.ksad_image_player_sweep_wave_width_start), getContext().getResources().getDimensionPixelSize(R.dimen.ksad_image_player_sweep_wave_height_start));
        this.ul = new az(getContext().getResources().getDimensionPixelSize(R.dimen.ksad_image_player_sweep_wave_width_end), getContext().getResources().getDimensionPixelSize(R.dimen.ksad_image_player_sweep_wave_height_end));
    }

    private View hZ() {
        ImageView imageView = new ImageView(getContext());
        imageView.setClickable(false);
        imageView.setFocusable(false);
        imageView.setFocusableInTouchMode(false);
        imageView.setLongClickable(false);
        imageView.setBackgroundColor(Color.parseColor("#222222"));
        imageView.setAlpha(0.2f);
        return imageView;
    }

    private void ia() {
        this.uf = a(this.tZ, 1600L);
        this.ug = a(this.ub, this.uc);
        this.uh = b(this.tZ, 1600L);
        this.uf.addListener(new AnimatorListenerAdapter() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                b.p(b.this.ua);
                b.b(b.this, (View) null);
                if (b.this.ue) {
                    return;
                }
                b bVar = b.this;
                bVar.a(bVar.ug);
            }
        });
        this.ug.addListener(new AnimatorListenerAdapter() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                b bVar = b.this;
                bVar.a(bVar.uh);
                b.p(b.this.ub);
                b.p(b.this.uc);
                b.c(b.this, null);
                b.d(b.this, null);
            }

            @Override
            public final void onAnimationStart(Animator animator) {
                super.onAnimationStart(animator);
                b.b(b.this, true);
            }
        });
        this.uh.addListener(new AnimatorListenerAdapter() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                b bVar = b.this;
                bVar.a(bVar.uh);
            }
        });
        a(this.uf);
    }

    private Animator o(View view) {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "translationY", -(com.kwad.sdk.d.a.a.getScreenHeight(getContext()) + ((this.ul.getHeight() + this.uk.getHeight()) / 2)));
        float fJu = this.ul.Ju() / this.uk.Ju();
        float fJv = this.ul.Jv() / this.uk.Jv();
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(view, "scaleX", 1.0f, fJu);
        ObjectAnimator objectAnimatorOfFloat3 = ObjectAnimator.ofFloat(view, "scaleY", 1.0f, fJv);
        ObjectAnimator objectAnimatorOfFloat4 = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 0.8f);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.setDuration(3000L);
        animatorSet.playTogether(objectAnimatorOfFloat2, objectAnimatorOfFloat3, objectAnimatorOfFloat, objectAnimatorOfFloat4);
        animatorSet.setInterpolator(this.um);
        return animatorSet;
    }

    private static void p(View view) {
        if (view != null) {
            try {
                if (view.getParent() != null) {
                    ((ViewGroup) view.getParent()).removeView(view);
                }
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.qx.oV.a(this.mVideoPlayStateListener);
        hY();
        FrameLayout frameLayout = (FrameLayout) findViewById(R.id.ksad_reward_play_layout);
        FrameLayout frameLayoutQ = this.qx.oV.jT().Q(getContext());
        this.tZ = frameLayoutQ;
        frameLayout.addView(frameLayoutQ, -1, -1);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -2);
        layoutParams.gravity = 81;
        layoutParams.bottomMargin = -this.uk.getHeight();
        FrameLayout frameLayout2 = (FrameLayout) findViewById(R.id.ksad_root_container);
        View viewHZ = hZ();
        this.ua = viewHZ;
        frameLayout2.addView(viewHZ, -1, -1);
        View viewA = a(R.drawable.ksad_image_player_sweep1, frameLayout2);
        this.ub = viewA;
        frameLayout2.addView(viewA, layoutParams);
        View viewA2 = a(R.drawable.ksad_image_player_sweep2, frameLayout2);
        this.uc = viewA2;
        frameLayout2.addView(viewA2, layoutParams);
    }

    @Override
    public final void onDestroy() {
        super.onDestroy();
        this.tZ = null;
        com.kwad.components.ad.reward.l.a aVarJT = this.qx.oV.jT();
        if (aVarJT != null) {
            aVarJT.release();
        }
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        Animator animator = this.ug;
        if (animator != null) {
            animator.cancel();
        }
        Animator animator2 = this.uf;
        if (animator2 != null) {
            animator2.cancel();
        }
        Animator animator3 = this.uh;
        if (animator3 != null) {
            animator3.cancel();
        }
        this.qx.oV.b(this.mVideoPlayStateListener);
    }
}
