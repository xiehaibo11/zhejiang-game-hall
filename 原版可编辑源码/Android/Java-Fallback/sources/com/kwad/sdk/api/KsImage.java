package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsImage {
    @com.kwad.sdk.api.core.KsAdSdkApi
    int getHeight();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getImageUrl();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getWidth();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isValid();
}
