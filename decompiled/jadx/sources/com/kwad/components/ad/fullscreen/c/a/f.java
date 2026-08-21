package com.kwad.components.ad.fullscreen.c.a;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.app.Activity;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.drawable.GradientDrawable;
import android.os.Vibrator;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.e.m;
import com.kwad.components.ad.reward.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends com.kwad.components.ad.reward.presenter.a implements m, com.kwad.sdk.core.g.b, com.kwad.sdk.widget.c {
    private com.kwad.sdk.core.g.d dO;
    private Vibrator dP;
    private ViewGroup gP;
    private TextView gQ;
    private TextView gR;
    private ImageView gS;
    private FrameLayout gT;
    private ImageView gU;
    private FrameLayout gV;
    private TextView gW;
    private Animator gX;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.fullscreen.c.a.f.1
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            if (f.this.gP != null) {
                f.this.gP.setVisibility(8);
            }
            if (f.this.gV != null) {
                f.this.gV.setVisibility(8);
            }
            if (f.this.dO != null) {
                f.this.dO.bh(f.this.getContext());
            }
            if (f.this.gX != null) {
                f.this.gX.cancel();
                f.this.gX = null;
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public Animator a(float f, float f2) {
        if (this.gP == null) {
            return null;
        }
        AnimatorSet animatorSet = new AnimatorSet();
        Resources resources = this.gP.getResources();
        Animator animatorA = com.kwad.components.core.t.m.a((View) this.gS, (Interpolator) null, 100L, 16.0f);
        animatorA.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.fullscreen.c.a.f.7
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationStart(Animator animator) {
                super.onAnimationStart(animator);
                f.this.gS.setPivotX(f.this.gS.getWidth());
                f.this.gS.setPivotY(f.this.gS.getHeight());
            }
        });
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.gP, "translationX", f - (this.gP.getLeft() + (this.gP.getWidth() / 2.0f)));
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(this.gP, "translationY", f2 - (this.gP.getTop() + (this.gP.getHeight() / 2.0f)));
        float dimension = resources.getDimension(R.dimen.ksad_fullscreen_shake_tips_height);
        final float dimension2 = resources.getDimension(R.dimen.ksad_fullscreen_shake_tips_icon_size);
        float width = this.gT.getWidth();
        float width2 = this.gS.getWidth();
        if (width == 0.0f || width2 == 0.0f) {
            return null;
        }
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(width, dimension);
        valueAnimatorOfFloat.addUpdateListener(new com.kwad.components.ad.widget.a(this.gU) { // from class: com.kwad.components.ad.fullscreen.c.a.f.8
            @Override // com.kwad.components.ad.widget.a
            public final void a(ViewGroup.LayoutParams layoutParams, Object obj) {
                float fFloatValue = ((Float) obj).floatValue();
                if (layoutParams != null) {
                    int i = (int) fFloatValue;
                    layoutParams.height = i;
                    layoutParams.width = i;
                }
            }
        });
        ValueAnimator valueAnimatorOfFloat2 = ValueAnimator.ofFloat(width2, dimension2);
        valueAnimatorOfFloat2.addUpdateListener(new com.kwad.components.ad.widget.a(this.gS) { // from class: com.kwad.components.ad.fullscreen.c.a.f.9
            @Override // com.kwad.components.ad.widget.a
            public final void a(ViewGroup.LayoutParams layoutParams, Object obj) {
                float fFloatValue = ((Float) obj).floatValue();
                if (layoutParams != null) {
                    int i = (int) fFloatValue;
                    layoutParams.height = i;
                    layoutParams.width = i;
                }
            }
        });
        int color = resources.getColor(R.color.ksad_shake_icon_bg_start_color);
        final int color2 = resources.getColor(R.color.ksad_reward_main_color);
        final int dimensionPixelSize = resources.getDimensionPixelSize(R.dimen.ksad_fullscreen_shake_tips_icon_stroke_size);
        ValueAnimator valueAnimatorOfArgb = com.kwad.sdk.widget.a.ofArgb(color, color2);
        valueAnimatorOfArgb.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.fullscreen.c.a.f.10
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                try {
                    int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
                    GradientDrawable gradientDrawable = (GradientDrawable) f.this.gU.getBackground();
                    gradientDrawable.mutate();
                    gradientDrawable.setColor(iIntValue);
                    if (iIntValue == color2) {
                        gradientDrawable.setStroke(dimensionPixelSize, -1);
                    }
                    f.this.gU.setBackground(gradientDrawable);
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                }
            }
        });
        ValueAnimator valueAnimatorOfFloat3 = ValueAnimator.ofFloat(1.0f, 0.0f);
        valueAnimatorOfFloat3.setDuration(200L);
        valueAnimatorOfFloat3.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.fullscreen.c.a.f.11
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                try {
                    float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                    f.this.gQ.setAlpha(fFloatValue);
                    f.this.gR.setAlpha(fFloatValue);
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                }
            }
        });
        ValueAnimator valueAnimatorOfFloat4 = ValueAnimator.ofFloat(this.gQ.getHeight(), 0.0f);
        valueAnimatorOfFloat4.addUpdateListener(new com.kwad.components.ad.widget.a(this.gQ) { // from class: com.kwad.components.ad.fullscreen.c.a.f.12
            @Override // com.kwad.components.ad.widget.a
            public final void a(ViewGroup.LayoutParams layoutParams, Object obj) {
                layoutParams.height = (int) ((Float) obj).floatValue();
            }
        });
        ValueAnimator valueAnimatorOfFloat5 = ValueAnimator.ofFloat(this.gR.getHeight(), 0.0f);
        valueAnimatorOfFloat5.addUpdateListener(new com.kwad.components.ad.widget.a(this.gR) { // from class: com.kwad.components.ad.fullscreen.c.a.f.13
            @Override // com.kwad.components.ad.widget.a
            public final void a(ViewGroup.LayoutParams layoutParams, Object obj) {
                layoutParams.height = (int) ((Float) obj).floatValue();
            }
        });
        AnimatorSet animatorSet2 = new AnimatorSet();
        animatorSet2.setDuration(500L);
        animatorSet2.playTogether(objectAnimatorOfFloat, objectAnimatorOfFloat2, valueAnimatorOfFloat, valueAnimatorOfFloat2, valueAnimatorOfArgb, valueAnimatorOfFloat4, valueAnimatorOfFloat5);
        AnimatorSet animatorSet3 = new AnimatorSet();
        final Animator animatorClone = animatorA.clone();
        animatorClone.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.fullscreen.c.a.f.2
            private boolean gZ = false;

            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationCancel(Animator animator) {
                super.onAnimationCancel(animator);
                this.gZ = true;
            }

            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                if (this.gZ) {
                    return;
                }
                animatorClone.start();
            }

            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationStart(Animator animator) {
                super.onAnimationStart(animator);
                f.this.gS.setPivotX(dimension2);
                f.this.gS.setPivotY(dimension2);
            }
        });
        final ViewGroup.LayoutParams layoutParams = this.gV.getLayoutParams();
        ValueAnimator duration = ValueAnimator.ofFloat(0.0f, resources.getDimension(R.dimen.ksad_fullscreen_shake_tips_width)).setDuration(500L);
        duration.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.fullscreen.c.a.f.3
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                try {
                    f.this.gV.setVisibility(0);
                    layoutParams.width = (int) ((Float) valueAnimator.getAnimatedValue()).floatValue();
                    f.this.gV.setLayoutParams(layoutParams);
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                }
            }
        });
        animatorSet3.playTogether(animatorClone, duration, ObjectAnimator.ofFloat(this.gW, "alpha", 0.0f, 1.0f).setDuration(500L));
        animatorSet.playSequentially(animatorA, animatorA.clone(), animatorA.clone(), valueAnimatorOfFloat3, animatorSet2, animatorSet3);
        return animatorSet;
    }

    private static String a(j jVar, AdInfo adInfo) {
        String strDw = com.kwad.sdk.core.response.b.b.dw(adInfo);
        com.kwad.components.core.e.d.c cVar = jVar.mApkDownloadHelper;
        if (!com.kwad.sdk.core.response.b.a.ax(adInfo) || cVar == null) {
            return strDw;
        }
        int iNw = cVar.nw();
        AdMatrixInfo.DownloadTexts downloadTextsDy = com.kwad.sdk.core.response.b.b.dy(adInfo);
        return iNw != 8 ? iNw != 12 ? downloadTextsDy.adActionDescription : downloadTextsDy.openAppLabel : downloadTextsDy.installAppLabel;
    }

    private void a(AdInfo adInfo) {
        String strDu = com.kwad.sdk.core.response.b.b.du(adInfo);
        TextView textView = this.gQ;
        if (textView != null) {
            textView.setText(strDu);
        }
        TextView textView2 = this.gW;
        if (textView2 != null) {
            textView2.setText(strDu);
        }
        String strA = a(this.qx, adInfo);
        TextView textView3 = this.gR;
        if (textView3 != null) {
            textView3.setText("或点击" + strA);
        }
    }

    private void ca() {
        final AdBaseFrameLayout adBaseFrameLayout = (AdBaseFrameLayout) findViewById(R.id.ksad_root_container);
        ViewGroup viewGroup = (ViewGroup) l.a(getContext(), R.layout.ksad_shake_center, adBaseFrameLayout, false);
        this.gP = viewGroup;
        viewGroup.setVisibility(0);
        Resources resources = this.gP.getResources();
        final int dimensionPixelSize = resources.getDimensionPixelSize(R.dimen.ksad_fullscreen_shake_tips_icon_marginLeft);
        final int dimensionPixelSize2 = resources.getDimensionPixelSize(R.dimen.ksad_fullscreen_shake_tips_icon_marginBottom);
        int dimensionPixelSize3 = resources.getDimensionPixelSize(R.dimen.ksad_fullscreen_shake_tips_title_marginBottom);
        int dimensionPixelSize4 = resources.getDimensionPixelSize(R.dimen.ksad_fullscreen_shake_tips_height);
        FrameLayout frameLayout = (FrameLayout) l.a(getContext(), R.layout.ksad_shake_tips_title, adBaseFrameLayout, false);
        this.gV = frameLayout;
        this.gW = (TextView) frameLayout.findViewById(R.id.ksad_shake_tips_label);
        this.gV.setVisibility(4);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, dimensionPixelSize4);
        layoutParams.leftMargin = dimensionPixelSize;
        layoutParams.bottomMargin = dimensionPixelSize3;
        layoutParams.gravity = 83;
        adBaseFrameLayout.addView(this.gV, layoutParams);
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams2.gravity = 17;
        adBaseFrameLayout.addView(this.gP, layoutParams2);
        com.kwad.sdk.core.report.a.b(this.qx.mAdTemplate, 185, (JSONObject) null);
        this.gP.post(new Runnable() { // from class: com.kwad.components.ad.fullscreen.c.a.f.6
            @Override // java.lang.Runnable
            public final void run() {
                int height = adBaseFrameLayout.getHeight();
                f fVar = f.this;
                fVar.gX = fVar.a(dimensionPixelSize, height - dimensionPixelSize2);
                if (f.this.gX != null) {
                    f.this.gX.start();
                }
            }
        });
    }

    private void initView() {
        this.gQ = (TextView) this.gP.findViewById(R.id.ksad_shake_center_title);
        this.gR = (TextView) this.gP.findViewById(R.id.ksad_shake_center_sub_title);
        this.gS = (ImageView) this.gP.findViewById(R.id.ksad_shake_center_icon);
        this.gT = (FrameLayout) this.gP.findViewById(R.id.ksad_shake_center_circle_area);
        this.gU = (ImageView) this.gP.findViewById(R.id.ksad_shake_center_circle_area_bg);
        new com.kwad.sdk.widget.f(getContext(), this.gP, this);
    }

    @Override // com.kwad.sdk.core.g.b
    public final void a(double d) {
        com.kwad.sdk.core.c.b.AU();
        Activity currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
        Activity activity = getActivity();
        boolean z = activity != null && activity.equals(currentActivity);
        if (com.kwad.components.core.e.c.b.mZ() || !z) {
            bj.a(new Runnable() { // from class: com.kwad.components.ad.fullscreen.c.a.f.4
                @Override // java.lang.Runnable
                public final void run() {
                    f.this.dO.CG();
                }
            }, null, 500L);
            return;
        }
        if (this.qx != null) {
            com.kwad.sdk.core.report.j jVar = new com.kwad.sdk.core.report.j();
            jVar.i(d);
            this.qx.a(1, getContext(), 157, 1, 0L, false, jVar);
        }
        bj.a(new Runnable() { // from class: com.kwad.components.ad.fullscreen.c.a.f.5
            @Override // java.lang.Runnable
            public final void run() {
                com.kwad.sdk.core.e.c.d("ShakePresenter", "onShakeEvent openGate2");
                f.this.dO.CG();
            }
        }, null, 500L);
        bj.a(getContext(), this.dP);
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        this.qx.a(1, getContext(), 158, 1);
    }

    @Override // com.kwad.sdk.core.g.b
    public final void aT() {
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        if (com.kwad.components.ad.fullscreen.b.a.a(getContext(), this.qx.mAdTemplate)) {
            this.qx.a(this);
            this.qx.b(this.mPlayEndPageListener);
            ca();
            initView();
            a(adInfoCg);
            float fDs = com.kwad.sdk.core.response.b.b.ds(adInfoCg);
            com.kwad.sdk.core.g.d dVar = this.dO;
            if (dVar == null) {
                com.kwad.sdk.core.g.d dVar2 = new com.kwad.sdk.core.g.d(fDs);
                this.dO = dVar2;
                dVar2.a(this);
            } else {
                dVar.e(fDs);
            }
            this.dO.bg(getContext());
            Context context = getContext();
            if (context != null) {
                this.dP = (Vibrator) context.getSystemService("vibrator");
            }
            com.kwad.components.ad.fullscreen.b.a.H(getContext());
        }
    }

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        this.qx.a(1, getContext(), 158, 1);
    }

    @Override // com.kwad.components.ad.reward.e.m
    public final int bZ() {
        return com.kwad.sdk.d.a.a.g(getContext(), R.dimen.ksad_fullscreen_shake_tips_title_marginBottom) + com.kwad.sdk.d.a.a.g(getContext(), R.dimen.ksad_fullscreen_shake_tips_height);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        ViewGroup viewGroup = this.gP;
        if (viewGroup != null) {
            if (viewGroup.getParent() != null) {
                ((ViewGroup) this.gP.getParent()).removeView(this.gP);
            }
            this.gP = null;
        }
        bj.b(getContext(), this.dP);
        this.dP = null;
        Animator animator = this.gX;
        if (animator != null) {
            animator.cancel();
            this.gX = null;
        }
        this.qx.c(this.mPlayEndPageListener);
    }
}
