package com.kwad.components.ad.reward.presenter;

import android.text.TextUtils;
import com.kwad.sdk.core.response.model.AdInfo;

/* JADX INFO: loaded from: classes2.dex */
public final class g extends a implements com.kwad.sdk.b.a {
    private AdInfo mAdInfo;

    @Override // com.kwad.sdk.b.a
    public final void S(String str) {
        if (TextUtils.equals(com.kwad.sdk.core.response.b.a.aq(this.mAdInfo), str)) {
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
            if (com.kwad.sdk.core.response.b.a.aG(adInfoCg) && com.kwad.sdk.core.response.b.a.aF(adInfoCg) == 1) {
                return;
            }
            if (this.qx.mAdOpenInteractionListener != null) {
                this.qx.mAdOpenInteractionListener.onRewardVerify();
            }
            this.qx.oV.pause();
            this.qx.fR();
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        com.kwad.sdk.b.b.yB().a(this);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.sdk.b.b.yB().b(this);
    }
}
