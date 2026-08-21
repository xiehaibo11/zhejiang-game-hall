package com.kwad.components.ad.splashscreen.c;

import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class d extends e {
    private List<Integer> cr;
    private final com.kwad.components.core.video.k mVideoPlayStateListener = new com.kwad.components.core.video.l() {
        @Override
        public final void onMediaPlayCompleted() {
            d.this.kX();
        }

        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            d.this.c(j2);
        }

        @Override
        public final void onMediaPlayStart() {
            d.this.kW();
        }
    };

    private void c(long j) {
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

    private void kW() {
        com.kwad.sdk.core.report.a.j(this.CM.mAdTemplate);
    }

    private void kX() {
        com.kwad.sdk.core.report.a.aA(this.CM.mAdTemplate);
    }

    @Override
    public final void ah() {
        super.ah();
        this.cr = com.kwad.sdk.core.response.b.a.bd(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate));
        if (this.CM.Cd != null) {
            this.CM.Cd.b(this.mVideoPlayStateListener);
        }
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        if (this.CM.Cd != null) {
            this.CM.Cd.a(this.mVideoPlayStateListener);
        }
    }
}
