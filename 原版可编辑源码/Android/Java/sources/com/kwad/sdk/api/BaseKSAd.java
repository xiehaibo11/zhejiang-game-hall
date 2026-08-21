package com.kwad.sdk.api;

import com.kwad.sdk.api.core.KsAdSdkApi;
import java.util.Map;

@KsAdSdkApi
public interface BaseKSAd {
    @KsAdSdkApi
    Map<String, Object> getMediaExtraInfo();
}
