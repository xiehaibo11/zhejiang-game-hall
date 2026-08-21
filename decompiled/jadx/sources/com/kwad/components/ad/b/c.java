package com.kwad.components.ad.b;

import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

/* JADX INFO: loaded from: classes2.dex */
public interface c extends com.kwad.sdk.components.a {
    void loadConfigFeedAd(KsScene ksScene, KsLoadManager.FeedAdListener feedAdListener);

    void loadFeedAd(KsScene ksScene, KsLoadManager.FeedAdListener feedAdListener);
}
