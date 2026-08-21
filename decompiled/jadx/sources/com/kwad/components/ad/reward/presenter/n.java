package com.kwad.components.ad.reward.presenter;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.sdk.R;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import java.lang.ref.WeakReference;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class n extends a implements View.OnClickListener, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private static long sv = 300;
    private ImageView eZ;
    private WeakReference<View> sA;
    private q sB;
    private ViewGroup sw;
    private TextView sx;
    private boolean sy;
    private float sz;
    private boolean sC = false;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.n.1
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            n.this.hide();
        }
    };

    public n(q qVar) {
        this.sB = qVar;
    }

    private void a(ViewGroup.LayoutParams layoutParams) {
        int dimensionPixelSize;
        if (layoutParams == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams2 = this.sw.getLayoutParams();
        if (layoutParams2 instanceof ViewGroup.MarginLayoutParams) {
            ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams2;
            if (layoutParams.height == -1) {
                dimensionPixelSize = this.sw.getResources().getDimensionPixelSize(R.dimen.ksad_reward_playable_pre_tips_margin_bottom_without_actionbar);
            } else {
                int dimensionPixelSize2 = this.sw.getResources().getDimensionPixelSize(R.dimen.ksad_reward_playable_pre_tips_margin_bottom);
                if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
                    ViewGroup.MarginLayoutParams marginLayoutParams2 = (ViewGroup.MarginLayoutParams) layoutParams;
                    WeakReference<View> weakReference = this.sA;
                    View view = weakReference != null ? weakReference.get() : null;
                    int height = marginLayoutParams2.height;
                    if (height <= 0 && view != null) {
                        height = view.getHeight();
                    }
                    marginLayoutParams.bottomMargin = height + marginLayoutParams2.bottomMargin + dimensionPixelSize2;
                    this.sw.setLayoutParams(marginLayoutParams);
                }
                dimensionPixelSize = layoutParams.height + dimensionPixelSize2;
            }
            marginLayoutParams.bottomMargin = dimensionPixelSize;
            this.sw.setLayoutParams(marginLayoutParams);
        }
    }

    private synchronized void hF() {
        if (this.sC) {
            return;
        }
        com.kwad.sdk.core.report.a.d(this.qx.mAdTemplate, (JSONObject) null, new com.kwad.sdk.core.report.j().ci(PsExtractor.AUDIO_STREAM).af(this.qx.oV.getPlayDuration()));
        this.sC = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public Animator hG() {
        ValueAnimator valueAnimatorOfArgb;
        AnimatorSet animatorSet = new AnimatorSet();
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.sw, "translationX", getContext().getResources().getDimension(R.dimen.ksad_reward_playable_pre_tips_transx));
        Drawable background = this.eZ.getBackground();
        if (background instanceof ColorDrawable) {
            final ColorDrawable colorDrawable = (ColorDrawable) background;
            valueAnimatorOfArgb = com.kwad.sdk.widget.a.ofArgb(getContext().getResources().getColor(R.color.ksad_playable_pre_tips_icon_bg), getContext().getResources().getColor(R.color.ksad_reward_main_color));
            valueAnimatorOfArgb.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.reward.presenter.n.3
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                    colorDrawable.setColor(((Integer) valueAnimator.getAnimatedValue()).intValue());
                }
            });
        } else {
            valueAnimatorOfArgb = null;
        }
        animatorSet.playTogether(objectAnimatorOfFloat, valueAnimatorOfArgb, ObjectAnimator.ofFloat(this.sx, "alpha", 0.0f, 1.0f));
        animatorSet.setDuration(sv);
        return animatorSet;
    }

    private void initView() {
        ViewGroup viewGroup = this.sw;
        if (viewGroup == null) {
            return;
        }
        ImageView imageView = (ImageView) viewGroup.findViewById(R.id.ksad_playabel_pre_tips_icon);
        this.eZ = imageView;
        imageView.setBackgroundColor(getContext().getResources().getColor(R.color.ksad_playable_pre_tips_icon_bg));
        this.sx = (TextView) this.sw.findViewById(R.id.ksad_playabel_pre_tips_text);
        this.sw.setOnClickListener(this);
    }

    public final void J(boolean z) {
        ViewGroup viewGroup = this.sw;
        if (viewGroup == null || viewGroup.getVisibility() == 0) {
            return;
        }
        hF();
        WeakReference<View> weakReference = this.sA;
        if (weakReference != null && weakReference.get() != null) {
            a(this.sA.get().getLayoutParams());
        }
        this.sw.setVisibility(0);
        if (z) {
            this.sw.postDelayed(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.n.2
                @Override // java.lang.Runnable
                public final void run() {
                    n.this.hG().start();
                }
            }, 2000L);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.platdetail.actionbar.a
    public final void a(RewardActionBarControl.ShowActionBarResult showActionBarResult, View view) {
        this.sA = new WeakReference<>(view);
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        com.kwad.sdk.core.e.c.d("RewardPlayablePreTips", "onActionBarShown: type: " + showActionBarResult + ", params.height: " + layoutParams.height + ", params.width: " + layoutParams.width);
        a(layoutParams);
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (this.sw == null) {
            ViewStub viewStub = (ViewStub) findViewById(R.id.ksad_playable_pre_tips_stub);
            this.sw = (ViewGroup) (viewStub != null ? viewStub.inflate() : findViewById(R.id.ksad_playable_pre_tips_root));
            initView();
        }
        if (this.qx.fV()) {
            a(new ViewGroup.LayoutParams(-1, this.sw.getResources().getDimensionPixelSize(R.dimen.ksad_reward_js_actionbar_height)));
        } else {
            this.qx.oY.a(this);
        }
        this.qx.b(this.mPlayEndPageListener);
    }

    public final void hide() {
        ViewGroup viewGroup = this.sw;
        if (viewGroup == null) {
            return;
        }
        viewGroup.setVisibility(8);
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        ViewGroup viewGroup = this.sw;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
        }
        com.kwad.components.ad.reward.b.fp().a(PlayableSource.PENDANT_CLICK_NOT_AUTO);
        com.kwad.sdk.core.report.a.a(this.qx.mAdTemplate, new com.kwad.sdk.core.report.j().ci(PsExtractor.AUDIO_STREAM).af(this.qx.oV.getPlayDuration()));
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.sz = com.kwad.components.ad.reward.a.b.gI();
        this.sy = !com.kwad.components.ad.reward.a.b.gK() && com.kwad.components.ad.reward.a.b.gJ();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.c(this.mPlayEndPageListener);
        this.qx.oY.b(this);
    }
}
