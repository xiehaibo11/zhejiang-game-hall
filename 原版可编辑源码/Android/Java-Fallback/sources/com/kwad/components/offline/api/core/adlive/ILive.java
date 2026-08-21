package com.kwad.components.offline.api.core.adlive;

public interface ILive {
    com.kwad.components.offline.api.core.adlive.IAdLivePlayModule getAdLivePlayModule(com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r1, java.lang.String r2, java.lang.String r3);

    com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView getIAdLiveOfflineView(android.content.Context r1, int r2);

    com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest mIAdLiveEndRequest(java.lang.String r1);
}
