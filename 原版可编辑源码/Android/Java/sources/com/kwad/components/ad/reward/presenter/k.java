package com.kwad.components.ad.reward.presenter;

import android.view.View;
import com.kwad.components.ad.reward.m.g;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;

public final class k extends a implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private RewardActionBarControl oY;
    private com.kwad.components.ad.reward.m.g sm;
    private KsLogoView so;
    private com.kwad.components.ad.reward.m.l sp;
    private boolean sn = false;
    private com.kwad.components.core.video.l mVideoPlayStateListener = new com.kwad.components.core.video.l() {
        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            k.this.hC();
        }
    };

    private void hC() {
        if (this.sn) {
            return;
        }
        com.kwad.components.ad.reward.m.g gVar = this.sm;
        if (gVar == null) {
            this.oY.Q(false);
        } else {
            gVar.a(new g.a() {
                @Override
                public final void hD() {
                    k.this.oY.Q(true);
                }
            }, 500L);
        }
        this.sn = true;
    }

    @Override
    public final void a(RewardActionBarControl.ShowActionBarResult showActionBarResult, View view) {
        com.kwad.components.ad.reward.m.l lVar = this.sp;
        if (lVar != null) {
            lVar.ke();
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.oY = this.qx.oY;
        this.qx.oV.a(this.mVideoPlayStateListener);
        AdTemplate adTemplate = this.qx.mAdTemplate;
        boolean z = com.kwad.sdk.core.response.b.b.bL(adTemplate).displayWeakCard;
        this.qx.B(z);
        if (z) {
            if (this.sm == null) {
                this.sm = new com.kwad.components.ad.reward.m.g(this.qx);
            }
            this.sm.f((AdBaseFrameLayout) findViewById(R.id.ksad_root_container));
            this.sm.b(com.kwad.components.ad.reward.m.r.C(adTemplate));
        }
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (com.kwad.sdk.core.response.b.a.aN(adTemplate)) {
            if (this.sp == null) {
                this.sp = new com.kwad.components.ad.reward.m.l(this.qx);
            }
            this.sp.h(this.qx.mRootContainer);
            this.sp.b(com.kwad.components.ad.reward.m.r.C(adTemplate));
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.d.a(getContext(), adInfoCg, this.so, R.dimen.ksad_live_subscribe_card_logo_margin_bottom, false);
        }
        this.qx.oY.a(this);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.so = (KsLogoView) findViewById(R.id.ksad_ad_label_play_bar);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        this.qx.oY.b(this);
        com.kwad.components.ad.reward.m.l lVar = this.sp;
        if (lVar != null) {
            lVar.onUnbind();
        }
    }
}
