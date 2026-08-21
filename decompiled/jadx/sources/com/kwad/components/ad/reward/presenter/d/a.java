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

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.components.ad.reward.presenter.a implements f, h {
    private e gt = new e() { // from class: com.kwad.components.ad.reward.presenter.d.a.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", a.this.qx.mAdTemplate).equals(str)) {
                a.this.bU();
            }
        }
    };

    public a() {
        cb();
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(f fVar) {
        return getPriority() - fVar.getPriority();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bU() {
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

    @Override // com.kwad.components.ad.reward.e.h
    public final void a(PlayableSource playableSource, l lVar) {
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    @Override // com.kwad.components.ad.reward.e.f
    public final void bD() {
        es();
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bS() {
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bT() {
        es();
    }

    protected void cb() {
        a(new d());
        a(new com.kwad.components.ad.reward.presenter.d.b.a());
        a(new com.kwad.components.ad.reward.presenter.d.b.b());
    }

    @Override // com.kwad.components.ad.reward.e.f
    public final int getPriority() {
        return 0;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.c(this);
        com.kwad.components.ad.reward.b.fp().b(this);
    }
}
