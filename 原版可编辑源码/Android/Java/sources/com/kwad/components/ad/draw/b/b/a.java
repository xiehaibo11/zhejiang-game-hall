package com.kwad.components.ad.draw.b.b;

import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class a {
    private a cv;
    private b cw;
    private boolean cx = false;
    private AdTemplate mAdTemplate;

    public interface a {
        void ao();
    }

    public interface b {
        boolean ap();
    }

    public a(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
    }

    public final void a(a aVar) {
        this.cv = aVar;
    }

    public final void a(b bVar) {
        this.cw = bVar;
    }

    public final void an() {
        a aVar;
        if (this.cx) {
            return;
        }
        this.cx = true;
        if (d.cg(this.mAdTemplate).status == 1 || d.cg(this.mAdTemplate).status == 2 || d.cg(this.mAdTemplate).status == 3) {
            return;
        }
        b bVar = this.cw;
        if ((bVar == null || !bVar.ap()) && (aVar = this.cv) != null) {
            aVar.ao();
        }
    }
}
