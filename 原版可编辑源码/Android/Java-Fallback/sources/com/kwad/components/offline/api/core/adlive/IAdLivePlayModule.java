package com.kwad.components.offline.api.core.adlive;

public interface IAdLivePlayModule {
    void addInterceptor(com.kwad.components.offline.api.core.adlive.listener.OnAdLiveResumeInterceptor r1);

    com.kwad.components.offline.api.core.adlive.model.LiveShopItemInfo getCurrentShowShopItemInfo();

    long getPlayDuration();

    void onDestroy();

    void onPause();

    void onResume();

    void pause();

    void registerAdLiveCallerContextListener(com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener r1);

    void registerAdLivePlayStateListener(com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r1);

    void release();

    void removeInterceptor(com.kwad.components.offline.api.core.adlive.listener.OnAdLiveResumeInterceptor r1);

    void resume();

    void setAudioEnabled(boolean r1, boolean r2);

    void setForceGetAudioFocus(boolean r1);

    void skipToEnd();

    void unRegisterAdLiveCallerContextListener(com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener r1);

    void unRegisterAdLivePlayStateListener(com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r1);
}
