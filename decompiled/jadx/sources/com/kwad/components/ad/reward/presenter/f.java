package com.kwad.components.ad.reward.presenter;

import com.kwad.components.core.i.a;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends a implements a.InterfaceC0155a {
    private AdTemplate mAdTemplate;

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mAdTemplate = this.qx.mAdTemplate;
        boolean zAX = com.kwad.sdk.core.d.a.AX();
        com.kwad.sdk.core.e.c.d("RewardInnerAdLoadPresenter", "onBind localCheckResult: " + zAX);
        if (this.mAdTemplate.mAdScene == null || !zAX) {
            return;
        }
        com.kwad.components.core.i.a.a(this.mAdTemplate.mAdScene, this);
    }

    @Override // com.kwad.components.core.i.a.InterfaceC0155a
    public final void c(List<com.kwad.components.core.i.c> list) {
        if (list == null || list.size() == 0) {
            return;
        }
        com.kwad.sdk.core.e.c.d("RewardInnerAdLoadPresenter", "onInnerAdLoad: " + list.size());
        AdTemplate adTemplate = list.get(0).getAdTemplate();
        boolean zBf = com.kwad.sdk.core.response.b.b.bf(adTemplate);
        List<a.InterfaceC0155a> listFY = this.qx.fY();
        if (zBf) {
            com.kwad.sdk.core.d.a.f(com.kwad.sdk.core.response.b.b.bc(adTemplate), com.kwad.sdk.core.response.b.b.bd(adTemplate));
            if (listFY != null) {
                Iterator<a.InterfaceC0155a> it = listFY.iterator();
                while (it.hasNext()) {
                    it.next().c(list);
                }
            }
        }
    }

    @Override // com.kwad.components.core.i.a.InterfaceC0155a
    public final void onError(int i, String str) {
        List<a.InterfaceC0155a> listFY = this.qx.fY();
        if (listFY != null) {
            Iterator<a.InterfaceC0155a> it = listFY.iterator();
            while (it.hasNext()) {
                it.next().onError(i, str);
            }
        }
    }

    @Override // com.kwad.components.core.i.a.InterfaceC0155a
    public final void onRequestResult(int i) {
        List<a.InterfaceC0155a> listFY = this.qx.fY();
        if (listFY != null) {
            Iterator<a.InterfaceC0155a> it = listFY.iterator();
            while (it.hasNext()) {
                it.next().onRequestResult(i);
            }
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
    }
}
