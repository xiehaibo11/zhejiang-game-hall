package com.kwad.components.ad.splashscreen.c;

import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends e {
    private List<Integer> cr;
    private final com.kwad.components.core.video.k mVideoPlayStateListener = new com.kwad.components.core.video.l() { // from class: com.kwad.components.ad.splashscreen.c.d.1
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            d.this.kX();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            d.this.c(j2);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
            d.this.kW();
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void c(long j) {
        int iCeil = (int) Math.ceil(j / 1000.0f);
        List<Integer> list = this.cr;
        if (list == null || list.isEmpty()) {
            return;
        }
        Iterator<Integer> it = this.cr.iterator();
        while (it.hasNext()) {
            if (iCeil >= it.next().intValue()) {
                com.kwad.sdk.core.report.a.a(this.CM.mAdTemplate, iCeil, (JSONObject) null);
                it.remove();
                return;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void kW() {
        com.kwad.sdk.core.report.a.j(this.CM.mAdTemplate);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void kX() {
        com.kwad.sdk.core.report.a.aA(this.CM.mAdTemplate);
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.cr = com.kwad.sdk.core.response.b.a.bd(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate));
        if (this.CM.Cd != null) {
            this.CM.Cd.b(this.mVideoPlayStateListener);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        if (this.CM.Cd != null) {
            this.CM.Cd.a(this.mVideoPlayStateListener);
        }
    }
}
