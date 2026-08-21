package com.kwad.components.ad.reward.presenter.d;

import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.e.h;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.ad.reward.presenter.d.b.c;
import com.kwad.components.ad.reward.presenter.d.b.d;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.b.e.e;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.mvp.Presenter;
import java.util.List;

public class a extends com.kwad.components.ad.reward.presenter.a implements f, h {
    private e gt = new e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", a.this.qx.mAdTemplate).equals(str)) {
                a.this.bU();
            }
        }
    };

    public a() {
        cb();
    }

    @Override
    private int compareTo(f fVar) {
        return getPriority() - fVar.getPriority();
    }

    private void bU() {
        this.qx.b(this);
        com.kwad.components.ad.reward.b.fp().a(this);
    }

    private void es() {
        List<Presenter> listGj = Gj();
        if (listGj == null) {
            return;
        }
        for (Object obj : listGj) {
            if (obj instanceof c) {
                ((c) obj).iJ();
            }
        }
    }

    @Override
    public final void a(PlayableSource playableSource, l lVar) {
    }

    @Override
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    @Override
    public final void bD() {
        es();
    }

    @Override
    public final void bS() {
    }

    @Override
    public final void bT() {
        es();
    }

    protected void cb() {
        a(new d());
        a(new com.kwad.components.ad.reward.presenter.d.b.a());
        a(new com.kwad.components.ad.reward.presenter.d.b.b());
    }

    @Override
    public final int getPriority() {
        return 0;
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.c(this);
        com.kwad.components.ad.reward.b.fp().b(this);
    }
}
