package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

import android.content.Context;
import com.kwad.components.ad.reward.presenter.f.g;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.c.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-bottom-card-v2", c.this.qx.mAdTemplate).equals(str) || j.b("ksad-fullscreen-video-card", c.this.qx.mAdTemplate).equals(str)) {
                c.this.qx.pJ = true;
                c.this.qx.oY.Q(true);
            }
        }
    };
    private AdTemplate mAdTemplate;
    private Context mContext;

    public c() {
        a(new f());
        a(new b());
        a(new g());
    }

    private void io() {
        if (com.kwad.components.ad.reward.j.d(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mAdTemplate = this.qx.mAdTemplate;
        this.mContext = this.qx.mContext;
        io();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
    }
}
