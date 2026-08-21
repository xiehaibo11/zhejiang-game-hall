package com.kwad.components.ad.reward.j.a;

import android.text.TextUtils;
import com.kwad.components.ad.reward.c.f;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.jshandler.i;
import com.kwad.sdk.components.l;

public final class c extends com.kwad.components.core.webview.b.c.c implements e {
    private a xK;

    public final void a(com.kwad.components.ad.reward.c.b bVar) {
        a aVar = this.xK;
        if (aVar != null) {
            aVar.b(bVar);
        }
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(new f(new com.kwad.components.ad.reward.c.d() {
            @Override
            public final void a(com.kwad.components.ad.reward.c.b bVar2) {
                com.kwad.sdk.core.e.c.d("RewardTKDialogFragmentPresenter", "onUpdateExtraReward : " + bVar2.gZ());
                c.this.a(bVar2);
            }
        }));
        lVar.c(new com.kwad.components.core.webview.jshandler.e(new i() {
            @Override
            public final void a(com.kwad.components.core.webview.jshandler.e eVar, String str) {
                if (TextUtils.equals(str, "getExtraReward")) {
                    eVar.a(com.kwad.components.ad.reward.c.a.gW().gX());
                    com.kwad.components.ad.reward.c.a.gW().a(eVar);
                }
            }
        }));
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        super.a(aVar);
        a aVar2 = this.xK;
        if (aVar2 == null || aVar2.jo() == null) {
            return;
        }
        this.xK.jo().mAdOpenInteractionListener.bE();
    }

    @Override
    public final h hU() {
        this.xK = (a) this.Xl;
        return new d(this.xK.jo(), this.xK.xI, getContext());
    }
}
