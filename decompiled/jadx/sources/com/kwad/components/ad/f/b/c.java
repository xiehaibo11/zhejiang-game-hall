package com.kwad.components.ad.f.b;

import android.view.View;
import com.kwad.components.core.video.l;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.f.a.a {
    private List<Integer> cr;
    private volatile boolean cs = false;

    /* JADX INFO: Access modifiers changed from: private */
    public void c(long j) {
        int iCeil = (int) Math.ceil(j / 1000.0f);
        List<Integer> list = this.cr;
        if (list == null || list.isEmpty()) {
            return;
        }
        for (Integer num : this.cr) {
            if (iCeil >= num.intValue()) {
                com.kwad.sdk.core.report.a.a(this.mV.mAdTemplate, iCeil, (JSONObject) null);
                this.cr.remove(num);
                return;
            }
        }
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.cr = com.kwad.sdk.core.response.b.a.bd(com.kwad.sdk.core.response.b.d.cg(this.mV.mAdTemplate));
        this.mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.f.b.c.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayCompleted() {
                com.kwad.sdk.core.report.a.aA(c.this.mV.mAdTemplate);
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayProgress(long j, long j2) {
                c.this.c(j2);
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayStart() {
                c.this.cs = false;
                if (!c.this.mV.mAdTemplate.mPvReported) {
                    c.this.mV.mE.eJ();
                }
                com.kwad.sdk.core.report.j jVar = new com.kwad.sdk.core.report.j();
                View view = (View) c.this.mV.mQ.getParent();
                if (view != null) {
                    jVar.t(view.getHeight(), view.getWidth());
                }
                com.kwad.components.core.t.b.qj().a(c.this.mV.mAdTemplate, null, jVar);
                com.kwad.sdk.core.report.a.j(c.this.mV.mAdTemplate);
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlaying() {
                if (c.this.cs) {
                    return;
                }
                c.this.cs = true;
                com.kwad.components.core.o.a.pA().a(c.this.mV.mAdTemplate, System.currentTimeMillis(), 1);
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }
}
