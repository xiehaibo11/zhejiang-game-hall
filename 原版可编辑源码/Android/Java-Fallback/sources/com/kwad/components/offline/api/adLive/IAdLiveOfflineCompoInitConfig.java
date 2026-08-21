package com.kwad.components.offline.api.adLive;

public interface IAdLiveOfflineCompoInitConfig extends com.kwad.components.offline.api.IOfflineCompoInitConfig {
    com.kwad.components.offline.api.core.adlive.listener.AdLiveHttpRequestListenerDelegate getAdLiveHttpRequestListenerDelegate();

    com.kwad.components.offline.api.core.soloader.ISoLoader soLoader();
}
