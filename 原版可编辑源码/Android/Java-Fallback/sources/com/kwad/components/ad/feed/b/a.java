package com.kwad.components.ad.feed.b;

public abstract class a extends com.kwad.components.core.widget.b<com.kwad.sdk.core.response.model.AdTemplate> {
    private boolean eg;
    protected long eh;
    protected com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener ei;


    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            com.kwad.components.ad.feed.b.a$1 r1 = new com.kwad.components.ad.feed.b.a$1
            r1.<init>(r0)
            r0.ei = r1
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.feed.b.a r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate b(com.kwad.components.ad.feed.b.a r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    public final void aY() {
            r4 = this;
            boolean r0 = r4.eg
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.eg = r0
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            long r2 = r4.getStayTime()
            com.kwad.components.ad.feed.monitor.b.a(r1, r0, r2)
            return
    }

    protected final void aZ() {
            r2 = this;
            int r0 = com.kwad.sdk.R.id.ksad_compliance_view
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.core.widget.ComplianceTextView r0 = (com.kwad.components.core.widget.ComplianceTextView) r0
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aH(r1)
            if (r1 == 0) goto L1a
            r1 = 0
            r0.setVisibility(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            return
        L1a:
            r1 = 8
            r0.setVisibility(r1)
            return
    }
}
