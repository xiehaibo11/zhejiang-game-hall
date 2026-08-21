package com.kwad.components.ad.draw.b.b;

import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private InterfaceC0094a cv;
    private b cw;
    private boolean cx = false;
    private AdTemplate mAdTemplate;

    /* JADX INFO: renamed from: com.kwad.components.ad.draw.b.b.a$a, reason: collision with other inner class name */
    public interface InterfaceC0094a {
        void ao();
    }

    public interface b {
        boolean ap();
    }

    public a(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
    }

    public final void a(InterfaceC0094a interfaceC0094a) {
        this.cv = interfaceC0094a;
    }

    public final void a(b bVar) {
        this.cw = bVar;
    }

    public final void an() {
        InterfaceC0094a interfaceC0094a;
        if (this.cx) {
            return;
        }
        this.cx = true;
        if (d.cg(this.mAdTemplate).status == 1 || d.cg(this.mAdTemplate).status == 2 || d.cg(this.mAdTemplate).status == 3) {
            return;
        }
        b bVar = this.cw;
        if ((bVar == null || !bVar.ap()) && (interfaceC0094a = this.cv) != null) {
            interfaceC0094a.ao();
        }
    }
}
