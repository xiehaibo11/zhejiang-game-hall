package com.kwad.components.offline.api.core.network.adapter;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData;

public class NormalRequestListenerAdapter<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> implements com.kwad.sdk.core.network.h<com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter<R>, com.kwad.components.offline.api.core.network.adapter.NormalResultDataAdapter<T>> {
    private final com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R, T> mRequestListener;

    public NormalRequestListenerAdapter(com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R, T> r1) {
            r0 = this;
            r0.<init>()
            r0.mRequestListener = r1
            return
    }

    public void onError(com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter<R> r2, int r3, java.lang.String r4) {
            r1 = this;
            com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> r0 = r1.mRequestListener
            com.kwad.components.offline.api.core.network.IOfflineCompoRequest r2 = r2.getOfflineCompoRequest()
            r0.onError(r2, r3, r4)
            return
    }

    @Override
    public void onError(com.kwad.sdk.core.network.g r1, int r2, java.lang.String r3) {
            r0 = this;
            com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter r1 = (com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter) r1
            r0.onError(r1, r2, r3)
            return
    }

    public void onStartRequest(com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter<R> r2) {
            r1 = this;
            com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> r0 = r1.mRequestListener
            com.kwad.components.offline.api.core.network.IOfflineCompoRequest r2 = r2.getOfflineCompoRequest()
            r0.onStartRequest(r2)
            return
    }

    @Override
    public void onStartRequest(com.kwad.sdk.core.network.g r1) {
            r0 = this;
            com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter r1 = (com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter) r1
            r0.onStartRequest(r1)
            return
    }

    public void onSuccess(com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter<R> r2, com.kwad.components.offline.api.core.network.adapter.NormalResultDataAdapter<T> r3) {
            r1 = this;
            com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> r0 = r1.mRequestListener
            com.kwad.components.offline.api.core.network.IOfflineCompoRequest r2 = r2.getOfflineCompoRequest()
            com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData r3 = r3.getOfflineCompoResultData()
            r0.onSuccess(r2, r3)
            return
    }

    @Override
    public void onSuccess(com.kwad.sdk.core.network.g r1, com.kwad.sdk.core.network.BaseResultData r2) {
            r0 = this;
            com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter r1 = (com.kwad.components.offline.api.core.network.adapter.NormalRequestAdapter) r1
            com.kwad.components.offline.api.core.network.adapter.NormalResultDataAdapter r2 = (com.kwad.components.offline.api.core.network.adapter.NormalResultDataAdapter) r2
            r0.onSuccess(r1, r2)
            return
    }
}
