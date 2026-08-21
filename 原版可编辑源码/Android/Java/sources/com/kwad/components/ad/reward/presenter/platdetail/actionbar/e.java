package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.m.n;
import com.kwad.components.ad.reward.m.r;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.t.g;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;

public final class e extends com.kwad.components.ad.reward.presenter.a implements RewardActionBarControl.c {
    private ViewGroup gg;
    private KsLogoView so;
    private n uU;
    private int uV;
    private FrameLayout.LayoutParams uW;
    private n.a uX;

    public e(ViewGroup viewGroup, n.a aVar) {
        this.gg = viewGroup;
        this.uX = aVar;
    }

    @Override
    public final void ah() {
        super.ah();
        this.qx.oY.a(this);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        this.uV = this.so.getVisibility();
        this.uW = d.a(getContext(), adInfoCg, this.so, R.dimen.ksad_reward_order_logo_margin_bottom, !this.qx.oV.jR());
        n nVar = new n(this.gg, new com.kwad.components.ad.reward.m.a(getContext(), this.qx) {
            @Override
            public final void ip() {
                e.this.qx.a(1, e.this.getContext(), 10, 2);
            }

            @Override
            public final void iq() {
                e.this.qx.a(1, e.this.getContext(), 10, 2);
            }
        });
        this.uU = nVar;
        nVar.a(this.uX);
        this.uU.b(r.C(this.qx.mAdTemplate));
        g.a(new com.kwad.components.core.widget.e(), this.uU.gQ());
    }

    @Override
    public final void e(a aVar) {
        this.gg.setVisibility(0);
        RewardActionBarControl.a(aVar, this.gg, RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_ORDER);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.so = (KsLogoView) findViewById(R.id.ksad_ad_label_play_bar);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.so.setVisibility(this.uV);
        FrameLayout.LayoutParams layoutParams = this.uW;
        if (layoutParams != null) {
            this.so.setLayoutParams(layoutParams);
        }
    }
}
