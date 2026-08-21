package com.kwad.sdk.service.a;

import android.content.Context;
import com.kwad.sdk.core.response.model.AdTemplate;

public interface e {
    boolean ac(AdTemplate adTemplate);

    String getApiVersion();

    int getApiVersionCode();

    String getAppId();

    String getAppName();

    Context getContext();

    boolean getIsExternal();

    String getSDKVersion();

    boolean hasInitFinish();

    boolean hasLiveCompoReady();

    boolean isPersonalRecommend();

    boolean isProgrammaticRecommend();

    com.kwad.sdk.core.response.b.e sF();
}
