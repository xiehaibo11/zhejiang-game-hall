package com.kwad.components.ad.reward.presenter;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.ad.k.b;
import com.kwad.components.core.i.a;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.webview.jshandler.n;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.List;

public final class r extends a implements com.kwad.components.ad.reward.e.f, a.a, n.b {
    private AdTemplate mAdTemplate;
    private com.kwad.components.ad.reward.g pb;
    private ImageView rY;
    private View ta;
    private KsLogoView tb;
    private DetailVideoView tc;
    private int td;
    private View te;
    private FrameLayout tf;
    private Animator tg;
    private Animator th;
    private Animator ti;
    private AdTemplate tj;
    private List<com.kwad.components.core.i.c> tk;
    private boolean ts;
    private int sZ = 1;
    private long tl = 500;
    private long tm = 50;
    private float tn = 1.2254902f;
    private float to = 0.80472106f;
    private float tp = 0.0f;
    private boolean tq = false;
    private long showTime = -1;
    private long tr = -1;
    private com.kwad.components.core.video.l mVideoPlayStateListener = new com.kwad.components.core.video.l() {
        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            r.this.f(j2);
        }
    };
    private com.kwad.sdk.core.webview.d.a.a cH = new com.kwad.sdk.core.webview.d.a.a() {
        @Override
        public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
            if (aVar == null || com.kwad.sdk.core.response.b.d.b(r.this.mAdTemplate, aVar.creativeId, aVar.adStyle)) {
                r.this.qx.mAdOpenInteractionListener.bE();
                return;
            }
            com.kwad.components.core.i.c cVarA = com.kwad.components.ad.reward.j.a((List<com.kwad.components.core.i.c>) r.this.tk, aVar.creativeId);
            if (cVarA != null) {
                r.this.qx.a(cVarA);
            }
        }
    };

    private boolean K(boolean z) {
        int iB = b(hP());
        M(iB);
        com.kwad.components.ad.reward.g gVar = this.pb;
        boolean zAp = gVar != null ? gVar.ap() : false;
        com.kwad.sdk.core.e.c.d("RewardPreEndCardPresenter", "webLoadSuccess: " + zAp);
        if (!zAp) {
            return false;
        }
        int iA = a(hP());
        float f = -iB;
        this.tp = f;
        Animator animatorA = a(true, f, iA, true, z);
        this.tg = animatorA;
        animatorA.start();
        Animator animatorHO = hO();
        this.ti = animatorHO;
        animatorHO.start();
        this.sZ = 2;
        return true;
    }

    private void L(boolean z) {
        Animator animatorA = a(false, (hP() - hQ()) + this.tp, a(hQ()), false, z);
        this.th = animatorA;
        animatorA.start();
        com.kwad.sdk.core.d.a.AW();
        com.kwad.sdk.core.d.a.ar(this.tj);
        this.sZ = 3;
        com.kwad.components.ad.reward.g gVar = this.pb;
        if (gVar != null) {
            gVar.fC();
        }
    }

    private void M(int i) {
        ViewGroup.LayoutParams layoutParams = this.ta.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
            layoutParams2.height = i;
            layoutParams2.bottomMargin = -i;
        } else {
            FrameLayout.LayoutParams layoutParams3 = new FrameLayout.LayoutParams(-1, i);
            layoutParams3.height = i;
            layoutParams3.bottomMargin = -i;
            this.ta.setLayoutParams(layoutParams3);
        }
    }

    private int a(float f) {
        return (int) (com.kwad.sdk.d.a.a.e(getActivity()) - f);
    }

    @Override
    private int compareTo(com.kwad.components.ad.reward.e.f fVar) {
        return getPriority() - fVar.getPriority();
    }

    private Animator a(boolean z, float f, int i, boolean z2, boolean z3) {
        ValueAnimator valueAnimatorOfFloat;
        com.kwad.sdk.core.e.c.d("RewardPreEndCardPresenter", "getUpAnimator: translationY0: " + f + ", videoTargetHeight: " + i);
        if (z) {
            valueAnimatorOfFloat = ObjectAnimator.ofFloat(this.ta, "translationY", f);
        } else {
            int height = this.ta.getHeight();
            final ViewGroup.LayoutParams layoutParams = this.ta.getLayoutParams();
            valueAnimatorOfFloat = ValueAnimator.ofFloat(height, Math.abs(f));
            valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                    layoutParams.height = (int) ((Float) valueAnimator.getAnimatedValue()).floatValue();
                    r.this.ta.setLayoutParams(layoutParams);
                }
            });
        }
        ObjectAnimator objectAnimatorOfFloat = z2 ? ObjectAnimator.ofFloat(this.tb, "alpha", 0.0f, 255.0f) : null;
        final ViewGroup.LayoutParams layoutParams2 = this.rY.getLayoutParams();
        ValueAnimator valueAnimatorA = this.tc.a(this.mAdTemplate, i, new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
                ViewGroup.LayoutParams layoutParams3 = layoutParams2;
                if (layoutParams3 != null) {
                    layoutParams3.height = iIntValue;
                    r.this.rY.setLayoutParams(layoutParams2);
                }
            }
        });
        long j = z3 ? this.tl : this.tm;
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.setDuration(j);
        animatorSet.setInterpolator(interpolatorCreate);
        if (objectAnimatorOfFloat != null) {
            if (z3) {
                animatorSet.playTogether(valueAnimatorOfFloat, objectAnimatorOfFloat, valueAnimatorA);
            } else {
                animatorSet.playTogether(valueAnimatorOfFloat, objectAnimatorOfFloat);
            }
        } else if (z3) {
            animatorSet.playTogether(valueAnimatorOfFloat, valueAnimatorA);
        } else {
            animatorSet.playTogether(valueAnimatorOfFloat);
        }
        return animatorSet;
    }

    private int b(float f) {
        return (int) (f + getContext().getResources().getDimensionPixelSize(R.dimen.ksad_reward_middle_end_card_logo_view_height) + getContext().getResources().getDimensionPixelSize(R.dimen.ksad_reward_middle_end_card_logo_view_margin_bottom));
    }

    private void d(List<AdTemplate> list) {
        this.pb = new com.kwad.components.ad.reward.g(list, this.qx.mReportExtData, this);
        this.qx.pb = this.pb;
        this.pb.z(com.kwad.sdk.core.response.b.b.be(this.mAdTemplate));
        this.pb.a(this.cH);
        this.pb.a(this.tf, this.qx.mRootContainer, this.mAdTemplate, this.qx.mApkDownloadHelper, this.qx.mScreenOrientation);
        com.kwad.sdk.core.e.c.d("RewardPreEndCardPresenter", "startPreloadWebView");
        this.pb.a(new b.b() {
            @Override
            public final void hR() {
                com.kwad.sdk.core.e.c.d("RewardPreEndCardPresenter", "onPreloadSuccess");
                r.this.qx.pz = true;
            }
        });
    }

    private void f(long j) {
        AdTemplate adTemplate = this.tj;
        if (adTemplate == null || this.ts) {
            return;
        }
        if (this.showTime <= 0) {
            this.showTime = com.kwad.sdk.core.response.b.b.bb(adTemplate);
            this.tr = com.kwad.sdk.core.response.b.b.ba(this.tj) + this.showTime;
        }
        long j2 = this.showTime;
        if (j2 > 0 && !this.tq && j > j2) {
            this.ts = !K(true);
            com.kwad.sdk.core.e.c.d("RewardPreEndCardPresenter", "showError: " + this.ts);
            if (this.ts) {
                return;
            } else {
                this.tq = true;
            }
        }
        boolean z = this.sZ == 3;
        long j3 = this.tr;
        if (j3 <= 0 || z || j <= j3) {
            return;
        }
        L(true);
    }

    private Animator hO() {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.te, "alpha", 255.0f, 0.0f);
        objectAnimatorOfFloat.setInterpolator(PathInterpolatorCompat.create(0.25f, 0.1f, 0.25f, 1.0f));
        objectAnimatorOfFloat.setDuration(200L);
        return objectAnimatorOfFloat;
    }

    private float hP() {
        return com.kwad.sdk.d.a.a.d(getActivity()) / this.tn;
    }

    private float hQ() {
        return com.kwad.sdk.d.a.a.d(getActivity()) / this.to;
    }

    @Override
    public final void ah() {
        super.ah();
        this.qx.oV.a(this.mVideoPlayStateListener);
        this.qx.b((com.kwad.components.ad.reward.e.f) this);
        this.mAdTemplate = this.qx.mAdTemplate;
        this.qx.a(this);
        this.td = com.kwad.sdk.d.a.a.E(this.tc);
        com.kwad.sdk.d.a.a.n(this.tc, 49);
        this.tb.aa(this.mAdTemplate);
    }

    @Override
    public final void bD() {
        int i;
        if (this.tj == null || (i = this.sZ) == 3) {
            return;
        }
        if (i == 1) {
            K(false);
            L(false);
        } else if (i == 2) {
            L(true);
        }
    }

    @Override
    public final void c(List<com.kwad.components.core.i.c> list) {
        com.kwad.sdk.core.e.c.d("RewardPreEndCardPresenter", "onInnerAdLoad: " + list);
        if (list == null || list.size() == 0) {
            return;
        }
        this.tj = list.get(0).getAdTemplate();
        this.tk = list;
        ArrayList arrayList = new ArrayList();
        arrayList.add(this.mAdTemplate);
        arrayList.addAll(com.kwad.components.core.i.c.j(list));
        d(arrayList);
    }

    @Override
    public final int getPriority() {
        return 0;
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.ta = findViewById(R.id.ksad_middle_end_card);
        this.tc = (DetailVideoView) findViewById(R.id.ksad_video_player);
        this.tb = (KsLogoView) findViewById(R.id.ksad_splash_logo_container);
        this.rY = (ImageView) findViewById(R.id.ksad_blur_video_cover);
        this.te = findViewById(R.id.ksad_play_web_card_webView);
        this.tf = (FrameLayout) findViewById(R.id.ksad_middle_end_card_webview_container);
    }

    @Override
    public final void onError(int i, String str) {
        com.kwad.sdk.core.e.c.w("RewardPreEndCardPresenter", "onError : msg " + str);
    }

    @Override
    public final void onRequestResult(int i) {
        com.kwad.sdk.core.e.c.w("RewardPreEndCardPresenter", "onRequestResult : adNumber " + i);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.qx.pz = false;
        this.qx.oV.b(this.mVideoPlayStateListener);
        this.qx.c(this);
        this.qx.b((a.a) this);
        com.kwad.components.ad.reward.g gVar = this.pb;
        if (gVar != null) {
            gVar.lI();
        }
        Animator animator = this.ti;
        if (animator != null) {
            animator.cancel();
        }
        DetailVideoView detailVideoView = this.tc;
        if (detailVideoView != null) {
            com.kwad.sdk.d.a.a.n(detailVideoView, this.td);
        }
        Animator animator2 = this.tg;
        if (animator2 != null) {
            animator2.cancel();
        }
        this.ti = null;
        this.tg = null;
    }

    @Override
    public final void y(AdTemplate adTemplate) {
        com.kwad.components.core.i.c cVar = new com.kwad.components.core.i.c(adTemplate, com.kwad.components.core.i.e.AGGREGATION);
        if (this.qx != null) {
            this.qx.b(cVar);
        }
    }
}
