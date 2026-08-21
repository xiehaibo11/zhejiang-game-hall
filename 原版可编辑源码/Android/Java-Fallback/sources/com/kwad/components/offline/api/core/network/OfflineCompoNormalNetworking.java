package com.kwad.components.offline.api.core.network;

import com.kwad.components.offline.api.core.network.IOfflineCompoRequest;
import com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData;

public abstract class OfflineCompoNormalNetworking<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> implements com.kwad.components.offline.api.core.network.IOfflineCompoNetworking<R, T> {
    private com.kwad.components.offline.api.core.network.adapter.NormalNetworkingAdapter<R, T> mNetworking;

    public OfflineCompoNormalNetworking() {
            r1 = this;
            r1.<init>()
            com.kwad.components.offline.api.core.network.adapter.NormalNetworkingAdapter r0 = new com.kwad.components.offline.api.core.network.adapter.NormalNetworkingAdapter
            r0.<init>(r1)
            r1.mNetworking = r0
            return
    }

    @Override
    public void cancel() {
            r1 = this;
            com.kwad.components.offline.api.core.network.adapter.NormalNetworkingAdapter<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> r0 = r1.mNetworking
            r0.cancel()
            return
    }

    public abstract T createResponseData();

    @Override
    public boolean enableMonitorReport() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isPostByJson() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void onResponse(R r1, com.kwad.sdk.core.network.c r2) {
            r0 = this;
            return
    }

    @Override
    public void request(com.kwad.components.offline.api.core.network.IOfflineCompoRequestListener<R, T> r3) {
            r2 = this;
            com.kwad.components.offline.api.core.network.adapter.NormalNetworkingAdapter<R extends com.kwad.components.offline.api.core.network.IOfflineCompoRequest, T extends com.kwad.components.offline.api.core.network.model.NormalOfflineCompoResultData> r0 = r2.mNetworking
            com.kwad.components.offline.api.core.network.adapter.NormalRequestListenerAdapter r1 = new com.kwad.components.offline.api.core.network.adapter.NormalRequestListenerAdapter
            r1.<init>(r3)
            r0.request(r1)
            return
    }
}
