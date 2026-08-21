package com.kwad.components.ad.feed;

import android.content.Context;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.c {
    @Override
    public final Class getComponentsType() {
        return com.kwad.components.ad.b.c.class;
    }

    @Override
    public final void init(Context context) {
    }

    @Override
    public final void loadConfigFeedAd(KsScene ksScene, KsLoadManager.FeedAdListener feedAdListener) {
        e.a(ksScene, feedAdListener, true);
    }

    @Override
    public final void loadFeedAd(KsScene ksScene, KsLoadManager.FeedAdListener feedAdListener) {
        e.a(ksScene, feedAdListener, !com.kwad.components.ad.feed.a.b.aV());
    }
}
