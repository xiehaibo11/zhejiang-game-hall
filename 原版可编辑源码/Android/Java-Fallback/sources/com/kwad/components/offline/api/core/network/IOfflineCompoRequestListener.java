package com.kwad.components.offline.api.core.network;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.model.BaseOfflineCompoResultData;

public interface IOfflineCompoRequestListener<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.BaseOfflineCompoResultData> {
    void onError(R r1, int r2, java.lang.String r3);

    void onStartRequest(R r1);

    void onSuccess(R r1, T r2);
}
