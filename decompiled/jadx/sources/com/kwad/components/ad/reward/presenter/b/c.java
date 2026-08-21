package com.kwad.components.ad.reward.presenter.b;

import android.view.View;
import com.kwad.components.ad.reward.m.o;
import com.kwad.components.ad.reward.m.r;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private RewardActionBarControl oY;
    private l ss = new l() { // from class: com.kwad.components.ad.reward.presenter.b.c.1
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            c.this.hC();
        }
    };
    private o tQ;

    /* JADX INFO: Access modifiers changed from: private */
    public void hC() {
        this.oY.Q(false);
    }

    @Override // com.kwad.components.ad.reward.presenter.platdetail.actionbar.a
    public final void a(RewardActionBarControl.ShowActionBarResult showActionBarResult, View view) {
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.oY = this.qx.oY;
        this.qx.oV.a(this.ss);
        AdTemplate adTemplate = this.qx.mAdTemplate;
        AdInfo adInfoCg = d.cg(adTemplate);
        if (com.kwad.sdk.core.response.b.a.cw(adInfoCg)) {
            if (this.tQ == null) {
                this.tQ = new o(this.qx);
            }
            this.tQ.a(this.qx.mRootContainer, com.kwad.sdk.core.response.b.a.aX(adInfoCg));
            this.tQ.b(r.C(adTemplate));
            findViewById(R.id.ksad_reward_origin_live_root).setVisibility(8);
        }
        this.qx.oY.a(this);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.ss);
        this.qx.oY.b(this);
        o oVar = this.tQ;
        if (oVar != null) {
            oVar.onUnbind();
        }
    }
}
