package com.kwad.components.ad.reward.m;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.widget.KsPriceView;
import com.kwad.components.core.widget.KSCornerImageView;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.components.core.widget.KsStyledTextButton;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.CouponInfo;
import com.kwad.sdk.utils.ai;

public final class i extends d implements View.OnClickListener {
    private TextView gQ;
    private KSCornerImageView lB;
    private TextView lC;
    private KsLogoView mLogoView;
    private com.kwad.components.ad.reward.j qx;
    private ViewGroup sw;
    private ViewGroup yV;
    private KsPriceView yW;
    private TextView yX;
    private KsStyledTextButton yY;
    private TextView yZ;
    private TextView za;
    private View zb;
    private ImageView zc;

    static class a {
        private String ln;
        private String ql;
        private String qm;
        private String rO;
        private String rating;
        private String title;
        private String zm;
        private String zn;
        private String zo;
        private String zp;

        private a() {
        }

        static a B(AdTemplate adTemplate) {
            CouponInfo firstCouponList;
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
            AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfoCg);
            a aVar = new a();
            String name = adProductInfoCy.getName();
            aVar.title = name;
            if (TextUtils.isEmpty(name)) {
                aVar.title = com.kwad.sdk.core.response.b.a.ap(adInfoCg);
            }
            aVar.zo = com.kwad.sdk.core.response.b.a.aw(adInfoCg);
            aVar.ql = adProductInfoCy.getIcon();
            aVar.qm = com.kwad.sdk.core.response.b.a.an(adInfoCg);
            aVar.zm = adProductInfoCy.getPrice();
            aVar.ln = adProductInfoCy.getOriginPrice();
            aVar.zp = adProductInfoCy.getVolume();
            aVar.rating = adProductInfoCy.getRating();
            if (!adProductInfoCy.isCouponListEmpty() && (firstCouponList = adProductInfoCy.getFirstCouponList()) != null) {
                aVar.zn = CouponInfo.jinniuFormatCoupon(firstCouponList);
                aVar.P(firstCouponList.getFormattedJinniuPrefix());
            }
            return aVar;
        }

        private void P(String str) {
            this.rO = str;
        }

        public final String ef() {
            return this.ln;
        }

        public final String getRating() {
            return this.rating;
        }

        public final String getTitle() {
            return this.title;
        }

        public final String gu() {
            return this.ql;
        }

        public final String gv() {
            return this.qm;
        }

        public final String hg() {
            return this.rO;
        }

        public final String ka() {
            return this.zm;
        }

        public final String kb() {
            return this.zn;
        }

        public final String kc() {
            return this.zo;
        }

        public final String kd() {
            return this.zp;
        }
    }

    public i(com.kwad.components.ad.reward.j jVar, ViewGroup viewGroup, KsLogoView ksLogoView) {
        this.qx = jVar;
        this.mLogoView = ksLogoView;
        this.yV = viewGroup;
        initView();
    }

    private static Animator a(View view, float f) {
        if (view == null || view.getWidth() <= 0) {
            return null;
        }
        ObjectAnimator duration = ObjectAnimator.ofFloat(view, "translationX", view.getResources().getDimension(R.dimen.ksad_jinniu_light_sweep_width) + f).setDuration(1000L);
        duration.setInterpolator(PathInterpolatorCompat.create(0.42f, 0.0f, 1.0f, 1.0f));
        ObjectAnimator duration2 = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 1.0f).setDuration(1000L);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playSequentially(duration, duration2);
        return animatorSet;
    }

    private Animator a(final View view, View view2, final View view3) {
        final int height = view.getHeight();
        if (height <= 0 || view.getLayoutParams() == null) {
            return null;
        }
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.51f, 0.0f, 0.67f, 1.0f);
        ValueAnimator duration = ValueAnimator.ofInt(height, view.getResources().getDimensionPixelSize(R.dimen.ksad_reward_jinniu_card_height_full)).setDuration(500L);
        duration.setInterpolator(interpolatorCreate);
        view.getContext();
        if (ai.IN() && view3 != null && (view3.getLayoutParams() instanceof ViewGroup.MarginLayoutParams)) {
            final ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view3.getLayoutParams();
            final int i = marginLayoutParams.bottomMargin;
            duration.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                    int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
                    int i2 = iIntValue - height;
                    marginLayoutParams.bottomMargin = i + i2;
                    view3.setLayoutParams(marginLayoutParams);
                    ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
                    if (layoutParams != null) {
                        layoutParams.height = iIntValue;
                        view.setLayoutParams(layoutParams);
                    }
                }
            });
        }
        AnimatorSet animatorSet = new AnimatorSet();
        ObjectAnimator duration2 = ObjectAnimator.ofFloat(view2, "alpha", 0.0f, 0.0f).setDuration(200L);
        Interpolator interpolatorCreate2 = PathInterpolatorCompat.create(0.86f, 0.0f, 0.83f, 1.0f);
        ObjectAnimator duration3 = ObjectAnimator.ofFloat(view2, "alpha", 0.0f, 1.0f).setDuration(300L);
        duration3.setInterpolator(interpolatorCreate2);
        animatorSet.playSequentially(duration2, duration3);
        AnimatorSet animatorSet2 = new AnimatorSet();
        animatorSet2.playTogether(duration, animatorSet);
        return animatorSet2;
    }

    static Animator a(i iVar, View view, float f) {
        return a(view, f);
    }

    private void a(AdTemplate adTemplate, a aVar) {
        TextView textView;
        String rating;
        if (aVar == null) {
            return;
        }
        KSImageLoader.loadAppIcon(this.lB, aVar.gu(), adTemplate, 4);
        TextView textView2 = this.gQ;
        if (textView2 != null) {
            textView2.setText(aVar.getTitle());
        }
        TextView textView3 = this.lC;
        if (textView3 != null) {
            textView3.setText(aVar.gv());
        }
        KsPriceView ksPriceView = this.yW;
        if (ksPriceView != null) {
            int dimensionPixelSize = ksPriceView.getResources().getDimensionPixelSize(R.dimen.ksad_reward_jinniu_end_origin_text_size);
            this.yW.getConfig().ag(dimensionPixelSize).ai(dimensionPixelSize).ah(this.yW.getResources().getColor(R.color.ksad_jinniu_end_origin_color));
            this.yW.d(aVar.ka(), aVar.ef(), true);
        }
        if (this.yX != null) {
            if (!TextUtils.isEmpty(aVar.kd())) {
                textView = this.yX;
                rating = aVar.kd();
            } else if (TextUtils.isEmpty(aVar.getRating())) {
                this.yX.setVisibility(8);
            } else {
                textView = this.yX;
                rating = aVar.getRating();
            }
            textView.setText(rating);
        }
        if (this.yZ != null && !TextUtils.isEmpty(aVar.kb())) {
            this.yZ.setText(aVar.kb());
        }
        if (this.yY != null && !TextUtils.isEmpty(aVar.kc())) {
            this.yY.setText(aVar.kc());
        }
        int i = TextUtils.isEmpty(aVar.kb()) ? 8 : 0;
        View view = this.zb;
        if (view != null) {
            view.setVisibility(i);
        }
        if (this.za == null || TextUtils.isEmpty(aVar.hg())) {
            return;
        }
        this.za.setText(aVar.hg());
    }

    private void initView() {
        this.sw = (ViewGroup) this.yV.findViewById(R.id.ksad_reward_jinniu_root);
        this.lB = (KSCornerImageView) this.yV.findViewById(R.id.ksad_reward_jinniu_icon);
        this.gQ = (TextView) this.yV.findViewById(R.id.ksad_reward_jinniu_title);
        this.lC = (TextView) this.yV.findViewById(R.id.ksad_reward_jinniu_desc);
        this.yW = (KsPriceView) this.yV.findViewById(R.id.ksad_reward_jinniu_price);
        this.yX = (TextView) this.yV.findViewById(R.id.ksad_reward_jinniu_right_label);
        this.yY = (KsStyledTextButton) this.yV.findViewById(R.id.ksad_reward_jinniu_btn_buy);
        this.zc = (ImageView) this.yV.findViewById(R.id.ksad_reward_jinniu_light_sweep);
        this.zb = this.yV.findViewById(R.id.ksad_reward_jinniu_coupon_layout);
        this.yZ = (TextView) this.yV.findViewById(R.id.ksad_reward_jinniu_coupon);
        this.za = (TextView) this.yV.findViewById(R.id.ksad_reward_jinniu_coupon_prefix);
        this.sw.setOnClickListener(this);
        KsStyledTextButton ksStyledTextButton = this.yY;
        if (ksStyledTextButton != null) {
            ksStyledTextButton.setOnClickListener(this);
        }
        Context context = this.sw.getContext();
        if (ai.IN()) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = this.sw.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
            layoutParams2.width = context.getResources().getDimensionPixelSize(R.dimen.ksad_reward_follow_card_width_horizontal);
            this.sw.setLayoutParams(layoutParams2);
        }
    }

    @Override
    public final void a(r rVar) {
        super.a(rVar);
        if (rVar == null) {
            return;
        }
        a(rVar.getAdTemplate(), a.B(rVar.getAdTemplate()));
        ViewGroup viewGroup = this.sw;
        if (viewGroup != null) {
            viewGroup.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    i iVar = i.this;
                    Animator animatorA = iVar.a(iVar.sw, i.this.yY, i.this.mLogoView);
                    if (animatorA != null) {
                        animatorA.start();
                    }
                }
            }, 3000L);
            this.sw.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    if (i.this.yY == null || i.this.yY.getWidth() == 0) {
                        return;
                    }
                    float width = i.this.yY.getWidth();
                    i iVar = i.this;
                    final Animator animatorA = i.a(iVar, iVar.zc, width);
                    if (animatorA != null) {
                        animatorA.addListener(new AnimatorListenerAdapter() {
                            private int ze = 1;

                            @Override
                            public final void onAnimationEnd(Animator animator) {
                                super.onAnimationEnd(animator);
                                if (this.ze >= 3) {
                                    return;
                                }
                                animatorA.start();
                                this.ze++;
                            }
                        });
                        animatorA.start();
                    }
                }
            }, 5000L);
        }
    }

    @Override
    public final ViewGroup gQ() {
        return this.sw;
    }

    @Override
    public final void onClick(View view) {
        if (view.equals(this.sw)) {
            this.qx.a(1, view.getContext(), 118, 2);
        } else if (view.equals(this.yY)) {
            this.qx.a(1, view.getContext(), 1, 1);
        }
    }
}
