package com.kwad.components.core.offline.api.a;

public interface a extends com.kwad.sdk.components.a {
    com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest getAdLiveEndRequest(java.lang.String r1);

    com.kwad.components.offline.api.core.adlive.IAdLivePlayModule getAdLivePlayModule(com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r1, java.lang.String r2, java.lang.String r3);

    com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView getView(android.content.Context r1, int r2);

    boolean hasLiveCompoReady();
}
