package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsAppDownloadListener {
    @com.kwad.sdk.api.core.KsAdSdkApi
    void onDownloadFailed();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void onDownloadFinished();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void onDownloadStarted();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void onIdle();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void onInstalled();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void onProgressUpdate(int r1);
}
