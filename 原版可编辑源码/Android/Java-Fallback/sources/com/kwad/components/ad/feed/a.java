package com.kwad.components.ad.feed;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.c {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Class getComponentsType() {
            r1 = this;
            java.lang.Class<com.kwad.components.ad.b.c> r0 = com.kwad.components.ad.b.c.class
            return r0
    }

    @Override
    public final void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public final void loadConfigFeedAd(com.kwad.sdk.api.KsScene r2, com.kwad.sdk.api.KsLoadManager.FeedAdListener r3) {
            r1 = this;
            r0 = 1
            com.kwad.components.ad.feed.e.a(r2, r3, r0)
            return
    }

    @Override
    public final void loadFeedAd(com.kwad.sdk.api.KsScene r2, com.kwad.sdk.api.KsLoadManager.FeedAdListener r3) {
            r1 = this;
            boolean r0 = com.kwad.components.ad.feed.a.b.aV()
            r0 = r0 ^ 1
            com.kwad.components.ad.feed.e.a(r2, r3, r0)
            return
    }
}
