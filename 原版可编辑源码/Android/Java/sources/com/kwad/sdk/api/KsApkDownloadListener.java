package com.kwad.sdk.api;

import com.kwad.sdk.api.core.KsAdSdkApi;

@KsAdSdkApi
public interface KsApkDownloadListener extends KsAppDownloadListener {
    @KsAdSdkApi
    void onPaused(int i);
}
