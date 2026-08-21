package com.kwad.components.ad.reward.b;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.text.SpannableString;
import android.text.TextUtils;
import android.text.style.AbsoluteSizeSpan;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.m.d;
import com.kwad.components.ad.reward.m.r;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.CouponInfo;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

public final class a extends d implements View.OnClickListener {
    private TextView gQ;
    private final ViewGroup gg;
    private TextView lC;
    private int[] qS;
    private View qT;
    private ImageView qU;
    private TextView qV;
    private Button qW;
    private b qX;

    final class 1 implements Runnable {
        final r qY;
        final long qZ;

        1(r rVar, long j) {
            this.qY = rVar;
            this.qZ = j;
        }

        @Override
        public final void run() {
            a aVar = a.this;
            final Animator animatorA = a.a(aVar, aVar.qT);
            animatorA.addListener(new AnimatorListenerAdapter() {
                @Override
                public final void onAnimationEnd(Animator animator) {
                    super.onAnimationEnd(animator);
                    animatorA.removeListener(this);
                    com.kwad.sdk.core.report.a.b(1.this.qY.getAdTemplate(), 169, (JSONObject) null);
                    a.a(a.this, a.this.qU, 1.this.qZ).start();
                    bj.a(new Runnable() {
                        @Override
                        public final void run() {
                            a.this.gR();
                        }
                    }, null, 1.this.qZ);
                }
            });
            animatorA.start();
        }
    }

    static class a {
        private CharSequence rf;
        private CharSequence rg;
        private CharSequence rh;
        private CharSequence title;

        private a(CouponInfo couponInfo) {
            this.title = couponInfo.displayTitle;
            this.rf = couponInfo.displayValue;
            this.rg = !TextUtils.isEmpty(couponInfo.displayBase) ? String.format("满%s可用", couponInfo.displayBase) : "";
            this.rh = couponInfo.displayActionWords;
        }

        private static a a(CouponInfo couponInfo) {
            if (couponInfo == null) {
                return null;
            }
            return new a(couponInfo);
        }

        public static a u(AdTemplate adTemplate) {
            AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            if (adProductInfoCy == null || adProductInfoCy.couponList == null || adProductInfoCy.couponList.size() <= 0) {
                return null;
            }
            return a(adProductInfoCy.couponList.get(0));
        }

        public final CharSequence N(Context context) {
            AbsoluteSizeSpan absoluteSizeSpan = new AbsoluteSizeSpan(context.getResources().getDimensionPixelSize(R.dimen.ksad_coupon_dialog_value_prefix_text_size));
            SpannableString spannableString = new SpannableString("¥" + ((Object) this.rf));
            spannableString.setSpan(absoluteSizeSpan, 0, 1, 17);
            return spannableString;
        }

        public final CharSequence gS() {
            return this.rg;
        }

        public final CharSequence gT() {
            return this.rh;
        }

        public final CharSequence getTitle() {
            return this.title;
        }
    }

    public interface b {
        void gU();

        void gV();
    }

    public a(Context context, ViewGroup viewGroup, int[] iArr) {
        this.qS = iArr;
        ViewGroup viewGroup2 = (ViewGroup) l.a(context, R.layout.ksad_reward_coupon_dialog, viewGroup, false);
        this.gg = viewGroup2;
        d(viewGroup2);
    }

    private static Animator a(ImageView imageView, long j) {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(imageView, "alpha", imageView.getAlpha(), 0.0f);
        objectAnimatorOfFloat.setDuration(j);
        return objectAnimatorOfFloat;
    }

    static Animator a(a aVar, View view) {
        return m(view);
    }

    static Animator a(a aVar, ImageView imageView, long j) {
        return a(imageView, j);
    }

    private void a(a aVar) {
        if (aVar == null) {
            return;
        }
        TextView textView = this.gQ;
        if (textView != null) {
            textView.setText(aVar.getTitle());
        }
        TextView textView2 = this.qV;
        if (textView2 != null) {
            textView2.setText(aVar.N(this.gg.getContext()));
        }
        TextView textView3 = this.lC;
        if (textView3 != null) {
            textView3.setText(aVar.gS());
        }
        Button button = this.qW;
        if (button != null) {
            button.setText(aVar.gT());
        }
    }

    private void d(ViewGroup viewGroup) {
        this.qT = viewGroup.findViewById(R.id.ksad_coupon_dialog_card);
        this.qU = (ImageView) viewGroup.findViewById(R.id.ksad_coupon_dialog_bg);
        this.gQ = (TextView) viewGroup.findViewById(R.id.ksad_coupon_dialog_title);
        this.qV = (TextView) viewGroup.findViewById(R.id.ksad_coupon_dialog_content);
        this.lC = (TextView) viewGroup.findViewById(R.id.ksad_coupon_dialog_desc);
        Button button = (Button) viewGroup.findViewById(R.id.ksad_coupon_dialog_btn_action);
        this.qW = button;
        button.setOnClickListener(this);
    }

    private void gR() {
        final Animator animatorN = n(this.qT);
        animatorN.addListener(new AnimatorListenerAdapter() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                animatorN.removeListener(this);
                if (a.this.qX != null) {
                    a.this.qX.gV();
                }
            }
        });
        animatorN.start();
    }

    private static Animator m(View view) {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "scaleX", 0.0f, 1.0f);
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(view, "scaleY", 0.0f, 1.0f);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.setDuration(300L);
        animatorSet.playTogether(objectAnimatorOfFloat, objectAnimatorOfFloat2);
        return animatorSet;
    }

    private Animator n(View view) {
        ObjectAnimator objectAnimatorOfFloat;
        int[] iArrD;
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.89f, 0.02f, 0.72f, 1.0f);
        ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(view, "scaleX", 1.0f, 0.0f);
        ObjectAnimator objectAnimatorOfFloat3 = ObjectAnimator.ofFloat(view, "scaleY", 1.0f, 0.0f);
        objectAnimatorOfFloat2.setInterpolator(interpolatorCreate);
        objectAnimatorOfFloat3.setInterpolator(interpolatorCreate);
        int[] iArr = this.qS;
        ObjectAnimator objectAnimatorOfFloat4 = null;
        if (iArr == null || iArr.length < 2 || (iArrD = com.kwad.sdk.d.a.a.D(view)) == null) {
            objectAnimatorOfFloat = null;
        } else {
            Interpolator interpolatorCreate2 = PathInterpolatorCompat.create(0.33f, 0.0f, 0.83f, 1.0f);
            objectAnimatorOfFloat4 = ObjectAnimator.ofFloat(view, "translationX", this.qS[0] - iArrD[0]);
            objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "translationY", this.qS[1] - iArrD[1]);
            objectAnimatorOfFloat4.setInterpolator(interpolatorCreate2);
            objectAnimatorOfFloat.setInterpolator(interpolatorCreate2);
        }
        ObjectAnimator objectAnimatorOfFloat5 = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 1.0f);
        objectAnimatorOfFloat5.setDuration(200L);
        ObjectAnimator objectAnimatorOfFloat6 = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 0.0f);
        objectAnimatorOfFloat6.setDuration(200L);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playSequentially(objectAnimatorOfFloat5, objectAnimatorOfFloat6);
        AnimatorSet animatorSet2 = new AnimatorSet();
        animatorSet2.setDuration(500L);
        if (objectAnimatorOfFloat4 != null) {
            animatorSet2.playTogether(objectAnimatorOfFloat2, objectAnimatorOfFloat3, animatorSet, objectAnimatorOfFloat4, objectAnimatorOfFloat);
        } else {
            animatorSet2.playTogether(objectAnimatorOfFloat2, objectAnimatorOfFloat3, animatorSet);
        }
        return animatorSet2;
    }

    public final void a(b bVar) {
        this.qX = bVar;
    }

    @Override
    public final void a(r rVar) {
        super.a(rVar);
        a(a.u(rVar.getAdTemplate()));
        this.gg.post(new 1(rVar, com.kwad.components.ad.reward.a.b.gL()));
    }

    @Override
    public final ViewGroup gQ() {
        return this.gg;
    }

    @Override
    public final void onClick(View view) {
        b bVar;
        if (!view.equals(this.qW) || (bVar = this.qX) == null) {
            return;
        }
        bVar.gU();
    }
}
