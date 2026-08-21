package com.kwad.components.ad.interstitial.aggregate;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.content.Context;
import android.os.Build;
import android.support.v4.view.ViewPager;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AlphaAnimation;
import android.view.animation.AnimationSet;
import android.view.animation.TranslateAnimation;
import com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator;
import com.kwad.components.ad.interstitial.aggregate.a;
import com.kwad.components.ad.interstitial.aggregate.c;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.ai;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

public final class b extends com.kwad.components.ad.interstitial.f.a {
    private com.kwad.components.core.widget.a.b bG;
    private final com.kwad.sdk.core.h.c cV;
    private boolean hH;
    private TransViewPager hL;
    private a hM;
    private ViewPagerIndicator hN;
    private SlideTipsView hO;
    private SlideTipsView hP;
    private ValueAnimator hQ;
    private boolean hR;
    private InterstitialAggregateManualTipsView hS;
    private boolean hT;
    private boolean hU;
    private final ViewPager.OnPageChangeListener hV;
    protected KsInterstitialAd.AdInteractionListener hz;
    protected AdInfo mAdInfo;
    protected AdTemplate mAdTemplate;
    private final List<AdTemplate> mAdTemplateList;
    private final View mRootView;

    public b(Context context) {
        this(context, null);
    }

    private b(Context context, AttributeSet attributeSet) {
        super(context, null);
        this.mAdTemplateList = new ArrayList();
        this.cV = new com.kwad.sdk.core.h.d() {
            @Override
            public final void aK() {
                super.aK();
                if (Build.VERSION.SDK_INT >= 19 && b.this.hR) {
                    if (b.this.hN != null) {
                        b.this.hN.cz();
                    }
                    if (b.this.hQ != null) {
                        b.this.hQ.resume();
                    }
                    b.this.hR = false;
                }
            }

            @Override
            public final void aL() {
                super.aL();
                if (Build.VERSION.SDK_INT >= 19 && !b.this.hR) {
                    if (b.this.hN != null) {
                        b.this.hN.cy();
                    }
                    if (b.this.hQ != null) {
                        b.this.hQ.pause();
                    }
                    b.this.hR = true;
                }
            }
        };
        this.hV = new ViewPager.SimpleOnPageChangeListener() {
            private int hX = 0;

            @Override
            public final void onPageScrolled(int i, float f, int i2) {
                if (f != 0.0f) {
                    if (b.this.hO.getVisibility() == 0) {
                        b.this.hO.clearAnimation();
                        b.this.hO.setVisibility(8);
                    }
                    if (b.this.hP.getVisibility() == 0) {
                        b.this.hP.clearAnimation();
                        b.this.hP.setVisibility(8);
                    }
                }
            }

            @Override
            public final void onPageSelected(int i) {
                com.kwad.components.ad.interstitial.f.c cVarX = b.this.hL.x(i);
                if (cVarX != null) {
                    cVarX.es();
                }
                if (this.hX != i) {
                    com.kwad.sdk.core.report.a.a((AdTemplate) b.this.mAdTemplateList.get(this.hX), -1L, (JSONObject) null);
                    com.kwad.components.ad.interstitial.f.c cVarX2 = b.this.hL.x(this.hX);
                    if (cVarX2 != null) {
                        cVarX2.et();
                    }
                }
                this.hX = i;
            }
        };
        this.mContext = context;
        this.mRootView = l.inflate(context, R.layout.ksad_interstitial_multi_ad, this);
        initView();
    }

    static AnimationSet a(b bVar, float f, float f2) {
        return b(f, f2);
    }

    static boolean a(b bVar, boolean z) {
        bVar.hU = true;
        return true;
    }

    private static AnimationSet b(float f, float f2) {
        TranslateAnimation translateAnimation = new TranslateAnimation(1, f, 1, f2, 1, 0.0f, 1, 0.0f);
        AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 0.8f);
        AnimationSet animationSet = new AnimationSet(true);
        animationSet.addAnimation(translateAnimation);
        animationSet.addAnimation(alphaAnimation);
        animationSet.setDuration(800L);
        animationSet.setFillAfter(true);
        return animationSet;
    }

    private void cm() {
        if (this.mAdTemplate.mAdScene != null) {
            c.ct().a(16, com.kwad.components.ad.interstitial.a.b.cF(), this.mAdTemplate.mAdScene, new c.b() {
                @Override
                public final void onInterstitialAdLoad(List<AdTemplate> list) {
                    if (list == null || list.size() <= 0) {
                        return;
                    }
                    b.this.mAdTemplateList.addAll(list);
                    b.this.hM.setAdTemplateList(b.this.mAdTemplateList);
                    b.this.hM.notifyDataSetChanged();
                    b.this.hL.setOffscreenPageLimit(b.this.mAdTemplateList.size() - 1);
                    b.this.hL.addOnPageChangeListener(b.this.hV);
                    b.this.cp();
                    b.this.hN.setViewPager(b.this.hL);
                    b.this.hN.setVisibility(0);
                    b.this.bG.a(b.this.cV);
                    com.kwad.components.ad.interstitial.b.a.J(b.this.mContext);
                }
            });
        }
    }

    private void cp() {
        this.hN.setPlayProgressListener(new ViewPagerIndicator.a() {
            @Override
            public final void cs() {
                b.a(b.this, true);
                if (b.this.hH) {
                    b.this.cr();
                } else {
                    b.this.cq();
                }
                b.this.hL.setScrollable(true);
            }
        });
    }

    private void cq() {
        if (this.hT) {
            this.hS.a(this.mAdTemplate, this.hL);
        }
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(0, 120, 0);
        this.hQ = valueAnimatorOfInt;
        valueAnimatorOfInt.setDuration(1200L);
        this.hQ.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.this.hL.scrollTo(com.kwad.sdk.d.a.a.a(b.this.mContext, ((Integer) valueAnimator.getAnimatedValue()).intValue()), 0);
                b.this.hL.onPageScrolled(0, com.kwad.sdk.d.a.a.a(b.this.mContext, r4) / b.this.getWidth(), 0);
            }
        });
        this.hQ.addListener(new AnimatorListenerAdapter() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                if (b.this.hT) {
                    AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 1.0f);
                    alphaAnimation.setDuration(200L);
                    alphaAnimation.setFillAfter(true);
                    b.this.hS.startAnimation(alphaAnimation);
                    b.this.hS.setVisibility(0);
                }
                b.this.hO.setVisibility(0);
                b.this.hO.startAnimation(b.a(b.this, 0.5f, 0.1f));
            }
        });
        this.hQ.start();
    }

    private void cr() {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(0, getWidth());
        this.hQ = valueAnimatorOfInt;
        valueAnimatorOfInt.setDuration(800L);
        this.hQ.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
                b.this.hL.scrollTo(iIntValue, 0);
                b.this.hL.onPageScrolled(0, iIntValue / b.this.getWidth(), 0);
            }
        });
        this.hQ.addListener(new AnimatorListenerAdapter() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                b.this.hL.setCurrentItem(1);
                b.this.hP.setVisibility(0);
                b.this.hP.startAnimation(b.a(b.this, -0.5f, -0.1f));
            }
        });
        this.hQ.start();
    }

    private void initView() {
        this.hL = (TransViewPager) this.mRootView.findViewById(R.id.ksad_multi_ad_container);
        this.hN = (ViewPagerIndicator) this.mRootView.findViewById(R.id.ksad_multi_ad_indicator);
        this.hO = (SlideTipsView) this.mRootView.findViewById(R.id.ksad_left_slide);
        this.hP = (SlideTipsView) this.mRootView.findViewById(R.id.ksad_right_slide);
        this.hS = (InterstitialAggregateManualTipsView) this.mRootView.findViewById(R.id.ksad_manual_tips_view);
        this.bG = new com.kwad.components.core.widget.a.b(this.mRootView, 100);
    }

    @Override
    public final void a(AdTemplate adTemplate, com.kwad.components.ad.interstitial.d dVar, KsAdVideoPlayConfig ksAdVideoPlayConfig, KsInterstitialAd.AdInteractionListener adInteractionListener) {
        float f;
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        this.hH = com.kwad.sdk.core.response.b.a.cd(adInfoCg) == 1;
        this.mAdTemplateList.clear();
        this.mAdTemplateList.add(this.mAdTemplate);
        this.hz = adInteractionListener;
        a aVar = new a(adTemplate, dVar, ksAdVideoPlayConfig, adInteractionListener);
        this.hM = aVar;
        aVar.a(new a.b() {
            @Override
            public final void a(com.kwad.components.ad.interstitial.f.c cVar, int i) {
                b.this.hL.a(i, cVar);
            }
        });
        this.hM.a(new a.a() {
            @Override
            public final void cl() {
                if (b.this.hU) {
                    return;
                }
                if (b.this.hQ != null) {
                    b.this.hQ.cancel();
                }
                b.this.hN.setPlayProgressListener(null);
                b.this.hN.setVisibility(8);
                b.this.hL.setScrollable(false);
            }
        });
        this.hL.setAdapter(this.hM);
        this.hM.setAdTemplateList(this.mAdTemplateList);
        this.hM.notifyDataSetChanged();
        this.bG.sy();
        ViewPagerIndicator viewPagerIndicator = this.hN;
        if (viewPagerIndicator == null) {
            return;
        }
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) viewPagerIndicator.getLayoutParams();
        if (marginLayoutParams != null) {
            this.hT = ai.IN();
            Context context = this.mContext;
            if (this.hT) {
                f = this.hH ? 12 : 4;
            } else {
                f = 6.0f;
            }
            marginLayoutParams.bottomMargin = com.kwad.sdk.d.a.a.a(context, f);
            this.hN.setLayoutParams(marginLayoutParams);
        }
        this.hN.setFirstAdShowTime(com.kwad.sdk.core.response.b.a.ce(this.mAdInfo));
        post(new Runnable() {
            @Override
            public final void run() {
                b.this.cm();
            }
        });
    }

    @Override
    public final void cn() {
    }

    @Override
    public final void co() {
    }

    @Override
    protected final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.bG.b(this.cV);
        this.bG.sz();
        this.mAdTemplateList.clear();
        this.hL.clearOnPageChangeListeners();
        c.ct().release();
    }

    @Override
    public final void setAdInteractionListener(KsInterstitialAd.AdInteractionListener adInteractionListener) {
        this.hz = adInteractionListener;
    }
}
