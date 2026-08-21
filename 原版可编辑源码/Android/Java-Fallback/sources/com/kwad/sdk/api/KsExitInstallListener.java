package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsExitInstallListener {
    @com.kwad.sdk.api.core.KsAdSdkApi
    void onDialogClose();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void onInstallClick();
}
