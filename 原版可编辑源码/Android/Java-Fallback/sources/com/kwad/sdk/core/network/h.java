package com.kwad.sdk.core.network;

import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.g;

public interface h<R extends com.kwad.sdk.core.network.g, T extends com.kwad.sdk.core.network.BaseResultData> {
    void onError(R r1, int r2, java.lang.String r3);

    void onStartRequest(R r1);

    void onSuccess(R r1, T r2);
}
