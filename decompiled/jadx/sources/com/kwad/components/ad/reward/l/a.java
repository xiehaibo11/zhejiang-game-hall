package com.kwad.components.ad.reward.l;

import android.content.Context;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.ad.reward.j;
import com.kwad.components.core.video.h;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.j.a<h> implements j.a {
    private com.kwad.components.core.g.c ya;

    public a(AdTemplate adTemplate) {
        super(adTemplate);
        long jH = com.kwad.sdk.core.response.b.a.H(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        com.kwad.components.core.g.c cVar = new com.kwad.components.core.g.c();
        this.ya = cVar;
        cVar.v(jH);
    }

    public final FrameLayout Q(Context context) {
        FrameLayout imagePlayerView = this.ya.getImagePlayerView(context);
        this.ya.setImageScaleType(ImageView.ScaleType.FIT_CENTER);
        return imagePlayerView;
    }

    @Override // com.kwad.components.ad.j.a
    public final void a(h hVar) {
        this.ya.d(hVar);
    }

    @Override // com.kwad.components.ad.j.a
    public final void b(h hVar) {
        this.ya.c(hVar);
    }

    @Override // com.kwad.components.ad.j.a
    public final long getPlayDuration() {
        return this.ya.getPlayDuration();
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gj() {
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gk() {
        resume();
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gl() {
        pause();
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gm() {
        this.ya.destroy();
    }

    public final void jN() {
        this.ya.setURLs(com.kwad.sdk.core.response.b.a.aT(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)));
        this.ya.play();
    }

    @Override // com.kwad.components.ad.j.a
    public final void pause() {
        this.ya.pause();
    }

    @Override // com.kwad.components.ad.j.a
    public final void release() {
        super.release();
        this.ya.destroy();
    }

    @Override // com.kwad.components.ad.j.a
    public final void resume() {
        this.ya.resume();
    }

    @Override // com.kwad.components.ad.j.a
    public final void skipToEnd() {
        this.ya.skipToEnd();
    }
}
