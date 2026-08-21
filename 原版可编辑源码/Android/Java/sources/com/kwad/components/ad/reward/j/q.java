package com.kwad.components.ad.reward.j;

import android.content.DialogInterface;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.lang.ref.WeakReference;

public final class q extends com.kwad.components.core.webview.jshandler.o {
    private long vy;
    private WeakReference<com.kwad.components.ad.reward.j> xF;

    public q(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.components.ad.reward.j jVar, long j, com.kwad.sdk.core.webview.d.a.a aVar, DialogInterface.OnDismissListener onDismissListener) {
        super(bVar, cVar, aVar, onDismissListener);
        this.vy = -1L;
        this.vy = j;
        if (jVar != null) {
            this.xF = new WeakReference<>(jVar);
        }
    }

    @Override
    public final z.b a(com.kwad.sdk.core.webview.d.b.a aVar, AdTemplate adTemplate) {
        long playDuration;
        z.b bVarA = super.a(aVar, adTemplate);
        WeakReference<com.kwad.components.ad.reward.j> weakReference = this.xF;
        if (weakReference == null || weakReference.get() == null) {
            playDuration = this.vy;
            if (playDuration > 0) {
            }
            return bVarA;
        }
        playDuration = this.xF.get().oV.getPlayDuration();
        bVarA.vy = playDuration;
        return bVarA;
    }

    @Override
    public final void jn() {
        super.jn();
        if (this.TL != null) {
            com.kwad.components.ad.reward.c.a.gW().d(this.TL.getAdTemplate(), com.kwad.components.ad.reward.c.b.STATUS_NONE);
        }
    }
}
