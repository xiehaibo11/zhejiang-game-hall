package com.kwad.components.ad.reward;

import android.text.TextUtils;
import com.kwad.components.core.playable.PlayableSource;
import java.lang.ref.WeakReference;
import org.json.JSONObject;

public final class l extends com.kwad.components.ad.k.b {
    private com.kwad.components.ad.reward.c.d qp;
    private WeakReference<j> qq;

    public l(j jVar, JSONObject jSONObject, String str) {
        super(jSONObject, null);
        this.qq = new WeakReference<>(jVar);
    }

    public final void a(com.kwad.components.ad.reward.c.d dVar) {
        this.qp = dVar;
    }

    @Override
    public final void a(com.kwad.components.core.webview.a aVar) {
        super.a(aVar);
        aVar.a(new com.kwad.components.ad.reward.h.b(this.cB.getContext(), this.mAdTemplate, PlayableSource.ENDCARD_CLICK));
        aVar.a(new com.kwad.components.ad.reward.c.f(new com.kwad.components.ad.reward.c.d() {
            @Override
            public final void a(com.kwad.components.ad.reward.c.b bVar) {
                if (l.this.qp != null) {
                    l.this.qp.a(bVar);
                }
            }
        }));
        aVar.a(new com.kwad.components.core.webview.jshandler.e(new com.kwad.components.core.webview.jshandler.i() {
            @Override
            public final void a(com.kwad.components.core.webview.jshandler.e eVar, String str) {
                if (TextUtils.equals(str, "getExtraReward")) {
                    eVar.a(com.kwad.components.ad.reward.c.a.gW().gX());
                }
            }
        }));
        WeakReference<j> weakReference = this.qq;
        aVar.b(new com.kwad.components.ad.reward.j.p(weakReference != null ? weakReference.get() : null, "native_id", -1L, this.cE));
    }

    @Override
    public final void fD() {
        WeakReference<j> weakReference = this.qq;
        com.kwad.components.ad.reward.monitor.a.a((weakReference != null ? weakReference.get() : null) != null, "end_card");
    }

    @Override
    public final void fE() {
        WeakReference<j> weakReference = this.qq;
        com.kwad.components.ad.reward.monitor.a.a((weakReference != null ? weakReference.get() : null) != null, "end_card", o(this.mAdTemplate));
    }

    @Override
    public final void fF() {
        WeakReference<j> weakReference = this.qq;
        com.kwad.components.ad.reward.monitor.a.a((weakReference != null ? weakReference.get() : null) != null, "end_card", o(this.mAdTemplate), System.currentTimeMillis() - getLoadTime());
    }
}
