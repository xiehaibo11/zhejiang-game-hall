package com.kwad.components.ad.interstitial.d;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.os.Message;
import android.view.View;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bn;
import com.kwad.sdk.widget.KSFrameLayout;
import com.kwad.sdk.widget.swipe.HorizontalSwipeLayout;
import org.json.JSONObject;

public final class e extends b implements bn.a {
    private bn gx;
    private KSFrameLayout jo;
    private ObjectAnimator kA;
    private ObjectAnimator kB;
    private ObjectAnimator kC;
    private int kD;
    private HorizontalSwipeLayout kn;
    private View ko;
    private View kp;
    private View kq;
    private View kr;
    private View ks;
    private View kt;
    private View ku;
    private View kv;
    private AnimatorSet kw;
    private ObjectAnimator kx;
    private ObjectAnimator ky;
    private ObjectAnimator kz;
    protected AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    protected Context mContext;
    private com.kwad.components.core.page.c mLandingPageView;
    private String mPageUrl;
    private c.a jl = new c.a() {
        @Override
        public final void ck() {
            e.this.jo.removeAllViews();
            e.this.dx();
            e.this.jo.setVisibility(8);
            e.this.kn.b(e.this.kF);
        }
    };
    private Runnable kE = new 3();
    private HorizontalSwipeLayout.a kF = new HorizontalSwipeLayout.a() {
        @Override
        public final void dC() {
            com.kwad.sdk.core.e.c.d("InterstitialHorizontalSwipe", "onRightSwiped: ");
            e.this.jo.setTranslationX(com.kwad.sdk.d.a.a.getScreenWidth(e.this.mContext));
            e.this.jf.cS();
            e.this.kn.b(e.this.kF);
        }

        @Override
        public final void dD() {
            com.kwad.sdk.core.e.c.d("InterstitialHorizontalSwipe", "onLeftSwiped: ");
            e.this.dx();
            e.this.jo.setAllCorner(false);
            e.this.mAdTemplate.converted = true;
            e.this.mLandingPageView.requestLayout();
            e.this.mLandingPageView.oD();
            e.this.jo.requestLayout();
            com.kwad.sdk.core.report.a.a(e.this.mAdTemplate, 74, (ac.a) null);
            if (e.this.jf.hz != null) {
                e.this.jf.hz.onAdClicked();
            }
            e.this.jf.cT();
        }
    };
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener = new com.kwad.sdk.core.webview.d.a.b() {
        @Override
        public final void a(WebCloseStatus webCloseStatus) {
            e.this.jf.hG.dismiss();
        }
    };
    private com.kwad.components.core.page.a.a mLandPageViewListener = new com.kwad.components.core.page.a.a() {
        @Override
        public final void dE() {
            e.this.jo.setTranslationX(com.kwad.sdk.d.a.a.getScreenWidth(e.this.mContext));
            e.this.jf.cS();
            e.this.kn.b(e.this.kF);
        }

        @Override
        public final void dF() {
            e.this.jo.setTranslationX(com.kwad.sdk.d.a.a.getScreenWidth(e.this.mContext));
            e.this.jf.cS();
            e.this.kn.b(e.this.kF);
        }
    };

    final class 3 implements Runnable {
        3() {
        }

        @Override
        public final void run() {
            e.this.b(new AnimatorListenerAdapter() {
                @Override
                public final void onAnimationCancel(Animator animator) {
                    super.onAnimationCancel(animator);
                    e.this.jo.setTranslationX(com.kwad.sdk.d.a.a.getScreenWidth(e.this.mContext));
                    e.this.ko.setTranslationX(com.kwad.sdk.d.a.a.a(e.this.mContext, 500.0f));
                    e.this.kp.setTranslationX(com.kwad.sdk.d.a.a.a(e.this.mContext, 140.0f));
                    e.this.ko.setAlpha(1.0f);
                    e.this.kp.setAlpha(1.0f);
                    e.this.kq.setVisibility(8);
                }

                @Override
                public final void onAnimationEnd(Animator animator) {
                    super.onAnimationEnd(animator);
                    e.this.a(new AnimatorListenerAdapter() {
                        @Override
                        public final void onAnimationCancel(Animator animator2) {
                            super.onAnimationCancel(animator2);
                            e.this.jo.setTranslationX(com.kwad.sdk.d.a.a.getScreenWidth(e.this.mContext));
                            e.this.ko.setAlpha(1.0f);
                            e.this.kp.setAlpha(1.0f);
                            e.this.kq.setVisibility(8);
                        }

                        @Override
                        public final void onAnimationStart(Animator animator2) {
                            super.onAnimationStart(animator2);
                            e.this.dB();
                        }
                    });
                }

                @Override
                public final void onAnimationStart(Animator animator) {
                    super.onAnimationStart(animator);
                    e.this.jo.setTranslationX(com.kwad.sdk.d.a.a.getScreenWidth(e.this.mContext));
                    e.this.ko.setTranslationX(com.kwad.sdk.d.a.a.a(e.this.mContext, 500.0f));
                    e.this.kp.setTranslationX(com.kwad.sdk.d.a.a.a(e.this.mContext, 140.0f));
                    e.this.ko.setAlpha(1.0f);
                    e.this.kp.setAlpha(1.0f);
                    e.this.kq.setVisibility(8);
                }
            });
        }
    }

    private void a(Animator.AnimatorListener animatorListener) {
        ObjectAnimator objectAnimator = this.kA;
        if (objectAnimator != null && objectAnimator.isRunning()) {
            this.kA.cancel();
            this.kA.removeAllListeners();
        }
        ObjectAnimator objectAnimator2 = this.kB;
        if (objectAnimator2 != null && objectAnimator2.isRunning()) {
            this.kB.cancel();
        }
        ObjectAnimator objectAnimator3 = this.kC;
        if (objectAnimator3 != null && objectAnimator3.isRunning()) {
            this.kC.cancel();
        }
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.jo, View.TRANSLATION_X.getName(), com.kwad.sdk.d.a.a.getScreenWidth(this.mContext) - com.kwad.sdk.d.a.a.a(this.mContext, 45.0f), com.kwad.sdk.d.a.a.getScreenWidth(this.mContext) - com.kwad.sdk.d.a.a.a(this.mContext, 30.0f), com.kwad.sdk.d.a.a.getScreenWidth(this.mContext) - com.kwad.sdk.d.a.a.a(this.mContext, 45.0f));
        this.kA = objectAnimatorOfFloat;
        objectAnimatorOfFloat.setDuration(1200L);
        this.kA.setRepeatMode(1);
        this.kA.setRepeatCount(-1);
        this.kA.addListener(animatorListener);
        this.kA.start();
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(this.ko, View.TRANSLATION_X.getName(), com.kwad.sdk.d.a.a.a(this.mContext, 322.0f), com.kwad.sdk.d.a.a.a(this.mContext, 500.0f), com.kwad.sdk.d.a.a.a(this.mContext, 322.0f));
        this.kB = objectAnimatorOfFloat2;
        objectAnimatorOfFloat2.setDuration(1200L);
        this.kB.setRepeatMode(1);
        this.kB.setRepeatCount(-1);
        this.kB.start();
        ObjectAnimator objectAnimatorOfFloat3 = ObjectAnimator.ofFloat(this.ko, View.ALPHA.getName(), 0.0f, 1.0f, 0.0f);
        this.kC = objectAnimatorOfFloat3;
        objectAnimatorOfFloat3.setDuration(1200L);
        this.kC.setRepeatMode(1);
        this.kC.setRepeatCount(-1);
        this.kC.start();
        this.ko.setVisibility(4);
        this.gx.sendEmptyMessageDelayed(6666, 600L);
    }

    private void b(Animator.AnimatorListener animatorListener) {
        AnimatorSet animatorSet = this.kw;
        if (animatorSet != null && animatorSet.isRunning()) {
            this.kw.removeAllListeners();
            this.kw.cancel();
        }
        z.a aVar = new z.a();
        aVar.asN = 7;
        com.kwad.sdk.core.report.a.d(this.mAdTemplate, (JSONObject) null, new com.kwad.sdk.core.report.j().a(aVar).ci(206));
        this.kw = new AnimatorSet();
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.jo, View.TRANSLATION_X.getName(), com.kwad.sdk.d.a.a.getScreenWidth(this.mContext), com.kwad.sdk.d.a.a.getScreenWidth(this.mContext) - com.kwad.sdk.d.a.a.a(this.mContext, 45.0f));
        objectAnimatorOfFloat.setDuration(300L);
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(this.ko, View.TRANSLATION_X.getName(), com.kwad.sdk.d.a.a.a(this.mContext, 500.0f), com.kwad.sdk.d.a.a.a(this.mContext, 322.0f));
        objectAnimatorOfFloat2.setDuration(300L);
        ObjectAnimator objectAnimatorOfFloat3 = ObjectAnimator.ofFloat(this.ko, View.ALPHA.getName(), 1.0f, 0.0f);
        objectAnimatorOfFloat3.setDuration(300L);
        ObjectAnimator objectAnimatorOfFloat4 = ObjectAnimator.ofFloat(this.kp, View.TRANSLATION_X.getName(), com.kwad.sdk.d.a.a.a(this.mContext, 140.0f), com.kwad.sdk.d.a.a.a(this.mContext, 0.0f));
        objectAnimatorOfFloat4.setDuration(300L);
        ObjectAnimator objectAnimatorOfFloat5 = ObjectAnimator.ofFloat(this.kp, View.ALPHA.getName(), 1.0f, 0.99f);
        objectAnimatorOfFloat5.setDuration(300L);
        this.kw.playTogether(objectAnimatorOfFloat, objectAnimatorOfFloat2, objectAnimatorOfFloat3, objectAnimatorOfFloat4, objectAnimatorOfFloat5);
        this.kw.removeAllListeners();
        this.kw.addListener(animatorListener);
        this.kw.start();
    }

    private void dA() {
        ObjectAnimator objectAnimator = this.kx;
        if (objectAnimator != null && objectAnimator.isRunning()) {
            this.kx.cancel();
        }
        ObjectAnimator objectAnimator2 = this.ky;
        if (objectAnimator2 != null && objectAnimator2.isRunning()) {
            this.ky.cancel();
        }
        ObjectAnimator objectAnimator3 = this.kz;
        if (objectAnimator3 == null || !objectAnimator3.isRunning()) {
            return;
        }
        this.kz.cancel();
    }

    private void dB() {
        com.kwad.sdk.core.e.c.d("InterstitialHorizontalSwipe", "showGuideButton: ");
        this.kq.setVisibility(8);
        ObjectAnimator objectAnimator = this.kx;
        if (objectAnimator != null && objectAnimator.isRunning()) {
            this.kx.cancel();
        }
        ObjectAnimator objectAnimator2 = this.ky;
        if (objectAnimator2 != null && objectAnimator2.isRunning()) {
            this.ky.cancel();
        }
        ObjectAnimator objectAnimator3 = this.kz;
        if (objectAnimator3 != null && objectAnimator3.isRunning()) {
            this.kz.cancel();
        }
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.ku, View.ALPHA.getName(), 0.0f, 1.0f, 0.6f, 0.3f, 0.0f, 0.01f, 0.0f);
        this.kx = objectAnimatorOfFloat;
        objectAnimatorOfFloat.setDuration(600L);
        this.kx.setRepeatMode(1);
        this.kx.setRepeatCount(-1);
        this.kx.start();
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(this.kt, View.ALPHA.getName(), 0.0f, 0.01f, 1.0f, 0.6f, 0.3f, 0.01f, 0.0f);
        this.ky = objectAnimatorOfFloat2;
        objectAnimatorOfFloat2.setDuration(600L);
        this.ky.setRepeatMode(1);
        this.ky.setRepeatCount(-1);
        this.ky.start();
        ObjectAnimator objectAnimatorOfFloat3 = ObjectAnimator.ofFloat(this.ks, View.ALPHA.getName(), 0.0f, 0.01f, 0.0f, 1.0f, 0.6f, 0.3f, 0.0f);
        this.kz = objectAnimatorOfFloat3;
        objectAnimatorOfFloat3.setDuration(600L);
        this.kz.setRepeatMode(1);
        this.kz.setRepeatCount(-1);
        this.kz.start();
    }

    private void dx() {
        this.ko.removeCallbacks(this.kE);
        this.kv.setVisibility(8);
        dz();
        dA();
        dy();
        this.jo.setTranslationX(0.0f);
        this.kq.setOnClickListener(null);
    }

    private void dy() {
        ObjectAnimator objectAnimator = this.kA;
        if (objectAnimator != null && objectAnimator.isRunning()) {
            this.kA.cancel();
            this.kA.removeAllListeners();
        }
        ObjectAnimator objectAnimator2 = this.kB;
        if (objectAnimator2 != null && objectAnimator2.isRunning()) {
            this.kB.cancel();
        }
        ObjectAnimator objectAnimator3 = this.kC;
        if (objectAnimator3 != null && objectAnimator3.isRunning()) {
            this.kC.cancel();
        }
        this.ko.setTranslationX(com.kwad.sdk.d.a.a.a(this.mContext, 500.0f));
        this.kp.setTranslationX(com.kwad.sdk.d.a.a.a(this.mContext, 140.0f));
        this.ko.setAlpha(1.0f);
        this.kp.setAlpha(1.0f);
        this.gx.removeCallbacksAndMessages(null);
    }

    private void dz() {
        AnimatorSet animatorSet = this.kw;
        if (animatorSet == null || !animatorSet.isRunning()) {
            return;
        }
        this.kw.removeAllListeners();
        this.kw.cancel();
    }

    private void initContentView() {
        this.mPageUrl = com.kwad.sdk.core.response.b.b.bm(this.mAdTemplate);
        this.mLandingPageView = com.kwad.components.core.page.c.b(this.mContext, new AdWebViewActivityProxy.a.a().ar(this.mPageUrl).S(this.mAdTemplate).oA());
        this.kn.a(this.kF);
        this.mLandingPageView.setLandPageViewListener(this.mLandPageViewListener);
        this.mLandingPageView.setWebCardCloseListener(this.mWebCardCloseListener);
        this.jo.addView(this.mLandingPageView);
        this.jo.setRadius(com.kwad.sdk.d.a.a.a(this.mContext, 20.0f));
        this.jo.setTranslationX(com.kwad.sdk.d.a.a.getScreenWidth(this.mContext));
        this.ko.setTranslationX(com.kwad.sdk.d.a.a.a(this.mContext, 500.0f));
        this.kp.setTranslationX(com.kwad.sdk.d.a.a.a(this.mContext, 140.0f));
        this.kq.setVisibility(8);
        this.kv.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                com.kwad.sdk.core.e.c.d("InterstitialHorizontalSwipe", "mGuideButtonLayout click: ");
                e.this.dx();
                e.this.jo.setAllCorner(false);
                e.this.mAdTemplate.converted = true;
                e.this.mLandingPageView.requestLayout();
                e.this.mLandingPageView.oD();
                e.this.jo.requestLayout();
                e.this.jf.cT();
                com.kwad.sdk.core.report.a.a(e.this.mAdTemplate, 110, (ac.a) null);
                if (e.this.jf.hz != null) {
                    e.this.jf.hz.onAdClicked();
                }
                e.this.kn.b(e.this.kF);
            }
        });
        this.ko.postDelayed(this.kE, this.kD * 1000);
    }

    @Override
    public final void a(Message message) {
        Runnable runnable;
        if (message.what == 6666) {
            View view = this.ko;
            if (view != null) {
                if (view.getVisibility() == 0) {
                    runnable = new Runnable() {
                        @Override
                        public final void run() {
                            e.this.ko.setVisibility(4);
                            e.this.kr.setVisibility(4);
                        }
                    };
                } else if (this.ko.getVisibility() == 4) {
                    runnable = new Runnable() {
                        @Override
                        public final void run() {
                            e.this.ko.setVisibility(0);
                            e.this.kr.setVisibility(0);
                        }
                    };
                }
                bj.runOnUiThread(runnable);
            }
            this.gx.sendEmptyMessageDelayed(6666, 600L);
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.jf = (c) Gk();
        AdTemplate adTemplate = this.jf.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mContext = getContext();
        this.jf.a(this.jl);
        this.kD = com.kwad.sdk.core.response.b.a.ca(this.mAdInfo);
        this.gx = com.kwad.sdk.core.threads.a.a(this);
        initContentView();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.jo = (KSFrameLayout) findViewById(R.id.ksad_land_page_root);
        this.kn = (HorizontalSwipeLayout) findViewById(R.id.ksad_swipe);
        this.ko = findViewById(R.id.ksad_interstitial_guide_bg);
        this.kp = findViewById(R.id.ksad_interstitial_guide_bg_bg);
        this.kq = findViewById(R.id.ksad_interstitial_guide_button_layout);
        this.kv = findViewById(R.id.ksad_interstitial_guide_click_layout);
        this.kr = findViewById(R.id.ksad_interstitial_guide_button);
        this.ks = findViewById(R.id.ksad_interstitial_guide_button_img_1);
        this.kt = findViewById(R.id.ksad_interstitial_guide_button_img_2);
        this.ku = findViewById(R.id.ksad_interstitial_guide_button_img_3);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.jo.removeAllViews();
        this.jf.b(this.jl);
        dx();
        this.gx.removeCallbacksAndMessages(null);
        this.kn.b(this.kF);
    }
}
