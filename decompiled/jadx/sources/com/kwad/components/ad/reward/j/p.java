package com.kwad.components.ad.reward.j;

import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.sdk.utils.bj;
import java.lang.ref.WeakReference;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class p extends ab {
    private WeakReference<com.kwad.components.ad.reward.j> qq;
    private long xC;
    private String xD;

    public p(com.kwad.components.ad.reward.j jVar, String str, long j, com.kwad.sdk.core.webview.b bVar) {
        super(bVar);
        this.xC = -1L;
        this.xD = str;
        this.xC = j;
        if (jVar != null) {
            this.qq = new WeakReference<>(jVar);
        }
    }

    private static boolean U(String str) {
        try {
            return new JSONObject(str).optInt("elementType") == 18;
        } catch (Exception unused) {
            return false;
        }
    }

    private boolean b(ab.b bVar) {
        WeakReference<com.kwad.components.ad.reward.j> weakReference;
        if (bVar.getActionType() != 140 || !com.kwad.sdk.core.config.d.xN() || !U(bVar.rw()) || (weakReference = this.qq) == null || weakReference.get() == null) {
            return false;
        }
        final com.kwad.components.ad.reward.j jVar = this.qq.get();
        bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.ad.reward.j.p.1
            @Override // java.lang.Runnable
            public final void run() {
                jVar.G(p.this.xD);
            }
        }, 1500L);
        return true;
    }

    @Override // com.kwad.components.core.webview.jshandler.ab
    public final void a(ab.b bVar) {
        if (b(bVar)) {
            return;
        }
        super.a(bVar);
    }

    @Override // com.kwad.components.core.webview.jshandler.ab
    public final void a(com.kwad.sdk.core.report.j jVar) {
        super.a(jVar);
        WeakReference<com.kwad.components.ad.reward.j> weakReference = this.qq;
        if (weakReference != null && weakReference.get() != null) {
            jVar.af(this.qq.get().oV.getPlayDuration());
            return;
        }
        long j = this.xC;
        if (j > 0) {
            jVar.af(j);
        }
    }
}
