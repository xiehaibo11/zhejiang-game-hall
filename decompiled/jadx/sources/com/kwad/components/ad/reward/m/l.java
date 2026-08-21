package com.kwad.components.ad.reward.m;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.graphics.drawable.Drawable;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bc;
import com.kwad.sdk.utils.bj;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public final class l extends s implements View.OnClickListener {
    private ImageView eZ;
    private TextView lC;
    private com.kwad.components.ad.reward.j qx;
    private TextView zA;
    private TextView zB;
    private View zC;
    private Set<ImageView> zD = new HashSet();
    private TextView zE;
    private Animator zF;
    private ImageView zy;
    private TextView zz;

    public l(com.kwad.components.ad.reward.j jVar) {
        this.qx = jVar;
    }

    private static Animator a(View view, long j, float f) {
        if (view == null) {
            return null;
        }
        AnimatorSet animatorSet = new AnimatorSet();
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.22f, 0.59f, 0.36f, 1.0f);
        view.setPivotX(0.0f);
        view.setPivotY(view.getHeight());
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(view, "alpha", 1.0f, 1.0f);
        objectAnimatorOfFloat.setDuration(100L);
        ObjectAnimator duration = ObjectAnimator.ofFloat(view, "rotation", 0.0f, f).setDuration(j);
        float f2 = -f;
        long j2 = j * 2;
        ObjectAnimator duration2 = ObjectAnimator.ofFloat(view, "rotation", f, f2).setDuration(j2);
        duration2.setInterpolator(interpolatorCreate);
        ObjectAnimator duration3 = ObjectAnimator.ofFloat(view, "rotation", f2, f).setDuration(j2);
        ObjectAnimator duration4 = ObjectAnimator.ofFloat(view, "rotation", f, f2).setDuration(j2);
        duration4.setInterpolator(interpolatorCreate);
        animatorSet.playSequentially(objectAnimatorOfFloat, duration, duration2, duration3, duration4, ObjectAnimator.ofFloat(view, "rotation", f2, 0.0f).setDuration(j));
        return animatorSet;
    }

    static /* synthetic */ Animator a(l lVar, View view) {
        return r(view);
    }

    static /* synthetic */ Animator a(l lVar, View view, long j, float f) {
        return a(view, 100L, 8.0f);
    }

    private void a(com.kwad.components.ad.reward.model.a aVar) {
        this.zz.setText(aVar.getTitle());
        this.lC.setText(aVar.hq());
        this.zA.setText(aVar.hn());
        String strGu = aVar.gu();
        Drawable drawable = this.eZ.getResources().getDrawable(R.drawable.ksad_ic_default_user_avatar);
        KSImageLoader.loadCircleIcon(this.eZ, strGu, drawable);
        String strX = com.kwad.components.ad.d.b.X();
        if (!bc.isNullString(strX)) {
            KSImageLoader.loadImage(this.zy, strX, aVar.hh());
        }
        if (!aVar.ho()) {
            this.zC.setVisibility(8);
            return;
        }
        this.zC.setVisibility(0);
        String strHm = aVar.hm();
        if (!TextUtils.isEmpty(strHm)) {
            this.zE.setText(String.format("%s已预约直播", strHm));
        }
        if (aVar.hp() != null) {
            List<String> listHp = aVar.hp();
            int i = 0;
            for (ImageView imageView : this.zD) {
                if (i < listHp.size()) {
                    imageView.setVisibility(0);
                    KSImageLoader.loadCircleIcon(imageView, listHp.get(i), drawable);
                }
                i++;
            }
        }
    }

    private void initView() {
        if (this.sw == null) {
            return;
        }
        this.zB = (TextView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_badge);
        this.zy = (ImageView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_kwai_logo);
        this.eZ = (ImageView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_icon);
        this.zz = (TextView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_name);
        this.lC = (TextView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_desc);
        this.zA = (TextView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_btn_follow);
        this.zC = this.sw.findViewById(R.id.ksad_reward_live_subscribe_follower_area);
        ImageView imageView = (ImageView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_follower_icon1);
        ImageView imageView2 = (ImageView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_follower_icon2);
        ImageView imageView3 = (ImageView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_follower_icon3);
        this.zD.add(imageView);
        this.zD.add(imageView2);
        this.zD.add(imageView3);
        this.zE = (TextView) this.sw.findViewById(R.id.ksad_reward_live_subscribe_count);
        this.sw.setOnClickListener(this);
        this.zA.setOnClickListener(this);
    }

    private void kf() {
        this.zB.postDelayed(new Runnable() { // from class: com.kwad.components.ad.reward.m.l.1
            @Override // java.lang.Runnable
            public final void run() {
                l lVar = l.this;
                lVar.zF = l.a(lVar, lVar.zB, 100L, 8.0f);
                l.this.zF.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.reward.m.l.1.1
                    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
                    public final void onAnimationEnd(Animator animator) {
                        super.onAnimationEnd(animator);
                        if (l.this.zF != null) {
                            l.this.zF.start();
                        }
                    }
                });
                l.this.zF.start();
            }
        }, 500L);
    }

    private void kg() {
        bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.ad.reward.m.l.2
            @Override // java.lang.Runnable
            public final void run() {
                l lVar = l.this;
                l.a(lVar, lVar.zC).start();
            }
        }, 2000L);
    }

    private static Animator r(View view) {
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
        ObjectAnimator duration = ObjectAnimator.ofFloat(view, "translationY", view.getResources().getDimension(R.dimen.ksad_live_subscribe_card_count_area_trans_y)).setDuration(250L);
        duration.setInterpolator(interpolatorCreate);
        return duration;
    }

    @Override // com.kwad.components.ad.reward.m.d
    protected final void a(r rVar) {
        super.a(rVar);
        AdTemplate adTemplate = rVar.getAdTemplate();
        if (adTemplate != null) {
            a(com.kwad.components.ad.reward.model.a.w(adTemplate));
        }
    }

    @Override // com.kwad.components.ad.reward.m.d
    protected final void ad(boolean z) {
        super.ad(z);
        Context context = this.sw.getContext();
        if (ai.IN()) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = this.sw.getLayoutParams();
        layoutParams.width = context.getResources().getDimensionPixelSize(R.dimen.ksad_live_subscribe_card_width_horizontal);
        this.sw.setLayoutParams(layoutParams);
    }

    public final void h(ViewGroup viewGroup) {
        super.a(viewGroup, R.id.ksad_reward_live_subscribe_stub, R.id.ksad_reward_live_subscribe_root);
        initView();
    }

    public final void ke() {
        kf();
        kg();
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view.equals(this.zA)) {
            this.qx.a(1, view.getContext(), 29, 1);
        } else if (view.equals(this.sw)) {
            this.qx.a(1, view.getContext(), 53, 2);
        }
    }

    @Override // com.kwad.components.ad.reward.m.d
    public final void onUnbind() {
        super.onUnbind();
        Animator animator = this.zF;
        if (animator != null) {
            animator.cancel();
            this.zF = null;
        }
    }
}
