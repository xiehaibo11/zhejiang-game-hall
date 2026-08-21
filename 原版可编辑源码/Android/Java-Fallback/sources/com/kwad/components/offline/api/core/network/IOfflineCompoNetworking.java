package com.kwad.components.offline.api.core.network;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.model.BaseOfflineCompoResultData;

public interface IOfflineCompoNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.BaseOfflineCompoResultData> {
    void cancel();

    R createRequest();

    boolean enableMonitorReport();

    boolean isPostByJson();

    void onResponse(R r1, com.kwad.sdk.core.network.c r2);

    void request(com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R, T> r1);
}
