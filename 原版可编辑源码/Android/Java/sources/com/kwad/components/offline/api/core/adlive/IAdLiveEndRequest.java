package com.kwad.components.offline.api.core.adlive;

import java.util.Map;

public interface IAdLiveEndRequest {
    Map<String, String> getBodyMap();

    Map<String, String> getHeader();

    String getUrl();

    Map<String, String> getUrlParam();
}
