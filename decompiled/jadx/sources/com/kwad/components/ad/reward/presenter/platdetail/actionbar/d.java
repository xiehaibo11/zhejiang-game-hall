package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

import android.content.Context;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.m.i;
import com.kwad.components.ad.reward.m.r;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.ai;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.m.b {
    private ViewGroup gg;
    private KsLogoView so;
    private i uT;

    public d(ViewGroup viewGroup) {
        this.gg = viewGroup;
    }

    public static FrameLayout.LayoutParams a(Context context, AdInfo adInfo, KsLogoView ksLogoView, int i, boolean z) {
        FrameLayout.LayoutParams layoutParamsA = null;
        if (ksLogoView != null && context != null) {
            ViewGroup.LayoutParams layoutParams = ksLogoView.getLayoutParams();
            if (!(layoutParams instanceof FrameLayout.LayoutParams)) {
                return null;
            }
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
            layoutParamsA = a(layoutParams2);
            if (z) {
                ksLogoView.setVisibility(0);
            }
            boolean z2 = (!ai.IN() && (com.kwad.components.ad.reward.a.b.i(adInfo) || com.kwad.sdk.core.response.b.a.cq(adInfo))) || (ai.IN() && com.kwad.sdk.core.response.b.a.cp(adInfo));
            layoutParams2.gravity = 85;
            if (z2) {
                i = R.dimen.ksad_reward_follow_card_margin;
            }
            layoutParams2.bottomMargin = context.getResources().getDimensionPixelOffset(i);
            layoutParams2.rightMargin = context.getResources().getDimensionPixelOffset(R.dimen.ksad_reward_follow_card_margin);
            ksLogoView.setLayoutParams(layoutParams2);
        }
        return layoutParamsA;
    }

    private static FrameLayout.LayoutParams a(FrameLayout.LayoutParams layoutParams) {
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams((ViewGroup.MarginLayoutParams) layoutParams);
        layoutParams2.gravity = layoutParams.gravity;
        return layoutParams2;
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        i iVar = new i(this.qx, this.gg, this.so);
        this.uT = iVar;
        iVar.b(r.C(this.qx.mAdTemplate));
        a(getContext(), com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate), this.so, R.dimen.ksad_reward_jinniu_logo_margin_bottom, false);
    }

    @Override // com.kwad.components.ad.reward.m.b
    public final void gU() {
    }

    @Override // com.kwad.components.ad.reward.m.b
    public final void ip() {
    }

    @Override // com.kwad.components.ad.reward.m.b
    public final void iq() {
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.so = (KsLogoView) findViewById(R.id.ksad_ad_label_play_bar);
    }
}
