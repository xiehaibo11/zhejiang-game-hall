package com.kwad.components.ad.draw.b.b;

public final class a {
    private com.kwad.components.ad.draw.b.b.a.a cv;
    private com.kwad.components.ad.draw.b.b.a.b cw;
    private boolean cx;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public interface a {
        void ao();
    }

    public interface b {
        boolean ap();
    }

    public a(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r1
            r1 = 0
            r0.cx = r1
            return
    }

    public final void a(com.kwad.components.ad.draw.b.b.a.a r1) {
            r0 = this;
            r0.cv = r1
            return
    }

    public final void a(com.kwad.components.ad.draw.b.b.a.b r1) {
            r0 = this;
            r0.cw = r1
            return
    }

    public final void an() {
            r2 = this;
            boolean r0 = r2.cx
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.cx = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            int r1 = r1.status
            if (r1 == r0) goto L3b
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = r0.status
            r1 = 2
            if (r0 == r1) goto L3b
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = r0.status
            r1 = 3
            if (r0 != r1) goto L29
            goto L3b
        L29:
            com.kwad.components.ad.draw.b.b.a$b r0 = r2.cw
            if (r0 == 0) goto L34
            boolean r0 = r0.ap()
            if (r0 == 0) goto L34
            return
        L34:
            com.kwad.components.ad.draw.b.b.a$a r0 = r2.cv
            if (r0 == 0) goto L3b
            r0.ao()
        L3b:
            return
    }
}
