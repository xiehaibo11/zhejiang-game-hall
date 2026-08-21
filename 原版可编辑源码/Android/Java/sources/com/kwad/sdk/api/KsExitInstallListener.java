package com.kwad.sdk.api;

import com.kwad.sdk.api.core.KsAdSdkApi;

@KsAdSdkApi
public interface KsExitInstallListener {
    @KsAdSdkApi
    void onDialogClose();

    @KsAdSdkApi
    void onInstallClick();
}
